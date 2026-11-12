// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESHAREDDISKRECORDSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESHAREDDISKRECORDSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeSharedDiskRecordsShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSharedDiskRecordsShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DiskIds, diskIdsShrink_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Namespaces, namespacesShrink_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RegionIds, regionIdsShrink_);
      DARABONBA_PTR_TO_JSON(SdgIds, sdgIdsShrink_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSharedDiskRecordsShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DiskIds, diskIdsShrink_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Namespaces, namespacesShrink_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RegionIds, regionIdsShrink_);
      DARABONBA_PTR_FROM_JSON(SdgIds, sdgIdsShrink_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeSharedDiskRecordsShrinkRequest() = default ;
    DescribeSharedDiskRecordsShrinkRequest(const DescribeSharedDiskRecordsShrinkRequest &) = default ;
    DescribeSharedDiskRecordsShrinkRequest(DescribeSharedDiskRecordsShrinkRequest &&) = default ;
    DescribeSharedDiskRecordsShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSharedDiskRecordsShrinkRequest() = default ;
    DescribeSharedDiskRecordsShrinkRequest& operator=(const DescribeSharedDiskRecordsShrinkRequest &) = default ;
    DescribeSharedDiskRecordsShrinkRequest& operator=(DescribeSharedDiskRecordsShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->diskIdsShrink_ == nullptr
        && this->endTime_ == nullptr && this->namespacesShrink_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->regionIdsShrink_ == nullptr
        && this->sdgIdsShrink_ == nullptr && this->startTime_ == nullptr; };
    // diskIdsShrink Field Functions 
    bool hasDiskIdsShrink() const { return this->diskIdsShrink_ != nullptr;};
    void deleteDiskIdsShrink() { this->diskIdsShrink_ = nullptr;};
    inline string getDiskIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(diskIdsShrink_, "") };
    inline DescribeSharedDiskRecordsShrinkRequest& setDiskIdsShrink(string diskIdsShrink) { DARABONBA_PTR_SET_VALUE(diskIdsShrink_, diskIdsShrink) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeSharedDiskRecordsShrinkRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // namespacesShrink Field Functions 
    bool hasNamespacesShrink() const { return this->namespacesShrink_ != nullptr;};
    void deleteNamespacesShrink() { this->namespacesShrink_ = nullptr;};
    inline string getNamespacesShrink() const { DARABONBA_PTR_GET_DEFAULT(namespacesShrink_, "") };
    inline DescribeSharedDiskRecordsShrinkRequest& setNamespacesShrink(string namespacesShrink) { DARABONBA_PTR_SET_VALUE(namespacesShrink_, namespacesShrink) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeSharedDiskRecordsShrinkRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeSharedDiskRecordsShrinkRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regionIdsShrink Field Functions 
    bool hasRegionIdsShrink() const { return this->regionIdsShrink_ != nullptr;};
    void deleteRegionIdsShrink() { this->regionIdsShrink_ = nullptr;};
    inline string getRegionIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(regionIdsShrink_, "") };
    inline DescribeSharedDiskRecordsShrinkRequest& setRegionIdsShrink(string regionIdsShrink) { DARABONBA_PTR_SET_VALUE(regionIdsShrink_, regionIdsShrink) };


    // sdgIdsShrink Field Functions 
    bool hasSdgIdsShrink() const { return this->sdgIdsShrink_ != nullptr;};
    void deleteSdgIdsShrink() { this->sdgIdsShrink_ = nullptr;};
    inline string getSdgIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(sdgIdsShrink_, "") };
    inline DescribeSharedDiskRecordsShrinkRequest& setSdgIdsShrink(string sdgIdsShrink) { DARABONBA_PTR_SET_VALUE(sdgIdsShrink_, sdgIdsShrink) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeSharedDiskRecordsShrinkRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The shared disk IDs.
    shared_ptr<string> diskIdsShrink_ {};
    // The billing end time.
    shared_ptr<string> endTime_ {};
    // The namespaces.
    shared_ptr<string> namespacesShrink_ {};
    // The page number for the paging query.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The region IDs.
    shared_ptr<string> regionIdsShrink_ {};
    // The SDG IDs.
    shared_ptr<string> sdgIdsShrink_ {};
    // The billing start time.
    shared_ptr<string> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
