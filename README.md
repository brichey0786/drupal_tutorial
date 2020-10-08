# Drupal 7 Tutorial - Schools
## Update
If you pulled the latest branch, you should see the following lines in `docker-compose.yml`
```
d7:
  image: drupal:7.73-apache
  container_name: d7
  ports:
    - 8889:80
  depends_on:
    - d7mysql
  volumes:
    - drupal-data:/var/www/html
    - ./modules:/var/www/html/sites/all/modules:consistent
    # - ./.htaccess:/var/www/html/.htaccess
    # - ./settings.php:/var/www/html/sites/default/settings.php
    # - ./entity.inc:/var/www/html/includes/entity.inc
  restart: always
```

Continue to installation part. After that, uncomment the commented lines and run the following
commands in sequence

```bash
docker-compose kill
docker-compose up -d
```
## Overview
In this tutorial, we will work on a sample project that displays a list of schools and allows up to
add, update, and delete schools.

We first go through the installation of Drupal. After that, we will learn
about how to register pages in Drupal so that they can be accessed by their respective URLs. The
concepts of form and form state are covered next, to be able to handle form submit that
connect front-end with back-end. We will also learn the View API, Entity API in Drupal after going
through Form API. Finally, we will shed lights on theming and page layout overrides. Throughout the
tutorial there the concept of hooks will be mentioned from time to time.

## Technologies/APIs
* `menu_hook`
* page callback functions
* render(able) arrays
* Form API
    * form and form state
    * form submission handler
    * form callback
* Entity API
* Views
* page templates
* `hook_preprocess_page`
* CSS, SCSS
* JavaScript, jQuery
* HTML5
    * theme debugging
    * developer console
* Preact
    * custom elements
    * Material UI

## Supplemental Materials

* The Figma prototype in the following link will give us an exemplary look of how our project will
  look like in the end
    * https://www.figma.com/proto/EiuDQUYlZCc4n11mf7Rmrw/Drupal-CRUD-API?node-id=1%3A98&scaling=min-zoom

* There will be Loom video tutorials that step you through the project. Each video will correspond
  to a tag in the project starting from v1.0.1

* There will be a complementary but comprehensive tutorials credited to Drupalize.me shared in
  Google Drive. They act as references, and will be referred to along this project as `Drive: Topic/Content`.

## 1. Drupal Installation (v1.0.0)
  1. Choose `Standard`, and click `Save and Continue`
  2. Click `Save and Continue`
  3. Choose `MySQL, MariaDB, or equivalent`
  4. Fill out:
      * Database Name: `isafe`
      * Database username: `root`
      * Database password: `isafe`
  5. Expand the “Advanced Options”, change `Database host` to be `d7mysql`, and click `Save and Continue`
  6. Fill out:
      * Site name: `ISAFE`
      * Site e-mail address: `YOUR_EMAIL_ADDRESS`
      * Username: `YOUR_USER_AMIN`
      * E-mail address: `YOUR_EMAIL_ADDRESS`
      * Password: `YOUR_PASSWORD`
      * Update Notification: UNCHECK all
  7. `Click Save and Continue`
  8. Ignore the password leakage alert (since we are in localhost) and click `Visit your new site`
  9. You should be redirected to the home page with the title “Welcome to ISAFE”. Note that at the top we have the admin menus starting with “Dashboard”, “Content”, etc.
  10. You can also log out the system and try login using the email and password combination in step v.
  11. Welcome to Drupal :)
  * **Drive**: `General/Introduction to Module Development for Drupal 7`
  * **Drive**: `Coding-Standard/*`

## 2. Register a menu (v1.0.2)
  * VSCode Extensions (Recommended)
    1. PHP IntelliSense
    2. PHP Intelephense
    3. Drupal-7-Snippets
    4. Drupal-7-Hooks-Snippets
    5. Sass/Less/Scss/Typescript/Jade/Pug Compile Hero Pro
    6. JS Refactor
  * `modules/custom/schools`
      * `schools.info`: meta information about a module
      * `schools.module`: module content
  * Note: it may take some time for our Drupal site to refresh its registry to reflect the changes we make in the menu hook
  * **Drive**: `General/Anatomy of a Drupal Module`
  * **Drive**: `General/The Event-Driven Hook System`
  * **Drive**: `General/Tips for Writing Secure Code`
  * **Drive**: `General/Overview of the Drupal Menu System`

## 3. Render a list (v1.0.3)
  * Make sure you pull tag v1.0.3 from this repository, which contains our updated docker composer configuration files.
  * Make sure to run `docker-compose up -d` again. You should be able to visit the same URL and see our item list.
  * **Drive**: `General/Helpful Tools for Module Development`
  * **Drive**: `General/An Overview of the Devel Module`
  * **Drive**: `General/Integrating with the Theme System`

## 4. Add links to other pages (v1.0.4)
  * anchor tag
  * theme_link
  * `l()`
  * **Drive**: `General/Drupal API Documentation`
  * **Drive**: `General/Using the Drupal Render API`
  * **Drive**: `General/Attachments and Caching with the Render API`

## 5. Build a form (v1.0.5)
  * [Form API](https://api.drupal.org/api/drupal/developer%21topics%21forms_api_reference.html/7.x)
  * `{YOUR_FORM_NAME}_form($form, &$form_state)`
  * `{YOUR_FORM_NAME}_form_validate($form, &$form_state)`
  * `{YOUR_FORM_NAME}_form_submit($form, &$form_state)`
  * **Drive**: `General/Using URL Arguments in Page Callback Functions`
  * **Drive**: `General/An Overview of the Form API`

## 6. Create the database schema (v1.0.6)
1. [Install compass](http://compass-style.org/install/), add mock data, and style the page
2. Create table and replace mock data
* **Drive**: `General/An Overview of the Database Layer in Drupal 7`
* **Drive**: `General/Querying the Database with db_select()`
* **Drive**: `General/Querying the Database with Query Methods`

## 7. Handle form validation and submission (v1.0.7)
* Note that we should get the input values from `$form_state['values']`
* Please do not trust any user input
* **Drive**: `General/Creating, Submitting and Validating a Simple Form`
* **Drive**: `General/Organizing Collections of Form Elements`
* **Drive**: `General/Altering Forms with hook_form_alter()`
* **Drive**: `General/Altering Specific Forms and Customizing Validation`
* **Drive**: `General/Creating a Configuration Settings Form for Your Module`

## 8. `hook_theme`, CRUD and Styling Wrap-up (v1.0.8)
1. Theme hook
2. Important notes for developers
3. More styling
4. Override page template
5. Fetch individual school from database
6. Form with different "modes"
    * You can try to style the form to exactly match the prototype.
    * The final styling is not included in the video but in tag v1.0.8.
* **Drive**: `General/Altering the Page Array`

## 9. `hook_data` and Views (v1.0.9)
* **Drive**: `Views/*`

## 10. Entity and Views (v1.0.10)

  * Note: Applied this [patch #16 + #49](https://www.drupal.org/project/entity/issues/1803048#comment-13101198) in the `entity.controller.inc` and `includes/entity.inc` to suppress the error on array_flip
  * **Drive**: `General/Adding Contextual Menu Links and Using Menu Autoloaders`
  * **Drive**: `General/Adding a Table to the Database`
  * **Drive**: `Entity/*`

## 11. CRUD operations on Entities (v1.0.11)
* Extra: how to define an Entity controller 
* **Drive**: `General/Altering the Database`

## 12. Attach JavaScript (v1.0.12)
* Attach JS to form
* Add JS globally

## 13. Preact (v1.0.13)
* [Starter Template](https://github.com/qidian99/preact-custom-element)
* Install preact-cli globally by calling `npm i -g preact-cli`
* Install browserify globally by calling `npm i -g browserify`

## 14. Summary
* We have learned about
    * `menu_hook`
    * page callback functions
    * render(able) arrays
    * Form API
        * form and form state
        * form submission handler
        * form callback
    * Entity API
    * Views
    * page templates
    * `hook_preprocess_page`
    * CSS, SCSS
    * JavaScript, jQuery
    * HTML5
        * theme debugging
        * developer console
    * Preact
        * custom elements
* (More exercise) **Drive**: `Excercise-Movie/*`: 


# Misc
* [Named volumne mapped to host](https://stackoverflow.com/questions/36387032/how-to-set-a-path-on-host-for-a-named-volume-in-docker-compose-yml/49920624#49920624)


* [WSL2 and docker volumes](https://stackoverflow.com/questions/43181654/locating-data-volumes-in-docker-desktop-windows)



* [Remove anonymous containers and volumes](https://stackoverflow.com/questions/34658836/docker-is-in-volume-in-use-but-there-arent-any-docker-containers)


* [Docker nested volume mounting](https://github.com/docker/for-win/issues/5540)

* Clean up (start everything over)

    `docker-compose kill`

    `docker-compose down -v --rmi all --remove-orphans`

* [Disable Zend
  OpCache](https://www.woktron.com/secure/knowledgebase/261/Disable-Opcache-for-PHP.html)
