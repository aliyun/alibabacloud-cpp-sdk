// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAGGTASKGROUPSRESPONSEBODYAGGTASKGROUPSTAGS_HPP_
#define ALIBABACLOUD_MODELS_LISTAGGTASKGROUPSRESPONSEBODYAGGTASKGROUPSTAGS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class ListAggTaskGroupsResponseBodyAggTaskGroupsTags : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAggTaskGroupsResponseBodyAggTaskGroupsTags& obj) { 
      DARABONBA_PTR_TO_JSON(key, key_);
      DARABONBA_PTR_TO_JSON(value, value_);
    };
    friend void from_json(const Darabonba::Json& j, ListAggTaskGroupsResponseBodyAggTaskGroupsTags& obj) { 
      DARABONBA_PTR_FROM_JSON(key, key_);
      DARABONBA_PTR_FROM_JSON(value, value_);
    };
    ListAggTaskGroupsResponseBodyAggTaskGroupsTags() = default ;
    ListAggTaskGroupsResponseBodyAggTaskGroupsTags(const ListAggTaskGroupsResponseBodyAggTaskGroupsTags &) = default ;
    ListAggTaskGroupsResponseBodyAggTaskGroupsTags(ListAggTaskGroupsResponseBodyAggTaskGroupsTags &&) = default ;
    ListAggTaskGroupsResponseBodyAggTaskGroupsTags(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAggTaskGroupsResponseBodyAggTaskGroupsTags() = default ;
    ListAggTaskGroupsResponseBodyAggTaskGroupsTags& operator=(const ListAggTaskGroupsResponseBodyAggTaskGroupsTags &) = default ;
    ListAggTaskGroupsResponseBodyAggTaskGroupsTags& operator=(ListAggTaskGroupsResponseBodyAggTaskGroupsTags &&) = default ;
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
    inline ListAggTaskGroupsResponseBodyAggTaskGroupsTags& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline ListAggTaskGroupsResponseBodyAggTaskGroupsTags& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    std::shared_ptr<string> key_ = nullptr;
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
