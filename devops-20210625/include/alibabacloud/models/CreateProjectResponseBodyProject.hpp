// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPROJECTRESPONSEBODYPROJECT_HPP_
#define ALIBABACLOUD_MODELS_CREATEPROJECTRESPONSEBODYPROJECT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class CreateProjectResponseBodyProject : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateProjectResponseBodyProject& obj) { 
      DARABONBA_PTR_TO_JSON(categoryIdentifier, categoryIdentifier_);
      DARABONBA_PTR_TO_JSON(creator, creator_);
      DARABONBA_PTR_TO_JSON(customCode, customCode_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(gmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(icon, icon_);
      DARABONBA_PTR_TO_JSON(identifier, identifier_);
      DARABONBA_PTR_TO_JSON(logicalStatus, logicalStatus_);
      DARABONBA_PTR_TO_JSON(modifier, modifier_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(organizationIdentifier, organizationIdentifier_);
      DARABONBA_PTR_TO_JSON(scope, scope_);
      DARABONBA_PTR_TO_JSON(statusIdentifier, statusIdentifier_);
      DARABONBA_PTR_TO_JSON(statusStageIdentifier, statusStageIdentifier_);
      DARABONBA_PTR_TO_JSON(typeIdentifier, typeIdentifier_);
    };
    friend void from_json(const Darabonba::Json& j, CreateProjectResponseBodyProject& obj) { 
      DARABONBA_PTR_FROM_JSON(categoryIdentifier, categoryIdentifier_);
      DARABONBA_PTR_FROM_JSON(creator, creator_);
      DARABONBA_PTR_FROM_JSON(customCode, customCode_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(gmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(icon, icon_);
      DARABONBA_PTR_FROM_JSON(identifier, identifier_);
      DARABONBA_PTR_FROM_JSON(logicalStatus, logicalStatus_);
      DARABONBA_PTR_FROM_JSON(modifier, modifier_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(organizationIdentifier, organizationIdentifier_);
      DARABONBA_PTR_FROM_JSON(scope, scope_);
      DARABONBA_PTR_FROM_JSON(statusIdentifier, statusIdentifier_);
      DARABONBA_PTR_FROM_JSON(statusStageIdentifier, statusStageIdentifier_);
      DARABONBA_PTR_FROM_JSON(typeIdentifier, typeIdentifier_);
    };
    CreateProjectResponseBodyProject() = default ;
    CreateProjectResponseBodyProject(const CreateProjectResponseBodyProject &) = default ;
    CreateProjectResponseBodyProject(CreateProjectResponseBodyProject &&) = default ;
    CreateProjectResponseBodyProject(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateProjectResponseBodyProject() = default ;
    CreateProjectResponseBodyProject& operator=(const CreateProjectResponseBodyProject &) = default ;
    CreateProjectResponseBodyProject& operator=(CreateProjectResponseBodyProject &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->categoryIdentifier_ == nullptr
        && return this->creator_ == nullptr && return this->customCode_ == nullptr && return this->description_ == nullptr && return this->gmtCreate_ == nullptr && return this->gmtModified_ == nullptr
        && return this->icon_ == nullptr && return this->identifier_ == nullptr && return this->logicalStatus_ == nullptr && return this->modifier_ == nullptr && return this->name_ == nullptr
        && return this->organizationIdentifier_ == nullptr && return this->scope_ == nullptr && return this->statusIdentifier_ == nullptr && return this->statusStageIdentifier_ == nullptr && return this->typeIdentifier_ == nullptr; };
    // categoryIdentifier Field Functions 
    bool hasCategoryIdentifier() const { return this->categoryIdentifier_ != nullptr;};
    void deleteCategoryIdentifier() { this->categoryIdentifier_ = nullptr;};
    inline string categoryIdentifier() const { DARABONBA_PTR_GET_DEFAULT(categoryIdentifier_, "") };
    inline CreateProjectResponseBodyProject& setCategoryIdentifier(string categoryIdentifier) { DARABONBA_PTR_SET_VALUE(categoryIdentifier_, categoryIdentifier) };


    // creator Field Functions 
    bool hasCreator() const { return this->creator_ != nullptr;};
    void deleteCreator() { this->creator_ = nullptr;};
    inline string creator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
    inline CreateProjectResponseBodyProject& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


    // customCode Field Functions 
    bool hasCustomCode() const { return this->customCode_ != nullptr;};
    void deleteCustomCode() { this->customCode_ = nullptr;};
    inline string customCode() const { DARABONBA_PTR_GET_DEFAULT(customCode_, "") };
    inline CreateProjectResponseBodyProject& setCustomCode(string customCode) { DARABONBA_PTR_SET_VALUE(customCode_, customCode) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateProjectResponseBodyProject& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline int64_t gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0L) };
    inline CreateProjectResponseBodyProject& setGmtCreate(int64_t gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline int64_t gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, 0L) };
    inline CreateProjectResponseBodyProject& setGmtModified(int64_t gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // icon Field Functions 
    bool hasIcon() const { return this->icon_ != nullptr;};
    void deleteIcon() { this->icon_ = nullptr;};
    inline string icon() const { DARABONBA_PTR_GET_DEFAULT(icon_, "") };
    inline CreateProjectResponseBodyProject& setIcon(string icon) { DARABONBA_PTR_SET_VALUE(icon_, icon) };


    // identifier Field Functions 
    bool hasIdentifier() const { return this->identifier_ != nullptr;};
    void deleteIdentifier() { this->identifier_ = nullptr;};
    inline string identifier() const { DARABONBA_PTR_GET_DEFAULT(identifier_, "") };
    inline CreateProjectResponseBodyProject& setIdentifier(string identifier) { DARABONBA_PTR_SET_VALUE(identifier_, identifier) };


    // logicalStatus Field Functions 
    bool hasLogicalStatus() const { return this->logicalStatus_ != nullptr;};
    void deleteLogicalStatus() { this->logicalStatus_ = nullptr;};
    inline string logicalStatus() const { DARABONBA_PTR_GET_DEFAULT(logicalStatus_, "") };
    inline CreateProjectResponseBodyProject& setLogicalStatus(string logicalStatus) { DARABONBA_PTR_SET_VALUE(logicalStatus_, logicalStatus) };


    // modifier Field Functions 
    bool hasModifier() const { return this->modifier_ != nullptr;};
    void deleteModifier() { this->modifier_ = nullptr;};
    inline string modifier() const { DARABONBA_PTR_GET_DEFAULT(modifier_, "") };
    inline CreateProjectResponseBodyProject& setModifier(string modifier) { DARABONBA_PTR_SET_VALUE(modifier_, modifier) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateProjectResponseBodyProject& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // organizationIdentifier Field Functions 
    bool hasOrganizationIdentifier() const { return this->organizationIdentifier_ != nullptr;};
    void deleteOrganizationIdentifier() { this->organizationIdentifier_ = nullptr;};
    inline string organizationIdentifier() const { DARABONBA_PTR_GET_DEFAULT(organizationIdentifier_, "") };
    inline CreateProjectResponseBodyProject& setOrganizationIdentifier(string organizationIdentifier) { DARABONBA_PTR_SET_VALUE(organizationIdentifier_, organizationIdentifier) };


    // scope Field Functions 
    bool hasScope() const { return this->scope_ != nullptr;};
    void deleteScope() { this->scope_ = nullptr;};
    inline string scope() const { DARABONBA_PTR_GET_DEFAULT(scope_, "") };
    inline CreateProjectResponseBodyProject& setScope(string scope) { DARABONBA_PTR_SET_VALUE(scope_, scope) };


    // statusIdentifier Field Functions 
    bool hasStatusIdentifier() const { return this->statusIdentifier_ != nullptr;};
    void deleteStatusIdentifier() { this->statusIdentifier_ = nullptr;};
    inline string statusIdentifier() const { DARABONBA_PTR_GET_DEFAULT(statusIdentifier_, "") };
    inline CreateProjectResponseBodyProject& setStatusIdentifier(string statusIdentifier) { DARABONBA_PTR_SET_VALUE(statusIdentifier_, statusIdentifier) };


    // statusStageIdentifier Field Functions 
    bool hasStatusStageIdentifier() const { return this->statusStageIdentifier_ != nullptr;};
    void deleteStatusStageIdentifier() { this->statusStageIdentifier_ = nullptr;};
    inline string statusStageIdentifier() const { DARABONBA_PTR_GET_DEFAULT(statusStageIdentifier_, "") };
    inline CreateProjectResponseBodyProject& setStatusStageIdentifier(string statusStageIdentifier) { DARABONBA_PTR_SET_VALUE(statusStageIdentifier_, statusStageIdentifier) };


    // typeIdentifier Field Functions 
    bool hasTypeIdentifier() const { return this->typeIdentifier_ != nullptr;};
    void deleteTypeIdentifier() { this->typeIdentifier_ = nullptr;};
    inline string typeIdentifier() const { DARABONBA_PTR_GET_DEFAULT(typeIdentifier_, "") };
    inline CreateProjectResponseBodyProject& setTypeIdentifier(string typeIdentifier) { DARABONBA_PTR_SET_VALUE(typeIdentifier_, typeIdentifier) };


  protected:
    std::shared_ptr<string> categoryIdentifier_ = nullptr;
    std::shared_ptr<string> creator_ = nullptr;
    std::shared_ptr<string> customCode_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<int64_t> gmtCreate_ = nullptr;
    std::shared_ptr<int64_t> gmtModified_ = nullptr;
    std::shared_ptr<string> icon_ = nullptr;
    std::shared_ptr<string> identifier_ = nullptr;
    std::shared_ptr<string> logicalStatus_ = nullptr;
    std::shared_ptr<string> modifier_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> organizationIdentifier_ = nullptr;
    std::shared_ptr<string> scope_ = nullptr;
    std::shared_ptr<string> statusIdentifier_ = nullptr;
    std::shared_ptr<string> statusStageIdentifier_ = nullptr;
    std::shared_ptr<string> typeIdentifier_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
