// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEVPCPEERCONNECTIONREQUESTTAG_HPP_
#define ALIBABACLOUD_MODELS_CREATEVPCPEERCONNECTIONREQUESTTAG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace VpcPeer20220101
{
namespace Models
{
  class CreateVpcPeerConnectionRequestTag : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateVpcPeerConnectionRequestTag& obj) { 
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, CreateVpcPeerConnectionRequestTag& obj) { 
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    CreateVpcPeerConnectionRequestTag() = default ;
    CreateVpcPeerConnectionRequestTag(const CreateVpcPeerConnectionRequestTag &) = default ;
    CreateVpcPeerConnectionRequestTag(CreateVpcPeerConnectionRequestTag &&) = default ;
    CreateVpcPeerConnectionRequestTag(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateVpcPeerConnectionRequestTag() = default ;
    CreateVpcPeerConnectionRequestTag& operator=(const CreateVpcPeerConnectionRequestTag &) = default ;
    CreateVpcPeerConnectionRequestTag& operator=(CreateVpcPeerConnectionRequestTag &&) = default ;
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
    inline CreateVpcPeerConnectionRequestTag& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline CreateVpcPeerConnectionRequestTag& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The tag key. You must specify at least one tag key and at most 20 tag keys. The tag key cannot be an empty string.
    // 
    // The tag key can be up to 128 characters in length. It cannot start with `acs:` or `aliyun` and cannot contain `http://` or `https://`.
    std::shared_ptr<string> key_ = nullptr;
    // The tag value. You must specify at least one tag value and can specify at most 20 tag values. The tag value can be an empty string.
    // 
    // The tag value can be up to 128 characters in length. It cannot start with `aliyun` or `acs:`, and cannot contain `http://` or `https://`.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace VpcPeer20220101
#endif
