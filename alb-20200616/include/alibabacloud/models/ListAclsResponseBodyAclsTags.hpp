// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTACLSRESPONSEBODYACLSTAGS_HPP_
#define ALIBABACLOUD_MODELS_LISTACLSRESPONSEBODYACLSTAGS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alb20200616
{
namespace Models
{
  class ListAclsResponseBodyAclsTags : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAclsResponseBodyAclsTags& obj) { 
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, ListAclsResponseBodyAclsTags& obj) { 
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    ListAclsResponseBodyAclsTags() = default ;
    ListAclsResponseBodyAclsTags(const ListAclsResponseBodyAclsTags &) = default ;
    ListAclsResponseBodyAclsTags(ListAclsResponseBodyAclsTags &&) = default ;
    ListAclsResponseBodyAclsTags(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAclsResponseBodyAclsTags() = default ;
    ListAclsResponseBodyAclsTags& operator=(const ListAclsResponseBodyAclsTags &) = default ;
    ListAclsResponseBodyAclsTags& operator=(ListAclsResponseBodyAclsTags &&) = default ;
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
    inline ListAclsResponseBodyAclsTags& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline ListAclsResponseBodyAclsTags& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The tag key. The tag key can be up to 128 characters in length. It cannot start with aliyun or acs: and cannot contain http:// or https://.
    std::shared_ptr<string> key_ = nullptr;
    // The tag value. The tag value can be up to 128 characters in length. It cannot start with aliyun or acs: and cannot contain http:// or https://.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alb20200616
#endif
