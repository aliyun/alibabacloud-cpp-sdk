// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETRIGGERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATETRIGGERREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/MNS.hpp>
#include <alibabacloud/models/FastFailPolicy.hpp>
#include <vector>
#include <alibabacloud/models/Input.hpp>
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
    class Notification : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Notification& obj) { 
        DARABONBA_PTR_TO_JSON(MNS, MNS_);
      };
      friend void from_json(const Darabonba::Json& j, Notification& obj) { 
        DARABONBA_PTR_FROM_JSON(MNS, MNS_);
      };
      Notification() = default ;
      Notification(const Notification &) = default ;
      Notification(Notification &&) = default ;
      Notification(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Notification() = default ;
      Notification& operator=(const Notification &) = default ;
      Notification& operator=(Notification &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->MNS_ == nullptr; };
      // MNS Field Functions 
      bool hasMNS() const { return this->MNS_ != nullptr;};
      void deleteMNS() { this->MNS_ = nullptr;};
      inline const MNS & getMNS() const { DARABONBA_PTR_GET_CONST(MNS_, MNS) };
      inline MNS getMNS() { DARABONBA_PTR_GET(MNS_, MNS) };
      inline Notification& setMNS(const MNS & MNS) { DARABONBA_PTR_SET_VALUE(MNS_, MNS) };
      inline Notification& setMNS(MNS && MNS) { DARABONBA_PTR_SET_RVALUE(MNS_, MNS) };


    protected:
      // The SMQ notification settings.
      shared_ptr<MNS> MNS_ {};
    };

    class Actions : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Actions& obj) { 
        DARABONBA_PTR_TO_JSON(FastFailPolicy, fastFailPolicy_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Parameters, parameters_);
      };
      friend void from_json(const Darabonba::Json& j, Actions& obj) { 
        DARABONBA_PTR_FROM_JSON(FastFailPolicy, fastFailPolicy_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Parameters, parameters_);
      };
      Actions() = default ;
      Actions(const Actions &) = default ;
      Actions(Actions &&) = default ;
      Actions(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Actions() = default ;
      Actions& operator=(const Actions &) = default ;
      Actions& operator=(Actions &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->fastFailPolicy_ == nullptr
        && this->name_ == nullptr && this->parameters_ == nullptr; };
      // fastFailPolicy Field Functions 
      bool hasFastFailPolicy() const { return this->fastFailPolicy_ != nullptr;};
      void deleteFastFailPolicy() { this->fastFailPolicy_ = nullptr;};
      inline const FastFailPolicy & getFastFailPolicy() const { DARABONBA_PTR_GET_CONST(fastFailPolicy_, FastFailPolicy) };
      inline FastFailPolicy getFastFailPolicy() { DARABONBA_PTR_GET(fastFailPolicy_, FastFailPolicy) };
      inline Actions& setFastFailPolicy(const FastFailPolicy & fastFailPolicy) { DARABONBA_PTR_SET_VALUE(fastFailPolicy_, fastFailPolicy) };
      inline Actions& setFastFailPolicy(FastFailPolicy && fastFailPolicy) { DARABONBA_PTR_SET_RVALUE(fastFailPolicy_, fastFailPolicy) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Actions& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // parameters Field Functions 
      bool hasParameters() const { return this->parameters_ != nullptr;};
      void deleteParameters() { this->parameters_ = nullptr;};
      inline const vector<string> & getParameters() const { DARABONBA_PTR_GET_CONST(parameters_, vector<string>) };
      inline vector<string> getParameters() { DARABONBA_PTR_GET(parameters_, vector<string>) };
      inline Actions& setParameters(const vector<string> & parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };
      inline Actions& setParameters(vector<string> && parameters) { DARABONBA_PTR_SET_RVALUE(parameters_, parameters) };


    protected:
      // The policy configurations for handling failures.
      shared_ptr<FastFailPolicy> fastFailPolicy_ {};
      // The name of the template.
      // 
      // This parameter is required.
      shared_ptr<string> name_ {};
      // The template parameters.
      shared_ptr<vector<string>> parameters_ {};
    };

    virtual bool empty() const override { return this->actions_ == nullptr
        && this->input_ == nullptr && this->notification_ == nullptr && this->projectName_ == nullptr && this->serviceRole_ == nullptr && this->tags_ == nullptr; };
    // actions Field Functions 
    bool hasActions() const { return this->actions_ != nullptr;};
    void deleteActions() { this->actions_ = nullptr;};
    inline const vector<CreateTriggerRequest::Actions> & getActions() const { DARABONBA_PTR_GET_CONST(actions_, vector<CreateTriggerRequest::Actions>) };
    inline vector<CreateTriggerRequest::Actions> getActions() { DARABONBA_PTR_GET(actions_, vector<CreateTriggerRequest::Actions>) };
    inline CreateTriggerRequest& setActions(const vector<CreateTriggerRequest::Actions> & actions) { DARABONBA_PTR_SET_VALUE(actions_, actions) };
    inline CreateTriggerRequest& setActions(vector<CreateTriggerRequest::Actions> && actions) { DARABONBA_PTR_SET_RVALUE(actions_, actions) };


    // input Field Functions 
    bool hasInput() const { return this->input_ != nullptr;};
    void deleteInput() { this->input_ = nullptr;};
    inline const Input & getInput() const { DARABONBA_PTR_GET_CONST(input_, Input) };
    inline Input getInput() { DARABONBA_PTR_GET(input_, Input) };
    inline CreateTriggerRequest& setInput(const Input & input) { DARABONBA_PTR_SET_VALUE(input_, input) };
    inline CreateTriggerRequest& setInput(Input && input) { DARABONBA_PTR_SET_RVALUE(input_, input) };


    // notification Field Functions 
    bool hasNotification() const { return this->notification_ != nullptr;};
    void deleteNotification() { this->notification_ = nullptr;};
    inline const CreateTriggerRequest::Notification & getNotification() const { DARABONBA_PTR_GET_CONST(notification_, CreateTriggerRequest::Notification) };
    inline CreateTriggerRequest::Notification getNotification() { DARABONBA_PTR_GET(notification_, CreateTriggerRequest::Notification) };
    inline CreateTriggerRequest& setNotification(const CreateTriggerRequest::Notification & notification) { DARABONBA_PTR_SET_VALUE(notification_, notification) };
    inline CreateTriggerRequest& setNotification(CreateTriggerRequest::Notification && notification) { DARABONBA_PTR_SET_RVALUE(notification_, notification) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string getProjectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline CreateTriggerRequest& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // serviceRole Field Functions 
    bool hasServiceRole() const { return this->serviceRole_ != nullptr;};
    void deleteServiceRole() { this->serviceRole_ = nullptr;};
    inline string getServiceRole() const { DARABONBA_PTR_GET_DEFAULT(serviceRole_, "") };
    inline CreateTriggerRequest& setServiceRole(string serviceRole) { DARABONBA_PTR_SET_VALUE(serviceRole_, serviceRole) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline     const Darabonba::Json & getTags() const { DARABONBA_GET(tags_) };
    Darabonba::Json & getTags() { DARABONBA_GET(tags_) };
    inline CreateTriggerRequest& setTags(const Darabonba::Json & tags) { DARABONBA_SET_VALUE(tags_, tags) };
    inline CreateTriggerRequest& setTags(Darabonba::Json && tags) { DARABONBA_SET_RVALUE(tags_, tags) };


  protected:
    // The templates.
    // 
    // This parameter is required.
    shared_ptr<vector<CreateTriggerRequest::Actions>> actions_ {};
    // The data source configurations.
    // 
    // This parameter is required.
    shared_ptr<Input> input_ {};
    // The notification settings. The operation supports multiple messaging middleware options. For more information about notification messages, see Asynchronous message examples. You can use one of the following methods to receive notification messages:
    // 
    // In the region in which the IMM project is located, use EventBridge to receive task notifications. For more information, see IMM events. In the region in which the IMM project is located, configure a Simple Message Queue (SMQ) subscription to receive task notifications.
    shared_ptr<CreateTriggerRequest::Notification> notification_ {};
    // The name of the project.[](~~478153~~)
    // 
    // This parameter is required.
    shared_ptr<string> projectName_ {};
    // The service role. IMM assumes the service role so that it can access resources in other cloud services, such as OSS. Default value: AliyunIMMBatchTriggerRole.
    // 
    // You can also create a custom service role in the RAM console and grant the required permissions to the role based on your business requirements. For more information, see [Create a regular service role](https://help.aliyun.com/document_detail/116800.html) and [Grant permissions to a role](https://help.aliyun.com/document_detail/116147.html).
    // 
    // This parameter is required.
    shared_ptr<string> serviceRole_ {};
    // The custom tags. You can search for or filter asynchronous tasks by custom tag.
    Darabonba::Json tags_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
