// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUNKNOWNTHREATDETECTPROCESSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTUNKNOWNTHREATDETECTPROCESSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListUnknownThreatDetectProcessResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUnknownThreatDetectProcessResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListUnknownThreatDetectProcessResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListUnknownThreatDetectProcessResponseBody() = default ;
    ListUnknownThreatDetectProcessResponseBody(const ListUnknownThreatDetectProcessResponseBody &) = default ;
    ListUnknownThreatDetectProcessResponseBody(ListUnknownThreatDetectProcessResponseBody &&) = default ;
    ListUnknownThreatDetectProcessResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUnknownThreatDetectProcessResponseBody() = default ;
    ListUnknownThreatDetectProcessResponseBody& operator=(const ListUnknownThreatDetectProcessResponseBody &) = default ;
    ListUnknownThreatDetectProcessResponseBody& operator=(ListUnknownThreatDetectProcessResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PageInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PageInfo& obj) { 
        DARABONBA_PTR_TO_JSON(Count, count_);
        DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, PageInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(Count, count_);
        DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      PageInfo() = default ;
      PageInfo(const PageInfo &) = default ;
      PageInfo(PageInfo &&) = default ;
      PageInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PageInfo() = default ;
      PageInfo& operator=(const PageInfo &) = default ;
      PageInfo& operator=(PageInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->count_ == nullptr
        && this->currentPage_ == nullptr && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
      // count Field Functions 
      bool hasCount() const { return this->count_ != nullptr;};
      void deleteCount() { this->count_ = nullptr;};
      inline string getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, "") };
      inline PageInfo& setCount(string count) { DARABONBA_PTR_SET_VALUE(count_, count) };


      // currentPage Field Functions 
      bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
      void deleteCurrentPage() { this->currentPage_ = nullptr;};
      inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
      inline PageInfo& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline PageInfo& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline PageInfo& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      shared_ptr<string> count_ {};
      shared_ptr<int32_t> currentPage_ {};
      shared_ptr<int32_t> pageSize_ {};
      shared_ptr<int32_t> totalCount_ {};
    };

    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AnalyzeResult, analyzeResult_);
        DARABONBA_PTR_TO_JSON(FirstTime, firstTime_);
        DARABONBA_PTR_TO_JSON(Md5, md5_);
        DARABONBA_PTR_TO_JSON(ProcessId, processId_);
        DARABONBA_PTR_TO_JSON(ProcessPath, processPath_);
        DARABONBA_PTR_TO_JSON(Remark, remark_);
        DARABONBA_PTR_TO_JSON(Sha256, sha256_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AnalyzeResult, analyzeResult_);
        DARABONBA_PTR_FROM_JSON(FirstTime, firstTime_);
        DARABONBA_PTR_FROM_JSON(Md5, md5_);
        DARABONBA_PTR_FROM_JSON(ProcessId, processId_);
        DARABONBA_PTR_FROM_JSON(ProcessPath, processPath_);
        DARABONBA_PTR_FROM_JSON(Remark, remark_);
        DARABONBA_PTR_FROM_JSON(Sha256, sha256_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->analyzeResult_ == nullptr
        && this->firstTime_ == nullptr && this->md5_ == nullptr && this->processId_ == nullptr && this->processPath_ == nullptr && this->remark_ == nullptr
        && this->sha256_ == nullptr; };
      // analyzeResult Field Functions 
      bool hasAnalyzeResult() const { return this->analyzeResult_ != nullptr;};
      void deleteAnalyzeResult() { this->analyzeResult_ = nullptr;};
      inline string getAnalyzeResult() const { DARABONBA_PTR_GET_DEFAULT(analyzeResult_, "") };
      inline Data& setAnalyzeResult(string analyzeResult) { DARABONBA_PTR_SET_VALUE(analyzeResult_, analyzeResult) };


      // firstTime Field Functions 
      bool hasFirstTime() const { return this->firstTime_ != nullptr;};
      void deleteFirstTime() { this->firstTime_ = nullptr;};
      inline int64_t getFirstTime() const { DARABONBA_PTR_GET_DEFAULT(firstTime_, 0L) };
      inline Data& setFirstTime(int64_t firstTime) { DARABONBA_PTR_SET_VALUE(firstTime_, firstTime) };


      // md5 Field Functions 
      bool hasMd5() const { return this->md5_ != nullptr;};
      void deleteMd5() { this->md5_ = nullptr;};
      inline string getMd5() const { DARABONBA_PTR_GET_DEFAULT(md5_, "") };
      inline Data& setMd5(string md5) { DARABONBA_PTR_SET_VALUE(md5_, md5) };


      // processId Field Functions 
      bool hasProcessId() const { return this->processId_ != nullptr;};
      void deleteProcessId() { this->processId_ = nullptr;};
      inline string getProcessId() const { DARABONBA_PTR_GET_DEFAULT(processId_, "") };
      inline Data& setProcessId(string processId) { DARABONBA_PTR_SET_VALUE(processId_, processId) };


      // processPath Field Functions 
      bool hasProcessPath() const { return this->processPath_ != nullptr;};
      void deleteProcessPath() { this->processPath_ = nullptr;};
      inline string getProcessPath() const { DARABONBA_PTR_GET_DEFAULT(processPath_, "") };
      inline Data& setProcessPath(string processPath) { DARABONBA_PTR_SET_VALUE(processPath_, processPath) };


      // remark Field Functions 
      bool hasRemark() const { return this->remark_ != nullptr;};
      void deleteRemark() { this->remark_ = nullptr;};
      inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
      inline Data& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


      // sha256 Field Functions 
      bool hasSha256() const { return this->sha256_ != nullptr;};
      void deleteSha256() { this->sha256_ = nullptr;};
      inline string getSha256() const { DARABONBA_PTR_GET_DEFAULT(sha256_, "") };
      inline Data& setSha256(string sha256) { DARABONBA_PTR_SET_VALUE(sha256_, sha256) };


    protected:
      shared_ptr<string> analyzeResult_ {};
      shared_ptr<int64_t> firstTime_ {};
      shared_ptr<string> md5_ {};
      shared_ptr<string> processId_ {};
      shared_ptr<string> processPath_ {};
      shared_ptr<string> remark_ {};
      shared_ptr<string> sha256_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->pageInfo_ == nullptr && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListUnknownThreatDetectProcessResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListUnknownThreatDetectProcessResponseBody::Data>) };
    inline vector<ListUnknownThreatDetectProcessResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListUnknownThreatDetectProcessResponseBody::Data>) };
    inline ListUnknownThreatDetectProcessResponseBody& setData(const vector<ListUnknownThreatDetectProcessResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListUnknownThreatDetectProcessResponseBody& setData(vector<ListUnknownThreatDetectProcessResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const ListUnknownThreatDetectProcessResponseBody::PageInfo & getPageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, ListUnknownThreatDetectProcessResponseBody::PageInfo) };
    inline ListUnknownThreatDetectProcessResponseBody::PageInfo getPageInfo() { DARABONBA_PTR_GET(pageInfo_, ListUnknownThreatDetectProcessResponseBody::PageInfo) };
    inline ListUnknownThreatDetectProcessResponseBody& setPageInfo(const ListUnknownThreatDetectProcessResponseBody::PageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline ListUnknownThreatDetectProcessResponseBody& setPageInfo(ListUnknownThreatDetectProcessResponseBody::PageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListUnknownThreatDetectProcessResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<ListUnknownThreatDetectProcessResponseBody::Data>> data_ {};
    shared_ptr<ListUnknownThreatDetectProcessResponseBody::PageInfo> pageInfo_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
