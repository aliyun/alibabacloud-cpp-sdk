// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TAGRESOURCESREQUESTTAGS_HPP_
#define ALIBABACLOUD_MODELS_TAGRESOURCESREQUESTTAGS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
namespace Models
{
  class TagResourcesRequestTags : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TagResourcesRequestTags& obj) { 
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(Propagate, propagate_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, TagResourcesRequestTags& obj) { 
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(Propagate, propagate_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    TagResourcesRequestTags() = default ;
    TagResourcesRequestTags(const TagResourcesRequestTags &) = default ;
    TagResourcesRequestTags(TagResourcesRequestTags &&) = default ;
    TagResourcesRequestTags(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TagResourcesRequestTags() = default ;
    TagResourcesRequestTags& operator=(const TagResourcesRequestTags &) = default ;
    TagResourcesRequestTags& operator=(TagResourcesRequestTags &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->key_ == nullptr
        && return this->propagate_ == nullptr && return this->value_ == nullptr; };
    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string key() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline TagResourcesRequestTags& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // propagate Field Functions 
    bool hasPropagate() const { return this->propagate_ != nullptr;};
    void deletePropagate() { this->propagate_ = nullptr;};
    inline bool propagate() const { DARABONBA_PTR_GET_DEFAULT(propagate_, false) };
    inline TagResourcesRequestTags& setPropagate(bool propagate) { DARABONBA_PTR_SET_VALUE(propagate_, propagate) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline TagResourcesRequestTags& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The tag key.
    // 
    // You cannot specify an empty string as a tag key. The tag key can be up to 128 characters in length and cannot start with `acs:` or `aliyun`. The tag key cannot contain `http://` or `https://`.
    std::shared_ptr<string> key_ = nullptr;
    // Specifies whether to propagate the tag that you want to add. Valid values:
    // 
    // *   true: propagates the tag to new instances.
    // *   false: does not propagate the tag to any instance.
    // 
    // Default value: false.
    std::shared_ptr<bool> propagate_ = nullptr;
    // The tag value.
    // 
    // You can specify empty strings as tag values. The tag value can be up to 128 characters in length and cannot contain `http://` or `https://`.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
