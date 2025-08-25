// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SWITCHTOCONFERENCERESPONSEBODYDATACALLCONTEXT_HPP_
#define ALIBABACLOUD_MODELS_SWITCHTOCONFERENCERESPONSEBODYDATACALLCONTEXT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SwitchToConferenceResponseBodyDataCallContextChannelContexts.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class SwitchToConferenceResponseBodyDataCallContext : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SwitchToConferenceResponseBodyDataCallContext& obj) { 
      DARABONBA_PTR_TO_JSON(CallType, callType_);
      DARABONBA_PTR_TO_JSON(ChannelContexts, channelContexts_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
    };
    friend void from_json(const Darabonba::Json& j, SwitchToConferenceResponseBodyDataCallContext& obj) { 
      DARABONBA_PTR_FROM_JSON(CallType, callType_);
      DARABONBA_PTR_FROM_JSON(ChannelContexts, channelContexts_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
    };
    SwitchToConferenceResponseBodyDataCallContext() = default ;
    SwitchToConferenceResponseBodyDataCallContext(const SwitchToConferenceResponseBodyDataCallContext &) = default ;
    SwitchToConferenceResponseBodyDataCallContext(SwitchToConferenceResponseBodyDataCallContext &&) = default ;
    SwitchToConferenceResponseBodyDataCallContext(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SwitchToConferenceResponseBodyDataCallContext() = default ;
    SwitchToConferenceResponseBodyDataCallContext& operator=(const SwitchToConferenceResponseBodyDataCallContext &) = default ;
    SwitchToConferenceResponseBodyDataCallContext& operator=(SwitchToConferenceResponseBodyDataCallContext &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->callType_ != nullptr
        && this->channelContexts_ != nullptr && this->instanceId_ != nullptr && this->jobId_ != nullptr; };
    // callType Field Functions 
    bool hasCallType() const { return this->callType_ != nullptr;};
    void deleteCallType() { this->callType_ = nullptr;};
    inline string callType() const { DARABONBA_PTR_GET_DEFAULT(callType_, "") };
    inline SwitchToConferenceResponseBodyDataCallContext& setCallType(string callType) { DARABONBA_PTR_SET_VALUE(callType_, callType) };


    // channelContexts Field Functions 
    bool hasChannelContexts() const { return this->channelContexts_ != nullptr;};
    void deleteChannelContexts() { this->channelContexts_ = nullptr;};
    inline const vector<Models::SwitchToConferenceResponseBodyDataCallContextChannelContexts> & channelContexts() const { DARABONBA_PTR_GET_CONST(channelContexts_, vector<Models::SwitchToConferenceResponseBodyDataCallContextChannelContexts>) };
    inline vector<Models::SwitchToConferenceResponseBodyDataCallContextChannelContexts> channelContexts() { DARABONBA_PTR_GET(channelContexts_, vector<Models::SwitchToConferenceResponseBodyDataCallContextChannelContexts>) };
    inline SwitchToConferenceResponseBodyDataCallContext& setChannelContexts(const vector<Models::SwitchToConferenceResponseBodyDataCallContextChannelContexts> & channelContexts) { DARABONBA_PTR_SET_VALUE(channelContexts_, channelContexts) };
    inline SwitchToConferenceResponseBodyDataCallContext& setChannelContexts(vector<Models::SwitchToConferenceResponseBodyDataCallContextChannelContexts> && channelContexts) { DARABONBA_PTR_SET_RVALUE(channelContexts_, channelContexts) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline SwitchToConferenceResponseBodyDataCallContext& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline SwitchToConferenceResponseBodyDataCallContext& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


  protected:
    std::shared_ptr<string> callType_ = nullptr;
    std::shared_ptr<vector<Models::SwitchToConferenceResponseBodyDataCallContextChannelContexts>> channelContexts_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> jobId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
