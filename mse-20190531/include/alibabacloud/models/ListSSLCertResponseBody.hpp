// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSSLCERTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSSLCERTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class ListSSLCertResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSSLCertResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListSSLCertResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListSSLCertResponseBody() = default ;
    ListSSLCertResponseBody(const ListSSLCertResponseBody &) = default ;
    ListSSLCertResponseBody(ListSSLCertResponseBody &&) = default ;
    ListSSLCertResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSSLCertResponseBody() = default ;
    ListSSLCertResponseBody& operator=(const ListSSLCertResponseBody &) = default ;
    ListSSLCertResponseBody& operator=(ListSSLCertResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AfterDate, afterDate_);
        DARABONBA_PTR_TO_JSON(Algorithm, algorithm_);
        DARABONBA_PTR_TO_JSON(BeforeDate, beforeDate_);
        DARABONBA_PTR_TO_JSON(CertIdentifier, certIdentifier_);
        DARABONBA_PTR_TO_JSON(CertName, certName_);
        DARABONBA_PTR_TO_JSON(CommonName, commonName_);
        DARABONBA_PTR_TO_JSON(GmtAfter, gmtAfter_);
        DARABONBA_PTR_TO_JSON(GmtBefore, gmtBefore_);
        DARABONBA_PTR_TO_JSON(Issuer, issuer_);
        DARABONBA_PTR_TO_JSON(Sans, sans_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AfterDate, afterDate_);
        DARABONBA_PTR_FROM_JSON(Algorithm, algorithm_);
        DARABONBA_PTR_FROM_JSON(BeforeDate, beforeDate_);
        DARABONBA_PTR_FROM_JSON(CertIdentifier, certIdentifier_);
        DARABONBA_PTR_FROM_JSON(CertName, certName_);
        DARABONBA_PTR_FROM_JSON(CommonName, commonName_);
        DARABONBA_PTR_FROM_JSON(GmtAfter, gmtAfter_);
        DARABONBA_PTR_FROM_JSON(GmtBefore, gmtBefore_);
        DARABONBA_PTR_FROM_JSON(Issuer, issuer_);
        DARABONBA_PTR_FROM_JSON(Sans, sans_);
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
      virtual bool empty() const override { return this->afterDate_ == nullptr
        && this->algorithm_ == nullptr && this->beforeDate_ == nullptr && this->certIdentifier_ == nullptr && this->certName_ == nullptr && this->commonName_ == nullptr
        && this->gmtAfter_ == nullptr && this->gmtBefore_ == nullptr && this->issuer_ == nullptr && this->sans_ == nullptr; };
      // afterDate Field Functions 
      bool hasAfterDate() const { return this->afterDate_ != nullptr;};
      void deleteAfterDate() { this->afterDate_ = nullptr;};
      inline string getAfterDate() const { DARABONBA_PTR_GET_DEFAULT(afterDate_, "") };
      inline Data& setAfterDate(string afterDate) { DARABONBA_PTR_SET_VALUE(afterDate_, afterDate) };


      // algorithm Field Functions 
      bool hasAlgorithm() const { return this->algorithm_ != nullptr;};
      void deleteAlgorithm() { this->algorithm_ = nullptr;};
      inline string getAlgorithm() const { DARABONBA_PTR_GET_DEFAULT(algorithm_, "") };
      inline Data& setAlgorithm(string algorithm) { DARABONBA_PTR_SET_VALUE(algorithm_, algorithm) };


      // beforeDate Field Functions 
      bool hasBeforeDate() const { return this->beforeDate_ != nullptr;};
      void deleteBeforeDate() { this->beforeDate_ = nullptr;};
      inline string getBeforeDate() const { DARABONBA_PTR_GET_DEFAULT(beforeDate_, "") };
      inline Data& setBeforeDate(string beforeDate) { DARABONBA_PTR_SET_VALUE(beforeDate_, beforeDate) };


      // certIdentifier Field Functions 
      bool hasCertIdentifier() const { return this->certIdentifier_ != nullptr;};
      void deleteCertIdentifier() { this->certIdentifier_ = nullptr;};
      inline string getCertIdentifier() const { DARABONBA_PTR_GET_DEFAULT(certIdentifier_, "") };
      inline Data& setCertIdentifier(string certIdentifier) { DARABONBA_PTR_SET_VALUE(certIdentifier_, certIdentifier) };


      // certName Field Functions 
      bool hasCertName() const { return this->certName_ != nullptr;};
      void deleteCertName() { this->certName_ = nullptr;};
      inline string getCertName() const { DARABONBA_PTR_GET_DEFAULT(certName_, "") };
      inline Data& setCertName(string certName) { DARABONBA_PTR_SET_VALUE(certName_, certName) };


      // commonName Field Functions 
      bool hasCommonName() const { return this->commonName_ != nullptr;};
      void deleteCommonName() { this->commonName_ = nullptr;};
      inline string getCommonName() const { DARABONBA_PTR_GET_DEFAULT(commonName_, "") };
      inline Data& setCommonName(string commonName) { DARABONBA_PTR_SET_VALUE(commonName_, commonName) };


      // gmtAfter Field Functions 
      bool hasGmtAfter() const { return this->gmtAfter_ != nullptr;};
      void deleteGmtAfter() { this->gmtAfter_ = nullptr;};
      inline string getGmtAfter() const { DARABONBA_PTR_GET_DEFAULT(gmtAfter_, "") };
      inline Data& setGmtAfter(string gmtAfter) { DARABONBA_PTR_SET_VALUE(gmtAfter_, gmtAfter) };


      // gmtBefore Field Functions 
      bool hasGmtBefore() const { return this->gmtBefore_ != nullptr;};
      void deleteGmtBefore() { this->gmtBefore_ = nullptr;};
      inline string getGmtBefore() const { DARABONBA_PTR_GET_DEFAULT(gmtBefore_, "") };
      inline Data& setGmtBefore(string gmtBefore) { DARABONBA_PTR_SET_VALUE(gmtBefore_, gmtBefore) };


      // issuer Field Functions 
      bool hasIssuer() const { return this->issuer_ != nullptr;};
      void deleteIssuer() { this->issuer_ = nullptr;};
      inline string getIssuer() const { DARABONBA_PTR_GET_DEFAULT(issuer_, "") };
      inline Data& setIssuer(string issuer) { DARABONBA_PTR_SET_VALUE(issuer_, issuer) };


      // sans Field Functions 
      bool hasSans() const { return this->sans_ != nullptr;};
      void deleteSans() { this->sans_ = nullptr;};
      inline string getSans() const { DARABONBA_PTR_GET_DEFAULT(sans_, "") };
      inline Data& setSans(string sans) { DARABONBA_PTR_SET_VALUE(sans_, sans) };


    protected:
      // The time when the certificate expires. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
      shared_ptr<string> afterDate_ {};
      // The algorithm.
      shared_ptr<string> algorithm_ {};
      // The time when the certificate took effect. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
      shared_ptr<string> beforeDate_ {};
      // The ID of the certificate.
      shared_ptr<string> certIdentifier_ {};
      // The name of the certificate.
      shared_ptr<string> certName_ {};
      // The domain name with which the certificate is associated.
      shared_ptr<string> commonName_ {};
      // The time when the certificate expires. This value is a GMT timestamp.
      shared_ptr<string> gmtAfter_ {};
      // The time when the certificate took effect. This value is a GMT timestamp.
      shared_ptr<string> gmtBefore_ {};
      // The issuer of the certificate.
      shared_ptr<string> issuer_ {};
      // The SSL certificate.
      shared_ptr<string> sans_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline ListSSLCertResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListSSLCertResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListSSLCertResponseBody::Data>) };
    inline vector<ListSSLCertResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListSSLCertResponseBody::Data>) };
    inline ListSSLCertResponseBody& setData(const vector<ListSSLCertResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListSSLCertResponseBody& setData(vector<ListSSLCertResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListSSLCertResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListSSLCertResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListSSLCertResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListSSLCertResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The status code returned. A value of 200 indicates that the request is successful.
    shared_ptr<int32_t> code_ {};
    // The returned data.
    shared_ptr<vector<ListSSLCertResponseBody::Data>> data_ {};
    // The HTTP status code returned.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The error message returned.
    shared_ptr<string> message_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   `true`: The request was successful.
    // *   `false`: The request failed.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
