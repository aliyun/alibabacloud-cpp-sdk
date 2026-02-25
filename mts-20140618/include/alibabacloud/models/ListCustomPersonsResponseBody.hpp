// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCUSTOMPERSONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCUSTOMPERSONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class ListCustomPersonsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCustomPersonsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Categories, categories_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListCustomPersonsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Categories, categories_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListCustomPersonsResponseBody() = default ;
    ListCustomPersonsResponseBody(const ListCustomPersonsResponseBody &) = default ;
    ListCustomPersonsResponseBody(ListCustomPersonsResponseBody &&) = default ;
    ListCustomPersonsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCustomPersonsResponseBody() = default ;
    ListCustomPersonsResponseBody& operator=(const ListCustomPersonsResponseBody &) = default ;
    ListCustomPersonsResponseBody& operator=(ListCustomPersonsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Categories : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Categories& obj) { 
        DARABONBA_PTR_TO_JSON(Category, category_);
      };
      friend void from_json(const Darabonba::Json& j, Categories& obj) { 
        DARABONBA_PTR_FROM_JSON(Category, category_);
      };
      Categories() = default ;
      Categories(const Categories &) = default ;
      Categories(Categories &&) = default ;
      Categories(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Categories() = default ;
      Categories& operator=(const Categories &) = default ;
      Categories& operator=(Categories &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Category : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Category& obj) { 
          DARABONBA_PTR_TO_JSON(CategoryDescription, categoryDescription_);
          DARABONBA_PTR_TO_JSON(CategoryId, categoryId_);
          DARABONBA_PTR_TO_JSON(CategoryName, categoryName_);
          DARABONBA_PTR_TO_JSON(Persons, persons_);
        };
        friend void from_json(const Darabonba::Json& j, Category& obj) { 
          DARABONBA_PTR_FROM_JSON(CategoryDescription, categoryDescription_);
          DARABONBA_PTR_FROM_JSON(CategoryId, categoryId_);
          DARABONBA_PTR_FROM_JSON(CategoryName, categoryName_);
          DARABONBA_PTR_FROM_JSON(Persons, persons_);
        };
        Category() = default ;
        Category(const Category &) = default ;
        Category(Category &&) = default ;
        Category(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Category() = default ;
        Category& operator=(const Category &) = default ;
        Category& operator=(Category &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Persons : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Persons& obj) { 
            DARABONBA_PTR_TO_JSON(Person, person_);
          };
          friend void from_json(const Darabonba::Json& j, Persons& obj) { 
            DARABONBA_PTR_FROM_JSON(Person, person_);
          };
          Persons() = default ;
          Persons(const Persons &) = default ;
          Persons(Persons &&) = default ;
          Persons(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Persons() = default ;
          Persons& operator=(const Persons &) = default ;
          Persons& operator=(Persons &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class Person : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Person& obj) { 
              DARABONBA_PTR_TO_JSON(Faces, faces_);
              DARABONBA_PTR_TO_JSON(PersonDescription, personDescription_);
              DARABONBA_PTR_TO_JSON(PersonId, personId_);
              DARABONBA_PTR_TO_JSON(PersonName, personName_);
            };
            friend void from_json(const Darabonba::Json& j, Person& obj) { 
              DARABONBA_PTR_FROM_JSON(Faces, faces_);
              DARABONBA_PTR_FROM_JSON(PersonDescription, personDescription_);
              DARABONBA_PTR_FROM_JSON(PersonId, personId_);
              DARABONBA_PTR_FROM_JSON(PersonName, personName_);
            };
            Person() = default ;
            Person(const Person &) = default ;
            Person(Person &&) = default ;
            Person(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Person() = default ;
            Person& operator=(const Person &) = default ;
            Person& operator=(Person &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            class Faces : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const Faces& obj) { 
                DARABONBA_PTR_TO_JSON(Face, face_);
              };
              friend void from_json(const Darabonba::Json& j, Faces& obj) { 
                DARABONBA_PTR_FROM_JSON(Face, face_);
              };
              Faces() = default ;
              Faces(const Faces &) = default ;
              Faces(Faces &&) = default ;
              Faces(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~Faces() = default ;
              Faces& operator=(const Faces &) = default ;
              Faces& operator=(Faces &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              class Face : public Darabonba::Model {
              public:
                friend void to_json(Darabonba::Json& j, const Face& obj) { 
                  DARABONBA_PTR_TO_JSON(FaceId, faceId_);
                  DARABONBA_PTR_TO_JSON(ImageUrl, imageUrl_);
                };
                friend void from_json(const Darabonba::Json& j, Face& obj) { 
                  DARABONBA_PTR_FROM_JSON(FaceId, faceId_);
                  DARABONBA_PTR_FROM_JSON(ImageUrl, imageUrl_);
                };
                Face() = default ;
                Face(const Face &) = default ;
                Face(Face &&) = default ;
                Face(const Darabonba::Json & obj) { from_json(obj, *this); };
                virtual ~Face() = default ;
                Face& operator=(const Face &) = default ;
                Face& operator=(Face &&) = default ;
                virtual void validate() const override {
                };
                virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                virtual bool empty() const override { return this->faceId_ == nullptr
        && this->imageUrl_ == nullptr; };
                // faceId Field Functions 
                bool hasFaceId() const { return this->faceId_ != nullptr;};
                void deleteFaceId() { this->faceId_ = nullptr;};
                inline string getFaceId() const { DARABONBA_PTR_GET_DEFAULT(faceId_, "") };
                inline Face& setFaceId(string faceId) { DARABONBA_PTR_SET_VALUE(faceId_, faceId) };


                // imageUrl Field Functions 
                bool hasImageUrl() const { return this->imageUrl_ != nullptr;};
                void deleteImageUrl() { this->imageUrl_ = nullptr;};
                inline string getImageUrl() const { DARABONBA_PTR_GET_DEFAULT(imageUrl_, "") };
                inline Face& setImageUrl(string imageUrl) { DARABONBA_PTR_SET_VALUE(imageUrl_, imageUrl) };


              protected:
                shared_ptr<string> faceId_ {};
                shared_ptr<string> imageUrl_ {};
              };

              virtual bool empty() const override { return this->face_ == nullptr; };
              // face Field Functions 
              bool hasFace() const { return this->face_ != nullptr;};
              void deleteFace() { this->face_ = nullptr;};
              inline const vector<Faces::Face> & getFace() const { DARABONBA_PTR_GET_CONST(face_, vector<Faces::Face>) };
              inline vector<Faces::Face> getFace() { DARABONBA_PTR_GET(face_, vector<Faces::Face>) };
              inline Faces& setFace(const vector<Faces::Face> & face) { DARABONBA_PTR_SET_VALUE(face_, face) };
              inline Faces& setFace(vector<Faces::Face> && face) { DARABONBA_PTR_SET_RVALUE(face_, face) };


            protected:
              shared_ptr<vector<Faces::Face>> face_ {};
            };

            virtual bool empty() const override { return this->faces_ == nullptr
        && this->personDescription_ == nullptr && this->personId_ == nullptr && this->personName_ == nullptr; };
            // faces Field Functions 
            bool hasFaces() const { return this->faces_ != nullptr;};
            void deleteFaces() { this->faces_ = nullptr;};
            inline const Person::Faces & getFaces() const { DARABONBA_PTR_GET_CONST(faces_, Person::Faces) };
            inline Person::Faces getFaces() { DARABONBA_PTR_GET(faces_, Person::Faces) };
            inline Person& setFaces(const Person::Faces & faces) { DARABONBA_PTR_SET_VALUE(faces_, faces) };
            inline Person& setFaces(Person::Faces && faces) { DARABONBA_PTR_SET_RVALUE(faces_, faces) };


            // personDescription Field Functions 
            bool hasPersonDescription() const { return this->personDescription_ != nullptr;};
            void deletePersonDescription() { this->personDescription_ = nullptr;};
            inline string getPersonDescription() const { DARABONBA_PTR_GET_DEFAULT(personDescription_, "") };
            inline Person& setPersonDescription(string personDescription) { DARABONBA_PTR_SET_VALUE(personDescription_, personDescription) };


            // personId Field Functions 
            bool hasPersonId() const { return this->personId_ != nullptr;};
            void deletePersonId() { this->personId_ = nullptr;};
            inline string getPersonId() const { DARABONBA_PTR_GET_DEFAULT(personId_, "") };
            inline Person& setPersonId(string personId) { DARABONBA_PTR_SET_VALUE(personId_, personId) };


            // personName Field Functions 
            bool hasPersonName() const { return this->personName_ != nullptr;};
            void deletePersonName() { this->personName_ = nullptr;};
            inline string getPersonName() const { DARABONBA_PTR_GET_DEFAULT(personName_, "") };
            inline Person& setPersonName(string personName) { DARABONBA_PTR_SET_VALUE(personName_, personName) };


          protected:
            shared_ptr<Person::Faces> faces_ {};
            shared_ptr<string> personDescription_ {};
            shared_ptr<string> personId_ {};
            shared_ptr<string> personName_ {};
          };

          virtual bool empty() const override { return this->person_ == nullptr; };
          // person Field Functions 
          bool hasPerson() const { return this->person_ != nullptr;};
          void deletePerson() { this->person_ = nullptr;};
          inline const vector<Persons::Person> & getPerson() const { DARABONBA_PTR_GET_CONST(person_, vector<Persons::Person>) };
          inline vector<Persons::Person> getPerson() { DARABONBA_PTR_GET(person_, vector<Persons::Person>) };
          inline Persons& setPerson(const vector<Persons::Person> & person) { DARABONBA_PTR_SET_VALUE(person_, person) };
          inline Persons& setPerson(vector<Persons::Person> && person) { DARABONBA_PTR_SET_RVALUE(person_, person) };


        protected:
          shared_ptr<vector<Persons::Person>> person_ {};
        };

        virtual bool empty() const override { return this->categoryDescription_ == nullptr
        && this->categoryId_ == nullptr && this->categoryName_ == nullptr && this->persons_ == nullptr; };
        // categoryDescription Field Functions 
        bool hasCategoryDescription() const { return this->categoryDescription_ != nullptr;};
        void deleteCategoryDescription() { this->categoryDescription_ = nullptr;};
        inline string getCategoryDescription() const { DARABONBA_PTR_GET_DEFAULT(categoryDescription_, "") };
        inline Category& setCategoryDescription(string categoryDescription) { DARABONBA_PTR_SET_VALUE(categoryDescription_, categoryDescription) };


        // categoryId Field Functions 
        bool hasCategoryId() const { return this->categoryId_ != nullptr;};
        void deleteCategoryId() { this->categoryId_ = nullptr;};
        inline string getCategoryId() const { DARABONBA_PTR_GET_DEFAULT(categoryId_, "") };
        inline Category& setCategoryId(string categoryId) { DARABONBA_PTR_SET_VALUE(categoryId_, categoryId) };


        // categoryName Field Functions 
        bool hasCategoryName() const { return this->categoryName_ != nullptr;};
        void deleteCategoryName() { this->categoryName_ = nullptr;};
        inline string getCategoryName() const { DARABONBA_PTR_GET_DEFAULT(categoryName_, "") };
        inline Category& setCategoryName(string categoryName) { DARABONBA_PTR_SET_VALUE(categoryName_, categoryName) };


        // persons Field Functions 
        bool hasPersons() const { return this->persons_ != nullptr;};
        void deletePersons() { this->persons_ = nullptr;};
        inline const Category::Persons & getPersons() const { DARABONBA_PTR_GET_CONST(persons_, Category::Persons) };
        inline Category::Persons getPersons() { DARABONBA_PTR_GET(persons_, Category::Persons) };
        inline Category& setPersons(const Category::Persons & persons) { DARABONBA_PTR_SET_VALUE(persons_, persons) };
        inline Category& setPersons(Category::Persons && persons) { DARABONBA_PTR_SET_RVALUE(persons_, persons) };


      protected:
        shared_ptr<string> categoryDescription_ {};
        shared_ptr<string> categoryId_ {};
        shared_ptr<string> categoryName_ {};
        shared_ptr<Category::Persons> persons_ {};
      };

      virtual bool empty() const override { return this->category_ == nullptr; };
      // category Field Functions 
      bool hasCategory() const { return this->category_ != nullptr;};
      void deleteCategory() { this->category_ = nullptr;};
      inline const vector<Categories::Category> & getCategory() const { DARABONBA_PTR_GET_CONST(category_, vector<Categories::Category>) };
      inline vector<Categories::Category> getCategory() { DARABONBA_PTR_GET(category_, vector<Categories::Category>) };
      inline Categories& setCategory(const vector<Categories::Category> & category) { DARABONBA_PTR_SET_VALUE(category_, category) };
      inline Categories& setCategory(vector<Categories::Category> && category) { DARABONBA_PTR_SET_RVALUE(category_, category) };


    protected:
      shared_ptr<vector<Categories::Category>> category_ {};
    };

    virtual bool empty() const override { return this->categories_ == nullptr
        && this->requestId_ == nullptr; };
    // categories Field Functions 
    bool hasCategories() const { return this->categories_ != nullptr;};
    void deleteCategories() { this->categories_ = nullptr;};
    inline const ListCustomPersonsResponseBody::Categories & getCategories() const { DARABONBA_PTR_GET_CONST(categories_, ListCustomPersonsResponseBody::Categories) };
    inline ListCustomPersonsResponseBody::Categories getCategories() { DARABONBA_PTR_GET(categories_, ListCustomPersonsResponseBody::Categories) };
    inline ListCustomPersonsResponseBody& setCategories(const ListCustomPersonsResponseBody::Categories & categories) { DARABONBA_PTR_SET_VALUE(categories_, categories) };
    inline ListCustomPersonsResponseBody& setCategories(ListCustomPersonsResponseBody::Categories && categories) { DARABONBA_PTR_SET_RVALUE(categories_, categories) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListCustomPersonsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<ListCustomPersonsResponseBody::Categories> categories_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
