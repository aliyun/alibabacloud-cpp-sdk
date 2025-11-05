// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDISKMONITORDATALISTRESPONSEBODYMONITORDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDISKMONITORDATALISTRESPONSEBODYMONITORDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ebs20210730
{
namespace Models
{
  class DescribeDiskMonitorDataListResponseBodyMonitorData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDiskMonitorDataListResponseBodyMonitorData& obj) { 
      DARABONBA_PTR_TO_JSON(BurstIOCount, burstIOCount_);
      DARABONBA_PTR_TO_JSON(DiskId, diskId_);
      DARABONBA_PTR_TO_JSON(Timestamp, timestamp_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDiskMonitorDataListResponseBodyMonitorData& obj) { 
      DARABONBA_PTR_FROM_JSON(BurstIOCount, burstIOCount_);
      DARABONBA_PTR_FROM_JSON(DiskId, diskId_);
      DARABONBA_PTR_FROM_JSON(Timestamp, timestamp_);
    };
    DescribeDiskMonitorDataListResponseBodyMonitorData() = default ;
    DescribeDiskMonitorDataListResponseBodyMonitorData(const DescribeDiskMonitorDataListResponseBodyMonitorData &) = default ;
    DescribeDiskMonitorDataListResponseBodyMonitorData(DescribeDiskMonitorDataListResponseBodyMonitorData &&) = default ;
    DescribeDiskMonitorDataListResponseBodyMonitorData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDiskMonitorDataListResponseBodyMonitorData() = default ;
    DescribeDiskMonitorDataListResponseBodyMonitorData& operator=(const DescribeDiskMonitorDataListResponseBodyMonitorData &) = default ;
    DescribeDiskMonitorDataListResponseBodyMonitorData& operator=(DescribeDiskMonitorDataListResponseBodyMonitorData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->burstIOCount_ == nullptr
        && return this->diskId_ == nullptr && return this->timestamp_ == nullptr; };
    // burstIOCount Field Functions 
    bool hasBurstIOCount() const { return this->burstIOCount_ != nullptr;};
    void deleteBurstIOCount() { this->burstIOCount_ = nullptr;};
    inline int64_t burstIOCount() const { DARABONBA_PTR_GET_DEFAULT(burstIOCount_, 0L) };
    inline DescribeDiskMonitorDataListResponseBodyMonitorData& setBurstIOCount(int64_t burstIOCount) { DARABONBA_PTR_SET_VALUE(burstIOCount_, burstIOCount) };


    // diskId Field Functions 
    bool hasDiskId() const { return this->diskId_ != nullptr;};
    void deleteDiskId() { this->diskId_ = nullptr;};
    inline string diskId() const { DARABONBA_PTR_GET_DEFAULT(diskId_, "") };
    inline DescribeDiskMonitorDataListResponseBodyMonitorData& setDiskId(string diskId) { DARABONBA_PTR_SET_VALUE(diskId_, diskId) };


    // timestamp Field Functions 
    bool hasTimestamp() const { return this->timestamp_ != nullptr;};
    void deleteTimestamp() { this->timestamp_ = nullptr;};
    inline string timestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, "") };
    inline DescribeDiskMonitorDataListResponseBodyMonitorData& setTimestamp(string timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


  protected:
    // The number of burst I/O operations.
    std::shared_ptr<int64_t> burstIOCount_ = nullptr;
    // The ID of the disk.
    std::shared_ptr<string> diskId_ = nullptr;
    // The beginning of the time range during which the performance of the disk bursts. The time follows the [ISO 8601](https://help.aliyun.com/document_detail/25696.html) standard in the `yyyy-MM-ddTHH:mm:ssZ` format. The time is displayed in UTC.
    std::shared_ptr<string> timestamp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ebs20210730
#endif
