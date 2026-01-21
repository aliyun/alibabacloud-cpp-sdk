// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEVENTRULETARGETLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEVENTRULETARGETLISTRESPONSEBODY_HPP_
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
  class DescribeEventRuleTargetListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEventRuleTargetListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(ContactParameters, contactParameters_);
      DARABONBA_PTR_TO_JSON(FcParameters, fcParameters_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(MnsParameters, mnsParameters_);
      DARABONBA_PTR_TO_JSON(OpenApiParameters, openApiParameters_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SlsParameters, slsParameters_);
      DARABONBA_PTR_TO_JSON(WebhookParameters, webhookParameters_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEventRuleTargetListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(ContactParameters, contactParameters_);
      DARABONBA_PTR_FROM_JSON(FcParameters, fcParameters_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(MnsParameters, mnsParameters_);
      DARABONBA_PTR_FROM_JSON(OpenApiParameters, openApiParameters_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SlsParameters, slsParameters_);
      DARABONBA_PTR_FROM_JSON(WebhookParameters, webhookParameters_);
    };
    DescribeEventRuleTargetListResponseBody() = default ;
    DescribeEventRuleTargetListResponseBody(const DescribeEventRuleTargetListResponseBody &) = default ;
    DescribeEventRuleTargetListResponseBody(DescribeEventRuleTargetListResponseBody &&) = default ;
    DescribeEventRuleTargetListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEventRuleTargetListResponseBody() = default ;
    DescribeEventRuleTargetListResponseBody& operator=(const DescribeEventRuleTargetListResponseBody &) = default ;
    DescribeEventRuleTargetListResponseBody& operator=(DescribeEventRuleTargetListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class WebhookParameters : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const WebhookParameters& obj) { 
        DARABONBA_PTR_TO_JSON(WebhookParameter, webhookParameter_);
      };
      friend void from_json(const Darabonba::Json& j, WebhookParameters& obj) { 
        DARABONBA_PTR_FROM_JSON(WebhookParameter, webhookParameter_);
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
      class WebhookParameter : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const WebhookParameter& obj) { 
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(Method, method_);
          DARABONBA_PTR_TO_JSON(Protocol, protocol_);
          DARABONBA_PTR_TO_JSON(Url, url_);
        };
        friend void from_json(const Darabonba::Json& j, WebhookParameter& obj) { 
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(Method, method_);
          DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
          DARABONBA_PTR_FROM_JSON(Url, url_);
        };
        WebhookParameter() = default ;
        WebhookParameter(const WebhookParameter &) = default ;
        WebhookParameter(WebhookParameter &&) = default ;
        WebhookParameter(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~WebhookParameter() = default ;
        WebhookParameter& operator=(const WebhookParameter &) = default ;
        WebhookParameter& operator=(WebhookParameter &&) = default ;
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
        inline WebhookParameter& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // method Field Functions 
        bool hasMethod() const { return this->method_ != nullptr;};
        void deleteMethod() { this->method_ = nullptr;};
        inline string getMethod() const { DARABONBA_PTR_GET_DEFAULT(method_, "") };
        inline WebhookParameter& setMethod(string method) { DARABONBA_PTR_SET_VALUE(method_, method) };


        // protocol Field Functions 
        bool hasProtocol() const { return this->protocol_ != nullptr;};
        void deleteProtocol() { this->protocol_ = nullptr;};
        inline string getProtocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
        inline WebhookParameter& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


        // url Field Functions 
        bool hasUrl() const { return this->url_ != nullptr;};
        void deleteUrl() { this->url_ = nullptr;};
        inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
        inline WebhookParameter& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


      protected:
        // The ID of the recipient.
        shared_ptr<string> id_ {};
        // The HTTP request method. Valid values: GET and POST.
        shared_ptr<string> method_ {};
        // The protocol type.
        shared_ptr<string> protocol_ {};
        // The callback URL.
        shared_ptr<string> url_ {};
      };

      virtual bool empty() const override { return this->webhookParameter_ == nullptr; };
      // webhookParameter Field Functions 
      bool hasWebhookParameter() const { return this->webhookParameter_ != nullptr;};
      void deleteWebhookParameter() { this->webhookParameter_ = nullptr;};
      inline const vector<WebhookParameters::WebhookParameter> & getWebhookParameter() const { DARABONBA_PTR_GET_CONST(webhookParameter_, vector<WebhookParameters::WebhookParameter>) };
      inline vector<WebhookParameters::WebhookParameter> getWebhookParameter() { DARABONBA_PTR_GET(webhookParameter_, vector<WebhookParameters::WebhookParameter>) };
      inline WebhookParameters& setWebhookParameter(const vector<WebhookParameters::WebhookParameter> & webhookParameter) { DARABONBA_PTR_SET_VALUE(webhookParameter_, webhookParameter) };
      inline WebhookParameters& setWebhookParameter(vector<WebhookParameters::WebhookParameter> && webhookParameter) { DARABONBA_PTR_SET_RVALUE(webhookParameter_, webhookParameter) };


    protected:
      shared_ptr<vector<WebhookParameters::WebhookParameter>> webhookParameter_ {};
    };

    class SlsParameters : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SlsParameters& obj) { 
        DARABONBA_PTR_TO_JSON(SlsParameter, slsParameter_);
      };
      friend void from_json(const Darabonba::Json& j, SlsParameters& obj) { 
        DARABONBA_PTR_FROM_JSON(SlsParameter, slsParameter_);
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
      class SlsParameter : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SlsParameter& obj) { 
          DARABONBA_PTR_TO_JSON(Arn, arn_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(LogStore, logStore_);
          DARABONBA_PTR_TO_JSON(Project, project_);
          DARABONBA_PTR_TO_JSON(Region, region_);
        };
        friend void from_json(const Darabonba::Json& j, SlsParameter& obj) { 
          DARABONBA_PTR_FROM_JSON(Arn, arn_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(LogStore, logStore_);
          DARABONBA_PTR_FROM_JSON(Project, project_);
          DARABONBA_PTR_FROM_JSON(Region, region_);
        };
        SlsParameter() = default ;
        SlsParameter(const SlsParameter &) = default ;
        SlsParameter(SlsParameter &&) = default ;
        SlsParameter(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SlsParameter() = default ;
        SlsParameter& operator=(const SlsParameter &) = default ;
        SlsParameter& operator=(SlsParameter &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->arn_ == nullptr
        && this->id_ == nullptr && this->logStore_ == nullptr && this->project_ == nullptr && this->region_ == nullptr; };
        // arn Field Functions 
        bool hasArn() const { return this->arn_ != nullptr;};
        void deleteArn() { this->arn_ = nullptr;};
        inline string getArn() const { DARABONBA_PTR_GET_DEFAULT(arn_, "") };
        inline SlsParameter& setArn(string arn) { DARABONBA_PTR_SET_VALUE(arn_, arn) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline SlsParameter& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // logStore Field Functions 
        bool hasLogStore() const { return this->logStore_ != nullptr;};
        void deleteLogStore() { this->logStore_ = nullptr;};
        inline string getLogStore() const { DARABONBA_PTR_GET_DEFAULT(logStore_, "") };
        inline SlsParameter& setLogStore(string logStore) { DARABONBA_PTR_SET_VALUE(logStore_, logStore) };


        // project Field Functions 
        bool hasProject() const { return this->project_ != nullptr;};
        void deleteProject() { this->project_ = nullptr;};
        inline string getProject() const { DARABONBA_PTR_GET_DEFAULT(project_, "") };
        inline SlsParameter& setProject(string project) { DARABONBA_PTR_SET_VALUE(project_, project) };


        // region Field Functions 
        bool hasRegion() const { return this->region_ != nullptr;};
        void deleteRegion() { this->region_ = nullptr;};
        inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
        inline SlsParameter& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


      protected:
        // The ARN of the Log Service Logstore. 
        // 
        // Format: `arn:acs:${Service}:${Region}:${Account}:${ResourceType}/${ResourceId}`. Fields: 
        // 
        // - Service: the code of an Alibaba Cloud service
        // - Region: the region ID
        // - Account: the ID of an Alibaba Cloud account
        // - ResourceType: the resource type
        // - ResourceId: the resource ID
        shared_ptr<string> arn_ {};
        // The ID of the recipient.
        shared_ptr<string> id_ {};
        // The name of the Logstore.
        shared_ptr<string> logStore_ {};
        // The name of the project.
        shared_ptr<string> project_ {};
        // The ID of the region where the Log Service project resides.
        shared_ptr<string> region_ {};
      };

      virtual bool empty() const override { return this->slsParameter_ == nullptr; };
      // slsParameter Field Functions 
      bool hasSlsParameter() const { return this->slsParameter_ != nullptr;};
      void deleteSlsParameter() { this->slsParameter_ = nullptr;};
      inline const vector<SlsParameters::SlsParameter> & getSlsParameter() const { DARABONBA_PTR_GET_CONST(slsParameter_, vector<SlsParameters::SlsParameter>) };
      inline vector<SlsParameters::SlsParameter> getSlsParameter() { DARABONBA_PTR_GET(slsParameter_, vector<SlsParameters::SlsParameter>) };
      inline SlsParameters& setSlsParameter(const vector<SlsParameters::SlsParameter> & slsParameter) { DARABONBA_PTR_SET_VALUE(slsParameter_, slsParameter) };
      inline SlsParameters& setSlsParameter(vector<SlsParameters::SlsParameter> && slsParameter) { DARABONBA_PTR_SET_RVALUE(slsParameter_, slsParameter) };


    protected:
      shared_ptr<vector<SlsParameters::SlsParameter>> slsParameter_ {};
    };

    class OpenApiParameters : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const OpenApiParameters& obj) { 
        DARABONBA_PTR_TO_JSON(OpenApiParameters, openApiParameters_);
      };
      friend void from_json(const Darabonba::Json& j, OpenApiParameters& obj) { 
        DARABONBA_PTR_FROM_JSON(OpenApiParameters, openApiParameters_);
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
      class OpenApiParametersItem : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const OpenApiParametersItem& obj) { 
          DARABONBA_PTR_TO_JSON(Action, action_);
          DARABONBA_PTR_TO_JSON(Arn, arn_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(Product, product_);
          DARABONBA_PTR_TO_JSON(Region, region_);
          DARABONBA_PTR_TO_JSON(Role, role_);
          DARABONBA_PTR_TO_JSON(Version, version_);
        };
        friend void from_json(const Darabonba::Json& j, OpenApiParametersItem& obj) { 
          DARABONBA_PTR_FROM_JSON(Action, action_);
          DARABONBA_PTR_FROM_JSON(Arn, arn_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(Product, product_);
          DARABONBA_PTR_FROM_JSON(Region, region_);
          DARABONBA_PTR_FROM_JSON(Role, role_);
          DARABONBA_PTR_FROM_JSON(Version, version_);
        };
        OpenApiParametersItem() = default ;
        OpenApiParametersItem(const OpenApiParametersItem &) = default ;
        OpenApiParametersItem(OpenApiParametersItem &&) = default ;
        OpenApiParametersItem(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~OpenApiParametersItem() = default ;
        OpenApiParametersItem& operator=(const OpenApiParametersItem &) = default ;
        OpenApiParametersItem& operator=(OpenApiParametersItem &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->action_ == nullptr
        && this->arn_ == nullptr && this->id_ == nullptr && this->product_ == nullptr && this->region_ == nullptr && this->role_ == nullptr
        && this->version_ == nullptr; };
        // action Field Functions 
        bool hasAction() const { return this->action_ != nullptr;};
        void deleteAction() { this->action_ = nullptr;};
        inline string getAction() const { DARABONBA_PTR_GET_DEFAULT(action_, "") };
        inline OpenApiParametersItem& setAction(string action) { DARABONBA_PTR_SET_VALUE(action_, action) };


        // arn Field Functions 
        bool hasArn() const { return this->arn_ != nullptr;};
        void deleteArn() { this->arn_ = nullptr;};
        inline string getArn() const { DARABONBA_PTR_GET_DEFAULT(arn_, "") };
        inline OpenApiParametersItem& setArn(string arn) { DARABONBA_PTR_SET_VALUE(arn_, arn) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline OpenApiParametersItem& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // product Field Functions 
        bool hasProduct() const { return this->product_ != nullptr;};
        void deleteProduct() { this->product_ = nullptr;};
        inline string getProduct() const { DARABONBA_PTR_GET_DEFAULT(product_, "") };
        inline OpenApiParametersItem& setProduct(string product) { DARABONBA_PTR_SET_VALUE(product_, product) };


        // region Field Functions 
        bool hasRegion() const { return this->region_ != nullptr;};
        void deleteRegion() { this->region_ = nullptr;};
        inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
        inline OpenApiParametersItem& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


        // role Field Functions 
        bool hasRole() const { return this->role_ != nullptr;};
        void deleteRole() { this->role_ = nullptr;};
        inline string getRole() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
        inline OpenApiParametersItem& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


        // version Field Functions 
        bool hasVersion() const { return this->version_ != nullptr;};
        void deleteVersion() { this->version_ = nullptr;};
        inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
        inline OpenApiParametersItem& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


      protected:
        // The name of the API operation.
        shared_ptr<string> action_ {};
        // The ARN of the API operation. 
        // 
        // Format: `arn:acs:${Service}:${Region}:${Account}:${ResourceType}/${ResourceId}`. Fields: 
        // 
        // - Service: the code of an Alibaba Cloud service
        // - Region: the region ID
        // - Account: the ID of an Alibaba Cloud account
        // - ResourceType: the resource type
        // - ResourceId: the resource ID The ARN of the Log Service Logstore. 
        // 
        // Format: `arn:acs:${Service}:${Region}:${Account}:${ResourceType}/${ResourceId}`. Fields:
        // - Service: the code of an Alibaba Cloud service
        // - Region: the region ID
        // - Account: the ID of an Alibaba Cloud account
        // - ResourceType: the resource type
        // - ResourceId: the resource ID
        shared_ptr<string> arn_ {};
        // The ID of the recipient.
        shared_ptr<string> id_ {};
        // The ID of the cloud service to which the API operation belongs.
        shared_ptr<string> product_ {};
        // The region where the resource resides.
        shared_ptr<string> region_ {};
        // The name of the role.
        shared_ptr<string> role_ {};
        // The version of the API.
        shared_ptr<string> version_ {};
      };

      virtual bool empty() const override { return this->openApiParameters_ == nullptr; };
      // openApiParameters Field Functions 
      bool hasOpenApiParameters() const { return this->openApiParameters_ != nullptr;};
      void deleteOpenApiParameters() { this->openApiParameters_ = nullptr;};
      inline const vector<OpenApiParameters::OpenApiParametersItem> & getOpenApiParameters() const { DARABONBA_PTR_GET_CONST(openApiParameters_, vector<OpenApiParameters::OpenApiParametersItem>) };
      inline vector<OpenApiParameters::OpenApiParametersItem> getOpenApiParameters() { DARABONBA_PTR_GET(openApiParameters_, vector<OpenApiParameters::OpenApiParametersItem>) };
      inline OpenApiParameters& setOpenApiParameters(const vector<OpenApiParameters::OpenApiParametersItem> & openApiParameters) { DARABONBA_PTR_SET_VALUE(openApiParameters_, openApiParameters) };
      inline OpenApiParameters& setOpenApiParameters(vector<OpenApiParameters::OpenApiParametersItem> && openApiParameters) { DARABONBA_PTR_SET_RVALUE(openApiParameters_, openApiParameters) };


    protected:
      shared_ptr<vector<OpenApiParameters::OpenApiParametersItem>> openApiParameters_ {};
    };

    class MnsParameters : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const MnsParameters& obj) { 
        DARABONBA_PTR_TO_JSON(MnsParameter, mnsParameter_);
      };
      friend void from_json(const Darabonba::Json& j, MnsParameters& obj) { 
        DARABONBA_PTR_FROM_JSON(MnsParameter, mnsParameter_);
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
      class MnsParameter : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const MnsParameter& obj) { 
          DARABONBA_PTR_TO_JSON(Arn, arn_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(Queue, queue_);
          DARABONBA_PTR_TO_JSON(Region, region_);
          DARABONBA_PTR_TO_JSON(Topic, topic_);
        };
        friend void from_json(const Darabonba::Json& j, MnsParameter& obj) { 
          DARABONBA_PTR_FROM_JSON(Arn, arn_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(Queue, queue_);
          DARABONBA_PTR_FROM_JSON(Region, region_);
          DARABONBA_PTR_FROM_JSON(Topic, topic_);
        };
        MnsParameter() = default ;
        MnsParameter(const MnsParameter &) = default ;
        MnsParameter(MnsParameter &&) = default ;
        MnsParameter(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~MnsParameter() = default ;
        MnsParameter& operator=(const MnsParameter &) = default ;
        MnsParameter& operator=(MnsParameter &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->arn_ == nullptr
        && this->id_ == nullptr && this->queue_ == nullptr && this->region_ == nullptr && this->topic_ == nullptr; };
        // arn Field Functions 
        bool hasArn() const { return this->arn_ != nullptr;};
        void deleteArn() { this->arn_ = nullptr;};
        inline string getArn() const { DARABONBA_PTR_GET_DEFAULT(arn_, "") };
        inline MnsParameter& setArn(string arn) { DARABONBA_PTR_SET_VALUE(arn_, arn) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline MnsParameter& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // queue Field Functions 
        bool hasQueue() const { return this->queue_ != nullptr;};
        void deleteQueue() { this->queue_ = nullptr;};
        inline string getQueue() const { DARABONBA_PTR_GET_DEFAULT(queue_, "") };
        inline MnsParameter& setQueue(string queue) { DARABONBA_PTR_SET_VALUE(queue_, queue) };


        // region Field Functions 
        bool hasRegion() const { return this->region_ != nullptr;};
        void deleteRegion() { this->region_ = nullptr;};
        inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
        inline MnsParameter& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


        // topic Field Functions 
        bool hasTopic() const { return this->topic_ != nullptr;};
        void deleteTopic() { this->topic_ = nullptr;};
        inline string getTopic() const { DARABONBA_PTR_GET_DEFAULT(topic_, "") };
        inline MnsParameter& setTopic(string topic) { DARABONBA_PTR_SET_VALUE(topic_, topic) };


      protected:
        // The ARN of the MNS queue. 
        // 
        // Format: `arn:acs:${Service}:${Region}:${Account}:${ResourceType}/${ResourceId}`. Fields: 
        // 
        // - Service: the code of an Alibaba Cloud service
        // - Region: the region ID
        // - Account: the ID of an Alibaba Cloud account
        // - ResourceType: the resource type
        // - ResourceId: the resource ID
        shared_ptr<string> arn_ {};
        // The ID of the recipient.
        shared_ptr<string> id_ {};
        // The name of the SMQ queue.
        shared_ptr<string> queue_ {};
        // The region for SMQ.
        shared_ptr<string> region_ {};
        // The SMQ topic.
        shared_ptr<string> topic_ {};
      };

      virtual bool empty() const override { return this->mnsParameter_ == nullptr; };
      // mnsParameter Field Functions 
      bool hasMnsParameter() const { return this->mnsParameter_ != nullptr;};
      void deleteMnsParameter() { this->mnsParameter_ = nullptr;};
      inline const vector<MnsParameters::MnsParameter> & getMnsParameter() const { DARABONBA_PTR_GET_CONST(mnsParameter_, vector<MnsParameters::MnsParameter>) };
      inline vector<MnsParameters::MnsParameter> getMnsParameter() { DARABONBA_PTR_GET(mnsParameter_, vector<MnsParameters::MnsParameter>) };
      inline MnsParameters& setMnsParameter(const vector<MnsParameters::MnsParameter> & mnsParameter) { DARABONBA_PTR_SET_VALUE(mnsParameter_, mnsParameter) };
      inline MnsParameters& setMnsParameter(vector<MnsParameters::MnsParameter> && mnsParameter) { DARABONBA_PTR_SET_RVALUE(mnsParameter_, mnsParameter) };


    protected:
      shared_ptr<vector<MnsParameters::MnsParameter>> mnsParameter_ {};
    };

    class FcParameters : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const FcParameters& obj) { 
        DARABONBA_PTR_TO_JSON(FCParameter, FCParameter_);
      };
      friend void from_json(const Darabonba::Json& j, FcParameters& obj) { 
        DARABONBA_PTR_FROM_JSON(FCParameter, FCParameter_);
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
      class FCParameter : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const FCParameter& obj) { 
          DARABONBA_PTR_TO_JSON(Arn, arn_);
          DARABONBA_PTR_TO_JSON(FunctionName, functionName_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(Region, region_);
          DARABONBA_PTR_TO_JSON(ServiceName, serviceName_);
        };
        friend void from_json(const Darabonba::Json& j, FCParameter& obj) { 
          DARABONBA_PTR_FROM_JSON(Arn, arn_);
          DARABONBA_PTR_FROM_JSON(FunctionName, functionName_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(Region, region_);
          DARABONBA_PTR_FROM_JSON(ServiceName, serviceName_);
        };
        FCParameter() = default ;
        FCParameter(const FCParameter &) = default ;
        FCParameter(FCParameter &&) = default ;
        FCParameter(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~FCParameter() = default ;
        FCParameter& operator=(const FCParameter &) = default ;
        FCParameter& operator=(FCParameter &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->arn_ == nullptr
        && this->functionName_ == nullptr && this->id_ == nullptr && this->region_ == nullptr && this->serviceName_ == nullptr; };
        // arn Field Functions 
        bool hasArn() const { return this->arn_ != nullptr;};
        void deleteArn() { this->arn_ = nullptr;};
        inline string getArn() const { DARABONBA_PTR_GET_DEFAULT(arn_, "") };
        inline FCParameter& setArn(string arn) { DARABONBA_PTR_SET_VALUE(arn_, arn) };


        // functionName Field Functions 
        bool hasFunctionName() const { return this->functionName_ != nullptr;};
        void deleteFunctionName() { this->functionName_ = nullptr;};
        inline string getFunctionName() const { DARABONBA_PTR_GET_DEFAULT(functionName_, "") };
        inline FCParameter& setFunctionName(string functionName) { DARABONBA_PTR_SET_VALUE(functionName_, functionName) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline FCParameter& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // region Field Functions 
        bool hasRegion() const { return this->region_ != nullptr;};
        void deleteRegion() { this->region_ = nullptr;};
        inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
        inline FCParameter& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


        // serviceName Field Functions 
        bool hasServiceName() const { return this->serviceName_ != nullptr;};
        void deleteServiceName() { this->serviceName_ = nullptr;};
        inline string getServiceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
        inline FCParameter& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


      protected:
        // The Alibaba Cloud Resource Name (ARN) of the function. 
        // 
        // Format: `arn:acs:${Service}:${Region}:${Account}:${ResourceType}/${ResourceId}`. Fields: 
        // 
        // - Service: the code of an Alibaba Cloud service
        // - Region: the region ID
        // - Account: the ID of an Alibaba Cloud account
        // - ResourceType: the resource type
        // - ResourceId: the resource ID
        shared_ptr<string> arn_ {};
        // The name of the function.
        shared_ptr<string> functionName_ {};
        // The ID of the recipient.
        shared_ptr<string> id_ {};
        // The region where Function Compute is deployed.
        shared_ptr<string> region_ {};
        // The name of the Function Compute service.
        shared_ptr<string> serviceName_ {};
      };

      virtual bool empty() const override { return this->FCParameter_ == nullptr; };
      // FCParameter Field Functions 
      bool hasFCParameter() const { return this->FCParameter_ != nullptr;};
      void deleteFCParameter() { this->FCParameter_ = nullptr;};
      inline const vector<FcParameters::FCParameter> & getFCParameter() const { DARABONBA_PTR_GET_CONST(FCParameter_, vector<FcParameters::FCParameter>) };
      inline vector<FcParameters::FCParameter> getFCParameter() { DARABONBA_PTR_GET(FCParameter_, vector<FcParameters::FCParameter>) };
      inline FcParameters& setFCParameter(const vector<FcParameters::FCParameter> & fCParameter) { DARABONBA_PTR_SET_VALUE(FCParameter_, fCParameter) };
      inline FcParameters& setFCParameter(vector<FcParameters::FCParameter> && fCParameter) { DARABONBA_PTR_SET_RVALUE(FCParameter_, fCParameter) };


    protected:
      shared_ptr<vector<FcParameters::FCParameter>> FCParameter_ {};
    };

    class ContactParameters : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ContactParameters& obj) { 
        DARABONBA_PTR_TO_JSON(ContactParameter, contactParameter_);
      };
      friend void from_json(const Darabonba::Json& j, ContactParameters& obj) { 
        DARABONBA_PTR_FROM_JSON(ContactParameter, contactParameter_);
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
      class ContactParameter : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ContactParameter& obj) { 
          DARABONBA_PTR_TO_JSON(ContactGroupName, contactGroupName_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(Level, level_);
        };
        friend void from_json(const Darabonba::Json& j, ContactParameter& obj) { 
          DARABONBA_PTR_FROM_JSON(ContactGroupName, contactGroupName_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(Level, level_);
        };
        ContactParameter() = default ;
        ContactParameter(const ContactParameter &) = default ;
        ContactParameter(ContactParameter &&) = default ;
        ContactParameter(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ContactParameter() = default ;
        ContactParameter& operator=(const ContactParameter &) = default ;
        ContactParameter& operator=(ContactParameter &&) = default ;
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
        inline ContactParameter& setContactGroupName(string contactGroupName) { DARABONBA_PTR_SET_VALUE(contactGroupName_, contactGroupName) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline ContactParameter& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // level Field Functions 
        bool hasLevel() const { return this->level_ != nullptr;};
        void deleteLevel() { this->level_ = nullptr;};
        inline string getLevel() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
        inline ContactParameter& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


      protected:
        // The name of the alert group.
        shared_ptr<string> contactGroupName_ {};
        // The ID of the recipient.
        shared_ptr<string> id_ {};
        // The alert notification methods. Valid values:
        // 
        // 4: Alert notifications are sent by using DingTalk chatbots and emails.
        shared_ptr<string> level_ {};
      };

      virtual bool empty() const override { return this->contactParameter_ == nullptr; };
      // contactParameter Field Functions 
      bool hasContactParameter() const { return this->contactParameter_ != nullptr;};
      void deleteContactParameter() { this->contactParameter_ = nullptr;};
      inline const vector<ContactParameters::ContactParameter> & getContactParameter() const { DARABONBA_PTR_GET_CONST(contactParameter_, vector<ContactParameters::ContactParameter>) };
      inline vector<ContactParameters::ContactParameter> getContactParameter() { DARABONBA_PTR_GET(contactParameter_, vector<ContactParameters::ContactParameter>) };
      inline ContactParameters& setContactParameter(const vector<ContactParameters::ContactParameter> & contactParameter) { DARABONBA_PTR_SET_VALUE(contactParameter_, contactParameter) };
      inline ContactParameters& setContactParameter(vector<ContactParameters::ContactParameter> && contactParameter) { DARABONBA_PTR_SET_RVALUE(contactParameter_, contactParameter) };


    protected:
      shared_ptr<vector<ContactParameters::ContactParameter>> contactParameter_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->contactParameters_ == nullptr && this->fcParameters_ == nullptr && this->message_ == nullptr && this->mnsParameters_ == nullptr && this->openApiParameters_ == nullptr
        && this->requestId_ == nullptr && this->slsParameters_ == nullptr && this->webhookParameters_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeEventRuleTargetListResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // contactParameters Field Functions 
    bool hasContactParameters() const { return this->contactParameters_ != nullptr;};
    void deleteContactParameters() { this->contactParameters_ = nullptr;};
    inline const DescribeEventRuleTargetListResponseBody::ContactParameters & getContactParameters() const { DARABONBA_PTR_GET_CONST(contactParameters_, DescribeEventRuleTargetListResponseBody::ContactParameters) };
    inline DescribeEventRuleTargetListResponseBody::ContactParameters getContactParameters() { DARABONBA_PTR_GET(contactParameters_, DescribeEventRuleTargetListResponseBody::ContactParameters) };
    inline DescribeEventRuleTargetListResponseBody& setContactParameters(const DescribeEventRuleTargetListResponseBody::ContactParameters & contactParameters) { DARABONBA_PTR_SET_VALUE(contactParameters_, contactParameters) };
    inline DescribeEventRuleTargetListResponseBody& setContactParameters(DescribeEventRuleTargetListResponseBody::ContactParameters && contactParameters) { DARABONBA_PTR_SET_RVALUE(contactParameters_, contactParameters) };


    // fcParameters Field Functions 
    bool hasFcParameters() const { return this->fcParameters_ != nullptr;};
    void deleteFcParameters() { this->fcParameters_ = nullptr;};
    inline const DescribeEventRuleTargetListResponseBody::FcParameters & getFcParameters() const { DARABONBA_PTR_GET_CONST(fcParameters_, DescribeEventRuleTargetListResponseBody::FcParameters) };
    inline DescribeEventRuleTargetListResponseBody::FcParameters getFcParameters() { DARABONBA_PTR_GET(fcParameters_, DescribeEventRuleTargetListResponseBody::FcParameters) };
    inline DescribeEventRuleTargetListResponseBody& setFcParameters(const DescribeEventRuleTargetListResponseBody::FcParameters & fcParameters) { DARABONBA_PTR_SET_VALUE(fcParameters_, fcParameters) };
    inline DescribeEventRuleTargetListResponseBody& setFcParameters(DescribeEventRuleTargetListResponseBody::FcParameters && fcParameters) { DARABONBA_PTR_SET_RVALUE(fcParameters_, fcParameters) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeEventRuleTargetListResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // mnsParameters Field Functions 
    bool hasMnsParameters() const { return this->mnsParameters_ != nullptr;};
    void deleteMnsParameters() { this->mnsParameters_ = nullptr;};
    inline const DescribeEventRuleTargetListResponseBody::MnsParameters & getMnsParameters() const { DARABONBA_PTR_GET_CONST(mnsParameters_, DescribeEventRuleTargetListResponseBody::MnsParameters) };
    inline DescribeEventRuleTargetListResponseBody::MnsParameters getMnsParameters() { DARABONBA_PTR_GET(mnsParameters_, DescribeEventRuleTargetListResponseBody::MnsParameters) };
    inline DescribeEventRuleTargetListResponseBody& setMnsParameters(const DescribeEventRuleTargetListResponseBody::MnsParameters & mnsParameters) { DARABONBA_PTR_SET_VALUE(mnsParameters_, mnsParameters) };
    inline DescribeEventRuleTargetListResponseBody& setMnsParameters(DescribeEventRuleTargetListResponseBody::MnsParameters && mnsParameters) { DARABONBA_PTR_SET_RVALUE(mnsParameters_, mnsParameters) };


    // openApiParameters Field Functions 
    bool hasOpenApiParameters() const { return this->openApiParameters_ != nullptr;};
    void deleteOpenApiParameters() { this->openApiParameters_ = nullptr;};
    inline const DescribeEventRuleTargetListResponseBody::OpenApiParameters & getOpenApiParameters() const { DARABONBA_PTR_GET_CONST(openApiParameters_, DescribeEventRuleTargetListResponseBody::OpenApiParameters) };
    inline DescribeEventRuleTargetListResponseBody::OpenApiParameters getOpenApiParameters() { DARABONBA_PTR_GET(openApiParameters_, DescribeEventRuleTargetListResponseBody::OpenApiParameters) };
    inline DescribeEventRuleTargetListResponseBody& setOpenApiParameters(const DescribeEventRuleTargetListResponseBody::OpenApiParameters & openApiParameters) { DARABONBA_PTR_SET_VALUE(openApiParameters_, openApiParameters) };
    inline DescribeEventRuleTargetListResponseBody& setOpenApiParameters(DescribeEventRuleTargetListResponseBody::OpenApiParameters && openApiParameters) { DARABONBA_PTR_SET_RVALUE(openApiParameters_, openApiParameters) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeEventRuleTargetListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // slsParameters Field Functions 
    bool hasSlsParameters() const { return this->slsParameters_ != nullptr;};
    void deleteSlsParameters() { this->slsParameters_ = nullptr;};
    inline const DescribeEventRuleTargetListResponseBody::SlsParameters & getSlsParameters() const { DARABONBA_PTR_GET_CONST(slsParameters_, DescribeEventRuleTargetListResponseBody::SlsParameters) };
    inline DescribeEventRuleTargetListResponseBody::SlsParameters getSlsParameters() { DARABONBA_PTR_GET(slsParameters_, DescribeEventRuleTargetListResponseBody::SlsParameters) };
    inline DescribeEventRuleTargetListResponseBody& setSlsParameters(const DescribeEventRuleTargetListResponseBody::SlsParameters & slsParameters) { DARABONBA_PTR_SET_VALUE(slsParameters_, slsParameters) };
    inline DescribeEventRuleTargetListResponseBody& setSlsParameters(DescribeEventRuleTargetListResponseBody::SlsParameters && slsParameters) { DARABONBA_PTR_SET_RVALUE(slsParameters_, slsParameters) };


    // webhookParameters Field Functions 
    bool hasWebhookParameters() const { return this->webhookParameters_ != nullptr;};
    void deleteWebhookParameters() { this->webhookParameters_ = nullptr;};
    inline const DescribeEventRuleTargetListResponseBody::WebhookParameters & getWebhookParameters() const { DARABONBA_PTR_GET_CONST(webhookParameters_, DescribeEventRuleTargetListResponseBody::WebhookParameters) };
    inline DescribeEventRuleTargetListResponseBody::WebhookParameters getWebhookParameters() { DARABONBA_PTR_GET(webhookParameters_, DescribeEventRuleTargetListResponseBody::WebhookParameters) };
    inline DescribeEventRuleTargetListResponseBody& setWebhookParameters(const DescribeEventRuleTargetListResponseBody::WebhookParameters & webhookParameters) { DARABONBA_PTR_SET_VALUE(webhookParameters_, webhookParameters) };
    inline DescribeEventRuleTargetListResponseBody& setWebhookParameters(DescribeEventRuleTargetListResponseBody::WebhookParameters && webhookParameters) { DARABONBA_PTR_SET_RVALUE(webhookParameters_, webhookParameters) };


  protected:
    // The HTTP status code.
    // 
    // >  The status code 200 indicates that the call was successful.
    shared_ptr<string> code_ {};
    // The information about the recipients if alert notifications are sent to the alert contacts of an alert contact group.
    shared_ptr<DescribeEventRuleTargetListResponseBody::ContactParameters> contactParameters_ {};
    // The information about the recipients in Function Compute.
    shared_ptr<DescribeEventRuleTargetListResponseBody::FcParameters> fcParameters_ {};
    // The error message.
    shared_ptr<string> message_ {};
    // The notifications of Simple Message Queue (formerly MNS) (SMQ).
    shared_ptr<DescribeEventRuleTargetListResponseBody::MnsParameters> mnsParameters_ {};
    // The information about the recipients in OpenAPI Explorer.
    shared_ptr<DescribeEventRuleTargetListResponseBody::OpenApiParameters> openApiParameters_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The information about the recipients in Log Service.
    shared_ptr<DescribeEventRuleTargetListResponseBody::SlsParameters> slsParameters_ {};
    // The information about the recipients if alert notifications are sent by sending a request to a callback URL.
    shared_ptr<DescribeEventRuleTargetListResponseBody::WebhookParameters> webhookParameters_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
