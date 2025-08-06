// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDFREELICENSERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ADDFREELICENSERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/AddFreeLicenseResponseBodyLicenseList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class AddFreeLicenseResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddFreeLicenseResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(LicenseList, licenseList_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, AddFreeLicenseResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(LicenseList, licenseList_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    AddFreeLicenseResponseBody() = default ;
    AddFreeLicenseResponseBody(const AddFreeLicenseResponseBody &) = default ;
    AddFreeLicenseResponseBody(AddFreeLicenseResponseBody &&) = default ;
    AddFreeLicenseResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddFreeLicenseResponseBody() = default ;
    AddFreeLicenseResponseBody& operator=(const AddFreeLicenseResponseBody &) = default ;
    AddFreeLicenseResponseBody& operator=(AddFreeLicenseResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr
        && this->httpStatusCode_ != nullptr && this->licenseList_ != nullptr && this->message_ != nullptr && this->requestId_ != nullptr && this->success_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline AddFreeLicenseResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t httpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline AddFreeLicenseResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // licenseList Field Functions 
    bool hasLicenseList() const { return this->licenseList_ != nullptr;};
    void deleteLicenseList() { this->licenseList_ = nullptr;};
    inline const vector<AddFreeLicenseResponseBodyLicenseList> & licenseList() const { DARABONBA_PTR_GET_CONST(licenseList_, vector<AddFreeLicenseResponseBodyLicenseList>) };
    inline vector<AddFreeLicenseResponseBodyLicenseList> licenseList() { DARABONBA_PTR_GET(licenseList_, vector<AddFreeLicenseResponseBodyLicenseList>) };
    inline AddFreeLicenseResponseBody& setLicenseList(const vector<AddFreeLicenseResponseBodyLicenseList> & licenseList) { DARABONBA_PTR_SET_VALUE(licenseList_, licenseList) };
    inline AddFreeLicenseResponseBody& setLicenseList(vector<AddFreeLicenseResponseBodyLicenseList> && licenseList) { DARABONBA_PTR_SET_RVALUE(licenseList_, licenseList) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline AddFreeLicenseResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline AddFreeLicenseResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline AddFreeLicenseResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    std::shared_ptr<string> code_ = nullptr;
    std::shared_ptr<int32_t> httpStatusCode_ = nullptr;
    std::shared_ptr<vector<AddFreeLicenseResponseBodyLicenseList>> licenseList_ = nullptr;
    std::shared_ptr<string> message_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
