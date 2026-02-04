// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECACHEANALYSISREPORTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECACHEANALYSISREPORTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RKvstore20150101
{
namespace Models
{
  class DescribeCacheAnalysisReportResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCacheAnalysisReportResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BigKeys, bigKeys_);
      DARABONBA_PTR_TO_JSON(HotKeys, hotKeys_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageRecordCount, pageRecordCount_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalRecordCount, totalRecordCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCacheAnalysisReportResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BigKeys, bigKeys_);
      DARABONBA_PTR_FROM_JSON(HotKeys, hotKeys_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageRecordCount, pageRecordCount_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalRecordCount, totalRecordCount_);
    };
    DescribeCacheAnalysisReportResponseBody() = default ;
    DescribeCacheAnalysisReportResponseBody(const DescribeCacheAnalysisReportResponseBody &) = default ;
    DescribeCacheAnalysisReportResponseBody(DescribeCacheAnalysisReportResponseBody &&) = default ;
    DescribeCacheAnalysisReportResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCacheAnalysisReportResponseBody() = default ;
    DescribeCacheAnalysisReportResponseBody& operator=(const DescribeCacheAnalysisReportResponseBody &) = default ;
    DescribeCacheAnalysisReportResponseBody& operator=(DescribeCacheAnalysisReportResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bigKeys_ == nullptr
        && this->hotKeys_ == nullptr && this->pageNumber_ == nullptr && this->pageRecordCount_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr
        && this->totalRecordCount_ == nullptr; };
    // bigKeys Field Functions 
    bool hasBigKeys() const { return this->bigKeys_ != nullptr;};
    void deleteBigKeys() { this->bigKeys_ = nullptr;};
    inline const vector<Darabonba::Json> & getBigKeys() const { DARABONBA_PTR_GET_CONST(bigKeys_, vector<Darabonba::Json>) };
    inline vector<Darabonba::Json> getBigKeys() { DARABONBA_PTR_GET(bigKeys_, vector<Darabonba::Json>) };
    inline DescribeCacheAnalysisReportResponseBody& setBigKeys(const vector<Darabonba::Json> & bigKeys) { DARABONBA_PTR_SET_VALUE(bigKeys_, bigKeys) };
    inline DescribeCacheAnalysisReportResponseBody& setBigKeys(vector<Darabonba::Json> && bigKeys) { DARABONBA_PTR_SET_RVALUE(bigKeys_, bigKeys) };


    // hotKeys Field Functions 
    bool hasHotKeys() const { return this->hotKeys_ != nullptr;};
    void deleteHotKeys() { this->hotKeys_ = nullptr;};
    inline const vector<Darabonba::Json> & getHotKeys() const { DARABONBA_PTR_GET_CONST(hotKeys_, vector<Darabonba::Json>) };
    inline vector<Darabonba::Json> getHotKeys() { DARABONBA_PTR_GET(hotKeys_, vector<Darabonba::Json>) };
    inline DescribeCacheAnalysisReportResponseBody& setHotKeys(const vector<Darabonba::Json> & hotKeys) { DARABONBA_PTR_SET_VALUE(hotKeys_, hotKeys) };
    inline DescribeCacheAnalysisReportResponseBody& setHotKeys(vector<Darabonba::Json> && hotKeys) { DARABONBA_PTR_SET_RVALUE(hotKeys_, hotKeys) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeCacheAnalysisReportResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageRecordCount Field Functions 
    bool hasPageRecordCount() const { return this->pageRecordCount_ != nullptr;};
    void deletePageRecordCount() { this->pageRecordCount_ = nullptr;};
    inline int32_t getPageRecordCount() const { DARABONBA_PTR_GET_DEFAULT(pageRecordCount_, 0) };
    inline DescribeCacheAnalysisReportResponseBody& setPageRecordCount(int32_t pageRecordCount) { DARABONBA_PTR_SET_VALUE(pageRecordCount_, pageRecordCount) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeCacheAnalysisReportResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCacheAnalysisReportResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalRecordCount Field Functions 
    bool hasTotalRecordCount() const { return this->totalRecordCount_ != nullptr;};
    void deleteTotalRecordCount() { this->totalRecordCount_ = nullptr;};
    inline int32_t getTotalRecordCount() const { DARABONBA_PTR_GET_DEFAULT(totalRecordCount_, 0) };
    inline DescribeCacheAnalysisReportResponseBody& setTotalRecordCount(int32_t totalRecordCount) { DARABONBA_PTR_SET_VALUE(totalRecordCount_, totalRecordCount) };


  protected:
    // Details of the large keys.
    shared_ptr<vector<Darabonba::Json>> bigKeys_ {};
    // Details of the hotkeys.
    // 
    // > This parameter is not returned because Tair (Redis OSS-compatible) does not support hotkey analytics.
    shared_ptr<vector<Darabonba::Json>> hotKeys_ {};
    // The page number of the returned page.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries returned on the current page.
    shared_ptr<int32_t> pageRecordCount_ {};
    // The maximum number of entries returned per page.
    shared_ptr<int32_t> pageSize_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalRecordCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RKvstore20150101
#endif
