// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECRAWLERSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATECRAWLERSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class UpdateCrawlerShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateCrawlerShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EnableAiComment, enableAiComment_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Options, optionsShrink_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ScheduleConfig, scheduleConfigShrink_);
      DARABONBA_PTR_TO_JSON(Scope, scopeShrink_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateCrawlerShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EnableAiComment, enableAiComment_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Options, optionsShrink_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ScheduleConfig, scheduleConfigShrink_);
      DARABONBA_PTR_FROM_JSON(Scope, scopeShrink_);
    };
    UpdateCrawlerShrinkRequest() = default ;
    UpdateCrawlerShrinkRequest(const UpdateCrawlerShrinkRequest &) = default ;
    UpdateCrawlerShrinkRequest(UpdateCrawlerShrinkRequest &&) = default ;
    UpdateCrawlerShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateCrawlerShrinkRequest() = default ;
    UpdateCrawlerShrinkRequest& operator=(const UpdateCrawlerShrinkRequest &) = default ;
    UpdateCrawlerShrinkRequest& operator=(UpdateCrawlerShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->enableAiComment_ == nullptr
        && this->id_ == nullptr && this->optionsShrink_ == nullptr && this->resourceGroupId_ == nullptr && this->scheduleConfigShrink_ == nullptr && this->scopeShrink_ == nullptr; };
    // enableAiComment Field Functions 
    bool hasEnableAiComment() const { return this->enableAiComment_ != nullptr;};
    void deleteEnableAiComment() { this->enableAiComment_ = nullptr;};
    inline bool getEnableAiComment() const { DARABONBA_PTR_GET_DEFAULT(enableAiComment_, false) };
    inline UpdateCrawlerShrinkRequest& setEnableAiComment(bool enableAiComment) { DARABONBA_PTR_SET_VALUE(enableAiComment_, enableAiComment) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline UpdateCrawlerShrinkRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // optionsShrink Field Functions 
    bool hasOptionsShrink() const { return this->optionsShrink_ != nullptr;};
    void deleteOptionsShrink() { this->optionsShrink_ = nullptr;};
    inline string getOptionsShrink() const { DARABONBA_PTR_GET_DEFAULT(optionsShrink_, "") };
    inline UpdateCrawlerShrinkRequest& setOptionsShrink(string optionsShrink) { DARABONBA_PTR_SET_VALUE(optionsShrink_, optionsShrink) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline UpdateCrawlerShrinkRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // scheduleConfigShrink Field Functions 
    bool hasScheduleConfigShrink() const { return this->scheduleConfigShrink_ != nullptr;};
    void deleteScheduleConfigShrink() { this->scheduleConfigShrink_ = nullptr;};
    inline string getScheduleConfigShrink() const { DARABONBA_PTR_GET_DEFAULT(scheduleConfigShrink_, "") };
    inline UpdateCrawlerShrinkRequest& setScheduleConfigShrink(string scheduleConfigShrink) { DARABONBA_PTR_SET_VALUE(scheduleConfigShrink_, scheduleConfigShrink) };


    // scopeShrink Field Functions 
    bool hasScopeShrink() const { return this->scopeShrink_ != nullptr;};
    void deleteScopeShrink() { this->scopeShrink_ = nullptr;};
    inline string getScopeShrink() const { DARABONBA_PTR_GET_DEFAULT(scopeShrink_, "") };
    inline UpdateCrawlerShrinkRequest& setScopeShrink(string scopeShrink) { DARABONBA_PTR_SET_VALUE(scopeShrink_, scopeShrink) };


  protected:
    // Specifies whether to enable AI metadata description. This parameter is supported only when SupportAiComment returned by GetCrawlerTypeCapabilities is set to true. If this parameter is not specified, the existing value remains unchanged.
    shared_ptr<bool> enableAiComment_ {};
    // The ID of the metadata crawler. You can call ListCrawlers to query crawler IDs.
    // 
    // This parameter is required.
    shared_ptr<int64_t> id_ {};
    // The extension configurations for the crawler type. Only the specified configuration items are updated. Unspecified configuration items remain unchanged. The supported keys and values are determined by the SupportedOptionKeys returned by GetCrawlerTypeCapabilities.
    shared_ptr<string> optionsShrink_ {};
    // The ID of the Serverless 2.0 resource group used to run the collection task. Whether this parameter is supported and whether it is required depend on the capabilities returned by GetCrawlerTypeCapabilities. If this parameter is not specified, the existing value remains unchanged.
    shared_ptr<string> resourceGroupId_ {};
    // The scheduling configuration. If this parameter is specified, the scheduling method is updated. If this parameter is not specified, the existing value remains unchanged.
    shared_ptr<string> scheduleConfigShrink_ {};
    // The collection scope configuration. If this parameter is specified, the collection scope is updated. If this parameter is not specified, the existing value remains unchanged.
    shared_ptr<string> scopeShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
