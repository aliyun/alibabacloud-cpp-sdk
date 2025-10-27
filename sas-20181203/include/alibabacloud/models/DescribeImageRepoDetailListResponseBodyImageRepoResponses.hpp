// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIMAGEREPODETAILLISTRESPONSEBODYIMAGEREPORESPONSES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIMAGEREPODETAILLISTRESPONSEBODYIMAGEREPORESPONSES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeImageRepoDetailListResponseBodyImageRepoResponses : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeImageRepoDetailListResponseBodyImageRepoResponses& obj) { 
      DARABONBA_PTR_TO_JSON(AlarmCount, alarmCount_);
      DARABONBA_PTR_TO_JSON(AlarmStatus, alarmStatus_);
      DARABONBA_PTR_TO_JSON(Endpoints, endpoints_);
      DARABONBA_PTR_TO_JSON(HasRiskImageCount, hasRiskImageCount_);
      DARABONBA_PTR_TO_JSON(HcCount, hcCount_);
      DARABONBA_PTR_TO_JSON(HcStatus, hcStatus_);
      DARABONBA_PTR_TO_JSON(ImageCount, imageCount_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RegistryType, registryType_);
      DARABONBA_PTR_TO_JSON(RepoId, repoId_);
      DARABONBA_PTR_TO_JSON(RepoName, repoName_);
      DARABONBA_PTR_TO_JSON(RepoNamespace, repoNamespace_);
      DARABONBA_PTR_TO_JSON(RiskStatus, riskStatus_);
      DARABONBA_PTR_TO_JSON(SourceBizTag, sourceBizTag_);
      DARABONBA_PTR_TO_JSON(VulCount, vulCount_);
      DARABONBA_PTR_TO_JSON(VulStatus, vulStatus_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeImageRepoDetailListResponseBodyImageRepoResponses& obj) { 
      DARABONBA_PTR_FROM_JSON(AlarmCount, alarmCount_);
      DARABONBA_PTR_FROM_JSON(AlarmStatus, alarmStatus_);
      DARABONBA_PTR_FROM_JSON(Endpoints, endpoints_);
      DARABONBA_PTR_FROM_JSON(HasRiskImageCount, hasRiskImageCount_);
      DARABONBA_PTR_FROM_JSON(HcCount, hcCount_);
      DARABONBA_PTR_FROM_JSON(HcStatus, hcStatus_);
      DARABONBA_PTR_FROM_JSON(ImageCount, imageCount_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RegistryType, registryType_);
      DARABONBA_PTR_FROM_JSON(RepoId, repoId_);
      DARABONBA_PTR_FROM_JSON(RepoName, repoName_);
      DARABONBA_PTR_FROM_JSON(RepoNamespace, repoNamespace_);
      DARABONBA_PTR_FROM_JSON(RiskStatus, riskStatus_);
      DARABONBA_PTR_FROM_JSON(SourceBizTag, sourceBizTag_);
      DARABONBA_PTR_FROM_JSON(VulCount, vulCount_);
      DARABONBA_PTR_FROM_JSON(VulStatus, vulStatus_);
    };
    DescribeImageRepoDetailListResponseBodyImageRepoResponses() = default ;
    DescribeImageRepoDetailListResponseBodyImageRepoResponses(const DescribeImageRepoDetailListResponseBodyImageRepoResponses &) = default ;
    DescribeImageRepoDetailListResponseBodyImageRepoResponses(DescribeImageRepoDetailListResponseBodyImageRepoResponses &&) = default ;
    DescribeImageRepoDetailListResponseBodyImageRepoResponses(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeImageRepoDetailListResponseBodyImageRepoResponses() = default ;
    DescribeImageRepoDetailListResponseBodyImageRepoResponses& operator=(const DescribeImageRepoDetailListResponseBodyImageRepoResponses &) = default ;
    DescribeImageRepoDetailListResponseBodyImageRepoResponses& operator=(DescribeImageRepoDetailListResponseBodyImageRepoResponses &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->alarmCount_ == nullptr
        && return this->alarmStatus_ == nullptr && return this->endpoints_ == nullptr && return this->hasRiskImageCount_ == nullptr && return this->hcCount_ == nullptr && return this->hcStatus_ == nullptr
        && return this->imageCount_ == nullptr && return this->instanceId_ == nullptr && return this->regionId_ == nullptr && return this->registryType_ == nullptr && return this->repoId_ == nullptr
        && return this->repoName_ == nullptr && return this->repoNamespace_ == nullptr && return this->riskStatus_ == nullptr && return this->sourceBizTag_ == nullptr && return this->vulCount_ == nullptr
        && return this->vulStatus_ == nullptr; };
    // alarmCount Field Functions 
    bool hasAlarmCount() const { return this->alarmCount_ != nullptr;};
    void deleteAlarmCount() { this->alarmCount_ = nullptr;};
    inline int32_t alarmCount() const { DARABONBA_PTR_GET_DEFAULT(alarmCount_, 0) };
    inline DescribeImageRepoDetailListResponseBodyImageRepoResponses& setAlarmCount(int32_t alarmCount) { DARABONBA_PTR_SET_VALUE(alarmCount_, alarmCount) };


    // alarmStatus Field Functions 
    bool hasAlarmStatus() const { return this->alarmStatus_ != nullptr;};
    void deleteAlarmStatus() { this->alarmStatus_ = nullptr;};
    inline string alarmStatus() const { DARABONBA_PTR_GET_DEFAULT(alarmStatus_, "") };
    inline DescribeImageRepoDetailListResponseBodyImageRepoResponses& setAlarmStatus(string alarmStatus) { DARABONBA_PTR_SET_VALUE(alarmStatus_, alarmStatus) };


    // endpoints Field Functions 
    bool hasEndpoints() const { return this->endpoints_ != nullptr;};
    void deleteEndpoints() { this->endpoints_ = nullptr;};
    inline string endpoints() const { DARABONBA_PTR_GET_DEFAULT(endpoints_, "") };
    inline DescribeImageRepoDetailListResponseBodyImageRepoResponses& setEndpoints(string endpoints) { DARABONBA_PTR_SET_VALUE(endpoints_, endpoints) };


    // hasRiskImageCount Field Functions 
    bool hasHasRiskImageCount() const { return this->hasRiskImageCount_ != nullptr;};
    void deleteHasRiskImageCount() { this->hasRiskImageCount_ = nullptr;};
    inline int32_t hasRiskImageCount() const { DARABONBA_PTR_GET_DEFAULT(hasRiskImageCount_, 0) };
    inline DescribeImageRepoDetailListResponseBodyImageRepoResponses& setHasRiskImageCount(int32_t hasRiskImageCount) { DARABONBA_PTR_SET_VALUE(hasRiskImageCount_, hasRiskImageCount) };


    // hcCount Field Functions 
    bool hasHcCount() const { return this->hcCount_ != nullptr;};
    void deleteHcCount() { this->hcCount_ = nullptr;};
    inline int32_t hcCount() const { DARABONBA_PTR_GET_DEFAULT(hcCount_, 0) };
    inline DescribeImageRepoDetailListResponseBodyImageRepoResponses& setHcCount(int32_t hcCount) { DARABONBA_PTR_SET_VALUE(hcCount_, hcCount) };


    // hcStatus Field Functions 
    bool hasHcStatus() const { return this->hcStatus_ != nullptr;};
    void deleteHcStatus() { this->hcStatus_ = nullptr;};
    inline string hcStatus() const { DARABONBA_PTR_GET_DEFAULT(hcStatus_, "") };
    inline DescribeImageRepoDetailListResponseBodyImageRepoResponses& setHcStatus(string hcStatus) { DARABONBA_PTR_SET_VALUE(hcStatus_, hcStatus) };


    // imageCount Field Functions 
    bool hasImageCount() const { return this->imageCount_ != nullptr;};
    void deleteImageCount() { this->imageCount_ = nullptr;};
    inline int32_t imageCount() const { DARABONBA_PTR_GET_DEFAULT(imageCount_, 0) };
    inline DescribeImageRepoDetailListResponseBodyImageRepoResponses& setImageCount(int32_t imageCount) { DARABONBA_PTR_SET_VALUE(imageCount_, imageCount) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeImageRepoDetailListResponseBodyImageRepoResponses& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeImageRepoDetailListResponseBodyImageRepoResponses& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // registryType Field Functions 
    bool hasRegistryType() const { return this->registryType_ != nullptr;};
    void deleteRegistryType() { this->registryType_ = nullptr;};
    inline string registryType() const { DARABONBA_PTR_GET_DEFAULT(registryType_, "") };
    inline DescribeImageRepoDetailListResponseBodyImageRepoResponses& setRegistryType(string registryType) { DARABONBA_PTR_SET_VALUE(registryType_, registryType) };


    // repoId Field Functions 
    bool hasRepoId() const { return this->repoId_ != nullptr;};
    void deleteRepoId() { this->repoId_ = nullptr;};
    inline string repoId() const { DARABONBA_PTR_GET_DEFAULT(repoId_, "") };
    inline DescribeImageRepoDetailListResponseBodyImageRepoResponses& setRepoId(string repoId) { DARABONBA_PTR_SET_VALUE(repoId_, repoId) };


    // repoName Field Functions 
    bool hasRepoName() const { return this->repoName_ != nullptr;};
    void deleteRepoName() { this->repoName_ = nullptr;};
    inline string repoName() const { DARABONBA_PTR_GET_DEFAULT(repoName_, "") };
    inline DescribeImageRepoDetailListResponseBodyImageRepoResponses& setRepoName(string repoName) { DARABONBA_PTR_SET_VALUE(repoName_, repoName) };


    // repoNamespace Field Functions 
    bool hasRepoNamespace() const { return this->repoNamespace_ != nullptr;};
    void deleteRepoNamespace() { this->repoNamespace_ = nullptr;};
    inline string repoNamespace() const { DARABONBA_PTR_GET_DEFAULT(repoNamespace_, "") };
    inline DescribeImageRepoDetailListResponseBodyImageRepoResponses& setRepoNamespace(string repoNamespace) { DARABONBA_PTR_SET_VALUE(repoNamespace_, repoNamespace) };


    // riskStatus Field Functions 
    bool hasRiskStatus() const { return this->riskStatus_ != nullptr;};
    void deleteRiskStatus() { this->riskStatus_ = nullptr;};
    inline string riskStatus() const { DARABONBA_PTR_GET_DEFAULT(riskStatus_, "") };
    inline DescribeImageRepoDetailListResponseBodyImageRepoResponses& setRiskStatus(string riskStatus) { DARABONBA_PTR_SET_VALUE(riskStatus_, riskStatus) };


    // sourceBizTag Field Functions 
    bool hasSourceBizTag() const { return this->sourceBizTag_ != nullptr;};
    void deleteSourceBizTag() { this->sourceBizTag_ = nullptr;};
    inline string sourceBizTag() const { DARABONBA_PTR_GET_DEFAULT(sourceBizTag_, "") };
    inline DescribeImageRepoDetailListResponseBodyImageRepoResponses& setSourceBizTag(string sourceBizTag) { DARABONBA_PTR_SET_VALUE(sourceBizTag_, sourceBizTag) };


    // vulCount Field Functions 
    bool hasVulCount() const { return this->vulCount_ != nullptr;};
    void deleteVulCount() { this->vulCount_ = nullptr;};
    inline int32_t vulCount() const { DARABONBA_PTR_GET_DEFAULT(vulCount_, 0) };
    inline DescribeImageRepoDetailListResponseBodyImageRepoResponses& setVulCount(int32_t vulCount) { DARABONBA_PTR_SET_VALUE(vulCount_, vulCount) };


    // vulStatus Field Functions 
    bool hasVulStatus() const { return this->vulStatus_ != nullptr;};
    void deleteVulStatus() { this->vulStatus_ = nullptr;};
    inline string vulStatus() const { DARABONBA_PTR_GET_DEFAULT(vulStatus_, "") };
    inline DescribeImageRepoDetailListResponseBodyImageRepoResponses& setVulStatus(string vulStatus) { DARABONBA_PTR_SET_VALUE(vulStatus_, vulStatus) };


  protected:
    // The number of alerts that are generated for the image repository.
    std::shared_ptr<int32_t> alarmCount_ = nullptr;
    // Indicates whether alerts are generated for the image repository. Valid values:
    // 
    // *   **YES**
    // *   **NO**
    std::shared_ptr<string> alarmStatus_ = nullptr;
    // The address of the image repository.
    std::shared_ptr<string> endpoints_ = nullptr;
    // The number of the images on which risks are detected.
    std::shared_ptr<int32_t> hasRiskImageCount_ = nullptr;
    // The number of baseline risk items on the image repository.
    std::shared_ptr<int32_t> hcCount_ = nullptr;
    // Indicates whether baseline risk items are detected on the image repository. Valid values:
    // 
    // *   **NO**
    // *   **YES**
    std::shared_ptr<string> hcStatus_ = nullptr;
    // The number of images.
    std::shared_ptr<int32_t> imageCount_ = nullptr;
    // The ID of the image.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The region ID of the image.
    std::shared_ptr<string> regionId_ = nullptr;
    // The type of the image repository. Valid values:
    // 
    // *   **acr**
    // *   **harbor**
    // *   **quay**
    // *   **CI/CD**
    std::shared_ptr<string> registryType_ = nullptr;
    // The ID of the image repository.
    std::shared_ptr<string> repoId_ = nullptr;
    // The name of the image repository.
    std::shared_ptr<string> repoName_ = nullptr;
    // The namespace to which the image repository belongs.
    std::shared_ptr<string> repoNamespace_ = nullptr;
    // Indicates whether the image repository is at risk. Valid values:
    // 
    // *   **YES**
    // *   **NO**
    std::shared_ptr<string> riskStatus_ = nullptr;
    // The usage label of the image.
    std::shared_ptr<string> sourceBizTag_ = nullptr;
    // The number of vulnerabilities detected on the image repository.
    std::shared_ptr<int32_t> vulCount_ = nullptr;
    // Indicates whether vulnerabilities are detected on the image repository. Valid values:
    // 
    // *   **YES**
    // *   **NO**
    std::shared_ptr<string> vulStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
