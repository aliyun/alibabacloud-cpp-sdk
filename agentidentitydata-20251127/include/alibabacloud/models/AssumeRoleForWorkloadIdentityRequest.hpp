// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ASSUMEROLEFORWORKLOADIDENTITYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ASSUMEROLEFORWORKLOADIDENTITYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentIdentityData20251127
{
namespace Models
{
  class AssumeRoleForWorkloadIdentityRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AssumeRoleForWorkloadIdentityRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DurationSeconds, durationSeconds_);
      DARABONBA_PTR_TO_JSON(Policy, policy_);
      DARABONBA_PTR_TO_JSON(RoleSessionName, roleSessionName_);
      DARABONBA_PTR_TO_JSON(WorkloadAccessToken, workloadAccessToken_);
    };
    friend void from_json(const Darabonba::Json& j, AssumeRoleForWorkloadIdentityRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DurationSeconds, durationSeconds_);
      DARABONBA_PTR_FROM_JSON(Policy, policy_);
      DARABONBA_PTR_FROM_JSON(RoleSessionName, roleSessionName_);
      DARABONBA_PTR_FROM_JSON(WorkloadAccessToken, workloadAccessToken_);
    };
    AssumeRoleForWorkloadIdentityRequest() = default ;
    AssumeRoleForWorkloadIdentityRequest(const AssumeRoleForWorkloadIdentityRequest &) = default ;
    AssumeRoleForWorkloadIdentityRequest(AssumeRoleForWorkloadIdentityRequest &&) = default ;
    AssumeRoleForWorkloadIdentityRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AssumeRoleForWorkloadIdentityRequest() = default ;
    AssumeRoleForWorkloadIdentityRequest& operator=(const AssumeRoleForWorkloadIdentityRequest &) = default ;
    AssumeRoleForWorkloadIdentityRequest& operator=(AssumeRoleForWorkloadIdentityRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->durationSeconds_ == nullptr
        && this->policy_ == nullptr && this->roleSessionName_ == nullptr && this->workloadAccessToken_ == nullptr; };
    // durationSeconds Field Functions 
    bool hasDurationSeconds() const { return this->durationSeconds_ != nullptr;};
    void deleteDurationSeconds() { this->durationSeconds_ = nullptr;};
    inline int64_t getDurationSeconds() const { DARABONBA_PTR_GET_DEFAULT(durationSeconds_, 0L) };
    inline AssumeRoleForWorkloadIdentityRequest& setDurationSeconds(int64_t durationSeconds) { DARABONBA_PTR_SET_VALUE(durationSeconds_, durationSeconds) };


    // policy Field Functions 
    bool hasPolicy() const { return this->policy_ != nullptr;};
    void deletePolicy() { this->policy_ = nullptr;};
    inline string getPolicy() const { DARABONBA_PTR_GET_DEFAULT(policy_, "") };
    inline AssumeRoleForWorkloadIdentityRequest& setPolicy(string policy) { DARABONBA_PTR_SET_VALUE(policy_, policy) };


    // roleSessionName Field Functions 
    bool hasRoleSessionName() const { return this->roleSessionName_ != nullptr;};
    void deleteRoleSessionName() { this->roleSessionName_ = nullptr;};
    inline string getRoleSessionName() const { DARABONBA_PTR_GET_DEFAULT(roleSessionName_, "") };
    inline AssumeRoleForWorkloadIdentityRequest& setRoleSessionName(string roleSessionName) { DARABONBA_PTR_SET_VALUE(roleSessionName_, roleSessionName) };


    // workloadAccessToken Field Functions 
    bool hasWorkloadAccessToken() const { return this->workloadAccessToken_ != nullptr;};
    void deleteWorkloadAccessToken() { this->workloadAccessToken_ = nullptr;};
    inline string getWorkloadAccessToken() const { DARABONBA_PTR_GET_DEFAULT(workloadAccessToken_, "") };
    inline AssumeRoleForWorkloadIdentityRequest& setWorkloadAccessToken(string workloadAccessToken) { DARABONBA_PTR_SET_VALUE(workloadAccessToken_, workloadAccessToken) };


  protected:
    shared_ptr<int64_t> durationSeconds_ {};
    shared_ptr<string> policy_ {};
    shared_ptr<string> roleSessionName_ {};
    shared_ptr<string> workloadAccessToken_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentIdentityData20251127
#endif
