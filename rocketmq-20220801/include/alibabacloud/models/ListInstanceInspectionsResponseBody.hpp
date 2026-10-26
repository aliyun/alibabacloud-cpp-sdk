// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINSTANCEINSPECTIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTINSTANCEINSPECTIONSRESPONSEBODY_HPP_
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
  class ListInstanceInspectionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInstanceInspectionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
    };
    friend void from_json(const Darabonba::Json& j, ListInstanceInspectionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
    };
    ListInstanceInspectionsResponseBody() = default ;
    ListInstanceInspectionsResponseBody(const ListInstanceInspectionsResponseBody &) = default ;
    ListInstanceInspectionsResponseBody(ListInstanceInspectionsResponseBody &&) = default ;
    ListInstanceInspectionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInstanceInspectionsResponseBody() = default ;
    ListInstanceInspectionsResponseBody& operator=(const ListInstanceInspectionsResponseBody &) = default ;
    ListInstanceInspectionsResponseBody& operator=(ListInstanceInspectionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(config, config_);
        DARABONBA_PTR_TO_JSON(configured, configured_);
        DARABONBA_PTR_TO_JSON(instanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(items, items_);
        DARABONBA_PTR_TO_JSON(nextRunAt, nextRunAt_);
        DARABONBA_PTR_TO_JSON(regionId, regionId_);
        DARABONBA_PTR_TO_JSON(revision, revision_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(config, config_);
        DARABONBA_PTR_FROM_JSON(configured, configured_);
        DARABONBA_PTR_FROM_JSON(instanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(items, items_);
        DARABONBA_PTR_FROM_JSON(nextRunAt, nextRunAt_);
        DARABONBA_PTR_FROM_JSON(regionId, regionId_);
        DARABONBA_PTR_FROM_JSON(revision, revision_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Items : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Items& obj) { 
          DARABONBA_PTR_TO_JSON(description, description_);
          DARABONBA_PTR_TO_JSON(name, name_);
          DARABONBA_PTR_TO_JSON(resourceCount, resourceCount_);
          DARABONBA_PTR_TO_JSON(resourceTypes, resourceTypes_);
          DARABONBA_PTR_TO_JSON(templateCode, templateCode_);
        };
        friend void from_json(const Darabonba::Json& j, Items& obj) { 
          DARABONBA_PTR_FROM_JSON(description, description_);
          DARABONBA_PTR_FROM_JSON(name, name_);
          DARABONBA_PTR_FROM_JSON(resourceCount, resourceCount_);
          DARABONBA_PTR_FROM_JSON(resourceTypes, resourceTypes_);
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
        virtual bool empty() const override { return this->description_ == nullptr
        && this->name_ == nullptr && this->resourceCount_ == nullptr && this->resourceTypes_ == nullptr && this->templateCode_ == nullptr; };
        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline Items& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Items& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // resourceCount Field Functions 
        bool hasResourceCount() const { return this->resourceCount_ != nullptr;};
        void deleteResourceCount() { this->resourceCount_ = nullptr;};
        inline int64_t getResourceCount() const { DARABONBA_PTR_GET_DEFAULT(resourceCount_, 0L) };
        inline Items& setResourceCount(int64_t resourceCount) { DARABONBA_PTR_SET_VALUE(resourceCount_, resourceCount) };


        // resourceTypes Field Functions 
        bool hasResourceTypes() const { return this->resourceTypes_ != nullptr;};
        void deleteResourceTypes() { this->resourceTypes_ = nullptr;};
        inline const vector<string> & getResourceTypes() const { DARABONBA_PTR_GET_CONST(resourceTypes_, vector<string>) };
        inline vector<string> getResourceTypes() { DARABONBA_PTR_GET(resourceTypes_, vector<string>) };
        inline Items& setResourceTypes(const vector<string> & resourceTypes) { DARABONBA_PTR_SET_VALUE(resourceTypes_, resourceTypes) };
        inline Items& setResourceTypes(vector<string> && resourceTypes) { DARABONBA_PTR_SET_RVALUE(resourceTypes_, resourceTypes) };


        // templateCode Field Functions 
        bool hasTemplateCode() const { return this->templateCode_ != nullptr;};
        void deleteTemplateCode() { this->templateCode_ = nullptr;};
        inline string getTemplateCode() const { DARABONBA_PTR_GET_DEFAULT(templateCode_, "") };
        inline Items& setTemplateCode(string templateCode) { DARABONBA_PTR_SET_VALUE(templateCode_, templateCode) };


      protected:
        shared_ptr<string> description_ {};
        shared_ptr<string> name_ {};
        shared_ptr<int64_t> resourceCount_ {};
        shared_ptr<vector<string>> resourceTypes_ {};
        shared_ptr<string> templateCode_ {};
      };

      class Config : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Config& obj) { 
          DARABONBA_PTR_TO_JSON(items, items_);
          DARABONBA_PTR_TO_JSON(resourceScope, resourceScope_);
          DARABONBA_PTR_TO_JSON(schedule, schedule_);
        };
        friend void from_json(const Darabonba::Json& j, Config& obj) { 
          DARABONBA_PTR_FROM_JSON(items, items_);
          DARABONBA_PTR_FROM_JSON(resourceScope, resourceScope_);
          DARABONBA_PTR_FROM_JSON(schedule, schedule_);
        };
        Config() = default ;
        Config(const Config &) = default ;
        Config(Config &&) = default ;
        Config(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Config() = default ;
        Config& operator=(const Config &) = default ;
        Config& operator=(Config &&) = default ;
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
          inline           const Darabonba::Json & getParameters() const { DARABONBA_GET(parameters_) };
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

        virtual bool empty() const override { return this->items_ == nullptr
        && this->resourceScope_ == nullptr && this->schedule_ == nullptr; };
        // items Field Functions 
        bool hasItems() const { return this->items_ != nullptr;};
        void deleteItems() { this->items_ = nullptr;};
        inline const vector<Config::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<Config::Items>) };
        inline vector<Config::Items> getItems() { DARABONBA_PTR_GET(items_, vector<Config::Items>) };
        inline Config& setItems(const vector<Config::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
        inline Config& setItems(vector<Config::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


        // resourceScope Field Functions 
        bool hasResourceScope() const { return this->resourceScope_ != nullptr;};
        void deleteResourceScope() { this->resourceScope_ = nullptr;};
        inline const Config::ResourceScope & getResourceScope() const { DARABONBA_PTR_GET_CONST(resourceScope_, Config::ResourceScope) };
        inline Config::ResourceScope getResourceScope() { DARABONBA_PTR_GET(resourceScope_, Config::ResourceScope) };
        inline Config& setResourceScope(const Config::ResourceScope & resourceScope) { DARABONBA_PTR_SET_VALUE(resourceScope_, resourceScope) };
        inline Config& setResourceScope(Config::ResourceScope && resourceScope) { DARABONBA_PTR_SET_RVALUE(resourceScope_, resourceScope) };


        // schedule Field Functions 
        bool hasSchedule() const { return this->schedule_ != nullptr;};
        void deleteSchedule() { this->schedule_ = nullptr;};
        inline const Config::Schedule & getSchedule() const { DARABONBA_PTR_GET_CONST(schedule_, Config::Schedule) };
        inline Config::Schedule getSchedule() { DARABONBA_PTR_GET(schedule_, Config::Schedule) };
        inline Config& setSchedule(const Config::Schedule & schedule) { DARABONBA_PTR_SET_VALUE(schedule_, schedule) };
        inline Config& setSchedule(Config::Schedule && schedule) { DARABONBA_PTR_SET_RVALUE(schedule_, schedule) };


      protected:
        // This parameter is required.
        shared_ptr<vector<Config::Items>> items_ {};
        // This parameter is required.
        shared_ptr<Config::ResourceScope> resourceScope_ {};
        // This parameter is required.
        shared_ptr<Config::Schedule> schedule_ {};
      };

      virtual bool empty() const override { return this->config_ == nullptr
        && this->configured_ == nullptr && this->instanceId_ == nullptr && this->items_ == nullptr && this->nextRunAt_ == nullptr && this->regionId_ == nullptr
        && this->revision_ == nullptr; };
      // config Field Functions 
      bool hasConfig() const { return this->config_ != nullptr;};
      void deleteConfig() { this->config_ = nullptr;};
      inline const Data::Config & getConfig() const { DARABONBA_PTR_GET_CONST(config_, Data::Config) };
      inline Data::Config getConfig() { DARABONBA_PTR_GET(config_, Data::Config) };
      inline Data& setConfig(const Data::Config & config) { DARABONBA_PTR_SET_VALUE(config_, config) };
      inline Data& setConfig(Data::Config && config) { DARABONBA_PTR_SET_RVALUE(config_, config) };


      // configured Field Functions 
      bool hasConfigured() const { return this->configured_ != nullptr;};
      void deleteConfigured() { this->configured_ = nullptr;};
      inline bool getConfigured() const { DARABONBA_PTR_GET_DEFAULT(configured_, false) };
      inline Data& setConfigured(bool configured) { DARABONBA_PTR_SET_VALUE(configured_, configured) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline Data& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // items Field Functions 
      bool hasItems() const { return this->items_ != nullptr;};
      void deleteItems() { this->items_ = nullptr;};
      inline const vector<Data::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<Data::Items>) };
      inline vector<Data::Items> getItems() { DARABONBA_PTR_GET(items_, vector<Data::Items>) };
      inline Data& setItems(const vector<Data::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
      inline Data& setItems(vector<Data::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


      // nextRunAt Field Functions 
      bool hasNextRunAt() const { return this->nextRunAt_ != nullptr;};
      void deleteNextRunAt() { this->nextRunAt_ = nullptr;};
      inline string getNextRunAt() const { DARABONBA_PTR_GET_DEFAULT(nextRunAt_, "") };
      inline Data& setNextRunAt(string nextRunAt) { DARABONBA_PTR_SET_VALUE(nextRunAt_, nextRunAt) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline Data& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // revision Field Functions 
      bool hasRevision() const { return this->revision_ != nullptr;};
      void deleteRevision() { this->revision_ = nullptr;};
      inline int64_t getRevision() const { DARABONBA_PTR_GET_DEFAULT(revision_, 0L) };
      inline Data& setRevision(int64_t revision) { DARABONBA_PTR_SET_VALUE(revision_, revision) };


    protected:
      shared_ptr<Data::Config> config_ {};
      shared_ptr<bool> configured_ {};
      shared_ptr<string> instanceId_ {};
      shared_ptr<vector<Data::Items>> items_ {};
      shared_ptr<string> nextRunAt_ {};
      shared_ptr<string> regionId_ {};
      shared_ptr<int64_t> revision_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListInstanceInspectionsResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListInstanceInspectionsResponseBody::Data>) };
    inline vector<ListInstanceInspectionsResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListInstanceInspectionsResponseBody::Data>) };
    inline ListInstanceInspectionsResponseBody& setData(const vector<ListInstanceInspectionsResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListInstanceInspectionsResponseBody& setData(vector<ListInstanceInspectionsResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListInstanceInspectionsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListInstanceInspectionsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


  protected:
    shared_ptr<vector<ListInstanceInspectionsResponseBody::Data>> data_ {};
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<string> nextToken_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RocketMQ20220801
#endif
