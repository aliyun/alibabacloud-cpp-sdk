// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKAGENTSTORAGEPOLICYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CHECKAGENTSTORAGEPOLICYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Tablestore20201209
{
namespace Models
{
  class CheckAgentStoragePolicyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckAgentStoragePolicyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentStorageName, agentStorageName_);
      DARABONBA_PTR_TO_JSON(Policy, policy_);
    };
    friend void from_json(const Darabonba::Json& j, CheckAgentStoragePolicyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentStorageName, agentStorageName_);
      DARABONBA_PTR_FROM_JSON(Policy, policy_);
    };
    CheckAgentStoragePolicyRequest() = default ;
    CheckAgentStoragePolicyRequest(const CheckAgentStoragePolicyRequest &) = default ;
    CheckAgentStoragePolicyRequest(CheckAgentStoragePolicyRequest &&) = default ;
    CheckAgentStoragePolicyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckAgentStoragePolicyRequest() = default ;
    CheckAgentStoragePolicyRequest& operator=(const CheckAgentStoragePolicyRequest &) = default ;
    CheckAgentStoragePolicyRequest& operator=(CheckAgentStoragePolicyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentStorageName_ == nullptr
        && this->policy_ == nullptr; };
    // agentStorageName Field Functions 
    bool hasAgentStorageName() const { return this->agentStorageName_ != nullptr;};
    void deleteAgentStorageName() { this->agentStorageName_ = nullptr;};
    inline string getAgentStorageName() const { DARABONBA_PTR_GET_DEFAULT(agentStorageName_, "") };
    inline CheckAgentStoragePolicyRequest& setAgentStorageName(string agentStorageName) { DARABONBA_PTR_SET_VALUE(agentStorageName_, agentStorageName) };


    // policy Field Functions 
    bool hasPolicy() const { return this->policy_ != nullptr;};
    void deletePolicy() { this->policy_ = nullptr;};
    inline string getPolicy() const { DARABONBA_PTR_GET_DEFAULT(policy_, "") };
    inline CheckAgentStoragePolicyRequest& setPolicy(string policy) { DARABONBA_PTR_SET_VALUE(policy_, policy) };


  protected:
    // The agent storage name.
    // 
    // This parameter is required.
    shared_ptr<string> agentStorageName_ {};
    // The agent storage access control policy in JSON format.
    // 
    // This parameter is required.
    shared_ptr<string> policy_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Tablestore20201209
#endif
