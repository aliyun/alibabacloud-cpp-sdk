// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_AGENTRUNTIMEVERSION_HPP_
#define ALIBABACLOUD_MODELS_AGENTRUNTIMEVERSION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class AgentRuntimeVersion : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AgentRuntimeVersion& obj) { 
      DARABONBA_PTR_TO_JSON(agentRuntimeArn, agentRuntimeArn_);
      DARABONBA_PTR_TO_JSON(agentRuntimeId, agentRuntimeId_);
      DARABONBA_PTR_TO_JSON(agentRuntimeName, agentRuntimeName_);
      DARABONBA_PTR_TO_JSON(agentRuntimeVersion, agentRuntimeVersion_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(lastUpdatedAt, lastUpdatedAt_);
    };
    friend void from_json(const Darabonba::Json& j, AgentRuntimeVersion& obj) { 
      DARABONBA_PTR_FROM_JSON(agentRuntimeArn, agentRuntimeArn_);
      DARABONBA_PTR_FROM_JSON(agentRuntimeId, agentRuntimeId_);
      DARABONBA_PTR_FROM_JSON(agentRuntimeName, agentRuntimeName_);
      DARABONBA_PTR_FROM_JSON(agentRuntimeVersion, agentRuntimeVersion_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(lastUpdatedAt, lastUpdatedAt_);
    };
    AgentRuntimeVersion() = default ;
    AgentRuntimeVersion(const AgentRuntimeVersion &) = default ;
    AgentRuntimeVersion(AgentRuntimeVersion &&) = default ;
    AgentRuntimeVersion(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AgentRuntimeVersion() = default ;
    AgentRuntimeVersion& operator=(const AgentRuntimeVersion &) = default ;
    AgentRuntimeVersion& operator=(AgentRuntimeVersion &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentRuntimeArn_ == nullptr
        && this->agentRuntimeId_ == nullptr && this->agentRuntimeName_ == nullptr && this->agentRuntimeVersion_ == nullptr && this->description_ == nullptr && this->lastUpdatedAt_ == nullptr; };
    // agentRuntimeArn Field Functions 
    bool hasAgentRuntimeArn() const { return this->agentRuntimeArn_ != nullptr;};
    void deleteAgentRuntimeArn() { this->agentRuntimeArn_ = nullptr;};
    inline string getAgentRuntimeArn() const { DARABONBA_PTR_GET_DEFAULT(agentRuntimeArn_, "") };
    inline AgentRuntimeVersion& setAgentRuntimeArn(string agentRuntimeArn) { DARABONBA_PTR_SET_VALUE(agentRuntimeArn_, agentRuntimeArn) };


    // agentRuntimeId Field Functions 
    bool hasAgentRuntimeId() const { return this->agentRuntimeId_ != nullptr;};
    void deleteAgentRuntimeId() { this->agentRuntimeId_ = nullptr;};
    inline string getAgentRuntimeId() const { DARABONBA_PTR_GET_DEFAULT(agentRuntimeId_, "") };
    inline AgentRuntimeVersion& setAgentRuntimeId(string agentRuntimeId) { DARABONBA_PTR_SET_VALUE(agentRuntimeId_, agentRuntimeId) };


    // agentRuntimeName Field Functions 
    bool hasAgentRuntimeName() const { return this->agentRuntimeName_ != nullptr;};
    void deleteAgentRuntimeName() { this->agentRuntimeName_ = nullptr;};
    inline string getAgentRuntimeName() const { DARABONBA_PTR_GET_DEFAULT(agentRuntimeName_, "") };
    inline AgentRuntimeVersion& setAgentRuntimeName(string agentRuntimeName) { DARABONBA_PTR_SET_VALUE(agentRuntimeName_, agentRuntimeName) };


    // agentRuntimeVersion Field Functions 
    bool hasAgentRuntimeVersion() const { return this->agentRuntimeVersion_ != nullptr;};
    void deleteAgentRuntimeVersion() { this->agentRuntimeVersion_ = nullptr;};
    inline string getAgentRuntimeVersion() const { DARABONBA_PTR_GET_DEFAULT(agentRuntimeVersion_, "") };
    inline AgentRuntimeVersion& setAgentRuntimeVersion(string agentRuntimeVersion) { DARABONBA_PTR_SET_VALUE(agentRuntimeVersion_, agentRuntimeVersion) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline AgentRuntimeVersion& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // lastUpdatedAt Field Functions 
    bool hasLastUpdatedAt() const { return this->lastUpdatedAt_ != nullptr;};
    void deleteLastUpdatedAt() { this->lastUpdatedAt_ = nullptr;};
    inline string getLastUpdatedAt() const { DARABONBA_PTR_GET_DEFAULT(lastUpdatedAt_, "") };
    inline AgentRuntimeVersion& setLastUpdatedAt(string lastUpdatedAt) { DARABONBA_PTR_SET_VALUE(lastUpdatedAt_, lastUpdatedAt) };


  protected:
    // 智能体运行时的ARN
    shared_ptr<string> agentRuntimeArn_ {};
    // 智能体运行时的ID
    shared_ptr<string> agentRuntimeId_ {};
    // 智能体运行时的名称
    shared_ptr<string> agentRuntimeName_ {};
    // 已发布版本的版本号
    shared_ptr<string> agentRuntimeVersion_ {};
    // 此版本的描述
    shared_ptr<string> description_ {};
    // 最后更新的时间戳
    shared_ptr<string> lastUpdatedAt_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
