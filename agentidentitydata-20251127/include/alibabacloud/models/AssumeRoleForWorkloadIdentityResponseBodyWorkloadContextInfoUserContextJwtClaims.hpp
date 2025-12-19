// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ASSUMEROLEFORWORKLOADIDENTITYRESPONSEBODYWORKLOADCONTEXTINFOUSERCONTEXTJWTCLAIMS_HPP_
#define ALIBABACLOUD_MODELS_ASSUMEROLEFORWORKLOADIDENTITYRESPONSEBODYWORKLOADCONTEXTINFOUSERCONTEXTJWTCLAIMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentIdentityData20251127
{
namespace Models
{
  class AssumeRoleForWorkloadIdentityResponseBodyWorkloadContextInfoUserContextJwtClaims : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AssumeRoleForWorkloadIdentityResponseBodyWorkloadContextInfoUserContextJwtClaims& obj) { 
      DARABONBA_PTR_TO_JSON(Audiences, audiences_);
      DARABONBA_PTR_TO_JSON(Issuer, issuer_);
      DARABONBA_PTR_TO_JSON(Subject, subject_);
    };
    friend void from_json(const Darabonba::Json& j, AssumeRoleForWorkloadIdentityResponseBodyWorkloadContextInfoUserContextJwtClaims& obj) { 
      DARABONBA_PTR_FROM_JSON(Audiences, audiences_);
      DARABONBA_PTR_FROM_JSON(Issuer, issuer_);
      DARABONBA_PTR_FROM_JSON(Subject, subject_);
    };
    AssumeRoleForWorkloadIdentityResponseBodyWorkloadContextInfoUserContextJwtClaims() = default ;
    AssumeRoleForWorkloadIdentityResponseBodyWorkloadContextInfoUserContextJwtClaims(const AssumeRoleForWorkloadIdentityResponseBodyWorkloadContextInfoUserContextJwtClaims &) = default ;
    AssumeRoleForWorkloadIdentityResponseBodyWorkloadContextInfoUserContextJwtClaims(AssumeRoleForWorkloadIdentityResponseBodyWorkloadContextInfoUserContextJwtClaims &&) = default ;
    AssumeRoleForWorkloadIdentityResponseBodyWorkloadContextInfoUserContextJwtClaims(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AssumeRoleForWorkloadIdentityResponseBodyWorkloadContextInfoUserContextJwtClaims() = default ;
    AssumeRoleForWorkloadIdentityResponseBodyWorkloadContextInfoUserContextJwtClaims& operator=(const AssumeRoleForWorkloadIdentityResponseBodyWorkloadContextInfoUserContextJwtClaims &) = default ;
    AssumeRoleForWorkloadIdentityResponseBodyWorkloadContextInfoUserContextJwtClaims& operator=(AssumeRoleForWorkloadIdentityResponseBodyWorkloadContextInfoUserContextJwtClaims &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->audiences_ == nullptr
        && return this->issuer_ == nullptr && return this->subject_ == nullptr; };
    // audiences Field Functions 
    bool hasAudiences() const { return this->audiences_ != nullptr;};
    void deleteAudiences() { this->audiences_ = nullptr;};
    inline string audiences() const { DARABONBA_PTR_GET_DEFAULT(audiences_, "") };
    inline AssumeRoleForWorkloadIdentityResponseBodyWorkloadContextInfoUserContextJwtClaims& setAudiences(string audiences) { DARABONBA_PTR_SET_VALUE(audiences_, audiences) };


    // issuer Field Functions 
    bool hasIssuer() const { return this->issuer_ != nullptr;};
    void deleteIssuer() { this->issuer_ = nullptr;};
    inline string issuer() const { DARABONBA_PTR_GET_DEFAULT(issuer_, "") };
    inline AssumeRoleForWorkloadIdentityResponseBodyWorkloadContextInfoUserContextJwtClaims& setIssuer(string issuer) { DARABONBA_PTR_SET_VALUE(issuer_, issuer) };


    // subject Field Functions 
    bool hasSubject() const { return this->subject_ != nullptr;};
    void deleteSubject() { this->subject_ = nullptr;};
    inline string subject() const { DARABONBA_PTR_GET_DEFAULT(subject_, "") };
    inline AssumeRoleForWorkloadIdentityResponseBodyWorkloadContextInfoUserContextJwtClaims& setSubject(string subject) { DARABONBA_PTR_SET_VALUE(subject_, subject) };


  protected:
    std::shared_ptr<string> audiences_ = nullptr;
    std::shared_ptr<string> issuer_ = nullptr;
    std::shared_ptr<string> subject_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentIdentityData20251127
#endif
