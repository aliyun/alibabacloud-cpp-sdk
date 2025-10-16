// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RENEWWUYINGSERVERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RENEWWUYINGSERVERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class RenewWuyingServerRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RenewWuyingServerRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AutoPay, autoPay_);
      DARABONBA_PTR_TO_JSON(Period, period_);
      DARABONBA_PTR_TO_JSON(PeriodUnit, periodUnit_);
      DARABONBA_PTR_TO_JSON(PromotionId, promotionId_);
      DARABONBA_PTR_TO_JSON(WuyingServerId, wuyingServerId_);
    };
    friend void from_json(const Darabonba::Json& j, RenewWuyingServerRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoPay, autoPay_);
      DARABONBA_PTR_FROM_JSON(Period, period_);
      DARABONBA_PTR_FROM_JSON(PeriodUnit, periodUnit_);
      DARABONBA_PTR_FROM_JSON(PromotionId, promotionId_);
      DARABONBA_PTR_FROM_JSON(WuyingServerId, wuyingServerId_);
    };
    RenewWuyingServerRequest() = default ;
    RenewWuyingServerRequest(const RenewWuyingServerRequest &) = default ;
    RenewWuyingServerRequest(RenewWuyingServerRequest &&) = default ;
    RenewWuyingServerRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RenewWuyingServerRequest() = default ;
    RenewWuyingServerRequest& operator=(const RenewWuyingServerRequest &) = default ;
    RenewWuyingServerRequest& operator=(RenewWuyingServerRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoPay_ == nullptr
        && return this->period_ == nullptr && return this->periodUnit_ == nullptr && return this->promotionId_ == nullptr && return this->wuyingServerId_ == nullptr; };
    // autoPay Field Functions 
    bool hasAutoPay() const { return this->autoPay_ != nullptr;};
    void deleteAutoPay() { this->autoPay_ = nullptr;};
    inline bool autoPay() const { DARABONBA_PTR_GET_DEFAULT(autoPay_, false) };
    inline RenewWuyingServerRequest& setAutoPay(bool autoPay) { DARABONBA_PTR_SET_VALUE(autoPay_, autoPay) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline int32_t period() const { DARABONBA_PTR_GET_DEFAULT(period_, 0) };
    inline RenewWuyingServerRequest& setPeriod(int32_t period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // periodUnit Field Functions 
    bool hasPeriodUnit() const { return this->periodUnit_ != nullptr;};
    void deletePeriodUnit() { this->periodUnit_ = nullptr;};
    inline string periodUnit() const { DARABONBA_PTR_GET_DEFAULT(periodUnit_, "") };
    inline RenewWuyingServerRequest& setPeriodUnit(string periodUnit) { DARABONBA_PTR_SET_VALUE(periodUnit_, periodUnit) };


    // promotionId Field Functions 
    bool hasPromotionId() const { return this->promotionId_ != nullptr;};
    void deletePromotionId() { this->promotionId_ = nullptr;};
    inline string promotionId() const { DARABONBA_PTR_GET_DEFAULT(promotionId_, "") };
    inline RenewWuyingServerRequest& setPromotionId(string promotionId) { DARABONBA_PTR_SET_VALUE(promotionId_, promotionId) };


    // wuyingServerId Field Functions 
    bool hasWuyingServerId() const { return this->wuyingServerId_ != nullptr;};
    void deleteWuyingServerId() { this->wuyingServerId_ = nullptr;};
    inline string wuyingServerId() const { DARABONBA_PTR_GET_DEFAULT(wuyingServerId_, "") };
    inline RenewWuyingServerRequest& setWuyingServerId(string wuyingServerId) { DARABONBA_PTR_SET_VALUE(wuyingServerId_, wuyingServerId) };


  protected:
    std::shared_ptr<bool> autoPay_ = nullptr;
    std::shared_ptr<int32_t> period_ = nullptr;
    std::shared_ptr<string> periodUnit_ = nullptr;
    std::shared_ptr<string> promotionId_ = nullptr;
    std::shared_ptr<string> wuyingServerId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
