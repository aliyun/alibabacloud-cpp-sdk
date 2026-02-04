// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINTRANETATTRIBUTERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINTRANETATTRIBUTERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RKvstore20150101
{
namespace Models
{
  class DescribeIntranetAttributeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeIntranetAttributeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AutoRenewal, autoRenewal_);
      DARABONBA_PTR_TO_JSON(BandwidthExpireTime, bandwidthExpireTime_);
      DARABONBA_PTR_TO_JSON(BandwidthPrePaid, bandwidthPrePaid_);
      DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_TO_JSON(HasPrePaidBandWidthOrderRunning, hasPrePaidBandWidthOrderRunning_);
      DARABONBA_PTR_TO_JSON(IntranetBandWidthBurst, intranetBandWidthBurst_);
      DARABONBA_PTR_TO_JSON(IntranetBandwidth, intranetBandwidth_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeIntranetAttributeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoRenewal, autoRenewal_);
      DARABONBA_PTR_FROM_JSON(BandwidthExpireTime, bandwidthExpireTime_);
      DARABONBA_PTR_FROM_JSON(BandwidthPrePaid, bandwidthPrePaid_);
      DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_FROM_JSON(HasPrePaidBandWidthOrderRunning, hasPrePaidBandWidthOrderRunning_);
      DARABONBA_PTR_FROM_JSON(IntranetBandWidthBurst, intranetBandWidthBurst_);
      DARABONBA_PTR_FROM_JSON(IntranetBandwidth, intranetBandwidth_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeIntranetAttributeResponseBody() = default ;
    DescribeIntranetAttributeResponseBody(const DescribeIntranetAttributeResponseBody &) = default ;
    DescribeIntranetAttributeResponseBody(DescribeIntranetAttributeResponseBody &&) = default ;
    DescribeIntranetAttributeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeIntranetAttributeResponseBody() = default ;
    DescribeIntranetAttributeResponseBody& operator=(const DescribeIntranetAttributeResponseBody &) = default ;
    DescribeIntranetAttributeResponseBody& operator=(DescribeIntranetAttributeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoRenewal_ == nullptr
        && this->bandwidthExpireTime_ == nullptr && this->bandwidthPrePaid_ == nullptr && this->expireTime_ == nullptr && this->hasPrePaidBandWidthOrderRunning_ == nullptr && this->intranetBandWidthBurst_ == nullptr
        && this->intranetBandwidth_ == nullptr && this->requestId_ == nullptr; };
    // autoRenewal Field Functions 
    bool hasAutoRenewal() const { return this->autoRenewal_ != nullptr;};
    void deleteAutoRenewal() { this->autoRenewal_ = nullptr;};
    inline bool getAutoRenewal() const { DARABONBA_PTR_GET_DEFAULT(autoRenewal_, false) };
    inline DescribeIntranetAttributeResponseBody& setAutoRenewal(bool autoRenewal) { DARABONBA_PTR_SET_VALUE(autoRenewal_, autoRenewal) };


    // bandwidthExpireTime Field Functions 
    bool hasBandwidthExpireTime() const { return this->bandwidthExpireTime_ != nullptr;};
    void deleteBandwidthExpireTime() { this->bandwidthExpireTime_ = nullptr;};
    inline string getBandwidthExpireTime() const { DARABONBA_PTR_GET_DEFAULT(bandwidthExpireTime_, "") };
    inline DescribeIntranetAttributeResponseBody& setBandwidthExpireTime(string bandwidthExpireTime) { DARABONBA_PTR_SET_VALUE(bandwidthExpireTime_, bandwidthExpireTime) };


    // bandwidthPrePaid Field Functions 
    bool hasBandwidthPrePaid() const { return this->bandwidthPrePaid_ != nullptr;};
    void deleteBandwidthPrePaid() { this->bandwidthPrePaid_ = nullptr;};
    inline string getBandwidthPrePaid() const { DARABONBA_PTR_GET_DEFAULT(bandwidthPrePaid_, "") };
    inline DescribeIntranetAttributeResponseBody& setBandwidthPrePaid(string bandwidthPrePaid) { DARABONBA_PTR_SET_VALUE(bandwidthPrePaid_, bandwidthPrePaid) };


    // expireTime Field Functions 
    bool hasExpireTime() const { return this->expireTime_ != nullptr;};
    void deleteExpireTime() { this->expireTime_ = nullptr;};
    inline string getExpireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
    inline DescribeIntranetAttributeResponseBody& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


    // hasPrePaidBandWidthOrderRunning Field Functions 
    bool hasHasPrePaidBandWidthOrderRunning() const { return this->hasPrePaidBandWidthOrderRunning_ != nullptr;};
    void deleteHasPrePaidBandWidthOrderRunning() { this->hasPrePaidBandWidthOrderRunning_ = nullptr;};
    inline bool getHasPrePaidBandWidthOrderRunning() const { DARABONBA_PTR_GET_DEFAULT(hasPrePaidBandWidthOrderRunning_, false) };
    inline DescribeIntranetAttributeResponseBody& setHasPrePaidBandWidthOrderRunning(bool hasPrePaidBandWidthOrderRunning) { DARABONBA_PTR_SET_VALUE(hasPrePaidBandWidthOrderRunning_, hasPrePaidBandWidthOrderRunning) };


    // intranetBandWidthBurst Field Functions 
    bool hasIntranetBandWidthBurst() const { return this->intranetBandWidthBurst_ != nullptr;};
    void deleteIntranetBandWidthBurst() { this->intranetBandWidthBurst_ = nullptr;};
    inline int32_t getIntranetBandWidthBurst() const { DARABONBA_PTR_GET_DEFAULT(intranetBandWidthBurst_, 0) };
    inline DescribeIntranetAttributeResponseBody& setIntranetBandWidthBurst(int32_t intranetBandWidthBurst) { DARABONBA_PTR_SET_VALUE(intranetBandWidthBurst_, intranetBandWidthBurst) };


    // intranetBandwidth Field Functions 
    bool hasIntranetBandwidth() const { return this->intranetBandwidth_ != nullptr;};
    void deleteIntranetBandwidth() { this->intranetBandwidth_ = nullptr;};
    inline int32_t getIntranetBandwidth() const { DARABONBA_PTR_GET_DEFAULT(intranetBandwidth_, 0) };
    inline DescribeIntranetAttributeResponseBody& setIntranetBandwidth(int32_t intranetBandwidth) { DARABONBA_PTR_SET_VALUE(intranetBandwidth_, intranetBandwidth) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeIntranetAttributeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Indicates whether auto-renewal is enabled for the extra internal bandwidth that you purchased. Valid values:
    // 
    // *   **true**: Auto-renewal is enabled.
    // *   **false**: Auto-renewal is disabled.
    // 
    // > If no extra internal bandwidth is purchased, this parameter is not returned.
    shared_ptr<bool> autoRenewal_ {};
    // The expiration time of the purchased bandwidth. The time follows the ISO 8601 standard in the *yyyy-MM-dd* T *HH:mm:ss* Z format.
    // 
    // > If no extra internal bandwidth is purchased, this parameter is not returned.
    shared_ptr<string> bandwidthExpireTime_ {};
    // The billing method of the bandwidth plan. Valid values:
    // 
    // *   **0**: pay-as-you-go
    // *   **1**: subscription
    shared_ptr<string> bandwidthPrePaid_ {};
    // The time when the extra internal bandwidth that you purchased for temporary use expires. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
    // 
    // > If no extra internal bandwidth for temporary use is purchased or the extra internal bandwidth that you purchased for temporary use has expired, **0** is returned for this parameter.
    shared_ptr<string> expireTime_ {};
    // Specifies whether the instance has unexpired bandwidth plans. Valid values:
    // 
    // *   **true**: The instance has unexpired bandwidth plans.
    // *   **false**: The instance does not have unexpired bandwidth plans.
    // 
    // > If no extra internal bandwidth is purchased, this parameter is not returned.
    shared_ptr<bool> hasPrePaidBandWidthOrderRunning_ {};
    shared_ptr<int32_t> intranetBandWidthBurst_ {};
    // The internal bandwidth of the instance. This parameter indicates the combined bandwidth of all shards in the instance. Unit: Mbit/s.
    shared_ptr<int32_t> intranetBandwidth_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RKvstore20150101
#endif
