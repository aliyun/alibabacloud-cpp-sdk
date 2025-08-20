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
    virtual bool empty() const override { this->autoCreateRepo_ != nullptr
        && this->defaultRepoConfiguration_ != nullptr && this->defaultRepoType_ != nullptr && this->instanceId_ != nullptr && this->namespaceName_ != nullptr; };
    // autoCreateRepo Field Functions 
    bool hasAutoCreateRepo() const { return this->autoCreateRepo_ != nullptr;};
    void deleteAutoCreateRepo() { this->autoCreateRepo_ = nullptr;};
    inline bool autoCreateRepo() const { DARABONBA_PTR_GET_DEFAULT(autoCreateRepo_, false) };
    inline UpdateNamespaceRequest& setAutoCreateRepo(bool autoCreateRepo) { DARABONBA_PTR_SET_VALUE(autoCreateRepo_, autoCreateRepo) };


    // defaultRepoConfiguration Field Functions 
    bool hasDefaultRepoConfiguration() const { return this->defaultRepoConfiguration_ != nullptr;};
    void deleteDefaultRepoConfiguration() { this->defaultRepoConfiguration_ = nullptr;};
    inline const RepoConfiguration & defaultRepoConfiguration() const { DARABONBA_PTR_GET_CONST(defaultRepoConfiguration_, RepoConfiguration) };
    inline RepoConfiguration defaultRepoConfiguration() { DARABONBA_PTR_GET(defaultRepoConfiguration_, RepoConfiguration) };
    inline UpdateNamespaceRequest& setDefaultRepoConfiguration(const RepoConfiguration & defaultRepoConfiguration) { DARABONBA_PTR_SET_VALUE(defaultRepoConfiguration_, defaultRepoConfiguration) };
    inline UpdateNamespaceRequest& setDefaultRepoConfiguration(RepoConfiguration && defaultRepoConfiguration) { DARABONBA_PTR_SET_RVALUE(defaultRepoConfiguration_, defaultRepoConfiguration) };


    // defaultRepoType Field Functions 
    bool hasDefaultRepoType() const { return this->defaultRepoType_ != nullptr;};
    void deleteDefaultRepoType() { this->defaultRepoType_ = nullptr;};
    inline string defaultRepoType() const { DARABONBA_PTR_GET_DEFAULT(defaultRepoType_, "") };
    inline UpdateNamespaceRequest& setDefaultRepoType(string defaultRepoType) { DARABONBA_PTR_SET_VALUE(defaultRepoType_, defaultRepoType) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline UpdateNamespaceRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // namespaceName Field Functions 
    bool hasNamespaceName() const { return this->namespaceName_ != nullptr;};
    void deleteNamespaceName() { this->namespaceName_ = nullptr;};
    inline string namespaceName() const { DARABONBA_PTR_GET_DEFAULT(namespaceName_, "") };
    inline UpdateNamespaceRequest& setNamespaceName(string namespaceName) { DARABONBA_PTR_SET_VALUE(namespaceName_, namespaceName) };


  protected:
    // Specifies whether to automatically create a repository when an image is pushed to the namespace.
    std::shared_ptr<bool> autoCreateRepo_ = nullptr;
    std::shared_ptr<RepoConfiguration> defaultRepoConfiguration_ = nullptr;
    // The default type of the repository. Valid values:
    // 
    // *   `PUBLIC`: The repository is a public repository.
    // *   `PRIVATE`: The repository is a private repository.
    std::shared_ptr<string> defaultRepoType_ = nullptr;
    // The ID of the instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The name of the namespace.
    // 
    // This parameter is required.
    std::shared_ptr<string> namespaceName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cr20181201
#endif
