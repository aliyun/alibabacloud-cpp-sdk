// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VERIFYIMAGESIGNATURERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_VERIFYIMAGESIGNATURERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIDeepSign20260511
{
namespace Models
{
  class VerifyImageSignatureResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const VerifyImageSignatureResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Issuer, issuer_);
      DARABONBA_PTR_TO_JSON(IssuerTrusted, issuerTrusted_);
      DARABONBA_PTR_TO_JSON(Manifest, manifest_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(VerificationState, verificationState_);
    };
    friend void from_json(const Darabonba::Json& j, VerifyImageSignatureResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Issuer, issuer_);
      DARABONBA_PTR_FROM_JSON(IssuerTrusted, issuerTrusted_);
      DARABONBA_PTR_FROM_JSON(Manifest, manifest_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(VerificationState, verificationState_);
    };
    VerifyImageSignatureResponseBody() = default ;
    VerifyImageSignatureResponseBody(const VerifyImageSignatureResponseBody &) = default ;
    VerifyImageSignatureResponseBody(VerifyImageSignatureResponseBody &&) = default ;
    VerifyImageSignatureResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~VerifyImageSignatureResponseBody() = default ;
    VerifyImageSignatureResponseBody& operator=(const VerifyImageSignatureResponseBody &) = default ;
    VerifyImageSignatureResponseBody& operator=(VerifyImageSignatureResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Manifest : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Manifest& obj) { 
        DARABONBA_PTR_TO_JSON(Assertions, assertions_);
        DARABONBA_PTR_TO_JSON(SignatureInfo, signatureInfo_);
      };
      friend void from_json(const Darabonba::Json& j, Manifest& obj) { 
        DARABONBA_PTR_FROM_JSON(Assertions, assertions_);
        DARABONBA_PTR_FROM_JSON(SignatureInfo, signatureInfo_);
      };
      Manifest() = default ;
      Manifest(const Manifest &) = default ;
      Manifest(Manifest &&) = default ;
      Manifest(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Manifest() = default ;
      Manifest& operator=(const Manifest &) = default ;
      Manifest& operator=(Manifest &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class SignatureInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SignatureInfo& obj) { 
          DARABONBA_PTR_TO_JSON(Alg, alg_);
          DARABONBA_PTR_TO_JSON(Issuer, issuer_);
          DARABONBA_PTR_TO_JSON(Time, time_);
        };
        friend void from_json(const Darabonba::Json& j, SignatureInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(Alg, alg_);
          DARABONBA_PTR_FROM_JSON(Issuer, issuer_);
          DARABONBA_PTR_FROM_JSON(Time, time_);
        };
        SignatureInfo() = default ;
        SignatureInfo(const SignatureInfo &) = default ;
        SignatureInfo(SignatureInfo &&) = default ;
        SignatureInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SignatureInfo() = default ;
        SignatureInfo& operator=(const SignatureInfo &) = default ;
        SignatureInfo& operator=(SignatureInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->alg_ == nullptr
        && this->issuer_ == nullptr && this->time_ == nullptr; };
        // alg Field Functions 
        bool hasAlg() const { return this->alg_ != nullptr;};
        void deleteAlg() { this->alg_ = nullptr;};
        inline string getAlg() const { DARABONBA_PTR_GET_DEFAULT(alg_, "") };
        inline SignatureInfo& setAlg(string alg) { DARABONBA_PTR_SET_VALUE(alg_, alg) };


        // issuer Field Functions 
        bool hasIssuer() const { return this->issuer_ != nullptr;};
        void deleteIssuer() { this->issuer_ = nullptr;};
        inline string getIssuer() const { DARABONBA_PTR_GET_DEFAULT(issuer_, "") };
        inline SignatureInfo& setIssuer(string issuer) { DARABONBA_PTR_SET_VALUE(issuer_, issuer) };


        // time Field Functions 
        bool hasTime() const { return this->time_ != nullptr;};
        void deleteTime() { this->time_ = nullptr;};
        inline string getTime() const { DARABONBA_PTR_GET_DEFAULT(time_, "") };
        inline SignatureInfo& setTime(string time) { DARABONBA_PTR_SET_VALUE(time_, time) };


      protected:
        // The signature algorithm, such as `ps256` or `es256`.
        shared_ptr<string> alg_ {};
        // The distinguished name (DN) of the signing certificate issuer.
        shared_ptr<string> issuer_ {};
        // The signing time in ISO 8601 format.
        shared_ptr<string> time_ {};
      };

      class Assertions : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Assertions& obj) { 
          DARABONBA_PTR_TO_JSON(Data, data_);
          DARABONBA_PTR_TO_JSON(Label, label_);
        };
        friend void from_json(const Darabonba::Json& j, Assertions& obj) { 
          DARABONBA_PTR_FROM_JSON(Data, data_);
          DARABONBA_PTR_FROM_JSON(Label, label_);
        };
        Assertions() = default ;
        Assertions(const Assertions &) = default ;
        Assertions(Assertions &&) = default ;
        Assertions(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Assertions() = default ;
        Assertions& operator=(const Assertions &) = default ;
        Assertions& operator=(Assertions &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->data_ == nullptr
        && this->label_ == nullptr; };
        // data Field Functions 
        bool hasData() const { return this->data_ != nullptr;};
        void deleteData() { this->data_ = nullptr;};
        inline string getData() const { DARABONBA_PTR_GET_DEFAULT(data_, "") };
        inline Assertions& setData(string data) { DARABONBA_PTR_SET_VALUE(data_, data) };


        // label Field Functions 
        bool hasLabel() const { return this->label_ != nullptr;};
        void deleteLabel() { this->label_ = nullptr;};
        inline string getLabel() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
        inline Assertions& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


      protected:
        // The assertion data, which is detailed metadata in JSON format.
        shared_ptr<string> data_ {};
        // The assertion label, such as c2pa.actions or stds.exif.
        shared_ptr<string> label_ {};
      };

      virtual bool empty() const override { return this->assertions_ == nullptr
        && this->signatureInfo_ == nullptr; };
      // assertions Field Functions 
      bool hasAssertions() const { return this->assertions_ != nullptr;};
      void deleteAssertions() { this->assertions_ = nullptr;};
      inline const vector<Manifest::Assertions> & getAssertions() const { DARABONBA_PTR_GET_CONST(assertions_, vector<Manifest::Assertions>) };
      inline vector<Manifest::Assertions> getAssertions() { DARABONBA_PTR_GET(assertions_, vector<Manifest::Assertions>) };
      inline Manifest& setAssertions(const vector<Manifest::Assertions> & assertions) { DARABONBA_PTR_SET_VALUE(assertions_, assertions) };
      inline Manifest& setAssertions(vector<Manifest::Assertions> && assertions) { DARABONBA_PTR_SET_RVALUE(assertions_, assertions) };


      // signatureInfo Field Functions 
      bool hasSignatureInfo() const { return this->signatureInfo_ != nullptr;};
      void deleteSignatureInfo() { this->signatureInfo_ = nullptr;};
      inline const Manifest::SignatureInfo & getSignatureInfo() const { DARABONBA_PTR_GET_CONST(signatureInfo_, Manifest::SignatureInfo) };
      inline Manifest::SignatureInfo getSignatureInfo() { DARABONBA_PTR_GET(signatureInfo_, Manifest::SignatureInfo) };
      inline Manifest& setSignatureInfo(const Manifest::SignatureInfo & signatureInfo) { DARABONBA_PTR_SET_VALUE(signatureInfo_, signatureInfo) };
      inline Manifest& setSignatureInfo(Manifest::SignatureInfo && signatureInfo) { DARABONBA_PTR_SET_RVALUE(signatureInfo_, signatureInfo) };


    protected:
      // The list of assertions, which contains metadata such as the origin and editing history of the image.
      shared_ptr<vector<Manifest::Assertions>> assertions_ {};
      // The signature details.
      shared_ptr<Manifest::SignatureInfo> signatureInfo_ {};
    };

    class Issuer : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Issuer& obj) { 
        DARABONBA_PTR_TO_JSON(CommonName, commonName_);
        DARABONBA_PTR_TO_JSON(Organization, organization_);
      };
      friend void from_json(const Darabonba::Json& j, Issuer& obj) { 
        DARABONBA_PTR_FROM_JSON(CommonName, commonName_);
        DARABONBA_PTR_FROM_JSON(Organization, organization_);
      };
      Issuer() = default ;
      Issuer(const Issuer &) = default ;
      Issuer(Issuer &&) = default ;
      Issuer(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Issuer() = default ;
      Issuer& operator=(const Issuer &) = default ;
      Issuer& operator=(Issuer &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->commonName_ == nullptr
        && this->organization_ == nullptr; };
      // commonName Field Functions 
      bool hasCommonName() const { return this->commonName_ != nullptr;};
      void deleteCommonName() { this->commonName_ = nullptr;};
      inline string getCommonName() const { DARABONBA_PTR_GET_DEFAULT(commonName_, "") };
      inline Issuer& setCommonName(string commonName) { DARABONBA_PTR_SET_VALUE(commonName_, commonName) };


      // organization Field Functions 
      bool hasOrganization() const { return this->organization_ != nullptr;};
      void deleteOrganization() { this->organization_ = nullptr;};
      inline string getOrganization() const { DARABONBA_PTR_GET_DEFAULT(organization_, "") };
      inline Issuer& setOrganization(string organization) { DARABONBA_PTR_SET_VALUE(organization_, organization) };


    protected:
      // The common name (CN) of the issuer.
      shared_ptr<string> commonName_ {};
      // The organization name (O) of the issuer.
      shared_ptr<string> organization_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->httpStatusCode_ == nullptr && this->issuer_ == nullptr && this->issuerTrusted_ == nullptr && this->manifest_ == nullptr && this->message_ == nullptr
        && this->requestId_ == nullptr && this->success_ == nullptr && this->verificationState_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline VerifyImageSignatureResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int64_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0L) };
    inline VerifyImageSignatureResponseBody& setHttpStatusCode(int64_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // issuer Field Functions 
    bool hasIssuer() const { return this->issuer_ != nullptr;};
    void deleteIssuer() { this->issuer_ = nullptr;};
    inline const VerifyImageSignatureResponseBody::Issuer & getIssuer() const { DARABONBA_PTR_GET_CONST(issuer_, VerifyImageSignatureResponseBody::Issuer) };
    inline VerifyImageSignatureResponseBody::Issuer getIssuer() { DARABONBA_PTR_GET(issuer_, VerifyImageSignatureResponseBody::Issuer) };
    inline VerifyImageSignatureResponseBody& setIssuer(const VerifyImageSignatureResponseBody::Issuer & issuer) { DARABONBA_PTR_SET_VALUE(issuer_, issuer) };
    inline VerifyImageSignatureResponseBody& setIssuer(VerifyImageSignatureResponseBody::Issuer && issuer) { DARABONBA_PTR_SET_RVALUE(issuer_, issuer) };


    // issuerTrusted Field Functions 
    bool hasIssuerTrusted() const { return this->issuerTrusted_ != nullptr;};
    void deleteIssuerTrusted() { this->issuerTrusted_ = nullptr;};
    inline bool getIssuerTrusted() const { DARABONBA_PTR_GET_DEFAULT(issuerTrusted_, false) };
    inline VerifyImageSignatureResponseBody& setIssuerTrusted(bool issuerTrusted) { DARABONBA_PTR_SET_VALUE(issuerTrusted_, issuerTrusted) };


    // manifest Field Functions 
    bool hasManifest() const { return this->manifest_ != nullptr;};
    void deleteManifest() { this->manifest_ = nullptr;};
    inline const VerifyImageSignatureResponseBody::Manifest & getManifest() const { DARABONBA_PTR_GET_CONST(manifest_, VerifyImageSignatureResponseBody::Manifest) };
    inline VerifyImageSignatureResponseBody::Manifest getManifest() { DARABONBA_PTR_GET(manifest_, VerifyImageSignatureResponseBody::Manifest) };
    inline VerifyImageSignatureResponseBody& setManifest(const VerifyImageSignatureResponseBody::Manifest & manifest) { DARABONBA_PTR_SET_VALUE(manifest_, manifest) };
    inline VerifyImageSignatureResponseBody& setManifest(VerifyImageSignatureResponseBody::Manifest && manifest) { DARABONBA_PTR_SET_RVALUE(manifest_, manifest) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline VerifyImageSignatureResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline VerifyImageSignatureResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline VerifyImageSignatureResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // verificationState Field Functions 
    bool hasVerificationState() const { return this->verificationState_ != nullptr;};
    void deleteVerificationState() { this->verificationState_ = nullptr;};
    inline string getVerificationState() const { DARABONBA_PTR_GET_DEFAULT(verificationState_, "") };
    inline VerifyImageSignatureResponseBody& setVerificationState(string verificationState) { DARABONBA_PTR_SET_VALUE(verificationState_, verificationState) };


  protected:
    // The business error code. The value "OK" is returned if the request is successful.
    shared_ptr<string> code_ {};
    // The HTTP status code. The value `200` is returned if the request is successful.
    shared_ptr<int64_t> httpStatusCode_ {};
    // The issuer information.
    shared_ptr<VerifyImageSignatureResponseBody::Issuer> issuer_ {};
    // Indicates whether the issuer is trusted. A value of true indicates that the issuer certificate is issued by a trusted CA.
    shared_ptr<bool> issuerTrusted_ {};
    // The content credentials manifest information. This parameter is returned only when the image contains a C2PA signature.
    shared_ptr<VerifyImageSignatureResponseBody::Manifest> manifest_ {};
    // The additional information. The value `success` is returned if the request is successful.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request is successful.
    shared_ptr<bool> success_ {};
    // The signature verification status. Valid values:
    // - Valid: The signature is valid.
    // - Invalid: The signature is invalid or has been tampered with.
    // - Trusted: The signature is valid and trusted.
    shared_ptr<string> verificationState_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIDeepSign20260511
#endif
