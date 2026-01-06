// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECONFIGSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATECONFIGSREQUEST_HPP_
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
  class UpdateConfigsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateConfigsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Configs, configs_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateConfigsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Configs, configs_);
    };
    UpdateConfigsRequest() = default ;
    UpdateConfigsRequest(const UpdateConfigsRequest &) = default ;
    UpdateConfigsRequest(UpdateConfigsRequest &&) = default ;
    UpdateConfigsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateConfigsRequest() = default ;
    UpdateConfigsRequest& operator=(const UpdateConfigsRequest &) = default ;
    UpdateConfigsRequest& operator=(UpdateConfigsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Configs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Configs& obj) { 
        DARABONBA_PTR_TO_JSON(CategoryName, categoryName_);
        DARABONBA_PTR_TO_JSON(ConfigKey, configKey_);
        DARABONBA_PTR_TO_JSON(ConfigValue, configValue_);
        DARABONBA_PTR_TO_JSON(Labels, labels_);
      };
      friend void from_json(const Darabonba::Json& j, Configs& obj) { 
        DARABONBA_PTR_FROM_JSON(CategoryName, categoryName_);
        DARABONBA_PTR_FROM_JSON(ConfigKey, configKey_);
        DARABONBA_PTR_FROM_JSON(ConfigValue, configValue_);
        DARABONBA_PTR_FROM_JSON(Labels, labels_);
      };
      Configs() = default ;
      Configs(const Configs &) = default ;
      Configs(Configs &&) = default ;
      Configs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Configs() = default ;
      Configs& operator=(const Configs &) = default ;
      Configs& operator=(Configs &&) = default ;
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
        // The tag key.
        shared_ptr<string> key_ {};
        // The value of the tag.
        shared_ptr<string> value_ {};
      };

      virtual bool empty() const override { return this->categoryName_ == nullptr
        && this->configKey_ == nullptr && this->configValue_ == nullptr && this->labels_ == nullptr; };
      // categoryName Field Functions 
      bool hasCategoryName() const { return this->categoryName_ != nullptr;};
      void deleteCategoryName() { this->categoryName_ = nullptr;};
      inline string getCategoryName() const { DARABONBA_PTR_GET_DEFAULT(categoryName_, "") };
      inline Configs& setCategoryName(string categoryName) { DARABONBA_PTR_SET_VALUE(categoryName_, categoryName) };


      // configKey Field Functions 
      bool hasConfigKey() const { return this->configKey_ != nullptr;};
      void deleteConfigKey() { this->configKey_ = nullptr;};
      inline string getConfigKey() const { DARABONBA_PTR_GET_DEFAULT(configKey_, "") };
      inline Configs& setConfigKey(string configKey) { DARABONBA_PTR_SET_VALUE(configKey_, configKey) };


      // configValue Field Functions 
      bool hasConfigValue() const { return this->configValue_ != nullptr;};
      void deleteConfigValue() { this->configValue_ = nullptr;};
      inline string getConfigValue() const { DARABONBA_PTR_GET_DEFAULT(configValue_, "") };
      inline Configs& setConfigValue(string configValue) { DARABONBA_PTR_SET_VALUE(configValue_, configValue) };


      // labels Field Functions 
      bool hasLabels() const { return this->labels_ != nullptr;};
      void deleteLabels() { this->labels_ = nullptr;};
      inline const vector<Configs::Labels> & getLabels() const { DARABONBA_PTR_GET_CONST(labels_, vector<Configs::Labels>) };
      inline vector<Configs::Labels> getLabels() { DARABONBA_PTR_GET(labels_, vector<Configs::Labels>) };
      inline Configs& setLabels(const vector<Configs::Labels> & labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };
      inline Configs& setLabels(vector<Configs::Labels> && labels) { DARABONBA_PTR_SET_RVALUE(labels_, labels) };


    protected:
      // The category of the configuration item. Supported categories:
      // 
      // *   CommonResourceConfig
      // *   DLCAutoRecycle
      // *   DLCPriorityConfig
      // *   DSWPriorityConfig
      // *   QuotaMaximumDuration
      // *   CommonTagConfig
      shared_ptr<string> categoryName_ {};
      // The key of the configuration item. Supported keys:
      // 
      // *   tempStoragePath: Temporary storage path. This key can be used only when CategoryName is set to CommonResourceConfig.
      // *   isAutoRecycle: Automatic recycle configuration. This key can be used only when CategoryName is set to DLCAutoRecycle.
      // *   tempStoragePath: Temporary storage path. This key can be used only when CategoryName is set to CommonResourceConfig.
      // *   quotaMaximumDuration: Maximum run time of DLC jobs for a quota. This key can be used only when CategoryName is set to QuotaMaximumDuration.
      // *   predefinedTags: The predefined tags of the workspace. All created resources must have tags.
      shared_ptr<string> configKey_ {};
      // The value of the configuration item.
      // 
      // *   When ConfigKey is predefinedTags, the ConfigValue follows this format: [{"Type":"Tag","Key":"Key1","Value":"{"Products":"DLC,DSW,EAS","Values":"value1,value2,value3"}"}]. "Products" indicates the products that use the predefined tags.
      shared_ptr<string> configValue_ {};
      // The tags of the configuration item.
      shared_ptr<vector<Configs::Labels>> labels_ {};
    };

    virtual bool empty() const override { return this->configs_ == nullptr; };
    // configs Field Functions 
    bool hasConfigs() const { return this->configs_ != nullptr;};
    void deleteConfigs() { this->configs_ = nullptr;};
    inline const vector<UpdateConfigsRequest::Configs> & getConfigs() const { DARABONBA_PTR_GET_CONST(configs_, vector<UpdateConfigsRequest::Configs>) };
    inline vector<UpdateConfigsRequest::Configs> getConfigs() { DARABONBA_PTR_GET(configs_, vector<UpdateConfigsRequest::Configs>) };
    inline UpdateConfigsRequest& setConfigs(const vector<UpdateConfigsRequest::Configs> & configs) { DARABONBA_PTR_SET_VALUE(configs_, configs) };
    inline UpdateConfigsRequest& setConfigs(vector<UpdateConfigsRequest::Configs> && configs) { DARABONBA_PTR_SET_RVALUE(configs_, configs) };


  protected:
    // The list of workspace configurations to update or add.
    shared_ptr<vector<UpdateConfigsRequest::Configs>> configs_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIWorkSpace20210204
#endif
