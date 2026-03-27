// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTALERTACTIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTALERTACTIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class ListAlertActionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAlertActionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(alertActions, alertActions_);
      DARABONBA_PTR_TO_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(total, total_);
    };
    friend void from_json(const Darabonba::Json& j, ListAlertActionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(alertActions, alertActions_);
      DARABONBA_PTR_FROM_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(total, total_);
    };
    ListAlertActionsResponseBody() = default ;
    ListAlertActionsResponseBody(const ListAlertActionsResponseBody &) = default ;
    ListAlertActionsResponseBody(ListAlertActionsResponseBody &&) = default ;
    ListAlertActionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAlertActionsResponseBody() = default ;
    ListAlertActionsResponseBody& operator=(const ListAlertActionsResponseBody &) = default ;
    ListAlertActionsResponseBody& operator=(ListAlertActionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AlertActions : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AlertActions& obj) { 
        DARABONBA_PTR_TO_JSON(alertActionId, alertActionId_);
        DARABONBA_PTR_TO_JSON(alertActionName, alertActionName_);
        DARABONBA_PTR_TO_JSON(ebParam, ebParam_);
        DARABONBA_PTR_TO_JSON(essParam, essParam_);
        DARABONBA_PTR_TO_JSON(fc3Param, fc3Param_);
        DARABONBA_PTR_TO_JSON(fcParam, fcParam_);
        DARABONBA_PTR_TO_JSON(mnsParam, mnsParam_);
        DARABONBA_PTR_TO_JSON(pagerDutyParam, pagerDutyParam_);
        DARABONBA_PTR_TO_JSON(slsParam, slsParam_);
        DARABONBA_PTR_TO_JSON(type, type_);
        DARABONBA_PTR_TO_JSON(webhookParam, webhookParam_);
      };
      friend void from_json(const Darabonba::Json& j, AlertActions& obj) { 
        DARABONBA_PTR_FROM_JSON(alertActionId, alertActionId_);
        DARABONBA_PTR_FROM_JSON(alertActionName, alertActionName_);
        DARABONBA_PTR_FROM_JSON(ebParam, ebParam_);
        DARABONBA_PTR_FROM_JSON(essParam, essParam_);
        DARABONBA_PTR_FROM_JSON(fc3Param, fc3Param_);
        DARABONBA_PTR_FROM_JSON(fcParam, fcParam_);
        DARABONBA_PTR_FROM_JSON(mnsParam, mnsParam_);
        DARABONBA_PTR_FROM_JSON(pagerDutyParam, pagerDutyParam_);
        DARABONBA_PTR_FROM_JSON(slsParam, slsParam_);
        DARABONBA_PTR_FROM_JSON(type, type_);
        DARABONBA_PTR_FROM_JSON(webhookParam, webhookParam_);
      };
      AlertActions() = default ;
      AlertActions(const AlertActions &) = default ;
      AlertActions(AlertActions &&) = default ;
      AlertActions(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AlertActions() = default ;
      AlertActions& operator=(const AlertActions &) = default ;
      AlertActions& operator=(AlertActions &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class WebhookParam : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const WebhookParam& obj) { 
          DARABONBA_PTR_TO_JSON(contentType, contentType_);
          DARABONBA_PTR_TO_JSON(headers, headers_);
          DARABONBA_PTR_TO_JSON(method, method_);
          DARABONBA_PTR_TO_JSON(url, url_);
        };
        friend void from_json(const Darabonba::Json& j, WebhookParam& obj) { 
          DARABONBA_PTR_FROM_JSON(contentType, contentType_);
          DARABONBA_PTR_FROM_JSON(headers, headers_);
          DARABONBA_PTR_FROM_JSON(method, method_);
          DARABONBA_PTR_FROM_JSON(url, url_);
        };
        WebhookParam() = default ;
        WebhookParam(const WebhookParam &) = default ;
        WebhookParam(WebhookParam &&) = default ;
        WebhookParam(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~WebhookParam() = default ;
        WebhookParam& operator=(const WebhookParam &) = default ;
        WebhookParam& operator=(WebhookParam &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->contentType_ == nullptr
        && this->headers_ == nullptr && this->method_ == nullptr && this->url_ == nullptr; };
        // contentType Field Functions 
        bool hasContentType() const { return this->contentType_ != nullptr;};
        void deleteContentType() { this->contentType_ = nullptr;};
        inline string getContentType() const { DARABONBA_PTR_GET_DEFAULT(contentType_, "") };
        inline WebhookParam& setContentType(string contentType) { DARABONBA_PTR_SET_VALUE(contentType_, contentType) };


        // headers Field Functions 
        bool hasHeaders() const { return this->headers_ != nullptr;};
        void deleteHeaders() { this->headers_ = nullptr;};
        inline const map<string, string> & getHeaders() const { DARABONBA_PTR_GET_CONST(headers_, map<string, string>) };
        inline map<string, string> getHeaders() { DARABONBA_PTR_GET(headers_, map<string, string>) };
        inline WebhookParam& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
        inline WebhookParam& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


        // method Field Functions 
        bool hasMethod() const { return this->method_ != nullptr;};
        void deleteMethod() { this->method_ = nullptr;};
        inline string getMethod() const { DARABONBA_PTR_GET_DEFAULT(method_, "") };
        inline WebhookParam& setMethod(string method) { DARABONBA_PTR_SET_VALUE(method_, method) };


        // url Field Functions 
        bool hasUrl() const { return this->url_ != nullptr;};
        void deleteUrl() { this->url_ = nullptr;};
        inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
        inline WebhookParam& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


      protected:
        // Data format, effective when the request method is POST.
        shared_ptr<string> contentType_ {};
        // Request headers.
        shared_ptr<map<string, string>> headers_ {};
        // Webhook request method.
        shared_ptr<string> method_ {};
        // The URL address for the alarm callback.
        shared_ptr<string> url_ {};
      };

      class SlsParam : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SlsParam& obj) { 
          DARABONBA_PTR_TO_JSON(logstore, logstore_);
          DARABONBA_PTR_TO_JSON(project, project_);
          DARABONBA_PTR_TO_JSON(regionId, regionId_);
        };
        friend void from_json(const Darabonba::Json& j, SlsParam& obj) { 
          DARABONBA_PTR_FROM_JSON(logstore, logstore_);
          DARABONBA_PTR_FROM_JSON(project, project_);
          DARABONBA_PTR_FROM_JSON(regionId, regionId_);
        };
        SlsParam() = default ;
        SlsParam(const SlsParam &) = default ;
        SlsParam(SlsParam &&) = default ;
        SlsParam(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SlsParam() = default ;
        SlsParam& operator=(const SlsParam &) = default ;
        SlsParam& operator=(SlsParam &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->logstore_ == nullptr
        && this->project_ == nullptr && this->regionId_ == nullptr; };
        // logstore Field Functions 
        bool hasLogstore() const { return this->logstore_ != nullptr;};
        void deleteLogstore() { this->logstore_ = nullptr;};
        inline string getLogstore() const { DARABONBA_PTR_GET_DEFAULT(logstore_, "") };
        inline SlsParam& setLogstore(string logstore) { DARABONBA_PTR_SET_VALUE(logstore_, logstore) };


        // project Field Functions 
        bool hasProject() const { return this->project_ != nullptr;};
        void deleteProject() { this->project_ = nullptr;};
        inline string getProject() const { DARABONBA_PTR_GET_DEFAULT(project_, "") };
        inline SlsParam& setProject(string project) { DARABONBA_PTR_SET_VALUE(project_, project) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline SlsParam& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      protected:
        // Logstore name of the Log Service.
        shared_ptr<string> logstore_ {};
        // Log Service project name.
        shared_ptr<string> project_ {};
        // Region ID.
        shared_ptr<string> regionId_ {};
      };

      class PagerDutyParam : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PagerDutyParam& obj) { 
          DARABONBA_PTR_TO_JSON(key, key_);
          DARABONBA_PTR_TO_JSON(url, url_);
        };
        friend void from_json(const Darabonba::Json& j, PagerDutyParam& obj) { 
          DARABONBA_PTR_FROM_JSON(key, key_);
          DARABONBA_PTR_FROM_JSON(url, url_);
        };
        PagerDutyParam() = default ;
        PagerDutyParam(const PagerDutyParam &) = default ;
        PagerDutyParam(PagerDutyParam &&) = default ;
        PagerDutyParam(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~PagerDutyParam() = default ;
        PagerDutyParam& operator=(const PagerDutyParam &) = default ;
        PagerDutyParam& operator=(PagerDutyParam &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->key_ == nullptr
        && this->url_ == nullptr; };
        // key Field Functions 
        bool hasKey() const { return this->key_ != nullptr;};
        void deleteKey() { this->key_ = nullptr;};
        inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
        inline PagerDutyParam& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


        // url Field Functions 
        bool hasUrl() const { return this->url_ != nullptr;};
        void deleteUrl() { this->url_ = nullptr;};
        inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
        inline PagerDutyParam& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


      protected:
        // Integration key for PagerDuty.
        shared_ptr<string> key_ {};
        // Integration webhook for PagerDuty. Supports V1 and V2 versions.
        shared_ptr<string> url_ {};
      };

      class MnsParam : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const MnsParam& obj) { 
          DARABONBA_PTR_TO_JSON(mnsType, mnsType_);
          DARABONBA_PTR_TO_JSON(name, name_);
          DARABONBA_PTR_TO_JSON(regionId, regionId_);
        };
        friend void from_json(const Darabonba::Json& j, MnsParam& obj) { 
          DARABONBA_PTR_FROM_JSON(mnsType, mnsType_);
          DARABONBA_PTR_FROM_JSON(name, name_);
          DARABONBA_PTR_FROM_JSON(regionId, regionId_);
        };
        MnsParam() = default ;
        MnsParam(const MnsParam &) = default ;
        MnsParam(MnsParam &&) = default ;
        MnsParam(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~MnsParam() = default ;
        MnsParam& operator=(const MnsParam &) = default ;
        MnsParam& operator=(MnsParam &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->mnsType_ == nullptr
        && this->name_ == nullptr && this->regionId_ == nullptr; };
        // mnsType Field Functions 
        bool hasMnsType() const { return this->mnsType_ != nullptr;};
        void deleteMnsType() { this->mnsType_ = nullptr;};
        inline string getMnsType() const { DARABONBA_PTR_GET_DEFAULT(mnsType_, "") };
        inline MnsParam& setMnsType(string mnsType) { DARABONBA_PTR_SET_VALUE(mnsType_, mnsType) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline MnsParam& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline MnsParam& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      protected:
        // Resource type of the Lightweight Message Queue (formerly MNS).
        shared_ptr<string> mnsType_ {};
        // Resource name.
        // 
        // - If the resource type is queue, the resource name is the queue name.
        // - If the resource type is topic, the resource name is the topic name.
        shared_ptr<string> name_ {};
        // Region ID.
        shared_ptr<string> regionId_ {};
      };

      class FcParam : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const FcParam& obj) { 
          DARABONBA_PTR_TO_JSON(function, function_);
          DARABONBA_PTR_TO_JSON(regionId, regionId_);
          DARABONBA_PTR_TO_JSON(service, service_);
        };
        friend void from_json(const Darabonba::Json& j, FcParam& obj) { 
          DARABONBA_PTR_FROM_JSON(function, function_);
          DARABONBA_PTR_FROM_JSON(regionId, regionId_);
          DARABONBA_PTR_FROM_JSON(service, service_);
        };
        FcParam() = default ;
        FcParam(const FcParam &) = default ;
        FcParam(FcParam &&) = default ;
        FcParam(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~FcParam() = default ;
        FcParam& operator=(const FcParam &) = default ;
        FcParam& operator=(FcParam &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->function_ == nullptr
        && this->regionId_ == nullptr && this->service_ == nullptr; };
        // function Field Functions 
        bool hasFunction() const { return this->function_ != nullptr;};
        void deleteFunction() { this->function_ = nullptr;};
        inline string getFunction() const { DARABONBA_PTR_GET_DEFAULT(function_, "") };
        inline FcParam& setFunction(string function) { DARABONBA_PTR_SET_VALUE(function_, function) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline FcParam& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


        // service Field Functions 
        bool hasService() const { return this->service_ != nullptr;};
        void deleteService() { this->service_ = nullptr;};
        inline string getService() const { DARABONBA_PTR_GET_DEFAULT(service_, "") };
        inline FcParam& setService(string service) { DARABONBA_PTR_SET_VALUE(service_, service) };


      protected:
        // Function name in the Function Compute service.
        shared_ptr<string> function_ {};
        // Region ID.
        shared_ptr<string> regionId_ {};
        // Function Compute service name.
        shared_ptr<string> service_ {};
      };

      class Fc3Param : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Fc3Param& obj) { 
          DARABONBA_PTR_TO_JSON(function, function_);
          DARABONBA_PTR_TO_JSON(qualifier, qualifier_);
          DARABONBA_PTR_TO_JSON(regionId, regionId_);
        };
        friend void from_json(const Darabonba::Json& j, Fc3Param& obj) { 
          DARABONBA_PTR_FROM_JSON(function, function_);
          DARABONBA_PTR_FROM_JSON(qualifier, qualifier_);
          DARABONBA_PTR_FROM_JSON(regionId, regionId_);
        };
        Fc3Param() = default ;
        Fc3Param(const Fc3Param &) = default ;
        Fc3Param(Fc3Param &&) = default ;
        Fc3Param(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Fc3Param() = default ;
        Fc3Param& operator=(const Fc3Param &) = default ;
        Fc3Param& operator=(Fc3Param &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->function_ == nullptr
        && this->qualifier_ == nullptr && this->regionId_ == nullptr; };
        // function Field Functions 
        bool hasFunction() const { return this->function_ != nullptr;};
        void deleteFunction() { this->function_ = nullptr;};
        inline string getFunction() const { DARABONBA_PTR_GET_DEFAULT(function_, "") };
        inline Fc3Param& setFunction(string function) { DARABONBA_PTR_SET_VALUE(function_, function) };


        // qualifier Field Functions 
        bool hasQualifier() const { return this->qualifier_ != nullptr;};
        void deleteQualifier() { this->qualifier_ = nullptr;};
        inline string getQualifier() const { DARABONBA_PTR_GET_DEFAULT(qualifier_, "") };
        inline Fc3Param& setQualifier(string qualifier) { DARABONBA_PTR_SET_VALUE(qualifier_, qualifier) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline Fc3Param& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      protected:
        // Function name of the Function Compute service.
        shared_ptr<string> function_ {};
        // Version or alias of the function.
        shared_ptr<string> qualifier_ {};
        // Region ID.
        shared_ptr<string> regionId_ {};
      };

      class EssParam : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const EssParam& obj) { 
          DARABONBA_PTR_TO_JSON(essGroupId, essGroupId_);
          DARABONBA_PTR_TO_JSON(essRuleId, essRuleId_);
          DARABONBA_PTR_TO_JSON(regionId, regionId_);
        };
        friend void from_json(const Darabonba::Json& j, EssParam& obj) { 
          DARABONBA_PTR_FROM_JSON(essGroupId, essGroupId_);
          DARABONBA_PTR_FROM_JSON(essRuleId, essRuleId_);
          DARABONBA_PTR_FROM_JSON(regionId, regionId_);
        };
        EssParam() = default ;
        EssParam(const EssParam &) = default ;
        EssParam(EssParam &&) = default ;
        EssParam(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~EssParam() = default ;
        EssParam& operator=(const EssParam &) = default ;
        EssParam& operator=(EssParam &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->essGroupId_ == nullptr
        && this->essRuleId_ == nullptr && this->regionId_ == nullptr; };
        // essGroupId Field Functions 
        bool hasEssGroupId() const { return this->essGroupId_ != nullptr;};
        void deleteEssGroupId() { this->essGroupId_ = nullptr;};
        inline string getEssGroupId() const { DARABONBA_PTR_GET_DEFAULT(essGroupId_, "") };
        inline EssParam& setEssGroupId(string essGroupId) { DARABONBA_PTR_SET_VALUE(essGroupId_, essGroupId) };


        // essRuleId Field Functions 
        bool hasEssRuleId() const { return this->essRuleId_ != nullptr;};
        void deleteEssRuleId() { this->essRuleId_ = nullptr;};
        inline string getEssRuleId() const { DARABONBA_PTR_GET_DEFAULT(essRuleId_, "") };
        inline EssParam& setEssRuleId(string essRuleId) { DARABONBA_PTR_SET_VALUE(essRuleId_, essRuleId) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline EssParam& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      protected:
        // Elastic scaling group ID.
        shared_ptr<string> essGroupId_ {};
        // Elastic scaling rule ID.
        shared_ptr<string> essRuleId_ {};
        // Region ID.
        shared_ptr<string> regionId_ {};
      };

      class EbParam : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const EbParam& obj) { 
          DARABONBA_PTR_TO_JSON(ebSource, ebSource_);
          DARABONBA_PTR_TO_JSON(eventBusName, eventBusName_);
          DARABONBA_PTR_TO_JSON(regionId, regionId_);
          DARABONBA_PTR_TO_JSON(subject, subject_);
        };
        friend void from_json(const Darabonba::Json& j, EbParam& obj) { 
          DARABONBA_PTR_FROM_JSON(ebSource, ebSource_);
          DARABONBA_PTR_FROM_JSON(eventBusName, eventBusName_);
          DARABONBA_PTR_FROM_JSON(regionId, regionId_);
          DARABONBA_PTR_FROM_JSON(subject, subject_);
        };
        EbParam() = default ;
        EbParam(const EbParam &) = default ;
        EbParam(EbParam &&) = default ;
        EbParam(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~EbParam() = default ;
        EbParam& operator=(const EbParam &) = default ;
        EbParam& operator=(EbParam &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->ebSource_ == nullptr
        && this->eventBusName_ == nullptr && this->regionId_ == nullptr && this->subject_ == nullptr; };
        // ebSource Field Functions 
        bool hasEbSource() const { return this->ebSource_ != nullptr;};
        void deleteEbSource() { this->ebSource_ = nullptr;};
        inline string getEbSource() const { DARABONBA_PTR_GET_DEFAULT(ebSource_, "") };
        inline EbParam& setEbSource(string ebSource) { DARABONBA_PTR_SET_VALUE(ebSource_, ebSource) };


        // eventBusName Field Functions 
        bool hasEventBusName() const { return this->eventBusName_ != nullptr;};
        void deleteEventBusName() { this->eventBusName_ = nullptr;};
        inline string getEventBusName() const { DARABONBA_PTR_GET_DEFAULT(eventBusName_, "") };
        inline EbParam& setEventBusName(string eventBusName) { DARABONBA_PTR_SET_VALUE(eventBusName_, eventBusName) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline EbParam& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


        // subject Field Functions 
        bool hasSubject() const { return this->subject_ != nullptr;};
        void deleteSubject() { this->subject_ = nullptr;};
        inline string getSubject() const { DARABONBA_PTR_GET_DEFAULT(subject_, "") };
        inline EbParam& setSubject(string subject) { DARABONBA_PTR_SET_VALUE(subject_, subject) };


      protected:
        // Event source.
        shared_ptr<string> ebSource_ {};
        // Event bus name.
        shared_ptr<string> eventBusName_ {};
        // Region ID.
        shared_ptr<string> regionId_ {};
        // Subject.
        shared_ptr<string> subject_ {};
      };

      virtual bool empty() const override { return this->alertActionId_ == nullptr
        && this->alertActionName_ == nullptr && this->ebParam_ == nullptr && this->essParam_ == nullptr && this->fc3Param_ == nullptr && this->fcParam_ == nullptr
        && this->mnsParam_ == nullptr && this->pagerDutyParam_ == nullptr && this->slsParam_ == nullptr && this->type_ == nullptr && this->webhookParam_ == nullptr; };
      // alertActionId Field Functions 
      bool hasAlertActionId() const { return this->alertActionId_ != nullptr;};
      void deleteAlertActionId() { this->alertActionId_ = nullptr;};
      inline string getAlertActionId() const { DARABONBA_PTR_GET_DEFAULT(alertActionId_, "") };
      inline AlertActions& setAlertActionId(string alertActionId) { DARABONBA_PTR_SET_VALUE(alertActionId_, alertActionId) };


      // alertActionName Field Functions 
      bool hasAlertActionName() const { return this->alertActionName_ != nullptr;};
      void deleteAlertActionName() { this->alertActionName_ = nullptr;};
      inline string getAlertActionName() const { DARABONBA_PTR_GET_DEFAULT(alertActionName_, "") };
      inline AlertActions& setAlertActionName(string alertActionName) { DARABONBA_PTR_SET_VALUE(alertActionName_, alertActionName) };


      // ebParam Field Functions 
      bool hasEbParam() const { return this->ebParam_ != nullptr;};
      void deleteEbParam() { this->ebParam_ = nullptr;};
      inline const AlertActions::EbParam & getEbParam() const { DARABONBA_PTR_GET_CONST(ebParam_, AlertActions::EbParam) };
      inline AlertActions::EbParam getEbParam() { DARABONBA_PTR_GET(ebParam_, AlertActions::EbParam) };
      inline AlertActions& setEbParam(const AlertActions::EbParam & ebParam) { DARABONBA_PTR_SET_VALUE(ebParam_, ebParam) };
      inline AlertActions& setEbParam(AlertActions::EbParam && ebParam) { DARABONBA_PTR_SET_RVALUE(ebParam_, ebParam) };


      // essParam Field Functions 
      bool hasEssParam() const { return this->essParam_ != nullptr;};
      void deleteEssParam() { this->essParam_ = nullptr;};
      inline const AlertActions::EssParam & getEssParam() const { DARABONBA_PTR_GET_CONST(essParam_, AlertActions::EssParam) };
      inline AlertActions::EssParam getEssParam() { DARABONBA_PTR_GET(essParam_, AlertActions::EssParam) };
      inline AlertActions& setEssParam(const AlertActions::EssParam & essParam) { DARABONBA_PTR_SET_VALUE(essParam_, essParam) };
      inline AlertActions& setEssParam(AlertActions::EssParam && essParam) { DARABONBA_PTR_SET_RVALUE(essParam_, essParam) };


      // fc3Param Field Functions 
      bool hasFc3Param() const { return this->fc3Param_ != nullptr;};
      void deleteFc3Param() { this->fc3Param_ = nullptr;};
      inline const AlertActions::Fc3Param & getFc3Param() const { DARABONBA_PTR_GET_CONST(fc3Param_, AlertActions::Fc3Param) };
      inline AlertActions::Fc3Param getFc3Param() { DARABONBA_PTR_GET(fc3Param_, AlertActions::Fc3Param) };
      inline AlertActions& setFc3Param(const AlertActions::Fc3Param & fc3Param) { DARABONBA_PTR_SET_VALUE(fc3Param_, fc3Param) };
      inline AlertActions& setFc3Param(AlertActions::Fc3Param && fc3Param) { DARABONBA_PTR_SET_RVALUE(fc3Param_, fc3Param) };


      // fcParam Field Functions 
      bool hasFcParam() const { return this->fcParam_ != nullptr;};
      void deleteFcParam() { this->fcParam_ = nullptr;};
      inline const AlertActions::FcParam & getFcParam() const { DARABONBA_PTR_GET_CONST(fcParam_, AlertActions::FcParam) };
      inline AlertActions::FcParam getFcParam() { DARABONBA_PTR_GET(fcParam_, AlertActions::FcParam) };
      inline AlertActions& setFcParam(const AlertActions::FcParam & fcParam) { DARABONBA_PTR_SET_VALUE(fcParam_, fcParam) };
      inline AlertActions& setFcParam(AlertActions::FcParam && fcParam) { DARABONBA_PTR_SET_RVALUE(fcParam_, fcParam) };


      // mnsParam Field Functions 
      bool hasMnsParam() const { return this->mnsParam_ != nullptr;};
      void deleteMnsParam() { this->mnsParam_ = nullptr;};
      inline const AlertActions::MnsParam & getMnsParam() const { DARABONBA_PTR_GET_CONST(mnsParam_, AlertActions::MnsParam) };
      inline AlertActions::MnsParam getMnsParam() { DARABONBA_PTR_GET(mnsParam_, AlertActions::MnsParam) };
      inline AlertActions& setMnsParam(const AlertActions::MnsParam & mnsParam) { DARABONBA_PTR_SET_VALUE(mnsParam_, mnsParam) };
      inline AlertActions& setMnsParam(AlertActions::MnsParam && mnsParam) { DARABONBA_PTR_SET_RVALUE(mnsParam_, mnsParam) };


      // pagerDutyParam Field Functions 
      bool hasPagerDutyParam() const { return this->pagerDutyParam_ != nullptr;};
      void deletePagerDutyParam() { this->pagerDutyParam_ = nullptr;};
      inline const AlertActions::PagerDutyParam & getPagerDutyParam() const { DARABONBA_PTR_GET_CONST(pagerDutyParam_, AlertActions::PagerDutyParam) };
      inline AlertActions::PagerDutyParam getPagerDutyParam() { DARABONBA_PTR_GET(pagerDutyParam_, AlertActions::PagerDutyParam) };
      inline AlertActions& setPagerDutyParam(const AlertActions::PagerDutyParam & pagerDutyParam) { DARABONBA_PTR_SET_VALUE(pagerDutyParam_, pagerDutyParam) };
      inline AlertActions& setPagerDutyParam(AlertActions::PagerDutyParam && pagerDutyParam) { DARABONBA_PTR_SET_RVALUE(pagerDutyParam_, pagerDutyParam) };


      // slsParam Field Functions 
      bool hasSlsParam() const { return this->slsParam_ != nullptr;};
      void deleteSlsParam() { this->slsParam_ = nullptr;};
      inline const AlertActions::SlsParam & getSlsParam() const { DARABONBA_PTR_GET_CONST(slsParam_, AlertActions::SlsParam) };
      inline AlertActions::SlsParam getSlsParam() { DARABONBA_PTR_GET(slsParam_, AlertActions::SlsParam) };
      inline AlertActions& setSlsParam(const AlertActions::SlsParam & slsParam) { DARABONBA_PTR_SET_VALUE(slsParam_, slsParam) };
      inline AlertActions& setSlsParam(AlertActions::SlsParam && slsParam) { DARABONBA_PTR_SET_RVALUE(slsParam_, slsParam) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline AlertActions& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // webhookParam Field Functions 
      bool hasWebhookParam() const { return this->webhookParam_ != nullptr;};
      void deleteWebhookParam() { this->webhookParam_ = nullptr;};
      inline const AlertActions::WebhookParam & getWebhookParam() const { DARABONBA_PTR_GET_CONST(webhookParam_, AlertActions::WebhookParam) };
      inline AlertActions::WebhookParam getWebhookParam() { DARABONBA_PTR_GET(webhookParam_, AlertActions::WebhookParam) };
      inline AlertActions& setWebhookParam(const AlertActions::WebhookParam & webhookParam) { DARABONBA_PTR_SET_VALUE(webhookParam_, webhookParam) };
      inline AlertActions& setWebhookParam(AlertActions::WebhookParam && webhookParam) { DARABONBA_PTR_SET_RVALUE(webhookParam_, webhookParam) };


    protected:
      // Unique identifier for the action integration.
      shared_ptr<string> alertActionId_ {};
      // Alert action name.
      shared_ptr<string> alertActionName_ {};
      // Event Bridge parameters.
      shared_ptr<AlertActions::EbParam> ebParam_ {};
      // Elastic scaling parameters.
      shared_ptr<AlertActions::EssParam> essParam_ {};
      // Function Compute 3.0 parameters.
      shared_ptr<AlertActions::Fc3Param> fc3Param_ {};
      // Function Compute parameters.
      shared_ptr<AlertActions::FcParam> fcParam_ {};
      // Lightweight Message Queue (formerly MNS) parameters.
      shared_ptr<AlertActions::MnsParam> mnsParam_ {};
      // PagerDuty parameters
      shared_ptr<AlertActions::PagerDutyParam> pagerDutyParam_ {};
      // Log Service parameters.
      shared_ptr<AlertActions::SlsParam> slsParam_ {};
      // Action integration type.
      shared_ptr<string> type_ {};
      // Webhook parameters
      shared_ptr<AlertActions::WebhookParam> webhookParam_ {};
    };

    virtual bool empty() const override { return this->alertActions_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->total_ == nullptr; };
    // alertActions Field Functions 
    bool hasAlertActions() const { return this->alertActions_ != nullptr;};
    void deleteAlertActions() { this->alertActions_ = nullptr;};
    inline const vector<ListAlertActionsResponseBody::AlertActions> & getAlertActions() const { DARABONBA_PTR_GET_CONST(alertActions_, vector<ListAlertActionsResponseBody::AlertActions>) };
    inline vector<ListAlertActionsResponseBody::AlertActions> getAlertActions() { DARABONBA_PTR_GET(alertActions_, vector<ListAlertActionsResponseBody::AlertActions>) };
    inline ListAlertActionsResponseBody& setAlertActions(const vector<ListAlertActionsResponseBody::AlertActions> & alertActions) { DARABONBA_PTR_SET_VALUE(alertActions_, alertActions) };
    inline ListAlertActionsResponseBody& setAlertActions(vector<ListAlertActionsResponseBody::AlertActions> && alertActions) { DARABONBA_PTR_SET_RVALUE(alertActions_, alertActions) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline ListAlertActionsResponseBody& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListAlertActionsResponseBody& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAlertActionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline ListAlertActionsResponseBody& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // List of alert action configurations.
    shared_ptr<vector<ListAlertActionsResponseBody::AlertActions>> alertActions_ {};
    // Page number.
    shared_ptr<int64_t> pageNumber_ {};
    // Page size.
    shared_ptr<int64_t> pageSize_ {};
    // Request ID.
    shared_ptr<string> requestId_ {};
    // Total number of items.
    shared_ptr<int32_t> total_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
