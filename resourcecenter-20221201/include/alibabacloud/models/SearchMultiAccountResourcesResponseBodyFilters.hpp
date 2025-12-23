// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHMULTIACCOUNTRESOURCESRESPONSEBODYFILTERS_HPP_
#define ALIBABACLOUD_MODELS_SEARCHMULTIACCOUNTRESOURCESRESPONSEBODYFILTERS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceCenter20221201
{
namespace Models
{
  class SearchMultiAccountResourcesResponseBodyFilters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchMultiAccountResourcesResponseBodyFilters& obj) { 
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(MatchType, matchType_);
      DARABONBA_PTR_TO_JSON(Values, values_);
    };
    friend void from_json(const Darabonba::Json& j, SearchMultiAccountResourcesResponseBodyFilters& obj) { 
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(MatchType, matchType_);
      DARABONBA_PTR_FROM_JSON(Values, values_);
    };
    SearchMultiAccountResourcesResponseBodyFilters() = default ;
    SearchMultiAccountResourcesResponseBodyFilters(const SearchMultiAccountResourcesResponseBodyFilters &) = default ;
    SearchMultiAccountResourcesResponseBodyFilters(SearchMultiAccountResourcesResponseBodyFilters &&) = default ;
    SearchMultiAccountResourcesResponseBodyFilters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchMultiAccountResourcesResponseBodyFilters() = default ;
    SearchMultiAccountResourcesResponseBodyFilters& operator=(const SearchMultiAccountResourcesResponseBodyFilters &) = default ;
    SearchMultiAccountResourcesResponseBodyFilters& operator=(SearchMultiAccountResourcesResponseBodyFilters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->key_ == nullptr
        && return this->matchType_ == nullptr && return this->values_ == nullptr; };
    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string key() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline SearchMultiAccountResourcesResponseBodyFilters& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // matchType Field Functions 
    bool hasMatchType() const { return this->matchType_ != nullptr;};
    void deleteMatchType() { this->matchType_ = nullptr;};
    inline string matchType() const { DARABONBA_PTR_GET_DEFAULT(matchType_, "") };
    inline SearchMultiAccountResourcesResponseBodyFilters& setMatchType(string matchType) { DARABONBA_PTR_SET_VALUE(matchType_, matchType) };


    // values Field Functions 
    bool hasValues() const { return this->values_ != nullptr;};
    void deleteValues() { this->values_ = nullptr;};
    inline const vector<string> & values() const { DARABONBA_PTR_GET_CONST(values_, vector<string>) };
    inline vector<string> values() { DARABONBA_PTR_GET(values_, vector<string>) };
    inline SearchMultiAccountResourcesResponseBodyFilters& setValues(const vector<string> & values) { DARABONBA_PTR_SET_VALUE(values_, values) };
    inline SearchMultiAccountResourcesResponseBodyFilters& setValues(vector<string> && values) { DARABONBA_PTR_SET_RVALUE(values_, values) };


  protected:
    // The key of the filter condition.
    std::shared_ptr<string> key_ = nullptr;
    // The matching mode.
    std::shared_ptr<string> matchType_ = nullptr;
    // The values of the filter condition.
    std::shared_ptr<vector<string>> values_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceCenter20221201
#endif
