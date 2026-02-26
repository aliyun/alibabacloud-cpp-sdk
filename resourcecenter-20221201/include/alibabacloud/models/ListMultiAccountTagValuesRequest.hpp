// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMULTIACCOUNTTAGVALUESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTMULTIACCOUNTTAGVALUESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceCenter20221201
{
namespace Models
{
  class ListMultiAccountTagValuesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMultiAccountTagValuesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(MatchType, matchType_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(Scope, scope_);
      DARABONBA_PTR_TO_JSON(TagKey, tagKey_);
      DARABONBA_PTR_TO_JSON(TagValue, tagValue_);
    };
    friend void from_json(const Darabonba::Json& j, ListMultiAccountTagValuesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(MatchType, matchType_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(Scope, scope_);
      DARABONBA_PTR_FROM_JSON(TagKey, tagKey_);
      DARABONBA_PTR_FROM_JSON(TagValue, tagValue_);
    };
    ListMultiAccountTagValuesRequest() = default ;
    ListMultiAccountTagValuesRequest(const ListMultiAccountTagValuesRequest &) = default ;
    ListMultiAccountTagValuesRequest(ListMultiAccountTagValuesRequest &&) = default ;
    ListMultiAccountTagValuesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMultiAccountTagValuesRequest() = default ;
    ListMultiAccountTagValuesRequest& operator=(const ListMultiAccountTagValuesRequest &) = default ;
    ListMultiAccountTagValuesRequest& operator=(ListMultiAccountTagValuesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->matchType_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->scope_ == nullptr && this->tagKey_ == nullptr && this->tagValue_ == nullptr; };
    // matchType Field Functions 
    bool hasMatchType() const { return this->matchType_ != nullptr;};
    void deleteMatchType() { this->matchType_ = nullptr;};
    inline string getMatchType() const { DARABONBA_PTR_GET_DEFAULT(matchType_, "") };
    inline ListMultiAccountTagValuesRequest& setMatchType(string matchType) { DARABONBA_PTR_SET_VALUE(matchType_, matchType) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListMultiAccountTagValuesRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListMultiAccountTagValuesRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // scope Field Functions 
    bool hasScope() const { return this->scope_ != nullptr;};
    void deleteScope() { this->scope_ = nullptr;};
    inline string getScope() const { DARABONBA_PTR_GET_DEFAULT(scope_, "") };
    inline ListMultiAccountTagValuesRequest& setScope(string scope) { DARABONBA_PTR_SET_VALUE(scope_, scope) };


    // tagKey Field Functions 
    bool hasTagKey() const { return this->tagKey_ != nullptr;};
    void deleteTagKey() { this->tagKey_ = nullptr;};
    inline string getTagKey() const { DARABONBA_PTR_GET_DEFAULT(tagKey_, "") };
    inline ListMultiAccountTagValuesRequest& setTagKey(string tagKey) { DARABONBA_PTR_SET_VALUE(tagKey_, tagKey) };


    // tagValue Field Functions 
    bool hasTagValue() const { return this->tagValue_ != nullptr;};
    void deleteTagValue() { this->tagValue_ = nullptr;};
    inline string getTagValue() const { DARABONBA_PTR_GET_DEFAULT(tagValue_, "") };
    inline ListMultiAccountTagValuesRequest& setTagValue(string tagValue) { DARABONBA_PTR_SET_VALUE(tagValue_, tagValue) };


  protected:
    shared_ptr<string> matchType_ {};
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<string> nextToken_ {};
    shared_ptr<string> scope_ {};
    // This parameter is required.
    shared_ptr<string> tagKey_ {};
    shared_ptr<string> tagValue_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceCenter20221201
#endif
