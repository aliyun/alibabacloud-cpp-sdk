// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTVSCSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTVSCSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListVscsResponseBodyVscs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EfloController20221215
{
namespace Models
{
  class ListVscsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListVscsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(Vscs, vscs_);
    };
    friend void from_json(const Darabonba::Json& j, ListVscsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(Vscs, vscs_);
    };
    ListVscsResponseBody() = default ;
    ListVscsResponseBody(const ListVscsResponseBody &) = default ;
    ListVscsResponseBody(ListVscsResponseBody &&) = default ;
    ListVscsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListVscsResponseBody() = default ;
    ListVscsResponseBody& operator=(const ListVscsResponseBody &) = default ;
    ListVscsResponseBody& operator=(ListVscsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->maxResults_ == nullptr
        && return this->nextToken_ == nullptr && return this->requestId_ == nullptr && return this->totalCount_ == nullptr && return this->vscs_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListVscsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListVscsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListVscsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListVscsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // vscs Field Functions 
    bool hasVscs() const { return this->vscs_ != nullptr;};
    void deleteVscs() { this->vscs_ = nullptr;};
    inline const vector<ListVscsResponseBodyVscs> & vscs() const { DARABONBA_PTR_GET_CONST(vscs_, vector<ListVscsResponseBodyVscs>) };
    inline vector<ListVscsResponseBodyVscs> vscs() { DARABONBA_PTR_GET(vscs_, vector<ListVscsResponseBodyVscs>) };
    inline ListVscsResponseBody& setVscs(const vector<ListVscsResponseBodyVscs> & vscs) { DARABONBA_PTR_SET_VALUE(vscs_, vscs) };
    inline ListVscsResponseBody& setVscs(vector<ListVscsResponseBodyVscs> && vscs) { DARABONBA_PTR_SET_RVALUE(vscs_, vscs) };


  protected:
    // No response is returned. The TotalCount parameter is used.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // The token. It can be used in the next request to retrieve a new page of results. If this parameter is empty, no next page exists.
    // 
    // This parameter is required.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of VSCs.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
    // The VSCs.
    std::shared_ptr<vector<ListVscsResponseBodyVscs>> vscs_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EfloController20221215
#endif
