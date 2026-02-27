// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TAINT_HPP_
#define ALIBABACLOUD_MODELS_TAINT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class Taint : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Taint& obj) { 
      DARABONBA_PTR_TO_JSON(effect, effect_);
      DARABONBA_PTR_TO_JSON(key, key_);
      DARABONBA_PTR_TO_JSON(value, value_);
    };
    friend void from_json(const Darabonba::Json& j, Taint& obj) { 
      DARABONBA_PTR_FROM_JSON(effect, effect_);
      DARABONBA_PTR_FROM_JSON(key, key_);
      DARABONBA_PTR_FROM_JSON(value, value_);
    };
    Taint() = default ;
    Taint(const Taint &) = default ;
    Taint(Taint &&) = default ;
    Taint(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Taint() = default ;
    Taint& operator=(const Taint &) = default ;
    Taint& operator=(Taint &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->effect_ == nullptr
        && this->key_ == nullptr && this->value_ == nullptr; };
    // effect Field Functions 
    bool hasEffect() const { return this->effect_ != nullptr;};
    void deleteEffect() { this->effect_ = nullptr;};
    inline string getEffect() const { DARABONBA_PTR_GET_DEFAULT(effect_, "") };
    inline Taint& setEffect(string effect) { DARABONBA_PTR_SET_VALUE(effect_, effect) };


    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline Taint& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline Taint& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The scheduling policy. Valid values:
    // 
    // *   `NoSchedule`: This taint is not tolerated. However, pods that are already scheduled to the node are not affected.
    // *   `NoExecute`: Pods that do not tolerate this taint are evicted after this taint is added to the node.
    // *   `PreferNoSchedule`: This value specifies a soft limit on pods. Existing pods on the node are not affected. The scheduler attempts to avoid scheduling pods that cannot tolerate the taint to the node.
    // 
    // Default value: `NoSchedule`.
    shared_ptr<string> effect_ {};
    // The `key` of the taint.
    shared_ptr<string> key_ {};
    // The `value` of the taint.
    shared_ptr<string> value_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
