// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTIPAMRESOURCEDISCOVERIESRESPONSEBODYIPAMRESOURCEDISCOVERIESTAGS_HPP_
#define ALIBABACLOUD_MODELS_LISTIPAMRESOURCEDISCOVERIESRESPONSEBODYIPAMRESOURCEDISCOVERIESTAGS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace VpcIpam20230228
{
namespace Models
{
  class ListIpamResourceDiscoveriesResponseBodyIpamResourceDiscoveriesTags : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListIpamResourceDiscoveriesResponseBodyIpamResourceDiscoveriesTags& obj) { 
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, ListIpamResourceDiscoveriesResponseBodyIpamResourceDiscoveriesTags& obj) { 
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    ListIpamResourceDiscoveriesResponseBodyIpamResourceDiscoveriesTags() = default ;
    ListIpamResourceDiscoveriesResponseBodyIpamResourceDiscoveriesTags(const ListIpamResourceDiscoveriesResponseBodyIpamResourceDiscoveriesTags &) = default ;
    ListIpamResourceDiscoveriesResponseBodyIpamResourceDiscoveriesTags(ListIpamResourceDiscoveriesResponseBodyIpamResourceDiscoveriesTags &&) = default ;
    ListIpamResourceDiscoveriesResponseBodyIpamResourceDiscoveriesTags(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListIpamResourceDiscoveriesResponseBodyIpamResourceDiscoveriesTags() = default ;
    ListIpamResourceDiscoveriesResponseBodyIpamResourceDiscoveriesTags& operator=(const ListIpamResourceDiscoveriesResponseBodyIpamResourceDiscoveriesTags &) = default ;
    ListIpamResourceDiscoveriesResponseBodyIpamResourceDiscoveriesTags& operator=(ListIpamResourceDiscoveriesResponseBodyIpamResourceDiscoveriesTags &&) = default ;
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
    inline ListIpamResourceDiscoveriesResponseBodyIpamResourceDiscoveriesTags& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline ListIpamResourceDiscoveriesResponseBodyIpamResourceDiscoveriesTags& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The tag key.
    std::shared_ptr<string> key_ = nullptr;
    // The tag value.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace VpcIpam20230228
#endif
