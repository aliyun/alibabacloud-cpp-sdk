// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETUSERCONFIGSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETUSERCONFIGSREQUEST_HPP_
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
  class SetUserConfigsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetUserConfigsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Configs, configs_);
    };
    friend void from_json(const Darabonba::Json& j, SetUserConfigsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Configs, configs_);
    };
    SetUserConfigsRequest() = default ;
    SetUserConfigsRequest(const SetUserConfigsRequest &) = default ;
    SetUserConfigsRequest(SetUserConfigsRequest &&) = default ;
    SetUserConfigsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetUserConfigsRequest() = default ;
    SetUserConfigsRequest& operator=(const SetUserConfigsRequest &) = default ;
    SetUserConfigsRequest& operator=(SetUserConfigsRequest &&) = default ;
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
        DARABONBA_PTR_TO_JSON(Scope, scope_);
      };
      friend void from_json(const Darabonba::Json& j, Configs& obj) { 
        DARABONBA_PTR_FROM_JSON(CategoryName, categoryName_);
        DARABONBA_PTR_FROM_JSON(ConfigKey, configKey_);
        DARABONBA_PTR_FROM_JSON(ConfigValue, configValue_);
        DARABONBA_PTR_FROM_JSON(Scope, scope_);
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
      virtual bool empty() const override { return this->categoryName_ == nullptr
        && this->configKey_ == nullptr && this->configValue_ == nullptr && this->scope_ == nullptr; };
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


      // scope Field Functions 
      bool hasScope() const { return this->scope_ != nullptr;};
      void deleteScope() { this->scope_ = nullptr;};
      inline string getScope() const { DARABONBA_PTR_GET_DEFAULT(scope_, "") };
      inline Configs& setScope(string scope) { DARABONBA_PTR_SET_VALUE(scope_, scope) };


    protected:
      // The category. Only DataPrivacyConfig is supported.
      // 
      // This parameter is required.
      shared_ptr<string> categoryName_ {};
      // The key of the configuration item.
      // 
      // This parameter is required.
      shared_ptr<string> configKey_ {};
      // The value of the configuration item.
      // 
      // This parameter is required.
      shared_ptr<string> configValue_ {};
      // The scope. Valid values: subUser and owner.
      // 
      // This parameter is required.
      shared_ptr<string> scope_ {};
    };

    virtual bool empty() const override { return this->configs_ == nullptr; };
    // configs Field Functions 
    bool hasConfigs() const { return this->configs_ != nullptr;};
    void deleteConfigs() { this->configs_ = nullptr;};
    inline const vector<SetUserConfigsRequest::Configs> & getConfigs() const { DARABONBA_PTR_GET_CONST(configs_, vector<SetUserConfigsRequest::Configs>) };
    inline vector<SetUserConfigsRequest::Configs> getConfigs() { DARABONBA_PTR_GET(configs_, vector<SetUserConfigsRequest::Configs>) };
    inline SetUserConfigsRequest& setConfigs(const vector<SetUserConfigsRequest::Configs> & configs) { DARABONBA_PTR_SET_VALUE(configs_, configs) };
    inline SetUserConfigsRequest& setConfigs(vector<SetUserConfigsRequest::Configs> && configs) { DARABONBA_PTR_SET_RVALUE(configs_, configs) };


  protected:
    // The configurations list.
    shared_ptr<vector<SetUserConfigsRequest::Configs>> configs_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIWorkSpace20210204
#endif
