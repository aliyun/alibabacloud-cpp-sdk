// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYDOMAINREALNAMEVERIFICATIONINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYDOMAINREALNAMEVERIFICATIONINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180129
{
namespace Models
{
  class QueryDomainRealNameVerificationInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryDomainRealNameVerificationInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(IdentityCredential, identityCredential_);
      DARABONBA_PTR_TO_JSON(IdentityCredentialNo, identityCredentialNo_);
      DARABONBA_PTR_TO_JSON(IdentityCredentialType, identityCredentialType_);
      DARABONBA_PTR_TO_JSON(IdentityCredentialUrl, identityCredentialUrl_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SubmissionDate, submissionDate_);
    };
    friend void from_json(const Darabonba::Json& j, QueryDomainRealNameVerificationInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(IdentityCredential, identityCredential_);
      DARABONBA_PTR_FROM_JSON(IdentityCredentialNo, identityCredentialNo_);
      DARABONBA_PTR_FROM_JSON(IdentityCredentialType, identityCredentialType_);
      DARABONBA_PTR_FROM_JSON(IdentityCredentialUrl, identityCredentialUrl_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SubmissionDate, submissionDate_);
    };
    QueryDomainRealNameVerificationInfoResponseBody() = default ;
    QueryDomainRealNameVerificationInfoResponseBody(const QueryDomainRealNameVerificationInfoResponseBody &) = default ;
    QueryDomainRealNameVerificationInfoResponseBody(QueryDomainRealNameVerificationInfoResponseBody &&) = default ;
    QueryDomainRealNameVerificationInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryDomainRealNameVerificationInfoResponseBody() = default ;
    QueryDomainRealNameVerificationInfoResponseBody& operator=(const QueryDomainRealNameVerificationInfoResponseBody &) = default ;
    QueryDomainRealNameVerificationInfoResponseBody& operator=(QueryDomainRealNameVerificationInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domainName_ == nullptr
        && return this->identityCredential_ == nullptr && return this->identityCredentialNo_ == nullptr && return this->identityCredentialType_ == nullptr && return this->identityCredentialUrl_ == nullptr && return this->instanceId_ == nullptr
        && return this->requestId_ == nullptr && return this->submissionDate_ == nullptr; };
    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline QueryDomainRealNameVerificationInfoResponseBody& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // identityCredential Field Functions 
    bool hasIdentityCredential() const { return this->identityCredential_ != nullptr;};
    void deleteIdentityCredential() { this->identityCredential_ = nullptr;};
    inline string identityCredential() const { DARABONBA_PTR_GET_DEFAULT(identityCredential_, "") };
    inline QueryDomainRealNameVerificationInfoResponseBody& setIdentityCredential(string identityCredential) { DARABONBA_PTR_SET_VALUE(identityCredential_, identityCredential) };


    // identityCredentialNo Field Functions 
    bool hasIdentityCredentialNo() const { return this->identityCredentialNo_ != nullptr;};
    void deleteIdentityCredentialNo() { this->identityCredentialNo_ = nullptr;};
    inline string identityCredentialNo() const { DARABONBA_PTR_GET_DEFAULT(identityCredentialNo_, "") };
    inline QueryDomainRealNameVerificationInfoResponseBody& setIdentityCredentialNo(string identityCredentialNo) { DARABONBA_PTR_SET_VALUE(identityCredentialNo_, identityCredentialNo) };


    // identityCredentialType Field Functions 
    bool hasIdentityCredentialType() const { return this->identityCredentialType_ != nullptr;};
    void deleteIdentityCredentialType() { this->identityCredentialType_ = nullptr;};
    inline string identityCredentialType() const { DARABONBA_PTR_GET_DEFAULT(identityCredentialType_, "") };
    inline QueryDomainRealNameVerificationInfoResponseBody& setIdentityCredentialType(string identityCredentialType) { DARABONBA_PTR_SET_VALUE(identityCredentialType_, identityCredentialType) };


    // identityCredentialUrl Field Functions 
    bool hasIdentityCredentialUrl() const { return this->identityCredentialUrl_ != nullptr;};
    void deleteIdentityCredentialUrl() { this->identityCredentialUrl_ = nullptr;};
    inline string identityCredentialUrl() const { DARABONBA_PTR_GET_DEFAULT(identityCredentialUrl_, "") };
    inline QueryDomainRealNameVerificationInfoResponseBody& setIdentityCredentialUrl(string identityCredentialUrl) { DARABONBA_PTR_SET_VALUE(identityCredentialUrl_, identityCredentialUrl) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline QueryDomainRealNameVerificationInfoResponseBody& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryDomainRealNameVerificationInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // submissionDate Field Functions 
    bool hasSubmissionDate() const { return this->submissionDate_ != nullptr;};
    void deleteSubmissionDate() { this->submissionDate_ = nullptr;};
    inline string submissionDate() const { DARABONBA_PTR_GET_DEFAULT(submissionDate_, "") };
    inline QueryDomainRealNameVerificationInfoResponseBody& setSubmissionDate(string submissionDate) { DARABONBA_PTR_SET_VALUE(submissionDate_, submissionDate) };


  protected:
    std::shared_ptr<string> domainName_ = nullptr;
    std::shared_ptr<string> identityCredential_ = nullptr;
    std::shared_ptr<string> identityCredentialNo_ = nullptr;
    std::shared_ptr<string> identityCredentialType_ = nullptr;
    std::shared_ptr<string> identityCredentialUrl_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> submissionDate_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180129
#endif
