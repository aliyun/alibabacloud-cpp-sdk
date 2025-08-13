// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTASSOCIATEDRESOURCERULESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTASSOCIATEDRESOURCERULESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListAssociatedResourceRulesResponseBodyRules.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Tag20180828
{
namespace Models
{
  class ListAssociatedResourceRulesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAssociatedResourceRulesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Rules, rules_);
    };
    friend void from_json(const Darabonba::Json& j, ListAssociatedResourceRulesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Rules, rules_);
    };
    ListAssociatedResourceRulesResponseBody() = default ;
    ListAssociatedResourceRulesResponseBody(const ListAssociatedResourceRulesResponseBody &) = default ;
    ListAssociatedResourceRulesResponseBody(ListAssociatedResourceRulesResponseBody &&) = default ;
    ListAssociatedResourceRulesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAssociatedResourceRulesResponseBody() = default ;
    ListAssociatedResourceRulesResponseBody& operator=(const ListAssociatedResourceRulesResponseBody &) = default ;
    ListAssociatedResourceRulesResponseBody& operator=(ListAssociatedResourceRulesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->nextToken_ != nullptr
        && this->requestId_ != nullptr && this->rules_ != nullptr; };
    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListAssociatedResourceRulesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAssociatedResourceRulesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // rules Field Functions 
    bool hasRules() const { return this->rules_ != nullptr;};
    void deleteRules() { this->rules_ = nullptr;};
    inline const vector<ListAssociatedResourceRulesResponseBodyRules> & rules() const { DARABONBA_PTR_GET_CONST(rules_, vector<ListAssociatedResourceRulesResponseBodyRules>) };
    inline vector<ListAssociatedResourceRulesResponseBodyRules> rules() { DARABONBA_PTR_GET(rules_, vector<ListAssociatedResourceRulesResponseBodyRules>) };
    inline ListAssociatedResourceRulesResponseBody& setRules(const vector<ListAssociatedResourceRulesResponseBodyRules> & rules) { DARABONBA_PTR_SET_VALUE(rules_, rules) };
    inline ListAssociatedResourceRulesResponseBody& setRules(vector<ListAssociatedResourceRulesResponseBodyRules> && rules) { DARABONBA_PTR_SET_RVALUE(rules_, rules) };


  protected:
    // Determine if there is a token for the next query based on `NextToken`. Values:
    // 
    // - If `NextToken` is empty, it indicates there is no next query.
    // - If `NextToken` has a value, that value is the token for the next query start.
    // 
    // This parameter is required.
    std::shared_ptr<string> nextToken_ = nullptr;
    // Request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // List of associated resource tag rules.
    std::shared_ptr<vector<ListAssociatedResourceRulesResponseBodyRules>> rules_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Tag20180828
#endif
