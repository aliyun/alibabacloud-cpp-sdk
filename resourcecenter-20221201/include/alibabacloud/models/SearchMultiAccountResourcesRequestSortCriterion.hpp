// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHMULTIACCOUNTRESOURCESREQUESTSORTCRITERION_HPP_
#define ALIBABACLOUD_MODELS_SEARCHMULTIACCOUNTRESOURCESREQUESTSORTCRITERION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceCenter20221201
{
namespace Models
{
  class SearchMultiAccountResourcesRequestSortCriterion : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchMultiAccountResourcesRequestSortCriterion& obj) { 
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(Order, order_);
    };
    friend void from_json(const Darabonba::Json& j, SearchMultiAccountResourcesRequestSortCriterion& obj) { 
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(Order, order_);
    };
    SearchMultiAccountResourcesRequestSortCriterion() = default ;
    SearchMultiAccountResourcesRequestSortCriterion(const SearchMultiAccountResourcesRequestSortCriterion &) = default ;
    SearchMultiAccountResourcesRequestSortCriterion(SearchMultiAccountResourcesRequestSortCriterion &&) = default ;
    SearchMultiAccountResourcesRequestSortCriterion(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchMultiAccountResourcesRequestSortCriterion() = default ;
    SearchMultiAccountResourcesRequestSortCriterion& operator=(const SearchMultiAccountResourcesRequestSortCriterion &) = default ;
    SearchMultiAccountResourcesRequestSortCriterion& operator=(SearchMultiAccountResourcesRequestSortCriterion &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->key_ == nullptr
        && return this->order_ == nullptr; };
    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string key() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline SearchMultiAccountResourcesRequestSortCriterion& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // order Field Functions 
    bool hasOrder() const { return this->order_ != nullptr;};
    void deleteOrder() { this->order_ = nullptr;};
    inline string order() const { DARABONBA_PTR_GET_DEFAULT(order_, "") };
    inline SearchMultiAccountResourcesRequestSortCriterion& setOrder(string order) { DARABONBA_PTR_SET_VALUE(order_, order) };


  protected:
    // The attribute based on which the entries are sorted.
    // 
    // The value CreateTime indicates the creation time of resources.
    std::shared_ptr<string> key_ = nullptr;
    // The order in which the entries are sorted. Valid values:
    // 
    // *   ASC: The entries are sorted in ascending order. This value is the default value.
    // *   DESC: The entries are sorted in descending order.
    std::shared_ptr<string> order_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceCenter20221201
#endif
