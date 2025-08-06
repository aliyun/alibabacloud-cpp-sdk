// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDEDICATEDHOSTCLUSTERREQUESTTAG_HPP_
#define ALIBABACLOUD_MODELS_CREATEDEDICATEDHOSTCLUSTERREQUESTTAG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class CreateDedicatedHostClusterRequestTag : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDedicatedHostClusterRequestTag& obj) { 
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDedicatedHostClusterRequestTag& obj) { 
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    CreateDedicatedHostClusterRequestTag() = default ;
    CreateDedicatedHostClusterRequestTag(const CreateDedicatedHostClusterRequestTag &) = default ;
    CreateDedicatedHostClusterRequestTag(CreateDedicatedHostClusterRequestTag &&) = default ;
    CreateDedicatedHostClusterRequestTag(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDedicatedHostClusterRequestTag() = default ;
    CreateDedicatedHostClusterRequestTag& operator=(const CreateDedicatedHostClusterRequestTag &) = default ;
    CreateDedicatedHostClusterRequestTag& operator=(CreateDedicatedHostClusterRequestTag &&) = default ;
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
    inline CreateDedicatedHostClusterRequestTag& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline CreateDedicatedHostClusterRequestTag& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The tag key. Valid values of N: 1 to 20. The tag key cannot be an empty string. It can be no more than 64 characters in length, and can neither contain `http://` or `https://` nor start with `acs:` or `aliyun`.
    std::shared_ptr<string> key_ = nullptr;
    // The tag value. Valid values of N: 1 to 20. The tag value cannot be an empty string. It can be no more than 64 characters in length and cannot contain `http://` or `https://`.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
