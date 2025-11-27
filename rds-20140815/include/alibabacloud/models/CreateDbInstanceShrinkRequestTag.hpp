// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDBINSTANCESHRINKREQUESTTAG_HPP_
#define ALIBABACLOUD_MODELS_CREATEDBINSTANCESHRINKREQUESTTAG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class CreateDBInstanceShrinkRequestTag : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDBInstanceShrinkRequestTag& obj) { 
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDBInstanceShrinkRequestTag& obj) { 
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    CreateDBInstanceShrinkRequestTag() = default ;
    CreateDBInstanceShrinkRequestTag(const CreateDBInstanceShrinkRequestTag &) = default ;
    CreateDBInstanceShrinkRequestTag(CreateDBInstanceShrinkRequestTag &&) = default ;
    CreateDBInstanceShrinkRequestTag(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDBInstanceShrinkRequestTag() = default ;
    CreateDBInstanceShrinkRequestTag& operator=(const CreateDBInstanceShrinkRequestTag &) = default ;
    CreateDBInstanceShrinkRequestTag& operator=(CreateDBInstanceShrinkRequestTag &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->key_ == nullptr
        && return this->value_ == nullptr; };
    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string key() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline CreateDBInstanceShrinkRequestTag& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline CreateDBInstanceShrinkRequestTag& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The tag key. You can use this parameter to add tags to the instance.
    // 
    // *   If the specified tag key is an existing key, the system directly adds the tag key to the instance. You can call the ListTagResources to query the existing tag.
    // *   If the specified tag key does not exist, the system creates the tag key and adds the tag key to the instance.
    // *   The value cannot be an empty string.
    // *   This parameter must be used together with the **Tag.Value** parameter.
    std::shared_ptr<string> key_ = nullptr;
    // The tag value. You can use this parameter to add tags to the instance.
    // 
    // *   If the specified tag value is found in the specified tag key, the system directly adds the tag value to the instance. You can call the ListTagResources to query the existing tag.
    // *   If the specified tag value is not found in the specified tag key, the system creates the tag value and adds the tag value to the instance.
    // *   This parameter must be used together with the **Tag.Key** parameter.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
