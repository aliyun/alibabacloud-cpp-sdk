// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SCALECLUSTERREQUESTTAINTS_HPP_
#define ALIBABACLOUD_MODELS_SCALECLUSTERREQUESTTAINTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class ScaleClusterRequestTaints : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ScaleClusterRequestTaints& obj) { 
      DARABONBA_PTR_TO_JSON(effect, effect_);
      DARABONBA_PTR_TO_JSON(key, key_);
      DARABONBA_PTR_TO_JSON(value, value_);
    };
    friend void from_json(const Darabonba::Json& j, ScaleClusterRequestTaints& obj) { 
      DARABONBA_PTR_FROM_JSON(effect, effect_);
      DARABONBA_PTR_FROM_JSON(key, key_);
      DARABONBA_PTR_FROM_JSON(value, value_);
    };
    ScaleClusterRequestTaints() = default ;
    ScaleClusterRequestTaints(const ScaleClusterRequestTaints &) = default ;
    ScaleClusterRequestTaints(ScaleClusterRequestTaints &&) = default ;
    ScaleClusterRequestTaints(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ScaleClusterRequestTaints() = default ;
    ScaleClusterRequestTaints& operator=(const ScaleClusterRequestTaints &) = default ;
    ScaleClusterRequestTaints& operator=(ScaleClusterRequestTaints &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->effect_ != nullptr
        && this->key_ != nullptr && this->value_ != nullptr; };
    // effect Field Functions 
    bool hasEffect() const { return this->effect_ != nullptr;};
    void deleteEffect() { this->effect_ = nullptr;};
    inline string effect() const { DARABONBA_PTR_GET_DEFAULT(effect_, "") };
    inline ScaleClusterRequestTaints& setEffect(string effect) { DARABONBA_PTR_SET_VALUE(effect_, effect) };


    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string key() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline ScaleClusterRequestTaints& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline ScaleClusterRequestTaints& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    std::shared_ptr<string> effect_ = nullptr;
    std::shared_ptr<string> key_ = nullptr;
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
