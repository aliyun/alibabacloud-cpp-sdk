// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETRAILSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETRAILSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Actiontrail20200706
{
namespace Models
{
  class DescribeTrailsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTrailsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TrailList, trailList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTrailsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TrailList, trailList_);
    };
    DescribeTrailsResponseBody() = default ;
    DescribeTrailsResponseBody(const DescribeTrailsResponseBody &) = default ;
    DescribeTrailsResponseBody(DescribeTrailsResponseBody &&) = default ;
    DescribeTrailsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTrailsResponseBody() = default ;
    DescribeTrailsResponseBody& operator=(const DescribeTrailsResponseBody &) = default ;
    DescribeTrailsResponseBody& operator=(DescribeTrailsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TrailList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TrailList& obj) { 
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
      friend void from_json(const Darabonba::Json& j, TrailList& obj) { 
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
      TrailList() = default ;
      TrailList(const TrailList &) = default ;
      TrailList(TrailList &&) = default ;
      TrailList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TrailList() = default ;
      TrailList& operator=(const TrailList &) = default ;
      TrailList& operator=(TrailList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->eventRW_ == nullptr && this->homeRegion_ == nullptr && this->isOrganizationTrail_ == nullptr && this->maxComputeProjectArn_ == nullptr && this->maxComputeWriteRoleArn_ == nullptr
        && this->name_ == nullptr && this->organizationId_ == nullptr && this->ossBucketLocation_ == nullptr && this->ossBucketName_ == nullptr && this->ossKeyPrefix_ == nullptr
        && this->ossWriteRoleArn_ == nullptr && this->region_ == nullptr && this->slsProjectArn_ == nullptr && this->slsWriteRoleArn_ == nullptr && this->startLoggingTime_ == nullptr
        && this->status_ == nullptr && this->stopLoggingTime_ == nullptr && this->trailArn_ == nullptr && this->trailRegion_ == nullptr && this->updateTime_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline TrailList& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // eventRW Field Functions 
      bool hasEventRW() const { return this->eventRW_ != nullptr;};
      void deleteEventRW() { this->eventRW_ = nullptr;};
      inline string getEventRW() const { DARABONBA_PTR_GET_DEFAULT(eventRW_, "") };
      inline TrailList& setEventRW(string eventRW) { DARABONBA_PTR_SET_VALUE(eventRW_, eventRW) };


      // homeRegion Field Functions 
      bool hasHomeRegion() const { return this->homeRegion_ != nullptr;};
      void deleteHomeRegion() { this->homeRegion_ = nullptr;};
      inline string getHomeRegion() const { DARABONBA_PTR_GET_DEFAULT(homeRegion_, "") };
      inline TrailList& setHomeRegion(string homeRegion) { DARABONBA_PTR_SET_VALUE(homeRegion_, homeRegion) };


      // isOrganizationTrail Field Functions 
      bool hasIsOrganizationTrail() const { return this->isOrganizationTrail_ != nullptr;};
      void deleteIsOrganizationTrail() { this->isOrganizationTrail_ = nullptr;};
      inline bool getIsOrganizationTrail() const { DARABONBA_PTR_GET_DEFAULT(isOrganizationTrail_, false) };
      inline TrailList& setIsOrganizationTrail(bool isOrganizationTrail) { DARABONBA_PTR_SET_VALUE(isOrganizationTrail_, isOrganizationTrail) };


      // maxComputeProjectArn Field Functions 
      bool hasMaxComputeProjectArn() const { return this->maxComputeProjectArn_ != nullptr;};
      void deleteMaxComputeProjectArn() { this->maxComputeProjectArn_ = nullptr;};
      inline string getMaxComputeProjectArn() const { DARABONBA_PTR_GET_DEFAULT(maxComputeProjectArn_, "") };
      inline TrailList& setMaxComputeProjectArn(string maxComputeProjectArn) { DARABONBA_PTR_SET_VALUE(maxComputeProjectArn_, maxComputeProjectArn) };


      // maxComputeWriteRoleArn Field Functions 
      bool hasMaxComputeWriteRoleArn() const { return this->maxComputeWriteRoleArn_ != nullptr;};
      void deleteMaxComputeWriteRoleArn() { this->maxComputeWriteRoleArn_ = nullptr;};
      inline string getMaxComputeWriteRoleArn() const { DARABONBA_PTR_GET_DEFAULT(maxComputeWriteRoleArn_, "") };
      inline TrailList& setMaxComputeWriteRoleArn(string maxComputeWriteRoleArn) { DARABONBA_PTR_SET_VALUE(maxComputeWriteRoleArn_, maxComputeWriteRoleArn) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline TrailList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // organizationId Field Functions 
      bool hasOrganizationId() const { return this->organizationId_ != nullptr;};
      void deleteOrganizationId() { this->organizationId_ = nullptr;};
      inline string getOrganizationId() const { DARABONBA_PTR_GET_DEFAULT(organizationId_, "") };
      inline TrailList& setOrganizationId(string organizationId) { DARABONBA_PTR_SET_VALUE(organizationId_, organizationId) };


      // ossBucketLocation Field Functions 
      bool hasOssBucketLocation() const { return this->ossBucketLocation_ != nullptr;};
      void deleteOssBucketLocation() { this->ossBucketLocation_ = nullptr;};
      inline string getOssBucketLocation() const { DARABONBA_PTR_GET_DEFAULT(ossBucketLocation_, "") };
      inline TrailList& setOssBucketLocation(string ossBucketLocation) { DARABONBA_PTR_SET_VALUE(ossBucketLocation_, ossBucketLocation) };


      // ossBucketName Field Functions 
      bool hasOssBucketName() const { return this->ossBucketName_ != nullptr;};
      void deleteOssBucketName() { this->ossBucketName_ = nullptr;};
      inline string getOssBucketName() const { DARABONBA_PTR_GET_DEFAULT(ossBucketName_, "") };
      inline TrailList& setOssBucketName(string ossBucketName) { DARABONBA_PTR_SET_VALUE(ossBucketName_, ossBucketName) };


      // ossKeyPrefix Field Functions 
      bool hasOssKeyPrefix() const { return this->ossKeyPrefix_ != nullptr;};
      void deleteOssKeyPrefix() { this->ossKeyPrefix_ = nullptr;};
      inline string getOssKeyPrefix() const { DARABONBA_PTR_GET_DEFAULT(ossKeyPrefix_, "") };
      inline TrailList& setOssKeyPrefix(string ossKeyPrefix) { DARABONBA_PTR_SET_VALUE(ossKeyPrefix_, ossKeyPrefix) };


      // ossWriteRoleArn Field Functions 
      bool hasOssWriteRoleArn() const { return this->ossWriteRoleArn_ != nullptr;};
      void deleteOssWriteRoleArn() { this->ossWriteRoleArn_ = nullptr;};
      inline string getOssWriteRoleArn() const { DARABONBA_PTR_GET_DEFAULT(ossWriteRoleArn_, "") };
      inline TrailList& setOssWriteRoleArn(string ossWriteRoleArn) { DARABONBA_PTR_SET_VALUE(ossWriteRoleArn_, ossWriteRoleArn) };


      // region Field Functions 
      bool hasRegion() const { return this->region_ != nullptr;};
      void deleteRegion() { this->region_ = nullptr;};
      inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
      inline TrailList& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


      // slsProjectArn Field Functions 
      bool hasSlsProjectArn() const { return this->slsProjectArn_ != nullptr;};
      void deleteSlsProjectArn() { this->slsProjectArn_ = nullptr;};
      inline string getSlsProjectArn() const { DARABONBA_PTR_GET_DEFAULT(slsProjectArn_, "") };
      inline TrailList& setSlsProjectArn(string slsProjectArn) { DARABONBA_PTR_SET_VALUE(slsProjectArn_, slsProjectArn) };


      // slsWriteRoleArn Field Functions 
      bool hasSlsWriteRoleArn() const { return this->slsWriteRoleArn_ != nullptr;};
      void deleteSlsWriteRoleArn() { this->slsWriteRoleArn_ = nullptr;};
      inline string getSlsWriteRoleArn() const { DARABONBA_PTR_GET_DEFAULT(slsWriteRoleArn_, "") };
      inline TrailList& setSlsWriteRoleArn(string slsWriteRoleArn) { DARABONBA_PTR_SET_VALUE(slsWriteRoleArn_, slsWriteRoleArn) };


      // startLoggingTime Field Functions 
      bool hasStartLoggingTime() const { return this->startLoggingTime_ != nullptr;};
      void deleteStartLoggingTime() { this->startLoggingTime_ = nullptr;};
      inline string getStartLoggingTime() const { DARABONBA_PTR_GET_DEFAULT(startLoggingTime_, "") };
      inline TrailList& setStartLoggingTime(string startLoggingTime) { DARABONBA_PTR_SET_VALUE(startLoggingTime_, startLoggingTime) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline TrailList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // stopLoggingTime Field Functions 
      bool hasStopLoggingTime() const { return this->stopLoggingTime_ != nullptr;};
      void deleteStopLoggingTime() { this->stopLoggingTime_ = nullptr;};
      inline string getStopLoggingTime() const { DARABONBA_PTR_GET_DEFAULT(stopLoggingTime_, "") };
      inline TrailList& setStopLoggingTime(string stopLoggingTime) { DARABONBA_PTR_SET_VALUE(stopLoggingTime_, stopLoggingTime) };


      // trailArn Field Functions 
      bool hasTrailArn() const { return this->trailArn_ != nullptr;};
      void deleteTrailArn() { this->trailArn_ = nullptr;};
      inline string getTrailArn() const { DARABONBA_PTR_GET_DEFAULT(trailArn_, "") };
      inline TrailList& setTrailArn(string trailArn) { DARABONBA_PTR_SET_VALUE(trailArn_, trailArn) };


      // trailRegion Field Functions 
      bool hasTrailRegion() const { return this->trailRegion_ != nullptr;};
      void deleteTrailRegion() { this->trailRegion_ = nullptr;};
      inline string getTrailRegion() const { DARABONBA_PTR_GET_DEFAULT(trailRegion_, "") };
      inline TrailList& setTrailRegion(string trailRegion) { DARABONBA_PTR_SET_VALUE(trailRegion_, trailRegion) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
      inline TrailList& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    protected:
      // The time when the trail was created.
      shared_ptr<string> createTime_ {};
      // The read/write type of the events that are delivered. Valid values:
      // 
      // *   Write: write events. This is the default value.
      // *   Read: read events.
      // *   All: read and write events.
      shared_ptr<string> eventRW_ {};
      // The home region of the trail.
      shared_ptr<string> homeRegion_ {};
      // Indicates whether the trail is a multi-account trail. Valid values:
      // 
      // *   false (default)
      // *   true
      shared_ptr<bool> isOrganizationTrail_ {};
      // The ARN of the MaxCompute project.
      shared_ptr<string> maxComputeProjectArn_ {};
      // The ARN of the role that is assumed by ActionTrail to deliver events to the MaxCompute project.
      shared_ptr<string> maxComputeWriteRoleArn_ {};
      // The name of the trail.
      shared_ptr<string> name_ {};
      // The ID of the resource directory.
      // 
      // >  This parameter is returned only when the trail is a multi-account trail.
      shared_ptr<string> organizationId_ {};
      // The region where the OSS bucket resides.
      shared_ptr<string> ossBucketLocation_ {};
      // The name of the OSS bucket to which events are delivered.
      shared_ptr<string> ossBucketName_ {};
      // The prefix of the files that are stored in the Object Storage Service (OSS) bucket.
      shared_ptr<string> ossKeyPrefix_ {};
      // The Alibaba Cloud Resource Name (ARN) of the RAM role that is assumed by ActionTrail to deliver events to the OSS bucket.
      shared_ptr<string> ossWriteRoleArn_ {};
      // The region where the trail resides.
      shared_ptr<string> region_ {};
      // The ARN of the Log Service project to which events are delivered.
      shared_ptr<string> slsProjectArn_ {};
      // The ARN of the RAM role that is assumed by ActionTrail to deliver events to the Log Service project.
      shared_ptr<string> slsWriteRoleArn_ {};
      // The time when the trail was last enabled.
      shared_ptr<string> startLoggingTime_ {};
      // The status of the trail. Valid values:
      // 
      // *   Disable: disabled.
      // *   Enable: enabled.
      // *   Fresh: The trail is created but is not enabled.
      shared_ptr<string> status_ {};
      // The time when the trail was last disabled.
      shared_ptr<string> stopLoggingTime_ {};
      // The ARN of the trail.
      shared_ptr<string> trailArn_ {};
      // The region of the trail.
      shared_ptr<string> trailRegion_ {};
      // The time when the configurations of the trail were last updated.
      shared_ptr<string> updateTime_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->trailList_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeTrailsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // trailList Field Functions 
    bool hasTrailList() const { return this->trailList_ != nullptr;};
    void deleteTrailList() { this->trailList_ = nullptr;};
    inline const vector<DescribeTrailsResponseBody::TrailList> & getTrailList() const { DARABONBA_PTR_GET_CONST(trailList_, vector<DescribeTrailsResponseBody::TrailList>) };
    inline vector<DescribeTrailsResponseBody::TrailList> getTrailList() { DARABONBA_PTR_GET(trailList_, vector<DescribeTrailsResponseBody::TrailList>) };
    inline DescribeTrailsResponseBody& setTrailList(const vector<DescribeTrailsResponseBody::TrailList> & trailList) { DARABONBA_PTR_SET_VALUE(trailList_, trailList) };
    inline DescribeTrailsResponseBody& setTrailList(vector<DescribeTrailsResponseBody::TrailList> && trailList) { DARABONBA_PTR_SET_RVALUE(trailList_, trailList) };


  protected:
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The trails.
    shared_ptr<vector<DescribeTrailsResponseBody::TrailList>> trailList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Actiontrail20200706
#endif
