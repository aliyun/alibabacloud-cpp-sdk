// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TAGRESOURCESREQUESTTAG_HPP_
#define ALIBABACLOUD_MODELS_TAGRESOURCESREQUESTTAG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace NAS20170626
{
namespace Models
{
  class TagResourcesRequestTag : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TagResourcesRequestTag& obj) { 
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, TagResourcesRequestTag& obj) { 
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    TagResourcesRequestTag() = default ;
    TagResourcesRequestTag(const TagResourcesRequestTag &) = default ;
    TagResourcesRequestTag(TagResourcesRequestTag &&) = default ;
    TagResourcesRequestTag(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TagResourcesRequestTag() = default ;
    TagResourcesRequestTag& operator=(const TagResourcesRequestTag &) = default ;
    TagResourcesRequestTag& operator=(TagResourcesRequestTag &&) = default ;
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
    inline TagResourcesRequestTag& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline TagResourcesRequestTag& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The key of tag N to add to the resource.
    // 
    // Limits:
    // 
    // *   The tag key cannot be left empty.
    // *   Valid values of N: 1 to 20.
    // *   The tag key must be 1 to 128 characters in length.
    // *   The tag key cannot start with `aliyun` or `acs:`.
    // *   The tag key cannot contain `http://` or `https://`.
    // 
    // This parameter is required.
    std::shared_ptr<string> key_ = nullptr;
    // The value of tag N to add to the resource.
    // 
    // Limits:
    // 
    // *   Valid values of N: 1 to 20.
    // *   The tag value must be 1 to 128 characters in length.
    // *   The tag value cannot start with `aliyun` or `acs:`.
    // *   The tag value cannot contain `http://` or `https://`.
    // 
    // This parameter is required.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
