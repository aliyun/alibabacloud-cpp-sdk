// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYREGISTRANTPROFILEREALNAMEVERIFICATIONINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYREGISTRANTPROFILEREALNAMEVERIFICATIONINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180129
{
namespace Models
{
  class QueryRegistrantProfileRealNameVerificationInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryRegistrantProfileRealNameVerificationInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(IdentityCredential, identityCredential_);
      DARABONBA_PTR_TO_JSON(IdentityCredentialNo, identityCredentialNo_);
      DARABONBA_PTR_TO_JSON(IdentityCredentialType, identityCredentialType_);
      DARABONBA_PTR_TO_JSON(IdentityCredentialUrl, identityCredentialUrl_);
      DARABONBA_PTR_TO_JSON(ModificationDate, modificationDate_);
      DARABONBA_PTR_TO_JSON(RegistrantProfileId, registrantProfileId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SubmissionDate, submissionDate_);
    };
    friend void from_json(const Darabonba::Json& j, QueryRegistrantProfileRealNameVerificationInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(IdentityCredential, identityCredential_);
      DARABONBA_PTR_FROM_JSON(IdentityCredentialNo, identityCredentialNo_);
      DARABONBA_PTR_FROM_JSON(IdentityCredentialType, identityCredentialType_);
      DARABONBA_PTR_FROM_JSON(IdentityCredentialUrl, identityCredentialUrl_);
      DARABONBA_PTR_FROM_JSON(ModificationDate, modificationDate_);
      DARABONBA_PTR_FROM_JSON(RegistrantProfileId, registrantProfileId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SubmissionDate, submissionDate_);
    };
    QueryRegistrantProfileRealNameVerificationInfoResponseBody() = default ;
    QueryRegistrantProfileRealNameVerificationInfoResponseBody(const QueryRegistrantProfileRealNameVerificationInfoResponseBody &) = default ;
    QueryRegistrantProfileRealNameVerificationInfoResponseBody(QueryRegistrantProfileRealNameVerificationInfoResponseBody &&) = default ;
    QueryRegistrantProfileRealNameVerificationInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryRegistrantProfileRealNameVerificationInfoResponseBody() = default ;
    QueryRegistrantProfileRealNameVerificationInfoResponseBody& operator=(const QueryRegistrantProfileRealNameVerificationInfoResponseBody &) = default ;
    QueryRegistrantProfileRealNameVerificationInfoResponseBody& operator=(QueryRegistrantProfileRealNameVerificationInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->identityCredential_ == nullptr
        && return this->identityCredentialNo_ == nullptr && return this->identityCredentialType_ == nullptr && return this->identityCredentialUrl_ == nullptr && return this->modificationDate_ == nullptr && return this->registrantProfileId_ == nullptr
        && return this->requestId_ == nullptr && return this->submissionDate_ == nullptr; };
    // identityCredential Field Functions 
    bool hasIdentityCredential() const { return this->identityCredential_ != nullptr;};
    void deleteIdentityCredential() { this->identityCredential_ = nullptr;};
    inline string identityCredential() const { DARABONBA_PTR_GET_DEFAULT(identityCredential_, "") };
    inline QueryRegistrantProfileRealNameVerificationInfoResponseBody& setIdentityCredential(string identityCredential) { DARABONBA_PTR_SET_VALUE(identityCredential_, identityCredential) };


    // identityCredentialNo Field Functions 
    bool hasIdentityCredentialNo() const { return this->identityCredentialNo_ != nullptr;};
    void deleteIdentityCredentialNo() { this->identityCredentialNo_ = nullptr;};
    inline string identityCredentialNo() const { DARABONBA_PTR_GET_DEFAULT(identityCredentialNo_, "") };
    inline QueryRegistrantProfileRealNameVerificationInfoResponseBody& setIdentityCredentialNo(string identityCredentialNo) { DARABONBA_PTR_SET_VALUE(identityCredentialNo_, identityCredentialNo) };


    // identityCredentialType Field Functions 
    bool hasIdentityCredentialType() const { return this->identityCredentialType_ != nullptr;};
    void deleteIdentityCredentialType() { this->identityCredentialType_ = nullptr;};
    inline string identityCredentialType() const { DARABONBA_PTR_GET_DEFAULT(identityCredentialType_, "") };
    inline QueryRegistrantProfileRealNameVerificationInfoResponseBody& setIdentityCredentialType(string identityCredentialType) { DARABONBA_PTR_SET_VALUE(identityCredentialType_, identityCredentialType) };


    // identityCredentialUrl Field Functions 
    bool hasIdentityCredentialUrl() const { return this->identityCredentialUrl_ != nullptr;};
    void deleteIdentityCredentialUrl() { this->identityCredentialUrl_ = nullptr;};
    inline string identityCredentialUrl() const { DARABONBA_PTR_GET_DEFAULT(identityCredentialUrl_, "") };
    inline QueryRegistrantProfileRealNameVerificationInfoResponseBody& setIdentityCredentialUrl(string identityCredentialUrl) { DARABONBA_PTR_SET_VALUE(identityCredentialUrl_, identityCredentialUrl) };


    // modificationDate Field Functions 
    bool hasModificationDate() const { return this->modificationDate_ != nullptr;};
    void deleteModificationDate() { this->modificationDate_ = nullptr;};
    inline string modificationDate() const { DARABONBA_PTR_GET_DEFAULT(modificationDate_, "") };
    inline QueryRegistrantProfileRealNameVerificationInfoResponseBody& setModificationDate(string modificationDate) { DARABONBA_PTR_SET_VALUE(modificationDate_, modificationDate) };


    // registrantProfileId Field Functions 
    bool hasRegistrantProfileId() const { return this->registrantProfileId_ != nullptr;};
    void deleteRegistrantProfileId() { this->registrantProfileId_ = nullptr;};
    inline int64_t registrantProfileId() const { DARABONBA_PTR_GET_DEFAULT(registrantProfileId_, 0L) };
    inline QueryRegistrantProfileRealNameVerificationInfoResponseBody& setRegistrantProfileId(int64_t registrantProfileId) { DARABONBA_PTR_SET_VALUE(registrantProfileId_, registrantProfileId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryRegistrantProfileRealNameVerificationInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // submissionDate Field Functions 
    bool hasSubmissionDate() const { return this->submissionDate_ != nullptr;};
    void deleteSubmissionDate() { this->submissionDate_ = nullptr;};
    inline string submissionDate() const { DARABONBA_PTR_GET_DEFAULT(submissionDate_, "") };
    inline QueryRegistrantProfileRealNameVerificationInfoResponseBody& setSubmissionDate(string submissionDate) { DARABONBA_PTR_SET_VALUE(submissionDate_, submissionDate) };


  protected:
    std::shared_ptr<string> identityCredential_ = nullptr;
    std::shared_ptr<string> identityCredentialNo_ = nullptr;
    std::shared_ptr<string> identityCredentialType_ = nullptr;
    std::shared_ptr<string> identityCredentialUrl_ = nullptr;
    std::shared_ptr<string> modificationDate_ = nullptr;
    std::shared_ptr<int64_t> registrantProfileId_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> submissionDate_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180129
#endif
