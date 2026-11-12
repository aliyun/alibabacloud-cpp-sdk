// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESHAREDDISKRECORDSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESHAREDDISKRECORDSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeSharedDiskRecordsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSharedDiskRecordsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DiskIds, diskIds_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Namespaces, namespaces_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RegionIds, regionIds_);
      DARABONBA_PTR_TO_JSON(SdgIds, sdgIds_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSharedDiskRecordsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DiskIds, diskIds_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Namespaces, namespaces_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RegionIds, regionIds_);
      DARABONBA_PTR_FROM_JSON(SdgIds, sdgIds_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeSharedDiskRecordsRequest() = default ;
    DescribeSharedDiskRecordsRequest(const DescribeSharedDiskRecordsRequest &) = default ;
    DescribeSharedDiskRecordsRequest(DescribeSharedDiskRecordsRequest &&) = default ;
    DescribeSharedDiskRecordsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSharedDiskRecordsRequest() = default ;
    DescribeSharedDiskRecordsRequest& operator=(const DescribeSharedDiskRecordsRequest &) = default ;
    DescribeSharedDiskRecordsRequest& operator=(DescribeSharedDiskRecordsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->diskIds_ == nullptr
        && this->endTime_ == nullptr && this->namespaces_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->regionIds_ == nullptr
        && this->sdgIds_ == nullptr && this->startTime_ == nullptr; };
    // diskIds Field Functions 
    bool hasDiskIds() const { return this->diskIds_ != nullptr;};
    void deleteDiskIds() { this->diskIds_ = nullptr;};
    inline const vector<string> & getDiskIds() const { DARABONBA_PTR_GET_CONST(diskIds_, vector<string>) };
    inline vector<string> getDiskIds() { DARABONBA_PTR_GET(diskIds_, vector<string>) };
    inline DescribeSharedDiskRecordsRequest& setDiskIds(const vector<string> & diskIds) { DARABONBA_PTR_SET_VALUE(diskIds_, diskIds) };
    inline DescribeSharedDiskRecordsRequest& setDiskIds(vector<string> && diskIds) { DARABONBA_PTR_SET_RVALUE(diskIds_, diskIds) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeSharedDiskRecordsRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // namespaces Field Functions 
    bool hasNamespaces() const { return this->namespaces_ != nullptr;};
    void deleteNamespaces() { this->namespaces_ = nullptr;};
    inline const vector<string> & getNamespaces() const { DARABONBA_PTR_GET_CONST(namespaces_, vector<string>) };
    inline vector<string> getNamespaces() { DARABONBA_PTR_GET(namespaces_, vector<string>) };
    inline DescribeSharedDiskRecordsRequest& setNamespaces(const vector<string> & namespaces) { DARABONBA_PTR_SET_VALUE(namespaces_, namespaces) };
    inline DescribeSharedDiskRecordsRequest& setNamespaces(vector<string> && namespaces) { DARABONBA_PTR_SET_RVALUE(namespaces_, namespaces) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeSharedDiskRecordsRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeSharedDiskRecordsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regionIds Field Functions 
    bool hasRegionIds() const { return this->regionIds_ != nullptr;};
    void deleteRegionIds() { this->regionIds_ = nullptr;};
    inline const vector<string> & getRegionIds() const { DARABONBA_PTR_GET_CONST(regionIds_, vector<string>) };
    inline vector<string> getRegionIds() { DARABONBA_PTR_GET(regionIds_, vector<string>) };
    inline DescribeSharedDiskRecordsRequest& setRegionIds(const vector<string> & regionIds) { DARABONBA_PTR_SET_VALUE(regionIds_, regionIds) };
    inline DescribeSharedDiskRecordsRequest& setRegionIds(vector<string> && regionIds) { DARABONBA_PTR_SET_RVALUE(regionIds_, regionIds) };


    // sdgIds Field Functions 
    bool hasSdgIds() const { return this->sdgIds_ != nullptr;};
    void deleteSdgIds() { this->sdgIds_ = nullptr;};
    inline const vector<string> & getSdgIds() const { DARABONBA_PTR_GET_CONST(sdgIds_, vector<string>) };
    inline vector<string> getSdgIds() { DARABONBA_PTR_GET(sdgIds_, vector<string>) };
    inline DescribeSharedDiskRecordsRequest& setSdgIds(const vector<string> & sdgIds) { DARABONBA_PTR_SET_VALUE(sdgIds_, sdgIds) };
    inline DescribeSharedDiskRecordsRequest& setSdgIds(vector<string> && sdgIds) { DARABONBA_PTR_SET_RVALUE(sdgIds_, sdgIds) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeSharedDiskRecordsRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The shared disk IDs.
    shared_ptr<vector<string>> diskIds_ {};
    // The billing end time.
    shared_ptr<string> endTime_ {};
    // The namespaces.
    shared_ptr<vector<string>> namespaces_ {};
    // The page number for the paging query.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The region IDs.
    shared_ptr<vector<string>> regionIds_ {};
    // The SDG IDs.
    shared_ptr<vector<string>> sdgIds_ {};
    // The billing start time.
    shared_ptr<string> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
