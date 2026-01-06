// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESTORAGEPACKAGESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESTORAGEPACKAGESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace NAS20170626
{
namespace Models
{
  class DescribeStoragePackagesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeStoragePackagesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(UseUTCDateTime, useUTCDateTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeStoragePackagesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(UseUTCDateTime, useUTCDateTime_);
    };
    DescribeStoragePackagesRequest() = default ;
    DescribeStoragePackagesRequest(const DescribeStoragePackagesRequest &) = default ;
    DescribeStoragePackagesRequest(DescribeStoragePackagesRequest &&) = default ;
    DescribeStoragePackagesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeStoragePackagesRequest() = default ;
    DescribeStoragePackagesRequest& operator=(const DescribeStoragePackagesRequest &) = default ;
    DescribeStoragePackagesRequest& operator=(DescribeStoragePackagesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->regionId_ == nullptr && this->useUTCDateTime_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeStoragePackagesRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeStoragePackagesRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeStoragePackagesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // useUTCDateTime Field Functions 
    bool hasUseUTCDateTime() const { return this->useUTCDateTime_ != nullptr;};
    void deleteUseUTCDateTime() { this->useUTCDateTime_ = nullptr;};
    inline bool getUseUTCDateTime() const { DARABONBA_PTR_GET_DEFAULT(useUTCDateTime_, false) };
    inline DescribeStoragePackagesRequest& setUseUTCDateTime(bool useUTCDateTime) { DARABONBA_PTR_SET_VALUE(useUTCDateTime_, useUTCDateTime) };


  protected:
    // The number of the page to return.
    // 
    // Pages start from page 1. Default value: 1.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of storage plans to return on each page.
    // 
    // Valid values: 1 to 100.
    // 
    // Default value: 10.
    shared_ptr<int32_t> pageSize_ {};
    // The region ID.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // Specifies whether the time to return is in UTC.
    // 
    // Valid values:
    // 
    // *   true (default): returns UTC time.
    // *   false: returns UNIX timestamp.
    shared_ptr<bool> useUTCDateTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
