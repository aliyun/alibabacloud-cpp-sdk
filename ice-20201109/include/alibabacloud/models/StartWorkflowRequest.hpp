// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTWORKFLOWREQUEST_HPP_
#define ALIBABACLOUD_MODELS_STARTWORKFLOWREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class StartWorkflowRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartWorkflowRequest& obj) { 
      DARABONBA_PTR_TO_JSON(SkipInputVerification, skipInputVerification_);
      DARABONBA_PTR_TO_JSON(TaskInput, taskInput_);
      DARABONBA_PTR_TO_JSON(UserData, userData_);
      DARABONBA_PTR_TO_JSON(WorkflowId, workflowId_);
    };
    friend void from_json(const Darabonba::Json& j, StartWorkflowRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(SkipInputVerification, skipInputVerification_);
      DARABONBA_PTR_FROM_JSON(TaskInput, taskInput_);
      DARABONBA_PTR_FROM_JSON(UserData, userData_);
      DARABONBA_PTR_FROM_JSON(WorkflowId, workflowId_);
    };
    StartWorkflowRequest() = default ;
    StartWorkflowRequest(const StartWorkflowRequest &) = default ;
    StartWorkflowRequest(StartWorkflowRequest &&) = default ;
    StartWorkflowRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartWorkflowRequest() = default ;
    StartWorkflowRequest& operator=(const StartWorkflowRequest &) = default ;
    StartWorkflowRequest& operator=(StartWorkflowRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->skipInputVerification_ == nullptr
        && return this->taskInput_ == nullptr && return this->userData_ == nullptr && return this->workflowId_ == nullptr; };
    // skipInputVerification Field Functions 
    bool hasSkipInputVerification() const { return this->skipInputVerification_ != nullptr;};
    void deleteSkipInputVerification() { this->skipInputVerification_ = nullptr;};
    inline bool skipInputVerification() const { DARABONBA_PTR_GET_DEFAULT(skipInputVerification_, false) };
    inline StartWorkflowRequest& setSkipInputVerification(bool skipInputVerification) { DARABONBA_PTR_SET_VALUE(skipInputVerification_, skipInputVerification) };


    // taskInput Field Functions 
    bool hasTaskInput() const { return this->taskInput_ != nullptr;};
    void deleteTaskInput() { this->taskInput_ = nullptr;};
    inline string taskInput() const { DARABONBA_PTR_GET_DEFAULT(taskInput_, "") };
    inline StartWorkflowRequest& setTaskInput(string taskInput) { DARABONBA_PTR_SET_VALUE(taskInput_, taskInput) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string userData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline StartWorkflowRequest& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


    // workflowId Field Functions 
    bool hasWorkflowId() const { return this->workflowId_ != nullptr;};
    void deleteWorkflowId() { this->workflowId_ = nullptr;};
    inline string workflowId() const { DARABONBA_PTR_GET_DEFAULT(workflowId_, "") };
    inline StartWorkflowRequest& setWorkflowId(string workflowId) { DARABONBA_PTR_SET_VALUE(workflowId_, workflowId) };


  protected:
    std::shared_ptr<bool> skipInputVerification_ = nullptr;
    // The workflow input. Only media assets are supported.
    std::shared_ptr<string> taskInput_ = nullptr;
    // The user-defined data in the JSON format, which cannot be up to 512 bytes in length. You can specify a custom callback URL. For more information, see [Configure a callback upon editing completion](https://help.aliyun.com/document_detail/451631.html).
    std::shared_ptr<string> userData_ = nullptr;
    // The ID of the workflow template. To view the template ID, log on to the [IMS console](https://ims.console.aliyun.com/settings/workflow/list) and choose Configurations > Workflow Template.
    std::shared_ptr<string> workflowId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
