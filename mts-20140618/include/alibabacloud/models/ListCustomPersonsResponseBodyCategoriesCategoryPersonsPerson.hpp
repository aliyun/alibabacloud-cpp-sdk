// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCUSTOMPERSONSRESPONSEBODYCATEGORIESCATEGORYPERSONSPERSON_HPP_
#define ALIBABACLOUD_MODELS_LISTCUSTOMPERSONSRESPONSEBODYCATEGORIESCATEGORYPERSONSPERSON_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListCustomPersonsResponseBodyCategoriesCategoryPersonsPersonFaces.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class ListCustomPersonsResponseBodyCategoriesCategoryPersonsPerson : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCustomPersonsResponseBodyCategoriesCategoryPersonsPerson& obj) { 
      DARABONBA_PTR_TO_JSON(Faces, faces_);
      DARABONBA_PTR_TO_JSON(PersonDescription, personDescription_);
      DARABONBA_PTR_TO_JSON(PersonId, personId_);
      DARABONBA_PTR_TO_JSON(PersonName, personName_);
    };
    friend void from_json(const Darabonba::Json& j, ListCustomPersonsResponseBodyCategoriesCategoryPersonsPerson& obj) { 
      DARABONBA_PTR_FROM_JSON(Faces, faces_);
      DARABONBA_PTR_FROM_JSON(PersonDescription, personDescription_);
      DARABONBA_PTR_FROM_JSON(PersonId, personId_);
      DARABONBA_PTR_FROM_JSON(PersonName, personName_);
    };
    ListCustomPersonsResponseBodyCategoriesCategoryPersonsPerson() = default ;
    ListCustomPersonsResponseBodyCategoriesCategoryPersonsPerson(const ListCustomPersonsResponseBodyCategoriesCategoryPersonsPerson &) = default ;
    ListCustomPersonsResponseBodyCategoriesCategoryPersonsPerson(ListCustomPersonsResponseBodyCategoriesCategoryPersonsPerson &&) = default ;
    ListCustomPersonsResponseBodyCategoriesCategoryPersonsPerson(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCustomPersonsResponseBodyCategoriesCategoryPersonsPerson() = default ;
    ListCustomPersonsResponseBodyCategoriesCategoryPersonsPerson& operator=(const ListCustomPersonsResponseBodyCategoriesCategoryPersonsPerson &) = default ;
    ListCustomPersonsResponseBodyCategoriesCategoryPersonsPerson& operator=(ListCustomPersonsResponseBodyCategoriesCategoryPersonsPerson &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->faces_ == nullptr
        && return this->personDescription_ == nullptr && return this->personId_ == nullptr && return this->personName_ == nullptr; };
    // faces Field Functions 
    bool hasFaces() const { return this->faces_ != nullptr;};
    void deleteFaces() { this->faces_ = nullptr;};
    inline const Models::ListCustomPersonsResponseBodyCategoriesCategoryPersonsPersonFaces & faces() const { DARABONBA_PTR_GET_CONST(faces_, Models::ListCustomPersonsResponseBodyCategoriesCategoryPersonsPersonFaces) };
    inline Models::ListCustomPersonsResponseBodyCategoriesCategoryPersonsPersonFaces faces() { DARABONBA_PTR_GET(faces_, Models::ListCustomPersonsResponseBodyCategoriesCategoryPersonsPersonFaces) };
    inline ListCustomPersonsResponseBodyCategoriesCategoryPersonsPerson& setFaces(const Models::ListCustomPersonsResponseBodyCategoriesCategoryPersonsPersonFaces & faces) { DARABONBA_PTR_SET_VALUE(faces_, faces) };
    inline ListCustomPersonsResponseBodyCategoriesCategoryPersonsPerson& setFaces(Models::ListCustomPersonsResponseBodyCategoriesCategoryPersonsPersonFaces && faces) { DARABONBA_PTR_SET_RVALUE(faces_, faces) };


    // personDescription Field Functions 
    bool hasPersonDescription() const { return this->personDescription_ != nullptr;};
    void deletePersonDescription() { this->personDescription_ = nullptr;};
    inline string personDescription() const { DARABONBA_PTR_GET_DEFAULT(personDescription_, "") };
    inline ListCustomPersonsResponseBodyCategoriesCategoryPersonsPerson& setPersonDescription(string personDescription) { DARABONBA_PTR_SET_VALUE(personDescription_, personDescription) };


    // personId Field Functions 
    bool hasPersonId() const { return this->personId_ != nullptr;};
    void deletePersonId() { this->personId_ = nullptr;};
    inline string personId() const { DARABONBA_PTR_GET_DEFAULT(personId_, "") };
    inline ListCustomPersonsResponseBodyCategoriesCategoryPersonsPerson& setPersonId(string personId) { DARABONBA_PTR_SET_VALUE(personId_, personId) };


    // personName Field Functions 
    bool hasPersonName() const { return this->personName_ != nullptr;};
    void deletePersonName() { this->personName_ = nullptr;};
    inline string personName() const { DARABONBA_PTR_GET_DEFAULT(personName_, "") };
    inline ListCustomPersonsResponseBodyCategoriesCategoryPersonsPerson& setPersonName(string personName) { DARABONBA_PTR_SET_VALUE(personName_, personName) };


  protected:
    // The array of the faces.
    std::shared_ptr<Models::ListCustomPersonsResponseBodyCategoriesCategoryPersonsPersonFaces> faces_ = nullptr;
    // The description of the figure.
    std::shared_ptr<string> personDescription_ = nullptr;
    // The ID of the figure.
    std::shared_ptr<string> personId_ = nullptr;
    // The name of the figure.
    std::shared_ptr<string> personName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
