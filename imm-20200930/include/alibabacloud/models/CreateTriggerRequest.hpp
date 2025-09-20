// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETRIGGERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATETRIGGERREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateTriggerRequestActions.hpp>
#include <alibabacloud/models/Input.hpp>
#include <alibabacloud/models/CreateTriggerRequestNotification.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class CreateTriggerRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTriggerRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Actions, actions_);
      DARABONBA_PTR_TO_JSON(Input, input_);
      DARABONBA_PTR_TO_JSON(Notification, notification_);
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
      DARABONBA_PTR_TO_JSON(ServiceRole, serviceRole_);
      DARABONBA_ANY_TO_JSON(Tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTriggerRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Actions, actions_);
      DARABONBA_PTR_FROM_JSON(Input, input_);
      DARABONBA_PTR_FROM_JSON(Notification, notification_);
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
      DARABONBA_PTR_FROM_JSON(ServiceRole, serviceRole_);
      DARABONBA_ANY_FROM_JSON(Tags, tags_);
    };
    CreateTriggerRequest() = default ;
    CreateTriggerRequest(const CreateTriggerRequest &) = default ;
    CreateTriggerRequest(CreateTriggerRequest &&) = default ;
    CreateTriggerRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTriggerRequest() = default ;
    CreateTriggerRequest& operator=(const CreateTriggerRequest &) = default ;
    CreateTriggerRequest& operator=(CreateTriggerRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->actions_ != nullptr
        && this->input_ != nullptr && this->notification_ != nullptr && this->projectName_ != nullptr && this->serviceRole_ != nullptr && this->tags_ != nullptr; };
    // actions Field Functions 
    bool hasActions() const { return this->actions_ != nullptr;};
    void deleteActions() { this->actions_ = nullptr;};
    inline const vector<CreateTriggerRequestActions> & actions() const { DARABONBA_PTR_GET_CONST(actions_, vector<CreateTriggerRequestActions>) };
    inline vector<CreateTriggerRequestActions> actions() { DARABONBA_PTR_GET(actions_, vector<CreateTriggerRequestActions>) };
    inline CreateTriggerRequest& setActions(const vector<CreateTriggerRequestActions> & actions) { DARABONBA_PTR_SET_VALUE(actions_, actions) };
    inline CreateTriggerRequest& setActions(vector<CreateTriggerRequestActions> && actions) { DARABONBA_PTR_SET_RVALUE(actions_, actions) };


    // input Field Functions 
    bool hasInput() const { return this->input_ != nullptr;};
    void deleteInput() { this->input_ = nullptr;};
    inline const Input & input() const { DARABONBA_PTR_GET_CONST(input_, Input) };
    inline Input input() { DARABONBA_PTR_GET(input_, Input) };
    inline CreateTriggerRequest& setInput(const Input & input) { DARABONBA_PTR_SET_VALUE(input_, input) };
    inline CreateTriggerRequest& setInput(Input && input) { DARABONBA_PTR_SET_RVALUE(input_, input) };


    // notification Field Functions 
    bool hasNotification() const { return this->notification_ != nullptr;};
    void deleteNotification() { this->notification_ = nullptr;};
    inline const CreateTriggerRequestNotification & notification() const { DARABONBA_PTR_GET_CONST(notification_, CreateTriggerRequestNotification) };
    inline CreateTriggerRequestNotification notification() { DARABONBA_PTR_GET(notification_, CreateTriggerRequestNotification) };
    inline CreateTriggerRequest& setNotification(const CreateTriggerRequestNotification & notification) { DARABONBA_PTR_SET_VALUE(notification_, notification) };
    inline CreateTriggerRequest& setNotification(CreateTriggerRequestNotification && notification) { DARABONBA_PTR_SET_RVALUE(notification_, notification) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string projectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline CreateTriggerRequest& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // serviceRole Field Functions 
    bool hasServiceRole() const { return this->serviceRole_ != nullptr;};
    void deleteServiceRole() { this->serviceRole_ = nullptr;};
    inline string serviceRole() const { DARABONBA_PTR_GET_DEFAULT(serviceRole_, "") };
    inline CreateTriggerRequest& setServiceRole(string serviceRole) { DARABONBA_PTR_SET_VALUE(serviceRole_, serviceRole) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline     const Darabonba::Json & tags() const { DARABONBA_GET(tags_) };
    Darabonba::Json & tags() { DARABONBA_GET(tags_) };
    inline CreateTriggerRequest& setTags(const Darabonba::Json & tags) { DARABONBA_SET_VALUE(tags_, tags) };
    inline CreateTriggerRequest& setTags(Darabonba::Json & tags) { DARABONBA_SET_RVALUE(tags_, tags) };


  protected:
    // The templates.
    // 
    // This parameter is required.
    std::shared_ptr<vector<CreateTriggerRequestActions>> actions_ = nullptr;
    // The data source configurations.
    // 
    // This parameter is required.
    std::shared_ptr<Input> input_ = nullptr;
    // The notification settings. The operation supports multiple messaging middleware options. For more information about notification messages, see Asynchronous message examples. You can use one of the following methods to receive notification messages:
    // 
    // In the region in which the IMM project is located, use EventBridge to receive task notifications. For more information, see IMM events. In the region in which the IMM project is located, configure a Simple Message Queue (SMQ) subscription to receive task notifications.
    std::shared_ptr<CreateTriggerRequestNotification> notification_ = nullptr;
    // The name of the project.[](~~478153~~)
    // 
    // This parameter is required.
    std::shared_ptr<string> projectName_ = nullptr;
    // The service role. IMM assumes the service role so that it can access resources in other cloud services, such as OSS. Default value: AliyunIMMBatchTriggerRole.
    // 
    // You can also create a custom service role in the RAM console and grant the required permissions to the role based on your business requirements. For more information, see [Create a regular service role](https://help.aliyun.com/document_detail/116800.html) and [Grant permissions to a role](https://help.aliyun.com/document_detail/116147.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> serviceRole_ = nullptr;
    // The custom tags. You can search for or filter asynchronous tasks by custom tag.
    Darabonba::Json tags_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
