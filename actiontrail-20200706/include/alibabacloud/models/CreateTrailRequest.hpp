// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETRAILREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATETRAILREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Actiontrail20200706
{
namespace Models
{
  class CreateTrailRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTrailRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EventRW, eventRW_);
      DARABONBA_PTR_TO_JSON(IsOrganizationTrail, isOrganizationTrail_);
      DARABONBA_PTR_TO_JSON(MaxComputeProjectArn, maxComputeProjectArn_);
      DARABONBA_PTR_TO_JSON(MaxComputeWriteRoleArn, maxComputeWriteRoleArn_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(OssBucketName, ossBucketName_);
      DARABONBA_PTR_TO_JSON(OssKeyPrefix, ossKeyPrefix_);
      DARABONBA_PTR_TO_JSON(OssWriteRoleArn, ossWriteRoleArn_);
      DARABONBA_PTR_TO_JSON(SlsProjectArn, slsProjectArn_);
      DARABONBA_PTR_TO_JSON(SlsWriteRoleArn, slsWriteRoleArn_);
      DARABONBA_PTR_TO_JSON(TrailRegion, trailRegion_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTrailRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EventRW, eventRW_);
      DARABONBA_PTR_FROM_JSON(IsOrganizationTrail, isOrganizationTrail_);
      DARABONBA_PTR_FROM_JSON(MaxComputeProjectArn, maxComputeProjectArn_);
      DARABONBA_PTR_FROM_JSON(MaxComputeWriteRoleArn, maxComputeWriteRoleArn_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(OssBucketName, ossBucketName_);
      DARABONBA_PTR_FROM_JSON(OssKeyPrefix, ossKeyPrefix_);
      DARABONBA_PTR_FROM_JSON(OssWriteRoleArn, ossWriteRoleArn_);
      DARABONBA_PTR_FROM_JSON(SlsProjectArn, slsProjectArn_);
      DARABONBA_PTR_FROM_JSON(SlsWriteRoleArn, slsWriteRoleArn_);
      DARABONBA_PTR_FROM_JSON(TrailRegion, trailRegion_);
    };
    CreateTrailRequest() = default ;
    CreateTrailRequest(const CreateTrailRequest &) = default ;
    CreateTrailRequest(CreateTrailRequest &&) = default ;
    CreateTrailRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTrailRequest() = default ;
    CreateTrailRequest& operator=(const CreateTrailRequest &) = default ;
    CreateTrailRequest& operator=(CreateTrailRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->eventRW_ != nullptr
        && this->isOrganizationTrail_ != nullptr && this->maxComputeProjectArn_ != nullptr && this->maxComputeWriteRoleArn_ != nullptr && this->name_ != nullptr && this->ossBucketName_ != nullptr
        && this->ossKeyPrefix_ != nullptr && this->ossWriteRoleArn_ != nullptr && this->slsProjectArn_ != nullptr && this->slsWriteRoleArn_ != nullptr && this->trailRegion_ != nullptr; };
    // eventRW Field Functions 
    bool hasEventRW() const { return this->eventRW_ != nullptr;};
    void deleteEventRW() { this->eventRW_ = nullptr;};
    inline string eventRW() const { DARABONBA_PTR_GET_DEFAULT(eventRW_, "") };
    inline CreateTrailRequest& setEventRW(string eventRW) { DARABONBA_PTR_SET_VALUE(eventRW_, eventRW) };


    // isOrganizationTrail Field Functions 
    bool hasIsOrganizationTrail() const { return this->isOrganizationTrail_ != nullptr;};
    void deleteIsOrganizationTrail() { this->isOrganizationTrail_ = nullptr;};
    inline bool isOrganizationTrail() const { DARABONBA_PTR_GET_DEFAULT(isOrganizationTrail_, false) };
    inline CreateTrailRequest& setIsOrganizationTrail(bool isOrganizationTrail) { DARABONBA_PTR_SET_VALUE(isOrganizationTrail_, isOrganizationTrail) };


    // maxComputeProjectArn Field Functions 
    bool hasMaxComputeProjectArn() const { return this->maxComputeProjectArn_ != nullptr;};
    void deleteMaxComputeProjectArn() { this->maxComputeProjectArn_ = nullptr;};
    inline string maxComputeProjectArn() const { DARABONBA_PTR_GET_DEFAULT(maxComputeProjectArn_, "") };
    inline CreateTrailRequest& setMaxComputeProjectArn(string maxComputeProjectArn) { DARABONBA_PTR_SET_VALUE(maxComputeProjectArn_, maxComputeProjectArn) };


    // maxComputeWriteRoleArn Field Functions 
    bool hasMaxComputeWriteRoleArn() const { return this->maxComputeWriteRoleArn_ != nullptr;};
    void deleteMaxComputeWriteRoleArn() { this->maxComputeWriteRoleArn_ = nullptr;};
    inline string maxComputeWriteRoleArn() const { DARABONBA_PTR_GET_DEFAULT(maxComputeWriteRoleArn_, "") };
    inline CreateTrailRequest& setMaxComputeWriteRoleArn(string maxComputeWriteRoleArn) { DARABONBA_PTR_SET_VALUE(maxComputeWriteRoleArn_, maxComputeWriteRoleArn) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateTrailRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // ossBucketName Field Functions 
    bool hasOssBucketName() const { return this->ossBucketName_ != nullptr;};
    void deleteOssBucketName() { this->ossBucketName_ = nullptr;};
    inline string ossBucketName() const { DARABONBA_PTR_GET_DEFAULT(ossBucketName_, "") };
    inline CreateTrailRequest& setOssBucketName(string ossBucketName) { DARABONBA_PTR_SET_VALUE(ossBucketName_, ossBucketName) };


    // ossKeyPrefix Field Functions 
    bool hasOssKeyPrefix() const { return this->ossKeyPrefix_ != nullptr;};
    void deleteOssKeyPrefix() { this->ossKeyPrefix_ = nullptr;};
    inline string ossKeyPrefix() const { DARABONBA_PTR_GET_DEFAULT(ossKeyPrefix_, "") };
    inline CreateTrailRequest& setOssKeyPrefix(string ossKeyPrefix) { DARABONBA_PTR_SET_VALUE(ossKeyPrefix_, ossKeyPrefix) };


    // ossWriteRoleArn Field Functions 
    bool hasOssWriteRoleArn() const { return this->ossWriteRoleArn_ != nullptr;};
    void deleteOssWriteRoleArn() { this->ossWriteRoleArn_ = nullptr;};
    inline string ossWriteRoleArn() const { DARABONBA_PTR_GET_DEFAULT(ossWriteRoleArn_, "") };
    inline CreateTrailRequest& setOssWriteRoleArn(string ossWriteRoleArn) { DARABONBA_PTR_SET_VALUE(ossWriteRoleArn_, ossWriteRoleArn) };


    // slsProjectArn Field Functions 
    bool hasSlsProjectArn() const { return this->slsProjectArn_ != nullptr;};
    void deleteSlsProjectArn() { this->slsProjectArn_ = nullptr;};
    inline string slsProjectArn() const { DARABONBA_PTR_GET_DEFAULT(slsProjectArn_, "") };
    inline CreateTrailRequest& setSlsProjectArn(string slsProjectArn) { DARABONBA_PTR_SET_VALUE(slsProjectArn_, slsProjectArn) };


    // slsWriteRoleArn Field Functions 
    bool hasSlsWriteRoleArn() const { return this->slsWriteRoleArn_ != nullptr;};
    void deleteSlsWriteRoleArn() { this->slsWriteRoleArn_ = nullptr;};
    inline string slsWriteRoleArn() const { DARABONBA_PTR_GET_DEFAULT(slsWriteRoleArn_, "") };
    inline CreateTrailRequest& setSlsWriteRoleArn(string slsWriteRoleArn) { DARABONBA_PTR_SET_VALUE(slsWriteRoleArn_, slsWriteRoleArn) };


    // trailRegion Field Functions 
    bool hasTrailRegion() const { return this->trailRegion_ != nullptr;};
    void deleteTrailRegion() { this->trailRegion_ = nullptr;};
    inline string trailRegion() const { DARABONBA_PTR_GET_DEFAULT(trailRegion_, "") };
    inline CreateTrailRequest& setTrailRegion(string trailRegion) { DARABONBA_PTR_SET_VALUE(trailRegion_, trailRegion) };


  protected:
    // The read/write type of the events to be delivered. Valid values:
    // 
    // *   Write: write events. It is the default value.
    // *   Read: read events.
    // *   All: read and write events.
    std::shared_ptr<string> eventRW_ = nullptr;
    // Specifies whether to create a multi-account trail. Valid values:
    // 
    // *   true: creates a multi-account trail.
    // *   false (default): creates a single-account trail.
    std::shared_ptr<bool> isOrganizationTrail_ = nullptr;
    // The ARN of the MaxCompute project to which you want to deliver events.
    // 
    // >  You must specify at least one of the following parameters: OssBucketName, SlsProjectArn, and MaxComputeProjectArn.
    // 
    // >  The name of the MaxCompute project must be prefixed with actiontrail_.
    std::shared_ptr<string> maxComputeProjectArn_ = nullptr;
    // The ARN of the role that is assumed by ActionTrail to deliver events to the MaxCompute project.
    // 
    // *   If you do not specify this parameter, ActionTrail creates a service-linked role to create the corresponding resource. For more information, see [Manage the service-linked role](https://help.aliyun.com/document_detail/169244.html).
    // *   If you specify this parameter and deliver events to the current account, you must grant the RAM role the permissions on the service-linked role for ActionTrail. If you want to deliver events to other accounts, you must attach a system policy to the RAM role. For more information about how to deliver events across Alibaba Cloud accounts, see [Deliver events across Alibaba Cloud accounts](https://help.aliyun.com/document_detail/207462.html).
    std::shared_ptr<string> maxComputeWriteRoleArn_ = nullptr;
    // The name of the trail to be created.
    // 
    // The name must be 6 to 36 characters in length. The name must start with a lowercase letter and can contain lowercase letters, digits, hyphens (-), and underscores (_).
    // 
    // > The name must be unique within your Alibaba Cloud account.
    // 
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    // The name of the OSS bucket to which events are to be delivered.
    // 
    // The name must be 3 to 63 characters in length. The name must start with a lowercase letter or a digit and can contain lowercase letters, digits, and hyphens (-).
    // 
    // > You must specify at least one of the OssBucketName and SlsProjectArn parameters.
    std::shared_ptr<string> ossBucketName_ = nullptr;
    // The prefix of the log files to be stored in the destination OSS bucket. This parameter can be left empty.
    // 
    // The prefix must be 6 to 32 characters in length. The prefix must start with a letter and can contain letters, digits, hyphens (-), forward slashes (/), and underscores (_).
    std::shared_ptr<string> ossKeyPrefix_ = nullptr;
    // The Alibaba Cloud Resource Name (ARN) of the service-linked role that is assumed by ActionTrail to deliver events to the destination Object Storage Service (OSS) bucket.
    // 
    // *   If you do not specify this parameter, ActionTrail creates a service-linked role to create the corresponding resource. For more information, see [Manage the service-linked role](https://help.aliyun.com/document_detail/169244.html).
    // *   If you specify this parameter and deliver events to the current account, you must grant the RAM role the permissions on the service-linked role for ActionTrail. If you want to deliver events to other accounts, you must attach a system policy to the RAM role. For more information about how to deliver events across Alibaba Cloud accounts, see [Deliver events across Alibaba Cloud accounts](https://help.aliyun.com/document_detail/207462.html).
    std::shared_ptr<string> ossWriteRoleArn_ = nullptr;
    // The ARN of the Log Service project to which events are to be delivered.
    // 
    // > You must specify at least one of the OssBucketName and SlsProjectArn parameters.
    std::shared_ptr<string> slsProjectArn_ = nullptr;
    // The ARN of the RAM role that is assumed by ActionTrail to deliver events to the Log Service project.
    // 
    // *   If you do not specify this parameter, ActionTrail creates a service-linked role to create the corresponding resource. For more information, see [Manage the service-linked role](https://help.aliyun.com/document_detail/169244.html).
    // *   If you specify this parameter, you must grant the permissions of the service-linked role that is assumed by ActionTrail to the RAM role before you can deliver events to your Alibaba Cloud account. If you need to deliver events to other Alibaba Cloud accounts, you must attach the permission policy that is used to grant permissions related to event delivery to the RAM role. For more information about how to deliver events across Alibaba Cloud accounts, see [Deliver events across Alibaba Cloud accounts](https://help.aliyun.com/document_detail/207462.html).
    std::shared_ptr<string> slsWriteRoleArn_ = nullptr;
    // The one or more regions from which the trail delivers events.
    // 
    // The default value is All, which indicates that the trail delivers events from all regions.
    // 
    // You can also specify specific regions. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/213597.html) operation to query all the supported regions.
    std::shared_ptr<string> trailRegion_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Actiontrail20200706
#endif
