// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETNAMESPACERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETNAMESPACERESPONSEBODY_HPP_
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
  class GetNamespaceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetNamespaceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AutoCreateRepo, autoCreateRepo_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(DefaultRepoConfiguration, defaultRepoConfiguration_);
      DARABONBA_PTR_TO_JSON(DefaultRepoType, defaultRepoType_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(IsSuccess, isSuccess_);
      DARABONBA_PTR_TO_JSON(NamespaceId, namespaceId_);
      DARABONBA_PTR_TO_JSON(NamespaceName, namespaceName_);
      DARABONBA_PTR_TO_JSON(NamespaceStatus, namespaceStatus_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, GetNamespaceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoCreateRepo, autoCreateRepo_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(DefaultRepoConfiguration, defaultRepoConfiguration_);
      DARABONBA_PTR_FROM_JSON(DefaultRepoType, defaultRepoType_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(IsSuccess, isSuccess_);
      DARABONBA_PTR_FROM_JSON(NamespaceId, namespaceId_);
      DARABONBA_PTR_FROM_JSON(NamespaceName, namespaceName_);
      DARABONBA_PTR_FROM_JSON(NamespaceStatus, namespaceStatus_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
    };
    GetNamespaceResponseBody() = default ;
    GetNamespaceResponseBody(const GetNamespaceResponseBody &) = default ;
    GetNamespaceResponseBody(GetNamespaceResponseBody &&) = default ;
    GetNamespaceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetNamespaceResponseBody() = default ;
    GetNamespaceResponseBody& operator=(const GetNamespaceResponseBody &) = default ;
    GetNamespaceResponseBody& operator=(GetNamespaceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoCreateRepo_ == nullptr
        && this->code_ == nullptr && this->defaultRepoConfiguration_ == nullptr && this->defaultRepoType_ == nullptr && this->instanceId_ == nullptr && this->isSuccess_ == nullptr
        && this->namespaceId_ == nullptr && this->namespaceName_ == nullptr && this->namespaceStatus_ == nullptr && this->requestId_ == nullptr && this->resourceGroupId_ == nullptr; };
    // autoCreateRepo Field Functions 
    bool hasAutoCreateRepo() const { return this->autoCreateRepo_ != nullptr;};
    void deleteAutoCreateRepo() { this->autoCreateRepo_ = nullptr;};
    inline bool getAutoCreateRepo() const { DARABONBA_PTR_GET_DEFAULT(autoCreateRepo_, false) };
    inline GetNamespaceResponseBody& setAutoCreateRepo(bool autoCreateRepo) { DARABONBA_PTR_SET_VALUE(autoCreateRepo_, autoCreateRepo) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetNamespaceResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // defaultRepoConfiguration Field Functions 
    bool hasDefaultRepoConfiguration() const { return this->defaultRepoConfiguration_ != nullptr;};
    void deleteDefaultRepoConfiguration() { this->defaultRepoConfiguration_ = nullptr;};
    inline const RepoConfiguration & getDefaultRepoConfiguration() const { DARABONBA_PTR_GET_CONST(defaultRepoConfiguration_, RepoConfiguration) };
    inline RepoConfiguration getDefaultRepoConfiguration() { DARABONBA_PTR_GET(defaultRepoConfiguration_, RepoConfiguration) };
    inline GetNamespaceResponseBody& setDefaultRepoConfiguration(const RepoConfiguration & defaultRepoConfiguration) { DARABONBA_PTR_SET_VALUE(defaultRepoConfiguration_, defaultRepoConfiguration) };
    inline GetNamespaceResponseBody& setDefaultRepoConfiguration(RepoConfiguration && defaultRepoConfiguration) { DARABONBA_PTR_SET_RVALUE(defaultRepoConfiguration_, defaultRepoConfiguration) };


    // defaultRepoType Field Functions 
    bool hasDefaultRepoType() const { return this->defaultRepoType_ != nullptr;};
    void deleteDefaultRepoType() { this->defaultRepoType_ = nullptr;};
    inline string getDefaultRepoType() const { DARABONBA_PTR_GET_DEFAULT(defaultRepoType_, "") };
    inline GetNamespaceResponseBody& setDefaultRepoType(string defaultRepoType) { DARABONBA_PTR_SET_VALUE(defaultRepoType_, defaultRepoType) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetNamespaceResponseBody& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // isSuccess Field Functions 
    bool hasIsSuccess() const { return this->isSuccess_ != nullptr;};
    void deleteIsSuccess() { this->isSuccess_ = nullptr;};
    inline bool getIsSuccess() const { DARABONBA_PTR_GET_DEFAULT(isSuccess_, false) };
    inline GetNamespaceResponseBody& setIsSuccess(bool isSuccess) { DARABONBA_PTR_SET_VALUE(isSuccess_, isSuccess) };


    // namespaceId Field Functions 
    bool hasNamespaceId() const { return this->namespaceId_ != nullptr;};
    void deleteNamespaceId() { this->namespaceId_ = nullptr;};
    inline string getNamespaceId() const { DARABONBA_PTR_GET_DEFAULT(namespaceId_, "") };
    inline GetNamespaceResponseBody& setNamespaceId(string namespaceId) { DARABONBA_PTR_SET_VALUE(namespaceId_, namespaceId) };


    // namespaceName Field Functions 
    bool hasNamespaceName() const { return this->namespaceName_ != nullptr;};
    void deleteNamespaceName() { this->namespaceName_ = nullptr;};
    inline string getNamespaceName() const { DARABONBA_PTR_GET_DEFAULT(namespaceName_, "") };
    inline GetNamespaceResponseBody& setNamespaceName(string namespaceName) { DARABONBA_PTR_SET_VALUE(namespaceName_, namespaceName) };


    // namespaceStatus Field Functions 
    bool hasNamespaceStatus() const { return this->namespaceStatus_ != nullptr;};
    void deleteNamespaceStatus() { this->namespaceStatus_ = nullptr;};
    inline string getNamespaceStatus() const { DARABONBA_PTR_GET_DEFAULT(namespaceStatus_, "") };
    inline GetNamespaceResponseBody& setNamespaceStatus(string namespaceStatus) { DARABONBA_PTR_SET_VALUE(namespaceStatus_, namespaceStatus) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetNamespaceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline GetNamespaceResponseBody& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


  protected:
    // Indicates whether a repository is automatically created when an image is pushed to the namespace.
    shared_ptr<bool> autoCreateRepo_ {};
    // The return value.
    shared_ptr<string> code_ {};
    shared_ptr<RepoConfiguration> defaultRepoConfiguration_ {};
    // The default type of repositories in the namespace. Valid values:
    // 
    // *   PUBLIC: public repositories.
    // *   PRIVATE: private repositories.
    shared_ptr<string> defaultRepoType_ {};
    // The ID of the Container Registry instance.
    shared_ptr<string> instanceId_ {};
    // Indicates whether the request was successful.
    shared_ptr<bool> isSuccess_ {};
    // The ID of the namespace.
    shared_ptr<string> namespaceId_ {};
    // The name of the namespace.
    shared_ptr<string> namespaceName_ {};
    // The status of the namespace.
    // 
    // *   NORMAL
    // *   DELETING
    shared_ptr<string> namespaceStatus_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The ID of the resource group to which the namespace belongs.
    shared_ptr<string> resourceGroupId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cr20181201
#endif
