// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTOPSNOTICESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTOPSNOTICESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListOpsNoticesResponseBodyOpsNotices.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNestSupplier20210521
{
namespace Models
{
  class ListOpsNoticesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListOpsNoticesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(OpsNotices, opsNotices_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListOpsNoticesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(OpsNotices, opsNotices_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListOpsNoticesResponseBody() = default ;
    ListOpsNoticesResponseBody(const ListOpsNoticesResponseBody &) = default ;
    ListOpsNoticesResponseBody(ListOpsNoticesResponseBody &&) = default ;
    ListOpsNoticesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListOpsNoticesResponseBody() = default ;
    ListOpsNoticesResponseBody& operator=(const ListOpsNoticesResponseBody &) = default ;
    ListOpsNoticesResponseBody& operator=(ListOpsNoticesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->maxResults_ != nullptr
        && this->nextToken_ != nullptr && this->opsNotices_ != nullptr && this->requestId_ != nullptr && this->totalCount_ != nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListOpsNoticesResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListOpsNoticesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // opsNotices Field Functions 
    bool hasOpsNotices() const { return this->opsNotices_ != nullptr;};
    void deleteOpsNotices() { this->opsNotices_ = nullptr;};
    inline const vector<ListOpsNoticesResponseBodyOpsNotices> & opsNotices() const { DARABONBA_PTR_GET_CONST(opsNotices_, vector<ListOpsNoticesResponseBodyOpsNotices>) };
    inline vector<ListOpsNoticesResponseBodyOpsNotices> opsNotices() { DARABONBA_PTR_GET(opsNotices_, vector<ListOpsNoticesResponseBodyOpsNotices>) };
    inline ListOpsNoticesResponseBody& setOpsNotices(const vector<ListOpsNoticesResponseBodyOpsNotices> & opsNotices) { DARABONBA_PTR_SET_VALUE(opsNotices_, opsNotices) };
    inline ListOpsNoticesResponseBody& setOpsNotices(vector<ListOpsNoticesResponseBodyOpsNotices> && opsNotices) { DARABONBA_PTR_SET_RVALUE(opsNotices_, opsNotices) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListOpsNoticesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListOpsNoticesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    std::shared_ptr<string> nextToken_ = nullptr;
    std::shared_ptr<vector<ListOpsNoticesResponseBodyOpsNotices>> opsNotices_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNestSupplier20210521
#endif
