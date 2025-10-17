// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBACKUPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBACKUPSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeBackupsResponseBodyItems.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeBackupsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBackupsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(FreeBackupSize, freeBackupSize_);
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalBackupSize, totalBackupSize_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBackupsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(FreeBackupSize, freeBackupSize_);
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalBackupSize, totalBackupSize_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeBackupsResponseBody() = default ;
    DescribeBackupsResponseBody(const DescribeBackupsResponseBody &) = default ;
    DescribeBackupsResponseBody(DescribeBackupsResponseBody &&) = default ;
    DescribeBackupsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBackupsResponseBody() = default ;
    DescribeBackupsResponseBody& operator=(const DescribeBackupsResponseBody &) = default ;
    DescribeBackupsResponseBody& operator=(DescribeBackupsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->freeBackupSize_ == nullptr
        && return this->items_ == nullptr && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->requestId_ == nullptr && return this->totalBackupSize_ == nullptr
        && return this->totalCount_ == nullptr; };
    // freeBackupSize Field Functions 
    bool hasFreeBackupSize() const { return this->freeBackupSize_ != nullptr;};
    void deleteFreeBackupSize() { this->freeBackupSize_ = nullptr;};
    inline int64_t freeBackupSize() const { DARABONBA_PTR_GET_DEFAULT(freeBackupSize_, 0L) };
    inline DescribeBackupsResponseBody& setFreeBackupSize(int64_t freeBackupSize) { DARABONBA_PTR_SET_VALUE(freeBackupSize_, freeBackupSize) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const DescribeBackupsResponseBodyItems & items() const { DARABONBA_PTR_GET_CONST(items_, DescribeBackupsResponseBodyItems) };
    inline DescribeBackupsResponseBodyItems items() { DARABONBA_PTR_GET(items_, DescribeBackupsResponseBodyItems) };
    inline DescribeBackupsResponseBody& setItems(const DescribeBackupsResponseBodyItems & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline DescribeBackupsResponseBody& setItems(DescribeBackupsResponseBodyItems && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline string pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, "") };
    inline DescribeBackupsResponseBody& setPageNumber(string pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline DescribeBackupsResponseBody& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeBackupsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalBackupSize Field Functions 
    bool hasTotalBackupSize() const { return this->totalBackupSize_ != nullptr;};
    void deleteTotalBackupSize() { this->totalBackupSize_ = nullptr;};
    inline int64_t totalBackupSize() const { DARABONBA_PTR_GET_DEFAULT(totalBackupSize_, 0L) };
    inline DescribeBackupsResponseBody& setTotalBackupSize(int64_t totalBackupSize) { DARABONBA_PTR_SET_VALUE(totalBackupSize_, totalBackupSize) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline string totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, "") };
    inline DescribeBackupsResponseBody& setTotalCount(string totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    std::shared_ptr<int64_t> freeBackupSize_ = nullptr;
    // The queried backup sets.
    std::shared_ptr<DescribeBackupsResponseBodyItems> items_ = nullptr;
    // The page number.
    std::shared_ptr<string> pageNumber_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<string> pageSize_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<int64_t> totalBackupSize_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<string> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
