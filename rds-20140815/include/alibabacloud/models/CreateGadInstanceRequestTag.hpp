// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEGADINSTANCEREQUESTTAG_HPP_
#define ALIBABACLOUD_MODELS_CREATEGADINSTANCEREQUESTTAG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class CreateGADInstanceRequestTag : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateGADInstanceRequestTag& obj) { 
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, CreateGADInstanceRequestTag& obj) { 
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    CreateGADInstanceRequestTag() = default ;
    CreateGADInstanceRequestTag(const CreateGADInstanceRequestTag &) = default ;
    CreateGADInstanceRequestTag(CreateGADInstanceRequestTag &&) = default ;
    CreateGADInstanceRequestTag(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateGADInstanceRequestTag() = default ;
    CreateGADInstanceRequestTag& operator=(const CreateGADInstanceRequestTag &) = default ;
    CreateGADInstanceRequestTag& operator=(CreateGADInstanceRequestTag &&) = default ;
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
    inline CreateGADInstanceRequestTag& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline CreateGADInstanceRequestTag& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The key of the tag. You can create N tag keys at a time. Valid values of N: **1 to 20**. The value of this parameter cannot be an empty string.
    std::shared_ptr<string> key_ = nullptr;
    // The value of the tag. You can create N tag values at a time. Valid values of N: **1 to 20**. The value of this parameter can be an empty string.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
