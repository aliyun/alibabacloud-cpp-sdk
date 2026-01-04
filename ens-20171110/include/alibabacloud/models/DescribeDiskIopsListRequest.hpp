// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDISKIOPSLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDISKIOPSLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeDiskIopsListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDiskIopsListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DiskId, diskId_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDiskIopsListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DiskId, diskId_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeDiskIopsListRequest() = default ;
    DescribeDiskIopsListRequest(const DescribeDiskIopsListRequest &) = default ;
    DescribeDiskIopsListRequest(DescribeDiskIopsListRequest &&) = default ;
    DescribeDiskIopsListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDiskIopsListRequest() = default ;
    DescribeDiskIopsListRequest& operator=(const DescribeDiskIopsListRequest &) = default ;
    DescribeDiskIopsListRequest& operator=(DescribeDiskIopsListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->diskId_ == nullptr
        && this->endTime_ == nullptr && this->startTime_ == nullptr; };
    // diskId Field Functions 
    bool hasDiskId() const { return this->diskId_ != nullptr;};
    void deleteDiskId() { this->diskId_ = nullptr;};
    inline string getDiskId() const { DARABONBA_PTR_GET_DEFAULT(diskId_, "") };
    inline DescribeDiskIopsListRequest& setDiskId(string diskId) { DARABONBA_PTR_SET_VALUE(diskId_, diskId) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeDiskIopsListRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeDiskIopsListRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The ID of the disk. Format: d-\\*\\*\\*\\*\\*\\*\\*\\*\\*\\*\\*.
    // 
    // This parameter is required.
    shared_ptr<string> diskId_ {};
    // The beginning of the time range to query. Specify the time in the format of yyyy-MM-dd HH:mm:ss. The time range specified by the StartTime and EndTime parameters cannot exceed one day for a query.
    // 
    // This parameter is required.
    shared_ptr<string> endTime_ {};
    // The beginning of the time range to query. Specify the time in the format of yyyy-MM-dd HH:mm:ss.
    // 
    // This parameter is required.
    shared_ptr<string> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
