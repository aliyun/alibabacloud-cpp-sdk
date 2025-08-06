// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETUNACTIVATEDLICENSEORDERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETUNACTIVATEDLICENSEORDERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetUnactivatedLicenseOrderResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetUnactivatedLicenseOrderResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetUnactivatedLicenseOrderResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetUnactivatedLicenseOrderResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetUnactivatedLicenseOrderResponseBody() = default ;
    GetUnactivatedLicenseOrderResponseBody(const GetUnactivatedLicenseOrderResponseBody &) = default ;
    GetUnactivatedLicenseOrderResponseBody(GetUnactivatedLicenseOrderResponseBody &&) = default ;
    GetUnactivatedLicenseOrderResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetUnactivatedLicenseOrderResponseBody() = default ;
    GetUnactivatedLicenseOrderResponseBody& operator=(const GetUnactivatedLicenseOrderResponseBody &) = default ;
    GetUnactivatedLicenseOrderResponseBody& operator=(GetUnactivatedLicenseOrderResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr
        && this->data_ != nullptr && this->httpStatusCode_ != nullptr && this->message_ != nullptr && this->requestId_ != nullptr && this->success_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetUnactivatedLicenseOrderResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<GetUnactivatedLicenseOrderResponseBodyData> & data() const { DARABONBA_PTR_GET_CONST(data_, vector<GetUnactivatedLicenseOrderResponseBodyData>) };
    inline vector<GetUnactivatedLicenseOrderResponseBodyData> data() { DARABONBA_PTR_GET(data_, vector<GetUnactivatedLicenseOrderResponseBodyData>) };
    inline GetUnactivatedLicenseOrderResponseBody& setData(const vector<GetUnactivatedLicenseOrderResponseBodyData> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetUnactivatedLicenseOrderResponseBody& setData(vector<GetUnactivatedLicenseOrderResponseBodyData> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t httpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetUnactivatedLicenseOrderResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetUnactivatedLicenseOrderResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetUnactivatedLicenseOrderResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetUnactivatedLicenseOrderResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    std::shared_ptr<string> code_ = nullptr;
    std::shared_ptr<vector<GetUnactivatedLicenseOrderResponseBodyData>> data_ = nullptr;
    std::shared_ptr<int32_t> httpStatusCode_ = nullptr;
    std::shared_ptr<string> message_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
