// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYPARTNERPRODUCELISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYPARTNERPRODUCELISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryPartnerProduceListResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Companyreg20200306
{
namespace Models
{
  class QueryPartnerProduceListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryPartnerProduceListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPageNum, currentPageNum_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalItemNum, totalItemNum_);
      DARABONBA_PTR_TO_JSON(TotalPageNum, totalPageNum_);
    };
    friend void from_json(const Darabonba::Json& j, QueryPartnerProduceListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPageNum, currentPageNum_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalItemNum, totalItemNum_);
      DARABONBA_PTR_FROM_JSON(TotalPageNum, totalPageNum_);
    };
    QueryPartnerProduceListResponseBody() = default ;
    QueryPartnerProduceListResponseBody(const QueryPartnerProduceListResponseBody &) = default ;
    QueryPartnerProduceListResponseBody(QueryPartnerProduceListResponseBody &&) = default ;
    QueryPartnerProduceListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryPartnerProduceListResponseBody() = default ;
    QueryPartnerProduceListResponseBody& operator=(const QueryPartnerProduceListResponseBody &) = default ;
    QueryPartnerProduceListResponseBody& operator=(QueryPartnerProduceListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->currentPageNum_ == nullptr
        && return this->data_ == nullptr && return this->pageSize_ == nullptr && return this->requestId_ == nullptr && return this->totalItemNum_ == nullptr && return this->totalPageNum_ == nullptr; };
    // currentPageNum Field Functions 
    bool hasCurrentPageNum() const { return this->currentPageNum_ != nullptr;};
    void deleteCurrentPageNum() { this->currentPageNum_ = nullptr;};
    inline int64_t currentPageNum() const { DARABONBA_PTR_GET_DEFAULT(currentPageNum_, 0L) };
    inline QueryPartnerProduceListResponseBody& setCurrentPageNum(int64_t currentPageNum) { DARABONBA_PTR_SET_VALUE(currentPageNum_, currentPageNum) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<QueryPartnerProduceListResponseBodyData> & data() const { DARABONBA_PTR_GET_CONST(data_, vector<QueryPartnerProduceListResponseBodyData>) };
    inline vector<QueryPartnerProduceListResponseBodyData> data() { DARABONBA_PTR_GET(data_, vector<QueryPartnerProduceListResponseBodyData>) };
    inline QueryPartnerProduceListResponseBody& setData(const vector<QueryPartnerProduceListResponseBodyData> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline QueryPartnerProduceListResponseBody& setData(vector<QueryPartnerProduceListResponseBodyData> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline QueryPartnerProduceListResponseBody& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryPartnerProduceListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalItemNum Field Functions 
    bool hasTotalItemNum() const { return this->totalItemNum_ != nullptr;};
    void deleteTotalItemNum() { this->totalItemNum_ = nullptr;};
    inline int64_t totalItemNum() const { DARABONBA_PTR_GET_DEFAULT(totalItemNum_, 0L) };
    inline QueryPartnerProduceListResponseBody& setTotalItemNum(int64_t totalItemNum) { DARABONBA_PTR_SET_VALUE(totalItemNum_, totalItemNum) };


    // totalPageNum Field Functions 
    bool hasTotalPageNum() const { return this->totalPageNum_ != nullptr;};
    void deleteTotalPageNum() { this->totalPageNum_ = nullptr;};
    inline int64_t totalPageNum() const { DARABONBA_PTR_GET_DEFAULT(totalPageNum_, 0L) };
    inline QueryPartnerProduceListResponseBody& setTotalPageNum(int64_t totalPageNum) { DARABONBA_PTR_SET_VALUE(totalPageNum_, totalPageNum) };


  protected:
    std::shared_ptr<int64_t> currentPageNum_ = nullptr;
    std::shared_ptr<vector<QueryPartnerProduceListResponseBodyData>> data_ = nullptr;
    std::shared_ptr<int64_t> pageSize_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<int64_t> totalItemNum_ = nullptr;
    std::shared_ptr<int64_t> totalPageNum_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Companyreg20200306
#endif
