// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMULTIUSERINSTANCESRESPONSEBODYDAINSTANCE_HPP_
#define ALIBABACLOUD_MODELS_LISTMULTIUSERINSTANCESRESPONSEBODYDAINSTANCE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListMultiUserInstancesResponseBodyDaInstanceAntiRansomwareCapacity.hpp>
#include <alibabacloud/models/ListMultiUserInstancesResponseBodyDaInstanceCspmCapacity.hpp>
#include <alibabacloud/models/ListMultiUserInstancesResponseBodyDaInstanceHoneypotCapacity.hpp>
#include <alibabacloud/models/ListMultiUserInstancesResponseBodyDaInstanceImageScanCapacity.hpp>
#include <alibabacloud/models/ListMultiUserInstancesResponseBodyDaInstanceRaspCapacity.hpp>
#include <alibabacloud/models/ListMultiUserInstancesResponseBodyDaInstanceSdkCapacity.hpp>
#include <alibabacloud/models/ListMultiUserInstancesResponseBodyDaInstanceSlsCapacity.hpp>
#include <alibabacloud/models/ListMultiUserInstancesResponseBodyDaInstanceThreatAnalysisCapacity.hpp>
#include <alibabacloud/models/ListMultiUserInstancesResponseBodyDaInstanceThreatAnalysisFlow.hpp>
#include <vector>
#include <alibabacloud/models/ListMultiUserInstancesResponseBodyDaInstanceVersionSummary.hpp>
#include <alibabacloud/models/ListMultiUserInstancesResponseBodyDaInstanceWebLockCapacity.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListMultiUserInstancesResponseBodyDaInstance : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMultiUserInstancesResponseBodyDaInstance& obj) { 
      DARABONBA_PTR_TO_JSON(AliUid, aliUid_);
      DARABONBA_PTR_TO_JSON(AntiRansomwareCapacity, antiRansomwareCapacity_);
      DARABONBA_PTR_TO_JSON(CspmCapacity, cspmCapacity_);
      DARABONBA_PTR_TO_JSON(HoneypotCapacity, honeypotCapacity_);
      DARABONBA_PTR_TO_JSON(ImageScanCapacity, imageScanCapacity_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstancePurchaseType, instancePurchaseType_);
      DARABONBA_PTR_TO_JSON(RaspCapacity, raspCapacity_);
      DARABONBA_PTR_TO_JSON(SdkCapacity, sdkCapacity_);
      DARABONBA_PTR_TO_JSON(SlsCapacity, slsCapacity_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(ThreatAnalysisCapacity, threatAnalysisCapacity_);
      DARABONBA_PTR_TO_JSON(ThreatAnalysisFlow, threatAnalysisFlow_);
      DARABONBA_PTR_TO_JSON(UserType, userType_);
      DARABONBA_PTR_TO_JSON(Version, version_);
      DARABONBA_PTR_TO_JSON(VersionSummary, versionSummary_);
      DARABONBA_PTR_TO_JSON(WebLockCapacity, webLockCapacity_);
    };
    friend void from_json(const Darabonba::Json& j, ListMultiUserInstancesResponseBodyDaInstance& obj) { 
      DARABONBA_PTR_FROM_JSON(AliUid, aliUid_);
      DARABONBA_PTR_FROM_JSON(AntiRansomwareCapacity, antiRansomwareCapacity_);
      DARABONBA_PTR_FROM_JSON(CspmCapacity, cspmCapacity_);
      DARABONBA_PTR_FROM_JSON(HoneypotCapacity, honeypotCapacity_);
      DARABONBA_PTR_FROM_JSON(ImageScanCapacity, imageScanCapacity_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstancePurchaseType, instancePurchaseType_);
      DARABONBA_PTR_FROM_JSON(RaspCapacity, raspCapacity_);
      DARABONBA_PTR_FROM_JSON(SdkCapacity, sdkCapacity_);
      DARABONBA_PTR_FROM_JSON(SlsCapacity, slsCapacity_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(ThreatAnalysisCapacity, threatAnalysisCapacity_);
      DARABONBA_PTR_FROM_JSON(ThreatAnalysisFlow, threatAnalysisFlow_);
      DARABONBA_PTR_FROM_JSON(UserType, userType_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
      DARABONBA_PTR_FROM_JSON(VersionSummary, versionSummary_);
      DARABONBA_PTR_FROM_JSON(WebLockCapacity, webLockCapacity_);
    };
    ListMultiUserInstancesResponseBodyDaInstance() = default ;
    ListMultiUserInstancesResponseBodyDaInstance(const ListMultiUserInstancesResponseBodyDaInstance &) = default ;
    ListMultiUserInstancesResponseBodyDaInstance(ListMultiUserInstancesResponseBodyDaInstance &&) = default ;
    ListMultiUserInstancesResponseBodyDaInstance(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMultiUserInstancesResponseBodyDaInstance() = default ;
    ListMultiUserInstancesResponseBodyDaInstance& operator=(const ListMultiUserInstancesResponseBodyDaInstance &) = default ;
    ListMultiUserInstancesResponseBodyDaInstance& operator=(ListMultiUserInstancesResponseBodyDaInstance &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aliUid_ == nullptr
        && return this->antiRansomwareCapacity_ == nullptr && return this->cspmCapacity_ == nullptr && return this->honeypotCapacity_ == nullptr && return this->imageScanCapacity_ == nullptr && return this->instanceId_ == nullptr
        && return this->instancePurchaseType_ == nullptr && return this->raspCapacity_ == nullptr && return this->sdkCapacity_ == nullptr && return this->slsCapacity_ == nullptr && return this->status_ == nullptr
        && return this->threatAnalysisCapacity_ == nullptr && return this->threatAnalysisFlow_ == nullptr && return this->userType_ == nullptr && return this->version_ == nullptr && return this->versionSummary_ == nullptr
        && return this->webLockCapacity_ == nullptr; };
    // aliUid Field Functions 
    bool hasAliUid() const { return this->aliUid_ != nullptr;};
    void deleteAliUid() { this->aliUid_ = nullptr;};
    inline int64_t aliUid() const { DARABONBA_PTR_GET_DEFAULT(aliUid_, 0L) };
    inline ListMultiUserInstancesResponseBodyDaInstance& setAliUid(int64_t aliUid) { DARABONBA_PTR_SET_VALUE(aliUid_, aliUid) };


    // antiRansomwareCapacity Field Functions 
    bool hasAntiRansomwareCapacity() const { return this->antiRansomwareCapacity_ != nullptr;};
    void deleteAntiRansomwareCapacity() { this->antiRansomwareCapacity_ = nullptr;};
    inline const Models::ListMultiUserInstancesResponseBodyDaInstanceAntiRansomwareCapacity & antiRansomwareCapacity() const { DARABONBA_PTR_GET_CONST(antiRansomwareCapacity_, Models::ListMultiUserInstancesResponseBodyDaInstanceAntiRansomwareCapacity) };
    inline Models::ListMultiUserInstancesResponseBodyDaInstanceAntiRansomwareCapacity antiRansomwareCapacity() { DARABONBA_PTR_GET(antiRansomwareCapacity_, Models::ListMultiUserInstancesResponseBodyDaInstanceAntiRansomwareCapacity) };
    inline ListMultiUserInstancesResponseBodyDaInstance& setAntiRansomwareCapacity(const Models::ListMultiUserInstancesResponseBodyDaInstanceAntiRansomwareCapacity & antiRansomwareCapacity) { DARABONBA_PTR_SET_VALUE(antiRansomwareCapacity_, antiRansomwareCapacity) };
    inline ListMultiUserInstancesResponseBodyDaInstance& setAntiRansomwareCapacity(Models::ListMultiUserInstancesResponseBodyDaInstanceAntiRansomwareCapacity && antiRansomwareCapacity) { DARABONBA_PTR_SET_RVALUE(antiRansomwareCapacity_, antiRansomwareCapacity) };


    // cspmCapacity Field Functions 
    bool hasCspmCapacity() const { return this->cspmCapacity_ != nullptr;};
    void deleteCspmCapacity() { this->cspmCapacity_ = nullptr;};
    inline const Models::ListMultiUserInstancesResponseBodyDaInstanceCspmCapacity & cspmCapacity() const { DARABONBA_PTR_GET_CONST(cspmCapacity_, Models::ListMultiUserInstancesResponseBodyDaInstanceCspmCapacity) };
    inline Models::ListMultiUserInstancesResponseBodyDaInstanceCspmCapacity cspmCapacity() { DARABONBA_PTR_GET(cspmCapacity_, Models::ListMultiUserInstancesResponseBodyDaInstanceCspmCapacity) };
    inline ListMultiUserInstancesResponseBodyDaInstance& setCspmCapacity(const Models::ListMultiUserInstancesResponseBodyDaInstanceCspmCapacity & cspmCapacity) { DARABONBA_PTR_SET_VALUE(cspmCapacity_, cspmCapacity) };
    inline ListMultiUserInstancesResponseBodyDaInstance& setCspmCapacity(Models::ListMultiUserInstancesResponseBodyDaInstanceCspmCapacity && cspmCapacity) { DARABONBA_PTR_SET_RVALUE(cspmCapacity_, cspmCapacity) };


    // honeypotCapacity Field Functions 
    bool hasHoneypotCapacity() const { return this->honeypotCapacity_ != nullptr;};
    void deleteHoneypotCapacity() { this->honeypotCapacity_ = nullptr;};
    inline const Models::ListMultiUserInstancesResponseBodyDaInstanceHoneypotCapacity & honeypotCapacity() const { DARABONBA_PTR_GET_CONST(honeypotCapacity_, Models::ListMultiUserInstancesResponseBodyDaInstanceHoneypotCapacity) };
    inline Models::ListMultiUserInstancesResponseBodyDaInstanceHoneypotCapacity honeypotCapacity() { DARABONBA_PTR_GET(honeypotCapacity_, Models::ListMultiUserInstancesResponseBodyDaInstanceHoneypotCapacity) };
    inline ListMultiUserInstancesResponseBodyDaInstance& setHoneypotCapacity(const Models::ListMultiUserInstancesResponseBodyDaInstanceHoneypotCapacity & honeypotCapacity) { DARABONBA_PTR_SET_VALUE(honeypotCapacity_, honeypotCapacity) };
    inline ListMultiUserInstancesResponseBodyDaInstance& setHoneypotCapacity(Models::ListMultiUserInstancesResponseBodyDaInstanceHoneypotCapacity && honeypotCapacity) { DARABONBA_PTR_SET_RVALUE(honeypotCapacity_, honeypotCapacity) };


    // imageScanCapacity Field Functions 
    bool hasImageScanCapacity() const { return this->imageScanCapacity_ != nullptr;};
    void deleteImageScanCapacity() { this->imageScanCapacity_ = nullptr;};
    inline const Models::ListMultiUserInstancesResponseBodyDaInstanceImageScanCapacity & imageScanCapacity() const { DARABONBA_PTR_GET_CONST(imageScanCapacity_, Models::ListMultiUserInstancesResponseBodyDaInstanceImageScanCapacity) };
    inline Models::ListMultiUserInstancesResponseBodyDaInstanceImageScanCapacity imageScanCapacity() { DARABONBA_PTR_GET(imageScanCapacity_, Models::ListMultiUserInstancesResponseBodyDaInstanceImageScanCapacity) };
    inline ListMultiUserInstancesResponseBodyDaInstance& setImageScanCapacity(const Models::ListMultiUserInstancesResponseBodyDaInstanceImageScanCapacity & imageScanCapacity) { DARABONBA_PTR_SET_VALUE(imageScanCapacity_, imageScanCapacity) };
    inline ListMultiUserInstancesResponseBodyDaInstance& setImageScanCapacity(Models::ListMultiUserInstancesResponseBodyDaInstanceImageScanCapacity && imageScanCapacity) { DARABONBA_PTR_SET_RVALUE(imageScanCapacity_, imageScanCapacity) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListMultiUserInstancesResponseBodyDaInstance& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instancePurchaseType Field Functions 
    bool hasInstancePurchaseType() const { return this->instancePurchaseType_ != nullptr;};
    void deleteInstancePurchaseType() { this->instancePurchaseType_ = nullptr;};
    inline int32_t instancePurchaseType() const { DARABONBA_PTR_GET_DEFAULT(instancePurchaseType_, 0) };
    inline ListMultiUserInstancesResponseBodyDaInstance& setInstancePurchaseType(int32_t instancePurchaseType) { DARABONBA_PTR_SET_VALUE(instancePurchaseType_, instancePurchaseType) };


    // raspCapacity Field Functions 
    bool hasRaspCapacity() const { return this->raspCapacity_ != nullptr;};
    void deleteRaspCapacity() { this->raspCapacity_ = nullptr;};
    inline const Models::ListMultiUserInstancesResponseBodyDaInstanceRaspCapacity & raspCapacity() const { DARABONBA_PTR_GET_CONST(raspCapacity_, Models::ListMultiUserInstancesResponseBodyDaInstanceRaspCapacity) };
    inline Models::ListMultiUserInstancesResponseBodyDaInstanceRaspCapacity raspCapacity() { DARABONBA_PTR_GET(raspCapacity_, Models::ListMultiUserInstancesResponseBodyDaInstanceRaspCapacity) };
    inline ListMultiUserInstancesResponseBodyDaInstance& setRaspCapacity(const Models::ListMultiUserInstancesResponseBodyDaInstanceRaspCapacity & raspCapacity) { DARABONBA_PTR_SET_VALUE(raspCapacity_, raspCapacity) };
    inline ListMultiUserInstancesResponseBodyDaInstance& setRaspCapacity(Models::ListMultiUserInstancesResponseBodyDaInstanceRaspCapacity && raspCapacity) { DARABONBA_PTR_SET_RVALUE(raspCapacity_, raspCapacity) };


    // sdkCapacity Field Functions 
    bool hasSdkCapacity() const { return this->sdkCapacity_ != nullptr;};
    void deleteSdkCapacity() { this->sdkCapacity_ = nullptr;};
    inline const Models::ListMultiUserInstancesResponseBodyDaInstanceSdkCapacity & sdkCapacity() const { DARABONBA_PTR_GET_CONST(sdkCapacity_, Models::ListMultiUserInstancesResponseBodyDaInstanceSdkCapacity) };
    inline Models::ListMultiUserInstancesResponseBodyDaInstanceSdkCapacity sdkCapacity() { DARABONBA_PTR_GET(sdkCapacity_, Models::ListMultiUserInstancesResponseBodyDaInstanceSdkCapacity) };
    inline ListMultiUserInstancesResponseBodyDaInstance& setSdkCapacity(const Models::ListMultiUserInstancesResponseBodyDaInstanceSdkCapacity & sdkCapacity) { DARABONBA_PTR_SET_VALUE(sdkCapacity_, sdkCapacity) };
    inline ListMultiUserInstancesResponseBodyDaInstance& setSdkCapacity(Models::ListMultiUserInstancesResponseBodyDaInstanceSdkCapacity && sdkCapacity) { DARABONBA_PTR_SET_RVALUE(sdkCapacity_, sdkCapacity) };


    // slsCapacity Field Functions 
    bool hasSlsCapacity() const { return this->slsCapacity_ != nullptr;};
    void deleteSlsCapacity() { this->slsCapacity_ = nullptr;};
    inline const Models::ListMultiUserInstancesResponseBodyDaInstanceSlsCapacity & slsCapacity() const { DARABONBA_PTR_GET_CONST(slsCapacity_, Models::ListMultiUserInstancesResponseBodyDaInstanceSlsCapacity) };
    inline Models::ListMultiUserInstancesResponseBodyDaInstanceSlsCapacity slsCapacity() { DARABONBA_PTR_GET(slsCapacity_, Models::ListMultiUserInstancesResponseBodyDaInstanceSlsCapacity) };
    inline ListMultiUserInstancesResponseBodyDaInstance& setSlsCapacity(const Models::ListMultiUserInstancesResponseBodyDaInstanceSlsCapacity & slsCapacity) { DARABONBA_PTR_SET_VALUE(slsCapacity_, slsCapacity) };
    inline ListMultiUserInstancesResponseBodyDaInstance& setSlsCapacity(Models::ListMultiUserInstancesResponseBodyDaInstanceSlsCapacity && slsCapacity) { DARABONBA_PTR_SET_RVALUE(slsCapacity_, slsCapacity) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline ListMultiUserInstancesResponseBodyDaInstance& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // threatAnalysisCapacity Field Functions 
    bool hasThreatAnalysisCapacity() const { return this->threatAnalysisCapacity_ != nullptr;};
    void deleteThreatAnalysisCapacity() { this->threatAnalysisCapacity_ = nullptr;};
    inline const Models::ListMultiUserInstancesResponseBodyDaInstanceThreatAnalysisCapacity & threatAnalysisCapacity() const { DARABONBA_PTR_GET_CONST(threatAnalysisCapacity_, Models::ListMultiUserInstancesResponseBodyDaInstanceThreatAnalysisCapacity) };
    inline Models::ListMultiUserInstancesResponseBodyDaInstanceThreatAnalysisCapacity threatAnalysisCapacity() { DARABONBA_PTR_GET(threatAnalysisCapacity_, Models::ListMultiUserInstancesResponseBodyDaInstanceThreatAnalysisCapacity) };
    inline ListMultiUserInstancesResponseBodyDaInstance& setThreatAnalysisCapacity(const Models::ListMultiUserInstancesResponseBodyDaInstanceThreatAnalysisCapacity & threatAnalysisCapacity) { DARABONBA_PTR_SET_VALUE(threatAnalysisCapacity_, threatAnalysisCapacity) };
    inline ListMultiUserInstancesResponseBodyDaInstance& setThreatAnalysisCapacity(Models::ListMultiUserInstancesResponseBodyDaInstanceThreatAnalysisCapacity && threatAnalysisCapacity) { DARABONBA_PTR_SET_RVALUE(threatAnalysisCapacity_, threatAnalysisCapacity) };


    // threatAnalysisFlow Field Functions 
    bool hasThreatAnalysisFlow() const { return this->threatAnalysisFlow_ != nullptr;};
    void deleteThreatAnalysisFlow() { this->threatAnalysisFlow_ = nullptr;};
    inline const Models::ListMultiUserInstancesResponseBodyDaInstanceThreatAnalysisFlow & threatAnalysisFlow() const { DARABONBA_PTR_GET_CONST(threatAnalysisFlow_, Models::ListMultiUserInstancesResponseBodyDaInstanceThreatAnalysisFlow) };
    inline Models::ListMultiUserInstancesResponseBodyDaInstanceThreatAnalysisFlow threatAnalysisFlow() { DARABONBA_PTR_GET(threatAnalysisFlow_, Models::ListMultiUserInstancesResponseBodyDaInstanceThreatAnalysisFlow) };
    inline ListMultiUserInstancesResponseBodyDaInstance& setThreatAnalysisFlow(const Models::ListMultiUserInstancesResponseBodyDaInstanceThreatAnalysisFlow & threatAnalysisFlow) { DARABONBA_PTR_SET_VALUE(threatAnalysisFlow_, threatAnalysisFlow) };
    inline ListMultiUserInstancesResponseBodyDaInstance& setThreatAnalysisFlow(Models::ListMultiUserInstancesResponseBodyDaInstanceThreatAnalysisFlow && threatAnalysisFlow) { DARABONBA_PTR_SET_RVALUE(threatAnalysisFlow_, threatAnalysisFlow) };


    // userType Field Functions 
    bool hasUserType() const { return this->userType_ != nullptr;};
    void deleteUserType() { this->userType_ = nullptr;};
    inline int32_t userType() const { DARABONBA_PTR_GET_DEFAULT(userType_, 0) };
    inline ListMultiUserInstancesResponseBodyDaInstance& setUserType(int32_t userType) { DARABONBA_PTR_SET_VALUE(userType_, userType) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline int32_t version() const { DARABONBA_PTR_GET_DEFAULT(version_, 0) };
    inline ListMultiUserInstancesResponseBodyDaInstance& setVersion(int32_t version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    // versionSummary Field Functions 
    bool hasVersionSummary() const { return this->versionSummary_ != nullptr;};
    void deleteVersionSummary() { this->versionSummary_ = nullptr;};
    inline const vector<Models::ListMultiUserInstancesResponseBodyDaInstanceVersionSummary> & versionSummary() const { DARABONBA_PTR_GET_CONST(versionSummary_, vector<Models::ListMultiUserInstancesResponseBodyDaInstanceVersionSummary>) };
    inline vector<Models::ListMultiUserInstancesResponseBodyDaInstanceVersionSummary> versionSummary() { DARABONBA_PTR_GET(versionSummary_, vector<Models::ListMultiUserInstancesResponseBodyDaInstanceVersionSummary>) };
    inline ListMultiUserInstancesResponseBodyDaInstance& setVersionSummary(const vector<Models::ListMultiUserInstancesResponseBodyDaInstanceVersionSummary> & versionSummary) { DARABONBA_PTR_SET_VALUE(versionSummary_, versionSummary) };
    inline ListMultiUserInstancesResponseBodyDaInstance& setVersionSummary(vector<Models::ListMultiUserInstancesResponseBodyDaInstanceVersionSummary> && versionSummary) { DARABONBA_PTR_SET_RVALUE(versionSummary_, versionSummary) };


    // webLockCapacity Field Functions 
    bool hasWebLockCapacity() const { return this->webLockCapacity_ != nullptr;};
    void deleteWebLockCapacity() { this->webLockCapacity_ = nullptr;};
    inline const Models::ListMultiUserInstancesResponseBodyDaInstanceWebLockCapacity & webLockCapacity() const { DARABONBA_PTR_GET_CONST(webLockCapacity_, Models::ListMultiUserInstancesResponseBodyDaInstanceWebLockCapacity) };
    inline Models::ListMultiUserInstancesResponseBodyDaInstanceWebLockCapacity webLockCapacity() { DARABONBA_PTR_GET(webLockCapacity_, Models::ListMultiUserInstancesResponseBodyDaInstanceWebLockCapacity) };
    inline ListMultiUserInstancesResponseBodyDaInstance& setWebLockCapacity(const Models::ListMultiUserInstancesResponseBodyDaInstanceWebLockCapacity & webLockCapacity) { DARABONBA_PTR_SET_VALUE(webLockCapacity_, webLockCapacity) };
    inline ListMultiUserInstancesResponseBodyDaInstance& setWebLockCapacity(Models::ListMultiUserInstancesResponseBodyDaInstanceWebLockCapacity && webLockCapacity) { DARABONBA_PTR_SET_RVALUE(webLockCapacity_, webLockCapacity) };


  protected:
    // AliUid of the administrator account.
    std::shared_ptr<int64_t> aliUid_ = nullptr;
    // Usage and allocation of administrator account anti-ransomware capacity.
    std::shared_ptr<Models::ListMultiUserInstancesResponseBodyDaInstanceAntiRansomwareCapacity> antiRansomwareCapacity_ = nullptr;
    // Usage and allocation of administrator account CSPM (Cloud Security Posture Management) scan count.
    std::shared_ptr<Models::ListMultiUserInstancesResponseBodyDaInstanceCspmCapacity> cspmCapacity_ = nullptr;
    // Usage and allocation of honeypot authorization count for the administrator account.
    std::shared_ptr<Models::ListMultiUserInstancesResponseBodyDaInstanceHoneypotCapacity> honeypotCapacity_ = nullptr;
    // Usage and allocation of image scan authorization count for the administrator account.
    std::shared_ptr<Models::ListMultiUserInstancesResponseBodyDaInstanceImageScanCapacity> imageScanCapacity_ = nullptr;
    // Cloud Security Center instance ID purchased by the administrator account.
    std::shared_ptr<string> instanceId_ = nullptr;
    // Instance purchase type. Values:
    // - **0**：Self-purchased.
    // - **1**：Allocated.
    std::shared_ptr<int32_t> instancePurchaseType_ = nullptr;
    // Usage and allocation of administrator account RASP (Runtime Application Self-Protection) capacity.
    std::shared_ptr<Models::ListMultiUserInstancesResponseBodyDaInstanceRaspCapacity> raspCapacity_ = nullptr;
    // Usage and allocation details of the malicious file detection SDK licenses for the administrator account.
    std::shared_ptr<Models::ListMultiUserInstancesResponseBodyDaInstanceSdkCapacity> sdkCapacity_ = nullptr;
    // Usage and allocation of administrator account log storage capacity.
    std::shared_ptr<Models::ListMultiUserInstancesResponseBodyDaInstanceSlsCapacity> slsCapacity_ = nullptr;
    // Administrator account instance status. Values: 
    // - **1**: Active.
    // - **2**: Inactive.
    std::shared_ptr<int32_t> status_ = nullptr;
    // Usage and allocation of administrator account threat analysis capacity.
    std::shared_ptr<Models::ListMultiUserInstancesResponseBodyDaInstanceThreatAnalysisCapacity> threatAnalysisCapacity_ = nullptr;
    // Usage and allocation of threat analysis and response log inbound traffic for the administrator account.
    std::shared_ptr<Models::ListMultiUserInstancesResponseBodyDaInstanceThreatAnalysisFlow> threatAnalysisFlow_ = nullptr;
    // User type. Values: 
    // * **Administrator User**: 1
    // * **Regular User**: 2
    std::shared_ptr<int32_t> userType_ = nullptr;
    // Purchased version of Cloud Security Center. Values:  
    // - **1**：Free Edition 
    // - **3**：Enterprise Edition
    // - **5**：Advanced Edition
    // - **6**：Anti-Virus Edition    
    // - **7**：Flagship Edition   
    // - **8**：Multiple Editions   
    // - **10**：Value-Added Services Only
    std::shared_ptr<int32_t> version_ = nullptr;
    // Authorization usage statistics for the administrator account.
    std::shared_ptr<vector<Models::ListMultiUserInstancesResponseBodyDaInstanceVersionSummary>> versionSummary_ = nullptr;
    // Usage and allocation of web lock (anti-tampering) authorization count for the administrator account.
    std::shared_ptr<Models::ListMultiUserInstancesResponseBodyDaInstanceWebLockCapacity> webLockCapacity_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
