// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPROJECTWORKITEMTYPESRESPONSEBODYWORKITEMTYPES_HPP_
#define ALIBABACLOUD_MODELS_LISTPROJECTWORKITEMTYPESRESPONSEBODYWORKITEMTYPES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class ListProjectWorkitemTypesResponseBodyWorkitemTypes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListProjectWorkitemTypesResponseBodyWorkitemTypes& obj) { 
      DARABONBA_PTR_TO_JSON(addUser, addUser_);
      DARABONBA_PTR_TO_JSON(categoryIdentifier, categoryIdentifier_);
      DARABONBA_PTR_TO_JSON(creator, creator_);
      DARABONBA_PTR_TO_JSON(defaultType, defaultType_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(enable, enable_);
      DARABONBA_PTR_TO_JSON(gmtAdd, gmtAdd_);
      DARABONBA_PTR_TO_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(identifier, identifier_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(nameEn, nameEn_);
      DARABONBA_PTR_TO_JSON(systemDefault, systemDefault_);
    };
    friend void from_json(const Darabonba::Json& j, ListProjectWorkitemTypesResponseBodyWorkitemTypes& obj) { 
      DARABONBA_PTR_FROM_JSON(addUser, addUser_);
      DARABONBA_PTR_FROM_JSON(categoryIdentifier, categoryIdentifier_);
      DARABONBA_PTR_FROM_JSON(creator, creator_);
      DARABONBA_PTR_FROM_JSON(defaultType, defaultType_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(enable, enable_);
      DARABONBA_PTR_FROM_JSON(gmtAdd, gmtAdd_);
      DARABONBA_PTR_FROM_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(identifier, identifier_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(nameEn, nameEn_);
      DARABONBA_PTR_FROM_JSON(systemDefault, systemDefault_);
    };
    ListProjectWorkitemTypesResponseBodyWorkitemTypes() = default ;
    ListProjectWorkitemTypesResponseBodyWorkitemTypes(const ListProjectWorkitemTypesResponseBodyWorkitemTypes &) = default ;
    ListProjectWorkitemTypesResponseBodyWorkitemTypes(ListProjectWorkitemTypesResponseBodyWorkitemTypes &&) = default ;
    ListProjectWorkitemTypesResponseBodyWorkitemTypes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListProjectWorkitemTypesResponseBodyWorkitemTypes() = default ;
    ListProjectWorkitemTypesResponseBodyWorkitemTypes& operator=(const ListProjectWorkitemTypesResponseBodyWorkitemTypes &) = default ;
    ListProjectWorkitemTypesResponseBodyWorkitemTypes& operator=(ListProjectWorkitemTypesResponseBodyWorkitemTypes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->addUser_ == nullptr
        && return this->categoryIdentifier_ == nullptr && return this->creator_ == nullptr && return this->defaultType_ == nullptr && return this->description_ == nullptr && return this->enable_ == nullptr
        && return this->gmtAdd_ == nullptr && return this->gmtCreate_ == nullptr && return this->identifier_ == nullptr && return this->name_ == nullptr && return this->nameEn_ == nullptr
        && return this->systemDefault_ == nullptr; };
    // addUser Field Functions 
    bool hasAddUser() const { return this->addUser_ != nullptr;};
    void deleteAddUser() { this->addUser_ = nullptr;};
    inline string addUser() const { DARABONBA_PTR_GET_DEFAULT(addUser_, "") };
    inline ListProjectWorkitemTypesResponseBodyWorkitemTypes& setAddUser(string addUser) { DARABONBA_PTR_SET_VALUE(addUser_, addUser) };


    // categoryIdentifier Field Functions 
    bool hasCategoryIdentifier() const { return this->categoryIdentifier_ != nullptr;};
    void deleteCategoryIdentifier() { this->categoryIdentifier_ = nullptr;};
    inline string categoryIdentifier() const { DARABONBA_PTR_GET_DEFAULT(categoryIdentifier_, "") };
    inline ListProjectWorkitemTypesResponseBodyWorkitemTypes& setCategoryIdentifier(string categoryIdentifier) { DARABONBA_PTR_SET_VALUE(categoryIdentifier_, categoryIdentifier) };


    // creator Field Functions 
    bool hasCreator() const { return this->creator_ != nullptr;};
    void deleteCreator() { this->creator_ = nullptr;};
    inline string creator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
    inline ListProjectWorkitemTypesResponseBodyWorkitemTypes& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


    // defaultType Field Functions 
    bool hasDefaultType() const { return this->defaultType_ != nullptr;};
    void deleteDefaultType() { this->defaultType_ = nullptr;};
    inline bool defaultType() const { DARABONBA_PTR_GET_DEFAULT(defaultType_, false) };
    inline ListProjectWorkitemTypesResponseBodyWorkitemTypes& setDefaultType(bool defaultType) { DARABONBA_PTR_SET_VALUE(defaultType_, defaultType) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListProjectWorkitemTypesResponseBodyWorkitemTypes& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline bool enable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
    inline ListProjectWorkitemTypesResponseBodyWorkitemTypes& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


    // gmtAdd Field Functions 
    bool hasGmtAdd() const { return this->gmtAdd_ != nullptr;};
    void deleteGmtAdd() { this->gmtAdd_ = nullptr;};
    inline int64_t gmtAdd() const { DARABONBA_PTR_GET_DEFAULT(gmtAdd_, 0L) };
    inline ListProjectWorkitemTypesResponseBodyWorkitemTypes& setGmtAdd(int64_t gmtAdd) { DARABONBA_PTR_SET_VALUE(gmtAdd_, gmtAdd) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline int64_t gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0L) };
    inline ListProjectWorkitemTypesResponseBodyWorkitemTypes& setGmtCreate(int64_t gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // identifier Field Functions 
    bool hasIdentifier() const { return this->identifier_ != nullptr;};
    void deleteIdentifier() { this->identifier_ = nullptr;};
    inline string identifier() const { DARABONBA_PTR_GET_DEFAULT(identifier_, "") };
    inline ListProjectWorkitemTypesResponseBodyWorkitemTypes& setIdentifier(string identifier) { DARABONBA_PTR_SET_VALUE(identifier_, identifier) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListProjectWorkitemTypesResponseBodyWorkitemTypes& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // nameEn Field Functions 
    bool hasNameEn() const { return this->nameEn_ != nullptr;};
    void deleteNameEn() { this->nameEn_ = nullptr;};
    inline string nameEn() const { DARABONBA_PTR_GET_DEFAULT(nameEn_, "") };
    inline ListProjectWorkitemTypesResponseBodyWorkitemTypes& setNameEn(string nameEn) { DARABONBA_PTR_SET_VALUE(nameEn_, nameEn) };


    // systemDefault Field Functions 
    bool hasSystemDefault() const { return this->systemDefault_ != nullptr;};
    void deleteSystemDefault() { this->systemDefault_ = nullptr;};
    inline bool systemDefault() const { DARABONBA_PTR_GET_DEFAULT(systemDefault_, false) };
    inline ListProjectWorkitemTypesResponseBodyWorkitemTypes& setSystemDefault(bool systemDefault) { DARABONBA_PTR_SET_VALUE(systemDefault_, systemDefault) };


  protected:
    std::shared_ptr<string> addUser_ = nullptr;
    std::shared_ptr<string> categoryIdentifier_ = nullptr;
    std::shared_ptr<string> creator_ = nullptr;
    std::shared_ptr<bool> defaultType_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<bool> enable_ = nullptr;
    std::shared_ptr<int64_t> gmtAdd_ = nullptr;
    std::shared_ptr<int64_t> gmtCreate_ = nullptr;
    std::shared_ptr<string> identifier_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> nameEn_ = nullptr;
    std::shared_ptr<bool> systemDefault_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
