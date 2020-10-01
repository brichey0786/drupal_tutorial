# Drupal 7 Tutorial - Schools
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

## 1. Drupal Installation
  1. Choose `Standard`, and click `Save and Continue`
  1. Click `Save and Continue`
  1. Choose `MySQL, MariaDB, or equivalent`
  1. Fill out:
      * Database Name: `isafe`
      * Database username: `root`
      * Database password: `isafe`
  1. Expand the “Advanced Options”, change `Database host` to be `d7mysql`, and click `Save and Continue`
  1. Fill out:
      * Site name: `ISAFE`
      * Site e-mail address: `YOUR_EMAIL_ADDRESS`
      * Username: `YOUR_USER_AMIN`
      * E-mail address: `YOUR_EMAIL_ADDRESS`
      * Password: `YOUR_PASSWORD`
      * Update Notification: UNCHECK all
  1. `Click Save and Continue`
  1. Ignore the password leakage alert (since we are in localhost) and click `Visit your new site`
  1. You should be redirected to the home page with the title “Welcome to ISAFE”. Note that at the top we have the admin menus starting with “Dashboard”, “Content”, etc.
  1. You can also log out the system and try login using the email and password combination in step v.
  1. Welcome to Drupal :)

## 2. Register a menu
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
  * Drive: `General/Overview of the Drupal Menu System`

## 3. Render a list
  * Make sure you pull tag v1.0.3 from this repository, which contains our updated docker composer configuration files.
  * Make sure to run `docker-compose up -d` again. You should be able to visit the same URL and see our item list.

## 4. Add links to other pages

## 5. Build a form

## 6. Create the database schema

## 7. Handle form validation and submission

## 8. Retrieve records from database

## 9. `hook_data` and Views

## 10. Entity and Views

## 11. CRUD operations on Entities

## 12. Styling

## 13. Preact

## 14. Summary


# Misc

* [Named volumne mapped to host](https://stackoverflow.com/questions/36387032/how-to-set-a-path-on-host-for-a-named-volume-in-docker-compose-yml/49920624#49920624)


* [WSL2 and docker volumes](https://stackoverflow.com/questions/43181654/locating-data-volumes-in-docker-desktop-windows)



* [Remove anonymous containers and volumes](https://stackoverflow.com/questions/34658836/docker-is-in-volume-in-use-but-there-arent-any-docker-containers)


* [Docker nested volume mounting](https://github.com/docker/for-win/issues/5540)

* Clean up (start everything over)

    `docker-compose kill`

    `docker-compose down -v --rmi all --remove-orphans`

* [Disable Zend OpCache](https://www.woktron.com/secure/knowledgebase/261/Disable-Opcache-for-PHP.html)