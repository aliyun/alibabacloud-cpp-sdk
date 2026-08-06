// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECRAWLERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATECRAWLERREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class UpdateCrawlerRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateCrawlerRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EnableAiComment, enableAiComment_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Options, options_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ScheduleConfig, scheduleConfig_);
      DARABONBA_PTR_TO_JSON(Scope, scope_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateCrawlerRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EnableAiComment, enableAiComment_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Options, options_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ScheduleConfig, scheduleConfig_);
      DARABONBA_PTR_FROM_JSON(Scope, scope_);
    };
    UpdateCrawlerRequest() = default ;
    UpdateCrawlerRequest(const UpdateCrawlerRequest &) = default ;
    UpdateCrawlerRequest(UpdateCrawlerRequest &&) = default ;
    UpdateCrawlerRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateCrawlerRequest() = default ;
    UpdateCrawlerRequest& operator=(const UpdateCrawlerRequest &) = default ;
    UpdateCrawlerRequest& operator=(UpdateCrawlerRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Scope : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Scope& obj) { 
        DARABONBA_PTR_TO_JSON(ExcludeRegex, excludeRegex_);
        DARABONBA_PTR_TO_JSON(Items, items_);
        DARABONBA_PTR_TO_JSON(Unit, unit_);
      };
      friend void from_json(const Darabonba::Json& j, Scope& obj) { 
        DARABONBA_PTR_FROM_JSON(ExcludeRegex, excludeRegex_);
        DARABONBA_PTR_FROM_JSON(Items, items_);
        DARABONBA_PTR_FROM_JSON(Unit, unit_);
      };
      Scope() = default ;
      Scope(const Scope &) = default ;
      Scope(Scope &&) = default ;
      Scope(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Scope() = default ;
      Scope& operator=(const Scope &) = default ;
      Scope& operator=(Scope &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->excludeRegex_ == nullptr
        && this->items_ == nullptr && this->unit_ == nullptr; };
      // excludeRegex Field Functions 
      bool hasExcludeRegex() const { return this->excludeRegex_ != nullptr;};
      void deleteExcludeRegex() { this->excludeRegex_ = nullptr;};
      inline string getExcludeRegex() const { DARABONBA_PTR_GET_DEFAULT(excludeRegex_, "") };
      inline Scope& setExcludeRegex(string excludeRegex) { DARABONBA_PTR_SET_VALUE(excludeRegex_, excludeRegex) };


      // items Field Functions 
      bool hasItems() const { return this->items_ != nullptr;};
      void deleteItems() { this->items_ = nullptr;};
      inline const vector<string> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<string>) };
      inline vector<string> getItems() { DARABONBA_PTR_GET(items_, vector<string>) };
      inline Scope& setItems(const vector<string> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
      inline Scope& setItems(vector<string> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


      // unit Field Functions 
      bool hasUnit() const { return this->unit_ != nullptr;};
      void deleteUnit() { this->unit_ = nullptr;};
      inline string getUnit() const { DARABONBA_PTR_GET_DEFAULT(unit_, "") };
      inline Scope& setUnit(string unit) { DARABONBA_PTR_SET_VALUE(unit_, unit) };


    protected:
      shared_ptr<string> excludeRegex_ {};
      shared_ptr<vector<string>> items_ {};
      // This parameter is required.
      shared_ptr<string> unit_ {};
    };

    class ScheduleConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ScheduleConfig& obj) { 
        DARABONBA_PTR_TO_JSON(CronExpress, cronExpress_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, ScheduleConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(CronExpress, cronExpress_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      ScheduleConfig() = default ;
      ScheduleConfig(const ScheduleConfig &) = default ;
      ScheduleConfig(ScheduleConfig &&) = default ;
      ScheduleConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ScheduleConfig() = default ;
      ScheduleConfig& operator=(const ScheduleConfig &) = default ;
      ScheduleConfig& operator=(ScheduleConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->cronExpress_ == nullptr
        && this->type_ == nullptr; };
      // cronExpress Field Functions 
      bool hasCronExpress() const { return this->cronExpress_ != nullptr;};
      void deleteCronExpress() { this->cronExpress_ = nullptr;};
      inline string getCronExpress() const { DARABONBA_PTR_GET_DEFAULT(cronExpress_, "") };
      inline ScheduleConfig& setCronExpress(string cronExpress) { DARABONBA_PTR_SET_VALUE(cronExpress_, cronExpress) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline ScheduleConfig& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      shared_ptr<string> cronExpress_ {};
      // This parameter is required.
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->enableAiComment_ == nullptr
        && this->id_ == nullptr && this->options_ == nullptr && this->resourceGroupId_ == nullptr && this->scheduleConfig_ == nullptr && this->scope_ == nullptr; };
    // enableAiComment Field Functions 
    bool hasEnableAiComment() const { return this->enableAiComment_ != nullptr;};
    void deleteEnableAiComment() { this->enableAiComment_ = nullptr;};
    inline bool getEnableAiComment() const { DARABONBA_PTR_GET_DEFAULT(enableAiComment_, false) };
    inline UpdateCrawlerRequest& setEnableAiComment(bool enableAiComment) { DARABONBA_PTR_SET_VALUE(enableAiComment_, enableAiComment) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline UpdateCrawlerRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // options Field Functions 
    bool hasOptions() const { return this->options_ != nullptr;};
    void deleteOptions() { this->options_ = nullptr;};
    inline const map<string, string> & getOptions() const { DARABONBA_PTR_GET_CONST(options_, map<string, string>) };
    inline map<string, string> getOptions() { DARABONBA_PTR_GET(options_, map<string, string>) };
    inline UpdateCrawlerRequest& setOptions(const map<string, string> & options) { DARABONBA_PTR_SET_VALUE(options_, options) };
    inline UpdateCrawlerRequest& setOptions(map<string, string> && options) { DARABONBA_PTR_SET_RVALUE(options_, options) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline UpdateCrawlerRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // scheduleConfig Field Functions 
    bool hasScheduleConfig() const { return this->scheduleConfig_ != nullptr;};
    void deleteScheduleConfig() { this->scheduleConfig_ = nullptr;};
    inline const UpdateCrawlerRequest::ScheduleConfig & getScheduleConfig() const { DARABONBA_PTR_GET_CONST(scheduleConfig_, UpdateCrawlerRequest::ScheduleConfig) };
    inline UpdateCrawlerRequest::ScheduleConfig getScheduleConfig() { DARABONBA_PTR_GET(scheduleConfig_, UpdateCrawlerRequest::ScheduleConfig) };
    inline UpdateCrawlerRequest& setScheduleConfig(const UpdateCrawlerRequest::ScheduleConfig & scheduleConfig) { DARABONBA_PTR_SET_VALUE(scheduleConfig_, scheduleConfig) };
    inline UpdateCrawlerRequest& setScheduleConfig(UpdateCrawlerRequest::ScheduleConfig && scheduleConfig) { DARABONBA_PTR_SET_RVALUE(scheduleConfig_, scheduleConfig) };


    // scope Field Functions 
    bool hasScope() const { return this->scope_ != nullptr;};
    void deleteScope() { this->scope_ = nullptr;};
    inline const UpdateCrawlerRequest::Scope & getScope() const { DARABONBA_PTR_GET_CONST(scope_, UpdateCrawlerRequest::Scope) };
    inline UpdateCrawlerRequest::Scope getScope() { DARABONBA_PTR_GET(scope_, UpdateCrawlerRequest::Scope) };
    inline UpdateCrawlerRequest& setScope(const UpdateCrawlerRequest::Scope & scope) { DARABONBA_PTR_SET_VALUE(scope_, scope) };
    inline UpdateCrawlerRequest& setScope(UpdateCrawlerRequest::Scope && scope) { DARABONBA_PTR_SET_RVALUE(scope_, scope) };


  protected:
    shared_ptr<bool> enableAiComment_ {};
    // This parameter is required.
    shared_ptr<int64_t> id_ {};
    shared_ptr<map<string, string>> options_ {};
    shared_ptr<string> resourceGroupId_ {};
    shared_ptr<UpdateCrawlerRequest::ScheduleConfig> scheduleConfig_ {};
    shared_ptr<UpdateCrawlerRequest::Scope> scope_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
