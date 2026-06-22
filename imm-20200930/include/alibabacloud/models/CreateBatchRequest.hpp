// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEBATCHREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEBATCHREQUEST_HPP_
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
  class CreateBatchRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateBatchRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Actions, actions_);
      DARABONBA_PTR_TO_JSON(Input, input_);
      DARABONBA_PTR_TO_JSON(Notification, notification_);
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
      DARABONBA_PTR_TO_JSON(ServiceRole, serviceRole_);
      DARABONBA_ANY_TO_JSON(Tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, CreateBatchRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Actions, actions_);
      DARABONBA_PTR_FROM_JSON(Input, input_);
      DARABONBA_PTR_FROM_JSON(Notification, notification_);
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
      DARABONBA_PTR_FROM_JSON(ServiceRole, serviceRole_);
      DARABONBA_ANY_FROM_JSON(Tags, tags_);
    };
    CreateBatchRequest() = default ;
    CreateBatchRequest(const CreateBatchRequest &) = default ;
    CreateBatchRequest(CreateBatchRequest &&) = default ;
    CreateBatchRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateBatchRequest() = default ;
    CreateBatchRequest& operator=(const CreateBatchRequest &) = default ;
    CreateBatchRequest& operator=(CreateBatchRequest &&) = default ;
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
      // The parameters for MNS notifications.
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
      // The fast-fail policy configuration.
      shared_ptr<FastFailPolicy> fastFailPolicy_ {};
      // The template name.
      // 
      // This parameter is required.
      shared_ptr<string> name_ {};
      // A list of template parameters.
      shared_ptr<vector<string>> parameters_ {};
    };

    virtual bool empty() const override { return this->actions_ == nullptr
        && this->input_ == nullptr && this->notification_ == nullptr && this->projectName_ == nullptr && this->serviceRole_ == nullptr && this->tags_ == nullptr; };
    // actions Field Functions 
    bool hasActions() const { return this->actions_ != nullptr;};
    void deleteActions() { this->actions_ = nullptr;};
    inline const vector<CreateBatchRequest::Actions> & getActions() const { DARABONBA_PTR_GET_CONST(actions_, vector<CreateBatchRequest::Actions>) };
    inline vector<CreateBatchRequest::Actions> getActions() { DARABONBA_PTR_GET(actions_, vector<CreateBatchRequest::Actions>) };
    inline CreateBatchRequest& setActions(const vector<CreateBatchRequest::Actions> & actions) { DARABONBA_PTR_SET_VALUE(actions_, actions) };
    inline CreateBatchRequest& setActions(vector<CreateBatchRequest::Actions> && actions) { DARABONBA_PTR_SET_RVALUE(actions_, actions) };


    // input Field Functions 
    bool hasInput() const { return this->input_ != nullptr;};
    void deleteInput() { this->input_ = nullptr;};
    inline const Input & getInput() const { DARABONBA_PTR_GET_CONST(input_, Input) };
    inline Input getInput() { DARABONBA_PTR_GET(input_, Input) };
    inline CreateBatchRequest& setInput(const Input & input) { DARABONBA_PTR_SET_VALUE(input_, input) };
    inline CreateBatchRequest& setInput(Input && input) { DARABONBA_PTR_SET_RVALUE(input_, input) };


    // notification Field Functions 
    bool hasNotification() const { return this->notification_ != nullptr;};
    void deleteNotification() { this->notification_ = nullptr;};
    inline const CreateBatchRequest::Notification & getNotification() const { DARABONBA_PTR_GET_CONST(notification_, CreateBatchRequest::Notification) };
    inline CreateBatchRequest::Notification getNotification() { DARABONBA_PTR_GET(notification_, CreateBatchRequest::Notification) };
    inline CreateBatchRequest& setNotification(const CreateBatchRequest::Notification & notification) { DARABONBA_PTR_SET_VALUE(notification_, notification) };
    inline CreateBatchRequest& setNotification(CreateBatchRequest::Notification && notification) { DARABONBA_PTR_SET_RVALUE(notification_, notification) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string getProjectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline CreateBatchRequest& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // serviceRole Field Functions 
    bool hasServiceRole() const { return this->serviceRole_ != nullptr;};
    void deleteServiceRole() { this->serviceRole_ = nullptr;};
    inline string getServiceRole() const { DARABONBA_PTR_GET_DEFAULT(serviceRole_, "") };
    inline CreateBatchRequest& setServiceRole(string serviceRole) { DARABONBA_PTR_SET_VALUE(serviceRole_, serviceRole) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline     const Darabonba::Json & getTags() const { DARABONBA_GET(tags_) };
    Darabonba::Json & getTags() { DARABONBA_GET(tags_) };
    inline CreateBatchRequest& setTags(const Darabonba::Json & tags) { DARABONBA_SET_VALUE(tags_, tags) };
    inline CreateBatchRequest& setTags(Darabonba::Json && tags) { DARABONBA_SET_RVALUE(tags_, tags) };


  protected:
    // A list of processing templates.
    // 
    // This parameter is required.
    shared_ptr<vector<CreateBatchRequest::Actions>> actions_ {};
    // The input data source configuration.
    // 
    // This parameter is required.
    shared_ptr<Input> input_ {};
    // The notification recipient. Multiple middleware services are supported. For details about the message format, see Asynchronous notification message. Select one of the following methods to receive messages:
    // 
    // Activate and access EventBridge in the same region as Intelligent Media Management (IMM) to promptly receive task notifications. For more information, see IMM events.
    // Activate MNS in the same region as IMM and configure a subscription.
    shared_ptr<CreateBatchRequest::Notification> notification_ {};
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
    Darabonba::Json tags_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
