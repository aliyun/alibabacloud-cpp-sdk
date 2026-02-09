// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETFUNDACCOUNTLOWAVAILABLEAMOUNTALARMREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETFUNDACCOUNTLOWAVAILABLEAMOUNTALARMREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20230930
{
namespace Models
{
  class SetFundAccountLowAvailableAmountAlarmRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetFundAccountLowAvailableAmountAlarmRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FundAccountId, fundAccountId_);
      DARABONBA_PTR_TO_JSON(ThresholdAmount, thresholdAmount_);
    };
    friend void from_json(const Darabonba::Json& j, SetFundAccountLowAvailableAmountAlarmRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FundAccountId, fundAccountId_);
      DARABONBA_PTR_FROM_JSON(ThresholdAmount, thresholdAmount_);
    };
    SetFundAccountLowAvailableAmountAlarmRequest() = default ;
    SetFundAccountLowAvailableAmountAlarmRequest(const SetFundAccountLowAvailableAmountAlarmRequest &) = default ;
    SetFundAccountLowAvailableAmountAlarmRequest(SetFundAccountLowAvailableAmountAlarmRequest &&) = default ;
    SetFundAccountLowAvailableAmountAlarmRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetFundAccountLowAvailableAmountAlarmRequest() = default ;
    SetFundAccountLowAvailableAmountAlarmRequest& operator=(const SetFundAccountLowAvailableAmountAlarmRequest &) = default ;
    SetFundAccountLowAvailableAmountAlarmRequest& operator=(SetFundAccountLowAvailableAmountAlarmRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fundAccountId_ == nullptr
        && this->thresholdAmount_ == nullptr; };
    // fundAccountId Field Functions 
    bool hasFundAccountId() const { return this->fundAccountId_ != nullptr;};
    void deleteFundAccountId() { this->fundAccountId_ = nullptr;};
    inline int64_t getFundAccountId() const { DARABONBA_PTR_GET_DEFAULT(fundAccountId_, 0L) };
    inline SetFundAccountLowAvailableAmountAlarmRequest& setFundAccountId(int64_t fundAccountId) { DARABONBA_PTR_SET_VALUE(fundAccountId_, fundAccountId) };


    // thresholdAmount Field Functions 
    bool hasThresholdAmount() const { return this->thresholdAmount_ != nullptr;};
    void deleteThresholdAmount() { this->thresholdAmount_ = nullptr;};
    inline string getThresholdAmount() const { DARABONBA_PTR_GET_DEFAULT(thresholdAmount_, "") };
    inline SetFundAccountLowAvailableAmountAlarmRequest& setThresholdAmount(string thresholdAmount) { DARABONBA_PTR_SET_VALUE(thresholdAmount_, thresholdAmount) };


  protected:
    shared_ptr<int64_t> fundAccountId_ {};
    // This parameter is required.
    shared_ptr<string> thresholdAmount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20230930
#endif
