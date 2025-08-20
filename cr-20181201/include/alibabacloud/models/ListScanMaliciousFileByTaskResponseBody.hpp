// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSCANMALICIOUSFILEBYTASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSCANMALICIOUSFILEBYTASKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListScanMaliciousFileByTaskResponseBodyScanMaliciousFiles.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cr20181201
{
namespace Models
{
  class ListScanMaliciousFileByTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListScanMaliciousFileByTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(IsSuccess, isSuccess_);
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ScanMaliciousFiles, scanMaliciousFiles_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListScanMaliciousFileByTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(IsSuccess, isSuccess_);
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ScanMaliciousFiles, scanMaliciousFiles_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListScanMaliciousFileByTaskResponseBody() = default ;
    ListScanMaliciousFileByTaskResponseBody(const ListScanMaliciousFileByTaskResponseBody &) = default ;
    ListScanMaliciousFileByTaskResponseBody(ListScanMaliciousFileByTaskResponseBody &&) = default ;
    ListScanMaliciousFileByTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListScanMaliciousFileByTaskResponseBody() = default ;
    ListScanMaliciousFileByTaskResponseBody& operator=(const ListScanMaliciousFileByTaskResponseBody &) = default ;
    ListScanMaliciousFileByTaskResponseBody& operator=(ListScanMaliciousFileByTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr
        && this->isSuccess_ != nullptr && this->pageNo_ != nullptr && this->pageSize_ != nullptr && this->requestId_ != nullptr && this->scanMaliciousFiles_ != nullptr
        && this->totalCount_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t code() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline ListScanMaliciousFileByTaskResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // isSuccess Field Functions 
    bool hasIsSuccess() const { return this->isSuccess_ != nullptr;};
    void deleteIsSuccess() { this->isSuccess_ = nullptr;};
    inline bool isSuccess() const { DARABONBA_PTR_GET_DEFAULT(isSuccess_, false) };
    inline ListScanMaliciousFileByTaskResponseBody& setIsSuccess(bool isSuccess) { DARABONBA_PTR_SET_VALUE(isSuccess_, isSuccess) };


    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int32_t pageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0) };
    inline ListScanMaliciousFileByTaskResponseBody& setPageNo(int32_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListScanMaliciousFileByTaskResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListScanMaliciousFileByTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // scanMaliciousFiles Field Functions 
    bool hasScanMaliciousFiles() const { return this->scanMaliciousFiles_ != nullptr;};
    void deleteScanMaliciousFiles() { this->scanMaliciousFiles_ = nullptr;};
    inline const vector<ListScanMaliciousFileByTaskResponseBodyScanMaliciousFiles> & scanMaliciousFiles() const { DARABONBA_PTR_GET_CONST(scanMaliciousFiles_, vector<ListScanMaliciousFileByTaskResponseBodyScanMaliciousFiles>) };
    inline vector<ListScanMaliciousFileByTaskResponseBodyScanMaliciousFiles> scanMaliciousFiles() { DARABONBA_PTR_GET(scanMaliciousFiles_, vector<ListScanMaliciousFileByTaskResponseBodyScanMaliciousFiles>) };
    inline ListScanMaliciousFileByTaskResponseBody& setScanMaliciousFiles(const vector<ListScanMaliciousFileByTaskResponseBodyScanMaliciousFiles> & scanMaliciousFiles) { DARABONBA_PTR_SET_VALUE(scanMaliciousFiles_, scanMaliciousFiles) };
    inline ListScanMaliciousFileByTaskResponseBody& setScanMaliciousFiles(vector<ListScanMaliciousFileByTaskResponseBodyScanMaliciousFiles> && scanMaliciousFiles) { DARABONBA_PTR_SET_RVALUE(scanMaliciousFiles_, scanMaliciousFiles) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListScanMaliciousFileByTaskResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The return value.
    std::shared_ptr<int32_t> code_ = nullptr;
    // Indicates whether the API request is successful. Valid values:
    // 
    // *   `true`: successful
    // *   `false`: failed
    std::shared_ptr<bool> isSuccess_ = nullptr;
    // The page number. Default value: 1.
    std::shared_ptr<int32_t> pageNo_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The queried malicious files.
    std::shared_ptr<vector<ListScanMaliciousFileByTaskResponseBodyScanMaliciousFiles>> scanMaliciousFiles_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cr20181201
#endif
