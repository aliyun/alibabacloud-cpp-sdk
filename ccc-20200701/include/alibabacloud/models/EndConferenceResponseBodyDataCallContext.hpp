// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ENDCONFERENCERESPONSEBODYDATACALLCONTEXT_HPP_
#define ALIBABACLOUD_MODELS_ENDCONFERENCERESPONSEBODYDATACALLCONTEXT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/EndConferenceResponseBodyDataCallContextChannelContexts.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class EndConferenceResponseBodyDataCallContext : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EndConferenceResponseBodyDataCallContext& obj) { 
      DARABONBA_PTR_TO_JSON(ChannelContexts, channelContexts_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
    };
    friend void from_json(const Darabonba::Json& j, EndConferenceResponseBodyDataCallContext& obj) { 
      DARABONBA_PTR_FROM_JSON(ChannelContexts, channelContexts_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
    };
    EndConferenceResponseBodyDataCallContext() = default ;
    EndConferenceResponseBodyDataCallContext(const EndConferenceResponseBodyDataCallContext &) = default ;
    EndConferenceResponseBodyDataCallContext(EndConferenceResponseBodyDataCallContext &&) = default ;
    EndConferenceResponseBodyDataCallContext(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EndConferenceResponseBodyDataCallContext() = default ;
    EndConferenceResponseBodyDataCallContext& operator=(const EndConferenceResponseBodyDataCallContext &) = default ;
    EndConferenceResponseBodyDataCallContext& operator=(EndConferenceResponseBodyDataCallContext &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->channelContexts_ != nullptr
        && this->instanceId_ != nullptr && this->jobId_ != nullptr; };
    // channelContexts Field Functions 
    bool hasChannelContexts() const { return this->channelContexts_ != nullptr;};
    void deleteChannelContexts() { this->channelContexts_ = nullptr;};
    inline const vector<Models::EndConferenceResponseBodyDataCallContextChannelContexts> & channelContexts() const { DARABONBA_PTR_GET_CONST(channelContexts_, vector<Models::EndConferenceResponseBodyDataCallContextChannelContexts>) };
    inline vector<Models::EndConferenceResponseBodyDataCallContextChannelContexts> channelContexts() { DARABONBA_PTR_GET(channelContexts_, vector<Models::EndConferenceResponseBodyDataCallContextChannelContexts>) };
    inline EndConferenceResponseBodyDataCallContext& setChannelContexts(const vector<Models::EndConferenceResponseBodyDataCallContextChannelContexts> & channelContexts) { DARABONBA_PTR_SET_VALUE(channelContexts_, channelContexts) };
    inline EndConferenceResponseBodyDataCallContext& setChannelContexts(vector<Models::EndConferenceResponseBodyDataCallContextChannelContexts> && channelContexts) { DARABONBA_PTR_SET_RVALUE(channelContexts_, channelContexts) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline EndConferenceResponseBodyDataCallContext& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline EndConferenceResponseBodyDataCallContext& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


  protected:
    std::shared_ptr<vector<Models::EndConferenceResponseBodyDataCallContextChannelContexts>> channelContexts_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> jobId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
