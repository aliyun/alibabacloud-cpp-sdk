// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLOGSTASHRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_LISTLOGSTASHRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListLogstashResponseBodyResultTags.hpp>
#include <alibabacloud/models/ListLogstashResponseBodyResultNetworkConfig.hpp>
#include <alibabacloud/models/ListLogstashResponseBodyResultNodeSpec.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class ListLogstashResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListLogstashResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(createdAt, createdAt_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(instanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(networkConfig, networkConfig_);
      DARABONBA_PTR_TO_JSON(nodeAmount, nodeAmount_);
      DARABONBA_PTR_TO_JSON(nodeSpec, nodeSpec_);
      DARABONBA_PTR_TO_JSON(paymentType, paymentType_);
      DARABONBA_PTR_TO_JSON(resourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(updatedAt, updatedAt_);
      DARABONBA_PTR_TO_JSON(version, version_);
    };
    friend void from_json(const Darabonba::Json& j, ListLogstashResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(createdAt, createdAt_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(instanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(networkConfig, networkConfig_);
      DARABONBA_PTR_FROM_JSON(nodeAmount, nodeAmount_);
      DARABONBA_PTR_FROM_JSON(nodeSpec, nodeSpec_);
      DARABONBA_PTR_FROM_JSON(paymentType, paymentType_);
      DARABONBA_PTR_FROM_JSON(resourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(updatedAt, updatedAt_);
      DARABONBA_PTR_FROM_JSON(version, version_);
    };
    ListLogstashResponseBodyResult() = default ;
    ListLogstashResponseBodyResult(const ListLogstashResponseBodyResult &) = default ;
    ListLogstashResponseBodyResult(ListLogstashResponseBodyResult &&) = default ;
    ListLogstashResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListLogstashResponseBodyResult() = default ;
    ListLogstashResponseBodyResult& operator=(const ListLogstashResponseBodyResult &) = default ;
    ListLogstashResponseBodyResult& operator=(ListLogstashResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->tags_ != nullptr
        && this->createdAt_ != nullptr && this->description_ != nullptr && this->instanceId_ != nullptr && this->networkConfig_ != nullptr && this->nodeAmount_ != nullptr
        && this->nodeSpec_ != nullptr && this->paymentType_ != nullptr && this->resourceGroupId_ != nullptr && this->status_ != nullptr && this->updatedAt_ != nullptr
        && this->version_ != nullptr; };
    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Models::ListLogstashResponseBodyResultTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Models::ListLogstashResponseBodyResultTags>) };
    inline vector<Models::ListLogstashResponseBodyResultTags> tags() { DARABONBA_PTR_GET(tags_, vector<Models::ListLogstashResponseBodyResultTags>) };
    inline ListLogstashResponseBodyResult& setTags(const vector<Models::ListLogstashResponseBodyResultTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline ListLogstashResponseBodyResult& setTags(vector<Models::ListLogstashResponseBodyResultTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // createdAt Field Functions 
    bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
    void deleteCreatedAt() { this->createdAt_ = nullptr;};
    inline string createdAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, "") };
    inline ListLogstashResponseBodyResult& setCreatedAt(string createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListLogstashResponseBodyResult& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListLogstashResponseBodyResult& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // networkConfig Field Functions 
    bool hasNetworkConfig() const { return this->networkConfig_ != nullptr;};
    void deleteNetworkConfig() { this->networkConfig_ = nullptr;};
    inline const Models::ListLogstashResponseBodyResultNetworkConfig & networkConfig() const { DARABONBA_PTR_GET_CONST(networkConfig_, Models::ListLogstashResponseBodyResultNetworkConfig) };
    inline Models::ListLogstashResponseBodyResultNetworkConfig networkConfig() { DARABONBA_PTR_GET(networkConfig_, Models::ListLogstashResponseBodyResultNetworkConfig) };
    inline ListLogstashResponseBodyResult& setNetworkConfig(const Models::ListLogstashResponseBodyResultNetworkConfig & networkConfig) { DARABONBA_PTR_SET_VALUE(networkConfig_, networkConfig) };
    inline ListLogstashResponseBodyResult& setNetworkConfig(Models::ListLogstashResponseBodyResultNetworkConfig && networkConfig) { DARABONBA_PTR_SET_RVALUE(networkConfig_, networkConfig) };


    // nodeAmount Field Functions 
    bool hasNodeAmount() const { return this->nodeAmount_ != nullptr;};
    void deleteNodeAmount() { this->nodeAmount_ = nullptr;};
    inline int32_t nodeAmount() const { DARABONBA_PTR_GET_DEFAULT(nodeAmount_, 0) };
    inline ListLogstashResponseBodyResult& setNodeAmount(int32_t nodeAmount) { DARABONBA_PTR_SET_VALUE(nodeAmount_, nodeAmount) };


    // nodeSpec Field Functions 
    bool hasNodeSpec() const { return this->nodeSpec_ != nullptr;};
    void deleteNodeSpec() { this->nodeSpec_ = nullptr;};
    inline const Models::ListLogstashResponseBodyResultNodeSpec & nodeSpec() const { DARABONBA_PTR_GET_CONST(nodeSpec_, Models::ListLogstashResponseBodyResultNodeSpec) };
    inline Models::ListLogstashResponseBodyResultNodeSpec nodeSpec() { DARABONBA_PTR_GET(nodeSpec_, Models::ListLogstashResponseBodyResultNodeSpec) };
    inline ListLogstashResponseBodyResult& setNodeSpec(const Models::ListLogstashResponseBodyResultNodeSpec & nodeSpec) { DARABONBA_PTR_SET_VALUE(nodeSpec_, nodeSpec) };
    inline ListLogstashResponseBodyResult& setNodeSpec(Models::ListLogstashResponseBodyResultNodeSpec && nodeSpec) { DARABONBA_PTR_SET_RVALUE(nodeSpec_, nodeSpec) };


    // paymentType Field Functions 
    bool hasPaymentType() const { return this->paymentType_ != nullptr;};
    void deletePaymentType() { this->paymentType_ = nullptr;};
    inline string paymentType() const { DARABONBA_PTR_GET_DEFAULT(paymentType_, "") };
    inline ListLogstashResponseBodyResult& setPaymentType(string paymentType) { DARABONBA_PTR_SET_VALUE(paymentType_, paymentType) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ListLogstashResponseBodyResult& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListLogstashResponseBodyResult& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // updatedAt Field Functions 
    bool hasUpdatedAt() const { return this->updatedAt_ != nullptr;};
    void deleteUpdatedAt() { this->updatedAt_ = nullptr;};
    inline string updatedAt() const { DARABONBA_PTR_GET_DEFAULT(updatedAt_, "") };
    inline ListLogstashResponseBodyResult& setUpdatedAt(string updatedAt) { DARABONBA_PTR_SET_VALUE(updatedAt_, updatedAt) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string version() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline ListLogstashResponseBodyResult& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    // The configuration information of the data node.
    std::shared_ptr<vector<Models::ListLogstashResponseBodyResultTags>> tags_ = nullptr;
    // The ID of the instance.
    std::shared_ptr<string> createdAt_ = nullptr;
    // The time when the instance was last updated.
    std::shared_ptr<string> description_ = nullptr;
    // The tag value of the cloud disk.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The network type. Currently, only Virtual Private Cloud (VPC) is supported.
    std::shared_ptr<Models::ListLogstashResponseBodyResultNetworkConfig> networkConfig_ = nullptr;
    // The state of the instance. Valid values: Normal, Active, Inactive, and Invalid.
    std::shared_ptr<int32_t> nodeAmount_ = nullptr;
    // Specifies whether to use disk encryption. Valid values:
    // 
    // *   true: Enables the concurrent query feature for queries other than aggregate queries.
    // *   false: Disables the concurrent query feature for queries other than aggregate queries.
    std::shared_ptr<Models::ListLogstashResponseBodyResultNodeSpec> nodeSpec_ = nullptr;
    // The time when the instance was created.
    std::shared_ptr<string> paymentType_ = nullptr;
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The version of the instance. Currently, only 6.7.0_with_X-Pack and 7.4.0_with_X-Pack are supported.
    std::shared_ptr<string> status_ = nullptr;
    // The tag of the instance. Valid values:
    std::shared_ptr<string> updatedAt_ = nullptr;
    // The tag key of the cloud disk.
    std::shared_ptr<string> version_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
