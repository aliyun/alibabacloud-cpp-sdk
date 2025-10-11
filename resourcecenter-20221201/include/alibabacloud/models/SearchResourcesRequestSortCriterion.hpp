// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHRESOURCESREQUESTSORTCRITERION_HPP_
#define ALIBABACLOUD_MODELS_SEARCHRESOURCESREQUESTSORTCRITERION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceCenter20221201
{
namespace Models
{
  class SearchResourcesRequestSortCriterion : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchResourcesRequestSortCriterion& obj) { 
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(Order, order_);
    };
    friend void from_json(const Darabonba::Json& j, SearchResourcesRequestSortCriterion& obj) { 
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(Order, order_);
    };
    SearchResourcesRequestSortCriterion() = default ;
    SearchResourcesRequestSortCriterion(const SearchResourcesRequestSortCriterion &) = default ;
    SearchResourcesRequestSortCriterion(SearchResourcesRequestSortCriterion &&) = default ;
    SearchResourcesRequestSortCriterion(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchResourcesRequestSortCriterion() = default ;
    SearchResourcesRequestSortCriterion& operator=(const SearchResourcesRequestSortCriterion &) = default ;
    SearchResourcesRequestSortCriterion& operator=(SearchResourcesRequestSortCriterion &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->key_ != nullptr
        && this->order_ != nullptr; };
    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string key() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline SearchResourcesRequestSortCriterion& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // order Field Functions 
    bool hasOrder() const { return this->order_ != nullptr;};
    void deleteOrder() { this->order_ = nullptr;};
    inline string order() const { DARABONBA_PTR_GET_DEFAULT(order_, "") };
    inline SearchResourcesRequestSortCriterion& setOrder(string order) { DARABONBA_PTR_SET_VALUE(order_, order) };


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
