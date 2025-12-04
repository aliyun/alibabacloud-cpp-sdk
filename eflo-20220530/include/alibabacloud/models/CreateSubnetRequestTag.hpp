// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESUBNETREQUESTTAG_HPP_
#define ALIBABACLOUD_MODELS_CREATESUBNETREQUESTTAG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eflo20220530
{
namespace Models
{
  class CreateSubnetRequestTag : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSubnetRequestTag& obj) { 
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSubnetRequestTag& obj) { 
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    CreateSubnetRequestTag() = default ;
    CreateSubnetRequestTag(const CreateSubnetRequestTag &) = default ;
    CreateSubnetRequestTag(CreateSubnetRequestTag &&) = default ;
    CreateSubnetRequestTag(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSubnetRequestTag() = default ;
    CreateSubnetRequestTag& operator=(const CreateSubnetRequestTag &) = default ;
    CreateSubnetRequestTag& operator=(CreateSubnetRequestTag &&) = default ;
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
    inline CreateSubnetRequestTag& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline CreateSubnetRequestTag& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The tag key of the VPN attachment.
    // 
    // You cannot specify an empty string as a tag key. It can be up to 64 characters in length and cannot start with aliyun or acs:. It cannot contain http:// or https://.
    // 
    // You can specify at most 20 tag keys in each call.
    std::shared_ptr<string> key_ = nullptr;
    // The tag value of the VPN connection.
    // 
    // The tag value can be empty or a string of up to 128 characters. It cannot start with aliyun or acs:, and cannot contain http:// or https://.
    // 
    // Each key-value pair must be unique. You can specify values for at most 20 tag keys in each call.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eflo20220530
#endif
