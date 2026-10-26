// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEINSTANCEINSPECTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEINSTANCEINSPECTIONREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RocketMQ20220801
{
namespace Models
{
  class CreateInstanceInspectionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateInstanceInspectionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(clientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(items, items_);
      DARABONBA_PTR_TO_JSON(resourceScope, resourceScope_);
      DARABONBA_PTR_TO_JSON(schedule, schedule_);
      DARABONBA_PTR_TO_JSON(regionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateInstanceInspectionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(clientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(items, items_);
      DARABONBA_PTR_FROM_JSON(resourceScope, resourceScope_);
      DARABONBA_PTR_FROM_JSON(schedule, schedule_);
      DARABONBA_PTR_FROM_JSON(regionId, regionId_);
    };
    CreateInstanceInspectionRequest() = default ;
    CreateInstanceInspectionRequest(const CreateInstanceInspectionRequest &) = default ;
    CreateInstanceInspectionRequest(CreateInstanceInspectionRequest &&) = default ;
    CreateInstanceInspectionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateInstanceInspectionRequest() = default ;
    CreateInstanceInspectionRequest& operator=(const CreateInstanceInspectionRequest &) = default ;
    CreateInstanceInspectionRequest& operator=(CreateInstanceInspectionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Schedule : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Schedule& obj) { 
        DARABONBA_PTR_TO_JSON(cron, cron_);
        DARABONBA_PTR_TO_JSON(enabled, enabled_);
      };
      friend void from_json(const Darabonba::Json& j, Schedule& obj) { 
        DARABONBA_PTR_FROM_JSON(cron, cron_);
        DARABONBA_PTR_FROM_JSON(enabled, enabled_);
      };
      Schedule() = default ;
      Schedule(const Schedule &) = default ;
      Schedule(Schedule &&) = default ;
      Schedule(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Schedule() = default ;
      Schedule& operator=(const Schedule &) = default ;
      Schedule& operator=(Schedule &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->cron_ == nullptr
        && this->enabled_ == nullptr; };
      // cron Field Functions 
      bool hasCron() const { return this->cron_ != nullptr;};
      void deleteCron() { this->cron_ = nullptr;};
      inline string getCron() const { DARABONBA_PTR_GET_DEFAULT(cron_, "") };
      inline Schedule& setCron(string cron) { DARABONBA_PTR_SET_VALUE(cron_, cron) };


      // enabled Field Functions 
      bool hasEnabled() const { return this->enabled_ != nullptr;};
      void deleteEnabled() { this->enabled_ = nullptr;};
      inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
      inline Schedule& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    protected:
      shared_ptr<string> cron_ {};
      // This parameter is required.
      shared_ptr<bool> enabled_ {};
    };

    class ResourceScope : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResourceScope& obj) { 
        DARABONBA_PTR_TO_JSON(consumerGroups, consumerGroups_);
        DARABONBA_PTR_TO_JSON(mode, mode_);
        DARABONBA_PTR_TO_JSON(topics, topics_);
      };
      friend void from_json(const Darabonba::Json& j, ResourceScope& obj) { 
        DARABONBA_PTR_FROM_JSON(consumerGroups, consumerGroups_);
        DARABONBA_PTR_FROM_JSON(mode, mode_);
        DARABONBA_PTR_FROM_JSON(topics, topics_);
      };
      ResourceScope() = default ;
      ResourceScope(const ResourceScope &) = default ;
      ResourceScope(ResourceScope &&) = default ;
      ResourceScope(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ResourceScope() = default ;
      ResourceScope& operator=(const ResourceScope &) = default ;
      ResourceScope& operator=(ResourceScope &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->consumerGroups_ == nullptr
        && this->mode_ == nullptr && this->topics_ == nullptr; };
      // consumerGroups Field Functions 
      bool hasConsumerGroups() const { return this->consumerGroups_ != nullptr;};
      void deleteConsumerGroups() { this->consumerGroups_ = nullptr;};
      inline const vector<string> & getConsumerGroups() const { DARABONBA_PTR_GET_CONST(consumerGroups_, vector<string>) };
      inline vector<string> getConsumerGroups() { DARABONBA_PTR_GET(consumerGroups_, vector<string>) };
      inline ResourceScope& setConsumerGroups(const vector<string> & consumerGroups) { DARABONBA_PTR_SET_VALUE(consumerGroups_, consumerGroups) };
      inline ResourceScope& setConsumerGroups(vector<string> && consumerGroups) { DARABONBA_PTR_SET_RVALUE(consumerGroups_, consumerGroups) };


      // mode Field Functions 
      bool hasMode() const { return this->mode_ != nullptr;};
      void deleteMode() { this->mode_ = nullptr;};
      inline string getMode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
      inline ResourceScope& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


      // topics Field Functions 
      bool hasTopics() const { return this->topics_ != nullptr;};
      void deleteTopics() { this->topics_ = nullptr;};
      inline const vector<string> & getTopics() const { DARABONBA_PTR_GET_CONST(topics_, vector<string>) };
      inline vector<string> getTopics() { DARABONBA_PTR_GET(topics_, vector<string>) };
      inline ResourceScope& setTopics(const vector<string> & topics) { DARABONBA_PTR_SET_VALUE(topics_, topics) };
      inline ResourceScope& setTopics(vector<string> && topics) { DARABONBA_PTR_SET_RVALUE(topics_, topics) };


    protected:
      shared_ptr<vector<string>> consumerGroups_ {};
      // This parameter is required.
      shared_ptr<string> mode_ {};
      shared_ptr<vector<string>> topics_ {};
    };

    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_ANY_TO_JSON(parameters, parameters_);
        DARABONBA_PTR_TO_JSON(templateCode, templateCode_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_ANY_FROM_JSON(parameters, parameters_);
        DARABONBA_PTR_FROM_JSON(templateCode, templateCode_);
      };
      Items() = default ;
      Items(const Items &) = default ;
      Items(Items &&) = default ;
      Items(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Items() = default ;
      Items& operator=(const Items &) = default ;
      Items& operator=(Items &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->parameters_ == nullptr
        && this->templateCode_ == nullptr; };
      // parameters Field Functions 
      bool hasParameters() const { return this->parameters_ != nullptr;};
      void deleteParameters() { this->parameters_ = nullptr;};
      inline       const Darabonba::Json & getParameters() const { DARABONBA_GET(parameters_) };
      Darabonba::Json & getParameters() { DARABONBA_GET(parameters_) };
      inline Items& setParameters(const Darabonba::Json & parameters) { DARABONBA_SET_VALUE(parameters_, parameters) };
      inline Items& setParameters(Darabonba::Json && parameters) { DARABONBA_SET_RVALUE(parameters_, parameters) };


      // templateCode Field Functions 
      bool hasTemplateCode() const { return this->templateCode_ != nullptr;};
      void deleteTemplateCode() { this->templateCode_ = nullptr;};
      inline string getTemplateCode() const { DARABONBA_PTR_GET_DEFAULT(templateCode_, "") };
      inline Items& setTemplateCode(string templateCode) { DARABONBA_PTR_SET_VALUE(templateCode_, templateCode) };


    protected:
      // This parameter is required.
      Darabonba::Json parameters_ {};
      // This parameter is required.
      shared_ptr<string> templateCode_ {};
    };

    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->items_ == nullptr && this->resourceScope_ == nullptr && this->schedule_ == nullptr && this->regionId_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateInstanceInspectionRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<CreateInstanceInspectionRequest::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<CreateInstanceInspectionRequest::Items>) };
    inline vector<CreateInstanceInspectionRequest::Items> getItems() { DARABONBA_PTR_GET(items_, vector<CreateInstanceInspectionRequest::Items>) };
    inline CreateInstanceInspectionRequest& setItems(const vector<CreateInstanceInspectionRequest::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline CreateInstanceInspectionRequest& setItems(vector<CreateInstanceInspectionRequest::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // resourceScope Field Functions 
    bool hasResourceScope() const { return this->resourceScope_ != nullptr;};
    void deleteResourceScope() { this->resourceScope_ = nullptr;};
    inline const CreateInstanceInspectionRequest::ResourceScope & getResourceScope() const { DARABONBA_PTR_GET_CONST(resourceScope_, CreateInstanceInspectionRequest::ResourceScope) };
    inline CreateInstanceInspectionRequest::ResourceScope getResourceScope() { DARABONBA_PTR_GET(resourceScope_, CreateInstanceInspectionRequest::ResourceScope) };
    inline CreateInstanceInspectionRequest& setResourceScope(const CreateInstanceInspectionRequest::ResourceScope & resourceScope) { DARABONBA_PTR_SET_VALUE(resourceScope_, resourceScope) };
    inline CreateInstanceInspectionRequest& setResourceScope(CreateInstanceInspectionRequest::ResourceScope && resourceScope) { DARABONBA_PTR_SET_RVALUE(resourceScope_, resourceScope) };


    // schedule Field Functions 
    bool hasSchedule() const { return this->schedule_ != nullptr;};
    void deleteSchedule() { this->schedule_ = nullptr;};
    inline const CreateInstanceInspectionRequest::Schedule & getSchedule() const { DARABONBA_PTR_GET_CONST(schedule_, CreateInstanceInspectionRequest::Schedule) };
    inline CreateInstanceInspectionRequest::Schedule getSchedule() { DARABONBA_PTR_GET(schedule_, CreateInstanceInspectionRequest::Schedule) };
    inline CreateInstanceInspectionRequest& setSchedule(const CreateInstanceInspectionRequest::Schedule & schedule) { DARABONBA_PTR_SET_VALUE(schedule_, schedule) };
    inline CreateInstanceInspectionRequest& setSchedule(CreateInstanceInspectionRequest::Schedule && schedule) { DARABONBA_PTR_SET_RVALUE(schedule_, schedule) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateInstanceInspectionRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // This parameter is required.
    shared_ptr<string> clientToken_ {};
    // This parameter is required.
    shared_ptr<vector<CreateInstanceInspectionRequest::Items>> items_ {};
    // This parameter is required.
    shared_ptr<CreateInstanceInspectionRequest::ResourceScope> resourceScope_ {};
    // This parameter is required.
    shared_ptr<CreateInstanceInspectionRequest::Schedule> schedule_ {};
    // This parameter is required.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RocketMQ20220801
#endif
