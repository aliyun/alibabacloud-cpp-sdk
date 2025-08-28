// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTVIRTUALPHYSICALCONNECTIONSREQUESTTAGS_HPP_
#define ALIBABACLOUD_MODELS_LISTVIRTUALPHYSICALCONNECTIONSREQUESTTAGS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class ListVirtualPhysicalConnectionsRequestTags : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListVirtualPhysicalConnectionsRequestTags& obj) { 
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, ListVirtualPhysicalConnectionsRequestTags& obj) { 
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    ListVirtualPhysicalConnectionsRequestTags() = default ;
    ListVirtualPhysicalConnectionsRequestTags(const ListVirtualPhysicalConnectionsRequestTags &) = default ;
    ListVirtualPhysicalConnectionsRequestTags(ListVirtualPhysicalConnectionsRequestTags &&) = default ;
    ListVirtualPhysicalConnectionsRequestTags(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListVirtualPhysicalConnectionsRequestTags() = default ;
    ListVirtualPhysicalConnectionsRequestTags& operator=(const ListVirtualPhysicalConnectionsRequestTags &) = default ;
    ListVirtualPhysicalConnectionsRequestTags& operator=(ListVirtualPhysicalConnectionsRequestTags &&) = default ;
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
    inline ListVirtualPhysicalConnectionsRequestTags& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline ListVirtualPhysicalConnectionsRequestTags& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The key of tag N to add to the resource. You can specify at most 20 tag keys. The tag key cannot be an empty string.
    // 
    // It can be up to 64 characters in length and can contain digits, periods (.), underscores (_), and hyphens (-). It cannot start with `aliyun` or `acs:`, and cannot contain `http://` or `https://`.
    std::shared_ptr<string> key_ = nullptr;
    // The value of tag N to add to the resource. You can specify at most 20 tag values. The tag value can be an empty string.
    // 
    // It can be up to 128 characters in length and can contain digits, periods (.), underscores (_), and hyphens (-). It cannot start with `aliyun` or `acs:`, and cannot contain `http://` or `https://`.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
