// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECRAWLERSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECRAWLERSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class CreateCrawlerShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCrawlerShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DataSourceId, dataSourceId_);
      DARABONBA_PTR_TO_JSON(EnableAiComment, enableAiComment_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Options, optionsShrink_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ScheduleConfig, scheduleConfigShrink_);
      DARABONBA_PTR_TO_JSON(Scope, scopeShrink_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCrawlerShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DataSourceId, dataSourceId_);
      DARABONBA_PTR_FROM_JSON(EnableAiComment, enableAiComment_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Options, optionsShrink_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ScheduleConfig, scheduleConfigShrink_);
      DARABONBA_PTR_FROM_JSON(Scope, scopeShrink_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    CreateCrawlerShrinkRequest() = default ;
    CreateCrawlerShrinkRequest(const CreateCrawlerShrinkRequest &) = default ;
    CreateCrawlerShrinkRequest(CreateCrawlerShrinkRequest &&) = default ;
    CreateCrawlerShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCrawlerShrinkRequest() = default ;
    CreateCrawlerShrinkRequest& operator=(const CreateCrawlerShrinkRequest &) = default ;
    CreateCrawlerShrinkRequest& operator=(CreateCrawlerShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dataSourceId_ == nullptr
        && this->enableAiComment_ == nullptr && this->name_ == nullptr && this->optionsShrink_ == nullptr && this->resourceGroupId_ == nullptr && this->scheduleConfigShrink_ == nullptr
        && this->scopeShrink_ == nullptr && this->type_ == nullptr; };
    // dataSourceId Field Functions 
    bool hasDataSourceId() const { return this->dataSourceId_ != nullptr;};
    void deleteDataSourceId() { this->dataSourceId_ = nullptr;};
    inline int64_t getDataSourceId() const { DARABONBA_PTR_GET_DEFAULT(dataSourceId_, 0L) };
    inline CreateCrawlerShrinkRequest& setDataSourceId(int64_t dataSourceId) { DARABONBA_PTR_SET_VALUE(dataSourceId_, dataSourceId) };


    // enableAiComment Field Functions 
    bool hasEnableAiComment() const { return this->enableAiComment_ != nullptr;};
    void deleteEnableAiComment() { this->enableAiComment_ = nullptr;};
    inline bool getEnableAiComment() const { DARABONBA_PTR_GET_DEFAULT(enableAiComment_, false) };
    inline CreateCrawlerShrinkRequest& setEnableAiComment(bool enableAiComment) { DARABONBA_PTR_SET_VALUE(enableAiComment_, enableAiComment) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateCrawlerShrinkRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // optionsShrink Field Functions 
    bool hasOptionsShrink() const { return this->optionsShrink_ != nullptr;};
    void deleteOptionsShrink() { this->optionsShrink_ = nullptr;};
    inline string getOptionsShrink() const { DARABONBA_PTR_GET_DEFAULT(optionsShrink_, "") };
    inline CreateCrawlerShrinkRequest& setOptionsShrink(string optionsShrink) { DARABONBA_PTR_SET_VALUE(optionsShrink_, optionsShrink) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateCrawlerShrinkRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // scheduleConfigShrink Field Functions 
    bool hasScheduleConfigShrink() const { return this->scheduleConfigShrink_ != nullptr;};
    void deleteScheduleConfigShrink() { this->scheduleConfigShrink_ = nullptr;};
    inline string getScheduleConfigShrink() const { DARABONBA_PTR_GET_DEFAULT(scheduleConfigShrink_, "") };
    inline CreateCrawlerShrinkRequest& setScheduleConfigShrink(string scheduleConfigShrink) { DARABONBA_PTR_SET_VALUE(scheduleConfigShrink_, scheduleConfigShrink) };


    // scopeShrink Field Functions 
    bool hasScopeShrink() const { return this->scopeShrink_ != nullptr;};
    void deleteScopeShrink() { this->scopeShrink_ = nullptr;};
    inline string getScopeShrink() const { DARABONBA_PTR_GET_DEFAULT(scopeShrink_, "") };
    inline CreateCrawlerShrinkRequest& setScopeShrink(string scopeShrink) { DARABONBA_PTR_SET_VALUE(scopeShrink_, scopeShrink) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline CreateCrawlerShrinkRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


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
    shared_ptr<string> optionsShrink_ {};
    // The ID of the Serverless 2.0 resource group used to run the collection task. Whether this parameter is required depends on the RequireResourceGroup value returned by GetCrawlerTypeCapabilities.
    shared_ptr<string> resourceGroupId_ {};
    // The scheduling configuration. If this parameter is not specified, manual scheduling is used.
    shared_ptr<string> scheduleConfigShrink_ {};
    // The collection scope configuration. If this parameter is not specified, the DefaultScopeUnit value returned by GetCrawlerTypeCapabilities is used.
    shared_ptr<string> scopeShrink_ {};
    // The crawler type. Call GetCrawlerTypeCapabilities to query the valid values supported in the current region.
    // 
    // This parameter is required.
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
