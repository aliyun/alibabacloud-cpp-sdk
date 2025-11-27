// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELOGBACKUPFILESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELOGBACKUPFILESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeLogBackupFilesResponseBodyItems.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeLogBackupFilesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLogBackupFilesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageRecordCount, pageRecordCount_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalFileSize, totalFileSize_);
      DARABONBA_PTR_TO_JSON(TotalRecordCount, totalRecordCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLogBackupFilesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageRecordCount, pageRecordCount_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalFileSize, totalFileSize_);
      DARABONBA_PTR_FROM_JSON(TotalRecordCount, totalRecordCount_);
    };
    DescribeLogBackupFilesResponseBody() = default ;
    DescribeLogBackupFilesResponseBody(const DescribeLogBackupFilesResponseBody &) = default ;
    DescribeLogBackupFilesResponseBody(DescribeLogBackupFilesResponseBody &&) = default ;
    DescribeLogBackupFilesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLogBackupFilesResponseBody() = default ;
    DescribeLogBackupFilesResponseBody& operator=(const DescribeLogBackupFilesResponseBody &) = default ;
    DescribeLogBackupFilesResponseBody& operator=(DescribeLogBackupFilesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->items_ == nullptr
        && return this->pageNumber_ == nullptr && return this->pageRecordCount_ == nullptr && return this->requestId_ == nullptr && return this->totalFileSize_ == nullptr && return this->totalRecordCount_ == nullptr; };
    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const DescribeLogBackupFilesResponseBodyItems & items() const { DARABONBA_PTR_GET_CONST(items_, DescribeLogBackupFilesResponseBodyItems) };
    inline DescribeLogBackupFilesResponseBodyItems items() { DARABONBA_PTR_GET(items_, DescribeLogBackupFilesResponseBodyItems) };
    inline DescribeLogBackupFilesResponseBody& setItems(const DescribeLogBackupFilesResponseBodyItems & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline DescribeLogBackupFilesResponseBody& setItems(DescribeLogBackupFilesResponseBodyItems && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeLogBackupFilesResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageRecordCount Field Functions 
    bool hasPageRecordCount() const { return this->pageRecordCount_ != nullptr;};
    void deletePageRecordCount() { this->pageRecordCount_ = nullptr;};
    inline int32_t pageRecordCount() const { DARABONBA_PTR_GET_DEFAULT(pageRecordCount_, 0) };
    inline DescribeLogBackupFilesResponseBody& setPageRecordCount(int32_t pageRecordCount) { DARABONBA_PTR_SET_VALUE(pageRecordCount_, pageRecordCount) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLogBackupFilesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalFileSize Field Functions 
    bool hasTotalFileSize() const { return this->totalFileSize_ != nullptr;};
    void deleteTotalFileSize() { this->totalFileSize_ = nullptr;};
    inline int64_t totalFileSize() const { DARABONBA_PTR_GET_DEFAULT(totalFileSize_, 0L) };
    inline DescribeLogBackupFilesResponseBody& setTotalFileSize(int64_t totalFileSize) { DARABONBA_PTR_SET_VALUE(totalFileSize_, totalFileSize) };


    // totalRecordCount Field Functions 
    bool hasTotalRecordCount() const { return this->totalRecordCount_ != nullptr;};
    void deleteTotalRecordCount() { this->totalRecordCount_ = nullptr;};
    inline int32_t totalRecordCount() const { DARABONBA_PTR_GET_DEFAULT(totalRecordCount_, 0) };
    inline DescribeLogBackupFilesResponseBody& setTotalRecordCount(int32_t totalRecordCount) { DARABONBA_PTR_SET_VALUE(totalRecordCount_, totalRecordCount) };


  protected:
    // The details of log files.
    std::shared_ptr<DescribeLogBackupFilesResponseBodyItems> items_ = nullptr;
    // The page number of the page returned.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of log files on the current page.
    std::shared_ptr<int32_t> pageRecordCount_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total size of log files. Unit: bytes.
    std::shared_ptr<int64_t> totalFileSize_ = nullptr;
    // The total number of log files.
    std::shared_ptr<int32_t> totalRecordCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
