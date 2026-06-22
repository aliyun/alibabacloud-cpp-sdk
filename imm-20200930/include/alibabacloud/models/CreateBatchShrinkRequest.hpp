// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEBATCHSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEBATCHSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class CreateBatchShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateBatchShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Actions, actionsShrink_);
      DARABONBA_PTR_TO_JSON(Input, inputShrink_);
      DARABONBA_PTR_TO_JSON(Notification, notificationShrink_);
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
      DARABONBA_PTR_TO_JSON(ServiceRole, serviceRole_);
      DARABONBA_PTR_TO_JSON(Tags, tagsShrink_);
    };
    friend void from_json(const Darabonba::Json& j, CreateBatchShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Actions, actionsShrink_);
      DARABONBA_PTR_FROM_JSON(Input, inputShrink_);
      DARABONBA_PTR_FROM_JSON(Notification, notificationShrink_);
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
      DARABONBA_PTR_FROM_JSON(ServiceRole, serviceRole_);
      DARABONBA_PTR_FROM_JSON(Tags, tagsShrink_);
    };
    CreateBatchShrinkRequest() = default ;
    CreateBatchShrinkRequest(const CreateBatchShrinkRequest &) = default ;
    CreateBatchShrinkRequest(CreateBatchShrinkRequest &&) = default ;
    CreateBatchShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateBatchShrinkRequest() = default ;
    CreateBatchShrinkRequest& operator=(const CreateBatchShrinkRequest &) = default ;
    CreateBatchShrinkRequest& operator=(CreateBatchShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->actionsShrink_ == nullptr
        && this->inputShrink_ == nullptr && this->notificationShrink_ == nullptr && this->projectName_ == nullptr && this->serviceRole_ == nullptr && this->tagsShrink_ == nullptr; };
    // actionsShrink Field Functions 
    bool hasActionsShrink() const { return this->actionsShrink_ != nullptr;};
    void deleteActionsShrink() { this->actionsShrink_ = nullptr;};
    inline string getActionsShrink() const { DARABONBA_PTR_GET_DEFAULT(actionsShrink_, "") };
    inline CreateBatchShrinkRequest& setActionsShrink(string actionsShrink) { DARABONBA_PTR_SET_VALUE(actionsShrink_, actionsShrink) };


    // inputShrink Field Functions 
    bool hasInputShrink() const { return this->inputShrink_ != nullptr;};
    void deleteInputShrink() { this->inputShrink_ = nullptr;};
    inline string getInputShrink() const { DARABONBA_PTR_GET_DEFAULT(inputShrink_, "") };
    inline CreateBatchShrinkRequest& setInputShrink(string inputShrink) { DARABONBA_PTR_SET_VALUE(inputShrink_, inputShrink) };


    // notificationShrink Field Functions 
    bool hasNotificationShrink() const { return this->notificationShrink_ != nullptr;};
    void deleteNotificationShrink() { this->notificationShrink_ = nullptr;};
    inline string getNotificationShrink() const { DARABONBA_PTR_GET_DEFAULT(notificationShrink_, "") };
    inline CreateBatchShrinkRequest& setNotificationShrink(string notificationShrink) { DARABONBA_PTR_SET_VALUE(notificationShrink_, notificationShrink) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string getProjectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline CreateBatchShrinkRequest& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // serviceRole Field Functions 
    bool hasServiceRole() const { return this->serviceRole_ != nullptr;};
    void deleteServiceRole() { this->serviceRole_ = nullptr;};
    inline string getServiceRole() const { DARABONBA_PTR_GET_DEFAULT(serviceRole_, "") };
    inline CreateBatchShrinkRequest& setServiceRole(string serviceRole) { DARABONBA_PTR_SET_VALUE(serviceRole_, serviceRole) };


    // tagsShrink Field Functions 
    bool hasTagsShrink() const { return this->tagsShrink_ != nullptr;};
    void deleteTagsShrink() { this->tagsShrink_ = nullptr;};
    inline string getTagsShrink() const { DARABONBA_PTR_GET_DEFAULT(tagsShrink_, "") };
    inline CreateBatchShrinkRequest& setTagsShrink(string tagsShrink) { DARABONBA_PTR_SET_VALUE(tagsShrink_, tagsShrink) };


  protected:
    // A list of processing templates.
    // 
    // This parameter is required.
    shared_ptr<string> actionsShrink_ {};
    // The input data source configuration.
    // 
    // This parameter is required.
    shared_ptr<string> inputShrink_ {};
    // The notification recipient. Multiple middleware services are supported. For details about the message format, see Asynchronous notification message. Select one of the following methods to receive messages:
    // 
    // Activate and access EventBridge in the same region as Intelligent Media Management (IMM) to promptly receive task notifications. For more information, see IMM events.
    // Activate MNS in the same region as IMM and configure a subscription.
    shared_ptr<string> notificationShrink_ {};
    // The project name. For more information, see [Create a project](https://help.aliyun.com/document_detail/478153.html).
    // 
    // This parameter is required.
    shared_ptr<string> projectName_ {};
    // The service role that grants IMM the permissions to access other cloud resources, such as OSS. The default value is AliyunIMMBatchTriggerRole.
    // 
    // To use a custom service role, create a service role and grant permissions to the role in the RAM console. For more information, see [Create a service role](https://help.aliyun.com/document_detail/116800.html) and [Grant permissions to a RAM role](https://help.aliyun.com/document_detail/116147.html).
    // 
    // This parameter is required.
    shared_ptr<string> serviceRole_ {};
    // Custom tags used to search and filter asynchronous tasks.
    shared_ptr<string> tagsShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
