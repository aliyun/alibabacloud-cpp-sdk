// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RENEWCLOUDPHONENODESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RENEWCLOUDPHONENODESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsAic20230930
{
namespace Models
{
  class RenewCloudPhoneNodesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RenewCloudPhoneNodesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AutoPay, autoPay_);
      DARABONBA_PTR_TO_JSON(AutoRenew, autoRenew_);
      DARABONBA_PTR_TO_JSON(NodeIds, nodeIds_);
      DARABONBA_PTR_TO_JSON(Period, period_);
      DARABONBA_PTR_TO_JSON(PeriodUnit, periodUnit_);
      DARABONBA_PTR_TO_JSON(PromotionId, promotionId_);
    };
    friend void from_json(const Darabonba::Json& j, RenewCloudPhoneNodesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoPay, autoPay_);
      DARABONBA_PTR_FROM_JSON(AutoRenew, autoRenew_);
      DARABONBA_PTR_FROM_JSON(NodeIds, nodeIds_);
      DARABONBA_PTR_FROM_JSON(Period, period_);
      DARABONBA_PTR_FROM_JSON(PeriodUnit, periodUnit_);
      DARABONBA_PTR_FROM_JSON(PromotionId, promotionId_);
    };
    RenewCloudPhoneNodesRequest() = default ;
    RenewCloudPhoneNodesRequest(const RenewCloudPhoneNodesRequest &) = default ;
    RenewCloudPhoneNodesRequest(RenewCloudPhoneNodesRequest &&) = default ;
    RenewCloudPhoneNodesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RenewCloudPhoneNodesRequest() = default ;
    RenewCloudPhoneNodesRequest& operator=(const RenewCloudPhoneNodesRequest &) = default ;
    RenewCloudPhoneNodesRequest& operator=(RenewCloudPhoneNodesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoPay_ == nullptr
        && return this->autoRenew_ == nullptr && return this->nodeIds_ == nullptr && return this->period_ == nullptr && return this->periodUnit_ == nullptr && return this->promotionId_ == nullptr; };
    // autoPay Field Functions 
    bool hasAutoPay() const { return this->autoPay_ != nullptr;};
    void deleteAutoPay() { this->autoPay_ = nullptr;};
    inline bool autoPay() const { DARABONBA_PTR_GET_DEFAULT(autoPay_, false) };
    inline RenewCloudPhoneNodesRequest& setAutoPay(bool autoPay) { DARABONBA_PTR_SET_VALUE(autoPay_, autoPay) };


    // autoRenew Field Functions 
    bool hasAutoRenew() const { return this->autoRenew_ != nullptr;};
    void deleteAutoRenew() { this->autoRenew_ = nullptr;};
    inline bool autoRenew() const { DARABONBA_PTR_GET_DEFAULT(autoRenew_, false) };
    inline RenewCloudPhoneNodesRequest& setAutoRenew(bool autoRenew) { DARABONBA_PTR_SET_VALUE(autoRenew_, autoRenew) };


    // nodeIds Field Functions 
    bool hasNodeIds() const { return this->nodeIds_ != nullptr;};
    void deleteNodeIds() { this->nodeIds_ = nullptr;};
    inline const vector<string> & nodeIds() const { DARABONBA_PTR_GET_CONST(nodeIds_, vector<string>) };
    inline vector<string> nodeIds() { DARABONBA_PTR_GET(nodeIds_, vector<string>) };
    inline RenewCloudPhoneNodesRequest& setNodeIds(const vector<string> & nodeIds) { DARABONBA_PTR_SET_VALUE(nodeIds_, nodeIds) };
    inline RenewCloudPhoneNodesRequest& setNodeIds(vector<string> && nodeIds) { DARABONBA_PTR_SET_RVALUE(nodeIds_, nodeIds) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline int32_t period() const { DARABONBA_PTR_GET_DEFAULT(period_, 0) };
    inline RenewCloudPhoneNodesRequest& setPeriod(int32_t period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // periodUnit Field Functions 
    bool hasPeriodUnit() const { return this->periodUnit_ != nullptr;};
    void deletePeriodUnit() { this->periodUnit_ = nullptr;};
    inline string periodUnit() const { DARABONBA_PTR_GET_DEFAULT(periodUnit_, "") };
    inline RenewCloudPhoneNodesRequest& setPeriodUnit(string periodUnit) { DARABONBA_PTR_SET_VALUE(periodUnit_, periodUnit) };


    // promotionId Field Functions 
    bool hasPromotionId() const { return this->promotionId_ != nullptr;};
    void deletePromotionId() { this->promotionId_ = nullptr;};
    inline string promotionId() const { DARABONBA_PTR_GET_DEFAULT(promotionId_, "") };
    inline RenewCloudPhoneNodesRequest& setPromotionId(string promotionId) { DARABONBA_PTR_SET_VALUE(promotionId_, promotionId) };


  protected:
    std::shared_ptr<bool> autoPay_ = nullptr;
    // Specifies whether to enable the auto-renewal feature.
    // 
    // Valid values:
    // 
    // *   true: enables the auto-renewal feature. In this case, the system automatically renews the instance upon expiration.
    // *   false (default): disables the auto-renewal feature. In this case, you need to manually renew the instance upon expiration.
    std::shared_ptr<bool> autoRenew_ = nullptr;
    // The cloud phone matrix IDs.
    std::shared_ptr<vector<string>> nodeIds_ = nullptr;
    // The subscription duration. The unit is specified by `PeriodUnit`. Valid values:
    // 
    // *   When `PeriodUnit` is set to **year**: 1.
    // *   When `PeriodUnit` is set to **month**: 1, 2, 3, and 6.
    std::shared_ptr<int32_t> period_ = nullptr;
    // The unit of the subscription duration.
    // 
    // Valid values:
    // 
    // *   Month (default)
    // *   Year
    std::shared_ptr<string> periodUnit_ = nullptr;
    std::shared_ptr<string> promotionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
