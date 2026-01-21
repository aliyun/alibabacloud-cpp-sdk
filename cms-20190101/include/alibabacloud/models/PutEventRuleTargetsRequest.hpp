// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUTEVENTRULETARGETSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PUTEVENTRULETARGETSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class PutEventRuleTargetsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PutEventRuleTargetsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ContactParameters, contactParameters_);
      DARABONBA_PTR_TO_JSON(FcParameters, fcParameters_);
      DARABONBA_PTR_TO_JSON(MnsParameters, mnsParameters_);
      DARABONBA_PTR_TO_JSON(OpenApiParameters, openApiParameters_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
      DARABONBA_PTR_TO_JSON(SlsParameters, slsParameters_);
      DARABONBA_PTR_TO_JSON(WebhookParameters, webhookParameters_);
    };
    friend void from_json(const Darabonba::Json& j, PutEventRuleTargetsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ContactParameters, contactParameters_);
      DARABONBA_PTR_FROM_JSON(FcParameters, fcParameters_);
      DARABONBA_PTR_FROM_JSON(MnsParameters, mnsParameters_);
      DARABONBA_PTR_FROM_JSON(OpenApiParameters, openApiParameters_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
      DARABONBA_PTR_FROM_JSON(SlsParameters, slsParameters_);
      DARABONBA_PTR_FROM_JSON(WebhookParameters, webhookParameters_);
    };
    PutEventRuleTargetsRequest() = default ;
    PutEventRuleTargetsRequest(const PutEventRuleTargetsRequest &) = default ;
    PutEventRuleTargetsRequest(PutEventRuleTargetsRequest &&) = default ;
    PutEventRuleTargetsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PutEventRuleTargetsRequest() = default ;
    PutEventRuleTargetsRequest& operator=(const PutEventRuleTargetsRequest &) = default ;
    PutEventRuleTargetsRequest& operator=(PutEventRuleTargetsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class WebhookParameters : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const WebhookParameters& obj) { 
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(Method, method_);
        DARABONBA_PTR_TO_JSON(Protocol, protocol_);
        DARABONBA_PTR_TO_JSON(Url, url_);
      };
      friend void from_json(const Darabonba::Json& j, WebhookParameters& obj) { 
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(Method, method_);
        DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
        DARABONBA_PTR_FROM_JSON(Url, url_);
      };
      WebhookParameters() = default ;
      WebhookParameters(const WebhookParameters &) = default ;
      WebhookParameters(WebhookParameters &&) = default ;
      WebhookParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~WebhookParameters() = default ;
      WebhookParameters& operator=(const WebhookParameters &) = default ;
      WebhookParameters& operator=(WebhookParameters &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->id_ == nullptr
        && this->method_ == nullptr && this->protocol_ == nullptr && this->url_ == nullptr; };
      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline WebhookParameters& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // method Field Functions 
      bool hasMethod() const { return this->method_ != nullptr;};
      void deleteMethod() { this->method_ = nullptr;};
      inline string getMethod() const { DARABONBA_PTR_GET_DEFAULT(method_, "") };
      inline WebhookParameters& setMethod(string method) { DARABONBA_PTR_SET_VALUE(method_, method) };


      // protocol Field Functions 
      bool hasProtocol() const { return this->protocol_ != nullptr;};
      void deleteProtocol() { this->protocol_ = nullptr;};
      inline string getProtocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
      inline WebhookParameters& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


      // url Field Functions 
      bool hasUrl() const { return this->url_ != nullptr;};
      void deleteUrl() { this->url_ = nullptr;};
      inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
      inline WebhookParameters& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


    protected:
      // The ID of the recipient that receives alert notifications. Valid values of N: 1 to 5.
      shared_ptr<string> id_ {};
      // The HTTP request method. Valid values of N: 1 to 5.
      // 
      // Valid values: GET and POST.
      shared_ptr<string> method_ {};
      // The name of the protocol. Valid values of N: 1 to 5. Valid values:
      // 
      // *   http
      // *   telnet
      // *   ping
      shared_ptr<string> protocol_ {};
      // The callback URL. Valid values of N: 1 to 5.
      shared_ptr<string> url_ {};
    };

    class SlsParameters : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SlsParameters& obj) { 
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(LogStore, logStore_);
        DARABONBA_PTR_TO_JSON(Project, project_);
        DARABONBA_PTR_TO_JSON(Region, region_);
      };
      friend void from_json(const Darabonba::Json& j, SlsParameters& obj) { 
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(LogStore, logStore_);
        DARABONBA_PTR_FROM_JSON(Project, project_);
        DARABONBA_PTR_FROM_JSON(Region, region_);
      };
      SlsParameters() = default ;
      SlsParameters(const SlsParameters &) = default ;
      SlsParameters(SlsParameters &&) = default ;
      SlsParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SlsParameters() = default ;
      SlsParameters& operator=(const SlsParameters &) = default ;
      SlsParameters& operator=(SlsParameters &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->id_ == nullptr
        && this->logStore_ == nullptr && this->project_ == nullptr && this->region_ == nullptr; };
      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline SlsParameters& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // logStore Field Functions 
      bool hasLogStore() const { return this->logStore_ != nullptr;};
      void deleteLogStore() { this->logStore_ = nullptr;};
      inline string getLogStore() const { DARABONBA_PTR_GET_DEFAULT(logStore_, "") };
      inline SlsParameters& setLogStore(string logStore) { DARABONBA_PTR_SET_VALUE(logStore_, logStore) };


      // project Field Functions 
      bool hasProject() const { return this->project_ != nullptr;};
      void deleteProject() { this->project_ = nullptr;};
      inline string getProject() const { DARABONBA_PTR_GET_DEFAULT(project_, "") };
      inline SlsParameters& setProject(string project) { DARABONBA_PTR_SET_VALUE(project_, project) };


      // region Field Functions 
      bool hasRegion() const { return this->region_ != nullptr;};
      void deleteRegion() { this->region_ = nullptr;};
      inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
      inline SlsParameters& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    protected:
      // The ID of the recipient that receives alert notifications. Valid values of N: 1 to 5.
      shared_ptr<string> id_ {};
      // The name of the Simple Log Service Logstore. Valid values of N: 1 to 5.
      shared_ptr<string> logStore_ {};
      // The name of the Simple Log Service project. Valid values of N: 1 to 5.
      shared_ptr<string> project_ {};
      // The region where Simple Log Service is deployed. Valid values of N: 1 to 5.
      shared_ptr<string> region_ {};
    };

    class OpenApiParameters : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const OpenApiParameters& obj) { 
        DARABONBA_PTR_TO_JSON(Action, action_);
        DARABONBA_PTR_TO_JSON(Arn, arn_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(JsonParams, jsonParams_);
        DARABONBA_PTR_TO_JSON(Product, product_);
        DARABONBA_PTR_TO_JSON(Region, region_);
        DARABONBA_PTR_TO_JSON(Role, role_);
        DARABONBA_PTR_TO_JSON(Version, version_);
      };
      friend void from_json(const Darabonba::Json& j, OpenApiParameters& obj) { 
        DARABONBA_PTR_FROM_JSON(Action, action_);
        DARABONBA_PTR_FROM_JSON(Arn, arn_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(JsonParams, jsonParams_);
        DARABONBA_PTR_FROM_JSON(Product, product_);
        DARABONBA_PTR_FROM_JSON(Region, region_);
        DARABONBA_PTR_FROM_JSON(Role, role_);
        DARABONBA_PTR_FROM_JSON(Version, version_);
      };
      OpenApiParameters() = default ;
      OpenApiParameters(const OpenApiParameters &) = default ;
      OpenApiParameters(OpenApiParameters &&) = default ;
      OpenApiParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~OpenApiParameters() = default ;
      OpenApiParameters& operator=(const OpenApiParameters &) = default ;
      OpenApiParameters& operator=(OpenApiParameters &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->action_ == nullptr
        && this->arn_ == nullptr && this->id_ == nullptr && this->jsonParams_ == nullptr && this->product_ == nullptr && this->region_ == nullptr
        && this->role_ == nullptr && this->version_ == nullptr; };
      // action Field Functions 
      bool hasAction() const { return this->action_ != nullptr;};
      void deleteAction() { this->action_ = nullptr;};
      inline string getAction() const { DARABONBA_PTR_GET_DEFAULT(action_, "") };
      inline OpenApiParameters& setAction(string action) { DARABONBA_PTR_SET_VALUE(action_, action) };


      // arn Field Functions 
      bool hasArn() const { return this->arn_ != nullptr;};
      void deleteArn() { this->arn_ = nullptr;};
      inline string getArn() const { DARABONBA_PTR_GET_DEFAULT(arn_, "") };
      inline OpenApiParameters& setArn(string arn) { DARABONBA_PTR_SET_VALUE(arn_, arn) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline OpenApiParameters& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // jsonParams Field Functions 
      bool hasJsonParams() const { return this->jsonParams_ != nullptr;};
      void deleteJsonParams() { this->jsonParams_ = nullptr;};
      inline string getJsonParams() const { DARABONBA_PTR_GET_DEFAULT(jsonParams_, "") };
      inline OpenApiParameters& setJsonParams(string jsonParams) { DARABONBA_PTR_SET_VALUE(jsonParams_, jsonParams) };


      // product Field Functions 
      bool hasProduct() const { return this->product_ != nullptr;};
      void deleteProduct() { this->product_ = nullptr;};
      inline string getProduct() const { DARABONBA_PTR_GET_DEFAULT(product_, "") };
      inline OpenApiParameters& setProduct(string product) { DARABONBA_PTR_SET_VALUE(product_, product) };


      // region Field Functions 
      bool hasRegion() const { return this->region_ != nullptr;};
      void deleteRegion() { this->region_ = nullptr;};
      inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
      inline OpenApiParameters& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


      // role Field Functions 
      bool hasRole() const { return this->role_ != nullptr;};
      void deleteRole() { this->role_ = nullptr;};
      inline string getRole() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
      inline OpenApiParameters& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


      // version Field Functions 
      bool hasVersion() const { return this->version_ != nullptr;};
      void deleteVersion() { this->version_ = nullptr;};
      inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
      inline OpenApiParameters& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    protected:
      // The API name.
      shared_ptr<string> action_ {};
      // The Alibaba Cloud Resource Name (ARN) of the resource. Valid values of N: 1 to 5. Format: `arn:acs:${Service}:${Region}:${Account}:${ResourceType}/${ResourceId}`. Fields:
      // 
      // *   Service: the code of a cloud service
      // *   Region: the region ID
      // *   Account: the ID of an Alibaba Cloud account
      // *   ResourceType: the resource type
      // *   ResourceId: the resource ID
      shared_ptr<string> arn_ {};
      // The ID of the recipient that receives alert notifications sent by an API callback.
      shared_ptr<string> id_ {};
      // The parameters of the alert callback. Specify the parameters in the JSON format.
      shared_ptr<string> jsonParams_ {};
      // The ID of the cloud service to which the API operation belongs.
      shared_ptr<string> product_ {};
      // The region where the resource resides.
      shared_ptr<string> region_ {};
      // The name of the role.
      shared_ptr<string> role_ {};
      // The version of the API.
      shared_ptr<string> version_ {};
    };

    class MnsParameters : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const MnsParameters& obj) { 
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(Queue, queue_);
        DARABONBA_PTR_TO_JSON(Region, region_);
        DARABONBA_PTR_TO_JSON(Topic, topic_);
      };
      friend void from_json(const Darabonba::Json& j, MnsParameters& obj) { 
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(Queue, queue_);
        DARABONBA_PTR_FROM_JSON(Region, region_);
        DARABONBA_PTR_FROM_JSON(Topic, topic_);
      };
      MnsParameters() = default ;
      MnsParameters(const MnsParameters &) = default ;
      MnsParameters(MnsParameters &&) = default ;
      MnsParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~MnsParameters() = default ;
      MnsParameters& operator=(const MnsParameters &) = default ;
      MnsParameters& operator=(MnsParameters &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->id_ == nullptr
        && this->queue_ == nullptr && this->region_ == nullptr && this->topic_ == nullptr; };
      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline MnsParameters& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // queue Field Functions 
      bool hasQueue() const { return this->queue_ != nullptr;};
      void deleteQueue() { this->queue_ = nullptr;};
      inline string getQueue() const { DARABONBA_PTR_GET_DEFAULT(queue_, "") };
      inline MnsParameters& setQueue(string queue) { DARABONBA_PTR_SET_VALUE(queue_, queue) };


      // region Field Functions 
      bool hasRegion() const { return this->region_ != nullptr;};
      void deleteRegion() { this->region_ = nullptr;};
      inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
      inline MnsParameters& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


      // topic Field Functions 
      bool hasTopic() const { return this->topic_ != nullptr;};
      void deleteTopic() { this->topic_ = nullptr;};
      inline string getTopic() const { DARABONBA_PTR_GET_DEFAULT(topic_, "") };
      inline MnsParameters& setTopic(string topic) { DARABONBA_PTR_SET_VALUE(topic_, topic) };


    protected:
      // The ID of the recipient that receives alert notifications. Valid values of N: 1 to 5.
      shared_ptr<string> id_ {};
      // The name of the SMQ queue. Valid values of N: 1 to 5.
      shared_ptr<string> queue_ {};
      // The region for SMQ. Valid values of N: 1 to 5.
      shared_ptr<string> region_ {};
      // The SMQ topic.
      shared_ptr<string> topic_ {};
    };

    class FcParameters : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const FcParameters& obj) { 
        DARABONBA_PTR_TO_JSON(FunctionName, functionName_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(Region, region_);
        DARABONBA_PTR_TO_JSON(ServiceName, serviceName_);
      };
      friend void from_json(const Darabonba::Json& j, FcParameters& obj) { 
        DARABONBA_PTR_FROM_JSON(FunctionName, functionName_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(Region, region_);
        DARABONBA_PTR_FROM_JSON(ServiceName, serviceName_);
      };
      FcParameters() = default ;
      FcParameters(const FcParameters &) = default ;
      FcParameters(FcParameters &&) = default ;
      FcParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~FcParameters() = default ;
      FcParameters& operator=(const FcParameters &) = default ;
      FcParameters& operator=(FcParameters &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->functionName_ == nullptr
        && this->id_ == nullptr && this->region_ == nullptr && this->serviceName_ == nullptr; };
      // functionName Field Functions 
      bool hasFunctionName() const { return this->functionName_ != nullptr;};
      void deleteFunctionName() { this->functionName_ = nullptr;};
      inline string getFunctionName() const { DARABONBA_PTR_GET_DEFAULT(functionName_, "") };
      inline FcParameters& setFunctionName(string functionName) { DARABONBA_PTR_SET_VALUE(functionName_, functionName) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline FcParameters& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // region Field Functions 
      bool hasRegion() const { return this->region_ != nullptr;};
      void deleteRegion() { this->region_ = nullptr;};
      inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
      inline FcParameters& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


      // serviceName Field Functions 
      bool hasServiceName() const { return this->serviceName_ != nullptr;};
      void deleteServiceName() { this->serviceName_ = nullptr;};
      inline string getServiceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
      inline FcParameters& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


    protected:
      // The name of the function. Valid values of N: 1 to 5.
      shared_ptr<string> functionName_ {};
      // The ID of the recipient that receives alert notifications. Valid values of N: 1 to 5.
      shared_ptr<string> id_ {};
      // The region where Function Compute is deployed. Valid values of N: 1 to 5.
      shared_ptr<string> region_ {};
      // The name of the Function Compute service. Valid values of N: 1 to 5.
      shared_ptr<string> serviceName_ {};
    };

    class ContactParameters : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ContactParameters& obj) { 
        DARABONBA_PTR_TO_JSON(ContactGroupName, contactGroupName_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(Level, level_);
      };
      friend void from_json(const Darabonba::Json& j, ContactParameters& obj) { 
        DARABONBA_PTR_FROM_JSON(ContactGroupName, contactGroupName_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(Level, level_);
      };
      ContactParameters() = default ;
      ContactParameters(const ContactParameters &) = default ;
      ContactParameters(ContactParameters &&) = default ;
      ContactParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ContactParameters() = default ;
      ContactParameters& operator=(const ContactParameters &) = default ;
      ContactParameters& operator=(ContactParameters &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->contactGroupName_ == nullptr
        && this->id_ == nullptr && this->level_ == nullptr; };
      // contactGroupName Field Functions 
      bool hasContactGroupName() const { return this->contactGroupName_ != nullptr;};
      void deleteContactGroupName() { this->contactGroupName_ = nullptr;};
      inline string getContactGroupName() const { DARABONBA_PTR_GET_DEFAULT(contactGroupName_, "") };
      inline ContactParameters& setContactGroupName(string contactGroupName) { DARABONBA_PTR_SET_VALUE(contactGroupName_, contactGroupName) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline ContactParameters& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // level Field Functions 
      bool hasLevel() const { return this->level_ != nullptr;};
      void deleteLevel() { this->level_ = nullptr;};
      inline string getLevel() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
      inline ContactParameters& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


    protected:
      // The name of the alert contact group. Valid values of N: 1 to 5.
      shared_ptr<string> contactGroupName_ {};
      // The ID of the recipient that receives alert notifications. Valid values of N: 1 to 5.
      shared_ptr<string> id_ {};
      // The alert notification methods. Valid values of N: 1 to 5. Valid values:
      // 
      // 4: Alert notifications are sent by using DingTalk and emails.
      shared_ptr<string> level_ {};
    };

    virtual bool empty() const override { return this->contactParameters_ == nullptr
        && this->fcParameters_ == nullptr && this->mnsParameters_ == nullptr && this->openApiParameters_ == nullptr && this->regionId_ == nullptr && this->ruleName_ == nullptr
        && this->slsParameters_ == nullptr && this->webhookParameters_ == nullptr; };
    // contactParameters Field Functions 
    bool hasContactParameters() const { return this->contactParameters_ != nullptr;};
    void deleteContactParameters() { this->contactParameters_ = nullptr;};
    inline const vector<PutEventRuleTargetsRequest::ContactParameters> & getContactParameters() const { DARABONBA_PTR_GET_CONST(contactParameters_, vector<PutEventRuleTargetsRequest::ContactParameters>) };
    inline vector<PutEventRuleTargetsRequest::ContactParameters> getContactParameters() { DARABONBA_PTR_GET(contactParameters_, vector<PutEventRuleTargetsRequest::ContactParameters>) };
    inline PutEventRuleTargetsRequest& setContactParameters(const vector<PutEventRuleTargetsRequest::ContactParameters> & contactParameters) { DARABONBA_PTR_SET_VALUE(contactParameters_, contactParameters) };
    inline PutEventRuleTargetsRequest& setContactParameters(vector<PutEventRuleTargetsRequest::ContactParameters> && contactParameters) { DARABONBA_PTR_SET_RVALUE(contactParameters_, contactParameters) };


    // fcParameters Field Functions 
    bool hasFcParameters() const { return this->fcParameters_ != nullptr;};
    void deleteFcParameters() { this->fcParameters_ = nullptr;};
    inline const vector<PutEventRuleTargetsRequest::FcParameters> & getFcParameters() const { DARABONBA_PTR_GET_CONST(fcParameters_, vector<PutEventRuleTargetsRequest::FcParameters>) };
    inline vector<PutEventRuleTargetsRequest::FcParameters> getFcParameters() { DARABONBA_PTR_GET(fcParameters_, vector<PutEventRuleTargetsRequest::FcParameters>) };
    inline PutEventRuleTargetsRequest& setFcParameters(const vector<PutEventRuleTargetsRequest::FcParameters> & fcParameters) { DARABONBA_PTR_SET_VALUE(fcParameters_, fcParameters) };
    inline PutEventRuleTargetsRequest& setFcParameters(vector<PutEventRuleTargetsRequest::FcParameters> && fcParameters) { DARABONBA_PTR_SET_RVALUE(fcParameters_, fcParameters) };


    // mnsParameters Field Functions 
    bool hasMnsParameters() const { return this->mnsParameters_ != nullptr;};
    void deleteMnsParameters() { this->mnsParameters_ = nullptr;};
    inline const vector<PutEventRuleTargetsRequest::MnsParameters> & getMnsParameters() const { DARABONBA_PTR_GET_CONST(mnsParameters_, vector<PutEventRuleTargetsRequest::MnsParameters>) };
    inline vector<PutEventRuleTargetsRequest::MnsParameters> getMnsParameters() { DARABONBA_PTR_GET(mnsParameters_, vector<PutEventRuleTargetsRequest::MnsParameters>) };
    inline PutEventRuleTargetsRequest& setMnsParameters(const vector<PutEventRuleTargetsRequest::MnsParameters> & mnsParameters) { DARABONBA_PTR_SET_VALUE(mnsParameters_, mnsParameters) };
    inline PutEventRuleTargetsRequest& setMnsParameters(vector<PutEventRuleTargetsRequest::MnsParameters> && mnsParameters) { DARABONBA_PTR_SET_RVALUE(mnsParameters_, mnsParameters) };


    // openApiParameters Field Functions 
    bool hasOpenApiParameters() const { return this->openApiParameters_ != nullptr;};
    void deleteOpenApiParameters() { this->openApiParameters_ = nullptr;};
    inline const vector<PutEventRuleTargetsRequest::OpenApiParameters> & getOpenApiParameters() const { DARABONBA_PTR_GET_CONST(openApiParameters_, vector<PutEventRuleTargetsRequest::OpenApiParameters>) };
    inline vector<PutEventRuleTargetsRequest::OpenApiParameters> getOpenApiParameters() { DARABONBA_PTR_GET(openApiParameters_, vector<PutEventRuleTargetsRequest::OpenApiParameters>) };
    inline PutEventRuleTargetsRequest& setOpenApiParameters(const vector<PutEventRuleTargetsRequest::OpenApiParameters> & openApiParameters) { DARABONBA_PTR_SET_VALUE(openApiParameters_, openApiParameters) };
    inline PutEventRuleTargetsRequest& setOpenApiParameters(vector<PutEventRuleTargetsRequest::OpenApiParameters> && openApiParameters) { DARABONBA_PTR_SET_RVALUE(openApiParameters_, openApiParameters) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline PutEventRuleTargetsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline PutEventRuleTargetsRequest& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // slsParameters Field Functions 
    bool hasSlsParameters() const { return this->slsParameters_ != nullptr;};
    void deleteSlsParameters() { this->slsParameters_ = nullptr;};
    inline const vector<PutEventRuleTargetsRequest::SlsParameters> & getSlsParameters() const { DARABONBA_PTR_GET_CONST(slsParameters_, vector<PutEventRuleTargetsRequest::SlsParameters>) };
    inline vector<PutEventRuleTargetsRequest::SlsParameters> getSlsParameters() { DARABONBA_PTR_GET(slsParameters_, vector<PutEventRuleTargetsRequest::SlsParameters>) };
    inline PutEventRuleTargetsRequest& setSlsParameters(const vector<PutEventRuleTargetsRequest::SlsParameters> & slsParameters) { DARABONBA_PTR_SET_VALUE(slsParameters_, slsParameters) };
    inline PutEventRuleTargetsRequest& setSlsParameters(vector<PutEventRuleTargetsRequest::SlsParameters> && slsParameters) { DARABONBA_PTR_SET_RVALUE(slsParameters_, slsParameters) };


    // webhookParameters Field Functions 
    bool hasWebhookParameters() const { return this->webhookParameters_ != nullptr;};
    void deleteWebhookParameters() { this->webhookParameters_ = nullptr;};
    inline const vector<PutEventRuleTargetsRequest::WebhookParameters> & getWebhookParameters() const { DARABONBA_PTR_GET_CONST(webhookParameters_, vector<PutEventRuleTargetsRequest::WebhookParameters>) };
    inline vector<PutEventRuleTargetsRequest::WebhookParameters> getWebhookParameters() { DARABONBA_PTR_GET(webhookParameters_, vector<PutEventRuleTargetsRequest::WebhookParameters>) };
    inline PutEventRuleTargetsRequest& setWebhookParameters(const vector<PutEventRuleTargetsRequest::WebhookParameters> & webhookParameters) { DARABONBA_PTR_SET_VALUE(webhookParameters_, webhookParameters) };
    inline PutEventRuleTargetsRequest& setWebhookParameters(vector<PutEventRuleTargetsRequest::WebhookParameters> && webhookParameters) { DARABONBA_PTR_SET_RVALUE(webhookParameters_, webhookParameters) };


  protected:
    // The information about the alert contact groups that receive alert notifications.
    shared_ptr<vector<PutEventRuleTargetsRequest::ContactParameters>> contactParameters_ {};
    // The information about the recipients in Function Compute.
    shared_ptr<vector<PutEventRuleTargetsRequest::FcParameters>> fcParameters_ {};
    // The notifications of Simple Message Queue (formerly MNS) (SMQ).
    shared_ptr<vector<PutEventRuleTargetsRequest::MnsParameters>> mnsParameters_ {};
    // The parameters of API callback notification.
    shared_ptr<vector<PutEventRuleTargetsRequest::OpenApiParameters>> openApiParameters_ {};
    shared_ptr<string> regionId_ {};
    // The name of the alert rule.
    // 
    // This parameter is required.
    shared_ptr<string> ruleName_ {};
    // The information about the recipients in Simple Log Service.
    shared_ptr<vector<PutEventRuleTargetsRequest::SlsParameters>> slsParameters_ {};
    // The information about the callback URLs that are used to receive alert notifications.
    shared_ptr<vector<PutEventRuleTargetsRequest::WebhookParameters>> webhookParameters_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
