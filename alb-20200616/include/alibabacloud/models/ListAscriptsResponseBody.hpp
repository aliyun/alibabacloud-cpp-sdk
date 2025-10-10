// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTASCRIPTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTASCRIPTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListAScriptsResponseBodyAScripts.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alb20200616
{
namespace Models
{
  class ListAScriptsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAScriptsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AScripts, AScripts_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListAScriptsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AScripts, AScripts_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListAScriptsResponseBody() = default ;
    ListAScriptsResponseBody(const ListAScriptsResponseBody &) = default ;
    ListAScriptsResponseBody(ListAScriptsResponseBody &&) = default ;
    ListAScriptsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAScriptsResponseBody() = default ;
    ListAScriptsResponseBody& operator=(const ListAScriptsResponseBody &) = default ;
    ListAScriptsResponseBody& operator=(ListAScriptsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->AScripts_ != nullptr
        && this->maxResults_ != nullptr && this->nextToken_ != nullptr && this->requestId_ != nullptr && this->totalCount_ != nullptr; };
    // AScripts Field Functions 
    bool hasAScripts() const { return this->AScripts_ != nullptr;};
    void deleteAScripts() { this->AScripts_ = nullptr;};
    inline const vector<ListAScriptsResponseBodyAScripts> & AScripts() const { DARABONBA_PTR_GET_CONST(AScripts_, vector<ListAScriptsResponseBodyAScripts>) };
    inline vector<ListAScriptsResponseBodyAScripts> AScripts() { DARABONBA_PTR_GET(AScripts_, vector<ListAScriptsResponseBodyAScripts>) };
    inline ListAScriptsResponseBody& setAScripts(const vector<ListAScriptsResponseBodyAScripts> & AScripts) { DARABONBA_PTR_SET_VALUE(AScripts_, AScripts) };
    inline ListAScriptsResponseBody& setAScripts(vector<ListAScriptsResponseBodyAScripts> && AScripts) { DARABONBA_PTR_SET_RVALUE(AScripts_, AScripts) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListAScriptsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListAScriptsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAScriptsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListAScriptsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The AScript rules.
    std::shared_ptr<vector<ListAScriptsResponseBodyAScripts>> AScripts_ = nullptr;
    // The maximum number of entries returned.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // A pagination token. It can be used in the next request to retrieve a new page of results. Valid values:
    // 
    // *   If **NextToken** is empty, no next page exists.
    // *   If a value is returned for **NextToken**, the value is the token that determines the start point of the next query.
    // 
    // This parameter is required.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of entries returned.
    // 
    // > This parameter is optional. By default, this parameter is not returned.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alb20200616
#endif
