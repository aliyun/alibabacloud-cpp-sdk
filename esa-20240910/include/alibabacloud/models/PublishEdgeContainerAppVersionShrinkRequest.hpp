// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUBLISHEDGECONTAINERAPPVERSIONSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PUBLISHEDGECONTAINERAPPVERSIONSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class PublishEdgeContainerAppVersionShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PublishEdgeContainerAppVersionShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(FullRelease, fullRelease_);
      DARABONBA_PTR_TO_JSON(Percentage, percentage_);
      DARABONBA_PTR_TO_JSON(PublishEnv, publishEnv_);
      DARABONBA_PTR_TO_JSON(PublishType, publishType_);
      DARABONBA_PTR_TO_JSON(Regions, regionsShrink_);
      DARABONBA_PTR_TO_JSON(Remarks, remarks_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(VersionId, versionId_);
    };
    friend void from_json(const Darabonba::Json& j, PublishEdgeContainerAppVersionShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(FullRelease, fullRelease_);
      DARABONBA_PTR_FROM_JSON(Percentage, percentage_);
      DARABONBA_PTR_FROM_JSON(PublishEnv, publishEnv_);
      DARABONBA_PTR_FROM_JSON(PublishType, publishType_);
      DARABONBA_PTR_FROM_JSON(Regions, regionsShrink_);
      DARABONBA_PTR_FROM_JSON(Remarks, remarks_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(VersionId, versionId_);
    };
    PublishEdgeContainerAppVersionShrinkRequest() = default ;
    PublishEdgeContainerAppVersionShrinkRequest(const PublishEdgeContainerAppVersionShrinkRequest &) = default ;
    PublishEdgeContainerAppVersionShrinkRequest(PublishEdgeContainerAppVersionShrinkRequest &&) = default ;
    PublishEdgeContainerAppVersionShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PublishEdgeContainerAppVersionShrinkRequest() = default ;
    PublishEdgeContainerAppVersionShrinkRequest& operator=(const PublishEdgeContainerAppVersionShrinkRequest &) = default ;
    PublishEdgeContainerAppVersionShrinkRequest& operator=(PublishEdgeContainerAppVersionShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && this->fullRelease_ == nullptr && this->percentage_ == nullptr && this->publishEnv_ == nullptr && this->publishType_ == nullptr && this->regionsShrink_ == nullptr
        && this->remarks_ == nullptr && this->startTime_ == nullptr && this->versionId_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline PublishEdgeContainerAppVersionShrinkRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // fullRelease Field Functions 
    bool hasFullRelease() const { return this->fullRelease_ != nullptr;};
    void deleteFullRelease() { this->fullRelease_ = nullptr;};
    inline bool getFullRelease() const { DARABONBA_PTR_GET_DEFAULT(fullRelease_, false) };
    inline PublishEdgeContainerAppVersionShrinkRequest& setFullRelease(bool fullRelease) { DARABONBA_PTR_SET_VALUE(fullRelease_, fullRelease) };


    // percentage Field Functions 
    bool hasPercentage() const { return this->percentage_ != nullptr;};
    void deletePercentage() { this->percentage_ = nullptr;};
    inline int32_t getPercentage() const { DARABONBA_PTR_GET_DEFAULT(percentage_, 0) };
    inline PublishEdgeContainerAppVersionShrinkRequest& setPercentage(int32_t percentage) { DARABONBA_PTR_SET_VALUE(percentage_, percentage) };


    // publishEnv Field Functions 
    bool hasPublishEnv() const { return this->publishEnv_ != nullptr;};
    void deletePublishEnv() { this->publishEnv_ = nullptr;};
    inline string getPublishEnv() const { DARABONBA_PTR_GET_DEFAULT(publishEnv_, "") };
    inline PublishEdgeContainerAppVersionShrinkRequest& setPublishEnv(string publishEnv) { DARABONBA_PTR_SET_VALUE(publishEnv_, publishEnv) };


    // publishType Field Functions 
    bool hasPublishType() const { return this->publishType_ != nullptr;};
    void deletePublishType() { this->publishType_ = nullptr;};
    inline string getPublishType() const { DARABONBA_PTR_GET_DEFAULT(publishType_, "") };
    inline PublishEdgeContainerAppVersionShrinkRequest& setPublishType(string publishType) { DARABONBA_PTR_SET_VALUE(publishType_, publishType) };


    // regionsShrink Field Functions 
    bool hasRegionsShrink() const { return this->regionsShrink_ != nullptr;};
    void deleteRegionsShrink() { this->regionsShrink_ = nullptr;};
    inline string getRegionsShrink() const { DARABONBA_PTR_GET_DEFAULT(regionsShrink_, "") };
    inline PublishEdgeContainerAppVersionShrinkRequest& setRegionsShrink(string regionsShrink) { DARABONBA_PTR_SET_VALUE(regionsShrink_, regionsShrink) };


    // remarks Field Functions 
    bool hasRemarks() const { return this->remarks_ != nullptr;};
    void deleteRemarks() { this->remarks_ = nullptr;};
    inline string getRemarks() const { DARABONBA_PTR_GET_DEFAULT(remarks_, "") };
    inline PublishEdgeContainerAppVersionShrinkRequest& setRemarks(string remarks) { DARABONBA_PTR_SET_VALUE(remarks_, remarks) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline PublishEdgeContainerAppVersionShrinkRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // versionId Field Functions 
    bool hasVersionId() const { return this->versionId_ != nullptr;};
    void deleteVersionId() { this->versionId_ = nullptr;};
    inline string getVersionId() const { DARABONBA_PTR_GET_DEFAULT(versionId_, "") };
    inline PublishEdgeContainerAppVersionShrinkRequest& setVersionId(string versionId) { DARABONBA_PTR_SET_VALUE(versionId_, versionId) };


  protected:
    // The application ID.
    // 
    // This parameter is required.
    shared_ptr<string> appId_ {};
    // Specifies whether to fully release the version. This parameter takes effect only when PublishType is set to region.
    shared_ptr<bool> fullRelease_ {};
    // The release percentage. Valid values: 1 to 100. Default value: 100.
    shared_ptr<int32_t> percentage_ {};
    // The environment to which you want to release the version. Valid values:
    // 
    // *   prod: the production environment.
    // *   staging: the staging environment.
    // 
    // This parameter is required.
    shared_ptr<string> publishEnv_ {};
    // Specifies how the version is released. Valid values:
    // 
    // *   percentage: releases the version by percentage.
    // *   region: releases the version by region.
    // 
    // If you do not specify this parameter, the version is released by percentage by default.
    shared_ptr<string> publishType_ {};
    // The regions to which the version is released.
    shared_ptr<string> regionsShrink_ {};
    // The remarks. This parameter is empty by default.
    shared_ptr<string> remarks_ {};
    // The time when the application version starts to be released. If you do not specify this parameter, the current time is used by default.
    // 
    // Specify the time in the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time must be in UTC.
    shared_ptr<string> startTime_ {};
    // The version ID.
    // 
    // This parameter is required.
    shared_ptr<string> versionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
