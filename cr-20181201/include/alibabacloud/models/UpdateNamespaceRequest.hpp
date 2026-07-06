// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATENAMESPACEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATENAMESPACEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/RepoConfiguration.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cr20181201
{
namespace Models
{
  class UpdateNamespaceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateNamespaceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AutoCreateRepo, autoCreateRepo_);
      DARABONBA_PTR_TO_JSON(DefaultRepoConfiguration, defaultRepoConfiguration_);
      DARABONBA_PTR_TO_JSON(DefaultRepoType, defaultRepoType_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(NamespaceName, namespaceName_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateNamespaceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoCreateRepo, autoCreateRepo_);
      DARABONBA_PTR_FROM_JSON(DefaultRepoConfiguration, defaultRepoConfiguration_);
      DARABONBA_PTR_FROM_JSON(DefaultRepoType, defaultRepoType_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(NamespaceName, namespaceName_);
    };
    UpdateNamespaceRequest() = default ;
    UpdateNamespaceRequest(const UpdateNamespaceRequest &) = default ;
    UpdateNamespaceRequest(UpdateNamespaceRequest &&) = default ;
    UpdateNamespaceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateNamespaceRequest() = default ;
    UpdateNamespaceRequest& operator=(const UpdateNamespaceRequest &) = default ;
    UpdateNamespaceRequest& operator=(UpdateNamespaceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoCreateRepo_ == nullptr
        && this->defaultRepoConfiguration_ == nullptr && this->defaultRepoType_ == nullptr && this->instanceId_ == nullptr && this->namespaceName_ == nullptr; };
    // autoCreateRepo Field Functions 
    bool hasAutoCreateRepo() const { return this->autoCreateRepo_ != nullptr;};
    void deleteAutoCreateRepo() { this->autoCreateRepo_ = nullptr;};
    inline bool getAutoCreateRepo() const { DARABONBA_PTR_GET_DEFAULT(autoCreateRepo_, false) };
    inline UpdateNamespaceRequest& setAutoCreateRepo(bool autoCreateRepo) { DARABONBA_PTR_SET_VALUE(autoCreateRepo_, autoCreateRepo) };


    // defaultRepoConfiguration Field Functions 
    bool hasDefaultRepoConfiguration() const { return this->defaultRepoConfiguration_ != nullptr;};
    void deleteDefaultRepoConfiguration() { this->defaultRepoConfiguration_ = nullptr;};
    inline const RepoConfiguration & getDefaultRepoConfiguration() const { DARABONBA_PTR_GET_CONST(defaultRepoConfiguration_, RepoConfiguration) };
    inline RepoConfiguration getDefaultRepoConfiguration() { DARABONBA_PTR_GET(defaultRepoConfiguration_, RepoConfiguration) };
    inline UpdateNamespaceRequest& setDefaultRepoConfiguration(const RepoConfiguration & defaultRepoConfiguration) { DARABONBA_PTR_SET_VALUE(defaultRepoConfiguration_, defaultRepoConfiguration) };
    inline UpdateNamespaceRequest& setDefaultRepoConfiguration(RepoConfiguration && defaultRepoConfiguration) { DARABONBA_PTR_SET_RVALUE(defaultRepoConfiguration_, defaultRepoConfiguration) };


    // defaultRepoType Field Functions 
    bool hasDefaultRepoType() const { return this->defaultRepoType_ != nullptr;};
    void deleteDefaultRepoType() { this->defaultRepoType_ = nullptr;};
    inline string getDefaultRepoType() const { DARABONBA_PTR_GET_DEFAULT(defaultRepoType_, "") };
    inline UpdateNamespaceRequest& setDefaultRepoType(string defaultRepoType) { DARABONBA_PTR_SET_VALUE(defaultRepoType_, defaultRepoType) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline UpdateNamespaceRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // namespaceName Field Functions 
    bool hasNamespaceName() const { return this->namespaceName_ != nullptr;};
    void deleteNamespaceName() { this->namespaceName_ = nullptr;};
    inline string getNamespaceName() const { DARABONBA_PTR_GET_DEFAULT(namespaceName_, "") };
    inline UpdateNamespaceRequest& setNamespaceName(string namespaceName) { DARABONBA_PTR_SET_VALUE(namespaceName_, namespaceName) };


  protected:
    // Whether to automatically create a repository when an image is pushed.
    shared_ptr<bool> autoCreateRepo_ {};
    // The default configuration for automatically created repositories.
    shared_ptr<RepoConfiguration> defaultRepoConfiguration_ {};
    // The default type for automatically created repositories. This parameter applies only if `AutoCreateRepo` is set to `true`. Valid values:
    // 
    // - `PUBLIC`: a public repository
    // 
    // - `PRIVATE`: a private repository
    shared_ptr<string> defaultRepoType_ {};
    // The instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The name of the namespace.
    // 
    // This parameter is required.
    shared_ptr<string> namespaceName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cr20181201
#endif
