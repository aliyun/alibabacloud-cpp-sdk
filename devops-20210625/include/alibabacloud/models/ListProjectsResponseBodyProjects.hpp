// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPROJECTSRESPONSEBODYPROJECTS_HPP_
#define ALIBABACLOUD_MODELS_LISTPROJECTSRESPONSEBODYPROJECTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class ListProjectsResponseBodyProjects : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListProjectsResponseBodyProjects& obj) { 
      DARABONBA_PTR_TO_JSON(categoryIdentifier, categoryIdentifier_);
      DARABONBA_PTR_TO_JSON(creator, creator_);
      DARABONBA_PTR_TO_JSON(customCode, customCode_);
      DARABONBA_PTR_TO_JSON(deleteTime, deleteTime_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(icon, icon_);
      DARABONBA_PTR_TO_JSON(identifier, identifier_);
      DARABONBA_PTR_TO_JSON(logicalStatus, logicalStatus_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(scope, scope_);
      DARABONBA_PTR_TO_JSON(statusStageIdentifier, statusStageIdentifier_);
      DARABONBA_PTR_TO_JSON(typeIdentifier, typeIdentifier_);
    };
    friend void from_json(const Darabonba::Json& j, ListProjectsResponseBodyProjects& obj) { 
      DARABONBA_PTR_FROM_JSON(categoryIdentifier, categoryIdentifier_);
      DARABONBA_PTR_FROM_JSON(creator, creator_);
      DARABONBA_PTR_FROM_JSON(customCode, customCode_);
      DARABONBA_PTR_FROM_JSON(deleteTime, deleteTime_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(icon, icon_);
      DARABONBA_PTR_FROM_JSON(identifier, identifier_);
      DARABONBA_PTR_FROM_JSON(logicalStatus, logicalStatus_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(scope, scope_);
      DARABONBA_PTR_FROM_JSON(statusStageIdentifier, statusStageIdentifier_);
      DARABONBA_PTR_FROM_JSON(typeIdentifier, typeIdentifier_);
    };
    ListProjectsResponseBodyProjects() = default ;
    ListProjectsResponseBodyProjects(const ListProjectsResponseBodyProjects &) = default ;
    ListProjectsResponseBodyProjects(ListProjectsResponseBodyProjects &&) = default ;
    ListProjectsResponseBodyProjects(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListProjectsResponseBodyProjects() = default ;
    ListProjectsResponseBodyProjects& operator=(const ListProjectsResponseBodyProjects &) = default ;
    ListProjectsResponseBodyProjects& operator=(ListProjectsResponseBodyProjects &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->categoryIdentifier_ == nullptr
        && return this->creator_ == nullptr && return this->customCode_ == nullptr && return this->deleteTime_ == nullptr && return this->description_ == nullptr && return this->gmtCreate_ == nullptr
        && return this->icon_ == nullptr && return this->identifier_ == nullptr && return this->logicalStatus_ == nullptr && return this->name_ == nullptr && return this->scope_ == nullptr
        && return this->statusStageIdentifier_ == nullptr && return this->typeIdentifier_ == nullptr; };
    // categoryIdentifier Field Functions 
    bool hasCategoryIdentifier() const { return this->categoryIdentifier_ != nullptr;};
    void deleteCategoryIdentifier() { this->categoryIdentifier_ = nullptr;};
    inline string categoryIdentifier() const { DARABONBA_PTR_GET_DEFAULT(categoryIdentifier_, "") };
    inline ListProjectsResponseBodyProjects& setCategoryIdentifier(string categoryIdentifier) { DARABONBA_PTR_SET_VALUE(categoryIdentifier_, categoryIdentifier) };


    // creator Field Functions 
    bool hasCreator() const { return this->creator_ != nullptr;};
    void deleteCreator() { this->creator_ = nullptr;};
    inline string creator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
    inline ListProjectsResponseBodyProjects& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


    // customCode Field Functions 
    bool hasCustomCode() const { return this->customCode_ != nullptr;};
    void deleteCustomCode() { this->customCode_ = nullptr;};
    inline string customCode() const { DARABONBA_PTR_GET_DEFAULT(customCode_, "") };
    inline ListProjectsResponseBodyProjects& setCustomCode(string customCode) { DARABONBA_PTR_SET_VALUE(customCode_, customCode) };


    // deleteTime Field Functions 
    bool hasDeleteTime() const { return this->deleteTime_ != nullptr;};
    void deleteDeleteTime() { this->deleteTime_ = nullptr;};
    inline int64_t deleteTime() const { DARABONBA_PTR_GET_DEFAULT(deleteTime_, 0L) };
    inline ListProjectsResponseBodyProjects& setDeleteTime(int64_t deleteTime) { DARABONBA_PTR_SET_VALUE(deleteTime_, deleteTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListProjectsResponseBodyProjects& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline int64_t gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0L) };
    inline ListProjectsResponseBodyProjects& setGmtCreate(int64_t gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // icon Field Functions 
    bool hasIcon() const { return this->icon_ != nullptr;};
    void deleteIcon() { this->icon_ = nullptr;};
    inline string icon() const { DARABONBA_PTR_GET_DEFAULT(icon_, "") };
    inline ListProjectsResponseBodyProjects& setIcon(string icon) { DARABONBA_PTR_SET_VALUE(icon_, icon) };


    // identifier Field Functions 
    bool hasIdentifier() const { return this->identifier_ != nullptr;};
    void deleteIdentifier() { this->identifier_ = nullptr;};
    inline string identifier() const { DARABONBA_PTR_GET_DEFAULT(identifier_, "") };
    inline ListProjectsResponseBodyProjects& setIdentifier(string identifier) { DARABONBA_PTR_SET_VALUE(identifier_, identifier) };


    // logicalStatus Field Functions 
    bool hasLogicalStatus() const { return this->logicalStatus_ != nullptr;};
    void deleteLogicalStatus() { this->logicalStatus_ = nullptr;};
    inline string logicalStatus() const { DARABONBA_PTR_GET_DEFAULT(logicalStatus_, "") };
    inline ListProjectsResponseBodyProjects& setLogicalStatus(string logicalStatus) { DARABONBA_PTR_SET_VALUE(logicalStatus_, logicalStatus) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListProjectsResponseBodyProjects& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // scope Field Functions 
    bool hasScope() const { return this->scope_ != nullptr;};
    void deleteScope() { this->scope_ = nullptr;};
    inline string scope() const { DARABONBA_PTR_GET_DEFAULT(scope_, "") };
    inline ListProjectsResponseBodyProjects& setScope(string scope) { DARABONBA_PTR_SET_VALUE(scope_, scope) };


    // statusStageIdentifier Field Functions 
    bool hasStatusStageIdentifier() const { return this->statusStageIdentifier_ != nullptr;};
    void deleteStatusStageIdentifier() { this->statusStageIdentifier_ = nullptr;};
    inline string statusStageIdentifier() const { DARABONBA_PTR_GET_DEFAULT(statusStageIdentifier_, "") };
    inline ListProjectsResponseBodyProjects& setStatusStageIdentifier(string statusStageIdentifier) { DARABONBA_PTR_SET_VALUE(statusStageIdentifier_, statusStageIdentifier) };


    // typeIdentifier Field Functions 
    bool hasTypeIdentifier() const { return this->typeIdentifier_ != nullptr;};
    void deleteTypeIdentifier() { this->typeIdentifier_ = nullptr;};
    inline string typeIdentifier() const { DARABONBA_PTR_GET_DEFAULT(typeIdentifier_, "") };
    inline ListProjectsResponseBodyProjects& setTypeIdentifier(string typeIdentifier) { DARABONBA_PTR_SET_VALUE(typeIdentifier_, typeIdentifier) };


  protected:
    std::shared_ptr<string> categoryIdentifier_ = nullptr;
    std::shared_ptr<string> creator_ = nullptr;
    std::shared_ptr<string> customCode_ = nullptr;
    std::shared_ptr<int64_t> deleteTime_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<int64_t> gmtCreate_ = nullptr;
    std::shared_ptr<string> icon_ = nullptr;
    std::shared_ptr<string> identifier_ = nullptr;
    std::shared_ptr<string> logicalStatus_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> scope_ = nullptr;
    std::shared_ptr<string> statusStageIdentifier_ = nullptr;
    std::shared_ptr<string> typeIdentifier_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
