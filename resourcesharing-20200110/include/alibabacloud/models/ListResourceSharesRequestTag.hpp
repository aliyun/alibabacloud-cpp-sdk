// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRESOURCESHARESREQUESTTAG_HPP_
#define ALIBABACLOUD_MODELS_LISTRESOURCESHARESREQUESTTAG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceSharing20200110
{
namespace Models
{
  class ListResourceSharesRequestTag : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListResourceSharesRequestTag& obj) { 
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, ListResourceSharesRequestTag& obj) { 
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    ListResourceSharesRequestTag() = default ;
    ListResourceSharesRequestTag(const ListResourceSharesRequestTag &) = default ;
    ListResourceSharesRequestTag(ListResourceSharesRequestTag &&) = default ;
    ListResourceSharesRequestTag(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListResourceSharesRequestTag() = default ;
    ListResourceSharesRequestTag& operator=(const ListResourceSharesRequestTag &) = default ;
    ListResourceSharesRequestTag& operator=(ListResourceSharesRequestTag &&) = default ;
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
    inline ListResourceSharesRequestTag& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline ListResourceSharesRequestTag& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The tag key.
    // 
    // >  The tag key can be 128 characters in length and cannot start with `acs:` or `aliyun`. The tag key cannot contain `http://` or `https://`.
    std::shared_ptr<string> key_ = nullptr;
    // The tag value.
    // 
    // >  The tag value can be 128 characters in length and cannot start with `acs:`. The tag value cannot contain `http://` or `https://`.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceSharing20200110
#endif
