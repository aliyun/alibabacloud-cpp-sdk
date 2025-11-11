// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUSERAUTHNSOURCEMAPPINGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTUSERAUTHNSOURCEMAPPINGSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListUserAuthnSourceMappingsResponseBodyUserAuthnSourceMappings.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class ListUserAuthnSourceMappingsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUserAuthnSourceMappingsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(PreviousToken, previousToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(UserAuthnSourceMappings, userAuthnSourceMappings_);
    };
    friend void from_json(const Darabonba::Json& j, ListUserAuthnSourceMappingsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(PreviousToken, previousToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(UserAuthnSourceMappings, userAuthnSourceMappings_);
    };
    ListUserAuthnSourceMappingsResponseBody() = default ;
    ListUserAuthnSourceMappingsResponseBody(const ListUserAuthnSourceMappingsResponseBody &) = default ;
    ListUserAuthnSourceMappingsResponseBody(ListUserAuthnSourceMappingsResponseBody &&) = default ;
    ListUserAuthnSourceMappingsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUserAuthnSourceMappingsResponseBody() = default ;
    ListUserAuthnSourceMappingsResponseBody& operator=(const ListUserAuthnSourceMappingsResponseBody &) = default ;
    ListUserAuthnSourceMappingsResponseBody& operator=(ListUserAuthnSourceMappingsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->maxResults_ == nullptr
        && return this->nextToken_ == nullptr && return this->previousToken_ == nullptr && return this->requestId_ == nullptr && return this->totalCount_ == nullptr && return this->userAuthnSourceMappings_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListUserAuthnSourceMappingsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListUserAuthnSourceMappingsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // previousToken Field Functions 
    bool hasPreviousToken() const { return this->previousToken_ != nullptr;};
    void deletePreviousToken() { this->previousToken_ = nullptr;};
    inline string previousToken() const { DARABONBA_PTR_GET_DEFAULT(previousToken_, "") };
    inline ListUserAuthnSourceMappingsResponseBody& setPreviousToken(string previousToken) { DARABONBA_PTR_SET_VALUE(previousToken_, previousToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListUserAuthnSourceMappingsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListUserAuthnSourceMappingsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // userAuthnSourceMappings Field Functions 
    bool hasUserAuthnSourceMappings() const { return this->userAuthnSourceMappings_ != nullptr;};
    void deleteUserAuthnSourceMappings() { this->userAuthnSourceMappings_ = nullptr;};
    inline const vector<ListUserAuthnSourceMappingsResponseBodyUserAuthnSourceMappings> & userAuthnSourceMappings() const { DARABONBA_PTR_GET_CONST(userAuthnSourceMappings_, vector<ListUserAuthnSourceMappingsResponseBodyUserAuthnSourceMappings>) };
    inline vector<ListUserAuthnSourceMappingsResponseBodyUserAuthnSourceMappings> userAuthnSourceMappings() { DARABONBA_PTR_GET(userAuthnSourceMappings_, vector<ListUserAuthnSourceMappingsResponseBodyUserAuthnSourceMappings>) };
    inline ListUserAuthnSourceMappingsResponseBody& setUserAuthnSourceMappings(const vector<ListUserAuthnSourceMappingsResponseBodyUserAuthnSourceMappings> & userAuthnSourceMappings) { DARABONBA_PTR_SET_VALUE(userAuthnSourceMappings_, userAuthnSourceMappings) };
    inline ListUserAuthnSourceMappingsResponseBody& setUserAuthnSourceMappings(vector<ListUserAuthnSourceMappingsResponseBodyUserAuthnSourceMappings> && userAuthnSourceMappings) { DARABONBA_PTR_SET_RVALUE(userAuthnSourceMappings_, userAuthnSourceMappings) };


  protected:
    // 分页查询时每页行数。
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // 本次调用返回的查询凭证（Token）值，用于下一次翻页查询。
    std::shared_ptr<string> nextToken_ = nullptr;
    // 本次调用返回的查询凭证（Token）值，用于上一次翻页查询。
    std::shared_ptr<string> previousToken_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<int32_t> totalCount_ = nullptr;
    std::shared_ptr<vector<ListUserAuthnSourceMappingsResponseBodyUserAuthnSourceMappings>> userAuthnSourceMappings_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
