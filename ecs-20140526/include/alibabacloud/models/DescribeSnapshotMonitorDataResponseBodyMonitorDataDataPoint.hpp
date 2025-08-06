// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESNAPSHOTMONITORDATARESPONSEBODYMONITORDATADATAPOINT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESNAPSHOTMONITORDATARESPONSEBODYMONITORDATADATAPOINT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeSnapshotMonitorDataResponseBodyMonitorDataDataPoint : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSnapshotMonitorDataResponseBodyMonitorDataDataPoint& obj) { 
      DARABONBA_PTR_TO_JSON(Size, size_);
      DARABONBA_PTR_TO_JSON(TimeStamp, timeStamp_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSnapshotMonitorDataResponseBodyMonitorDataDataPoint& obj) { 
      DARABONBA_PTR_FROM_JSON(Size, size_);
      DARABONBA_PTR_FROM_JSON(TimeStamp, timeStamp_);
    };
    DescribeSnapshotMonitorDataResponseBodyMonitorDataDataPoint() = default ;
    DescribeSnapshotMonitorDataResponseBodyMonitorDataDataPoint(const DescribeSnapshotMonitorDataResponseBodyMonitorDataDataPoint &) = default ;
    DescribeSnapshotMonitorDataResponseBodyMonitorDataDataPoint(DescribeSnapshotMonitorDataResponseBodyMonitorDataDataPoint &&) = default ;
    DescribeSnapshotMonitorDataResponseBodyMonitorDataDataPoint(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSnapshotMonitorDataResponseBodyMonitorDataDataPoint() = default ;
    DescribeSnapshotMonitorDataResponseBodyMonitorDataDataPoint& operator=(const DescribeSnapshotMonitorDataResponseBodyMonitorDataDataPoint &) = default ;
    DescribeSnapshotMonitorDataResponseBodyMonitorDataDataPoint& operator=(DescribeSnapshotMonitorDataResponseBodyMonitorDataDataPoint &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->size_ != nullptr
        && this->timeStamp_ != nullptr; };
    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int64_t size() const { DARABONBA_PTR_GET_DEFAULT(size_, 0L) };
    inline DescribeSnapshotMonitorDataResponseBodyMonitorDataDataPoint& setSize(int64_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


    // timeStamp Field Functions 
    bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
    void deleteTimeStamp() { this->timeStamp_ = nullptr;};
    inline string timeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, "") };
    inline DescribeSnapshotMonitorDataResponseBodyMonitorDataDataPoint& setTimeStamp(string timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


  protected:
    // The total size of snapshots. Unit: bytes.
    std::shared_ptr<int64_t> size_ = nullptr;
    // The timestamp that corresponds to a snapshot size.
    std::shared_ptr<string> timeStamp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
