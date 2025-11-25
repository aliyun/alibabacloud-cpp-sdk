// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEMULTIUSERINSTANCESREQUESTMEMBERINSTANCES_HPP_
#define ALIBABACLOUD_MODELS_UPDATEMULTIUSERINSTANCESREQUESTMEMBERINSTANCES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateMultiUserInstancesRequestMemberInstancesVersionSummary.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class UpdateMultiUserInstancesRequestMemberInstances : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateMultiUserInstancesRequestMemberInstances& obj) { 
      DARABONBA_PTR_TO_JSON(AliUid, aliUid_);
      DARABONBA_PTR_TO_JSON(AntiRansomwareCapacity, antiRansomwareCapacity_);
      DARABONBA_PTR_TO_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_TO_JSON(CspmCapacity, cspmCapacity_);
      DARABONBA_PTR_TO_JSON(HoneypotCapacity, honeypotCapacity_);
      DARABONBA_PTR_TO_JSON(ImageScanCapacity, imageScanCapacity_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(OptType, optType_);
      DARABONBA_PTR_TO_JSON(RaspCapacity, raspCapacity_);
      DARABONBA_PTR_TO_JSON(SdkCapacity, sdkCapacity_);
      DARABONBA_PTR_TO_JSON(SlsCapacity, slsCapacity_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(ThreatAnalysisCapacity, threatAnalysisCapacity_);
      DARABONBA_PTR_TO_JSON(ThreatAnalysisFlow, threatAnalysisFlow_);
      DARABONBA_PTR_TO_JSON(Version, version_);
      DARABONBA_PTR_TO_JSON(VersionSummary, versionSummary_);
      DARABONBA_PTR_TO_JSON(WebLockCapacity, webLockCapacity_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateMultiUserInstancesRequestMemberInstances& obj) { 
      DARABONBA_PTR_FROM_JSON(AliUid, aliUid_);
      DARABONBA_PTR_FROM_JSON(AntiRansomwareCapacity, antiRansomwareCapacity_);
      DARABONBA_PTR_FROM_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_FROM_JSON(CspmCapacity, cspmCapacity_);
      DARABONBA_PTR_FROM_JSON(HoneypotCapacity, honeypotCapacity_);
      DARABONBA_PTR_FROM_JSON(ImageScanCapacity, imageScanCapacity_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(OptType, optType_);
      DARABONBA_PTR_FROM_JSON(RaspCapacity, raspCapacity_);
      DARABONBA_PTR_FROM_JSON(SdkCapacity, sdkCapacity_);
      DARABONBA_PTR_FROM_JSON(SlsCapacity, slsCapacity_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(ThreatAnalysisCapacity, threatAnalysisCapacity_);
      DARABONBA_PTR_FROM_JSON(ThreatAnalysisFlow, threatAnalysisFlow_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
      DARABONBA_PTR_FROM_JSON(VersionSummary, versionSummary_);
      DARABONBA_PTR_FROM_JSON(WebLockCapacity, webLockCapacity_);
    };
    UpdateMultiUserInstancesRequestMemberInstances() = default ;
    UpdateMultiUserInstancesRequestMemberInstances(const UpdateMultiUserInstancesRequestMemberInstances &) = default ;
    UpdateMultiUserInstancesRequestMemberInstances(UpdateMultiUserInstancesRequestMemberInstances &&) = default ;
    UpdateMultiUserInstancesRequestMemberInstances(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateMultiUserInstancesRequestMemberInstances() = default ;
    UpdateMultiUserInstancesRequestMemberInstances& operator=(const UpdateMultiUserInstancesRequestMemberInstances &) = default ;
    UpdateMultiUserInstancesRequestMemberInstances& operator=(UpdateMultiUserInstancesRequestMemberInstances &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aliUid_ == nullptr
        && return this->antiRansomwareCapacity_ == nullptr && return this->chargeType_ == nullptr && return this->cspmCapacity_ == nullptr && return this->honeypotCapacity_ == nullptr && return this->imageScanCapacity_ == nullptr
        && return this->instanceId_ == nullptr && return this->optType_ == nullptr && return this->raspCapacity_ == nullptr && return this->sdkCapacity_ == nullptr && return this->slsCapacity_ == nullptr
        && return this->status_ == nullptr && return this->threatAnalysisCapacity_ == nullptr && return this->threatAnalysisFlow_ == nullptr && return this->version_ == nullptr && return this->versionSummary_ == nullptr
        && return this->webLockCapacity_ == nullptr; };
    // aliUid Field Functions 
    bool hasAliUid() const { return this->aliUid_ != nullptr;};
    void deleteAliUid() { this->aliUid_ = nullptr;};
    inline int64_t aliUid() const { DARABONBA_PTR_GET_DEFAULT(aliUid_, 0L) };
    inline UpdateMultiUserInstancesRequestMemberInstances& setAliUid(int64_t aliUid) { DARABONBA_PTR_SET_VALUE(aliUid_, aliUid) };


    // antiRansomwareCapacity Field Functions 
    bool hasAntiRansomwareCapacity() const { return this->antiRansomwareCapacity_ != nullptr;};
    void deleteAntiRansomwareCapacity() { this->antiRansomwareCapacity_ = nullptr;};
    inline int64_t antiRansomwareCapacity() const { DARABONBA_PTR_GET_DEFAULT(antiRansomwareCapacity_, 0L) };
    inline UpdateMultiUserInstancesRequestMemberInstances& setAntiRansomwareCapacity(int64_t antiRansomwareCapacity) { DARABONBA_PTR_SET_VALUE(antiRansomwareCapacity_, antiRansomwareCapacity) };


    // chargeType Field Functions 
    bool hasChargeType() const { return this->chargeType_ != nullptr;};
    void deleteChargeType() { this->chargeType_ = nullptr;};
    inline string chargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
    inline UpdateMultiUserInstancesRequestMemberInstances& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


    // cspmCapacity Field Functions 
    bool hasCspmCapacity() const { return this->cspmCapacity_ != nullptr;};
    void deleteCspmCapacity() { this->cspmCapacity_ = nullptr;};
    inline int64_t cspmCapacity() const { DARABONBA_PTR_GET_DEFAULT(cspmCapacity_, 0L) };
    inline UpdateMultiUserInstancesRequestMemberInstances& setCspmCapacity(int64_t cspmCapacity) { DARABONBA_PTR_SET_VALUE(cspmCapacity_, cspmCapacity) };


    // honeypotCapacity Field Functions 
    bool hasHoneypotCapacity() const { return this->honeypotCapacity_ != nullptr;};
    void deleteHoneypotCapacity() { this->honeypotCapacity_ = nullptr;};
    inline int64_t honeypotCapacity() const { DARABONBA_PTR_GET_DEFAULT(honeypotCapacity_, 0L) };
    inline UpdateMultiUserInstancesRequestMemberInstances& setHoneypotCapacity(int64_t honeypotCapacity) { DARABONBA_PTR_SET_VALUE(honeypotCapacity_, honeypotCapacity) };


    // imageScanCapacity Field Functions 
    bool hasImageScanCapacity() const { return this->imageScanCapacity_ != nullptr;};
    void deleteImageScanCapacity() { this->imageScanCapacity_ = nullptr;};
    inline int64_t imageScanCapacity() const { DARABONBA_PTR_GET_DEFAULT(imageScanCapacity_, 0L) };
    inline UpdateMultiUserInstancesRequestMemberInstances& setImageScanCapacity(int64_t imageScanCapacity) { DARABONBA_PTR_SET_VALUE(imageScanCapacity_, imageScanCapacity) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline UpdateMultiUserInstancesRequestMemberInstances& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // optType Field Functions 
    bool hasOptType() const { return this->optType_ != nullptr;};
    void deleteOptType() { this->optType_ = nullptr;};
    inline string optType() const { DARABONBA_PTR_GET_DEFAULT(optType_, "") };
    inline UpdateMultiUserInstancesRequestMemberInstances& setOptType(string optType) { DARABONBA_PTR_SET_VALUE(optType_, optType) };


    // raspCapacity Field Functions 
    bool hasRaspCapacity() const { return this->raspCapacity_ != nullptr;};
    void deleteRaspCapacity() { this->raspCapacity_ = nullptr;};
    inline int64_t raspCapacity() const { DARABONBA_PTR_GET_DEFAULT(raspCapacity_, 0L) };
    inline UpdateMultiUserInstancesRequestMemberInstances& setRaspCapacity(int64_t raspCapacity) { DARABONBA_PTR_SET_VALUE(raspCapacity_, raspCapacity) };


    // sdkCapacity Field Functions 
    bool hasSdkCapacity() const { return this->sdkCapacity_ != nullptr;};
    void deleteSdkCapacity() { this->sdkCapacity_ = nullptr;};
    inline int64_t sdkCapacity() const { DARABONBA_PTR_GET_DEFAULT(sdkCapacity_, 0L) };
    inline UpdateMultiUserInstancesRequestMemberInstances& setSdkCapacity(int64_t sdkCapacity) { DARABONBA_PTR_SET_VALUE(sdkCapacity_, sdkCapacity) };


    // slsCapacity Field Functions 
    bool hasSlsCapacity() const { return this->slsCapacity_ != nullptr;};
    void deleteSlsCapacity() { this->slsCapacity_ = nullptr;};
    inline int64_t slsCapacity() const { DARABONBA_PTR_GET_DEFAULT(slsCapacity_, 0L) };
    inline UpdateMultiUserInstancesRequestMemberInstances& setSlsCapacity(int64_t slsCapacity) { DARABONBA_PTR_SET_VALUE(slsCapacity_, slsCapacity) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline UpdateMultiUserInstancesRequestMemberInstances& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // threatAnalysisCapacity Field Functions 
    bool hasThreatAnalysisCapacity() const { return this->threatAnalysisCapacity_ != nullptr;};
    void deleteThreatAnalysisCapacity() { this->threatAnalysisCapacity_ = nullptr;};
    inline int64_t threatAnalysisCapacity() const { DARABONBA_PTR_GET_DEFAULT(threatAnalysisCapacity_, 0L) };
    inline UpdateMultiUserInstancesRequestMemberInstances& setThreatAnalysisCapacity(int64_t threatAnalysisCapacity) { DARABONBA_PTR_SET_VALUE(threatAnalysisCapacity_, threatAnalysisCapacity) };


    // threatAnalysisFlow Field Functions 
    bool hasThreatAnalysisFlow() const { return this->threatAnalysisFlow_ != nullptr;};
    void deleteThreatAnalysisFlow() { this->threatAnalysisFlow_ = nullptr;};
    inline int64_t threatAnalysisFlow() const { DARABONBA_PTR_GET_DEFAULT(threatAnalysisFlow_, 0L) };
    inline UpdateMultiUserInstancesRequestMemberInstances& setThreatAnalysisFlow(int64_t threatAnalysisFlow) { DARABONBA_PTR_SET_VALUE(threatAnalysisFlow_, threatAnalysisFlow) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string version() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline UpdateMultiUserInstancesRequestMemberInstances& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    // versionSummary Field Functions 
    bool hasVersionSummary() const { return this->versionSummary_ != nullptr;};
    void deleteVersionSummary() { this->versionSummary_ = nullptr;};
    inline const vector<Models::UpdateMultiUserInstancesRequestMemberInstancesVersionSummary> & versionSummary() const { DARABONBA_PTR_GET_CONST(versionSummary_, vector<Models::UpdateMultiUserInstancesRequestMemberInstancesVersionSummary>) };
    inline vector<Models::UpdateMultiUserInstancesRequestMemberInstancesVersionSummary> versionSummary() { DARABONBA_PTR_GET(versionSummary_, vector<Models::UpdateMultiUserInstancesRequestMemberInstancesVersionSummary>) };
    inline UpdateMultiUserInstancesRequestMemberInstances& setVersionSummary(const vector<Models::UpdateMultiUserInstancesRequestMemberInstancesVersionSummary> & versionSummary) { DARABONBA_PTR_SET_VALUE(versionSummary_, versionSummary) };
    inline UpdateMultiUserInstancesRequestMemberInstances& setVersionSummary(vector<Models::UpdateMultiUserInstancesRequestMemberInstancesVersionSummary> && versionSummary) { DARABONBA_PTR_SET_RVALUE(versionSummary_, versionSummary) };


    // webLockCapacity Field Functions 
    bool hasWebLockCapacity() const { return this->webLockCapacity_ != nullptr;};
    void deleteWebLockCapacity() { this->webLockCapacity_ = nullptr;};
    inline int64_t webLockCapacity() const { DARABONBA_PTR_GET_DEFAULT(webLockCapacity_, 0L) };
    inline UpdateMultiUserInstancesRequestMemberInstances& setWebLockCapacity(int64_t webLockCapacity) { DARABONBA_PTR_SET_VALUE(webLockCapacity_, webLockCapacity) };


  protected:
    std::shared_ptr<int64_t> aliUid_ = nullptr;
    std::shared_ptr<int64_t> antiRansomwareCapacity_ = nullptr;
    std::shared_ptr<string> chargeType_ = nullptr;
    std::shared_ptr<int64_t> cspmCapacity_ = nullptr;
    std::shared_ptr<int64_t> honeypotCapacity_ = nullptr;
    std::shared_ptr<int64_t> imageScanCapacity_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> optType_ = nullptr;
    std::shared_ptr<int64_t> raspCapacity_ = nullptr;
    std::shared_ptr<int64_t> sdkCapacity_ = nullptr;
    std::shared_ptr<int64_t> slsCapacity_ = nullptr;
    std::shared_ptr<int32_t> status_ = nullptr;
    std::shared_ptr<int64_t> threatAnalysisCapacity_ = nullptr;
    std::shared_ptr<int64_t> threatAnalysisFlow_ = nullptr;
    std::shared_ptr<string> version_ = nullptr;
    std::shared_ptr<vector<Models::UpdateMultiUserInstancesRequestMemberInstancesVersionSummary>> versionSummary_ = nullptr;
    std::shared_ptr<int64_t> webLockCapacity_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
