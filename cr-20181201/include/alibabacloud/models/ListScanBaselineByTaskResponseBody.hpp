// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSCANBASELINEBYTASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSCANBASELINEBYTASKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListScanBaselineByTaskResponseBodyScanBaselines.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cr20181201
{
namespace Models
{
  class ListScanBaselineByTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListScanBaselineByTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(IsSuccess, isSuccess_);
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ScanBaselines, scanBaselines_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListScanBaselineByTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(IsSuccess, isSuccess_);
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ScanBaselines, scanBaselines_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListScanBaselineByTaskResponseBody() = default ;
    ListScanBaselineByTaskResponseBody(const ListScanBaselineByTaskResponseBody &) = default ;
    ListScanBaselineByTaskResponseBody(ListScanBaselineByTaskResponseBody &&) = default ;
    ListScanBaselineByTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListScanBaselineByTaskResponseBody() = default ;
    ListScanBaselineByTaskResponseBody& operator=(const ListScanBaselineByTaskResponseBody &) = default ;
    ListScanBaselineByTaskResponseBody& operator=(ListScanBaselineByTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr
        && this->isSuccess_ != nullptr && this->pageNo_ != nullptr && this->pageSize_ != nullptr && this->requestId_ != nullptr && this->scanBaselines_ != nullptr
        && this->totalCount_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t code() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline ListScanBaselineByTaskResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // isSuccess Field Functions 
    bool hasIsSuccess() const { return this->isSuccess_ != nullptr;};
    void deleteIsSuccess() { this->isSuccess_ = nullptr;};
    inline bool isSuccess() const { DARABONBA_PTR_GET_DEFAULT(isSuccess_, false) };
    inline ListScanBaselineByTaskResponseBody& setIsSuccess(bool isSuccess) { DARABONBA_PTR_SET_VALUE(isSuccess_, isSuccess) };


    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int32_t pageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0) };
    inline ListScanBaselineByTaskResponseBody& setPageNo(int32_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListScanBaselineByTaskResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListScanBaselineByTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // scanBaselines Field Functions 
    bool hasScanBaselines() const { return this->scanBaselines_ != nullptr;};
    void deleteScanBaselines() { this->scanBaselines_ = nullptr;};
    inline const vector<ListScanBaselineByTaskResponseBodyScanBaselines> & scanBaselines() const { DARABONBA_PTR_GET_CONST(scanBaselines_, vector<ListScanBaselineByTaskResponseBodyScanBaselines>) };
    inline vector<ListScanBaselineByTaskResponseBodyScanBaselines> scanBaselines() { DARABONBA_PTR_GET(scanBaselines_, vector<ListScanBaselineByTaskResponseBodyScanBaselines>) };
    inline ListScanBaselineByTaskResponseBody& setScanBaselines(const vector<ListScanBaselineByTaskResponseBodyScanBaselines> & scanBaselines) { DARABONBA_PTR_SET_VALUE(scanBaselines_, scanBaselines) };
    inline ListScanBaselineByTaskResponseBody& setScanBaselines(vector<ListScanBaselineByTaskResponseBodyScanBaselines> && scanBaselines) { DARABONBA_PTR_SET_RVALUE(scanBaselines_, scanBaselines) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListScanBaselineByTaskResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The return value.
    std::shared_ptr<int32_t> code_ = nullptr;
    // Indicates whether the API request was successful. Valid values:
    // 
    // *   `true`: successful
    // *   `false`: failed
    std::shared_ptr<bool> isSuccess_ = nullptr;
    // The page number.
    std::shared_ptr<int32_t> pageNo_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // Id of the request
    std::shared_ptr<string> requestId_ = nullptr;
    // The scanned baseline risks.
    std::shared_ptr<vector<ListScanBaselineByTaskResponseBodyScanBaselines>> scanBaselines_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cr20181201
#endif
