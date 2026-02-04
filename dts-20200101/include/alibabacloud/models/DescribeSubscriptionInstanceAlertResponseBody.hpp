// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESUBSCRIPTIONINSTANCEALERTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESUBSCRIPTIONINSTANCEALERTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class DescribeSubscriptionInstanceAlertResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSubscriptionInstanceAlertResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DelayAlertPhone, delayAlertPhone_);
      DARABONBA_PTR_TO_JSON(DelayAlertStatus, delayAlertStatus_);
      DARABONBA_PTR_TO_JSON(DelayOverSeconds, delayOverSeconds_);
      DARABONBA_PTR_TO_JSON(ErrCode, errCode_);
      DARABONBA_PTR_TO_JSON(ErrMessage, errMessage_);
      DARABONBA_PTR_TO_JSON(ErrorAlertPhone, errorAlertPhone_);
      DARABONBA_PTR_TO_JSON(ErrorAlertStatus, errorAlertStatus_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SubscriptionInstanceID, subscriptionInstanceID_);
      DARABONBA_PTR_TO_JSON(SubscriptionInstanceName, subscriptionInstanceName_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSubscriptionInstanceAlertResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DelayAlertPhone, delayAlertPhone_);
      DARABONBA_PTR_FROM_JSON(DelayAlertStatus, delayAlertStatus_);
      DARABONBA_PTR_FROM_JSON(DelayOverSeconds, delayOverSeconds_);
      DARABONBA_PTR_FROM_JSON(ErrCode, errCode_);
      DARABONBA_PTR_FROM_JSON(ErrMessage, errMessage_);
      DARABONBA_PTR_FROM_JSON(ErrorAlertPhone, errorAlertPhone_);
      DARABONBA_PTR_FROM_JSON(ErrorAlertStatus, errorAlertStatus_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SubscriptionInstanceID, subscriptionInstanceID_);
      DARABONBA_PTR_FROM_JSON(SubscriptionInstanceName, subscriptionInstanceName_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeSubscriptionInstanceAlertResponseBody() = default ;
    DescribeSubscriptionInstanceAlertResponseBody(const DescribeSubscriptionInstanceAlertResponseBody &) = default ;
    DescribeSubscriptionInstanceAlertResponseBody(DescribeSubscriptionInstanceAlertResponseBody &&) = default ;
    DescribeSubscriptionInstanceAlertResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSubscriptionInstanceAlertResponseBody() = default ;
    DescribeSubscriptionInstanceAlertResponseBody& operator=(const DescribeSubscriptionInstanceAlertResponseBody &) = default ;
    DescribeSubscriptionInstanceAlertResponseBody& operator=(DescribeSubscriptionInstanceAlertResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->delayAlertPhone_ == nullptr
        && this->delayAlertStatus_ == nullptr && this->delayOverSeconds_ == nullptr && this->errCode_ == nullptr && this->errMessage_ == nullptr && this->errorAlertPhone_ == nullptr
        && this->errorAlertStatus_ == nullptr && this->requestId_ == nullptr && this->subscriptionInstanceID_ == nullptr && this->subscriptionInstanceName_ == nullptr && this->success_ == nullptr; };
    // delayAlertPhone Field Functions 
    bool hasDelayAlertPhone() const { return this->delayAlertPhone_ != nullptr;};
    void deleteDelayAlertPhone() { this->delayAlertPhone_ = nullptr;};
    inline string getDelayAlertPhone() const { DARABONBA_PTR_GET_DEFAULT(delayAlertPhone_, "") };
    inline DescribeSubscriptionInstanceAlertResponseBody& setDelayAlertPhone(string delayAlertPhone) { DARABONBA_PTR_SET_VALUE(delayAlertPhone_, delayAlertPhone) };


    // delayAlertStatus Field Functions 
    bool hasDelayAlertStatus() const { return this->delayAlertStatus_ != nullptr;};
    void deleteDelayAlertStatus() { this->delayAlertStatus_ = nullptr;};
    inline string getDelayAlertStatus() const { DARABONBA_PTR_GET_DEFAULT(delayAlertStatus_, "") };
    inline DescribeSubscriptionInstanceAlertResponseBody& setDelayAlertStatus(string delayAlertStatus) { DARABONBA_PTR_SET_VALUE(delayAlertStatus_, delayAlertStatus) };


    // delayOverSeconds Field Functions 
    bool hasDelayOverSeconds() const { return this->delayOverSeconds_ != nullptr;};
    void deleteDelayOverSeconds() { this->delayOverSeconds_ = nullptr;};
    inline string getDelayOverSeconds() const { DARABONBA_PTR_GET_DEFAULT(delayOverSeconds_, "") };
    inline DescribeSubscriptionInstanceAlertResponseBody& setDelayOverSeconds(string delayOverSeconds) { DARABONBA_PTR_SET_VALUE(delayOverSeconds_, delayOverSeconds) };


    // errCode Field Functions 
    bool hasErrCode() const { return this->errCode_ != nullptr;};
    void deleteErrCode() { this->errCode_ = nullptr;};
    inline string getErrCode() const { DARABONBA_PTR_GET_DEFAULT(errCode_, "") };
    inline DescribeSubscriptionInstanceAlertResponseBody& setErrCode(string errCode) { DARABONBA_PTR_SET_VALUE(errCode_, errCode) };


    // errMessage Field Functions 
    bool hasErrMessage() const { return this->errMessage_ != nullptr;};
    void deleteErrMessage() { this->errMessage_ = nullptr;};
    inline string getErrMessage() const { DARABONBA_PTR_GET_DEFAULT(errMessage_, "") };
    inline DescribeSubscriptionInstanceAlertResponseBody& setErrMessage(string errMessage) { DARABONBA_PTR_SET_VALUE(errMessage_, errMessage) };


    // errorAlertPhone Field Functions 
    bool hasErrorAlertPhone() const { return this->errorAlertPhone_ != nullptr;};
    void deleteErrorAlertPhone() { this->errorAlertPhone_ = nullptr;};
    inline string getErrorAlertPhone() const { DARABONBA_PTR_GET_DEFAULT(errorAlertPhone_, "") };
    inline DescribeSubscriptionInstanceAlertResponseBody& setErrorAlertPhone(string errorAlertPhone) { DARABONBA_PTR_SET_VALUE(errorAlertPhone_, errorAlertPhone) };


    // errorAlertStatus Field Functions 
    bool hasErrorAlertStatus() const { return this->errorAlertStatus_ != nullptr;};
    void deleteErrorAlertStatus() { this->errorAlertStatus_ = nullptr;};
    inline string getErrorAlertStatus() const { DARABONBA_PTR_GET_DEFAULT(errorAlertStatus_, "") };
    inline DescribeSubscriptionInstanceAlertResponseBody& setErrorAlertStatus(string errorAlertStatus) { DARABONBA_PTR_SET_VALUE(errorAlertStatus_, errorAlertStatus) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSubscriptionInstanceAlertResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // subscriptionInstanceID Field Functions 
    bool hasSubscriptionInstanceID() const { return this->subscriptionInstanceID_ != nullptr;};
    void deleteSubscriptionInstanceID() { this->subscriptionInstanceID_ = nullptr;};
    inline string getSubscriptionInstanceID() const { DARABONBA_PTR_GET_DEFAULT(subscriptionInstanceID_, "") };
    inline DescribeSubscriptionInstanceAlertResponseBody& setSubscriptionInstanceID(string subscriptionInstanceID) { DARABONBA_PTR_SET_VALUE(subscriptionInstanceID_, subscriptionInstanceID) };


    // subscriptionInstanceName Field Functions 
    bool hasSubscriptionInstanceName() const { return this->subscriptionInstanceName_ != nullptr;};
    void deleteSubscriptionInstanceName() { this->subscriptionInstanceName_ = nullptr;};
    inline string getSubscriptionInstanceName() const { DARABONBA_PTR_GET_DEFAULT(subscriptionInstanceName_, "") };
    inline DescribeSubscriptionInstanceAlertResponseBody& setSubscriptionInstanceName(string subscriptionInstanceName) { DARABONBA_PTR_SET_VALUE(subscriptionInstanceName_, subscriptionInstanceName) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline DescribeSubscriptionInstanceAlertResponseBody& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The mobile phone numbers that receive latency-related alerts.
    shared_ptr<string> delayAlertPhone_ {};
    // Indicates whether task latency is monitored. Valid values:
    // 
    // *   **enable**: yes
    // *   **disable**: no
    shared_ptr<string> delayAlertStatus_ {};
    // The threshold for triggering latency alerts. The unit is seconds and the value is an integer. The recommended value is 10 seconds.
    shared_ptr<string> delayOverSeconds_ {};
    // The error code returned if the call failed.
    shared_ptr<string> errCode_ {};
    // The error message returned if the call failed.
    shared_ptr<string> errMessage_ {};
    // The mobile phone numbers that receive status-related alerts.
    shared_ptr<string> errorAlertPhone_ {};
    // Indicates whether task status is monitored. Valid values:
    // 
    // *   **enable**: yes
    // *   **disable**: no
    shared_ptr<string> errorAlertStatus_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The ID of the change tracking instance.
    shared_ptr<string> subscriptionInstanceID_ {};
    // The name of the change tracking instance.
    shared_ptr<string> subscriptionInstanceName_ {};
    // Indicates whether the call was successful.
    shared_ptr<string> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
