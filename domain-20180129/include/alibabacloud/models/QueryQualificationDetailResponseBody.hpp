// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYQUALIFICATIONDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYQUALIFICATIONDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180129
{
namespace Models
{
  class QueryQualificationDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryQualificationDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AuditStatus, auditStatus_);
      DARABONBA_PTR_TO_JSON(Credentials, credentials_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TrackId, trackId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryQualificationDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AuditStatus, auditStatus_);
      DARABONBA_PTR_FROM_JSON(Credentials, credentials_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TrackId, trackId_);
    };
    QueryQualificationDetailResponseBody() = default ;
    QueryQualificationDetailResponseBody(const QueryQualificationDetailResponseBody &) = default ;
    QueryQualificationDetailResponseBody(QueryQualificationDetailResponseBody &&) = default ;
    QueryQualificationDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryQualificationDetailResponseBody() = default ;
    QueryQualificationDetailResponseBody& operator=(const QueryQualificationDetailResponseBody &) = default ;
    QueryQualificationDetailResponseBody& operator=(QueryQualificationDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Credentials : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Credentials& obj) { 
        DARABONBA_PTR_TO_JSON(QualificationCredential, qualificationCredential_);
      };
      friend void from_json(const Darabonba::Json& j, Credentials& obj) { 
        DARABONBA_PTR_FROM_JSON(QualificationCredential, qualificationCredential_);
      };
      Credentials() = default ;
      Credentials(const Credentials &) = default ;
      Credentials(Credentials &&) = default ;
      Credentials(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Credentials() = default ;
      Credentials& operator=(const Credentials &) = default ;
      Credentials& operator=(Credentials &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class QualificationCredential : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const QualificationCredential& obj) { 
          DARABONBA_PTR_TO_JSON(CredentialNo, credentialNo_);
          DARABONBA_PTR_TO_JSON(CredentialType, credentialType_);
          DARABONBA_PTR_TO_JSON(CredentialUrl, credentialUrl_);
        };
        friend void from_json(const Darabonba::Json& j, QualificationCredential& obj) { 
          DARABONBA_PTR_FROM_JSON(CredentialNo, credentialNo_);
          DARABONBA_PTR_FROM_JSON(CredentialType, credentialType_);
          DARABONBA_PTR_FROM_JSON(CredentialUrl, credentialUrl_);
        };
        QualificationCredential() = default ;
        QualificationCredential(const QualificationCredential &) = default ;
        QualificationCredential(QualificationCredential &&) = default ;
        QualificationCredential(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~QualificationCredential() = default ;
        QualificationCredential& operator=(const QualificationCredential &) = default ;
        QualificationCredential& operator=(QualificationCredential &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->credentialNo_ == nullptr
        && this->credentialType_ == nullptr && this->credentialUrl_ == nullptr; };
        // credentialNo Field Functions 
        bool hasCredentialNo() const { return this->credentialNo_ != nullptr;};
        void deleteCredentialNo() { this->credentialNo_ = nullptr;};
        inline string getCredentialNo() const { DARABONBA_PTR_GET_DEFAULT(credentialNo_, "") };
        inline QualificationCredential& setCredentialNo(string credentialNo) { DARABONBA_PTR_SET_VALUE(credentialNo_, credentialNo) };


        // credentialType Field Functions 
        bool hasCredentialType() const { return this->credentialType_ != nullptr;};
        void deleteCredentialType() { this->credentialType_ = nullptr;};
        inline string getCredentialType() const { DARABONBA_PTR_GET_DEFAULT(credentialType_, "") };
        inline QualificationCredential& setCredentialType(string credentialType) { DARABONBA_PTR_SET_VALUE(credentialType_, credentialType) };


        // credentialUrl Field Functions 
        bool hasCredentialUrl() const { return this->credentialUrl_ != nullptr;};
        void deleteCredentialUrl() { this->credentialUrl_ = nullptr;};
        inline string getCredentialUrl() const { DARABONBA_PTR_GET_DEFAULT(credentialUrl_, "") };
        inline QualificationCredential& setCredentialUrl(string credentialUrl) { DARABONBA_PTR_SET_VALUE(credentialUrl_, credentialUrl) };


      protected:
        shared_ptr<string> credentialNo_ {};
        shared_ptr<string> credentialType_ {};
        shared_ptr<string> credentialUrl_ {};
      };

      virtual bool empty() const override { return this->qualificationCredential_ == nullptr; };
      // qualificationCredential Field Functions 
      bool hasQualificationCredential() const { return this->qualificationCredential_ != nullptr;};
      void deleteQualificationCredential() { this->qualificationCredential_ = nullptr;};
      inline const vector<Credentials::QualificationCredential> & getQualificationCredential() const { DARABONBA_PTR_GET_CONST(qualificationCredential_, vector<Credentials::QualificationCredential>) };
      inline vector<Credentials::QualificationCredential> getQualificationCredential() { DARABONBA_PTR_GET(qualificationCredential_, vector<Credentials::QualificationCredential>) };
      inline Credentials& setQualificationCredential(const vector<Credentials::QualificationCredential> & qualificationCredential) { DARABONBA_PTR_SET_VALUE(qualificationCredential_, qualificationCredential) };
      inline Credentials& setQualificationCredential(vector<Credentials::QualificationCredential> && qualificationCredential) { DARABONBA_PTR_SET_RVALUE(qualificationCredential_, qualificationCredential) };


    protected:
      shared_ptr<vector<Credentials::QualificationCredential>> qualificationCredential_ {};
    };

    virtual bool empty() const override { return this->auditStatus_ == nullptr
        && this->credentials_ == nullptr && this->requestId_ == nullptr && this->trackId_ == nullptr; };
    // auditStatus Field Functions 
    bool hasAuditStatus() const { return this->auditStatus_ != nullptr;};
    void deleteAuditStatus() { this->auditStatus_ = nullptr;};
    inline int32_t getAuditStatus() const { DARABONBA_PTR_GET_DEFAULT(auditStatus_, 0) };
    inline QueryQualificationDetailResponseBody& setAuditStatus(int32_t auditStatus) { DARABONBA_PTR_SET_VALUE(auditStatus_, auditStatus) };


    // credentials Field Functions 
    bool hasCredentials() const { return this->credentials_ != nullptr;};
    void deleteCredentials() { this->credentials_ = nullptr;};
    inline const QueryQualificationDetailResponseBody::Credentials & getCredentials() const { DARABONBA_PTR_GET_CONST(credentials_, QueryQualificationDetailResponseBody::Credentials) };
    inline QueryQualificationDetailResponseBody::Credentials getCredentials() { DARABONBA_PTR_GET(credentials_, QueryQualificationDetailResponseBody::Credentials) };
    inline QueryQualificationDetailResponseBody& setCredentials(const QueryQualificationDetailResponseBody::Credentials & credentials) { DARABONBA_PTR_SET_VALUE(credentials_, credentials) };
    inline QueryQualificationDetailResponseBody& setCredentials(QueryQualificationDetailResponseBody::Credentials && credentials) { DARABONBA_PTR_SET_RVALUE(credentials_, credentials) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryQualificationDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // trackId Field Functions 
    bool hasTrackId() const { return this->trackId_ != nullptr;};
    void deleteTrackId() { this->trackId_ = nullptr;};
    inline string getTrackId() const { DARABONBA_PTR_GET_DEFAULT(trackId_, "") };
    inline QueryQualificationDetailResponseBody& setTrackId(string trackId) { DARABONBA_PTR_SET_VALUE(trackId_, trackId) };


  protected:
    shared_ptr<int32_t> auditStatus_ {};
    shared_ptr<QueryQualificationDetailResponseBody::Credentials> credentials_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> trackId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180129
#endif
