// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETRAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATETRAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Actiontrail20200706
{
namespace Models
{
  class CreateTrailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTrailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(EventRW, eventRW_);
      DARABONBA_PTR_TO_JSON(HomeRegion, homeRegion_);
      DARABONBA_PTR_TO_JSON(MaxComputeProjectArn, maxComputeProjectArn_);
      DARABONBA_PTR_TO_JSON(MaxComputeWriteRoleArn, maxComputeWriteRoleArn_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(OssBucketName, ossBucketName_);
      DARABONBA_PTR_TO_JSON(OssKeyPrefix, ossKeyPrefix_);
      DARABONBA_PTR_TO_JSON(OssWriteRoleArn, ossWriteRoleArn_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SlsProjectArn, slsProjectArn_);
      DARABONBA_PTR_TO_JSON(SlsWriteRoleArn, slsWriteRoleArn_);
      DARABONBA_PTR_TO_JSON(TrailRegion, trailRegion_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTrailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(EventRW, eventRW_);
      DARABONBA_PTR_FROM_JSON(HomeRegion, homeRegion_);
      DARABONBA_PTR_FROM_JSON(MaxComputeProjectArn, maxComputeProjectArn_);
      DARABONBA_PTR_FROM_JSON(MaxComputeWriteRoleArn, maxComputeWriteRoleArn_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(OssBucketName, ossBucketName_);
      DARABONBA_PTR_FROM_JSON(OssKeyPrefix, ossKeyPrefix_);
      DARABONBA_PTR_FROM_JSON(OssWriteRoleArn, ossWriteRoleArn_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SlsProjectArn, slsProjectArn_);
      DARABONBA_PTR_FROM_JSON(SlsWriteRoleArn, slsWriteRoleArn_);
      DARABONBA_PTR_FROM_JSON(TrailRegion, trailRegion_);
    };
    CreateTrailResponseBody() = default ;
    CreateTrailResponseBody(const CreateTrailResponseBody &) = default ;
    CreateTrailResponseBody(CreateTrailResponseBody &&) = default ;
    CreateTrailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTrailResponseBody() = default ;
    CreateTrailResponseBody& operator=(const CreateTrailResponseBody &) = default ;
    CreateTrailResponseBody& operator=(CreateTrailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->eventRW_ == nullptr
        && return this->homeRegion_ == nullptr && return this->maxComputeProjectArn_ == nullptr && return this->maxComputeWriteRoleArn_ == nullptr && return this->name_ == nullptr && return this->ossBucketName_ == nullptr
        && return this->ossKeyPrefix_ == nullptr && return this->ossWriteRoleArn_ == nullptr && return this->requestId_ == nullptr && return this->slsProjectArn_ == nullptr && return this->slsWriteRoleArn_ == nullptr
        && return this->trailRegion_ == nullptr; };
    // eventRW Field Functions 
    bool hasEventRW() const { return this->eventRW_ != nullptr;};
    void deleteEventRW() { this->eventRW_ = nullptr;};
    inline string eventRW() const { DARABONBA_PTR_GET_DEFAULT(eventRW_, "") };
    inline CreateTrailResponseBody& setEventRW(string eventRW) { DARABONBA_PTR_SET_VALUE(eventRW_, eventRW) };


    // homeRegion Field Functions 
    bool hasHomeRegion() const { return this->homeRegion_ != nullptr;};
    void deleteHomeRegion() { this->homeRegion_ = nullptr;};
    inline string homeRegion() const { DARABONBA_PTR_GET_DEFAULT(homeRegion_, "") };
    inline CreateTrailResponseBody& setHomeRegion(string homeRegion) { DARABONBA_PTR_SET_VALUE(homeRegion_, homeRegion) };


    // maxComputeProjectArn Field Functions 
    bool hasMaxComputeProjectArn() const { return this->maxComputeProjectArn_ != nullptr;};
    void deleteMaxComputeProjectArn() { this->maxComputeProjectArn_ = nullptr;};
    inline string maxComputeProjectArn() const { DARABONBA_PTR_GET_DEFAULT(maxComputeProjectArn_, "") };
    inline CreateTrailResponseBody& setMaxComputeProjectArn(string maxComputeProjectArn) { DARABONBA_PTR_SET_VALUE(maxComputeProjectArn_, maxComputeProjectArn) };


    // maxComputeWriteRoleArn Field Functions 
    bool hasMaxComputeWriteRoleArn() const { return this->maxComputeWriteRoleArn_ != nullptr;};
    void deleteMaxComputeWriteRoleArn() { this->maxComputeWriteRoleArn_ = nullptr;};
    inline string maxComputeWriteRoleArn() const { DARABONBA_PTR_GET_DEFAULT(maxComputeWriteRoleArn_, "") };
    inline CreateTrailResponseBody& setMaxComputeWriteRoleArn(string maxComputeWriteRoleArn) { DARABONBA_PTR_SET_VALUE(maxComputeWriteRoleArn_, maxComputeWriteRoleArn) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateTrailResponseBody& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // ossBucketName Field Functions 
    bool hasOssBucketName() const { return this->ossBucketName_ != nullptr;};
    void deleteOssBucketName() { this->ossBucketName_ = nullptr;};
    inline string ossBucketName() const { DARABONBA_PTR_GET_DEFAULT(ossBucketName_, "") };
    inline CreateTrailResponseBody& setOssBucketName(string ossBucketName) { DARABONBA_PTR_SET_VALUE(ossBucketName_, ossBucketName) };


    // ossKeyPrefix Field Functions 
    bool hasOssKeyPrefix() const { return this->ossKeyPrefix_ != nullptr;};
    void deleteOssKeyPrefix() { this->ossKeyPrefix_ = nullptr;};
    inline string ossKeyPrefix() const { DARABONBA_PTR_GET_DEFAULT(ossKeyPrefix_, "") };
    inline CreateTrailResponseBody& setOssKeyPrefix(string ossKeyPrefix) { DARABONBA_PTR_SET_VALUE(ossKeyPrefix_, ossKeyPrefix) };


    // ossWriteRoleArn Field Functions 
    bool hasOssWriteRoleArn() const { return this->ossWriteRoleArn_ != nullptr;};
    void deleteOssWriteRoleArn() { this->ossWriteRoleArn_ = nullptr;};
    inline string ossWriteRoleArn() const { DARABONBA_PTR_GET_DEFAULT(ossWriteRoleArn_, "") };
    inline CreateTrailResponseBody& setOssWriteRoleArn(string ossWriteRoleArn) { DARABONBA_PTR_SET_VALUE(ossWriteRoleArn_, ossWriteRoleArn) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateTrailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // slsProjectArn Field Functions 
    bool hasSlsProjectArn() const { return this->slsProjectArn_ != nullptr;};
    void deleteSlsProjectArn() { this->slsProjectArn_ = nullptr;};
    inline string slsProjectArn() const { DARABONBA_PTR_GET_DEFAULT(slsProjectArn_, "") };
    inline CreateTrailResponseBody& setSlsProjectArn(string slsProjectArn) { DARABONBA_PTR_SET_VALUE(slsProjectArn_, slsProjectArn) };


    // slsWriteRoleArn Field Functions 
    bool hasSlsWriteRoleArn() const { return this->slsWriteRoleArn_ != nullptr;};
    void deleteSlsWriteRoleArn() { this->slsWriteRoleArn_ = nullptr;};
    inline string slsWriteRoleArn() const { DARABONBA_PTR_GET_DEFAULT(slsWriteRoleArn_, "") };
    inline CreateTrailResponseBody& setSlsWriteRoleArn(string slsWriteRoleArn) { DARABONBA_PTR_SET_VALUE(slsWriteRoleArn_, slsWriteRoleArn) };


    // trailRegion Field Functions 
    bool hasTrailRegion() const { return this->trailRegion_ != nullptr;};
    void deleteTrailRegion() { this->trailRegion_ = nullptr;};
    inline string trailRegion() const { DARABONBA_PTR_GET_DEFAULT(trailRegion_, "") };
    inline CreateTrailResponseBody& setTrailRegion(string trailRegion) { DARABONBA_PTR_SET_VALUE(trailRegion_, trailRegion) };


  protected:
    // The read/write type of the events to be delivered.
    std::shared_ptr<string> eventRW_ = nullptr;
    // The home region of the trail.
    std::shared_ptr<string> homeRegion_ = nullptr;
    // ARN of the Big Data Compute Service project for tracking delivery.
    std::shared_ptr<string> maxComputeProjectArn_ = nullptr;
    // The ARN of the role that Operation Audit assumes when delivering operation events to the Big Data Compute Service project.
    std::shared_ptr<string> maxComputeWriteRoleArn_ = nullptr;
    // The name of the trail.
    std::shared_ptr<string> name_ = nullptr;
    // The name of the OSS bucket to which events are to be delivered.
    std::shared_ptr<string> ossBucketName_ = nullptr;
    // The prefix of the log files to be stored in the destination OSS bucket.
    std::shared_ptr<string> ossKeyPrefix_ = nullptr;
    // The ARN of the service-linked role that is assumed by ActionTrail to deliver events to the destination OSS bucket.
    std::shared_ptr<string> ossWriteRoleArn_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The ARN of the Log Service project to which events are to be delivered.
    std::shared_ptr<string> slsProjectArn_ = nullptr;
    // The ARN of the service-linked role that is assumed by ActionTrail to deliver events to the destination Log Service project.
    std::shared_ptr<string> slsWriteRoleArn_ = nullptr;
    // The one or more regions from which the trail delivers events.
    std::shared_ptr<string> trailRegion_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Actiontrail20200706
#endif
