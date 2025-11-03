// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEIPSEGMENTRESPONSEBODYEIPSEGMENTSEIPSEGMENT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEIPSEGMENTRESPONSEBODYEIPSEGMENTSEIPSEGMENT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeEipSegmentResponseBodyEipSegmentsEipSegment : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEipSegmentResponseBodyEipSegmentsEipSegment& obj) { 
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(Descritpion, descritpion_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(IpCount, ipCount_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Segment, segment_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Zone, zone_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEipSegmentResponseBodyEipSegmentsEipSegment& obj) { 
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(Descritpion, descritpion_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(IpCount, ipCount_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Segment, segment_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Zone, zone_);
    };
    DescribeEipSegmentResponseBodyEipSegmentsEipSegment() = default ;
    DescribeEipSegmentResponseBodyEipSegmentsEipSegment(const DescribeEipSegmentResponseBodyEipSegmentsEipSegment &) = default ;
    DescribeEipSegmentResponseBodyEipSegmentsEipSegment(DescribeEipSegmentResponseBodyEipSegmentsEipSegment &&) = default ;
    DescribeEipSegmentResponseBodyEipSegmentsEipSegment(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEipSegmentResponseBodyEipSegmentsEipSegment() = default ;
    DescribeEipSegmentResponseBodyEipSegmentsEipSegment& operator=(const DescribeEipSegmentResponseBodyEipSegmentsEipSegment &) = default ;
    DescribeEipSegmentResponseBodyEipSegmentsEipSegment& operator=(DescribeEipSegmentResponseBodyEipSegmentsEipSegment &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->creationTime_ == nullptr
        && return this->descritpion_ == nullptr && return this->instanceId_ == nullptr && return this->ipCount_ == nullptr && return this->name_ == nullptr && return this->regionId_ == nullptr
        && return this->segment_ == nullptr && return this->status_ == nullptr && return this->zone_ == nullptr; };
    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline DescribeEipSegmentResponseBodyEipSegmentsEipSegment& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // descritpion Field Functions 
    bool hasDescritpion() const { return this->descritpion_ != nullptr;};
    void deleteDescritpion() { this->descritpion_ = nullptr;};
    inline string descritpion() const { DARABONBA_PTR_GET_DEFAULT(descritpion_, "") };
    inline DescribeEipSegmentResponseBodyEipSegmentsEipSegment& setDescritpion(string descritpion) { DARABONBA_PTR_SET_VALUE(descritpion_, descritpion) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeEipSegmentResponseBodyEipSegmentsEipSegment& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // ipCount Field Functions 
    bool hasIpCount() const { return this->ipCount_ != nullptr;};
    void deleteIpCount() { this->ipCount_ = nullptr;};
    inline string ipCount() const { DARABONBA_PTR_GET_DEFAULT(ipCount_, "") };
    inline DescribeEipSegmentResponseBodyEipSegmentsEipSegment& setIpCount(string ipCount) { DARABONBA_PTR_SET_VALUE(ipCount_, ipCount) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeEipSegmentResponseBodyEipSegmentsEipSegment& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeEipSegmentResponseBodyEipSegmentsEipSegment& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // segment Field Functions 
    bool hasSegment() const { return this->segment_ != nullptr;};
    void deleteSegment() { this->segment_ = nullptr;};
    inline string segment() const { DARABONBA_PTR_GET_DEFAULT(segment_, "") };
    inline DescribeEipSegmentResponseBodyEipSegmentsEipSegment& setSegment(string segment) { DARABONBA_PTR_SET_VALUE(segment_, segment) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeEipSegmentResponseBodyEipSegmentsEipSegment& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // zone Field Functions 
    bool hasZone() const { return this->zone_ != nullptr;};
    void deleteZone() { this->zone_ = nullptr;};
    inline string zone() const { DARABONBA_PTR_GET_DEFAULT(zone_, "") };
    inline DescribeEipSegmentResponseBodyEipSegmentsEipSegment& setZone(string zone) { DARABONBA_PTR_SET_VALUE(zone_, zone) };


  protected:
    // The time when the contiguous EIP group was created. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
    std::shared_ptr<string> creationTime_ = nullptr;
    // The description of the contiguous EIP group.
    std::shared_ptr<string> descritpion_ = nullptr;
    // The ID of the contiguous EIP group.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The number of EIPs in the contiguous EIP group.
    std::shared_ptr<string> ipCount_ = nullptr;
    // The name of the contiguous EIP group.
    std::shared_ptr<string> name_ = nullptr;
    // The ID of the region to which the contiguous EIP group belongs.
    std::shared_ptr<string> regionId_ = nullptr;
    // The CIDR block and mask of the contiguous EIP group.
    std::shared_ptr<string> segment_ = nullptr;
    // The status of the contiguous EIP group. Valid values:
    // 
    // *   **Allocating**
    // *   **Allocated**
    // *   **Releasing**
    std::shared_ptr<string> status_ = nullptr;
    // The zone of the contiguous EIP group.
    std::shared_ptr<string> zone_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
