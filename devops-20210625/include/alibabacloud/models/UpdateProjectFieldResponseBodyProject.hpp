// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEPROJECTFIELDRESPONSEBODYPROJECT_HPP_
#define ALIBABACLOUD_MODELS_UPDATEPROJECTFIELDRESPONSEBODYPROJECT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateProjectFieldResponseBodyProjectFieldList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class UpdateProjectFieldResponseBodyProject : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateProjectFieldResponseBodyProject& obj) { 
      DARABONBA_PTR_TO_JSON(category, category_);
      DARABONBA_PTR_TO_JSON(categoryIdentifier, categoryIdentifier_);
      DARABONBA_PTR_TO_JSON(creator, creator_);
      DARABONBA_PTR_TO_JSON(customCode, customCode_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(fieldList, fieldList_);
      DARABONBA_PTR_TO_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(gmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(icon, icon_);
      DARABONBA_PTR_TO_JSON(iconBig, iconBig_);
      DARABONBA_PTR_TO_JSON(iconGroup, iconGroup_);
      DARABONBA_PTR_TO_JSON(iconSmall, iconSmall_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(identifier, identifier_);
      DARABONBA_PTR_TO_JSON(identifierPath, identifierPath_);
      DARABONBA_PTR_TO_JSON(logicalStatus, logicalStatus_);
      DARABONBA_PTR_TO_JSON(modifier, modifier_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(organizationIdentifier, organizationIdentifier_);
      DARABONBA_PTR_TO_JSON(parentIdentifier, parentIdentifier_);
      DARABONBA_PTR_TO_JSON(scope, scope_);
      DARABONBA_PTR_TO_JSON(statusIdentifier, statusIdentifier_);
      DARABONBA_PTR_TO_JSON(statusName, statusName_);
      DARABONBA_PTR_TO_JSON(statusStageIdentifier, statusStageIdentifier_);
      DARABONBA_PTR_TO_JSON(subType, subType_);
      DARABONBA_PTR_TO_JSON(typeIdentifier, typeIdentifier_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateProjectFieldResponseBodyProject& obj) { 
      DARABONBA_PTR_FROM_JSON(category, category_);
      DARABONBA_PTR_FROM_JSON(categoryIdentifier, categoryIdentifier_);
      DARABONBA_PTR_FROM_JSON(creator, creator_);
      DARABONBA_PTR_FROM_JSON(customCode, customCode_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(fieldList, fieldList_);
      DARABONBA_PTR_FROM_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(gmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(icon, icon_);
      DARABONBA_PTR_FROM_JSON(iconBig, iconBig_);
      DARABONBA_PTR_FROM_JSON(iconGroup, iconGroup_);
      DARABONBA_PTR_FROM_JSON(iconSmall, iconSmall_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(identifier, identifier_);
      DARABONBA_PTR_FROM_JSON(identifierPath, identifierPath_);
      DARABONBA_PTR_FROM_JSON(logicalStatus, logicalStatus_);
      DARABONBA_PTR_FROM_JSON(modifier, modifier_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(organizationIdentifier, organizationIdentifier_);
      DARABONBA_PTR_FROM_JSON(parentIdentifier, parentIdentifier_);
      DARABONBA_PTR_FROM_JSON(scope, scope_);
      DARABONBA_PTR_FROM_JSON(statusIdentifier, statusIdentifier_);
      DARABONBA_PTR_FROM_JSON(statusName, statusName_);
      DARABONBA_PTR_FROM_JSON(statusStageIdentifier, statusStageIdentifier_);
      DARABONBA_PTR_FROM_JSON(subType, subType_);
      DARABONBA_PTR_FROM_JSON(typeIdentifier, typeIdentifier_);
    };
    UpdateProjectFieldResponseBodyProject() = default ;
    UpdateProjectFieldResponseBodyProject(const UpdateProjectFieldResponseBodyProject &) = default ;
    UpdateProjectFieldResponseBodyProject(UpdateProjectFieldResponseBodyProject &&) = default ;
    UpdateProjectFieldResponseBodyProject(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateProjectFieldResponseBodyProject() = default ;
    UpdateProjectFieldResponseBodyProject& operator=(const UpdateProjectFieldResponseBodyProject &) = default ;
    UpdateProjectFieldResponseBodyProject& operator=(UpdateProjectFieldResponseBodyProject &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->category_ == nullptr
        && return this->categoryIdentifier_ == nullptr && return this->creator_ == nullptr && return this->customCode_ == nullptr && return this->description_ == nullptr && return this->fieldList_ == nullptr
        && return this->gmtCreate_ == nullptr && return this->gmtModified_ == nullptr && return this->icon_ == nullptr && return this->iconBig_ == nullptr && return this->iconGroup_ == nullptr
        && return this->iconSmall_ == nullptr && return this->id_ == nullptr && return this->identifier_ == nullptr && return this->identifierPath_ == nullptr && return this->logicalStatus_ == nullptr
        && return this->modifier_ == nullptr && return this->name_ == nullptr && return this->organizationIdentifier_ == nullptr && return this->parentIdentifier_ == nullptr && return this->scope_ == nullptr
        && return this->statusIdentifier_ == nullptr && return this->statusName_ == nullptr && return this->statusStageIdentifier_ == nullptr && return this->subType_ == nullptr && return this->typeIdentifier_ == nullptr; };
    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string category() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline UpdateProjectFieldResponseBodyProject& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // categoryIdentifier Field Functions 
    bool hasCategoryIdentifier() const { return this->categoryIdentifier_ != nullptr;};
    void deleteCategoryIdentifier() { this->categoryIdentifier_ = nullptr;};
    inline string categoryIdentifier() const { DARABONBA_PTR_GET_DEFAULT(categoryIdentifier_, "") };
    inline UpdateProjectFieldResponseBodyProject& setCategoryIdentifier(string categoryIdentifier) { DARABONBA_PTR_SET_VALUE(categoryIdentifier_, categoryIdentifier) };


    // creator Field Functions 
    bool hasCreator() const { return this->creator_ != nullptr;};
    void deleteCreator() { this->creator_ = nullptr;};
    inline string creator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
    inline UpdateProjectFieldResponseBodyProject& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


    // customCode Field Functions 
    bool hasCustomCode() const { return this->customCode_ != nullptr;};
    void deleteCustomCode() { this->customCode_ = nullptr;};
    inline string customCode() const { DARABONBA_PTR_GET_DEFAULT(customCode_, "") };
    inline UpdateProjectFieldResponseBodyProject& setCustomCode(string customCode) { DARABONBA_PTR_SET_VALUE(customCode_, customCode) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateProjectFieldResponseBodyProject& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // fieldList Field Functions 
    bool hasFieldList() const { return this->fieldList_ != nullptr;};
    void deleteFieldList() { this->fieldList_ = nullptr;};
    inline const vector<Models::UpdateProjectFieldResponseBodyProjectFieldList> & fieldList() const { DARABONBA_PTR_GET_CONST(fieldList_, vector<Models::UpdateProjectFieldResponseBodyProjectFieldList>) };
    inline vector<Models::UpdateProjectFieldResponseBodyProjectFieldList> fieldList() { DARABONBA_PTR_GET(fieldList_, vector<Models::UpdateProjectFieldResponseBodyProjectFieldList>) };
    inline UpdateProjectFieldResponseBodyProject& setFieldList(const vector<Models::UpdateProjectFieldResponseBodyProjectFieldList> & fieldList) { DARABONBA_PTR_SET_VALUE(fieldList_, fieldList) };
    inline UpdateProjectFieldResponseBodyProject& setFieldList(vector<Models::UpdateProjectFieldResponseBodyProjectFieldList> && fieldList) { DARABONBA_PTR_SET_RVALUE(fieldList_, fieldList) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline int64_t gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0L) };
    inline UpdateProjectFieldResponseBodyProject& setGmtCreate(int64_t gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline int64_t gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, 0L) };
    inline UpdateProjectFieldResponseBodyProject& setGmtModified(int64_t gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // icon Field Functions 
    bool hasIcon() const { return this->icon_ != nullptr;};
    void deleteIcon() { this->icon_ = nullptr;};
    inline string icon() const { DARABONBA_PTR_GET_DEFAULT(icon_, "") };
    inline UpdateProjectFieldResponseBodyProject& setIcon(string icon) { DARABONBA_PTR_SET_VALUE(icon_, icon) };


    // iconBig Field Functions 
    bool hasIconBig() const { return this->iconBig_ != nullptr;};
    void deleteIconBig() { this->iconBig_ = nullptr;};
    inline string iconBig() const { DARABONBA_PTR_GET_DEFAULT(iconBig_, "") };
    inline UpdateProjectFieldResponseBodyProject& setIconBig(string iconBig) { DARABONBA_PTR_SET_VALUE(iconBig_, iconBig) };


    // iconGroup Field Functions 
    bool hasIconGroup() const { return this->iconGroup_ != nullptr;};
    void deleteIconGroup() { this->iconGroup_ = nullptr;};
    inline string iconGroup() const { DARABONBA_PTR_GET_DEFAULT(iconGroup_, "") };
    inline UpdateProjectFieldResponseBodyProject& setIconGroup(string iconGroup) { DARABONBA_PTR_SET_VALUE(iconGroup_, iconGroup) };


    // iconSmall Field Functions 
    bool hasIconSmall() const { return this->iconSmall_ != nullptr;};
    void deleteIconSmall() { this->iconSmall_ = nullptr;};
    inline string iconSmall() const { DARABONBA_PTR_GET_DEFAULT(iconSmall_, "") };
    inline UpdateProjectFieldResponseBodyProject& setIconSmall(string iconSmall) { DARABONBA_PTR_SET_VALUE(iconSmall_, iconSmall) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline UpdateProjectFieldResponseBodyProject& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // identifier Field Functions 
    bool hasIdentifier() const { return this->identifier_ != nullptr;};
    void deleteIdentifier() { this->identifier_ = nullptr;};
    inline string identifier() const { DARABONBA_PTR_GET_DEFAULT(identifier_, "") };
    inline UpdateProjectFieldResponseBodyProject& setIdentifier(string identifier) { DARABONBA_PTR_SET_VALUE(identifier_, identifier) };


    // identifierPath Field Functions 
    bool hasIdentifierPath() const { return this->identifierPath_ != nullptr;};
    void deleteIdentifierPath() { this->identifierPath_ = nullptr;};
    inline string identifierPath() const { DARABONBA_PTR_GET_DEFAULT(identifierPath_, "") };
    inline UpdateProjectFieldResponseBodyProject& setIdentifierPath(string identifierPath) { DARABONBA_PTR_SET_VALUE(identifierPath_, identifierPath) };


    // logicalStatus Field Functions 
    bool hasLogicalStatus() const { return this->logicalStatus_ != nullptr;};
    void deleteLogicalStatus() { this->logicalStatus_ = nullptr;};
    inline string logicalStatus() const { DARABONBA_PTR_GET_DEFAULT(logicalStatus_, "") };
    inline UpdateProjectFieldResponseBodyProject& setLogicalStatus(string logicalStatus) { DARABONBA_PTR_SET_VALUE(logicalStatus_, logicalStatus) };


    // modifier Field Functions 
    bool hasModifier() const { return this->modifier_ != nullptr;};
    void deleteModifier() { this->modifier_ = nullptr;};
    inline string modifier() const { DARABONBA_PTR_GET_DEFAULT(modifier_, "") };
    inline UpdateProjectFieldResponseBodyProject& setModifier(string modifier) { DARABONBA_PTR_SET_VALUE(modifier_, modifier) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateProjectFieldResponseBodyProject& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // organizationIdentifier Field Functions 
    bool hasOrganizationIdentifier() const { return this->organizationIdentifier_ != nullptr;};
    void deleteOrganizationIdentifier() { this->organizationIdentifier_ = nullptr;};
    inline string organizationIdentifier() const { DARABONBA_PTR_GET_DEFAULT(organizationIdentifier_, "") };
    inline UpdateProjectFieldResponseBodyProject& setOrganizationIdentifier(string organizationIdentifier) { DARABONBA_PTR_SET_VALUE(organizationIdentifier_, organizationIdentifier) };


    // parentIdentifier Field Functions 
    bool hasParentIdentifier() const { return this->parentIdentifier_ != nullptr;};
    void deleteParentIdentifier() { this->parentIdentifier_ = nullptr;};
    inline string parentIdentifier() const { DARABONBA_PTR_GET_DEFAULT(parentIdentifier_, "") };
    inline UpdateProjectFieldResponseBodyProject& setParentIdentifier(string parentIdentifier) { DARABONBA_PTR_SET_VALUE(parentIdentifier_, parentIdentifier) };


    // scope Field Functions 
    bool hasScope() const { return this->scope_ != nullptr;};
    void deleteScope() { this->scope_ = nullptr;};
    inline string scope() const { DARABONBA_PTR_GET_DEFAULT(scope_, "") };
    inline UpdateProjectFieldResponseBodyProject& setScope(string scope) { DARABONBA_PTR_SET_VALUE(scope_, scope) };


    // statusIdentifier Field Functions 
    bool hasStatusIdentifier() const { return this->statusIdentifier_ != nullptr;};
    void deleteStatusIdentifier() { this->statusIdentifier_ = nullptr;};
    inline string statusIdentifier() const { DARABONBA_PTR_GET_DEFAULT(statusIdentifier_, "") };
    inline UpdateProjectFieldResponseBodyProject& setStatusIdentifier(string statusIdentifier) { DARABONBA_PTR_SET_VALUE(statusIdentifier_, statusIdentifier) };


    // statusName Field Functions 
    bool hasStatusName() const { return this->statusName_ != nullptr;};
    void deleteStatusName() { this->statusName_ = nullptr;};
    inline string statusName() const { DARABONBA_PTR_GET_DEFAULT(statusName_, "") };
    inline UpdateProjectFieldResponseBodyProject& setStatusName(string statusName) { DARABONBA_PTR_SET_VALUE(statusName_, statusName) };


    // statusStageIdentifier Field Functions 
    bool hasStatusStageIdentifier() const { return this->statusStageIdentifier_ != nullptr;};
    void deleteStatusStageIdentifier() { this->statusStageIdentifier_ = nullptr;};
    inline string statusStageIdentifier() const { DARABONBA_PTR_GET_DEFAULT(statusStageIdentifier_, "") };
    inline UpdateProjectFieldResponseBodyProject& setStatusStageIdentifier(string statusStageIdentifier) { DARABONBA_PTR_SET_VALUE(statusStageIdentifier_, statusStageIdentifier) };


    // subType Field Functions 
    bool hasSubType() const { return this->subType_ != nullptr;};
    void deleteSubType() { this->subType_ = nullptr;};
    inline string subType() const { DARABONBA_PTR_GET_DEFAULT(subType_, "") };
    inline UpdateProjectFieldResponseBodyProject& setSubType(string subType) { DARABONBA_PTR_SET_VALUE(subType_, subType) };


    // typeIdentifier Field Functions 
    bool hasTypeIdentifier() const { return this->typeIdentifier_ != nullptr;};
    void deleteTypeIdentifier() { this->typeIdentifier_ = nullptr;};
    inline string typeIdentifier() const { DARABONBA_PTR_GET_DEFAULT(typeIdentifier_, "") };
    inline UpdateProjectFieldResponseBodyProject& setTypeIdentifier(string typeIdentifier) { DARABONBA_PTR_SET_VALUE(typeIdentifier_, typeIdentifier) };


  protected:
    std::shared_ptr<string> category_ = nullptr;
    std::shared_ptr<string> categoryIdentifier_ = nullptr;
    std::shared_ptr<string> creator_ = nullptr;
    std::shared_ptr<string> customCode_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<vector<Models::UpdateProjectFieldResponseBodyProjectFieldList>> fieldList_ = nullptr;
    std::shared_ptr<int64_t> gmtCreate_ = nullptr;
    std::shared_ptr<int64_t> gmtModified_ = nullptr;
    std::shared_ptr<string> icon_ = nullptr;
    std::shared_ptr<string> iconBig_ = nullptr;
    std::shared_ptr<string> iconGroup_ = nullptr;
    std::shared_ptr<string> iconSmall_ = nullptr;
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<string> identifier_ = nullptr;
    std::shared_ptr<string> identifierPath_ = nullptr;
    std::shared_ptr<string> logicalStatus_ = nullptr;
    std::shared_ptr<string> modifier_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> organizationIdentifier_ = nullptr;
    std::shared_ptr<string> parentIdentifier_ = nullptr;
    std::shared_ptr<string> scope_ = nullptr;
    std::shared_ptr<string> statusIdentifier_ = nullptr;
    std::shared_ptr<string> statusName_ = nullptr;
    std::shared_ptr<string> statusStageIdentifier_ = nullptr;
    std::shared_ptr<string> subType_ = nullptr;
    std::shared_ptr<string> typeIdentifier_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
