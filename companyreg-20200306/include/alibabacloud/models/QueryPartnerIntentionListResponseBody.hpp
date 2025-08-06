// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYPARTNERINTENTIONLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYPARTNERINTENTIONLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryPartnerIntentionListResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Companyreg20200306
{
namespace Models
{
  class QueryPartnerIntentionListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryPartnerIntentionListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPageNum, currentPageNum_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalItemNum, totalItemNum_);
      DARABONBA_PTR_TO_JSON(TotalPageNum, totalPageNum_);
    };
    friend void from_json(const Darabonba::Json& j, QueryPartnerIntentionListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPageNum, currentPageNum_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalItemNum, totalItemNum_);
      DARABONBA_PTR_FROM_JSON(TotalPageNum, totalPageNum_);
    };
    QueryPartnerIntentionListResponseBody() = default ;
    QueryPartnerIntentionListResponseBody(const QueryPartnerIntentionListResponseBody &) = default ;
    QueryPartnerIntentionListResponseBody(QueryPartnerIntentionListResponseBody &&) = default ;
    QueryPartnerIntentionListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryPartnerIntentionListResponseBody() = default ;
    QueryPartnerIntentionListResponseBody& operator=(const QueryPartnerIntentionListResponseBody &) = default ;
    QueryPartnerIntentionListResponseBody& operator=(QueryPartnerIntentionListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->currentPageNum_ != nullptr
        && this->data_ != nullptr && this->pageSize_ != nullptr && this->requestId_ != nullptr && this->totalItemNum_ != nullptr && this->totalPageNum_ != nullptr; };
    // currentPageNum Field Functions 
    bool hasCurrentPageNum() const { return this->currentPageNum_ != nullptr;};
    void deleteCurrentPageNum() { this->currentPageNum_ = nullptr;};
    inline int64_t currentPageNum() const { DARABONBA_PTR_GET_DEFAULT(currentPageNum_, 0L) };
    inline QueryPartnerIntentionListResponseBody& setCurrentPageNum(int64_t currentPageNum) { DARABONBA_PTR_SET_VALUE(currentPageNum_, currentPageNum) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<QueryPartnerIntentionListResponseBodyData> & data() const { DARABONBA_PTR_GET_CONST(data_, vector<QueryPartnerIntentionListResponseBodyData>) };
    inline vector<QueryPartnerIntentionListResponseBodyData> data() { DARABONBA_PTR_GET(data_, vector<QueryPartnerIntentionListResponseBodyData>) };
    inline QueryPartnerIntentionListResponseBody& setData(const vector<QueryPartnerIntentionListResponseBodyData> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline QueryPartnerIntentionListResponseBody& setData(vector<QueryPartnerIntentionListResponseBodyData> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline QueryPartnerIntentionListResponseBody& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryPartnerIntentionListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalItemNum Field Functions 
    bool hasTotalItemNum() const { return this->totalItemNum_ != nullptr;};
    void deleteTotalItemNum() { this->totalItemNum_ = nullptr;};
    inline int64_t totalItemNum() const { DARABONBA_PTR_GET_DEFAULT(totalItemNum_, 0L) };
    inline QueryPartnerIntentionListResponseBody& setTotalItemNum(int64_t totalItemNum) { DARABONBA_PTR_SET_VALUE(totalItemNum_, totalItemNum) };


    // totalPageNum Field Functions 
    bool hasTotalPageNum() const { return this->totalPageNum_ != nullptr;};
    void deleteTotalPageNum() { this->totalPageNum_ = nullptr;};
    inline int64_t totalPageNum() const { DARABONBA_PTR_GET_DEFAULT(totalPageNum_, 0L) };
    inline QueryPartnerIntentionListResponseBody& setTotalPageNum(int64_t totalPageNum) { DARABONBA_PTR_SET_VALUE(totalPageNum_, totalPageNum) };


  protected:
    std::shared_ptr<int64_t> currentPageNum_ = nullptr;
    std::shared_ptr<vector<QueryPartnerIntentionListResponseBodyData>> data_ = nullptr;
    std::shared_ptr<int64_t> pageSize_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<int64_t> totalItemNum_ = nullptr;
    std::shared_ptr<int64_t> totalPageNum_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Companyreg20200306
#endif
