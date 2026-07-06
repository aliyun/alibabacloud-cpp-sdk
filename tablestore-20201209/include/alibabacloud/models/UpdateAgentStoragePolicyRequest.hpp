// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEAGENTSTORAGEPOLICYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEAGENTSTORAGEPOLICYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Tablestore20201209
{
namespace Models
{
  class UpdateAgentStoragePolicyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateAgentStoragePolicyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentStorageName, agentStorageName_);
      DARABONBA_PTR_TO_JSON(Policy, policy_);
      DARABONBA_PTR_TO_JSON(PolicyVersion, policyVersion_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateAgentStoragePolicyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentStorageName, agentStorageName_);
      DARABONBA_PTR_FROM_JSON(Policy, policy_);
      DARABONBA_PTR_FROM_JSON(PolicyVersion, policyVersion_);
    };
    UpdateAgentStoragePolicyRequest() = default ;
    UpdateAgentStoragePolicyRequest(const UpdateAgentStoragePolicyRequest &) = default ;
    UpdateAgentStoragePolicyRequest(UpdateAgentStoragePolicyRequest &&) = default ;
    UpdateAgentStoragePolicyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateAgentStoragePolicyRequest() = default ;
    UpdateAgentStoragePolicyRequest& operator=(const UpdateAgentStoragePolicyRequest &) = default ;
    UpdateAgentStoragePolicyRequest& operator=(UpdateAgentStoragePolicyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentStorageName_ == nullptr
        && this->policy_ == nullptr && this->policyVersion_ == nullptr; };
    // agentStorageName Field Functions 
    bool hasAgentStorageName() const { return this->agentStorageName_ != nullptr;};
    void deleteAgentStorageName() { this->agentStorageName_ = nullptr;};
    inline string getAgentStorageName() const { DARABONBA_PTR_GET_DEFAULT(agentStorageName_, "") };
    inline UpdateAgentStoragePolicyRequest& setAgentStorageName(string agentStorageName) { DARABONBA_PTR_SET_VALUE(agentStorageName_, agentStorageName) };


    // policy Field Functions 
    bool hasPolicy() const { return this->policy_ != nullptr;};
    void deletePolicy() { this->policy_ = nullptr;};
    inline string getPolicy() const { DARABONBA_PTR_GET_DEFAULT(policy_, "") };
    inline UpdateAgentStoragePolicyRequest& setPolicy(string policy) { DARABONBA_PTR_SET_VALUE(policy_, policy) };


    // policyVersion Field Functions 
    bool hasPolicyVersion() const { return this->policyVersion_ != nullptr;};
    void deletePolicyVersion() { this->policyVersion_ = nullptr;};
    inline int64_t getPolicyVersion() const { DARABONBA_PTR_GET_DEFAULT(policyVersion_, 0L) };
    inline UpdateAgentStoragePolicyRequest& setPolicyVersion(int64_t policyVersion) { DARABONBA_PTR_SET_VALUE(policyVersion_, policyVersion) };


  protected:
    // The name of the agent storage.
    // 
    // This parameter is required.
    shared_ptr<string> agentStorageName_ {};
    // The access control policy of the agent storage in JSON format. For more information, see https://www.alibabacloud.com/help/en/ram/user-guide/policy-structure-and-syntax.
    // 
    // This parameter is required.
    shared_ptr<string> policy_ {};
    // The version of the agent storage access control policy.
    // 
    // This parameter is required.
    shared_ptr<int64_t> policyVersion_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Tablestore20201209
#endif
