// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECRAWLERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECRAWLERREQUEST_HPP_
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
  class CreateCrawlerRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCrawlerRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DataSourceId, dataSourceId_);
      DARABONBA_PTR_TO_JSON(EnableAiComment, enableAiComment_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Options, options_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ScheduleConfig, scheduleConfig_);
      DARABONBA_PTR_TO_JSON(Scope, scope_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCrawlerRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DataSourceId, dataSourceId_);
      DARABONBA_PTR_FROM_JSON(EnableAiComment, enableAiComment_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Options, options_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ScheduleConfig, scheduleConfig_);
      DARABONBA_PTR_FROM_JSON(Scope, scope_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    CreateCrawlerRequest() = default ;
    CreateCrawlerRequest(const CreateCrawlerRequest &) = default ;
    CreateCrawlerRequest(CreateCrawlerRequest &&) = default ;
    CreateCrawlerRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCrawlerRequest() = default ;
    CreateCrawlerRequest& operator=(const CreateCrawlerRequest &) = default ;
    CreateCrawlerRequest& operator=(CreateCrawlerRequest &&) = default ;
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
      // The regular expression used to exclude objects from the collection scope. This parameter is supported only when the SupportExcludeRegex value returned by GetCrawlerTypeCapabilities is true.
      shared_ptr<string> excludeRegex_ {};
      // The list of database names. This parameter is supported only when Unit is set to DATABASE. A maximum of 1000 entries are allowed. Names cannot be empty or duplicated.
      shared_ptr<vector<string>> items_ {};
      // The collection scope granularity. Valid values are determined by the SupportedScopeUnits value returned by GetCrawlerTypeCapabilities.
      // 
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
      // The six-field cron expression for periodic scheduling. This parameter is required when Type is set to NORMAL. The seconds field must be 0, and the scheduling frequency cannot exceed once per hour.
      shared_ptr<string> cronExpress_ {};
      // The scheduling type. MANUAL indicates manual execution, and NORMAL indicates periodic scheduling. Data sources in the development environment support only MANUAL. Whether NORMAL is available depends on the SupportSchedule value returned by GetCrawlerTypeCapabilities.
      // 
      // This parameter is required.
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->dataSourceId_ == nullptr
        && this->enableAiComment_ == nullptr && this->name_ == nullptr && this->options_ == nullptr && this->resourceGroupId_ == nullptr && this->scheduleConfig_ == nullptr
        && this->scope_ == nullptr && this->type_ == nullptr; };
    // dataSourceId Field Functions 
    bool hasDataSourceId() const { return this->dataSourceId_ != nullptr;};
    void deleteDataSourceId() { this->dataSourceId_ = nullptr;};
    inline int64_t getDataSourceId() const { DARABONBA_PTR_GET_DEFAULT(dataSourceId_, 0L) };
    inline CreateCrawlerRequest& setDataSourceId(int64_t dataSourceId) { DARABONBA_PTR_SET_VALUE(dataSourceId_, dataSourceId) };


    // enableAiComment Field Functions 
    bool hasEnableAiComment() const { return this->enableAiComment_ != nullptr;};
    void deleteEnableAiComment() { this->enableAiComment_ = nullptr;};
    inline bool getEnableAiComment() const { DARABONBA_PTR_GET_DEFAULT(enableAiComment_, false) };
    inline CreateCrawlerRequest& setEnableAiComment(bool enableAiComment) { DARABONBA_PTR_SET_VALUE(enableAiComment_, enableAiComment) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateCrawlerRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // options Field Functions 
    bool hasOptions() const { return this->options_ != nullptr;};
    void deleteOptions() { this->options_ = nullptr;};
    inline const map<string, string> & getOptions() const { DARABONBA_PTR_GET_CONST(options_, map<string, string>) };
    inline map<string, string> getOptions() { DARABONBA_PTR_GET(options_, map<string, string>) };
    inline CreateCrawlerRequest& setOptions(const map<string, string> & options) { DARABONBA_PTR_SET_VALUE(options_, options) };
    inline CreateCrawlerRequest& setOptions(map<string, string> && options) { DARABONBA_PTR_SET_RVALUE(options_, options) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateCrawlerRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // scheduleConfig Field Functions 
    bool hasScheduleConfig() const { return this->scheduleConfig_ != nullptr;};
    void deleteScheduleConfig() { this->scheduleConfig_ = nullptr;};
    inline const CreateCrawlerRequest::ScheduleConfig & getScheduleConfig() const { DARABONBA_PTR_GET_CONST(scheduleConfig_, CreateCrawlerRequest::ScheduleConfig) };
    inline CreateCrawlerRequest::ScheduleConfig getScheduleConfig() { DARABONBA_PTR_GET(scheduleConfig_, CreateCrawlerRequest::ScheduleConfig) };
    inline CreateCrawlerRequest& setScheduleConfig(const CreateCrawlerRequest::ScheduleConfig & scheduleConfig) { DARABONBA_PTR_SET_VALUE(scheduleConfig_, scheduleConfig) };
    inline CreateCrawlerRequest& setScheduleConfig(CreateCrawlerRequest::ScheduleConfig && scheduleConfig) { DARABONBA_PTR_SET_RVALUE(scheduleConfig_, scheduleConfig) };


    // scope Field Functions 
    bool hasScope() const { return this->scope_ != nullptr;};
    void deleteScope() { this->scope_ = nullptr;};
    inline const CreateCrawlerRequest::Scope & getScope() const { DARABONBA_PTR_GET_CONST(scope_, CreateCrawlerRequest::Scope) };
    inline CreateCrawlerRequest::Scope getScope() { DARABONBA_PTR_GET(scope_, CreateCrawlerRequest::Scope) };
    inline CreateCrawlerRequest& setScope(const CreateCrawlerRequest::Scope & scope) { DARABONBA_PTR_SET_VALUE(scope_, scope) };
    inline CreateCrawlerRequest& setScope(CreateCrawlerRequest::Scope && scope) { DARABONBA_PTR_SET_RVALUE(scope_, scope) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline CreateCrawlerRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The ID of the data source associated with the crawler. The data source must be bound to a DataWorks workspace, and the data source type must match the Type value.
    // 
    // This parameter is required.
    shared_ptr<int64_t> dataSourceId_ {};
    // Specifies whether to enable AI metadata descriptions. This parameter is supported only when the SupportAiComment value returned by GetCrawlerTypeCapabilities is true.
    shared_ptr<bool> enableAiComment_ {};
    // The name of the metadata crawler. The name can be up to 128 characters in length.
    // 
    // This parameter is required.
    shared_ptr<string> name_ {};
    // The extended configuration for the crawler type. The key names, value types, required fields, default values, and valid values are determined by the SupportedOptionKeys value returned by GetCrawlerTypeCapabilities.
    shared_ptr<map<string, string>> options_ {};
    // The ID of the Serverless 2.0 resource group used to run the collection task. Whether this parameter is required depends on the RequireResourceGroup value returned by GetCrawlerTypeCapabilities.
    shared_ptr<string> resourceGroupId_ {};
    // The scheduling configuration. If this parameter is not specified, manual scheduling is used.
    shared_ptr<CreateCrawlerRequest::ScheduleConfig> scheduleConfig_ {};
    // The collection scope configuration. If this parameter is not specified, the DefaultScopeUnit value returned by GetCrawlerTypeCapabilities is used.
    shared_ptr<CreateCrawlerRequest::Scope> scope_ {};
    // The crawler type. Call GetCrawlerTypeCapabilities to query the valid values supported in the current region.
    // 
    // This parameter is required.
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
