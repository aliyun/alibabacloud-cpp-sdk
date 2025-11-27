// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECROSSREGIONBACKUPDBINSTANCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECROSSREGIONBACKUPDBINSTANCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeCrossRegionBackupDBInstanceResponseBodyItems.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeCrossRegionBackupDBInstanceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCrossRegionBackupDBInstanceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(ItemsNumbers, itemsNumbers_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalRecords, totalRecords_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCrossRegionBackupDBInstanceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(ItemsNumbers, itemsNumbers_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalRecords, totalRecords_);
    };
    DescribeCrossRegionBackupDBInstanceResponseBody() = default ;
    DescribeCrossRegionBackupDBInstanceResponseBody(const DescribeCrossRegionBackupDBInstanceResponseBody &) = default ;
    DescribeCrossRegionBackupDBInstanceResponseBody(DescribeCrossRegionBackupDBInstanceResponseBody &&) = default ;
    DescribeCrossRegionBackupDBInstanceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCrossRegionBackupDBInstanceResponseBody() = default ;
    DescribeCrossRegionBackupDBInstanceResponseBody& operator=(const DescribeCrossRegionBackupDBInstanceResponseBody &) = default ;
    DescribeCrossRegionBackupDBInstanceResponseBody& operator=(DescribeCrossRegionBackupDBInstanceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->items_ == nullptr
        && return this->itemsNumbers_ == nullptr && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->regionId_ == nullptr && return this->requestId_ == nullptr
        && return this->totalRecords_ == nullptr; };
    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const DescribeCrossRegionBackupDBInstanceResponseBodyItems & items() const { DARABONBA_PTR_GET_CONST(items_, DescribeCrossRegionBackupDBInstanceResponseBodyItems) };
    inline DescribeCrossRegionBackupDBInstanceResponseBodyItems items() { DARABONBA_PTR_GET(items_, DescribeCrossRegionBackupDBInstanceResponseBodyItems) };
    inline DescribeCrossRegionBackupDBInstanceResponseBody& setItems(const DescribeCrossRegionBackupDBInstanceResponseBodyItems & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline DescribeCrossRegionBackupDBInstanceResponseBody& setItems(DescribeCrossRegionBackupDBInstanceResponseBodyItems && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // itemsNumbers Field Functions 
    bool hasItemsNumbers() const { return this->itemsNumbers_ != nullptr;};
    void deleteItemsNumbers() { this->itemsNumbers_ = nullptr;};
    inline int32_t itemsNumbers() const { DARABONBA_PTR_GET_DEFAULT(itemsNumbers_, 0) };
    inline DescribeCrossRegionBackupDBInstanceResponseBody& setItemsNumbers(int32_t itemsNumbers) { DARABONBA_PTR_SET_VALUE(itemsNumbers_, itemsNumbers) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeCrossRegionBackupDBInstanceResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeCrossRegionBackupDBInstanceResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeCrossRegionBackupDBInstanceResponseBody& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCrossRegionBackupDBInstanceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalRecords Field Functions 
    bool hasTotalRecords() const { return this->totalRecords_ != nullptr;};
    void deleteTotalRecords() { this->totalRecords_ = nullptr;};
    inline int32_t totalRecords() const { DARABONBA_PTR_GET_DEFAULT(totalRecords_, 0) };
    inline DescribeCrossRegionBackupDBInstanceResponseBody& setTotalRecords(int32_t totalRecords) { DARABONBA_PTR_SET_VALUE(totalRecords_, totalRecords) };


  protected:
    // The cross-region backup settings.
    std::shared_ptr<DescribeCrossRegionBackupDBInstanceResponseBodyItems> items_ = nullptr;
    // The total number of items returned for cross-region backup settings.
    std::shared_ptr<int32_t> itemsNumbers_ = nullptr;
    // The page number. Pages start from page 1.
    // 
    // Default value: **1**.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page. Default value: 30.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int32_t> totalRecords_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
