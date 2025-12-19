// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ASSUMEROLEFORWORKLOADIDENTITYRESPONSEBODYWORKLOADCONTEXTINFO_HPP_
#define ALIBABACLOUD_MODELS_ASSUMEROLEFORWORKLOADIDENTITYRESPONSEBODYWORKLOADCONTEXTINFO_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/AssumeRoleForWorkloadIdentityResponseBodyWorkloadContextInfoUserContext.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentIdentityData20251127
{
namespace Models
{
  class AssumeRoleForWorkloadIdentityResponseBodyWorkloadContextInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AssumeRoleForWorkloadIdentityResponseBodyWorkloadContextInfo& obj) { 
      DARABONBA_PTR_TO_JSON(UserContext, userContext_);
      DARABONBA_PTR_TO_JSON(WorkloadIdentityArn, workloadIdentityArn_);
    };
    friend void from_json(const Darabonba::Json& j, AssumeRoleForWorkloadIdentityResponseBodyWorkloadContextInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(UserContext, userContext_);
      DARABONBA_PTR_FROM_JSON(WorkloadIdentityArn, workloadIdentityArn_);
    };
    AssumeRoleForWorkloadIdentityResponseBodyWorkloadContextInfo() = default ;
    AssumeRoleForWorkloadIdentityResponseBodyWorkloadContextInfo(const AssumeRoleForWorkloadIdentityResponseBodyWorkloadContextInfo &) = default ;
    AssumeRoleForWorkloadIdentityResponseBodyWorkloadContextInfo(AssumeRoleForWorkloadIdentityResponseBodyWorkloadContextInfo &&) = default ;
    AssumeRoleForWorkloadIdentityResponseBodyWorkloadContextInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AssumeRoleForWorkloadIdentityResponseBodyWorkloadContextInfo() = default ;
    AssumeRoleForWorkloadIdentityResponseBodyWorkloadContextInfo& operator=(const AssumeRoleForWorkloadIdentityResponseBodyWorkloadContextInfo &) = default ;
    AssumeRoleForWorkloadIdentityResponseBodyWorkloadContextInfo& operator=(AssumeRoleForWorkloadIdentityResponseBodyWorkloadContextInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->userContext_ == nullptr
        && return this->workloadIdentityArn_ == nullptr; };
    // userContext Field Functions 
    bool hasUserContext() const { return this->userContext_ != nullptr;};
    void deleteUserContext() { this->userContext_ = nullptr;};
    inline const Models::AssumeRoleForWorkloadIdentityResponseBodyWorkloadContextInfoUserContext & userContext() const { DARABONBA_PTR_GET_CONST(userContext_, Models::AssumeRoleForWorkloadIdentityResponseBodyWorkloadContextInfoUserContext) };
    inline Models::AssumeRoleForWorkloadIdentityResponseBodyWorkloadContextInfoUserContext userContext() { DARABONBA_PTR_GET(userContext_, Models::AssumeRoleForWorkloadIdentityResponseBodyWorkloadContextInfoUserContext) };
    inline AssumeRoleForWorkloadIdentityResponseBodyWorkloadContextInfo& setUserContext(const Models::AssumeRoleForWorkloadIdentityResponseBodyWorkloadContextInfoUserContext & userContext) { DARABONBA_PTR_SET_VALUE(userContext_, userContext) };
    inline AssumeRoleForWorkloadIdentityResponseBodyWorkloadContextInfo& setUserContext(Models::AssumeRoleForWorkloadIdentityResponseBodyWorkloadContextInfoUserContext && userContext) { DARABONBA_PTR_SET_RVALUE(userContext_, userContext) };


    // workloadIdentityArn Field Functions 
    bool hasWorkloadIdentityArn() const { return this->workloadIdentityArn_ != nullptr;};
    void deleteWorkloadIdentityArn() { this->workloadIdentityArn_ = nullptr;};
    inline string workloadIdentityArn() const { DARABONBA_PTR_GET_DEFAULT(workloadIdentityArn_, "") };
    inline AssumeRoleForWorkloadIdentityResponseBodyWorkloadContextInfo& setWorkloadIdentityArn(string workloadIdentityArn) { DARABONBA_PTR_SET_VALUE(workloadIdentityArn_, workloadIdentityArn) };


  protected:
    std::shared_ptr<Models::AssumeRoleForWorkloadIdentityResponseBodyWorkloadContextInfoUserContext> userContext_ = nullptr;
    std::shared_ptr<string> workloadIdentityArn_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentIdentityData20251127
#endif
