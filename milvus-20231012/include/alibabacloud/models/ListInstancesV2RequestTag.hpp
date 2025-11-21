// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINSTANCESV2REQUESTTAG_HPP_
#define ALIBABACLOUD_MODELS_LISTINSTANCESV2REQUESTTAG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Milvus20231012
{
namespace Models
{
  class ListInstancesV2RequestTag : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInstancesV2RequestTag& obj) { 
      DARABONBA_PTR_TO_JSON(key, key_);
      DARABONBA_PTR_TO_JSON(value, value_);
    };
    friend void from_json(const Darabonba::Json& j, ListInstancesV2RequestTag& obj) { 
      DARABONBA_PTR_FROM_JSON(key, key_);
      DARABONBA_PTR_FROM_JSON(value, value_);
    };
    ListInstancesV2RequestTag() = default ;
    ListInstancesV2RequestTag(const ListInstancesV2RequestTag &) = default ;
    ListInstancesV2RequestTag(ListInstancesV2RequestTag &&) = default ;
    ListInstancesV2RequestTag(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInstancesV2RequestTag() = default ;
    ListInstancesV2RequestTag& operator=(const ListInstancesV2RequestTag &) = default ;
    ListInstancesV2RequestTag& operator=(ListInstancesV2RequestTag &&) = default ;
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
    inline ListInstancesV2RequestTag& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline ListInstancesV2RequestTag& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    std::shared_ptr<string> key_ = nullptr;
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Milvus20231012
#endif
