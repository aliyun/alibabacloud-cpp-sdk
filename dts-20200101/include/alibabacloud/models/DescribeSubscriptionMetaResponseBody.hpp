// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESUBSCRIPTIONMETARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESUBSCRIPTIONMETARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeSubscriptionMetaResponseBodySubscriptionMetaList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class DescribeSubscriptionMetaResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSubscriptionMetaResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ErrCode, errCode_);
      DARABONBA_PTR_TO_JSON(ErrMessage, errMessage_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SubscriptionMetaList, subscriptionMetaList_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSubscriptionMetaResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrCode, errCode_);
      DARABONBA_PTR_FROM_JSON(ErrMessage, errMessage_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SubscriptionMetaList, subscriptionMetaList_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeSubscriptionMetaResponseBody() = default ;
    DescribeSubscriptionMetaResponseBody(const DescribeSubscriptionMetaResponseBody &) = default ;
    DescribeSubscriptionMetaResponseBody(DescribeSubscriptionMetaResponseBody &&) = default ;
    DescribeSubscriptionMetaResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSubscriptionMetaResponseBody() = default ;
    DescribeSubscriptionMetaResponseBody& operator=(const DescribeSubscriptionMetaResponseBody &) = default ;
    DescribeSubscriptionMetaResponseBody& operator=(DescribeSubscriptionMetaResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->errCode_ != nullptr
        && this->errMessage_ != nullptr && this->httpStatusCode_ != nullptr && this->requestId_ != nullptr && this->subscriptionMetaList_ != nullptr && this->success_ != nullptr; };
    // errCode Field Functions 
    bool hasErrCode() const { return this->errCode_ != nullptr;};
    void deleteErrCode() { this->errCode_ = nullptr;};
    inline string errCode() const { DARABONBA_PTR_GET_DEFAULT(errCode_, "") };
    inline DescribeSubscriptionMetaResponseBody& setErrCode(string errCode) { DARABONBA_PTR_SET_VALUE(errCode_, errCode) };


    // errMessage Field Functions 
    bool hasErrMessage() const { return this->errMessage_ != nullptr;};
    void deleteErrMessage() { this->errMessage_ = nullptr;};
    inline string errMessage() const { DARABONBA_PTR_GET_DEFAULT(errMessage_, "") };
    inline DescribeSubscriptionMetaResponseBody& setErrMessage(string errMessage) { DARABONBA_PTR_SET_VALUE(errMessage_, errMessage) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline string httpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, "") };
    inline DescribeSubscriptionMetaResponseBody& setHttpStatusCode(string httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSubscriptionMetaResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // subscriptionMetaList Field Functions 
    bool hasSubscriptionMetaList() const { return this->subscriptionMetaList_ != nullptr;};
    void deleteSubscriptionMetaList() { this->subscriptionMetaList_ = nullptr;};
    inline const vector<DescribeSubscriptionMetaResponseBodySubscriptionMetaList> & subscriptionMetaList() const { DARABONBA_PTR_GET_CONST(subscriptionMetaList_, vector<DescribeSubscriptionMetaResponseBodySubscriptionMetaList>) };
    inline vector<DescribeSubscriptionMetaResponseBodySubscriptionMetaList> subscriptionMetaList() { DARABONBA_PTR_GET(subscriptionMetaList_, vector<DescribeSubscriptionMetaResponseBodySubscriptionMetaList>) };
    inline DescribeSubscriptionMetaResponseBody& setSubscriptionMetaList(const vector<DescribeSubscriptionMetaResponseBodySubscriptionMetaList> & subscriptionMetaList) { DARABONBA_PTR_SET_VALUE(subscriptionMetaList_, subscriptionMetaList) };
    inline DescribeSubscriptionMetaResponseBody& setSubscriptionMetaList(vector<DescribeSubscriptionMetaResponseBodySubscriptionMetaList> && subscriptionMetaList) { DARABONBA_PTR_SET_RVALUE(subscriptionMetaList_, subscriptionMetaList) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string success() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline DescribeSubscriptionMetaResponseBody& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The error code returned if the request failed.
    std::shared_ptr<string> errCode_ = nullptr;
    // The error message returned if the request failed.
    std::shared_ptr<string> errMessage_ = nullptr;
    // The HTTP status code.
    std::shared_ptr<string> httpStatusCode_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The details of the subtasks.
    std::shared_ptr<vector<DescribeSubscriptionMetaResponseBodySubscriptionMetaList>> subscriptionMetaList_ = nullptr;
    // Indicates whether the request was successful.
    std::shared_ptr<string> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
