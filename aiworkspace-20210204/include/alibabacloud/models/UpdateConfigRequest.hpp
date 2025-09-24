// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATECONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateConfigRequestLabels.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIWorkSpace20210204
{
namespace Models
{
  class UpdateConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CategoryName, categoryName_);
      DARABONBA_PTR_TO_JSON(ConfigKey, configKey_);
      DARABONBA_PTR_TO_JSON(ConfigValue, configValue_);
      DARABONBA_PTR_TO_JSON(Labels, labels_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CategoryName, categoryName_);
      DARABONBA_PTR_FROM_JSON(ConfigKey, configKey_);
      DARABONBA_PTR_FROM_JSON(ConfigValue, configValue_);
      DARABONBA_PTR_FROM_JSON(Labels, labels_);
    };
    UpdateConfigRequest() = default ;
    UpdateConfigRequest(const UpdateConfigRequest &) = default ;
    UpdateConfigRequest(UpdateConfigRequest &&) = default ;
    UpdateConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateConfigRequest() = default ;
    UpdateConfigRequest& operator=(const UpdateConfigRequest &) = default ;
    UpdateConfigRequest& operator=(UpdateConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->categoryName_ != nullptr
        && this->configKey_ != nullptr && this->configValue_ != nullptr && this->labels_ != nullptr; };
    // categoryName Field Functions 
    bool hasCategoryName() const { return this->categoryName_ != nullptr;};
    void deleteCategoryName() { this->categoryName_ = nullptr;};
    inline string categoryName() const { DARABONBA_PTR_GET_DEFAULT(categoryName_, "") };
    inline UpdateConfigRequest& setCategoryName(string categoryName) { DARABONBA_PTR_SET_VALUE(categoryName_, categoryName) };


    // configKey Field Functions 
    bool hasConfigKey() const { return this->configKey_ != nullptr;};
    void deleteConfigKey() { this->configKey_ = nullptr;};
    inline string configKey() const { DARABONBA_PTR_GET_DEFAULT(configKey_, "") };
    inline UpdateConfigRequest& setConfigKey(string configKey) { DARABONBA_PTR_SET_VALUE(configKey_, configKey) };


    // configValue Field Functions 
    bool hasConfigValue() const { return this->configValue_ != nullptr;};
    void deleteConfigValue() { this->configValue_ = nullptr;};
    inline string configValue() const { DARABONBA_PTR_GET_DEFAULT(configValue_, "") };
    inline UpdateConfigRequest& setConfigValue(string configValue) { DARABONBA_PTR_SET_VALUE(configValue_, configValue) };


    // labels Field Functions 
    bool hasLabels() const { return this->labels_ != nullptr;};
    void deleteLabels() { this->labels_ = nullptr;};
    inline const vector<UpdateConfigRequestLabels> & labels() const { DARABONBA_PTR_GET_CONST(labels_, vector<UpdateConfigRequestLabels>) };
    inline vector<UpdateConfigRequestLabels> labels() { DARABONBA_PTR_GET(labels_, vector<UpdateConfigRequestLabels>) };
    inline UpdateConfigRequest& setLabels(const vector<UpdateConfigRequestLabels> & labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };
    inline UpdateConfigRequest& setLabels(vector<UpdateConfigRequestLabels> && labels) { DARABONBA_PTR_SET_RVALUE(labels_, labels) };


  protected:
    // The category of the configuration item. Valid values:
    // 
    // *   CommonResourceConfig
    // *   DLCAutoRecycle
    // *   DLCPriorityConfig
    // *   DSWPriorityConfig
    // *   QuotaMaximumDuration
    // *   CommonTagConfig
    std::shared_ptr<string> categoryName_ = nullptr;
    // The key of the configuration item. Valid values:
    // 
    // *   tempStoragePath: Temporary storage path. This key can be used only when CategoryName is set to CommonResourceConfig.
    // *   isAutoRecycle: Automatic recycle configuration. This key can be used only when CategoryName is set to DLCAutoRecycle.
    // *   priorityConfig: Priority configuration. This key can be used only when CategoryName is set to DLCPriorityConfig or DSWPriorityConfig.
    // *   quotaMaximumDuration: Maximum run time of DLC jobs for a quota. This key can be used only when CategoryName is set to QuotaMaximumDuration.
    // *   predefinedTags: Preset tags of the workspace. Created resources must include tags.
    std::shared_ptr<string> configKey_ = nullptr;
    // The value of the configuration item.
    std::shared_ptr<string> configValue_ = nullptr;
    // The tags of the configuration item.
    std::shared_ptr<vector<UpdateConfigRequestLabels>> labels_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIWorkSpace20210204
#endif
