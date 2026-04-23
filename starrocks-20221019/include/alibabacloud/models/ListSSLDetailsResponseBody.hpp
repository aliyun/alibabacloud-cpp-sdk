// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSSLDETAILSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSSLDETAILSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Starrocks20221019
{
namespace Models
{
  class ListSSLDetailsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSSLDetailsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrCode, errCode_);
      DARABONBA_PTR_TO_JSON(ErrMessage, errMessage_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListSSLDetailsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrCode, errCode_);
      DARABONBA_PTR_FROM_JSON(ErrMessage, errMessage_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListSSLDetailsResponseBody() = default ;
    ListSSLDetailsResponseBody(const ListSSLDetailsResponseBody &) = default ;
    ListSSLDetailsResponseBody(ListSSLDetailsResponseBody &&) = default ;
    ListSSLDetailsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSSLDetailsResponseBody() = default ;
    ListSSLDetailsResponseBody& operator=(const ListSSLDetailsResponseBody &) = default ;
    ListSSLDetailsResponseBody& operator=(ListSSLDetailsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Aliases, aliases_);
        DARABONBA_PTR_TO_JSON(CustomCert, customCert_);
        DARABONBA_PTR_TO_JSON(EnableSSL, enableSSL_);
        DARABONBA_PTR_TO_JSON(IsValid, isValid_);
        DARABONBA_PTR_TO_JSON(IssuerDN, issuerDN_);
        DARABONBA_PTR_TO_JSON(NotAfter, notAfter_);
        DARABONBA_PTR_TO_JSON(NotBefore, notBefore_);
        DARABONBA_PTR_TO_JSON(SslCertificateText, sslCertificateText_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(SubjectDN, subjectDN_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Aliases, aliases_);
        DARABONBA_PTR_FROM_JSON(CustomCert, customCert_);
        DARABONBA_PTR_FROM_JSON(EnableSSL, enableSSL_);
        DARABONBA_PTR_FROM_JSON(IsValid, isValid_);
        DARABONBA_PTR_FROM_JSON(IssuerDN, issuerDN_);
        DARABONBA_PTR_FROM_JSON(NotAfter, notAfter_);
        DARABONBA_PTR_FROM_JSON(NotBefore, notBefore_);
        DARABONBA_PTR_FROM_JSON(SslCertificateText, sslCertificateText_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(SubjectDN, subjectDN_);
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
      virtual bool empty() const override { return this->aliases_ == nullptr
        && this->customCert_ == nullptr && this->enableSSL_ == nullptr && this->isValid_ == nullptr && this->issuerDN_ == nullptr && this->notAfter_ == nullptr
        && this->notBefore_ == nullptr && this->sslCertificateText_ == nullptr && this->status_ == nullptr && this->subjectDN_ == nullptr; };
      // aliases Field Functions 
      bool hasAliases() const { return this->aliases_ != nullptr;};
      void deleteAliases() { this->aliases_ = nullptr;};
      inline string getAliases() const { DARABONBA_PTR_GET_DEFAULT(aliases_, "") };
      inline Data& setAliases(string aliases) { DARABONBA_PTR_SET_VALUE(aliases_, aliases) };


      // customCert Field Functions 
      bool hasCustomCert() const { return this->customCert_ != nullptr;};
      void deleteCustomCert() { this->customCert_ = nullptr;};
      inline bool getCustomCert() const { DARABONBA_PTR_GET_DEFAULT(customCert_, false) };
      inline Data& setCustomCert(bool customCert) { DARABONBA_PTR_SET_VALUE(customCert_, customCert) };


      // enableSSL Field Functions 
      bool hasEnableSSL() const { return this->enableSSL_ != nullptr;};
      void deleteEnableSSL() { this->enableSSL_ = nullptr;};
      inline bool getEnableSSL() const { DARABONBA_PTR_GET_DEFAULT(enableSSL_, false) };
      inline Data& setEnableSSL(bool enableSSL) { DARABONBA_PTR_SET_VALUE(enableSSL_, enableSSL) };


      // isValid Field Functions 
      bool hasIsValid() const { return this->isValid_ != nullptr;};
      void deleteIsValid() { this->isValid_ = nullptr;};
      inline bool getIsValid() const { DARABONBA_PTR_GET_DEFAULT(isValid_, false) };
      inline Data& setIsValid(bool isValid) { DARABONBA_PTR_SET_VALUE(isValid_, isValid) };


      // issuerDN Field Functions 
      bool hasIssuerDN() const { return this->issuerDN_ != nullptr;};
      void deleteIssuerDN() { this->issuerDN_ = nullptr;};
      inline string getIssuerDN() const { DARABONBA_PTR_GET_DEFAULT(issuerDN_, "") };
      inline Data& setIssuerDN(string issuerDN) { DARABONBA_PTR_SET_VALUE(issuerDN_, issuerDN) };


      // notAfter Field Functions 
      bool hasNotAfter() const { return this->notAfter_ != nullptr;};
      void deleteNotAfter() { this->notAfter_ = nullptr;};
      inline int64_t getNotAfter() const { DARABONBA_PTR_GET_DEFAULT(notAfter_, 0L) };
      inline Data& setNotAfter(int64_t notAfter) { DARABONBA_PTR_SET_VALUE(notAfter_, notAfter) };


      // notBefore Field Functions 
      bool hasNotBefore() const { return this->notBefore_ != nullptr;};
      void deleteNotBefore() { this->notBefore_ = nullptr;};
      inline int64_t getNotBefore() const { DARABONBA_PTR_GET_DEFAULT(notBefore_, 0L) };
      inline Data& setNotBefore(int64_t notBefore) { DARABONBA_PTR_SET_VALUE(notBefore_, notBefore) };


      // sslCertificateText Field Functions 
      bool hasSslCertificateText() const { return this->sslCertificateText_ != nullptr;};
      void deleteSslCertificateText() { this->sslCertificateText_ = nullptr;};
      inline string getSslCertificateText() const { DARABONBA_PTR_GET_DEFAULT(sslCertificateText_, "") };
      inline Data& setSslCertificateText(string sslCertificateText) { DARABONBA_PTR_SET_VALUE(sslCertificateText_, sslCertificateText) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Data& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // subjectDN Field Functions 
      bool hasSubjectDN() const { return this->subjectDN_ != nullptr;};
      void deleteSubjectDN() { this->subjectDN_ = nullptr;};
      inline string getSubjectDN() const { DARABONBA_PTR_GET_DEFAULT(subjectDN_, "") };
      inline Data& setSubjectDN(string subjectDN) { DARABONBA_PTR_SET_VALUE(subjectDN_, subjectDN) };


    protected:
      shared_ptr<string> aliases_ {};
      shared_ptr<bool> customCert_ {};
      shared_ptr<bool> enableSSL_ {};
      shared_ptr<bool> isValid_ {};
      shared_ptr<string> issuerDN_ {};
      shared_ptr<int64_t> notAfter_ {};
      shared_ptr<int64_t> notBefore_ {};
      shared_ptr<string> sslCertificateText_ {};
      shared_ptr<string> status_ {};
      shared_ptr<string> subjectDN_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->errCode_ == nullptr && this->errMessage_ == nullptr && this->httpStatusCode_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListSSLDetailsResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListSSLDetailsResponseBody::Data) };
    inline ListSSLDetailsResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListSSLDetailsResponseBody::Data) };
    inline ListSSLDetailsResponseBody& setData(const ListSSLDetailsResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListSSLDetailsResponseBody& setData(ListSSLDetailsResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errCode Field Functions 
    bool hasErrCode() const { return this->errCode_ != nullptr;};
    void deleteErrCode() { this->errCode_ = nullptr;};
    inline string getErrCode() const { DARABONBA_PTR_GET_DEFAULT(errCode_, "") };
    inline ListSSLDetailsResponseBody& setErrCode(string errCode) { DARABONBA_PTR_SET_VALUE(errCode_, errCode) };


    // errMessage Field Functions 
    bool hasErrMessage() const { return this->errMessage_ != nullptr;};
    void deleteErrMessage() { this->errMessage_ = nullptr;};
    inline string getErrMessage() const { DARABONBA_PTR_GET_DEFAULT(errMessage_, "") };
    inline ListSSLDetailsResponseBody& setErrMessage(string errMessage) { DARABONBA_PTR_SET_VALUE(errMessage_, errMessage) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListSSLDetailsResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListSSLDetailsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListSSLDetailsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<ListSSLDetailsResponseBody::Data> data_ {};
    shared_ptr<string> errCode_ {};
    shared_ptr<string> errMessage_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Starrocks20221019
#endif
