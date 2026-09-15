// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEVENTLEVELCOUNTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEVENTLEVELCOUNTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeEventLevelCountRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEventLevelCountRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(ContainerFieldName, containerFieldName_);
      DARABONBA_PTR_TO_JSON(ContainerFieldValue, containerFieldValue_);
      DARABONBA_PTR_TO_JSON(ContainerIds, containerIds_);
      DARABONBA_PTR_TO_JSON(From, from_);
      DARABONBA_PTR_TO_JSON(MultiAccountActionType, multiAccountActionType_);
      DARABONBA_PTR_TO_JSON(ResourceDirectoryAccountId, resourceDirectoryAccountId_);
      DARABONBA_PTR_TO_JSON(TargetType, targetType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEventLevelCountRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(ContainerFieldName, containerFieldName_);
      DARABONBA_PTR_FROM_JSON(ContainerFieldValue, containerFieldValue_);
      DARABONBA_PTR_FROM_JSON(ContainerIds, containerIds_);
      DARABONBA_PTR_FROM_JSON(From, from_);
      DARABONBA_PTR_FROM_JSON(MultiAccountActionType, multiAccountActionType_);
      DARABONBA_PTR_FROM_JSON(ResourceDirectoryAccountId, resourceDirectoryAccountId_);
      DARABONBA_PTR_FROM_JSON(TargetType, targetType_);
    };
    DescribeEventLevelCountRequest() = default ;
    DescribeEventLevelCountRequest(const DescribeEventLevelCountRequest &) = default ;
    DescribeEventLevelCountRequest(DescribeEventLevelCountRequest &&) = default ;
    DescribeEventLevelCountRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEventLevelCountRequest() = default ;
    DescribeEventLevelCountRequest& operator=(const DescribeEventLevelCountRequest &) = default ;
    DescribeEventLevelCountRequest& operator=(DescribeEventLevelCountRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterId_ == nullptr
        && this->containerFieldName_ == nullptr && this->containerFieldValue_ == nullptr && this->containerIds_ == nullptr && this->from_ == nullptr && this->multiAccountActionType_ == nullptr
        && this->resourceDirectoryAccountId_ == nullptr && this->targetType_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline DescribeEventLevelCountRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // containerFieldName Field Functions 
    bool hasContainerFieldName() const { return this->containerFieldName_ != nullptr;};
    void deleteContainerFieldName() { this->containerFieldName_ = nullptr;};
    inline string getContainerFieldName() const { DARABONBA_PTR_GET_DEFAULT(containerFieldName_, "") };
    inline DescribeEventLevelCountRequest& setContainerFieldName(string containerFieldName) { DARABONBA_PTR_SET_VALUE(containerFieldName_, containerFieldName) };


    // containerFieldValue Field Functions 
    bool hasContainerFieldValue() const { return this->containerFieldValue_ != nullptr;};
    void deleteContainerFieldValue() { this->containerFieldValue_ = nullptr;};
    inline string getContainerFieldValue() const { DARABONBA_PTR_GET_DEFAULT(containerFieldValue_, "") };
    inline DescribeEventLevelCountRequest& setContainerFieldValue(string containerFieldValue) { DARABONBA_PTR_SET_VALUE(containerFieldValue_, containerFieldValue) };


    // containerIds Field Functions 
    bool hasContainerIds() const { return this->containerIds_ != nullptr;};
    void deleteContainerIds() { this->containerIds_ = nullptr;};
    inline string getContainerIds() const { DARABONBA_PTR_GET_DEFAULT(containerIds_, "") };
    inline DescribeEventLevelCountRequest& setContainerIds(string containerIds) { DARABONBA_PTR_SET_VALUE(containerIds_, containerIds) };


    // from Field Functions 
    bool hasFrom() const { return this->from_ != nullptr;};
    void deleteFrom() { this->from_ = nullptr;};
    inline string getFrom() const { DARABONBA_PTR_GET_DEFAULT(from_, "") };
    inline DescribeEventLevelCountRequest& setFrom(string from) { DARABONBA_PTR_SET_VALUE(from_, from) };


    // multiAccountActionType Field Functions 
    bool hasMultiAccountActionType() const { return this->multiAccountActionType_ != nullptr;};
    void deleteMultiAccountActionType() { this->multiAccountActionType_ = nullptr;};
    inline int32_t getMultiAccountActionType() const { DARABONBA_PTR_GET_DEFAULT(multiAccountActionType_, 0) };
    inline DescribeEventLevelCountRequest& setMultiAccountActionType(int32_t multiAccountActionType) { DARABONBA_PTR_SET_VALUE(multiAccountActionType_, multiAccountActionType) };


    // resourceDirectoryAccountId Field Functions 
    bool hasResourceDirectoryAccountId() const { return this->resourceDirectoryAccountId_ != nullptr;};
    void deleteResourceDirectoryAccountId() { this->resourceDirectoryAccountId_ = nullptr;};
    inline int64_t getResourceDirectoryAccountId() const { DARABONBA_PTR_GET_DEFAULT(resourceDirectoryAccountId_, 0L) };
    inline DescribeEventLevelCountRequest& setResourceDirectoryAccountId(int64_t resourceDirectoryAccountId) { DARABONBA_PTR_SET_VALUE(resourceDirectoryAccountId_, resourceDirectoryAccountId) };


    // targetType Field Functions 
    bool hasTargetType() const { return this->targetType_ != nullptr;};
    void deleteTargetType() { this->targetType_ = nullptr;};
    inline string getTargetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, "") };
    inline DescribeEventLevelCountRequest& setTargetType(string targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


  protected:
    // The ID of the container cluster that you want to query.
    // > You can call the [DescribeGroupedContainerInstances](~~DescribeGroupedContainerInstances~~) operation to obtain this parameter.
    shared_ptr<string> clusterId_ {};
    // The container search field. Valid values:
    // 
    // - **instanceId**: instance ID
    // - **appName**: application name
    // - **clusterId**: cluster ID
    // - **regionId**: region
    // - **nodeName**: node name
    // - **namespace**: namespace
    // - **clusterName**: cluster name
    // - **image**: image name
    // - **imageRepoName**: image repository name
    // - **imageRepoNamespace**: image repository namespace
    // - **imageRepoTag**: image tag
    // - **imageDigest**: image digest
    shared_ptr<string> containerFieldName_ {};
    // The value of the field that you want to query. Separate multiple values with commas (,).
    shared_ptr<string> containerFieldValue_ {};
    // The container IDs.
    shared_ptr<string> containerIds_ {};
    // The source identifier of the request. Set this parameter to **sas**.
    shared_ptr<string> from_ {};
    // The multi-account query type. Default value: **0**. Valid values:
    // - **0**: Query data of the current account.
    // - **1**: Query data of all accounts.
    shared_ptr<int32_t> multiAccountActionType_ {};
    // The Alibaba Cloud account ID of the member accounts in the resource folder.
    // >You can invoke the [DescribeMonitorAccounts](~~DescribeMonitorAccounts~~) operation to obtain this parameter.
    shared_ptr<int64_t> resourceDirectoryAccountId_ {};
    // The query type. Valid values:
    // 
    // - **containerId**: container ID
    // - **uuid**: asset ID
    shared_ptr<string> targetType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
