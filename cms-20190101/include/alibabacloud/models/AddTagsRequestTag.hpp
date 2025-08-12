// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDTAGSREQUESTTAG_HPP_
#define ALIBABACLOUD_MODELS_ADDTAGSREQUESTTAG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class AddTagsRequestTag : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddTagsRequestTag& obj) { 
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, AddTagsRequestTag& obj) { 
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    AddTagsRequestTag() = default ;
    AddTagsRequestTag(const AddTagsRequestTag &) = default ;
    AddTagsRequestTag(AddTagsRequestTag &&) = default ;
    AddTagsRequestTag(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddTagsRequestTag() = default ;
    AddTagsRequestTag& operator=(const AddTagsRequestTag &) = default ;
    AddTagsRequestTag& operator=(AddTagsRequestTag &&) = default ;
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
    inline AddTagsRequestTag& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline AddTagsRequestTag& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The tag key.
    // 
    // Valid values of N: 1 to 3. A tag key can be 1 to 64 characters in length.
    // 
    // You can create a tag key or specify an existing tag key. For more information about how to obtain a tag key, see [DescribeTagKeyList](https://help.aliyun.com/document_detail/2513189.html).
    // 
    // >  The tag key cannot start with `aliyun` or `acs:`. The tag key (`Tag.N.Key`) and tag value (`Tag.N.Value`) must be specified at the same time.
    // 
    // This parameter is required.
    std::shared_ptr<string> key_ = nullptr;
    // The tag value.
    // 
    // Valid values of N: 1 to 3. A tag value can be 1 to 64 characters in length.
    // 
    // You can create a tag value or specify an existing tag value. For more information about how to obtain a tag value, see [DescribeTagValueList](https://help.aliyun.com/document_detail/2513188.html).
    // 
    // >  The tag value cannot start with `aliyun` or `acs:`. The tag key (`Tag.N.Key`) and tag value (`Tag.N.Value`) must be specified at the same time.
    // 
    // This parameter is required.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
