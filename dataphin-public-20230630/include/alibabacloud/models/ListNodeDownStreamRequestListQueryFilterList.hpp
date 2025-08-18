// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTNODEDOWNSTREAMREQUESTLISTQUERYFILTERLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTNODEDOWNSTREAMREQUESTLISTQUERYFILTERLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class ListNodeDownStreamRequestListQueryFilterList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListNodeDownStreamRequestListQueryFilterList& obj) { 
      DARABONBA_PTR_TO_JSON(Exclude, exclude_);
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(ValueList, valueList_);
    };
    friend void from_json(const Darabonba::Json& j, ListNodeDownStreamRequestListQueryFilterList& obj) { 
      DARABONBA_PTR_FROM_JSON(Exclude, exclude_);
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(ValueList, valueList_);
    };
    ListNodeDownStreamRequestListQueryFilterList() = default ;
    ListNodeDownStreamRequestListQueryFilterList(const ListNodeDownStreamRequestListQueryFilterList &) = default ;
    ListNodeDownStreamRequestListQueryFilterList(ListNodeDownStreamRequestListQueryFilterList &&) = default ;
    ListNodeDownStreamRequestListQueryFilterList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListNodeDownStreamRequestListQueryFilterList() = default ;
    ListNodeDownStreamRequestListQueryFilterList& operator=(const ListNodeDownStreamRequestListQueryFilterList &) = default ;
    ListNodeDownStreamRequestListQueryFilterList& operator=(ListNodeDownStreamRequestListQueryFilterList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->exclude_ != nullptr
        && this->key_ != nullptr && this->valueList_ != nullptr; };
    // exclude Field Functions 
    bool hasExclude() const { return this->exclude_ != nullptr;};
    void deleteExclude() { this->exclude_ = nullptr;};
    inline bool exclude() const { DARABONBA_PTR_GET_DEFAULT(exclude_, false) };
    inline ListNodeDownStreamRequestListQueryFilterList& setExclude(bool exclude) { DARABONBA_PTR_SET_VALUE(exclude_, exclude) };


    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string key() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline ListNodeDownStreamRequestListQueryFilterList& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // valueList Field Functions 
    bool hasValueList() const { return this->valueList_ != nullptr;};
    void deleteValueList() { this->valueList_ = nullptr;};
    inline const vector<string> & valueList() const { DARABONBA_PTR_GET_CONST(valueList_, vector<string>) };
    inline vector<string> valueList() { DARABONBA_PTR_GET(valueList_, vector<string>) };
    inline ListNodeDownStreamRequestListQueryFilterList& setValueList(const vector<string> & valueList) { DARABONBA_PTR_SET_VALUE(valueList_, valueList) };
    inline ListNodeDownStreamRequestListQueryFilterList& setValueList(vector<string> && valueList) { DARABONBA_PTR_SET_RVALUE(valueList_, valueList) };


  protected:
    std::shared_ptr<bool> exclude_ = nullptr;
    std::shared_ptr<string> key_ = nullptr;
    std::shared_ptr<vector<string>> valueList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
