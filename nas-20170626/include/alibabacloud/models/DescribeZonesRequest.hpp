// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEZONESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEZONESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace NAS20170626
{
namespace Models
{
  class DescribeZonesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeZonesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FileSystemType, fileSystemType_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeZonesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FileSystemType, fileSystemType_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DescribeZonesRequest() = default ;
    DescribeZonesRequest(const DescribeZonesRequest &) = default ;
    DescribeZonesRequest(DescribeZonesRequest &&) = default ;
    DescribeZonesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeZonesRequest() = default ;
    DescribeZonesRequest& operator=(const DescribeZonesRequest &) = default ;
    DescribeZonesRequest& operator=(DescribeZonesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fileSystemType_ == nullptr
        && this->regionId_ == nullptr; };
    // fileSystemType Field Functions 
    bool hasFileSystemType() const { return this->fileSystemType_ != nullptr;};
    void deleteFileSystemType() { this->fileSystemType_ = nullptr;};
    inline string getFileSystemType() const { DARABONBA_PTR_GET_DEFAULT(fileSystemType_, "") };
    inline DescribeZonesRequest& setFileSystemType(string fileSystemType) { DARABONBA_PTR_SET_VALUE(fileSystemType_, fileSystemType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeZonesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The type of the file system.
    // 
    // Valid value:
    // 
    // *   standard: General-purpose Apsara File Storage NAS (NAS) file system
    // *   extreme: Extreme NAS file system.
    // *   cpfs: CPFS file system.
    shared_ptr<string> fileSystemType_ {};
    // The ID of the region where you want to query zones.
    // 
    // You can call the DescribeRegions operation to query the latest region list.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
