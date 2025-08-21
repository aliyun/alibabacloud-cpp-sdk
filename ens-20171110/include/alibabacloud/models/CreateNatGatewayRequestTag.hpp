// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATENATGATEWAYREQUESTTAG_HPP_
#define ALIBABACLOUD_MODELS_CREATENATGATEWAYREQUESTTAG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class CreateNatGatewayRequestTag : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateNatGatewayRequestTag& obj) { 
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, CreateNatGatewayRequestTag& obj) { 
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    CreateNatGatewayRequestTag() = default ;
    CreateNatGatewayRequestTag(const CreateNatGatewayRequestTag &) = default ;
    CreateNatGatewayRequestTag(CreateNatGatewayRequestTag &&) = default ;
    CreateNatGatewayRequestTag(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateNatGatewayRequestTag() = default ;
    CreateNatGatewayRequestTag& operator=(const CreateNatGatewayRequestTag &) = default ;
    CreateNatGatewayRequestTag& operator=(CreateNatGatewayRequestTag &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->key_ != nullptr
        && this->value_ != nullptr; };
    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string key() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline CreateNatGatewayRequestTag& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline CreateNatGatewayRequestTag& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The key of tag N of the instance. Valid values of N: **1** to **20**.
    // 
    // *   The key cannot start with `aliyun`, `acs:`, `http://`, or `https://`.
    // *   The key must be up to 64 characters in length.
    // *   The tag key cannot be an empty string.
    std::shared_ptr<string> key_ = nullptr;
    // The value of tag N that is added to the resource. Valid values of N: 1 to 20. The tag value can be an empty string. The tag value can be up to 128 characters in length. It cannot start with acs: or contain http:// or https://.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
