// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETRAILSRESPONSEBODYTRAILLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETRAILSRESPONSEBODYTRAILLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Actiontrail20200706
{
namespace Models
{
  class DescribeTrailsResponseBodyTrailList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTrailsResponseBodyTrailList& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(EventRW, eventRW_);
      DARABONBA_PTR_TO_JSON(HomeRegion, homeRegion_);
      DARABONBA_PTR_TO_JSON(IsOrganizationTrail, isOrganizationTrail_);
      DARABONBA_PTR_TO_JSON(MaxComputeProjectArn, maxComputeProjectArn_);
      DARABONBA_PTR_TO_JSON(MaxComputeWriteRoleArn, maxComputeWriteRoleArn_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(OrganizationId, organizationId_);
      DARABONBA_PTR_TO_JSON(OssBucketLocation, ossBucketLocation_);
      DARABONBA_PTR_TO_JSON(OssBucketName, ossBucketName_);
      DARABONBA_PTR_TO_JSON(OssKeyPrefix, ossKeyPrefix_);
      DARABONBA_PTR_TO_JSON(OssWriteRoleArn, ossWriteRoleArn_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(SlsProjectArn, slsProjectArn_);
      DARABONBA_PTR_TO_JSON(SlsWriteRoleArn, slsWriteRoleArn_);
      DARABONBA_PTR_TO_JSON(StartLoggingTime, startLoggingTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(StopLoggingTime, stopLoggingTime_);
      DARABONBA_PTR_TO_JSON(TrailArn, trailArn_);
      DARABONBA_PTR_TO_JSON(TrailRegion, trailRegion_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTrailsResponseBodyTrailList& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(EventRW, eventRW_);
      DARABONBA_PTR_FROM_JSON(HomeRegion, homeRegion_);
      DARABONBA_PTR_FROM_JSON(IsOrganizationTrail, isOrganizationTrail_);
      DARABONBA_PTR_FROM_JSON(MaxComputeProjectArn, maxComputeProjectArn_);
      DARABONBA_PTR_FROM_JSON(MaxComputeWriteRoleArn, maxComputeWriteRoleArn_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(OrganizationId, organizationId_);
      DARABONBA_PTR_FROM_JSON(OssBucketLocation, ossBucketLocation_);
      DARABONBA_PTR_FROM_JSON(OssBucketName, ossBucketName_);
      DARABONBA_PTR_FROM_JSON(OssKeyPrefix, ossKeyPrefix_);
      DARABONBA_PTR_FROM_JSON(OssWriteRoleArn, ossWriteRoleArn_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(SlsProjectArn, slsProjectArn_);
      DARABONBA_PTR_FROM_JSON(SlsWriteRoleArn, slsWriteRoleArn_);
      DARABONBA_PTR_FROM_JSON(StartLoggingTime, startLoggingTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(StopLoggingTime, stopLoggingTime_);
      DARABONBA_PTR_FROM_JSON(TrailArn, trailArn_);
      DARABONBA_PTR_FROM_JSON(TrailRegion, trailRegion_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
    };
    DescribeTrailsResponseBodyTrailList() = default ;
    DescribeTrailsResponseBodyTrailList(const DescribeTrailsResponseBodyTrailList &) = default ;
    DescribeTrailsResponseBodyTrailList(DescribeTrailsResponseBodyTrailList &&) = default ;
    DescribeTrailsResponseBodyTrailList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTrailsResponseBodyTrailList() = default ;
    DescribeTrailsResponseBodyTrailList& operator=(const DescribeTrailsResponseBodyTrailList &) = default ;
    DescribeTrailsResponseBodyTrailList& operator=(DescribeTrailsResponseBodyTrailList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->createTime_ != nullptr
        && this->eventRW_ != nullptr && this->homeRegion_ != nullptr && this->isOrganizationTrail_ != nullptr && this->maxComputeProjectArn_ != nullptr && this->maxComputeWriteRoleArn_ != nullptr
        && this->name_ != nullptr && this->organizationId_ != nullptr && this->ossBucketLocation_ != nullptr && this->ossBucketName_ != nullptr && this->ossKeyPrefix_ != nullptr
        && this->ossWriteRoleArn_ != nullptr && this->region_ != nullptr && this->slsProjectArn_ != nullptr && this->slsWriteRoleArn_ != nullptr && this->startLoggingTime_ != nullptr
        && this->status_ != nullptr && this->stopLoggingTime_ != nullptr && this->trailArn_ != nullptr && this->trailRegion_ != nullptr && this->updateTime_ != nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline DescribeTrailsResponseBodyTrailList& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // eventRW Field Functions 
    bool hasEventRW() const { return this->eventRW_ != nullptr;};
    void deleteEventRW() { this->eventRW_ = nullptr;};
    inline string eventRW() const { DARABONBA_PTR_GET_DEFAULT(eventRW_, "") };
    inline DescribeTrailsResponseBodyTrailList& setEventRW(string eventRW) { DARABONBA_PTR_SET_VALUE(eventRW_, eventRW) };


    // homeRegion Field Functions 
    bool hasHomeRegion() const { return this->homeRegion_ != nullptr;};
    void deleteHomeRegion() { this->homeRegion_ = nullptr;};
    inline string homeRegion() const { DARABONBA_PTR_GET_DEFAULT(homeRegion_, "") };
    inline DescribeTrailsResponseBodyTrailList& setHomeRegion(string homeRegion) { DARABONBA_PTR_SET_VALUE(homeRegion_, homeRegion) };


    // isOrganizationTrail Field Functions 
    bool hasIsOrganizationTrail() const { return this->isOrganizationTrail_ != nullptr;};
    void deleteIsOrganizationTrail() { this->isOrganizationTrail_ = nullptr;};
    inline bool isOrganizationTrail() const { DARABONBA_PTR_GET_DEFAULT(isOrganizationTrail_, false) };
    inline DescribeTrailsResponseBodyTrailList& setIsOrganizationTrail(bool isOrganizationTrail) { DARABONBA_PTR_SET_VALUE(isOrganizationTrail_, isOrganizationTrail) };


    // maxComputeProjectArn Field Functions 
    bool hasMaxComputeProjectArn() const { return this->maxComputeProjectArn_ != nullptr;};
    void deleteMaxComputeProjectArn() { this->maxComputeProjectArn_ = nullptr;};
    inline string maxComputeProjectArn() const { DARABONBA_PTR_GET_DEFAULT(maxComputeProjectArn_, "") };
    inline DescribeTrailsResponseBodyTrailList& setMaxComputeProjectArn(string maxComputeProjectArn) { DARABONBA_PTR_SET_VALUE(maxComputeProjectArn_, maxComputeProjectArn) };


    // maxComputeWriteRoleArn Field Functions 
    bool hasMaxComputeWriteRoleArn() const { return this->maxComputeWriteRoleArn_ != nullptr;};
    void deleteMaxComputeWriteRoleArn() { this->maxComputeWriteRoleArn_ = nullptr;};
    inline string maxComputeWriteRoleArn() const { DARABONBA_PTR_GET_DEFAULT(maxComputeWriteRoleArn_, "") };
    inline DescribeTrailsResponseBodyTrailList& setMaxComputeWriteRoleArn(string maxComputeWriteRoleArn) { DARABONBA_PTR_SET_VALUE(maxComputeWriteRoleArn_, maxComputeWriteRoleArn) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeTrailsResponseBodyTrailList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // organizationId Field Functions 
    bool hasOrganizationId() const { return this->organizationId_ != nullptr;};
    void deleteOrganizationId() { this->organizationId_ = nullptr;};
    inline string organizationId() const { DARABONBA_PTR_GET_DEFAULT(organizationId_, "") };
    inline DescribeTrailsResponseBodyTrailList& setOrganizationId(string organizationId) { DARABONBA_PTR_SET_VALUE(organizationId_, organizationId) };


    // ossBucketLocation Field Functions 
    bool hasOssBucketLocation() const { return this->ossBucketLocation_ != nullptr;};
    void deleteOssBucketLocation() { this->ossBucketLocation_ = nullptr;};
    inline string ossBucketLocation() const { DARABONBA_PTR_GET_DEFAULT(ossBucketLocation_, "") };
    inline DescribeTrailsResponseBodyTrailList& setOssBucketLocation(string ossBucketLocation) { DARABONBA_PTR_SET_VALUE(ossBucketLocation_, ossBucketLocation) };


    // ossBucketName Field Functions 
    bool hasOssBucketName() const { return this->ossBucketName_ != nullptr;};
    void deleteOssBucketName() { this->ossBucketName_ = nullptr;};
    inline string ossBucketName() const { DARABONBA_PTR_GET_DEFAULT(ossBucketName_, "") };
    inline DescribeTrailsResponseBodyTrailList& setOssBucketName(string ossBucketName) { DARABONBA_PTR_SET_VALUE(ossBucketName_, ossBucketName) };


    // ossKeyPrefix Field Functions 
    bool hasOssKeyPrefix() const { return this->ossKeyPrefix_ != nullptr;};
    void deleteOssKeyPrefix() { this->ossKeyPrefix_ = nullptr;};
    inline string ossKeyPrefix() const { DARABONBA_PTR_GET_DEFAULT(ossKeyPrefix_, "") };
    inline DescribeTrailsResponseBodyTrailList& setOssKeyPrefix(string ossKeyPrefix) { DARABONBA_PTR_SET_VALUE(ossKeyPrefix_, ossKeyPrefix) };


    // ossWriteRoleArn Field Functions 
    bool hasOssWriteRoleArn() const { return this->ossWriteRoleArn_ != nullptr;};
    void deleteOssWriteRoleArn() { this->ossWriteRoleArn_ = nullptr;};
    inline string ossWriteRoleArn() const { DARABONBA_PTR_GET_DEFAULT(ossWriteRoleArn_, "") };
    inline DescribeTrailsResponseBodyTrailList& setOssWriteRoleArn(string ossWriteRoleArn) { DARABONBA_PTR_SET_VALUE(ossWriteRoleArn_, ossWriteRoleArn) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline DescribeTrailsResponseBodyTrailList& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // slsProjectArn Field Functions 
    bool hasSlsProjectArn() const { return this->slsProjectArn_ != nullptr;};
    void deleteSlsProjectArn() { this->slsProjectArn_ = nullptr;};
    inline string slsProjectArn() const { DARABONBA_PTR_GET_DEFAULT(slsProjectArn_, "") };
    inline DescribeTrailsResponseBodyTrailList& setSlsProjectArn(string slsProjectArn) { DARABONBA_PTR_SET_VALUE(slsProjectArn_, slsProjectArn) };


    // slsWriteRoleArn Field Functions 
    bool hasSlsWriteRoleArn() const { return this->slsWriteRoleArn_ != nullptr;};
    void deleteSlsWriteRoleArn() { this->slsWriteRoleArn_ = nullptr;};
    inline string slsWriteRoleArn() const { DARABONBA_PTR_GET_DEFAULT(slsWriteRoleArn_, "") };
    inline DescribeTrailsResponseBodyTrailList& setSlsWriteRoleArn(string slsWriteRoleArn) { DARABONBA_PTR_SET_VALUE(slsWriteRoleArn_, slsWriteRoleArn) };


    // startLoggingTime Field Functions 
    bool hasStartLoggingTime() const { return this->startLoggingTime_ != nullptr;};
    void deleteStartLoggingTime() { this->startLoggingTime_ = nullptr;};
    inline string startLoggingTime() const { DARABONBA_PTR_GET_DEFAULT(startLoggingTime_, "") };
    inline DescribeTrailsResponseBodyTrailList& setStartLoggingTime(string startLoggingTime) { DARABONBA_PTR_SET_VALUE(startLoggingTime_, startLoggingTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeTrailsResponseBodyTrailList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // stopLoggingTime Field Functions 
    bool hasStopLoggingTime() const { return this->stopLoggingTime_ != nullptr;};
    void deleteStopLoggingTime() { this->stopLoggingTime_ = nullptr;};
    inline string stopLoggingTime() const { DARABONBA_PTR_GET_DEFAULT(stopLoggingTime_, "") };
    inline DescribeTrailsResponseBodyTrailList& setStopLoggingTime(string stopLoggingTime) { DARABONBA_PTR_SET_VALUE(stopLoggingTime_, stopLoggingTime) };


    // trailArn Field Functions 
    bool hasTrailArn() const { return this->trailArn_ != nullptr;};
    void deleteTrailArn() { this->trailArn_ = nullptr;};
    inline string trailArn() const { DARABONBA_PTR_GET_DEFAULT(trailArn_, "") };
    inline DescribeTrailsResponseBodyTrailList& setTrailArn(string trailArn) { DARABONBA_PTR_SET_VALUE(trailArn_, trailArn) };


    // trailRegion Field Functions 
    bool hasTrailRegion() const { return this->trailRegion_ != nullptr;};
    void deleteTrailRegion() { this->trailRegion_ = nullptr;};
    inline string trailRegion() const { DARABONBA_PTR_GET_DEFAULT(trailRegion_, "") };
    inline DescribeTrailsResponseBodyTrailList& setTrailRegion(string trailRegion) { DARABONBA_PTR_SET_VALUE(trailRegion_, trailRegion) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline DescribeTrailsResponseBodyTrailList& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    // The time when the trail was created.
    std::shared_ptr<string> createTime_ = nullptr;
    // The read/write type of the events that are delivered. Valid values:
    // 
    // *   Write: write events. This is the default value.
    // *   Read: read events.
    // *   All: read and write events.
    std::shared_ptr<string> eventRW_ = nullptr;
    // The home region of the trail.
    std::shared_ptr<string> homeRegion_ = nullptr;
    // Indicates whether the trail is a multi-account trail. Valid values:
    // 
    // *   false (default)
    // *   true
    std::shared_ptr<bool> isOrganizationTrail_ = nullptr;
    // The ARN of the MaxCompute project.
    std::shared_ptr<string> maxComputeProjectArn_ = nullptr;
    // The ARN of the role that is assumed by ActionTrail to deliver events to the MaxCompute project.
    std::shared_ptr<string> maxComputeWriteRoleArn_ = nullptr;
    // The name of the trail.
    std::shared_ptr<string> name_ = nullptr;
    // The ID of the resource directory.
    // 
    // >  This parameter is returned only when the trail is a multi-account trail.
    std::shared_ptr<string> organizationId_ = nullptr;
    // The region where the OSS bucket resides.
    std::shared_ptr<string> ossBucketLocation_ = nullptr;
    // The name of the OSS bucket to which events are delivered.
    std::shared_ptr<string> ossBucketName_ = nullptr;
    // The prefix of the files that are stored in the Object Storage Service (OSS) bucket.
    std::shared_ptr<string> ossKeyPrefix_ = nullptr;
    // The Alibaba Cloud Resource Name (ARN) of the RAM role that is assumed by ActionTrail to deliver events to the OSS bucket.
    std::shared_ptr<string> ossWriteRoleArn_ = nullptr;
    // The region where the trail resides.
    std::shared_ptr<string> region_ = nullptr;
    // The ARN of the Log Service project to which events are delivered.
    std::shared_ptr<string> slsProjectArn_ = nullptr;
    // The ARN of the RAM role that is assumed by ActionTrail to deliver events to the Log Service project.
    std::shared_ptr<string> slsWriteRoleArn_ = nullptr;
    // The time when the trail was last enabled.
    std::shared_ptr<string> startLoggingTime_ = nullptr;
    // The status of the trail. Valid values:
    // 
    // *   Disable: disabled.
    // *   Enable: enabled.
    // *   Fresh: The trail is created but is not enabled.
    std::shared_ptr<string> status_ = nullptr;
    // The time when the trail was last disabled.
    std::shared_ptr<string> stopLoggingTime_ = nullptr;
    // The ARN of the trail.
    std::shared_ptr<string> trailArn_ = nullptr;
    // The region of the trail.
    std::shared_ptr<string> trailRegion_ = nullptr;
    // The time when the configurations of the trail were last updated.
    std::shared_ptr<string> updateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Actiontrail20200706
#endif
