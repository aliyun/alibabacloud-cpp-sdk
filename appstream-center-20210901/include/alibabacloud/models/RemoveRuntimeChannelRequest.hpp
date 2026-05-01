// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REMOVERUNTIMECHANNELREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REMOVERUNTIMECHANNELREQUEST_HPP_
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
  class RemoveRuntimeChannelRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RemoveRuntimeChannelRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentPlatform, agentPlatform_);
      DARABONBA_PTR_TO_JSON(AgentProvider, agentProvider_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(RuntimeIds, runtimeIds_);
      DARABONBA_PTR_TO_JSON(RuntimeType, runtimeType_);
    };
    friend void from_json(const Darabonba::Json& j, RemoveRuntimeChannelRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentPlatform, agentPlatform_);
      DARABONBA_PTR_FROM_JSON(AgentProvider, agentProvider_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(RuntimeIds, runtimeIds_);
      DARABONBA_PTR_FROM_JSON(RuntimeType, runtimeType_);
    };
    RemoveRuntimeChannelRequest() = default ;
    RemoveRuntimeChannelRequest(const RemoveRuntimeChannelRequest &) = default ;
    RemoveRuntimeChannelRequest(RemoveRuntimeChannelRequest &&) = default ;
    RemoveRuntimeChannelRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RemoveRuntimeChannelRequest() = default ;
    RemoveRuntimeChannelRequest& operator=(const RemoveRuntimeChannelRequest &) = default ;
    RemoveRuntimeChannelRequest& operator=(RemoveRuntimeChannelRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentPlatform_ == nullptr
        && this->agentProvider_ == nullptr && this->code_ == nullptr && this->runtimeIds_ == nullptr && this->runtimeType_ == nullptr; };
    // agentPlatform Field Functions 
    bool hasAgentPlatform() const { return this->agentPlatform_ != nullptr;};
    void deleteAgentPlatform() { this->agentPlatform_ = nullptr;};
    inline string getAgentPlatform() const { DARABONBA_PTR_GET_DEFAULT(agentPlatform_, "") };
    inline RemoveRuntimeChannelRequest& setAgentPlatform(string agentPlatform) { DARABONBA_PTR_SET_VALUE(agentPlatform_, agentPlatform) };


    // agentProvider Field Functions 
    bool hasAgentProvider() const { return this->agentProvider_ != nullptr;};
    void deleteAgentProvider() { this->agentProvider_ = nullptr;};
    inline string getAgentProvider() const { DARABONBA_PTR_GET_DEFAULT(agentProvider_, "") };
    inline RemoveRuntimeChannelRequest& setAgentProvider(string agentProvider) { DARABONBA_PTR_SET_VALUE(agentProvider_, agentProvider) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline RemoveRuntimeChannelRequest& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // runtimeIds Field Functions 
    bool hasRuntimeIds() const { return this->runtimeIds_ != nullptr;};
    void deleteRuntimeIds() { this->runtimeIds_ = nullptr;};
    inline const vector<string> & getRuntimeIds() const { DARABONBA_PTR_GET_CONST(runtimeIds_, vector<string>) };
    inline vector<string> getRuntimeIds() { DARABONBA_PTR_GET(runtimeIds_, vector<string>) };
    inline RemoveRuntimeChannelRequest& setRuntimeIds(const vector<string> & runtimeIds) { DARABONBA_PTR_SET_VALUE(runtimeIds_, runtimeIds) };
    inline RemoveRuntimeChannelRequest& setRuntimeIds(vector<string> && runtimeIds) { DARABONBA_PTR_SET_RVALUE(runtimeIds_, runtimeIds) };


    // runtimeType Field Functions 
    bool hasRuntimeType() const { return this->runtimeType_ != nullptr;};
    void deleteRuntimeType() { this->runtimeType_ = nullptr;};
    inline string getRuntimeType() const { DARABONBA_PTR_GET_DEFAULT(runtimeType_, "") };
    inline RemoveRuntimeChannelRequest& setRuntimeType(string runtimeType) { DARABONBA_PTR_SET_VALUE(runtimeType_, runtimeType) };


  protected:
    shared_ptr<string> agentPlatform_ {};
    // This parameter is required.
    shared_ptr<string> agentProvider_ {};
    // This parameter is required.
    shared_ptr<string> code_ {};
    // This parameter is required.
    shared_ptr<vector<string>> runtimeIds_ {};
    // This parameter is required.
    shared_ptr<string> runtimeType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
