// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ASSUMEROLEFORWORKLOADIDENTITYRESPONSEBODYWORKLOADCONTEXTINFOUSERCONTEXT_HPP_
#define ALIBABACLOUD_MODELS_ASSUMEROLEFORWORKLOADIDENTITYRESPONSEBODYWORKLOADCONTEXTINFOUSERCONTEXT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/AssumeRoleForWorkloadIdentityResponseBodyWorkloadContextInfoUserContextJwtClaims.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentIdentityData20251127
{
namespace Models
{
  class AssumeRoleForWorkloadIdentityResponseBodyWorkloadContextInfoUserContext : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AssumeRoleForWorkloadIdentityResponseBodyWorkloadContextInfoUserContext& obj) { 
      DARABONBA_PTR_TO_JSON(JwtClaims, jwtClaims_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, AssumeRoleForWorkloadIdentityResponseBodyWorkloadContextInfoUserContext& obj) { 
      DARABONBA_PTR_FROM_JSON(JwtClaims, jwtClaims_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    AssumeRoleForWorkloadIdentityResponseBodyWorkloadContextInfoUserContext() = default ;
    AssumeRoleForWorkloadIdentityResponseBodyWorkloadContextInfoUserContext(const AssumeRoleForWorkloadIdentityResponseBodyWorkloadContextInfoUserContext &) = default ;
    AssumeRoleForWorkloadIdentityResponseBodyWorkloadContextInfoUserContext(AssumeRoleForWorkloadIdentityResponseBodyWorkloadContextInfoUserContext &&) = default ;
    AssumeRoleForWorkloadIdentityResponseBodyWorkloadContextInfoUserContext(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AssumeRoleForWorkloadIdentityResponseBodyWorkloadContextInfoUserContext() = default ;
    AssumeRoleForWorkloadIdentityResponseBodyWorkloadContextInfoUserContext& operator=(const AssumeRoleForWorkloadIdentityResponseBodyWorkloadContextInfoUserContext &) = default ;
    AssumeRoleForWorkloadIdentityResponseBodyWorkloadContextInfoUserContext& operator=(AssumeRoleForWorkloadIdentityResponseBodyWorkloadContextInfoUserContext &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->jwtClaims_ == nullptr
        && return this->userId_ == nullptr; };
    // jwtClaims Field Functions 
    bool hasJwtClaims() const { return this->jwtClaims_ != nullptr;};
    void deleteJwtClaims() { this->jwtClaims_ = nullptr;};
    inline const Models::AssumeRoleForWorkloadIdentityResponseBodyWorkloadContextInfoUserContextJwtClaims & jwtClaims() const { DARABONBA_PTR_GET_CONST(jwtClaims_, Models::AssumeRoleForWorkloadIdentityResponseBodyWorkloadContextInfoUserContextJwtClaims) };
    inline Models::AssumeRoleForWorkloadIdentityResponseBodyWorkloadContextInfoUserContextJwtClaims jwtClaims() { DARABONBA_PTR_GET(jwtClaims_, Models::AssumeRoleForWorkloadIdentityResponseBodyWorkloadContextInfoUserContextJwtClaims) };
    inline AssumeRoleForWorkloadIdentityResponseBodyWorkloadContextInfoUserContext& setJwtClaims(const Models::AssumeRoleForWorkloadIdentityResponseBodyWorkloadContextInfoUserContextJwtClaims & jwtClaims) { DARABONBA_PTR_SET_VALUE(jwtClaims_, jwtClaims) };
    inline AssumeRoleForWorkloadIdentityResponseBodyWorkloadContextInfoUserContext& setJwtClaims(Models::AssumeRoleForWorkloadIdentityResponseBodyWorkloadContextInfoUserContextJwtClaims && jwtClaims) { DARABONBA_PTR_SET_RVALUE(jwtClaims_, jwtClaims) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline AssumeRoleForWorkloadIdentityResponseBodyWorkloadContextInfoUserContext& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    std::shared_ptr<Models::AssumeRoleForWorkloadIdentityResponseBodyWorkloadContextInfoUserContextJwtClaims> jwtClaims_ = nullptr;
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentIdentityData20251127
#endif
