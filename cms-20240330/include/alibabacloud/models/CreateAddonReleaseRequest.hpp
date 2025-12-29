// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEADDONRELEASEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEADDONRELEASEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/EntityDiscoverRule.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class CreateAddonReleaseRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAddonReleaseRequest& obj) { 
      DARABONBA_PTR_TO_JSON(addonName, addonName_);
      DARABONBA_PTR_TO_JSON(aliyunLang, aliyunLang_);
      DARABONBA_PTR_TO_JSON(dryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(entityRules, entityRules_);
      DARABONBA_PTR_TO_JSON(envType, envType_);
      DARABONBA_PTR_TO_JSON(parentAddonReleaseId, parentAddonReleaseId_);
      DARABONBA_PTR_TO_JSON(releaseName, releaseName_);
      DARABONBA_PTR_TO_JSON(values, values_);
      DARABONBA_PTR_TO_JSON(version, version_);
      DARABONBA_PTR_TO_JSON(workspace, workspace_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAddonReleaseRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(addonName, addonName_);
      DARABONBA_PTR_FROM_JSON(aliyunLang, aliyunLang_);
      DARABONBA_PTR_FROM_JSON(dryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(entityRules, entityRules_);
      DARABONBA_PTR_FROM_JSON(envType, envType_);
      DARABONBA_PTR_FROM_JSON(parentAddonReleaseId, parentAddonReleaseId_);
      DARABONBA_PTR_FROM_JSON(releaseName, releaseName_);
      DARABONBA_PTR_FROM_JSON(values, values_);
      DARABONBA_PTR_FROM_JSON(version, version_);
      DARABONBA_PTR_FROM_JSON(workspace, workspace_);
    };
    CreateAddonReleaseRequest() = default ;
    CreateAddonReleaseRequest(const CreateAddonReleaseRequest &) = default ;
    CreateAddonReleaseRequest(CreateAddonReleaseRequest &&) = default ;
    CreateAddonReleaseRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAddonReleaseRequest() = default ;
    CreateAddonReleaseRequest& operator=(const CreateAddonReleaseRequest &) = default ;
    CreateAddonReleaseRequest& operator=(CreateAddonReleaseRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->addonName_ == nullptr
        && this->aliyunLang_ == nullptr && this->dryRun_ == nullptr && this->entityRules_ == nullptr && this->envType_ == nullptr && this->parentAddonReleaseId_ == nullptr
        && this->releaseName_ == nullptr && this->values_ == nullptr && this->version_ == nullptr && this->workspace_ == nullptr; };
    // addonName Field Functions 
    bool hasAddonName() const { return this->addonName_ != nullptr;};
    void deleteAddonName() { this->addonName_ = nullptr;};
    inline string getAddonName() const { DARABONBA_PTR_GET_DEFAULT(addonName_, "") };
    inline CreateAddonReleaseRequest& setAddonName(string addonName) { DARABONBA_PTR_SET_VALUE(addonName_, addonName) };


    // aliyunLang Field Functions 
    bool hasAliyunLang() const { return this->aliyunLang_ != nullptr;};
    void deleteAliyunLang() { this->aliyunLang_ = nullptr;};
    inline string getAliyunLang() const { DARABONBA_PTR_GET_DEFAULT(aliyunLang_, "") };
    inline CreateAddonReleaseRequest& setAliyunLang(string aliyunLang) { DARABONBA_PTR_SET_VALUE(aliyunLang_, aliyunLang) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline CreateAddonReleaseRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // entityRules Field Functions 
    bool hasEntityRules() const { return this->entityRules_ != nullptr;};
    void deleteEntityRules() { this->entityRules_ = nullptr;};
    inline const EntityDiscoverRule & getEntityRules() const { DARABONBA_PTR_GET_CONST(entityRules_, EntityDiscoverRule) };
    inline EntityDiscoverRule getEntityRules() { DARABONBA_PTR_GET(entityRules_, EntityDiscoverRule) };
    inline CreateAddonReleaseRequest& setEntityRules(const EntityDiscoverRule & entityRules) { DARABONBA_PTR_SET_VALUE(entityRules_, entityRules) };
    inline CreateAddonReleaseRequest& setEntityRules(EntityDiscoverRule && entityRules) { DARABONBA_PTR_SET_RVALUE(entityRules_, entityRules) };


    // envType Field Functions 
    bool hasEnvType() const { return this->envType_ != nullptr;};
    void deleteEnvType() { this->envType_ = nullptr;};
    inline string getEnvType() const { DARABONBA_PTR_GET_DEFAULT(envType_, "") };
    inline CreateAddonReleaseRequest& setEnvType(string envType) { DARABONBA_PTR_SET_VALUE(envType_, envType) };


    // parentAddonReleaseId Field Functions 
    bool hasParentAddonReleaseId() const { return this->parentAddonReleaseId_ != nullptr;};
    void deleteParentAddonReleaseId() { this->parentAddonReleaseId_ = nullptr;};
    inline string getParentAddonReleaseId() const { DARABONBA_PTR_GET_DEFAULT(parentAddonReleaseId_, "") };
    inline CreateAddonReleaseRequest& setParentAddonReleaseId(string parentAddonReleaseId) { DARABONBA_PTR_SET_VALUE(parentAddonReleaseId_, parentAddonReleaseId) };


    // releaseName Field Functions 
    bool hasReleaseName() const { return this->releaseName_ != nullptr;};
    void deleteReleaseName() { this->releaseName_ = nullptr;};
    inline string getReleaseName() const { DARABONBA_PTR_GET_DEFAULT(releaseName_, "") };
    inline CreateAddonReleaseRequest& setReleaseName(string releaseName) { DARABONBA_PTR_SET_VALUE(releaseName_, releaseName) };


    // values Field Functions 
    bool hasValues() const { return this->values_ != nullptr;};
    void deleteValues() { this->values_ = nullptr;};
    inline string getValues() const { DARABONBA_PTR_GET_DEFAULT(values_, "") };
    inline CreateAddonReleaseRequest& setValues(string values) { DARABONBA_PTR_SET_VALUE(values_, values) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline CreateAddonReleaseRequest& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    // workspace Field Functions 
    bool hasWorkspace() const { return this->workspace_ != nullptr;};
    void deleteWorkspace() { this->workspace_ = nullptr;};
    inline string getWorkspace() const { DARABONBA_PTR_GET_DEFAULT(workspace_, "") };
    inline CreateAddonReleaseRequest& setWorkspace(string workspace) { DARABONBA_PTR_SET_VALUE(workspace_, workspace) };


  protected:
    // The Addon name of the component that needs to be monitored.
    // 
    // This parameter is required.
    shared_ptr<string> addonName_ {};
    // The language type of the component.
    shared_ptr<string> aliyunLang_ {};
    // Whether it is a dry run, default is false.
    shared_ptr<bool> dryRun_ {};
    // Field rules
    shared_ptr<EntityDiscoverRule> entityRules_ {};
    // Environment type. If the Policy type is CS and ECS, use accordingly; otherwise, it is unified as Cloud.
    shared_ptr<string> envType_ {};
    // Parent AddonReleaseId.
    shared_ptr<string> parentAddonReleaseId_ {};
    // The plugin name after access. If not specified, a default rule name will be generated.
    shared_ptr<string> releaseName_ {};
    // Input metadata.
    shared_ptr<string> values_ {};
    // The version of the Addon component that needs to be monitored.
    // 
    // This parameter is required.
    shared_ptr<string> version_ {};
    // The workspace name for installing the component resources.
    shared_ptr<string> workspace_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
