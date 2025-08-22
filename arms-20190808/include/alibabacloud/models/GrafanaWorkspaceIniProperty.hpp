// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GRAFANAWORKSPACEINIPROPERTY_HPP_
#define ALIBABACLOUD_MODELS_GRAFANAWORKSPACEINIPROPERTY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class GrafanaWorkspaceIniProperty : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GrafanaWorkspaceIniProperty& obj) { 
      DARABONBA_PTR_TO_JSON(defaultValue, defaultValue_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(example, example_);
      DARABONBA_PTR_TO_JSON(key, key_);
      DARABONBA_PTR_TO_JSON(secret, secret_);
      DARABONBA_PTR_TO_JSON(value, value_);
    };
    friend void from_json(const Darabonba::Json& j, GrafanaWorkspaceIniProperty& obj) { 
      DARABONBA_PTR_FROM_JSON(defaultValue, defaultValue_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(example, example_);
      DARABONBA_PTR_FROM_JSON(key, key_);
      DARABONBA_PTR_FROM_JSON(secret, secret_);
      DARABONBA_PTR_FROM_JSON(value, value_);
    };
    GrafanaWorkspaceIniProperty() = default ;
    GrafanaWorkspaceIniProperty(const GrafanaWorkspaceIniProperty &) = default ;
    GrafanaWorkspaceIniProperty(GrafanaWorkspaceIniProperty &&) = default ;
    GrafanaWorkspaceIniProperty(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GrafanaWorkspaceIniProperty() = default ;
    GrafanaWorkspaceIniProperty& operator=(const GrafanaWorkspaceIniProperty &) = default ;
    GrafanaWorkspaceIniProperty& operator=(GrafanaWorkspaceIniProperty &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->defaultValue_ != nullptr
        && this->description_ != nullptr && this->example_ != nullptr && this->key_ != nullptr && this->secret_ != nullptr && this->value_ != nullptr; };
    // defaultValue Field Functions 
    bool hasDefaultValue() const { return this->defaultValue_ != nullptr;};
    void deleteDefaultValue() { this->defaultValue_ = nullptr;};
    inline string defaultValue() const { DARABONBA_PTR_GET_DEFAULT(defaultValue_, "") };
    inline GrafanaWorkspaceIniProperty& setDefaultValue(string defaultValue) { DARABONBA_PTR_SET_VALUE(defaultValue_, defaultValue) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GrafanaWorkspaceIniProperty& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // example Field Functions 
    bool hasExample() const { return this->example_ != nullptr;};
    void deleteExample() { this->example_ = nullptr;};
    inline string example() const { DARABONBA_PTR_GET_DEFAULT(example_, "") };
    inline GrafanaWorkspaceIniProperty& setExample(string example) { DARABONBA_PTR_SET_VALUE(example_, example) };


    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string key() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline GrafanaWorkspaceIniProperty& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // secret Field Functions 
    bool hasSecret() const { return this->secret_ != nullptr;};
    void deleteSecret() { this->secret_ = nullptr;};
    inline bool secret() const { DARABONBA_PTR_GET_DEFAULT(secret_, false) };
    inline GrafanaWorkspaceIniProperty& setSecret(bool secret) { DARABONBA_PTR_SET_VALUE(secret_, secret) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline GrafanaWorkspaceIniProperty& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    std::shared_ptr<string> defaultValue_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> example_ = nullptr;
    std::shared_ptr<string> key_ = nullptr;
    std::shared_ptr<bool> secret_ = nullptr;
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
