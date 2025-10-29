// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYLIVEDOMAINMULTISTREAMLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYLIVEDOMAINMULTISTREAMLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryLiveDomainMultiStreamListResponseBodyOnlineStreams.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class QueryLiveDomainMultiStreamListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryLiveDomainMultiStreamListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(OnlineStreams, onlineStreams_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, QueryLiveDomainMultiStreamListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(OnlineStreams, onlineStreams_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    QueryLiveDomainMultiStreamListResponseBody() = default ;
    QueryLiveDomainMultiStreamListResponseBody(const QueryLiveDomainMultiStreamListResponseBody &) = default ;
    QueryLiveDomainMultiStreamListResponseBody(QueryLiveDomainMultiStreamListResponseBody &&) = default ;
    QueryLiveDomainMultiStreamListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryLiveDomainMultiStreamListResponseBody() = default ;
    QueryLiveDomainMultiStreamListResponseBody& operator=(const QueryLiveDomainMultiStreamListResponseBody &) = default ;
    QueryLiveDomainMultiStreamListResponseBody& operator=(QueryLiveDomainMultiStreamListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->onlineStreams_ == nullptr
        && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->requestId_ == nullptr && return this->totalCount_ == nullptr; };
    // onlineStreams Field Functions 
    bool hasOnlineStreams() const { return this->onlineStreams_ != nullptr;};
    void deleteOnlineStreams() { this->onlineStreams_ = nullptr;};
    inline const vector<QueryLiveDomainMultiStreamListResponseBodyOnlineStreams> & onlineStreams() const { DARABONBA_PTR_GET_CONST(onlineStreams_, vector<QueryLiveDomainMultiStreamListResponseBodyOnlineStreams>) };
    inline vector<QueryLiveDomainMultiStreamListResponseBodyOnlineStreams> onlineStreams() { DARABONBA_PTR_GET(onlineStreams_, vector<QueryLiveDomainMultiStreamListResponseBodyOnlineStreams>) };
    inline QueryLiveDomainMultiStreamListResponseBody& setOnlineStreams(const vector<QueryLiveDomainMultiStreamListResponseBodyOnlineStreams> & onlineStreams) { DARABONBA_PTR_SET_VALUE(onlineStreams_, onlineStreams) };
    inline QueryLiveDomainMultiStreamListResponseBody& setOnlineStreams(vector<QueryLiveDomainMultiStreamListResponseBodyOnlineStreams> && onlineStreams) { DARABONBA_PTR_SET_RVALUE(onlineStreams_, onlineStreams) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline QueryLiveDomainMultiStreamListResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline QueryLiveDomainMultiStreamListResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryLiveDomainMultiStreamListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline QueryLiveDomainMultiStreamListResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The online streams returned.
    std::shared_ptr<vector<QueryLiveDomainMultiStreamListResponseBodyOnlineStreams>> onlineStreams_ = nullptr;
    // The page number.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
