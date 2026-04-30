// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNAGENTTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RUNAGENTTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsAic20230930
{
namespace Models
{
  class RunAgentTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunAgentTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BizRegionId, bizRegionId_);
      DARABONBA_PTR_TO_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_TO_JSON(MaxSteps, maxSteps_);
      DARABONBA_PTR_TO_JSON(TimeoutSeconds, timeoutSeconds_);
      DARABONBA_PTR_TO_JSON(UserPrompt, userPrompt_);
    };
    friend void from_json(const Darabonba::Json& j, RunAgentTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BizRegionId, bizRegionId_);
      DARABONBA_PTR_FROM_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_FROM_JSON(MaxSteps, maxSteps_);
      DARABONBA_PTR_FROM_JSON(TimeoutSeconds, timeoutSeconds_);
      DARABONBA_PTR_FROM_JSON(UserPrompt, userPrompt_);
    };
    RunAgentTaskRequest() = default ;
    RunAgentTaskRequest(const RunAgentTaskRequest &) = default ;
    RunAgentTaskRequest(RunAgentTaskRequest &&) = default ;
    RunAgentTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunAgentTaskRequest() = default ;
    RunAgentTaskRequest& operator=(const RunAgentTaskRequest &) = default ;
    RunAgentTaskRequest& operator=(RunAgentTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizRegionId_ == nullptr
        && this->instanceIds_ == nullptr && this->maxSteps_ == nullptr && this->timeoutSeconds_ == nullptr && this->userPrompt_ == nullptr; };
    // bizRegionId Field Functions 
    bool hasBizRegionId() const { return this->bizRegionId_ != nullptr;};
    void deleteBizRegionId() { this->bizRegionId_ = nullptr;};
    inline string getBizRegionId() const { DARABONBA_PTR_GET_DEFAULT(bizRegionId_, "") };
    inline RunAgentTaskRequest& setBizRegionId(string bizRegionId) { DARABONBA_PTR_SET_VALUE(bizRegionId_, bizRegionId) };


    // instanceIds Field Functions 
    bool hasInstanceIds() const { return this->instanceIds_ != nullptr;};
    void deleteInstanceIds() { this->instanceIds_ = nullptr;};
    inline const vector<string> & getInstanceIds() const { DARABONBA_PTR_GET_CONST(instanceIds_, vector<string>) };
    inline vector<string> getInstanceIds() { DARABONBA_PTR_GET(instanceIds_, vector<string>) };
    inline RunAgentTaskRequest& setInstanceIds(const vector<string> & instanceIds) { DARABONBA_PTR_SET_VALUE(instanceIds_, instanceIds) };
    inline RunAgentTaskRequest& setInstanceIds(vector<string> && instanceIds) { DARABONBA_PTR_SET_RVALUE(instanceIds_, instanceIds) };


    // maxSteps Field Functions 
    bool hasMaxSteps() const { return this->maxSteps_ != nullptr;};
    void deleteMaxSteps() { this->maxSteps_ = nullptr;};
    inline int32_t getMaxSteps() const { DARABONBA_PTR_GET_DEFAULT(maxSteps_, 0) };
    inline RunAgentTaskRequest& setMaxSteps(int32_t maxSteps) { DARABONBA_PTR_SET_VALUE(maxSteps_, maxSteps) };


    // timeoutSeconds Field Functions 
    bool hasTimeoutSeconds() const { return this->timeoutSeconds_ != nullptr;};
    void deleteTimeoutSeconds() { this->timeoutSeconds_ = nullptr;};
    inline int32_t getTimeoutSeconds() const { DARABONBA_PTR_GET_DEFAULT(timeoutSeconds_, 0) };
    inline RunAgentTaskRequest& setTimeoutSeconds(int32_t timeoutSeconds) { DARABONBA_PTR_SET_VALUE(timeoutSeconds_, timeoutSeconds) };


    // userPrompt Field Functions 
    bool hasUserPrompt() const { return this->userPrompt_ != nullptr;};
    void deleteUserPrompt() { this->userPrompt_ = nullptr;};
    inline string getUserPrompt() const { DARABONBA_PTR_GET_DEFAULT(userPrompt_, "") };
    inline RunAgentTaskRequest& setUserPrompt(string userPrompt) { DARABONBA_PTR_SET_VALUE(userPrompt_, userPrompt) };


  protected:
    shared_ptr<string> bizRegionId_ {};
    // This parameter is required.
    shared_ptr<vector<string>> instanceIds_ {};
    shared_ptr<int32_t> maxSteps_ {};
    shared_ptr<int32_t> timeoutSeconds_ {};
    // This parameter is required.
    shared_ptr<string> userPrompt_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
