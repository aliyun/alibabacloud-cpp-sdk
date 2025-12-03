// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTACCESSRULESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTACCESSRULESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListAccessRulesResponseBodyAccessRules.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DFS20180620
{
namespace Models
{
  class ListAccessRulesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAccessRulesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessRules, accessRules_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListAccessRulesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessRules, accessRules_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListAccessRulesResponseBody() = default ;
    ListAccessRulesResponseBody(const ListAccessRulesResponseBody &) = default ;
    ListAccessRulesResponseBody(ListAccessRulesResponseBody &&) = default ;
    ListAccessRulesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAccessRulesResponseBody() = default ;
    ListAccessRulesResponseBody& operator=(const ListAccessRulesResponseBody &) = default ;
    ListAccessRulesResponseBody& operator=(ListAccessRulesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessRules_ == nullptr
        && return this->nextToken_ == nullptr && return this->requestId_ == nullptr && return this->totalCount_ == nullptr; };
    // accessRules Field Functions 
    bool hasAccessRules() const { return this->accessRules_ != nullptr;};
    void deleteAccessRules() { this->accessRules_ = nullptr;};
    inline const vector<ListAccessRulesResponseBodyAccessRules> & accessRules() const { DARABONBA_PTR_GET_CONST(accessRules_, vector<ListAccessRulesResponseBodyAccessRules>) };
    inline vector<ListAccessRulesResponseBodyAccessRules> accessRules() { DARABONBA_PTR_GET(accessRules_, vector<ListAccessRulesResponseBodyAccessRules>) };
    inline ListAccessRulesResponseBody& setAccessRules(const vector<ListAccessRulesResponseBodyAccessRules> & accessRules) { DARABONBA_PTR_SET_VALUE(accessRules_, accessRules) };
    inline ListAccessRulesResponseBody& setAccessRules(vector<ListAccessRulesResponseBodyAccessRules> && accessRules) { DARABONBA_PTR_SET_RVALUE(accessRules_, accessRules) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListAccessRulesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAccessRulesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListAccessRulesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    std::shared_ptr<vector<ListAccessRulesResponseBodyAccessRules>> accessRules_ = nullptr;
    std::shared_ptr<string> nextToken_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DFS20180620
#endif
