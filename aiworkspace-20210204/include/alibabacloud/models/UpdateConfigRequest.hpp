// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATECONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
    class Labels : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Labels& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Labels& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      Labels() = default ;
      Labels(const Labels &) = default ;
      Labels(Labels &&) = default ;
      Labels(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Labels() = default ;
      Labels& operator=(const Labels &) = default ;
      Labels& operator=(Labels &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline Labels& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Labels& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // The key of the label.
      shared_ptr<string> key_ {};
      // The value of the label.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->categoryName_ == nullptr
        && this->configKey_ == nullptr && this->configValue_ == nullptr && this->labels_ == nullptr; };
    // categoryName Field Functions 
    bool hasCategoryName() const { return this->categoryName_ != nullptr;};
    void deleteCategoryName() { this->categoryName_ = nullptr;};
    inline string getCategoryName() const { DARABONBA_PTR_GET_DEFAULT(categoryName_, "") };
    inline UpdateConfigRequest& setCategoryName(string categoryName) { DARABONBA_PTR_SET_VALUE(categoryName_, categoryName) };


    // configKey Field Functions 
    bool hasConfigKey() const { return this->configKey_ != nullptr;};
    void deleteConfigKey() { this->configKey_ = nullptr;};
    inline string getConfigKey() const { DARABONBA_PTR_GET_DEFAULT(configKey_, "") };
    inline UpdateConfigRequest& setConfigKey(string configKey) { DARABONBA_PTR_SET_VALUE(configKey_, configKey) };


    // configValue Field Functions 
    bool hasConfigValue() const { return this->configValue_ != nullptr;};
    void deleteConfigValue() { this->configValue_ = nullptr;};
    inline string getConfigValue() const { DARABONBA_PTR_GET_DEFAULT(configValue_, "") };
    inline UpdateConfigRequest& setConfigValue(string configValue) { DARABONBA_PTR_SET_VALUE(configValue_, configValue) };


    // labels Field Functions 
    bool hasLabels() const { return this->labels_ != nullptr;};
    void deleteLabels() { this->labels_ = nullptr;};
    inline const vector<UpdateConfigRequest::Labels> & getLabels() const { DARABONBA_PTR_GET_CONST(labels_, vector<UpdateConfigRequest::Labels>) };
    inline vector<UpdateConfigRequest::Labels> getLabels() { DARABONBA_PTR_GET(labels_, vector<UpdateConfigRequest::Labels>) };
    inline UpdateConfigRequest& setLabels(const vector<UpdateConfigRequest::Labels> & labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };
    inline UpdateConfigRequest& setLabels(vector<UpdateConfigRequest::Labels> && labels) { DARABONBA_PTR_SET_RVALUE(labels_, labels) };


  protected:
    // The classification of the configuration item. The following classifications are supported:
    // 
    // - CommonResourceConfig: The common resource configuration.
    // 
    // - DLCAutoRecycle: The DLC auto-recycle configuration.
    // 
    // - DLCPriorityConfig: The DLC priority settings.
    // 
    // - DSWPriorityConfig: The DSW priority settings.
    // 
    // - QuotaMaximumDuration: The maximum runtime of a DLC task for a quota.
    // 
    // - CommonTagConfig: The tag settings.
    shared_ptr<string> categoryName_ {};
    // The key of the configuration item. The following keys are supported:
    // 
    // - tempStoragePath: The path for temporary storage. This key is valid only when CategoryName is set to CommonResourceConfig.
    // 
    // - isAutoRecycle: The auto-recycle configuration. This key is valid only when CategoryName is set to DLCAutoRecycle.
    // 
    // - priorityConfig: The priority configuration. This key is valid only when CategoryName is set to DLCPriorityConfig or DSWPriorityConfig.
    // 
    // - quotaMaximumDuration: The maximum runtime of a DLC task for a quota. This key is valid only when CategoryName is set to QuotaMaximumDuration.
    // 
    // - predefinedTags: The predefined tags for the workspace. Created resources must have these tags.
    shared_ptr<string> configKey_ {};
    // The value of the configuration item.
    shared_ptr<string> configValue_ {};
    // The list of labels for the configuration item.
    shared_ptr<vector<UpdateConfigRequest::Labels>> labels_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIWorkSpace20210204
#endif
