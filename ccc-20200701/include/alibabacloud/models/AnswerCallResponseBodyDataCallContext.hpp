// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ANSWERCALLRESPONSEBODYDATACALLCONTEXT_HPP_
#define ALIBABACLOUD_MODELS_ANSWERCALLRESPONSEBODYDATACALLCONTEXT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/AnswerCallResponseBodyDataCallContextChannelContexts.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class AnswerCallResponseBodyDataCallContext : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AnswerCallResponseBodyDataCallContext& obj) { 
      DARABONBA_PTR_TO_JSON(CallType, callType_);
      DARABONBA_PTR_TO_JSON(ChannelContexts, channelContexts_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
    };
    friend void from_json(const Darabonba::Json& j, AnswerCallResponseBodyDataCallContext& obj) { 
      DARABONBA_PTR_FROM_JSON(CallType, callType_);
      DARABONBA_PTR_FROM_JSON(ChannelContexts, channelContexts_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
    };
    AnswerCallResponseBodyDataCallContext() = default ;
    AnswerCallResponseBodyDataCallContext(const AnswerCallResponseBodyDataCallContext &) = default ;
    AnswerCallResponseBodyDataCallContext(AnswerCallResponseBodyDataCallContext &&) = default ;
    AnswerCallResponseBodyDataCallContext(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AnswerCallResponseBodyDataCallContext() = default ;
    AnswerCallResponseBodyDataCallContext& operator=(const AnswerCallResponseBodyDataCallContext &) = default ;
    AnswerCallResponseBodyDataCallContext& operator=(AnswerCallResponseBodyDataCallContext &&) = default ;
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
    inline AnswerCallResponseBodyDataCallContext& setCallType(string callType) { DARABONBA_PTR_SET_VALUE(callType_, callType) };


    // channelContexts Field Functions 
    bool hasChannelContexts() const { return this->channelContexts_ != nullptr;};
    void deleteChannelContexts() { this->channelContexts_ = nullptr;};
    inline const vector<Models::AnswerCallResponseBodyDataCallContextChannelContexts> & channelContexts() const { DARABONBA_PTR_GET_CONST(channelContexts_, vector<Models::AnswerCallResponseBodyDataCallContextChannelContexts>) };
    inline vector<Models::AnswerCallResponseBodyDataCallContextChannelContexts> channelContexts() { DARABONBA_PTR_GET(channelContexts_, vector<Models::AnswerCallResponseBodyDataCallContextChannelContexts>) };
    inline AnswerCallResponseBodyDataCallContext& setChannelContexts(const vector<Models::AnswerCallResponseBodyDataCallContextChannelContexts> & channelContexts) { DARABONBA_PTR_SET_VALUE(channelContexts_, channelContexts) };
    inline AnswerCallResponseBodyDataCallContext& setChannelContexts(vector<Models::AnswerCallResponseBodyDataCallContextChannelContexts> && channelContexts) { DARABONBA_PTR_SET_RVALUE(channelContexts_, channelContexts) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline AnswerCallResponseBodyDataCallContext& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline AnswerCallResponseBodyDataCallContext& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


  protected:
    std::shared_ptr<string> callType_ = nullptr;
    std::shared_ptr<vector<Models::AnswerCallResponseBodyDataCallContextChannelContexts>> channelContexts_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> jobId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
