// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEFEATURETRIALINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEFEATURETRIALINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hbr20170908
{
namespace Models
{
  class DescribeFeatureTrialInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeFeatureTrialInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(FeatureEnabled, featureEnabled_);
      DARABONBA_PTR_TO_JSON(InTrialPeriod, inTrialPeriod_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TrialExpireTime, trialExpireTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeFeatureTrialInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(FeatureEnabled, featureEnabled_);
      DARABONBA_PTR_FROM_JSON(InTrialPeriod, inTrialPeriod_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TrialExpireTime, trialExpireTime_);
    };
    DescribeFeatureTrialInfoResponseBody() = default ;
    DescribeFeatureTrialInfoResponseBody(const DescribeFeatureTrialInfoResponseBody &) = default ;
    DescribeFeatureTrialInfoResponseBody(DescribeFeatureTrialInfoResponseBody &&) = default ;
    DescribeFeatureTrialInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeFeatureTrialInfoResponseBody() = default ;
    DescribeFeatureTrialInfoResponseBody& operator=(const DescribeFeatureTrialInfoResponseBody &) = default ;
    DescribeFeatureTrialInfoResponseBody& operator=(DescribeFeatureTrialInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && this->featureEnabled_ == nullptr && this->inTrialPeriod_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr
        && this->trialExpireTime_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeFeatureTrialInfoResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // featureEnabled Field Functions 
    bool hasFeatureEnabled() const { return this->featureEnabled_ != nullptr;};
    void deleteFeatureEnabled() { this->featureEnabled_ = nullptr;};
    inline bool getFeatureEnabled() const { DARABONBA_PTR_GET_DEFAULT(featureEnabled_, false) };
    inline DescribeFeatureTrialInfoResponseBody& setFeatureEnabled(bool featureEnabled) { DARABONBA_PTR_SET_VALUE(featureEnabled_, featureEnabled) };


    // inTrialPeriod Field Functions 
    bool hasInTrialPeriod() const { return this->inTrialPeriod_ != nullptr;};
    void deleteInTrialPeriod() { this->inTrialPeriod_ = nullptr;};
    inline bool getInTrialPeriod() const { DARABONBA_PTR_GET_DEFAULT(inTrialPeriod_, false) };
    inline DescribeFeatureTrialInfoResponseBody& setInTrialPeriod(bool inTrialPeriod) { DARABONBA_PTR_SET_VALUE(inTrialPeriod_, inTrialPeriod) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeFeatureTrialInfoResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeFeatureTrialInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeFeatureTrialInfoResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // trialExpireTime Field Functions 
    bool hasTrialExpireTime() const { return this->trialExpireTime_ != nullptr;};
    void deleteTrialExpireTime() { this->trialExpireTime_ = nullptr;};
    inline int64_t getTrialExpireTime() const { DARABONBA_PTR_GET_DEFAULT(trialExpireTime_, 0L) };
    inline DescribeFeatureTrialInfoResponseBody& setTrialExpireTime(int64_t trialExpireTime) { DARABONBA_PTR_SET_VALUE(trialExpireTime_, trialExpireTime) };


  protected:
    // The return code. The value 200 indicates success.
    shared_ptr<string> code_ {};
    // Indicates whether the feature is activated. The value false is returned if the feature is not activated. In this case, InTrialPeriod is false and TrialExpireTime is 0.
    shared_ptr<bool> featureEnabled_ {};
    // Indicates whether the feature is within the free trial period. The value false is returned if the feature is not activated or the free trial has expired.
    shared_ptr<bool> inTrialPeriod_ {};
    // The returned message. The value "successful" is returned upon success. An error message is returned upon failure.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // - true: The request was successful.
    // - false: The request failed.
    shared_ptr<bool> success_ {};
    // The expiration time of the free trial. The value is a UNIX timestamp, in seconds. The value 0 is returned if the feature is not activated.
    shared_ptr<int64_t> trialExpireTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hbr20170908
#endif
