// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAGENTRUNTIMESTATISTICREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETAGENTRUNTIMESTATISTICREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class GetAgentRuntimeStatisticRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAgentRuntimeStatisticRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentPlatform, agentPlatform_);
      DARABONBA_PTR_TO_JSON(AgentProvider, agentProvider_);
      DARABONBA_PTR_TO_JSON(BizType, bizType_);
      DARABONBA_PTR_TO_JSON(RuntimeType, runtimeType_);
    };
    friend void from_json(const Darabonba::Json& j, GetAgentRuntimeStatisticRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentPlatform, agentPlatform_);
      DARABONBA_PTR_FROM_JSON(AgentProvider, agentProvider_);
      DARABONBA_PTR_FROM_JSON(BizType, bizType_);
      DARABONBA_PTR_FROM_JSON(RuntimeType, runtimeType_);
    };
    GetAgentRuntimeStatisticRequest() = default ;
    GetAgentRuntimeStatisticRequest(const GetAgentRuntimeStatisticRequest &) = default ;
    GetAgentRuntimeStatisticRequest(GetAgentRuntimeStatisticRequest &&) = default ;
    GetAgentRuntimeStatisticRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAgentRuntimeStatisticRequest() = default ;
    GetAgentRuntimeStatisticRequest& operator=(const GetAgentRuntimeStatisticRequest &) = default ;
    GetAgentRuntimeStatisticRequest& operator=(GetAgentRuntimeStatisticRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentPlatform_ == nullptr
        && this->agentProvider_ == nullptr && this->bizType_ == nullptr && this->runtimeType_ == nullptr; };
    // agentPlatform Field Functions 
    bool hasAgentPlatform() const { return this->agentPlatform_ != nullptr;};
    void deleteAgentPlatform() { this->agentPlatform_ = nullptr;};
    inline string getAgentPlatform() const { DARABONBA_PTR_GET_DEFAULT(agentPlatform_, "") };
    inline GetAgentRuntimeStatisticRequest& setAgentPlatform(string agentPlatform) { DARABONBA_PTR_SET_VALUE(agentPlatform_, agentPlatform) };


    // agentProvider Field Functions 
    bool hasAgentProvider() const { return this->agentProvider_ != nullptr;};
    void deleteAgentProvider() { this->agentProvider_ = nullptr;};
    inline string getAgentProvider() const { DARABONBA_PTR_GET_DEFAULT(agentProvider_, "") };
    inline GetAgentRuntimeStatisticRequest& setAgentProvider(string agentProvider) { DARABONBA_PTR_SET_VALUE(agentProvider_, agentProvider) };


    // bizType Field Functions 
    bool hasBizType() const { return this->bizType_ != nullptr;};
    void deleteBizType() { this->bizType_ = nullptr;};
    inline int32_t getBizType() const { DARABONBA_PTR_GET_DEFAULT(bizType_, 0) };
    inline GetAgentRuntimeStatisticRequest& setBizType(int32_t bizType) { DARABONBA_PTR_SET_VALUE(bizType_, bizType) };


    // runtimeType Field Functions 
    bool hasRuntimeType() const { return this->runtimeType_ != nullptr;};
    void deleteRuntimeType() { this->runtimeType_ = nullptr;};
    inline string getRuntimeType() const { DARABONBA_PTR_GET_DEFAULT(runtimeType_, "") };
    inline GetAgentRuntimeStatisticRequest& setRuntimeType(string runtimeType) { DARABONBA_PTR_SET_VALUE(runtimeType_, runtimeType) };


  protected:
    // The agent platform used to filter the statistics scope, such as ENTERPRISE_AGENTIC_COMPUTER. If this parameter is not specified, all agent platforms are included in the statistics. If an unsupported value is passed, a parameter error is returned.
    shared_ptr<string> agentPlatform_ {};
    // The agent provider used to filter the statistics scope, such as AgenticComputer. If this parameter is not specified, all agent providers are included in the statistics. If an unsupported value is passed, a parameter error is returned.
    shared_ptr<string> agentProvider_ {};
    // The business type used to filter runtimes of a specified business type.
    // 
    // This parameter is required.
    shared_ptr<int32_t> bizType_ {};
    // The runtime environment type of the runtime resource.
    // 
    // This parameter is required.
    shared_ptr<string> runtimeType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
