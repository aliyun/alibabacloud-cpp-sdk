// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATASERVICEAUTHORIZEDAPPSBYGROUPIDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDATASERVICEAUTHORIZEDAPPSBYGROUPIDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetDataServiceAuthorizedAppsByGroupIdResponseBodyAppInfoList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class GetDataServiceAuthorizedAppsByGroupIdResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDataServiceAuthorizedAppsByGroupIdResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AppInfoList, appInfoList_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetDataServiceAuthorizedAppsByGroupIdResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AppInfoList, appInfoList_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetDataServiceAuthorizedAppsByGroupIdResponseBody() = default ;
    GetDataServiceAuthorizedAppsByGroupIdResponseBody(const GetDataServiceAuthorizedAppsByGroupIdResponseBody &) = default ;
    GetDataServiceAuthorizedAppsByGroupIdResponseBody(GetDataServiceAuthorizedAppsByGroupIdResponseBody &&) = default ;
    GetDataServiceAuthorizedAppsByGroupIdResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDataServiceAuthorizedAppsByGroupIdResponseBody() = default ;
    GetDataServiceAuthorizedAppsByGroupIdResponseBody& operator=(const GetDataServiceAuthorizedAppsByGroupIdResponseBody &) = default ;
    GetDataServiceAuthorizedAppsByGroupIdResponseBody& operator=(GetDataServiceAuthorizedAppsByGroupIdResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appInfoList_ != nullptr
        && this->code_ != nullptr && this->httpStatusCode_ != nullptr && this->message_ != nullptr && this->requestId_ != nullptr && this->success_ != nullptr; };
    // appInfoList Field Functions 
    bool hasAppInfoList() const { return this->appInfoList_ != nullptr;};
    void deleteAppInfoList() { this->appInfoList_ = nullptr;};
    inline const vector<GetDataServiceAuthorizedAppsByGroupIdResponseBodyAppInfoList> & appInfoList() const { DARABONBA_PTR_GET_CONST(appInfoList_, vector<GetDataServiceAuthorizedAppsByGroupIdResponseBodyAppInfoList>) };
    inline vector<GetDataServiceAuthorizedAppsByGroupIdResponseBodyAppInfoList> appInfoList() { DARABONBA_PTR_GET(appInfoList_, vector<GetDataServiceAuthorizedAppsByGroupIdResponseBodyAppInfoList>) };
    inline GetDataServiceAuthorizedAppsByGroupIdResponseBody& setAppInfoList(const vector<GetDataServiceAuthorizedAppsByGroupIdResponseBodyAppInfoList> & appInfoList) { DARABONBA_PTR_SET_VALUE(appInfoList_, appInfoList) };
    inline GetDataServiceAuthorizedAppsByGroupIdResponseBody& setAppInfoList(vector<GetDataServiceAuthorizedAppsByGroupIdResponseBodyAppInfoList> && appInfoList) { DARABONBA_PTR_SET_RVALUE(appInfoList_, appInfoList) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetDataServiceAuthorizedAppsByGroupIdResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t httpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetDataServiceAuthorizedAppsByGroupIdResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetDataServiceAuthorizedAppsByGroupIdResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDataServiceAuthorizedAppsByGroupIdResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetDataServiceAuthorizedAppsByGroupIdResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    std::shared_ptr<vector<GetDataServiceAuthorizedAppsByGroupIdResponseBodyAppInfoList>> appInfoList_ = nullptr;
    std::shared_ptr<string> code_ = nullptr;
    std::shared_ptr<int32_t> httpStatusCode_ = nullptr;
    std::shared_ptr<string> message_ = nullptr;
    // Id of the request
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
