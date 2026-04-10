// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_APMFILTERCONFIG_HPP_
#define ALIBABACLOUD_MODELS_APMFILTERCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class ApmFilterConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ApmFilterConfig& obj) { 
      DARABONBA_PTR_TO_JSON(key, key_);
      DARABONBA_PTR_TO_JSON(type, type_);
      DARABONBA_PTR_TO_JSON(value, value_);
    };
    friend void from_json(const Darabonba::Json& j, ApmFilterConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(key, key_);
      DARABONBA_PTR_FROM_JSON(type, type_);
      DARABONBA_PTR_FROM_JSON(value, value_);
    };
    ApmFilterConfig() = default ;
    ApmFilterConfig(const ApmFilterConfig &) = default ;
    ApmFilterConfig(ApmFilterConfig &&) = default ;
    ApmFilterConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ApmFilterConfig() = default ;
    ApmFilterConfig& operator=(const ApmFilterConfig &) = default ;
    ApmFilterConfig& operator=(ApmFilterConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->key_ == nullptr
        && this->type_ == nullptr && this->value_ == nullptr; };
    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline ApmFilterConfig& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ApmFilterConfig& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline ApmFilterConfig& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // 维度键
    // 
    // This parameter is required.
    shared_ptr<string> key_ {};
    // 过滤类型
    // 
    // This parameter is required.
    shared_ptr<string> type_ {};
    // 过滤值（type 为 ALL/DISABLED 时可为空）
    shared_ptr<string> value_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
