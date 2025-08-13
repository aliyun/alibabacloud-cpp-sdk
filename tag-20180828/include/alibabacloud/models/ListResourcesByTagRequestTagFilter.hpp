// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRESOURCESBYTAGREQUESTTAGFILTER_HPP_
#define ALIBABACLOUD_MODELS_LISTRESOURCESBYTAGREQUESTTAGFILTER_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Tag20180828
{
namespace Models
{
  class ListResourcesByTagRequestTagFilter : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListResourcesByTagRequestTagFilter& obj) { 
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, ListResourcesByTagRequestTagFilter& obj) { 
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    ListResourcesByTagRequestTagFilter() = default ;
    ListResourcesByTagRequestTagFilter(const ListResourcesByTagRequestTagFilter &) = default ;
    ListResourcesByTagRequestTagFilter(ListResourcesByTagRequestTagFilter &&) = default ;
    ListResourcesByTagRequestTagFilter(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListResourcesByTagRequestTagFilter() = default ;
    ListResourcesByTagRequestTagFilter& operator=(const ListResourcesByTagRequestTagFilter &) = default ;
    ListResourcesByTagRequestTagFilter& operator=(ListResourcesByTagRequestTagFilter &&) = default ;
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
    inline ListResourcesByTagRequestTagFilter& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline ListResourcesByTagRequestTagFilter& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The tag key. This parameter specifies a filter condition for the query.
    // 
    // The tag key can be a maximum of 128 characters in length. It cannot contain `http://` or `https://` and cannot start with `acs:` or `aliyun`.
    // 
    // This parameter is required.
    std::shared_ptr<string> key_ = nullptr;
    // The tag value. This parameter specifies a filter condition for the query.
    // 
    // The tag value can be up to 128 characters in length and cannot contain `http://` or `https://`.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Tag20180828
#endif
