// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCONFIGSRESPONSEBODYCONFIGS_HPP_
#define ALIBABACLOUD_MODELS_LISTCONFIGSRESPONSEBODYCONFIGS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListConfigsResponseBodyConfigsLabels.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIWorkSpace20210204
{
namespace Models
{
  class ListConfigsResponseBodyConfigs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListConfigsResponseBodyConfigs& obj) { 
      DARABONBA_PTR_TO_JSON(ConfigKey, configKey_);
      DARABONBA_PTR_TO_JSON(ConfigValue, configValue_);
      DARABONBA_PTR_TO_JSON(GmtCreateTime, gmtCreateTime_);
      DARABONBA_PTR_TO_JSON(GmtModifiedTime, gmtModifiedTime_);
      DARABONBA_PTR_TO_JSON(Labels, labels_);
    };
    friend void from_json(const Darabonba::Json& j, ListConfigsResponseBodyConfigs& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfigKey, configKey_);
      DARABONBA_PTR_FROM_JSON(ConfigValue, configValue_);
      DARABONBA_PTR_FROM_JSON(GmtCreateTime, gmtCreateTime_);
      DARABONBA_PTR_FROM_JSON(GmtModifiedTime, gmtModifiedTime_);
      DARABONBA_PTR_FROM_JSON(Labels, labels_);
    };
    ListConfigsResponseBodyConfigs() = default ;
    ListConfigsResponseBodyConfigs(const ListConfigsResponseBodyConfigs &) = default ;
    ListConfigsResponseBodyConfigs(ListConfigsResponseBodyConfigs &&) = default ;
    ListConfigsResponseBodyConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListConfigsResponseBodyConfigs() = default ;
    ListConfigsResponseBodyConfigs& operator=(const ListConfigsResponseBodyConfigs &) = default ;
    ListConfigsResponseBodyConfigs& operator=(ListConfigsResponseBodyConfigs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->configKey_ != nullptr
        && this->configValue_ != nullptr && this->gmtCreateTime_ != nullptr && this->gmtModifiedTime_ != nullptr && this->labels_ != nullptr; };
    // configKey Field Functions 
    bool hasConfigKey() const { return this->configKey_ != nullptr;};
    void deleteConfigKey() { this->configKey_ = nullptr;};
    inline string configKey() const { DARABONBA_PTR_GET_DEFAULT(configKey_, "") };
    inline ListConfigsResponseBodyConfigs& setConfigKey(string configKey) { DARABONBA_PTR_SET_VALUE(configKey_, configKey) };


    // configValue Field Functions 
    bool hasConfigValue() const { return this->configValue_ != nullptr;};
    void deleteConfigValue() { this->configValue_ = nullptr;};
    inline string configValue() const { DARABONBA_PTR_GET_DEFAULT(configValue_, "") };
    inline ListConfigsResponseBodyConfigs& setConfigValue(string configValue) { DARABONBA_PTR_SET_VALUE(configValue_, configValue) };


    // gmtCreateTime Field Functions 
    bool hasGmtCreateTime() const { return this->gmtCreateTime_ != nullptr;};
    void deleteGmtCreateTime() { this->gmtCreateTime_ = nullptr;};
    inline string gmtCreateTime() const { DARABONBA_PTR_GET_DEFAULT(gmtCreateTime_, "") };
    inline ListConfigsResponseBodyConfigs& setGmtCreateTime(string gmtCreateTime) { DARABONBA_PTR_SET_VALUE(gmtCreateTime_, gmtCreateTime) };


    // gmtModifiedTime Field Functions 
    bool hasGmtModifiedTime() const { return this->gmtModifiedTime_ != nullptr;};
    void deleteGmtModifiedTime() { this->gmtModifiedTime_ = nullptr;};
    inline string gmtModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(gmtModifiedTime_, "") };
    inline ListConfigsResponseBodyConfigs& setGmtModifiedTime(string gmtModifiedTime) { DARABONBA_PTR_SET_VALUE(gmtModifiedTime_, gmtModifiedTime) };


    // labels Field Functions 
    bool hasLabels() const { return this->labels_ != nullptr;};
    void deleteLabels() { this->labels_ = nullptr;};
    inline const vector<Models::ListConfigsResponseBodyConfigsLabels> & labels() const { DARABONBA_PTR_GET_CONST(labels_, vector<Models::ListConfigsResponseBodyConfigsLabels>) };
    inline vector<Models::ListConfigsResponseBodyConfigsLabels> labels() { DARABONBA_PTR_GET(labels_, vector<Models::ListConfigsResponseBodyConfigsLabels>) };
    inline ListConfigsResponseBodyConfigs& setLabels(const vector<Models::ListConfigsResponseBodyConfigsLabels> & labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };
    inline ListConfigsResponseBodyConfigs& setLabels(vector<Models::ListConfigsResponseBodyConfigsLabels> && labels) { DARABONBA_PTR_SET_RVALUE(labels_, labels) };


  protected:
    // The key of the configuration item. Supported keys:
    // 
    // *   tempStoragePath: Temporary storage path. This key can be used only when CategoryName is set to CommonResourceConfig.
    // *   isAutoRecycle: Automatic recycle configuration. This key can be used only when CategoryName is set to DLCAutoRecycle.
    // *   tempStoragePath: Temporary storage path. This key can be used only when CategoryName is set to CommonResourceConfig.
    // *   quotaMaximumDuration: Maximum run time of DLC jobs for a quota. This key can be used only when CategoryName is set to QuotaMaximumDuration.
    // *   predefinedTags: The predefined tags of the workspace. All created resources must have tags
    std::shared_ptr<string> configKey_ = nullptr;
    // The value of the configuration item.
    std::shared_ptr<string> configValue_ = nullptr;
    std::shared_ptr<string> gmtCreateTime_ = nullptr;
    std::shared_ptr<string> gmtModifiedTime_ = nullptr;
    // The tags of the configuration item.
    std::shared_ptr<vector<Models::ListConfigsResponseBodyConfigsLabels>> labels_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIWorkSpace20210204
#endif
