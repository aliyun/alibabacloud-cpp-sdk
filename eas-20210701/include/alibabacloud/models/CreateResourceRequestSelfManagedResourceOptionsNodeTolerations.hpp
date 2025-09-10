// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATERESOURCEREQUESTSELFMANAGEDRESOURCEOPTIONSNODETOLERATIONS_HPP_
#define ALIBABACLOUD_MODELS_CREATERESOURCEREQUESTSELFMANAGEDRESOURCEOPTIONSNODETOLERATIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eas20210701
{
namespace Models
{
  class CreateResourceRequestSelfManagedResourceOptionsNodeTolerations : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateResourceRequestSelfManagedResourceOptionsNodeTolerations& obj) { 
      DARABONBA_PTR_TO_JSON(effect, effect_);
      DARABONBA_PTR_TO_JSON(key, key_);
      DARABONBA_PTR_TO_JSON(operator, operator_);
      DARABONBA_PTR_TO_JSON(value, value_);
    };
    friend void from_json(const Darabonba::Json& j, CreateResourceRequestSelfManagedResourceOptionsNodeTolerations& obj) { 
      DARABONBA_PTR_FROM_JSON(effect, effect_);
      DARABONBA_PTR_FROM_JSON(key, key_);
      DARABONBA_PTR_FROM_JSON(operator, operator_);
      DARABONBA_PTR_FROM_JSON(value, value_);
    };
    CreateResourceRequestSelfManagedResourceOptionsNodeTolerations() = default ;
    CreateResourceRequestSelfManagedResourceOptionsNodeTolerations(const CreateResourceRequestSelfManagedResourceOptionsNodeTolerations &) = default ;
    CreateResourceRequestSelfManagedResourceOptionsNodeTolerations(CreateResourceRequestSelfManagedResourceOptionsNodeTolerations &&) = default ;
    CreateResourceRequestSelfManagedResourceOptionsNodeTolerations(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateResourceRequestSelfManagedResourceOptionsNodeTolerations() = default ;
    CreateResourceRequestSelfManagedResourceOptionsNodeTolerations& operator=(const CreateResourceRequestSelfManagedResourceOptionsNodeTolerations &) = default ;
    CreateResourceRequestSelfManagedResourceOptionsNodeTolerations& operator=(CreateResourceRequestSelfManagedResourceOptionsNodeTolerations &&) = default ;
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
    inline CreateResourceRequestSelfManagedResourceOptionsNodeTolerations& setEffect(string effect) { DARABONBA_PTR_SET_VALUE(effect_, effect) };


    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string key() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline CreateResourceRequestSelfManagedResourceOptionsNodeTolerations& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // operator Field Functions 
    bool hasOperator() const { return this->operator_ != nullptr;};
    void deleteOperator() { this->operator_ = nullptr;};
    inline string _operator() const { DARABONBA_PTR_GET_DEFAULT(operator_, "") };
    inline CreateResourceRequestSelfManagedResourceOptionsNodeTolerations& setOperator(string _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline CreateResourceRequestSelfManagedResourceOptionsNodeTolerations& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The effect.
    // 
    // Valid values:
    // 
    // *   PreferNoSchedule
    // *   NoSchedule
    // *   NoExecute
    std::shared_ptr<string> effect_ = nullptr;
    // The key name.
    std::shared_ptr<string> key_ = nullptr;
    // The relationship between key names and key values.
    // 
    // Valid values:
    // 
    // *   Equal
    // *   Exists
    std::shared_ptr<string> operator_ = nullptr;
    // The key value.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eas20210701
#endif
