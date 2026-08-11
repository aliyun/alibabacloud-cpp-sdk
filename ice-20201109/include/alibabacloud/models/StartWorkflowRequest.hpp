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
        && this->taskInput_ == nullptr && this->userData_ == nullptr && this->workflowId_ == nullptr; };
    // skipInputVerification Field Functions 
    bool hasSkipInputVerification() const { return this->skipInputVerification_ != nullptr;};
    void deleteSkipInputVerification() { this->skipInputVerification_ = nullptr;};
    inline bool getSkipInputVerification() const { DARABONBA_PTR_GET_DEFAULT(skipInputVerification_, false) };
    inline StartWorkflowRequest& setSkipInputVerification(bool skipInputVerification) { DARABONBA_PTR_SET_VALUE(skipInputVerification_, skipInputVerification) };


    // taskInput Field Functions 
    bool hasTaskInput() const { return this->taskInput_ != nullptr;};
    void deleteTaskInput() { this->taskInput_ = nullptr;};
    inline string getTaskInput() const { DARABONBA_PTR_GET_DEFAULT(taskInput_, "") };
    inline StartWorkflowRequest& setTaskInput(string taskInput) { DARABONBA_PTR_SET_VALUE(taskInput_, taskInput) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string getUserData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline StartWorkflowRequest& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


    // workflowId Field Functions 
    bool hasWorkflowId() const { return this->workflowId_ != nullptr;};
    void deleteWorkflowId() { this->workflowId_ = nullptr;};
    inline string getWorkflowId() const { DARABONBA_PTR_GET_DEFAULT(workflowId_, "") };
    inline StartWorkflowRequest& setWorkflowId(string workflowId) { DARABONBA_PTR_SET_VALUE(workflowId_, workflowId) };


  protected:
    // Specifies whether to skip the input path verification for the workflow. This parameter takes effect only when the workflow input is an OSS file. We recommend that you do not skip the verification to avoid errors caused by incorrect paths. If this parameter is not specified, the default value is false. Valid values:
    // 
    // - **true**: Skip the verification.
    // 
    // - **false**: Do not skip the verification.
    shared_ptr<bool> skipInputVerification_ {};
    // The workflow input. Currently, media asset types and OSS files are supported.
    // 
    // Type: the supported media object type. Valid values:
    // 
    // - OSS: an OSS file.
    // 
    // - Media: a media asset ID.
    // 
    // Media: the media value. Valid values:
    // 
    // - If Type is set to OSS, the value is a URL that supports the OSS protocol and HTTP protocol.
    // 
    // - If Type is set to Media, the value is a media asset ID.
    shared_ptr<string> taskInput_ {};
    // The custom settings in JSON format. The maximum length is 512 bytes. [Custom callback URL configuration](https://help.aliyun.com/document_detail/451631.html) is supported.
    shared_ptr<string> userData_ {};
    // The workflow template ID. You can view the template ID in the [Intelligent Media Services console](https://ims.console.aliyun.com/settings/workflow/list) by navigating to Configuration Management > Workflow Template.
    shared_ptr<string> workflowId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
