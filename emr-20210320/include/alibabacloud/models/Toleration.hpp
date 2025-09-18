// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TOLERATION_HPP_
#define ALIBABACLOUD_MODELS_TOLERATION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class Toleration : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Toleration& obj) { 
      DARABONBA_PTR_TO_JSON(Effect, effect_);
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(Operator, operator_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, Toleration& obj) { 
      DARABONBA_PTR_FROM_JSON(Effect, effect_);
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(Operator, operator_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    Toleration() = default ;
    Toleration(const Toleration &) = default ;
    Toleration(Toleration &&) = default ;
    Toleration(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Toleration() = default ;
    Toleration& operator=(const Toleration &) = default ;
    Toleration& operator=(Toleration &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->effect_ != nullptr
        && this->key_ != nullptr && this->operator_ != nullptr && this->value_ != nullptr; };
    // effect Field Functions 
    bool hasEffect() const { return this->effect_ != nullptr;};
    void deleteEffect() { this->effect_ = nullptr;};
    inline string effect() const { DARABONBA_PTR_GET_DEFAULT(effect_, "") };
    inline Toleration& setEffect(string effect) { DARABONBA_PTR_SET_VALUE(effect_, effect) };


    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string key() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline Toleration& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // operator Field Functions 
    bool hasOperator() const { return this->operator_ != nullptr;};
    void deleteOperator() { this->operator_ = nullptr;};
    inline string _operator() const { DARABONBA_PTR_GET_DEFAULT(operator_, "") };
    inline Toleration& setOperator(string _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline Toleration& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    std::shared_ptr<string> effect_ = nullptr;
    std::shared_ptr<string> key_ = nullptr;
    std::shared_ptr<string> operator_ = nullptr;
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
