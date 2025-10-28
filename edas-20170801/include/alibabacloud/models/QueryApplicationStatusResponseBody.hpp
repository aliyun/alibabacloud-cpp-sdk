// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYAPPLICATIONSTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYAPPLICATIONSTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QueryApplicationStatusResponseBodyAppInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class QueryApplicationStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryApplicationStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AppInfo, appInfo_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryApplicationStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AppInfo, appInfo_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    QueryApplicationStatusResponseBody() = default ;
    QueryApplicationStatusResponseBody(const QueryApplicationStatusResponseBody &) = default ;
    QueryApplicationStatusResponseBody(QueryApplicationStatusResponseBody &&) = default ;
    QueryApplicationStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryApplicationStatusResponseBody() = default ;
    QueryApplicationStatusResponseBody& operator=(const QueryApplicationStatusResponseBody &) = default ;
    QueryApplicationStatusResponseBody& operator=(QueryApplicationStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appInfo_ == nullptr
        && return this->code_ == nullptr && return this->message_ == nullptr && return this->requestId_ == nullptr; };
    // appInfo Field Functions 
    bool hasAppInfo() const { return this->appInfo_ != nullptr;};
    void deleteAppInfo() { this->appInfo_ = nullptr;};
    inline const QueryApplicationStatusResponseBodyAppInfo & appInfo() const { DARABONBA_PTR_GET_CONST(appInfo_, QueryApplicationStatusResponseBodyAppInfo) };
    inline QueryApplicationStatusResponseBodyAppInfo appInfo() { DARABONBA_PTR_GET(appInfo_, QueryApplicationStatusResponseBodyAppInfo) };
    inline QueryApplicationStatusResponseBody& setAppInfo(const QueryApplicationStatusResponseBodyAppInfo & appInfo) { DARABONBA_PTR_SET_VALUE(appInfo_, appInfo) };
    inline QueryApplicationStatusResponseBody& setAppInfo(QueryApplicationStatusResponseBodyAppInfo && appInfo) { DARABONBA_PTR_SET_RVALUE(appInfo_, appInfo) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t code() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline QueryApplicationStatusResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline QueryApplicationStatusResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryApplicationStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the application.
    std::shared_ptr<QueryApplicationStatusResponseBodyAppInfo> appInfo_ = nullptr;
    // The HTTP status code that is returned.
    std::shared_ptr<int32_t> code_ = nullptr;
    // The additional information that is returned.
    std::shared_ptr<string> message_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
