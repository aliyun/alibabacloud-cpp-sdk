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
      DARABONBA_PTR_TO_JSON(TargetType, targetType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEventLevelCountRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(ContainerFieldName, containerFieldName_);
      DARABONBA_PTR_FROM_JSON(ContainerFieldValue, containerFieldValue_);
      DARABONBA_PTR_FROM_JSON(ContainerIds, containerIds_);
      DARABONBA_PTR_FROM_JSON(From, from_);
      DARABONBA_PTR_FROM_JSON(MultiAccountActionType, multiAccountActionType_);
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
    virtual bool empty() const override { this->clusterId_ != nullptr
        && this->containerFieldName_ != nullptr && this->containerFieldValue_ != nullptr && this->containerIds_ != nullptr && this->from_ != nullptr && this->multiAccountActionType_ != nullptr
        && this->targetType_ != nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline DescribeEventLevelCountRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // containerFieldName Field Functions 
    bool hasContainerFieldName() const { return this->containerFieldName_ != nullptr;};
    void deleteContainerFieldName() { this->containerFieldName_ = nullptr;};
    inline string containerFieldName() const { DARABONBA_PTR_GET_DEFAULT(containerFieldName_, "") };
    inline DescribeEventLevelCountRequest& setContainerFieldName(string containerFieldName) { DARABONBA_PTR_SET_VALUE(containerFieldName_, containerFieldName) };


    // containerFieldValue Field Functions 
    bool hasContainerFieldValue() const { return this->containerFieldValue_ != nullptr;};
    void deleteContainerFieldValue() { this->containerFieldValue_ = nullptr;};
    inline string containerFieldValue() const { DARABONBA_PTR_GET_DEFAULT(containerFieldValue_, "") };
    inline DescribeEventLevelCountRequest& setContainerFieldValue(string containerFieldValue) { DARABONBA_PTR_SET_VALUE(containerFieldValue_, containerFieldValue) };


    // containerIds Field Functions 
    bool hasContainerIds() const { return this->containerIds_ != nullptr;};
    void deleteContainerIds() { this->containerIds_ = nullptr;};
    inline string containerIds() const { DARABONBA_PTR_GET_DEFAULT(containerIds_, "") };
    inline DescribeEventLevelCountRequest& setContainerIds(string containerIds) { DARABONBA_PTR_SET_VALUE(containerIds_, containerIds) };


    // from Field Functions 
    bool hasFrom() const { return this->from_ != nullptr;};
    void deleteFrom() { this->from_ = nullptr;};
    inline string from() const { DARABONBA_PTR_GET_DEFAULT(from_, "") };
    inline DescribeEventLevelCountRequest& setFrom(string from) { DARABONBA_PTR_SET_VALUE(from_, from) };


    // multiAccountActionType Field Functions 
    bool hasMultiAccountActionType() const { return this->multiAccountActionType_ != nullptr;};
    void deleteMultiAccountActionType() { this->multiAccountActionType_ = nullptr;};
    inline int32_t multiAccountActionType() const { DARABONBA_PTR_GET_DEFAULT(multiAccountActionType_, 0) };
    inline DescribeEventLevelCountRequest& setMultiAccountActionType(int32_t multiAccountActionType) { DARABONBA_PTR_SET_VALUE(multiAccountActionType_, multiAccountActionType) };


    // targetType Field Functions 
    bool hasTargetType() const { return this->targetType_ != nullptr;};
    void deleteTargetType() { this->targetType_ = nullptr;};
    inline string targetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, "") };
    inline DescribeEventLevelCountRequest& setTargetType(string targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


  protected:
    // The ID of the container cluster.
    // 
    // > You can call the [DescribeGroupedContainerInstances](~~DescribeGroupedContainerInstances~~) operation to query the IDs of container clusters.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The key of the condition that is used to query alert events on containers. Valid values:
    // 
    // *   **instanceId**: the ID of the asset
    // *   **appName**: the name of the application
    // *   **clusterId**: the ID of the cluster
    // *   **regionId**: the ID of the region
    // *   **nodeName**: the name of the node
    // *   **namespace**: the namespace
    // *   **clusterName**: the name of the cluster
    // *   **image**: the name of the image
    // *   **imageRepoName**: the name of the image repository
    // *   **imageRepoNamespace**: the namespace to which the image repository belongs
    // *   **imageRepoTag**: the tag that is added to the image
    // *   **imageDigest**: the digest of the image
    std::shared_ptr<string> containerFieldName_ = nullptr;
    // The value of the condition that is used to query alert events on containers. If you specify multiple values, separate them with commas (,).
    std::shared_ptr<string> containerFieldValue_ = nullptr;
    // The ID of the container.
    std::shared_ptr<string> containerIds_ = nullptr;
    // The ID of the request source. Set the value to **sas**.
    std::shared_ptr<string> from_ = nullptr;
    // The type of the accounts that you want to query. Default value: **0**. Valid values:
    // 
    // *   **0**: the current account.
    // *   **1**: all accounts.
    std::shared_ptr<int32_t> multiAccountActionType_ = nullptr;
    // The type of the query condition. Valid values:
    // 
    // *   **containerId**: the ID of the container
    // *   **uuid**: the UUID of the asset
    std::shared_ptr<string> targetType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
