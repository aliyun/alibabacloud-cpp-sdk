// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTAIWORKFLOWREQUEST_HPP_
#define ALIBABACLOUD_MODELS_STARTAIWORKFLOWREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class StartAIWorkflowRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartAIWorkflowRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DispatchTag, dispatchTag_);
      DARABONBA_PTR_TO_JSON(Inputs, inputs_);
      DARABONBA_PTR_TO_JSON(UserData, userData_);
      DARABONBA_PTR_TO_JSON(WorkflowId, workflowId_);
    };
    friend void from_json(const Darabonba::Json& j, StartAIWorkflowRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DispatchTag, dispatchTag_);
      DARABONBA_PTR_FROM_JSON(Inputs, inputs_);
      DARABONBA_PTR_FROM_JSON(UserData, userData_);
      DARABONBA_PTR_FROM_JSON(WorkflowId, workflowId_);
    };
    StartAIWorkflowRequest() = default ;
    StartAIWorkflowRequest(const StartAIWorkflowRequest &) = default ;
    StartAIWorkflowRequest(StartAIWorkflowRequest &&) = default ;
    StartAIWorkflowRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartAIWorkflowRequest() = default ;
    StartAIWorkflowRequest& operator=(const StartAIWorkflowRequest &) = default ;
    StartAIWorkflowRequest& operator=(StartAIWorkflowRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dispatchTag_ == nullptr
        && return this->inputs_ == nullptr && return this->userData_ == nullptr && return this->workflowId_ == nullptr; };
    // dispatchTag Field Functions 
    bool hasDispatchTag() const { return this->dispatchTag_ != nullptr;};
    void deleteDispatchTag() { this->dispatchTag_ = nullptr;};
    inline string dispatchTag() const { DARABONBA_PTR_GET_DEFAULT(dispatchTag_, "") };
    inline StartAIWorkflowRequest& setDispatchTag(string dispatchTag) { DARABONBA_PTR_SET_VALUE(dispatchTag_, dispatchTag) };


    // inputs Field Functions 
    bool hasInputs() const { return this->inputs_ != nullptr;};
    void deleteInputs() { this->inputs_ = nullptr;};
    inline string inputs() const { DARABONBA_PTR_GET_DEFAULT(inputs_, "") };
    inline StartAIWorkflowRequest& setInputs(string inputs) { DARABONBA_PTR_SET_VALUE(inputs_, inputs) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string userData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline StartAIWorkflowRequest& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


    // workflowId Field Functions 
    bool hasWorkflowId() const { return this->workflowId_ != nullptr;};
    void deleteWorkflowId() { this->workflowId_ = nullptr;};
    inline string workflowId() const { DARABONBA_PTR_GET_DEFAULT(workflowId_, "") };
    inline StartAIWorkflowRequest& setWorkflowId(string workflowId) { DARABONBA_PTR_SET_VALUE(workflowId_, workflowId) };


  protected:
    // The tag for the task.
    std::shared_ptr<string> dispatchTag_ = nullptr;
    // A JSON string containing the specific input parameters, such as information about the media assets, standard live streams, or RTC streams.
    std::shared_ptr<string> inputs_ = nullptr;
    // A user-defined parameter for passing custom metadata.
    std::shared_ptr<string> userData_ = nullptr;
    // The ID of the workflow template.
    std::shared_ptr<string> workflowId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
