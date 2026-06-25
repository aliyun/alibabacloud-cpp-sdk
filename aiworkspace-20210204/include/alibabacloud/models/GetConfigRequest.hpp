// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIWorkSpace20210204
{
namespace Models
{
  class GetConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CategoryName, categoryName_);
      DARABONBA_PTR_TO_JSON(ConfigKey, configKey_);
      DARABONBA_PTR_TO_JSON(Verbose, verbose_);
    };
    friend void from_json(const Darabonba::Json& j, GetConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CategoryName, categoryName_);
      DARABONBA_PTR_FROM_JSON(ConfigKey, configKey_);
      DARABONBA_PTR_FROM_JSON(Verbose, verbose_);
    };
    GetConfigRequest() = default ;
    GetConfigRequest(const GetConfigRequest &) = default ;
    GetConfigRequest(GetConfigRequest &&) = default ;
    GetConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetConfigRequest() = default ;
    GetConfigRequest& operator=(const GetConfigRequest &) = default ;
    GetConfigRequest& operator=(GetConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->categoryName_ == nullptr
        && this->configKey_ == nullptr && this->verbose_ == nullptr; };
    // categoryName Field Functions 
    bool hasCategoryName() const { return this->categoryName_ != nullptr;};
    void deleteCategoryName() { this->categoryName_ = nullptr;};
    inline string getCategoryName() const { DARABONBA_PTR_GET_DEFAULT(categoryName_, "") };
    inline GetConfigRequest& setCategoryName(string categoryName) { DARABONBA_PTR_SET_VALUE(categoryName_, categoryName) };


    // configKey Field Functions 
    bool hasConfigKey() const { return this->configKey_ != nullptr;};
    void deleteConfigKey() { this->configKey_ = nullptr;};
    inline string getConfigKey() const { DARABONBA_PTR_GET_DEFAULT(configKey_, "") };
    inline GetConfigRequest& setConfigKey(string configKey) { DARABONBA_PTR_SET_VALUE(configKey_, configKey) };


    // verbose Field Functions 
    bool hasVerbose() const { return this->verbose_ != nullptr;};
    void deleteVerbose() { this->verbose_ = nullptr;};
    inline string getVerbose() const { DARABONBA_PTR_GET_DEFAULT(verbose_, "") };
    inline GetConfigRequest& setVerbose(string verbose) { DARABONBA_PTR_SET_VALUE(verbose_, verbose) };


  protected:
    // The classification of the configuration item. The following classifications are supported:
    // 
    // - CommonResourceConfig: common resource configurations
    // 
    // - DLCAutoRecycle: automatic DLC resource recycling
    // 
    // - DLCPriorityConfig: DLC priority settings
    // 
    // - DSWPriorityConfig: DSW priority settings
    // 
    // - QuotaMaximumDuration: the maximum runtime of a DLC task for a quota
    // 
    // - CommonTagConfig: tag settings
    shared_ptr<string> categoryName_ {};
    // The key of the configuration item. The following keys are supported:
    // 
    // - tempStoragePath: the temporary storage path. This key applies only when CategoryName is set to CommonResourceConfig.
    // 
    // - isAutoRecycle: the automatic recycling configuration. This key applies only when CategoryName is set to DLCAutoRecycle.
    // 
    // - priorityConfig: the priority configuration. This key applies only when CategoryName is set to DLCPriorityConfig or DSWPriorityConfig.
    // 
    // - quotaMaximumDuration: the maximum runtime of a DLC task for a quota. This key applies only when CategoryName is set to QuotaMaximumDuration.
    // 
    // - predefinedTags: the predefined tags for the workspace. Resources that you create must have tags.
    shared_ptr<string> configKey_ {};
    // The value of the configuration item.
    shared_ptr<string> verbose_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIWorkSpace20210204
#endif
