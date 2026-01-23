// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATENAMESPACEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATENAMESPACEREQUEST_HPP_
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
  class CreateNamespaceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateNamespaceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AutoCreateRepo, autoCreateRepo_);
      DARABONBA_PTR_TO_JSON(DefaultRepoConfiguration, defaultRepoConfiguration_);
      DARABONBA_PTR_TO_JSON(DefaultRepoType, defaultRepoType_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(NamespaceName, namespaceName_);
    };
    friend void from_json(const Darabonba::Json& j, CreateNamespaceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoCreateRepo, autoCreateRepo_);
      DARABONBA_PTR_FROM_JSON(DefaultRepoConfiguration, defaultRepoConfiguration_);
      DARABONBA_PTR_FROM_JSON(DefaultRepoType, defaultRepoType_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(NamespaceName, namespaceName_);
    };
    CreateNamespaceRequest() = default ;
    CreateNamespaceRequest(const CreateNamespaceRequest &) = default ;
    CreateNamespaceRequest(CreateNamespaceRequest &&) = default ;
    CreateNamespaceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateNamespaceRequest() = default ;
    CreateNamespaceRequest& operator=(const CreateNamespaceRequest &) = default ;
    CreateNamespaceRequest& operator=(CreateNamespaceRequest &&) = default ;
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
    inline CreateNamespaceRequest& setAutoCreateRepo(bool autoCreateRepo) { DARABONBA_PTR_SET_VALUE(autoCreateRepo_, autoCreateRepo) };


    // defaultRepoConfiguration Field Functions 
    bool hasDefaultRepoConfiguration() const { return this->defaultRepoConfiguration_ != nullptr;};
    void deleteDefaultRepoConfiguration() { this->defaultRepoConfiguration_ = nullptr;};
    inline const RepoConfiguration & getDefaultRepoConfiguration() const { DARABONBA_PTR_GET_CONST(defaultRepoConfiguration_, RepoConfiguration) };
    inline RepoConfiguration getDefaultRepoConfiguration() { DARABONBA_PTR_GET(defaultRepoConfiguration_, RepoConfiguration) };
    inline CreateNamespaceRequest& setDefaultRepoConfiguration(const RepoConfiguration & defaultRepoConfiguration) { DARABONBA_PTR_SET_VALUE(defaultRepoConfiguration_, defaultRepoConfiguration) };
    inline CreateNamespaceRequest& setDefaultRepoConfiguration(RepoConfiguration && defaultRepoConfiguration) { DARABONBA_PTR_SET_RVALUE(defaultRepoConfiguration_, defaultRepoConfiguration) };


    // defaultRepoType Field Functions 
    bool hasDefaultRepoType() const { return this->defaultRepoType_ != nullptr;};
    void deleteDefaultRepoType() { this->defaultRepoType_ = nullptr;};
    inline string getDefaultRepoType() const { DARABONBA_PTR_GET_DEFAULT(defaultRepoType_, "") };
    inline CreateNamespaceRequest& setDefaultRepoType(string defaultRepoType) { DARABONBA_PTR_SET_VALUE(defaultRepoType_, defaultRepoType) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateNamespaceRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // namespaceName Field Functions 
    bool hasNamespaceName() const { return this->namespaceName_ != nullptr;};
    void deleteNamespaceName() { this->namespaceName_ = nullptr;};
    inline string getNamespaceName() const { DARABONBA_PTR_GET_DEFAULT(namespaceName_, "") };
    inline CreateNamespaceRequest& setNamespaceName(string namespaceName) { DARABONBA_PTR_SET_VALUE(namespaceName_, namespaceName) };


  protected:
    // Specifies whether to automatically create an image repository in the namespace.
    shared_ptr<bool> autoCreateRepo_ {};
    shared_ptr<RepoConfiguration> defaultRepoConfiguration_ {};
    // The default type of the repositories that are automatically created in the namespace. Valid values:
    // 
    // *   `PUBLIC`: public repositories
    // *   `PRIVATE`: private repositories.
    shared_ptr<string> defaultRepoType_ {};
    // The ID of the instance.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The name of the namespace. The name must be 2 to 120 characters in length, and can contain lowercase letters, digits, and the following delimiters: underscores (_), hyphens (-), and periods (.). The name cannot start or end with a delimiter.
    // 
    // This parameter is required.
    shared_ptr<string> namespaceName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cr20181201
#endif
