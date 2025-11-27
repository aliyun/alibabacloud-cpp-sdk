// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPOSTPAYORDERSHRINKREQUESTTAG_HPP_
#define ALIBABACLOUD_MODELS_CREATEPOSTPAYORDERSHRINKREQUESTTAG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alikafka20190916
{
namespace Models
{
  class CreatePostPayOrderShrinkRequestTag : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePostPayOrderShrinkRequestTag& obj) { 
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePostPayOrderShrinkRequestTag& obj) { 
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    CreatePostPayOrderShrinkRequestTag() = default ;
    CreatePostPayOrderShrinkRequestTag(const CreatePostPayOrderShrinkRequestTag &) = default ;
    CreatePostPayOrderShrinkRequestTag(CreatePostPayOrderShrinkRequestTag &&) = default ;
    CreatePostPayOrderShrinkRequestTag(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePostPayOrderShrinkRequestTag() = default ;
    CreatePostPayOrderShrinkRequestTag& operator=(const CreatePostPayOrderShrinkRequestTag &) = default ;
    CreatePostPayOrderShrinkRequestTag& operator=(CreatePostPayOrderShrinkRequestTag &&) = default ;
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
    inline CreatePostPayOrderShrinkRequestTag& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline CreatePostPayOrderShrinkRequestTag& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The key of tag N.
    // 
    // *   Valid values of N: 1 to 20.
    // *   If this parameter is left empty, the keys of all tags are matched.
    // *   The tag key must be up to 128 characters in length. It cannot start with acs: or aliyun or contain [http:// or https://.](http://https://。)
    // 
    // This parameter is required.
    std::shared_ptr<string> key_ = nullptr;
    // The value of tag N.
    // 
    // *   Valid values of N: 1 to 20.
    // *   If you do not specify a tag key, you cannot specify a tag value. If this parameter is not configured, all tag values are matched.
    // *   The tag value must be 1 to 128 characters in length. It cannot start with acs: or aliyun or contain [http:// or https://.](http://https://。)
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alikafka20190916
#endif
