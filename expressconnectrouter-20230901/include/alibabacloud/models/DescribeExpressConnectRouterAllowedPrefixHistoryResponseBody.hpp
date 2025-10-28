// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEXPRESSCONNECTROUTERALLOWEDPREFIXHISTORYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEXPRESSCONNECTROUTERALLOWEDPREFIXHISTORYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeExpressConnectRouterAllowedPrefixHistoryResponseBodyAllowedPrefixHistoryList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ExpressConnectRouter20230901
{
namespace Models
{
  class DescribeExpressConnectRouterAllowedPrefixHistoryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeExpressConnectRouterAllowedPrefixHistoryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(AllowedPrefixHistoryList, allowedPrefixHistoryList_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(DynamicCode, dynamicCode_);
      DARABONBA_PTR_TO_JSON(DynamicMessage, dynamicMessage_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeExpressConnectRouterAllowedPrefixHistoryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(AllowedPrefixHistoryList, allowedPrefixHistoryList_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(DynamicCode, dynamicCode_);
      DARABONBA_PTR_FROM_JSON(DynamicMessage, dynamicMessage_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeExpressConnectRouterAllowedPrefixHistoryResponseBody() = default ;
    DescribeExpressConnectRouterAllowedPrefixHistoryResponseBody(const DescribeExpressConnectRouterAllowedPrefixHistoryResponseBody &) = default ;
    DescribeExpressConnectRouterAllowedPrefixHistoryResponseBody(DescribeExpressConnectRouterAllowedPrefixHistoryResponseBody &&) = default ;
    DescribeExpressConnectRouterAllowedPrefixHistoryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeExpressConnectRouterAllowedPrefixHistoryResponseBody() = default ;
    DescribeExpressConnectRouterAllowedPrefixHistoryResponseBody& operator=(const DescribeExpressConnectRouterAllowedPrefixHistoryResponseBody &) = default ;
    DescribeExpressConnectRouterAllowedPrefixHistoryResponseBody& operator=(DescribeExpressConnectRouterAllowedPrefixHistoryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && return this->allowedPrefixHistoryList_ == nullptr && return this->code_ == nullptr && return this->dynamicCode_ == nullptr && return this->dynamicMessage_ == nullptr && return this->httpStatusCode_ == nullptr
        && return this->message_ == nullptr && return this->requestId_ == nullptr && return this->success_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string accessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline DescribeExpressConnectRouterAllowedPrefixHistoryResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // allowedPrefixHistoryList Field Functions 
    bool hasAllowedPrefixHistoryList() const { return this->allowedPrefixHistoryList_ != nullptr;};
    void deleteAllowedPrefixHistoryList() { this->allowedPrefixHistoryList_ = nullptr;};
    inline const vector<DescribeExpressConnectRouterAllowedPrefixHistoryResponseBodyAllowedPrefixHistoryList> & allowedPrefixHistoryList() const { DARABONBA_PTR_GET_CONST(allowedPrefixHistoryList_, vector<DescribeExpressConnectRouterAllowedPrefixHistoryResponseBodyAllowedPrefixHistoryList>) };
    inline vector<DescribeExpressConnectRouterAllowedPrefixHistoryResponseBodyAllowedPrefixHistoryList> allowedPrefixHistoryList() { DARABONBA_PTR_GET(allowedPrefixHistoryList_, vector<DescribeExpressConnectRouterAllowedPrefixHistoryResponseBodyAllowedPrefixHistoryList>) };
    inline DescribeExpressConnectRouterAllowedPrefixHistoryResponseBody& setAllowedPrefixHistoryList(const vector<DescribeExpressConnectRouterAllowedPrefixHistoryResponseBodyAllowedPrefixHistoryList> & allowedPrefixHistoryList) { DARABONBA_PTR_SET_VALUE(allowedPrefixHistoryList_, allowedPrefixHistoryList) };
    inline DescribeExpressConnectRouterAllowedPrefixHistoryResponseBody& setAllowedPrefixHistoryList(vector<DescribeExpressConnectRouterAllowedPrefixHistoryResponseBodyAllowedPrefixHistoryList> && allowedPrefixHistoryList) { DARABONBA_PTR_SET_RVALUE(allowedPrefixHistoryList_, allowedPrefixHistoryList) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeExpressConnectRouterAllowedPrefixHistoryResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // dynamicCode Field Functions 
    bool hasDynamicCode() const { return this->dynamicCode_ != nullptr;};
    void deleteDynamicCode() { this->dynamicCode_ = nullptr;};
    inline string dynamicCode() const { DARABONBA_PTR_GET_DEFAULT(dynamicCode_, "") };
    inline DescribeExpressConnectRouterAllowedPrefixHistoryResponseBody& setDynamicCode(string dynamicCode) { DARABONBA_PTR_SET_VALUE(dynamicCode_, dynamicCode) };


    // dynamicMessage Field Functions 
    bool hasDynamicMessage() const { return this->dynamicMessage_ != nullptr;};
    void deleteDynamicMessage() { this->dynamicMessage_ = nullptr;};
    inline string dynamicMessage() const { DARABONBA_PTR_GET_DEFAULT(dynamicMessage_, "") };
    inline DescribeExpressConnectRouterAllowedPrefixHistoryResponseBody& setDynamicMessage(string dynamicMessage) { DARABONBA_PTR_SET_VALUE(dynamicMessage_, dynamicMessage) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t httpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline DescribeExpressConnectRouterAllowedPrefixHistoryResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeExpressConnectRouterAllowedPrefixHistoryResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeExpressConnectRouterAllowedPrefixHistoryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeExpressConnectRouterAllowedPrefixHistoryResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The details about the access denial.
    std::shared_ptr<string> accessDeniedDetail_ = nullptr;
    // The historical route prefixes.
    std::shared_ptr<vector<DescribeExpressConnectRouterAllowedPrefixHistoryResponseBodyAllowedPrefixHistoryList>> allowedPrefixHistoryList_ = nullptr;
    // The response code. The status code 200 indicates that the request was successful. Other status codes indicate that the request failed. For more information, see Error codes.
    std::shared_ptr<string> code_ = nullptr;
    // The dynamic error code.
    std::shared_ptr<string> dynamicCode_ = nullptr;
    // The dynamic part in the error message. This parameter is used to replace the `%s` variable in **ErrMessage**.
    // 
    // >  For example, if the value of **ErrMessage** is **The Value of Input Parameter %s is not valid** and the value of **DynamicMessage** is **DtsJobId**, the request parameter **DtsJobId** is invalid.
    std::shared_ptr<string> dynamicMessage_ = nullptr;
    // The HTTP status code.
    std::shared_ptr<int32_t> httpStatusCode_ = nullptr;
    // The returned message.
    std::shared_ptr<string> message_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the request was successful. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ExpressConnectRouter20230901
#endif
