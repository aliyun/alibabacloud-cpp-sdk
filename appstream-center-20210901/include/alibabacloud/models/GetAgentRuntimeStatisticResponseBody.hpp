// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAGENTRUNTIMESTATISTICRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETAGENTRUNTIMESTATISTICRESPONSEBODY_HPP_
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
  class GetAgentRuntimeStatisticResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAgentRuntimeStatisticResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, GetAgentRuntimeStatisticResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    GetAgentRuntimeStatisticResponseBody() = default ;
    GetAgentRuntimeStatisticResponseBody(const GetAgentRuntimeStatisticResponseBody &) = default ;
    GetAgentRuntimeStatisticResponseBody(GetAgentRuntimeStatisticResponseBody &&) = default ;
    GetAgentRuntimeStatisticResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAgentRuntimeStatisticResponseBody() = default ;
    GetAgentRuntimeStatisticResponseBody& operator=(const GetAgentRuntimeStatisticResponseBody &) = default ;
    GetAgentRuntimeStatisticResponseBody& operator=(GetAgentRuntimeStatisticResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AgentDisplayName, agentDisplayName_);
        DARABONBA_PTR_TO_JSON(AgentPlatform, agentPlatform_);
        DARABONBA_PTR_TO_JSON(AgentProvider, agentProvider_);
        DARABONBA_PTR_TO_JSON(ExpiredCount, expiredCount_);
        DARABONBA_PTR_TO_JSON(NoChannelConfiguredRuntimeCount, noChannelConfiguredRuntimeCount_);
        DARABONBA_PTR_TO_JSON(NoModelConfiguredRuntimeCount, noModelConfiguredRuntimeCount_);
        DARABONBA_PTR_TO_JSON(RiskyRuntimeCount, riskyRuntimeCount_);
        DARABONBA_PTR_TO_JSON(TotalRuntimeCount, totalRuntimeCount_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AgentDisplayName, agentDisplayName_);
        DARABONBA_PTR_FROM_JSON(AgentPlatform, agentPlatform_);
        DARABONBA_PTR_FROM_JSON(AgentProvider, agentProvider_);
        DARABONBA_PTR_FROM_JSON(ExpiredCount, expiredCount_);
        DARABONBA_PTR_FROM_JSON(NoChannelConfiguredRuntimeCount, noChannelConfiguredRuntimeCount_);
        DARABONBA_PTR_FROM_JSON(NoModelConfiguredRuntimeCount, noModelConfiguredRuntimeCount_);
        DARABONBA_PTR_FROM_JSON(RiskyRuntimeCount, riskyRuntimeCount_);
        DARABONBA_PTR_FROM_JSON(TotalRuntimeCount, totalRuntimeCount_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->agentDisplayName_ == nullptr
        && this->agentPlatform_ == nullptr && this->agentProvider_ == nullptr && this->expiredCount_ == nullptr && this->noChannelConfiguredRuntimeCount_ == nullptr && this->noModelConfiguredRuntimeCount_ == nullptr
        && this->riskyRuntimeCount_ == nullptr && this->totalRuntimeCount_ == nullptr; };
      // agentDisplayName Field Functions 
      bool hasAgentDisplayName() const { return this->agentDisplayName_ != nullptr;};
      void deleteAgentDisplayName() { this->agentDisplayName_ = nullptr;};
      inline string getAgentDisplayName() const { DARABONBA_PTR_GET_DEFAULT(agentDisplayName_, "") };
      inline Data& setAgentDisplayName(string agentDisplayName) { DARABONBA_PTR_SET_VALUE(agentDisplayName_, agentDisplayName) };


      // agentPlatform Field Functions 
      bool hasAgentPlatform() const { return this->agentPlatform_ != nullptr;};
      void deleteAgentPlatform() { this->agentPlatform_ = nullptr;};
      inline string getAgentPlatform() const { DARABONBA_PTR_GET_DEFAULT(agentPlatform_, "") };
      inline Data& setAgentPlatform(string agentPlatform) { DARABONBA_PTR_SET_VALUE(agentPlatform_, agentPlatform) };


      // agentProvider Field Functions 
      bool hasAgentProvider() const { return this->agentProvider_ != nullptr;};
      void deleteAgentProvider() { this->agentProvider_ = nullptr;};
      inline string getAgentProvider() const { DARABONBA_PTR_GET_DEFAULT(agentProvider_, "") };
      inline Data& setAgentProvider(string agentProvider) { DARABONBA_PTR_SET_VALUE(agentProvider_, agentProvider) };


      // expiredCount Field Functions 
      bool hasExpiredCount() const { return this->expiredCount_ != nullptr;};
      void deleteExpiredCount() { this->expiredCount_ = nullptr;};
      inline int32_t getExpiredCount() const { DARABONBA_PTR_GET_DEFAULT(expiredCount_, 0) };
      inline Data& setExpiredCount(int32_t expiredCount) { DARABONBA_PTR_SET_VALUE(expiredCount_, expiredCount) };


      // noChannelConfiguredRuntimeCount Field Functions 
      bool hasNoChannelConfiguredRuntimeCount() const { return this->noChannelConfiguredRuntimeCount_ != nullptr;};
      void deleteNoChannelConfiguredRuntimeCount() { this->noChannelConfiguredRuntimeCount_ = nullptr;};
      inline int32_t getNoChannelConfiguredRuntimeCount() const { DARABONBA_PTR_GET_DEFAULT(noChannelConfiguredRuntimeCount_, 0) };
      inline Data& setNoChannelConfiguredRuntimeCount(int32_t noChannelConfiguredRuntimeCount) { DARABONBA_PTR_SET_VALUE(noChannelConfiguredRuntimeCount_, noChannelConfiguredRuntimeCount) };


      // noModelConfiguredRuntimeCount Field Functions 
      bool hasNoModelConfiguredRuntimeCount() const { return this->noModelConfiguredRuntimeCount_ != nullptr;};
      void deleteNoModelConfiguredRuntimeCount() { this->noModelConfiguredRuntimeCount_ = nullptr;};
      inline int32_t getNoModelConfiguredRuntimeCount() const { DARABONBA_PTR_GET_DEFAULT(noModelConfiguredRuntimeCount_, 0) };
      inline Data& setNoModelConfiguredRuntimeCount(int32_t noModelConfiguredRuntimeCount) { DARABONBA_PTR_SET_VALUE(noModelConfiguredRuntimeCount_, noModelConfiguredRuntimeCount) };


      // riskyRuntimeCount Field Functions 
      bool hasRiskyRuntimeCount() const { return this->riskyRuntimeCount_ != nullptr;};
      void deleteRiskyRuntimeCount() { this->riskyRuntimeCount_ = nullptr;};
      inline int32_t getRiskyRuntimeCount() const { DARABONBA_PTR_GET_DEFAULT(riskyRuntimeCount_, 0) };
      inline Data& setRiskyRuntimeCount(int32_t riskyRuntimeCount) { DARABONBA_PTR_SET_VALUE(riskyRuntimeCount_, riskyRuntimeCount) };


      // totalRuntimeCount Field Functions 
      bool hasTotalRuntimeCount() const { return this->totalRuntimeCount_ != nullptr;};
      void deleteTotalRuntimeCount() { this->totalRuntimeCount_ = nullptr;};
      inline int32_t getTotalRuntimeCount() const { DARABONBA_PTR_GET_DEFAULT(totalRuntimeCount_, 0) };
      inline Data& setTotalRuntimeCount(int32_t totalRuntimeCount) { DARABONBA_PTR_SET_VALUE(totalRuntimeCount_, totalRuntimeCount) };


    protected:
      // The display name of the agent, which is determined by both the agent platform and the agent provider. For example, OpenClaw under the ENTERPRISE platform is displayed as OpenClaw, and OpenClaw under the JVS platform is displayed as JVS Claw.
      shared_ptr<string> agentDisplayName_ {};
      // The agent platform, such as ENTERPRISE_AGENTIC_COMPUTER.
      shared_ptr<string> agentPlatform_ {};
      // The agent provider, such as AgenticComputer.
      shared_ptr<string> agentProvider_ {};
      // The number of expired runtime resources in the group. A runtime is counted as expired if its resource status is Expired or Ceased, case-insensitive.
      shared_ptr<int32_t> expiredCount_ {};
      // The number of runtime resources without channel configurations in the group, which is the total number of runtime resources minus the number of runtime resources with channel configurations.
      shared_ptr<int32_t> noChannelConfiguredRuntimeCount_ {};
      // The number of runtime resources without model configurations in the group. A runtime is considered to have a model configured if a model is configured for the runtime itself or its associated resource group.
      shared_ptr<int32_t> noModelConfiguredRuntimeCount_ {};
      // The number of risky runtime resources in the group, deduplicated by runtime ID. A runtime is counted as risky if it has any of the following risks: model configuration modified, third-party channel configuration modified, or agent being uninstalled.
      shared_ptr<int32_t> riskyRuntimeCount_ {};
      // The total number of runtime resources in the group, deduplicated by runtime ID.
      shared_ptr<int32_t> totalRuntimeCount_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<GetAgentRuntimeStatisticResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<GetAgentRuntimeStatisticResponseBody::Data>) };
    inline vector<GetAgentRuntimeStatisticResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<GetAgentRuntimeStatisticResponseBody::Data>) };
    inline GetAgentRuntimeStatisticResponseBody& setData(const vector<GetAgentRuntimeStatisticResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetAgentRuntimeStatisticResponseBody& setData(vector<GetAgentRuntimeStatisticResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAgentRuntimeStatisticResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline GetAgentRuntimeStatisticResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The list of runtime statistics grouped by agent platform and agent provider. If AgentProvider is specified but no matching runtimes are found, a record with all statistical values set to 0 is returned.
    shared_ptr<vector<GetAgentRuntimeStatisticResponseBody::Data>> data_ {};
    // The request ID, which is used to uniquely identify the request.
    shared_ptr<string> requestId_ {};
    // The total number of returned statistical records, which is the length of the Data list.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
