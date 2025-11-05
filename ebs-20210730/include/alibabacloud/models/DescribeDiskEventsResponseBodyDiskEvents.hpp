// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDISKEVENTSRESPONSEBODYDISKEVENTS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDISKEVENTSRESPONSEBODYDISKEVENTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ebs20210730
{
namespace Models
{
  class DescribeDiskEventsResponseBodyDiskEvents : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDiskEventsResponseBodyDiskEvents& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DiskId, diskId_);
      DARABONBA_PTR_TO_JSON(RecommendAction, recommendAction_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Timestamp, timestamp_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDiskEventsResponseBodyDiskEvents& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DiskId, diskId_);
      DARABONBA_PTR_FROM_JSON(RecommendAction, recommendAction_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Timestamp, timestamp_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    DescribeDiskEventsResponseBodyDiskEvents() = default ;
    DescribeDiskEventsResponseBodyDiskEvents(const DescribeDiskEventsResponseBodyDiskEvents &) = default ;
    DescribeDiskEventsResponseBodyDiskEvents(DescribeDiskEventsResponseBodyDiskEvents &&) = default ;
    DescribeDiskEventsResponseBodyDiskEvents(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDiskEventsResponseBodyDiskEvents() = default ;
    DescribeDiskEventsResponseBodyDiskEvents& operator=(const DescribeDiskEventsResponseBodyDiskEvents &) = default ;
    DescribeDiskEventsResponseBodyDiskEvents& operator=(DescribeDiskEventsResponseBodyDiskEvents &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && return this->diskId_ == nullptr && return this->recommendAction_ == nullptr && return this->regionId_ == nullptr && return this->status_ == nullptr && return this->timestamp_ == nullptr
        && return this->type_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeDiskEventsResponseBodyDiskEvents& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // diskId Field Functions 
    bool hasDiskId() const { return this->diskId_ != nullptr;};
    void deleteDiskId() { this->diskId_ = nullptr;};
    inline string diskId() const { DARABONBA_PTR_GET_DEFAULT(diskId_, "") };
    inline DescribeDiskEventsResponseBodyDiskEvents& setDiskId(string diskId) { DARABONBA_PTR_SET_VALUE(diskId_, diskId) };


    // recommendAction Field Functions 
    bool hasRecommendAction() const { return this->recommendAction_ != nullptr;};
    void deleteRecommendAction() { this->recommendAction_ = nullptr;};
    inline string recommendAction() const { DARABONBA_PTR_GET_DEFAULT(recommendAction_, "") };
    inline DescribeDiskEventsResponseBodyDiskEvents& setRecommendAction(string recommendAction) { DARABONBA_PTR_SET_VALUE(recommendAction_, recommendAction) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeDiskEventsResponseBodyDiskEvents& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeDiskEventsResponseBodyDiskEvents& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // timestamp Field Functions 
    bool hasTimestamp() const { return this->timestamp_ != nullptr;};
    void deleteTimestamp() { this->timestamp_ = nullptr;};
    inline string timestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, "") };
    inline DescribeDiskEventsResponseBodyDiskEvents& setTimestamp(string timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeDiskEventsResponseBodyDiskEvents& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The description of the event.
    std::shared_ptr<string> description_ = nullptr;
    // The ID of the disk.
    std::shared_ptr<string> diskId_ = nullptr;
    // The recommended action after the event occurred. Valid values:
    // 
    // *   Resize: resizes the disk.
    // *   ModifyDiskSpec: changes the category of the disk.
    // *   NoAction: performs no operation.
    std::shared_ptr<string> recommendAction_ = nullptr;
    // The region ID of the disk.
    std::shared_ptr<string> regionId_ = nullptr;
    // The state of the event. Valid values:
    // 
    // *   Solved
    // *   UnSolved
    std::shared_ptr<string> status_ = nullptr;
    // The time when the event occurred. The time follows the [ISO 8601](https://help.aliyun.com/document_detail/25696.html) standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
    std::shared_ptr<string> timestamp_ = nullptr;
    // The type of the event. Only DataNeedProtect can be returned.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ebs20210730
#endif
