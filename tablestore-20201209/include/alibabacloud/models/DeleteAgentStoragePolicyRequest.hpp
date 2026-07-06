// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEAGENTSTORAGEPOLICYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEAGENTSTORAGEPOLICYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Tablestore20201209
{
namespace Models
{
  class DeleteAgentStoragePolicyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteAgentStoragePolicyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentStorageName, agentStorageName_);
      DARABONBA_PTR_TO_JSON(PolicyVersion, policyVersion_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteAgentStoragePolicyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentStorageName, agentStorageName_);
      DARABONBA_PTR_FROM_JSON(PolicyVersion, policyVersion_);
    };
    DeleteAgentStoragePolicyRequest() = default ;
    DeleteAgentStoragePolicyRequest(const DeleteAgentStoragePolicyRequest &) = default ;
    DeleteAgentStoragePolicyRequest(DeleteAgentStoragePolicyRequest &&) = default ;
    DeleteAgentStoragePolicyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteAgentStoragePolicyRequest() = default ;
    DeleteAgentStoragePolicyRequest& operator=(const DeleteAgentStoragePolicyRequest &) = default ;
    DeleteAgentStoragePolicyRequest& operator=(DeleteAgentStoragePolicyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentStorageName_ == nullptr
        && this->policyVersion_ == nullptr; };
    // agentStorageName Field Functions 
    bool hasAgentStorageName() const { return this->agentStorageName_ != nullptr;};
    void deleteAgentStorageName() { this->agentStorageName_ = nullptr;};
    inline string getAgentStorageName() const { DARABONBA_PTR_GET_DEFAULT(agentStorageName_, "") };
    inline DeleteAgentStoragePolicyRequest& setAgentStorageName(string agentStorageName) { DARABONBA_PTR_SET_VALUE(agentStorageName_, agentStorageName) };


    // policyVersion Field Functions 
    bool hasPolicyVersion() const { return this->policyVersion_ != nullptr;};
    void deletePolicyVersion() { this->policyVersion_ = nullptr;};
    inline int64_t getPolicyVersion() const { DARABONBA_PTR_GET_DEFAULT(policyVersion_, 0L) };
    inline DeleteAgentStoragePolicyRequest& setPolicyVersion(int64_t policyVersion) { DARABONBA_PTR_SET_VALUE(policyVersion_, policyVersion) };


  protected:
    // The name of the agent storage.
    // 
    // This parameter is required.
    shared_ptr<string> agentStorageName_ {};
    // The version of the access control policy for agent storage.
    // 
    // This parameter is required.
    shared_ptr<int64_t> policyVersion_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Tablestore20201209
#endif
