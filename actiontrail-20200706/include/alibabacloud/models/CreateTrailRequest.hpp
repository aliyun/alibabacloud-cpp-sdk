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
    virtual bool empty() const override { return this->eventRW_ == nullptr
        && this->isOrganizationTrail_ == nullptr && this->maxComputeProjectArn_ == nullptr && this->maxComputeWriteRoleArn_ == nullptr && this->name_ == nullptr && this->ossBucketName_ == nullptr
        && this->ossKeyPrefix_ == nullptr && this->ossWriteRoleArn_ == nullptr && this->slsProjectArn_ == nullptr && this->slsWriteRoleArn_ == nullptr && this->trailRegion_ == nullptr; };
    // eventRW Field Functions 
    bool hasEventRW() const { return this->eventRW_ != nullptr;};
    void deleteEventRW() { this->eventRW_ = nullptr;};
    inline string getEventRW() const { DARABONBA_PTR_GET_DEFAULT(eventRW_, "") };
    inline CreateTrailRequest& setEventRW(string eventRW) { DARABONBA_PTR_SET_VALUE(eventRW_, eventRW) };


    // isOrganizationTrail Field Functions 
    bool hasIsOrganizationTrail() const { return this->isOrganizationTrail_ != nullptr;};
    void deleteIsOrganizationTrail() { this->isOrganizationTrail_ = nullptr;};
    inline bool getIsOrganizationTrail() const { DARABONBA_PTR_GET_DEFAULT(isOrganizationTrail_, false) };
    inline CreateTrailRequest& setIsOrganizationTrail(bool isOrganizationTrail) { DARABONBA_PTR_SET_VALUE(isOrganizationTrail_, isOrganizationTrail) };


    // maxComputeProjectArn Field Functions 
    bool hasMaxComputeProjectArn() const { return this->maxComputeProjectArn_ != nullptr;};
    void deleteMaxComputeProjectArn() { this->maxComputeProjectArn_ = nullptr;};
    inline string getMaxComputeProjectArn() const { DARABONBA_PTR_GET_DEFAULT(maxComputeProjectArn_, "") };
    inline CreateTrailRequest& setMaxComputeProjectArn(string maxComputeProjectArn) { DARABONBA_PTR_SET_VALUE(maxComputeProjectArn_, maxComputeProjectArn) };


    // maxComputeWriteRoleArn Field Functions 
    bool hasMaxComputeWriteRoleArn() const { return this->maxComputeWriteRoleArn_ != nullptr;};
    void deleteMaxComputeWriteRoleArn() { this->maxComputeWriteRoleArn_ = nullptr;};
    inline string getMaxComputeWriteRoleArn() const { DARABONBA_PTR_GET_DEFAULT(maxComputeWriteRoleArn_, "") };
    inline CreateTrailRequest& setMaxComputeWriteRoleArn(string maxComputeWriteRoleArn) { DARABONBA_PTR_SET_VALUE(maxComputeWriteRoleArn_, maxComputeWriteRoleArn) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateTrailRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // ossBucketName Field Functions 
    bool hasOssBucketName() const { return this->ossBucketName_ != nullptr;};
    void deleteOssBucketName() { this->ossBucketName_ = nullptr;};
    inline string getOssBucketName() const { DARABONBA_PTR_GET_DEFAULT(ossBucketName_, "") };
    inline CreateTrailRequest& setOssBucketName(string ossBucketName) { DARABONBA_PTR_SET_VALUE(ossBucketName_, ossBucketName) };


    // ossKeyPrefix Field Functions 
    bool hasOssKeyPrefix() const { return this->ossKeyPrefix_ != nullptr;};
    void deleteOssKeyPrefix() { this->ossKeyPrefix_ = nullptr;};
    inline string getOssKeyPrefix() const { DARABONBA_PTR_GET_DEFAULT(ossKeyPrefix_, "") };
    inline CreateTrailRequest& setOssKeyPrefix(string ossKeyPrefix) { DARABONBA_PTR_SET_VALUE(ossKeyPrefix_, ossKeyPrefix) };


    // ossWriteRoleArn Field Functions 
    bool hasOssWriteRoleArn() const { return this->ossWriteRoleArn_ != nullptr;};
    void deleteOssWriteRoleArn() { this->ossWriteRoleArn_ = nullptr;};
    inline string getOssWriteRoleArn() const { DARABONBA_PTR_GET_DEFAULT(ossWriteRoleArn_, "") };
    inline CreateTrailRequest& setOssWriteRoleArn(string ossWriteRoleArn) { DARABONBA_PTR_SET_VALUE(ossWriteRoleArn_, ossWriteRoleArn) };


    // slsProjectArn Field Functions 
    bool hasSlsProjectArn() const { return this->slsProjectArn_ != nullptr;};
    void deleteSlsProjectArn() { this->slsProjectArn_ = nullptr;};
    inline string getSlsProjectArn() const { DARABONBA_PTR_GET_DEFAULT(slsProjectArn_, "") };
    inline CreateTrailRequest& setSlsProjectArn(string slsProjectArn) { DARABONBA_PTR_SET_VALUE(slsProjectArn_, slsProjectArn) };


    // slsWriteRoleArn Field Functions 
    bool hasSlsWriteRoleArn() const { return this->slsWriteRoleArn_ != nullptr;};
    void deleteSlsWriteRoleArn() { this->slsWriteRoleArn_ = nullptr;};
    inline string getSlsWriteRoleArn() const { DARABONBA_PTR_GET_DEFAULT(slsWriteRoleArn_, "") };
    inline CreateTrailRequest& setSlsWriteRoleArn(string slsWriteRoleArn) { DARABONBA_PTR_SET_VALUE(slsWriteRoleArn_, slsWriteRoleArn) };


    // trailRegion Field Functions 
    bool hasTrailRegion() const { return this->trailRegion_ != nullptr;};
    void deleteTrailRegion() { this->trailRegion_ = nullptr;};
    inline string getTrailRegion() const { DARABONBA_PTR_GET_DEFAULT(trailRegion_, "") };
    inline CreateTrailRequest& setTrailRegion(string trailRegion) { DARABONBA_PTR_SET_VALUE(trailRegion_, trailRegion) };


  protected:
    // Specifies the read/write type of events that the trail delivers. Valid values:
    // 
    // - Write: Write events.
    // 
    // - Read: Read events.
    // 
    // - All (default): All read and write events.
    shared_ptr<string> eventRW_ {};
    // Specifies whether the trail is a multi-account trail. Valid values:
    // 
    // - true
    // 
    // - false (default)
    // 
    // To create a trail for an organization, set this parameter to `true`. The trail will collect events from all member accounts in the organization.
    shared_ptr<bool> isOrganizationTrail_ {};
    // The ARN of the MaxCompute project to which ActionTrail delivers events.
    // 
    // > You must specify a destination for the trail by providing at least one of the following parameters: `OssBucketName`, `SlsProjectArn`, or `MaxComputeProjectArn`.
    // 
    // > The project name in the ARN must start with `actiontrail_`.
    shared_ptr<string> maxComputeProjectArn_ {};
    // The ARN of the RAM role that ActionTrail assumes to deliver events to the MaxCompute project.
    // 
    // - If this parameter is not specified, ActionTrail creates a service-linked role to deliver events. For more information, see [ActionTrail service-linked role](https://help.aliyun.com/document_detail/169244.html).
    // 
    // - If you specify a role, it must be a RAM role that you created. This role must have a trust policy that allows the ActionTrail service (\\`actiontrail.aliyuncs.com\\`) to assume it. The role\\"s permission policy must grant permissions to write to the specified MaxCompute project. For more information about cross-account delivery, see [Deliver events from multiple Alibaba Cloud accounts to the same account](https://help.aliyun.com/document_detail/207462.html).
    shared_ptr<string> maxComputeWriteRoleArn_ {};
    // The name of the trail.
    // 
    // > - Length: 6 to 36 characters.
    // >
    // > - Characters: Lowercase letters, digits, hyphens (-), and underscores (_).
    // >
    // > - Must start with a lowercase letter.
    // >
    // > - Must be uniquewithin an Alibaba Cloud account.
    // 
    // This parameter is required.
    shared_ptr<string> name_ {};
    // The name of the OSS bucket to which ActionTrail delivers events.
    // 
    // - Length: 3 to 63 characters.
    // 
    // - Characters: Lowercase letters, digits, and hyphens (-).
    // 
    // - Must start with a lowercase letter or a digit.
    // 
    // > You must specify a destination for the trail by providing at least one of the following parameters: `OssBucketName`, `SlsProjectArn`, or `MaxComputeProjectArn`.
    shared_ptr<string> ossBucketName_ {};
    // The prefix for the names of log files that ActionTrail delivers to your OSS bucket.
    // 
    // - Length: 6 to 32 characters.
    // 
    // - Characters: Letters, digits, hyphens (-), forward slashes (/), and underscores (_).
    // 
    // - Must start with a letter.
    shared_ptr<string> ossKeyPrefix_ {};
    // The Alibaba Cloud Resource Name (ARN) of the RAM role that ActionTrail assumes to deliver events to the OSS bucket.
    // 
    // - If you do not specify this parameter, ActionTrail creates a service-linked role to deliver events. For more information, see [ActionTrail service-linked role](https://help.aliyun.com/document_detail/169244.html).
    // 
    // - If you specify a role, it must be a RAM role that you created. This role must have a trust policy that allows the ActionTrail service (actiontrail.aliyuncs.com) to assume it. The role\\"s RAM policy must grant permissions to write to the specified OSS bucket. For more information about cross-account delivery, see [Deliver events from multiple Alibaba Cloud accounts to the same account](https://help.aliyun.com/document_detail/207462.html).
    shared_ptr<string> ossWriteRoleArn_ {};
    // The ARN of the SLS project to which ActionTrail delivers events.
    // 
    // > You must specify a destination for the trail by providing at least one of the following parameters: `OssBucketName`, `SlsProjectArn`, or `MaxComputeProjectArn`.
    shared_ptr<string> slsProjectArn_ {};
    // The ARN of the RAM role that ActionTrail assumes to deliver events to the SLS project.
    // 
    // - If this parameter is not specified, ActionTrail creates a service-linked role to deliver events. For more information, see [ActionTrail service-linked role](https://help.aliyun.com/document_detail/169244.html).
    // 
    // - If you specify a role, it must be a RAM role that you created. This role must have a trust policy that allows the ActionTrail service (actiontrail.aliyuncs.com) to assume it. The role\\"s permission policy must grant permissions to write to the specified SLS project. For more information about cross-account delivery, see [Deliver events from multiple Alibaba Cloud accounts to the same account](https://help.aliyun.com/document_detail/207462.html).
    shared_ptr<string> slsWriteRoleArn_ {};
    // The region in which the trail is created. By default, a trail is created in all regions and this parameter is set to `All`. To create a trail in a specific region, provide the region ID. For more information about regions, call the [DescribeRegions](https://help.aliyun.com/document_detail/213597.html) operation.
    shared_ptr<string> trailRegion_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Actiontrail20200706
#endif
