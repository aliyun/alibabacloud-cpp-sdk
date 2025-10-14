// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETEDGECONTAINERAPPSTATUSRESPONSEBODYAPPSTATUS_HPP_
#define ALIBABACLOUD_MODELS_GETEDGECONTAINERAPPSTATUSRESPONSEBODYAPPSTATUS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetEdgeContainerAppStatusResponseBodyAppStatusRegions.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class GetEdgeContainerAppStatusResponseBodyAppStatus : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetEdgeContainerAppStatusResponseBodyAppStatus& obj) { 
      DARABONBA_PTR_TO_JSON(BaseLineVersion, baseLineVersion_);
      DARABONBA_PTR_TO_JSON(DeployStatus, deployStatus_);
      DARABONBA_PTR_TO_JSON(DeployTime, deployTime_);
      DARABONBA_PTR_TO_JSON(DeployedVersion, deployedVersion_);
      DARABONBA_PTR_TO_JSON(ExpectPercentage, expectPercentage_);
      DARABONBA_PTR_TO_JSON(FullRelease, fullRelease_);
      DARABONBA_PTR_TO_JSON(PublishEnv, publishEnv_);
      DARABONBA_PTR_TO_JSON(PublishPercentage, publishPercentage_);
      DARABONBA_PTR_TO_JSON(PublishStatus, publishStatus_);
      DARABONBA_PTR_TO_JSON(PublishTime, publishTime_);
      DARABONBA_PTR_TO_JSON(PublishType, publishType_);
      DARABONBA_PTR_TO_JSON(PublishingVersion, publishingVersion_);
      DARABONBA_PTR_TO_JSON(Regions, regions_);
      DARABONBA_PTR_TO_JSON(RollbackTime, rollbackTime_);
      DARABONBA_PTR_TO_JSON(UnDeployTime, unDeployTime_);
    };
    friend void from_json(const Darabonba::Json& j, GetEdgeContainerAppStatusResponseBodyAppStatus& obj) { 
      DARABONBA_PTR_FROM_JSON(BaseLineVersion, baseLineVersion_);
      DARABONBA_PTR_FROM_JSON(DeployStatus, deployStatus_);
      DARABONBA_PTR_FROM_JSON(DeployTime, deployTime_);
      DARABONBA_PTR_FROM_JSON(DeployedVersion, deployedVersion_);
      DARABONBA_PTR_FROM_JSON(ExpectPercentage, expectPercentage_);
      DARABONBA_PTR_FROM_JSON(FullRelease, fullRelease_);
      DARABONBA_PTR_FROM_JSON(PublishEnv, publishEnv_);
      DARABONBA_PTR_FROM_JSON(PublishPercentage, publishPercentage_);
      DARABONBA_PTR_FROM_JSON(PublishStatus, publishStatus_);
      DARABONBA_PTR_FROM_JSON(PublishTime, publishTime_);
      DARABONBA_PTR_FROM_JSON(PublishType, publishType_);
      DARABONBA_PTR_FROM_JSON(PublishingVersion, publishingVersion_);
      DARABONBA_PTR_FROM_JSON(Regions, regions_);
      DARABONBA_PTR_FROM_JSON(RollbackTime, rollbackTime_);
      DARABONBA_PTR_FROM_JSON(UnDeployTime, unDeployTime_);
    };
    GetEdgeContainerAppStatusResponseBodyAppStatus() = default ;
    GetEdgeContainerAppStatusResponseBodyAppStatus(const GetEdgeContainerAppStatusResponseBodyAppStatus &) = default ;
    GetEdgeContainerAppStatusResponseBodyAppStatus(GetEdgeContainerAppStatusResponseBodyAppStatus &&) = default ;
    GetEdgeContainerAppStatusResponseBodyAppStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetEdgeContainerAppStatusResponseBodyAppStatus() = default ;
    GetEdgeContainerAppStatusResponseBodyAppStatus& operator=(const GetEdgeContainerAppStatusResponseBodyAppStatus &) = default ;
    GetEdgeContainerAppStatusResponseBodyAppStatus& operator=(GetEdgeContainerAppStatusResponseBodyAppStatus &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->baseLineVersion_ == nullptr
        && return this->deployStatus_ == nullptr && return this->deployTime_ == nullptr && return this->deployedVersion_ == nullptr && return this->expectPercentage_ == nullptr && return this->fullRelease_ == nullptr
        && return this->publishEnv_ == nullptr && return this->publishPercentage_ == nullptr && return this->publishStatus_ == nullptr && return this->publishTime_ == nullptr && return this->publishType_ == nullptr
        && return this->publishingVersion_ == nullptr && return this->regions_ == nullptr && return this->rollbackTime_ == nullptr && return this->unDeployTime_ == nullptr; };
    // baseLineVersion Field Functions 
    bool hasBaseLineVersion() const { return this->baseLineVersion_ != nullptr;};
    void deleteBaseLineVersion() { this->baseLineVersion_ = nullptr;};
    inline string baseLineVersion() const { DARABONBA_PTR_GET_DEFAULT(baseLineVersion_, "") };
    inline GetEdgeContainerAppStatusResponseBodyAppStatus& setBaseLineVersion(string baseLineVersion) { DARABONBA_PTR_SET_VALUE(baseLineVersion_, baseLineVersion) };


    // deployStatus Field Functions 
    bool hasDeployStatus() const { return this->deployStatus_ != nullptr;};
    void deleteDeployStatus() { this->deployStatus_ = nullptr;};
    inline string deployStatus() const { DARABONBA_PTR_GET_DEFAULT(deployStatus_, "") };
    inline GetEdgeContainerAppStatusResponseBodyAppStatus& setDeployStatus(string deployStatus) { DARABONBA_PTR_SET_VALUE(deployStatus_, deployStatus) };


    // deployTime Field Functions 
    bool hasDeployTime() const { return this->deployTime_ != nullptr;};
    void deleteDeployTime() { this->deployTime_ = nullptr;};
    inline string deployTime() const { DARABONBA_PTR_GET_DEFAULT(deployTime_, "") };
    inline GetEdgeContainerAppStatusResponseBodyAppStatus& setDeployTime(string deployTime) { DARABONBA_PTR_SET_VALUE(deployTime_, deployTime) };


    // deployedVersion Field Functions 
    bool hasDeployedVersion() const { return this->deployedVersion_ != nullptr;};
    void deleteDeployedVersion() { this->deployedVersion_ = nullptr;};
    inline string deployedVersion() const { DARABONBA_PTR_GET_DEFAULT(deployedVersion_, "") };
    inline GetEdgeContainerAppStatusResponseBodyAppStatus& setDeployedVersion(string deployedVersion) { DARABONBA_PTR_SET_VALUE(deployedVersion_, deployedVersion) };


    // expectPercentage Field Functions 
    bool hasExpectPercentage() const { return this->expectPercentage_ != nullptr;};
    void deleteExpectPercentage() { this->expectPercentage_ = nullptr;};
    inline int32_t expectPercentage() const { DARABONBA_PTR_GET_DEFAULT(expectPercentage_, 0) };
    inline GetEdgeContainerAppStatusResponseBodyAppStatus& setExpectPercentage(int32_t expectPercentage) { DARABONBA_PTR_SET_VALUE(expectPercentage_, expectPercentage) };


    // fullRelease Field Functions 
    bool hasFullRelease() const { return this->fullRelease_ != nullptr;};
    void deleteFullRelease() { this->fullRelease_ = nullptr;};
    inline bool fullRelease() const { DARABONBA_PTR_GET_DEFAULT(fullRelease_, false) };
    inline GetEdgeContainerAppStatusResponseBodyAppStatus& setFullRelease(bool fullRelease) { DARABONBA_PTR_SET_VALUE(fullRelease_, fullRelease) };


    // publishEnv Field Functions 
    bool hasPublishEnv() const { return this->publishEnv_ != nullptr;};
    void deletePublishEnv() { this->publishEnv_ = nullptr;};
    inline string publishEnv() const { DARABONBA_PTR_GET_DEFAULT(publishEnv_, "") };
    inline GetEdgeContainerAppStatusResponseBodyAppStatus& setPublishEnv(string publishEnv) { DARABONBA_PTR_SET_VALUE(publishEnv_, publishEnv) };


    // publishPercentage Field Functions 
    bool hasPublishPercentage() const { return this->publishPercentage_ != nullptr;};
    void deletePublishPercentage() { this->publishPercentage_ = nullptr;};
    inline int32_t publishPercentage() const { DARABONBA_PTR_GET_DEFAULT(publishPercentage_, 0) };
    inline GetEdgeContainerAppStatusResponseBodyAppStatus& setPublishPercentage(int32_t publishPercentage) { DARABONBA_PTR_SET_VALUE(publishPercentage_, publishPercentage) };


    // publishStatus Field Functions 
    bool hasPublishStatus() const { return this->publishStatus_ != nullptr;};
    void deletePublishStatus() { this->publishStatus_ = nullptr;};
    inline string publishStatus() const { DARABONBA_PTR_GET_DEFAULT(publishStatus_, "") };
    inline GetEdgeContainerAppStatusResponseBodyAppStatus& setPublishStatus(string publishStatus) { DARABONBA_PTR_SET_VALUE(publishStatus_, publishStatus) };


    // publishTime Field Functions 
    bool hasPublishTime() const { return this->publishTime_ != nullptr;};
    void deletePublishTime() { this->publishTime_ = nullptr;};
    inline string publishTime() const { DARABONBA_PTR_GET_DEFAULT(publishTime_, "") };
    inline GetEdgeContainerAppStatusResponseBodyAppStatus& setPublishTime(string publishTime) { DARABONBA_PTR_SET_VALUE(publishTime_, publishTime) };


    // publishType Field Functions 
    bool hasPublishType() const { return this->publishType_ != nullptr;};
    void deletePublishType() { this->publishType_ = nullptr;};
    inline string publishType() const { DARABONBA_PTR_GET_DEFAULT(publishType_, "") };
    inline GetEdgeContainerAppStatusResponseBodyAppStatus& setPublishType(string publishType) { DARABONBA_PTR_SET_VALUE(publishType_, publishType) };


    // publishingVersion Field Functions 
    bool hasPublishingVersion() const { return this->publishingVersion_ != nullptr;};
    void deletePublishingVersion() { this->publishingVersion_ = nullptr;};
    inline string publishingVersion() const { DARABONBA_PTR_GET_DEFAULT(publishingVersion_, "") };
    inline GetEdgeContainerAppStatusResponseBodyAppStatus& setPublishingVersion(string publishingVersion) { DARABONBA_PTR_SET_VALUE(publishingVersion_, publishingVersion) };


    // regions Field Functions 
    bool hasRegions() const { return this->regions_ != nullptr;};
    void deleteRegions() { this->regions_ = nullptr;};
    inline const Models::GetEdgeContainerAppStatusResponseBodyAppStatusRegions & regions() const { DARABONBA_PTR_GET_CONST(regions_, Models::GetEdgeContainerAppStatusResponseBodyAppStatusRegions) };
    inline Models::GetEdgeContainerAppStatusResponseBodyAppStatusRegions regions() { DARABONBA_PTR_GET(regions_, Models::GetEdgeContainerAppStatusResponseBodyAppStatusRegions) };
    inline GetEdgeContainerAppStatusResponseBodyAppStatus& setRegions(const Models::GetEdgeContainerAppStatusResponseBodyAppStatusRegions & regions) { DARABONBA_PTR_SET_VALUE(regions_, regions) };
    inline GetEdgeContainerAppStatusResponseBodyAppStatus& setRegions(Models::GetEdgeContainerAppStatusResponseBodyAppStatusRegions && regions) { DARABONBA_PTR_SET_RVALUE(regions_, regions) };


    // rollbackTime Field Functions 
    bool hasRollbackTime() const { return this->rollbackTime_ != nullptr;};
    void deleteRollbackTime() { this->rollbackTime_ = nullptr;};
    inline string rollbackTime() const { DARABONBA_PTR_GET_DEFAULT(rollbackTime_, "") };
    inline GetEdgeContainerAppStatusResponseBodyAppStatus& setRollbackTime(string rollbackTime) { DARABONBA_PTR_SET_VALUE(rollbackTime_, rollbackTime) };


    // unDeployTime Field Functions 
    bool hasUnDeployTime() const { return this->unDeployTime_ != nullptr;};
    void deleteUnDeployTime() { this->unDeployTime_ = nullptr;};
    inline string unDeployTime() const { DARABONBA_PTR_GET_DEFAULT(unDeployTime_, "") };
    inline GetEdgeContainerAppStatusResponseBodyAppStatus& setUnDeployTime(string unDeployTime) { DARABONBA_PTR_SET_VALUE(unDeployTime_, unDeployTime) };


  protected:
    // The base version of the application.
    std::shared_ptr<string> baseLineVersion_ = nullptr;
    // The deployment status of the application.
    // 
    // *   **undeploy**: The application is not deployed.
    // *   **deploying**: The application is being deployed.
    // *   **deployed**: The application is deployed.
    // *   **undeploying**: The deployment is being canceled.
    std::shared_ptr<string> deployStatus_ = nullptr;
    // The time when the application was deployed. The time follows the ISO 8601 standard in the YYYY-MM-DDThh:mm:ssZ format. The time is displayed in UTC.
    std::shared_ptr<string> deployTime_ = nullptr;
    // The release version of the application.
    std::shared_ptr<string> deployedVersion_ = nullptr;
    // The expected release percentage of the application.
    std::shared_ptr<int32_t> expectPercentage_ = nullptr;
    // Specifies whether to fully release the version. This parameter takes effect only when PublishType is set to region.
    std::shared_ptr<bool> fullRelease_ = nullptr;
    // The environment to which the application was released. Valid values:
    // 
    // *   **prod**: the production environment.
    // *   **staging**: the staging environment.
    std::shared_ptr<string> publishEnv_ = nullptr;
    // The release percentage of the application.
    std::shared_ptr<int32_t> publishPercentage_ = nullptr;
    // The release status of the application. Valid values:
    // 
    // *   **publishing**
    // *   **published**
    // *   **rollbacking**
    // *   **rollbacked**
    std::shared_ptr<string> publishStatus_ = nullptr;
    // The time when the application was released. The time follows the ISO 8601 standard in the YYYY-MM-DDThh:mm:ssZ format. The time is displayed in UTC.
    std::shared_ptr<string> publishTime_ = nullptr;
    // Specifies how the version is released. Valid values:
    // 
    // *   percentage: releases the version by percentage.
    // *   region: releases the version by region.
    // 
    // If you do not specify this parameter, the version is released by percentage by default.
    std::shared_ptr<string> publishType_ = nullptr;
    // The release version of the application.
    std::shared_ptr<string> publishingVersion_ = nullptr;
    // The regions to which the version is released.
    std::shared_ptr<Models::GetEdgeContainerAppStatusResponseBodyAppStatusRegions> regions_ = nullptr;
    // The time when the last rollback was performed.
    std::shared_ptr<string> rollbackTime_ = nullptr;
    // The time when the application deployment was canceled. The time follows the ISO 8601 standard in the YYYY-MM-DDThh:mm:ssZ format. The time is displayed in UTC.
    std::shared_ptr<string> unDeployTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
