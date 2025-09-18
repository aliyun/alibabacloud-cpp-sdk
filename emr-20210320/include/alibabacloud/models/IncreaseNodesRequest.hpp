// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INCREASENODESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_INCREASENODESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ApplicationConfig.hpp>
#include <alibabacloud/models/Promotion.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class IncreaseNodesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IncreaseNodesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationConfigs, applicationConfigs_);
      DARABONBA_PTR_TO_JSON(AutoPayOrder, autoPayOrder_);
      DARABONBA_PTR_TO_JSON(AutoRenew, autoRenew_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(IncreaseNodeCount, increaseNodeCount_);
      DARABONBA_PTR_TO_JSON(MinIncreaseNodeCount, minIncreaseNodeCount_);
      DARABONBA_PTR_TO_JSON(NodeGroupId, nodeGroupId_);
      DARABONBA_PTR_TO_JSON(PaymentDuration, paymentDuration_);
      DARABONBA_PTR_TO_JSON(PaymentDurationUnit, paymentDurationUnit_);
      DARABONBA_PTR_TO_JSON(Promotions, promotions_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, IncreaseNodesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationConfigs, applicationConfigs_);
      DARABONBA_PTR_FROM_JSON(AutoPayOrder, autoPayOrder_);
      DARABONBA_PTR_FROM_JSON(AutoRenew, autoRenew_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(IncreaseNodeCount, increaseNodeCount_);
      DARABONBA_PTR_FROM_JSON(MinIncreaseNodeCount, minIncreaseNodeCount_);
      DARABONBA_PTR_FROM_JSON(NodeGroupId, nodeGroupId_);
      DARABONBA_PTR_FROM_JSON(PaymentDuration, paymentDuration_);
      DARABONBA_PTR_FROM_JSON(PaymentDurationUnit, paymentDurationUnit_);
      DARABONBA_PTR_FROM_JSON(Promotions, promotions_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    IncreaseNodesRequest() = default ;
    IncreaseNodesRequest(const IncreaseNodesRequest &) = default ;
    IncreaseNodesRequest(IncreaseNodesRequest &&) = default ;
    IncreaseNodesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IncreaseNodesRequest() = default ;
    IncreaseNodesRequest& operator=(const IncreaseNodesRequest &) = default ;
    IncreaseNodesRequest& operator=(IncreaseNodesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->applicationConfigs_ != nullptr
        && this->autoPayOrder_ != nullptr && this->autoRenew_ != nullptr && this->clusterId_ != nullptr && this->increaseNodeCount_ != nullptr && this->minIncreaseNodeCount_ != nullptr
        && this->nodeGroupId_ != nullptr && this->paymentDuration_ != nullptr && this->paymentDurationUnit_ != nullptr && this->promotions_ != nullptr && this->regionId_ != nullptr; };
    // applicationConfigs Field Functions 
    bool hasApplicationConfigs() const { return this->applicationConfigs_ != nullptr;};
    void deleteApplicationConfigs() { this->applicationConfigs_ = nullptr;};
    inline const vector<ApplicationConfig> & applicationConfigs() const { DARABONBA_PTR_GET_CONST(applicationConfigs_, vector<ApplicationConfig>) };
    inline vector<ApplicationConfig> applicationConfigs() { DARABONBA_PTR_GET(applicationConfigs_, vector<ApplicationConfig>) };
    inline IncreaseNodesRequest& setApplicationConfigs(const vector<ApplicationConfig> & applicationConfigs) { DARABONBA_PTR_SET_VALUE(applicationConfigs_, applicationConfigs) };
    inline IncreaseNodesRequest& setApplicationConfigs(vector<ApplicationConfig> && applicationConfigs) { DARABONBA_PTR_SET_RVALUE(applicationConfigs_, applicationConfigs) };


    // autoPayOrder Field Functions 
    bool hasAutoPayOrder() const { return this->autoPayOrder_ != nullptr;};
    void deleteAutoPayOrder() { this->autoPayOrder_ = nullptr;};
    inline bool autoPayOrder() const { DARABONBA_PTR_GET_DEFAULT(autoPayOrder_, false) };
    inline IncreaseNodesRequest& setAutoPayOrder(bool autoPayOrder) { DARABONBA_PTR_SET_VALUE(autoPayOrder_, autoPayOrder) };


    // autoRenew Field Functions 
    bool hasAutoRenew() const { return this->autoRenew_ != nullptr;};
    void deleteAutoRenew() { this->autoRenew_ = nullptr;};
    inline bool autoRenew() const { DARABONBA_PTR_GET_DEFAULT(autoRenew_, false) };
    inline IncreaseNodesRequest& setAutoRenew(bool autoRenew) { DARABONBA_PTR_SET_VALUE(autoRenew_, autoRenew) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline IncreaseNodesRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // increaseNodeCount Field Functions 
    bool hasIncreaseNodeCount() const { return this->increaseNodeCount_ != nullptr;};
    void deleteIncreaseNodeCount() { this->increaseNodeCount_ = nullptr;};
    inline int32_t increaseNodeCount() const { DARABONBA_PTR_GET_DEFAULT(increaseNodeCount_, 0) };
    inline IncreaseNodesRequest& setIncreaseNodeCount(int32_t increaseNodeCount) { DARABONBA_PTR_SET_VALUE(increaseNodeCount_, increaseNodeCount) };


    // minIncreaseNodeCount Field Functions 
    bool hasMinIncreaseNodeCount() const { return this->minIncreaseNodeCount_ != nullptr;};
    void deleteMinIncreaseNodeCount() { this->minIncreaseNodeCount_ = nullptr;};
    inline int32_t minIncreaseNodeCount() const { DARABONBA_PTR_GET_DEFAULT(minIncreaseNodeCount_, 0) };
    inline IncreaseNodesRequest& setMinIncreaseNodeCount(int32_t minIncreaseNodeCount) { DARABONBA_PTR_SET_VALUE(minIncreaseNodeCount_, minIncreaseNodeCount) };


    // nodeGroupId Field Functions 
    bool hasNodeGroupId() const { return this->nodeGroupId_ != nullptr;};
    void deleteNodeGroupId() { this->nodeGroupId_ = nullptr;};
    inline string nodeGroupId() const { DARABONBA_PTR_GET_DEFAULT(nodeGroupId_, "") };
    inline IncreaseNodesRequest& setNodeGroupId(string nodeGroupId) { DARABONBA_PTR_SET_VALUE(nodeGroupId_, nodeGroupId) };


    // paymentDuration Field Functions 
    bool hasPaymentDuration() const { return this->paymentDuration_ != nullptr;};
    void deletePaymentDuration() { this->paymentDuration_ = nullptr;};
    inline int32_t paymentDuration() const { DARABONBA_PTR_GET_DEFAULT(paymentDuration_, 0) };
    inline IncreaseNodesRequest& setPaymentDuration(int32_t paymentDuration) { DARABONBA_PTR_SET_VALUE(paymentDuration_, paymentDuration) };


    // paymentDurationUnit Field Functions 
    bool hasPaymentDurationUnit() const { return this->paymentDurationUnit_ != nullptr;};
    void deletePaymentDurationUnit() { this->paymentDurationUnit_ = nullptr;};
    inline string paymentDurationUnit() const { DARABONBA_PTR_GET_DEFAULT(paymentDurationUnit_, "") };
    inline IncreaseNodesRequest& setPaymentDurationUnit(string paymentDurationUnit) { DARABONBA_PTR_SET_VALUE(paymentDurationUnit_, paymentDurationUnit) };


    // promotions Field Functions 
    bool hasPromotions() const { return this->promotions_ != nullptr;};
    void deletePromotions() { this->promotions_ = nullptr;};
    inline const vector<Promotion> & promotions() const { DARABONBA_PTR_GET_CONST(promotions_, vector<Promotion>) };
    inline vector<Promotion> promotions() { DARABONBA_PTR_GET(promotions_, vector<Promotion>) };
    inline IncreaseNodesRequest& setPromotions(const vector<Promotion> & promotions) { DARABONBA_PTR_SET_VALUE(promotions_, promotions) };
    inline IncreaseNodesRequest& setPromotions(vector<Promotion> && promotions) { DARABONBA_PTR_SET_RVALUE(promotions_, promotions) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline IncreaseNodesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The application configurations. Number of elements in the array: 1 to 1,000.
    std::shared_ptr<vector<ApplicationConfig>> applicationConfigs_ = nullptr;
    // Indicates whether to automatically pay for the orders involved in the scale-out operation. This parameter takes effect only when the PaymentType parameter is set to Subscription. Valid values:
    // 
    // *   true: automatically pays for the order involved in this operation.
    // *   false: does not automatically pay for the orders involved in this operation.
    // 
    // Default value: false
    std::shared_ptr<bool> autoPayOrder_ = nullptr;
    // Specifies whether to enable auto-renewal for nodes. Valid values:
    // 
    // *   true
    // *   false (default value)
    std::shared_ptr<bool> autoRenew_ = nullptr;
    // The ID of the cluster.
    // 
    // This parameter is required.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The number of nodes to add.Valid values: 1 to 500.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> increaseNodeCount_ = nullptr;
    // The minimum number of nodes that can be added. Valid values: 1 to 500.
    // 
    // *   If you configure this parameter, and the number of available Elastic Compute Service (ECS) instances is less than the value of the IncreaseNodeCount parameter, the system tries to add nodes based on the number specified by the `MinIncreaseNodeCount` parameter. If the minimum number of nodes are added, the scale-out status is `PARTIAL_COMPLETED`.
    // *   If you do not configure this parameter, and the number of available ECS instances is less than the value of the IncreaseNodeCount parameter, the scale-out process fails. The scale-out status is `FAILED`.
    std::shared_ptr<int32_t> minIncreaseNodeCount_ = nullptr;
    // The ID of the node group. The target node group to which you want to scale out the cluster.
    // 
    // This parameter is required.
    std::shared_ptr<string> nodeGroupId_ = nullptr;
    // The subscription duration. Valid values when the PaymentDurationUnit value is Month: 1, 2, 3, 4, 5, 6, 7, 8, 9, 12, 24, 36, 48, and 60.
    std::shared_ptr<int32_t> paymentDuration_ = nullptr;
    // The unit of the subscription duration. Valid values:
    // 
    // *   Month
    std::shared_ptr<string> paymentDurationUnit_ = nullptr;
    std::shared_ptr<vector<Promotion>> promotions_ = nullptr;
    // The ID of the region in which you want to create the instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
