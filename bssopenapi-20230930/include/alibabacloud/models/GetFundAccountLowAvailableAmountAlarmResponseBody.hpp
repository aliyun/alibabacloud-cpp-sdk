// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETFUNDACCOUNTLOWAVAILABLEAMOUNTALARMRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETFUNDACCOUNTLOWAVAILABLEAMOUNTALARMRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20230930
{
namespace Models
{
  class GetFundAccountLowAvailableAmountAlarmResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetFundAccountLowAvailableAmountAlarmResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AlarmEnabled, alarmEnabled_);
      DARABONBA_ANY_TO_JSON(Metadata, metadata_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ThresholdAmount, thresholdAmount_);
    };
    friend void from_json(const Darabonba::Json& j, GetFundAccountLowAvailableAmountAlarmResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AlarmEnabled, alarmEnabled_);
      DARABONBA_ANY_FROM_JSON(Metadata, metadata_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ThresholdAmount, thresholdAmount_);
    };
    GetFundAccountLowAvailableAmountAlarmResponseBody() = default ;
    GetFundAccountLowAvailableAmountAlarmResponseBody(const GetFundAccountLowAvailableAmountAlarmResponseBody &) = default ;
    GetFundAccountLowAvailableAmountAlarmResponseBody(GetFundAccountLowAvailableAmountAlarmResponseBody &&) = default ;
    GetFundAccountLowAvailableAmountAlarmResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetFundAccountLowAvailableAmountAlarmResponseBody() = default ;
    GetFundAccountLowAvailableAmountAlarmResponseBody& operator=(const GetFundAccountLowAvailableAmountAlarmResponseBody &) = default ;
    GetFundAccountLowAvailableAmountAlarmResponseBody& operator=(GetFundAccountLowAvailableAmountAlarmResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->alarmEnabled_ == nullptr
        && this->metadata_ == nullptr && this->requestId_ == nullptr && this->thresholdAmount_ == nullptr; };
    // alarmEnabled Field Functions 
    bool hasAlarmEnabled() const { return this->alarmEnabled_ != nullptr;};
    void deleteAlarmEnabled() { this->alarmEnabled_ = nullptr;};
    inline bool getAlarmEnabled() const { DARABONBA_PTR_GET_DEFAULT(alarmEnabled_, false) };
    inline GetFundAccountLowAvailableAmountAlarmResponseBody& setAlarmEnabled(bool alarmEnabled) { DARABONBA_PTR_SET_VALUE(alarmEnabled_, alarmEnabled) };


    // metadata Field Functions 
    bool hasMetadata() const { return this->metadata_ != nullptr;};
    void deleteMetadata() { this->metadata_ = nullptr;};
    inline     const Darabonba::Json & getMetadata() const { DARABONBA_GET(metadata_) };
    Darabonba::Json & getMetadata() { DARABONBA_GET(metadata_) };
    inline GetFundAccountLowAvailableAmountAlarmResponseBody& setMetadata(const Darabonba::Json & metadata) { DARABONBA_SET_VALUE(metadata_, metadata) };
    inline GetFundAccountLowAvailableAmountAlarmResponseBody& setMetadata(Darabonba::Json && metadata) { DARABONBA_SET_RVALUE(metadata_, metadata) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetFundAccountLowAvailableAmountAlarmResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // thresholdAmount Field Functions 
    bool hasThresholdAmount() const { return this->thresholdAmount_ != nullptr;};
    void deleteThresholdAmount() { this->thresholdAmount_ = nullptr;};
    inline string getThresholdAmount() const { DARABONBA_PTR_GET_DEFAULT(thresholdAmount_, "") };
    inline GetFundAccountLowAvailableAmountAlarmResponseBody& setThresholdAmount(string thresholdAmount) { DARABONBA_PTR_SET_VALUE(thresholdAmount_, thresholdAmount) };


  protected:
    shared_ptr<bool> alarmEnabled_ {};
    Darabonba::Json metadata_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> thresholdAmount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20230930
#endif
