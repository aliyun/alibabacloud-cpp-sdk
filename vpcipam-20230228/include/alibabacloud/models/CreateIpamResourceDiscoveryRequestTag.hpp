// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEIPAMRESOURCEDISCOVERYREQUESTTAG_HPP_
#define ALIBABACLOUD_MODELS_CREATEIPAMRESOURCEDISCOVERYREQUESTTAG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace VpcIpam20230228
{
namespace Models
{
  class CreateIpamResourceDiscoveryRequestTag : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateIpamResourceDiscoveryRequestTag& obj) { 
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, CreateIpamResourceDiscoveryRequestTag& obj) { 
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    CreateIpamResourceDiscoveryRequestTag() = default ;
    CreateIpamResourceDiscoveryRequestTag(const CreateIpamResourceDiscoveryRequestTag &) = default ;
    CreateIpamResourceDiscoveryRequestTag(CreateIpamResourceDiscoveryRequestTag &&) = default ;
    CreateIpamResourceDiscoveryRequestTag(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateIpamResourceDiscoveryRequestTag() = default ;
    CreateIpamResourceDiscoveryRequestTag& operator=(const CreateIpamResourceDiscoveryRequestTag &) = default ;
    CreateIpamResourceDiscoveryRequestTag& operator=(CreateIpamResourceDiscoveryRequestTag &&) = default ;
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
    inline CreateIpamResourceDiscoveryRequestTag& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline CreateIpamResourceDiscoveryRequestTag& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The tag keys. You can specify at most 20 tag keys. It cannot be an empty string.
    // 
    // The tag key can be up to 64 characters in length and can contain letters, digits, periods (.), underscores (_), and hyphens (-). It must start with a letter but cannot start with `aliyun` or `acs:`. It cannot contain `http://` or `https://`.
    std::shared_ptr<string> key_ = nullptr;
    // The tag value of the resource. You can specify up to 20 tag values. You can specify empty strings as tag values.
    // 
    // The tag value can be up to 128 characters in length and cannot contain `http://` or `https://`.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace VpcIpam20230228
#endif
