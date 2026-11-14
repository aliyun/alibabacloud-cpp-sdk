// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYAGENTINSTANCEMEMORYCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYAGENTINSTANCEMEMORYCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class ModifyAgentInstanceMemoryConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyAgentInstanceMemoryConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentInstanceIds, agentInstanceIds_);
      DARABONBA_PTR_TO_JSON(Enabled, enabled_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyAgentInstanceMemoryConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentInstanceIds, agentInstanceIds_);
      DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
    };
    ModifyAgentInstanceMemoryConfigRequest() = default ;
    ModifyAgentInstanceMemoryConfigRequest(const ModifyAgentInstanceMemoryConfigRequest &) = default ;
    ModifyAgentInstanceMemoryConfigRequest(ModifyAgentInstanceMemoryConfigRequest &&) = default ;
    ModifyAgentInstanceMemoryConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyAgentInstanceMemoryConfigRequest() = default ;
    ModifyAgentInstanceMemoryConfigRequest& operator=(const ModifyAgentInstanceMemoryConfigRequest &) = default ;
    ModifyAgentInstanceMemoryConfigRequest& operator=(ModifyAgentInstanceMemoryConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentInstanceIds_ == nullptr
        && this->enabled_ == nullptr; };
    // agentInstanceIds Field Functions 
    bool hasAgentInstanceIds() const { return this->agentInstanceIds_ != nullptr;};
    void deleteAgentInstanceIds() { this->agentInstanceIds_ = nullptr;};
    inline const vector<string> & getAgentInstanceIds() const { DARABONBA_PTR_GET_CONST(agentInstanceIds_, vector<string>) };
    inline vector<string> getAgentInstanceIds() { DARABONBA_PTR_GET(agentInstanceIds_, vector<string>) };
    inline ModifyAgentInstanceMemoryConfigRequest& setAgentInstanceIds(const vector<string> & agentInstanceIds) { DARABONBA_PTR_SET_VALUE(agentInstanceIds_, agentInstanceIds) };
    inline ModifyAgentInstanceMemoryConfigRequest& setAgentInstanceIds(vector<string> && agentInstanceIds) { DARABONBA_PTR_SET_RVALUE(agentInstanceIds_, agentInstanceIds) };


    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
    inline ModifyAgentInstanceMemoryConfigRequest& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


  protected:
    // The list of agent instance IDs. Specify 1 to 100 IDs. The IDs must be unique. Each instance must belong to the current account, support memory management, and have the memory feature configured.
    shared_ptr<vector<string>> agentInstanceIds_ {};
    // Required. Specifies whether to enable the memory feature. Valid values:
    // - true: Enables the memory feature.
    // - false: Disables the memory feature.
    // Before enabling the feature, ensure that the tenant-level memory store switch is turned on.
    shared_ptr<bool> enabled_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
