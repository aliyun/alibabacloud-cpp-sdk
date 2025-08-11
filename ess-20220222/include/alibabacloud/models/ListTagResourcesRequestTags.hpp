// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTAGRESOURCESREQUESTTAGS_HPP_
#define ALIBABACLOUD_MODELS_LISTTAGRESOURCESREQUESTTAGS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
namespace Models
{
  class ListTagResourcesRequestTags : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTagResourcesRequestTags& obj) { 
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, ListTagResourcesRequestTags& obj) { 
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    ListTagResourcesRequestTags() = default ;
    ListTagResourcesRequestTags(const ListTagResourcesRequestTags &) = default ;
    ListTagResourcesRequestTags(ListTagResourcesRequestTags &&) = default ;
    ListTagResourcesRequestTags(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTagResourcesRequestTags() = default ;
    ListTagResourcesRequestTags& operator=(const ListTagResourcesRequestTags &) = default ;
    ListTagResourcesRequestTags& operator=(ListTagResourcesRequestTags &&) = default ;
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
    inline ListTagResourcesRequestTags& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline ListTagResourcesRequestTags& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The key of the tag. The key is used to perform an exact match of Auto Scaling resources. The key must be 1 to 128 characters in length.
    // 
    // `Tags` is used to perform an exact match of Auto Scaling resources to which the specified tags are added. Specify a tag in the key-value pair format.
    // 
    // *   If you specify only `Tags.Key`, all resources whose tags contain the specified tag key are returned.
    // *   If you specify only `Tags.Value`, the `MissingParameter.TagKey` error is reported.
    // *   If you specify multiple key-value pairs at the same time, only Auto Scaling resources that match all the tag keys and tag values are returned.
    std::shared_ptr<string> key_ = nullptr;
    // The value of the tag. The value is used to perform an exact match of Auto Scaling resources. The value can be up to 128 characters in length.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
