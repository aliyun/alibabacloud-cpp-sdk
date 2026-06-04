// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEXPRESSCONNECTROUTERALLOWEDPREFIXHISTORYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEXPRESSCONNECTROUTERALLOWEDPREFIXHISTORYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
    class AllowedPrefixHistoryList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AllowedPrefixHistoryList& obj) { 
        DARABONBA_PTR_TO_JSON(AllowedPrefix, allowedPrefix_);
        DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      };
      friend void from_json(const Darabonba::Json& j, AllowedPrefixHistoryList& obj) { 
        DARABONBA_PTR_FROM_JSON(AllowedPrefix, allowedPrefix_);
        DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      };
      AllowedPrefixHistoryList() = default ;
      AllowedPrefixHistoryList(const AllowedPrefixHistoryList &) = default ;
      AllowedPrefixHistoryList(AllowedPrefixHistoryList &&) = default ;
      AllowedPrefixHistoryList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AllowedPrefixHistoryList() = default ;
      AllowedPrefixHistoryList& operator=(const AllowedPrefixHistoryList &) = default ;
      AllowedPrefixHistoryList& operator=(AllowedPrefixHistoryList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->allowedPrefix_ == nullptr
        && this->gmtCreate_ == nullptr; };
      // allowedPrefix Field Functions 
      bool hasAllowedPrefix() const { return this->allowedPrefix_ != nullptr;};
      void deleteAllowedPrefix() { this->allowedPrefix_ = nullptr;};
      inline const vector<string> & getAllowedPrefix() const { DARABONBA_PTR_GET_CONST(allowedPrefix_, vector<string>) };
      inline vector<string> getAllowedPrefix() { DARABONBA_PTR_GET(allowedPrefix_, vector<string>) };
      inline AllowedPrefixHistoryList& setAllowedPrefix(const vector<string> & allowedPrefix) { DARABONBA_PTR_SET_VALUE(allowedPrefix_, allowedPrefix) };
      inline AllowedPrefixHistoryList& setAllowedPrefix(vector<string> && allowedPrefix) { DARABONBA_PTR_SET_RVALUE(allowedPrefix_, allowedPrefix) };


      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
      inline AllowedPrefixHistoryList& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    protected:
      // The route prefix.
      shared_ptr<vector<string>> allowedPrefix_ {};
      // The time when the historical route prefix entry was created.
      shared_ptr<string> gmtCreate_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->allowedPrefixHistoryList_ == nullptr && this->code_ == nullptr && this->dynamicCode_ == nullptr && this->dynamicMessage_ == nullptr && this->httpStatusCode_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline DescribeExpressConnectRouterAllowedPrefixHistoryResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // allowedPrefixHistoryList Field Functions 
    bool hasAllowedPrefixHistoryList() const { return this->allowedPrefixHistoryList_ != nullptr;};
    void deleteAllowedPrefixHistoryList() { this->allowedPrefixHistoryList_ = nullptr;};
    inline const vector<DescribeExpressConnectRouterAllowedPrefixHistoryResponseBody::AllowedPrefixHistoryList> & getAllowedPrefixHistoryList() const { DARABONBA_PTR_GET_CONST(allowedPrefixHistoryList_, vector<DescribeExpressConnectRouterAllowedPrefixHistoryResponseBody::AllowedPrefixHistoryList>) };
    inline vector<DescribeExpressConnectRouterAllowedPrefixHistoryResponseBody::AllowedPrefixHistoryList> getAllowedPrefixHistoryList() { DARABONBA_PTR_GET(allowedPrefixHistoryList_, vector<DescribeExpressConnectRouterAllowedPrefixHistoryResponseBody::AllowedPrefixHistoryList>) };
    inline DescribeExpressConnectRouterAllowedPrefixHistoryResponseBody& setAllowedPrefixHistoryList(const vector<DescribeExpressConnectRouterAllowedPrefixHistoryResponseBody::AllowedPrefixHistoryList> & allowedPrefixHistoryList) { DARABONBA_PTR_SET_VALUE(allowedPrefixHistoryList_, allowedPrefixHistoryList) };
    inline DescribeExpressConnectRouterAllowedPrefixHistoryResponseBody& setAllowedPrefixHistoryList(vector<DescribeExpressConnectRouterAllowedPrefixHistoryResponseBody::AllowedPrefixHistoryList> && allowedPrefixHistoryList) { DARABONBA_PTR_SET_RVALUE(allowedPrefixHistoryList_, allowedPrefixHistoryList) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeExpressConnectRouterAllowedPrefixHistoryResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // dynamicCode Field Functions 
    bool hasDynamicCode() const { return this->dynamicCode_ != nullptr;};
    void deleteDynamicCode() { this->dynamicCode_ = nullptr;};
    inline string getDynamicCode() const { DARABONBA_PTR_GET_DEFAULT(dynamicCode_, "") };
    inline DescribeExpressConnectRouterAllowedPrefixHistoryResponseBody& setDynamicCode(string dynamicCode) { DARABONBA_PTR_SET_VALUE(dynamicCode_, dynamicCode) };


    // dynamicMessage Field Functions 
    bool hasDynamicMessage() const { return this->dynamicMessage_ != nullptr;};
    void deleteDynamicMessage() { this->dynamicMessage_ = nullptr;};
    inline string getDynamicMessage() const { DARABONBA_PTR_GET_DEFAULT(dynamicMessage_, "") };
    inline DescribeExpressConnectRouterAllowedPrefixHistoryResponseBody& setDynamicMessage(string dynamicMessage) { DARABONBA_PTR_SET_VALUE(dynamicMessage_, dynamicMessage) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline DescribeExpressConnectRouterAllowedPrefixHistoryResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeExpressConnectRouterAllowedPrefixHistoryResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeExpressConnectRouterAllowedPrefixHistoryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeExpressConnectRouterAllowedPrefixHistoryResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The details about the access denial.
    shared_ptr<string> accessDeniedDetail_ {};
    // The historical route prefixes.
    shared_ptr<vector<DescribeExpressConnectRouterAllowedPrefixHistoryResponseBody::AllowedPrefixHistoryList>> allowedPrefixHistoryList_ {};
    // The response code. The status code 200 indicates that the request was successful. Other status codes indicate that the request failed. For more information, see Error codes.
    shared_ptr<string> code_ {};
    // The dynamic error code.
    shared_ptr<string> dynamicCode_ {};
    // The dynamic part in the error message. This parameter is used to replace the `%s` variable in **ErrMessage**.
    // 
    // >  For example, if the value of **ErrMessage** is **The Value of Input Parameter %s is not valid** and the value of **DynamicMessage** is **DtsJobId**, the request parameter **DtsJobId** is invalid.
    shared_ptr<string> dynamicMessage_ {};
    // The HTTP status code.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The returned message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   **true**
    // *   **false**
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ExpressConnectRouter20230901
#endif
