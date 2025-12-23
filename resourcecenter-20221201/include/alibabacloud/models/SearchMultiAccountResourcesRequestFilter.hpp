// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHMULTIACCOUNTRESOURCESREQUESTFILTER_HPP_
#define ALIBABACLOUD_MODELS_SEARCHMULTIACCOUNTRESOURCESREQUESTFILTER_HPP_
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
  class SearchMultiAccountResourcesRequestFilter : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchMultiAccountResourcesRequestFilter& obj) { 
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(MatchType, matchType_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, SearchMultiAccountResourcesRequestFilter& obj) { 
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(MatchType, matchType_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    SearchMultiAccountResourcesRequestFilter() = default ;
    SearchMultiAccountResourcesRequestFilter(const SearchMultiAccountResourcesRequestFilter &) = default ;
    SearchMultiAccountResourcesRequestFilter(SearchMultiAccountResourcesRequestFilter &&) = default ;
    SearchMultiAccountResourcesRequestFilter(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchMultiAccountResourcesRequestFilter() = default ;
    SearchMultiAccountResourcesRequestFilter& operator=(const SearchMultiAccountResourcesRequestFilter &) = default ;
    SearchMultiAccountResourcesRequestFilter& operator=(SearchMultiAccountResourcesRequestFilter &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->key_ == nullptr
        && return this->matchType_ == nullptr && return this->value_ == nullptr; };
    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string key() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline SearchMultiAccountResourcesRequestFilter& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // matchType Field Functions 
    bool hasMatchType() const { return this->matchType_ != nullptr;};
    void deleteMatchType() { this->matchType_ = nullptr;};
    inline string matchType() const { DARABONBA_PTR_GET_DEFAULT(matchType_, "") };
    inline SearchMultiAccountResourcesRequestFilter& setMatchType(string matchType) { DARABONBA_PTR_SET_VALUE(matchType_, matchType) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline const vector<string> & value() const { DARABONBA_PTR_GET_CONST(value_, vector<string>) };
    inline vector<string> value() { DARABONBA_PTR_GET(value_, vector<string>) };
    inline SearchMultiAccountResourcesRequestFilter& setValue(const vector<string> & value) { DARABONBA_PTR_SET_VALUE(value_, value) };
    inline SearchMultiAccountResourcesRequestFilter& setValue(vector<string> && value) { DARABONBA_PTR_SET_RVALUE(value_, value) };


  protected:
    // The key of the filter condition. For more information, see `Supported filter parameters`.
    std::shared_ptr<string> key_ = nullptr;
    // The matching mode.
    // 
    // The value Equals indicates an equal match.
    std::shared_ptr<string> matchType_ = nullptr;
    // The values of the filter condition.
    std::shared_ptr<vector<string>> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceCenter20221201
#endif
