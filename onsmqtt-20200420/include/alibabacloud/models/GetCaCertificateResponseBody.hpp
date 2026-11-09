// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCACERTIFICATERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCACERTIFICATERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OnsMqtt20200420
{
namespace Models
{
  class GetCaCertificateResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCaCertificateResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetCaCertificateResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetCaCertificateResponseBody() = default ;
    GetCaCertificateResponseBody(const GetCaCertificateResponseBody &) = default ;
    GetCaCertificateResponseBody(GetCaCertificateResponseBody &&) = default ;
    GetCaCertificateResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCaCertificateResponseBody() = default ;
    GetCaCertificateResponseBody& operator=(const GetCaCertificateResponseBody &) = default ;
    GetCaCertificateResponseBody& operator=(GetCaCertificateResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(CaContent, caContent_);
        DARABONBA_PTR_TO_JSON(CaName, caName_);
        DARABONBA_PTR_TO_JSON(RegistrationCode, registrationCode_);
        DARABONBA_PTR_TO_JSON(Sn, sn_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(ValidBegin, validBegin_);
        DARABONBA_PTR_TO_JSON(ValidEnd, validEnd_);
        DARABONBA_PTR_TO_JSON(VerificationContent, verificationContent_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(CaContent, caContent_);
        DARABONBA_PTR_FROM_JSON(CaName, caName_);
        DARABONBA_PTR_FROM_JSON(RegistrationCode, registrationCode_);
        DARABONBA_PTR_FROM_JSON(Sn, sn_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(ValidBegin, validBegin_);
        DARABONBA_PTR_FROM_JSON(ValidEnd, validEnd_);
        DARABONBA_PTR_FROM_JSON(VerificationContent, verificationContent_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->caContent_ == nullptr
        && this->caName_ == nullptr && this->registrationCode_ == nullptr && this->sn_ == nullptr && this->status_ == nullptr && this->validBegin_ == nullptr
        && this->validEnd_ == nullptr && this->verificationContent_ == nullptr; };
      // caContent Field Functions 
      bool hasCaContent() const { return this->caContent_ != nullptr;};
      void deleteCaContent() { this->caContent_ = nullptr;};
      inline string getCaContent() const { DARABONBA_PTR_GET_DEFAULT(caContent_, "") };
      inline Data& setCaContent(string caContent) { DARABONBA_PTR_SET_VALUE(caContent_, caContent) };


      // caName Field Functions 
      bool hasCaName() const { return this->caName_ != nullptr;};
      void deleteCaName() { this->caName_ = nullptr;};
      inline string getCaName() const { DARABONBA_PTR_GET_DEFAULT(caName_, "") };
      inline Data& setCaName(string caName) { DARABONBA_PTR_SET_VALUE(caName_, caName) };


      // registrationCode Field Functions 
      bool hasRegistrationCode() const { return this->registrationCode_ != nullptr;};
      void deleteRegistrationCode() { this->registrationCode_ = nullptr;};
      inline string getRegistrationCode() const { DARABONBA_PTR_GET_DEFAULT(registrationCode_, "") };
      inline Data& setRegistrationCode(string registrationCode) { DARABONBA_PTR_SET_VALUE(registrationCode_, registrationCode) };


      // sn Field Functions 
      bool hasSn() const { return this->sn_ != nullptr;};
      void deleteSn() { this->sn_ = nullptr;};
      inline string getSn() const { DARABONBA_PTR_GET_DEFAULT(sn_, "") };
      inline Data& setSn(string sn) { DARABONBA_PTR_SET_VALUE(sn_, sn) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Data& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // validBegin Field Functions 
      bool hasValidBegin() const { return this->validBegin_ != nullptr;};
      void deleteValidBegin() { this->validBegin_ = nullptr;};
      inline string getValidBegin() const { DARABONBA_PTR_GET_DEFAULT(validBegin_, "") };
      inline Data& setValidBegin(string validBegin) { DARABONBA_PTR_SET_VALUE(validBegin_, validBegin) };


      // validEnd Field Functions 
      bool hasValidEnd() const { return this->validEnd_ != nullptr;};
      void deleteValidEnd() { this->validEnd_ = nullptr;};
      inline string getValidEnd() const { DARABONBA_PTR_GET_DEFAULT(validEnd_, "") };
      inline Data& setValidEnd(string validEnd) { DARABONBA_PTR_SET_VALUE(validEnd_, validEnd) };


      // verificationContent Field Functions 
      bool hasVerificationContent() const { return this->verificationContent_ != nullptr;};
      void deleteVerificationContent() { this->verificationContent_ = nullptr;};
      inline string getVerificationContent() const { DARABONBA_PTR_GET_DEFAULT(verificationContent_, "") };
      inline Data& setVerificationContent(string verificationContent) { DARABONBA_PTR_SET_VALUE(verificationContent_, verificationContent) };


    protected:
      // Content of the CA certificate.
      // > \\n represents a new line.
      shared_ptr<string> caContent_ {};
      // Name of the CA certificate
      shared_ptr<string> caName_ {};
      // Registration code of the CA certificate
      shared_ptr<string> registrationCode_ {};
      // The SN serial number of the CA certificate, used to uniquely identify a CA certificate. Value range: no more than 128 bytes.
      shared_ptr<string> sn_ {};
      // The status of the CA certificate. The values are as follows:
      // - **0**: Indicates that the certificate is in an inactive state. - **1**: Indicates that the certificate is in an active state.
      // > After the CA certificate is registered, it is in an active state by default.
      shared_ptr<string> status_ {};
      // The start time when the CA certificate becomes effective. The format is a Unix timestamp in milliseconds.
      shared_ptr<string> validBegin_ {};
      // The end time when the CA certificate becomes effective. The format is a Unix timestamp in milliseconds.
      shared_ptr<string> validEnd_ {};
      // Content of the Verification certificate.
      // > \\n represents a new line.
      shared_ptr<string> verificationContent_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetCaCertificateResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetCaCertificateResponseBody::Data) };
    inline GetCaCertificateResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetCaCertificateResponseBody::Data) };
    inline GetCaCertificateResponseBody& setData(const GetCaCertificateResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetCaCertificateResponseBody& setData(GetCaCertificateResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetCaCertificateResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Certificate details.
    shared_ptr<GetCaCertificateResponseBody::Data> data_ {};
    // Public parameters, each request ID is unique and can be used for troubleshooting and problem localization.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OnsMqtt20200420
#endif
