// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ACKNODESELECTORTAINTS_HPP_
#define ALIBABACLOUD_MODELS_ACKNODESELECTORTAINTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class AckNodeSelectorTaints : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AckNodeSelectorTaints& obj) { 
      DARABONBA_PTR_TO_JSON(Effect, effect_);
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, AckNodeSelectorTaints& obj) { 
      DARABONBA_PTR_FROM_JSON(Effect, effect_);
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    AckNodeSelectorTaints() = default ;
    AckNodeSelectorTaints(const AckNodeSelectorTaints &) = default ;
    AckNodeSelectorTaints(AckNodeSelectorTaints &&) = default ;
    AckNodeSelectorTaints(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AckNodeSelectorTaints() = default ;
    AckNodeSelectorTaints& operator=(const AckNodeSelectorTaints &) = default ;
    AckNodeSelectorTaints& operator=(AckNodeSelectorTaints &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->effect_ == nullptr
        && return this->key_ == nullptr && return this->value_ == nullptr; };
    // effect Field Functions 
    bool hasEffect() const { return this->effect_ != nullptr;};
    void deleteEffect() { this->effect_ = nullptr;};
    inline string effect() const { DARABONBA_PTR_GET_DEFAULT(effect_, "") };
    inline AckNodeSelectorTaints& setEffect(string effect) { DARABONBA_PTR_SET_VALUE(effect_, effect) };


    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string key() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline AckNodeSelectorTaints& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline AckNodeSelectorTaints& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // 污点效果。
    std::shared_ptr<string> effect_ = nullptr;
    // 污点键。
    std::shared_ptr<string> key_ = nullptr;
    // 污点值。
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
