// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRUNTIMEMODELCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETRUNTIMEMODELCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class GetRuntimeModelConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRuntimeModelConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentPlatform, agentPlatform_);
      DARABONBA_PTR_TO_JSON(AgentProvider, agentProvider_);
      DARABONBA_PTR_TO_JSON(IncludeRiskInfo, includeRiskInfo_);
      DARABONBA_PTR_TO_JSON(RuntimeId, runtimeId_);
      DARABONBA_PTR_TO_JSON(RuntimeType, runtimeType_);
    };
    friend void from_json(const Darabonba::Json& j, GetRuntimeModelConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentPlatform, agentPlatform_);
      DARABONBA_PTR_FROM_JSON(AgentProvider, agentProvider_);
      DARABONBA_PTR_FROM_JSON(IncludeRiskInfo, includeRiskInfo_);
      DARABONBA_PTR_FROM_JSON(RuntimeId, runtimeId_);
      DARABONBA_PTR_FROM_JSON(RuntimeType, runtimeType_);
    };
    GetRuntimeModelConfigRequest() = default ;
    GetRuntimeModelConfigRequest(const GetRuntimeModelConfigRequest &) = default ;
    GetRuntimeModelConfigRequest(GetRuntimeModelConfigRequest &&) = default ;
    GetRuntimeModelConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRuntimeModelConfigRequest() = default ;
    GetRuntimeModelConfigRequest& operator=(const GetRuntimeModelConfigRequest &) = default ;
    GetRuntimeModelConfigRequest& operator=(GetRuntimeModelConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentPlatform_ == nullptr
        && this->agentProvider_ == nullptr && this->includeRiskInfo_ == nullptr && this->runtimeId_ == nullptr && this->runtimeType_ == nullptr; };
    // agentPlatform Field Functions 
    bool hasAgentPlatform() const { return this->agentPlatform_ != nullptr;};
    void deleteAgentPlatform() { this->agentPlatform_ = nullptr;};
    inline string getAgentPlatform() const { DARABONBA_PTR_GET_DEFAULT(agentPlatform_, "") };
    inline GetRuntimeModelConfigRequest& setAgentPlatform(string agentPlatform) { DARABONBA_PTR_SET_VALUE(agentPlatform_, agentPlatform) };


    // agentProvider Field Functions 
    bool hasAgentProvider() const { return this->agentProvider_ != nullptr;};
    void deleteAgentProvider() { this->agentProvider_ = nullptr;};
    inline string getAgentProvider() const { DARABONBA_PTR_GET_DEFAULT(agentProvider_, "") };
    inline GetRuntimeModelConfigRequest& setAgentProvider(string agentProvider) { DARABONBA_PTR_SET_VALUE(agentProvider_, agentProvider) };


    // includeRiskInfo Field Functions 
    bool hasIncludeRiskInfo() const { return this->includeRiskInfo_ != nullptr;};
    void deleteIncludeRiskInfo() { this->includeRiskInfo_ = nullptr;};
    inline bool getIncludeRiskInfo() const { DARABONBA_PTR_GET_DEFAULT(includeRiskInfo_, false) };
    inline GetRuntimeModelConfigRequest& setIncludeRiskInfo(bool includeRiskInfo) { DARABONBA_PTR_SET_VALUE(includeRiskInfo_, includeRiskInfo) };


    // runtimeId Field Functions 
    bool hasRuntimeId() const { return this->runtimeId_ != nullptr;};
    void deleteRuntimeId() { this->runtimeId_ = nullptr;};
    inline string getRuntimeId() const { DARABONBA_PTR_GET_DEFAULT(runtimeId_, "") };
    inline GetRuntimeModelConfigRequest& setRuntimeId(string runtimeId) { DARABONBA_PTR_SET_VALUE(runtimeId_, runtimeId) };


    // runtimeType Field Functions 
    bool hasRuntimeType() const { return this->runtimeType_ != nullptr;};
    void deleteRuntimeType() { this->runtimeType_ = nullptr;};
    inline string getRuntimeType() const { DARABONBA_PTR_GET_DEFAULT(runtimeType_, "") };
    inline GetRuntimeModelConfigRequest& setRuntimeType(string runtimeType) { DARABONBA_PTR_SET_VALUE(runtimeType_, runtimeType) };


  protected:
    shared_ptr<string> agentPlatform_ {};
    // This parameter is required.
    shared_ptr<string> agentProvider_ {};
    shared_ptr<bool> includeRiskInfo_ {};
    // This parameter is required.
    shared_ptr<string> runtimeId_ {};
    // This parameter is required.
    shared_ptr<string> runtimeType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
