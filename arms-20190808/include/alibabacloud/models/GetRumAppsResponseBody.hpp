// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRUMAPPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETRUMAPPSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetRumAppsResponseBodyAppList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class GetRumAppsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRumAppsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AppList, appList_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetRumAppsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AppList, appList_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetRumAppsResponseBody() = default ;
    GetRumAppsResponseBody(const GetRumAppsResponseBody &) = default ;
    GetRumAppsResponseBody(GetRumAppsResponseBody &&) = default ;
    GetRumAppsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRumAppsResponseBody() = default ;
    GetRumAppsResponseBody& operator=(const GetRumAppsResponseBody &) = default ;
    GetRumAppsResponseBody& operator=(GetRumAppsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appList_ != nullptr
        && this->code_ != nullptr && this->httpStatusCode_ != nullptr && this->message_ != nullptr && this->requestId_ != nullptr && this->success_ != nullptr; };
    // appList Field Functions 
    bool hasAppList() const { return this->appList_ != nullptr;};
    void deleteAppList() { this->appList_ = nullptr;};
    inline const vector<GetRumAppsResponseBodyAppList> & appList() const { DARABONBA_PTR_GET_CONST(appList_, vector<GetRumAppsResponseBodyAppList>) };
    inline vector<GetRumAppsResponseBodyAppList> appList() { DARABONBA_PTR_GET(appList_, vector<GetRumAppsResponseBodyAppList>) };
    inline GetRumAppsResponseBody& setAppList(const vector<GetRumAppsResponseBodyAppList> & appList) { DARABONBA_PTR_SET_VALUE(appList_, appList) };
    inline GetRumAppsResponseBody& setAppList(vector<GetRumAppsResponseBodyAppList> && appList) { DARABONBA_PTR_SET_RVALUE(appList_, appList) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t code() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline GetRumAppsResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t httpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetRumAppsResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetRumAppsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetRumAppsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetRumAppsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The queried applications.
    std::shared_ptr<vector<GetRumAppsResponseBodyAppList>> appList_ = nullptr;
    // The response code. The status code 200 indicates that the request was successful.
    std::shared_ptr<int32_t> code_ = nullptr;
    // The HTTP status code.
    std::shared_ptr<int32_t> httpStatusCode_ = nullptr;
    // The error message returned if the request failed.
    std::shared_ptr<string> message_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the request was successful. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
