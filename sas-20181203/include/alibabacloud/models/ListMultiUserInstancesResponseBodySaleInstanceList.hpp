// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMULTIUSERINSTANCESRESPONSEBODYSALEINSTANCELIST_HPP_
#define ALIBABACLOUD_MODELS_LISTMULTIUSERINSTANCESRESPONSEBODYSALEINSTANCELIST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListMultiUserInstancesResponseBodySaleInstanceListAntiRansomwareCapacity.hpp>
#include <alibabacloud/models/ListMultiUserInstancesResponseBodySaleInstanceListCspmCapacity.hpp>
#include <alibabacloud/models/ListMultiUserInstancesResponseBodySaleInstanceListHoneypotCapacity.hpp>
#include <alibabacloud/models/ListMultiUserInstancesResponseBodySaleInstanceListImageScanCapacity.hpp>
#include <alibabacloud/models/ListMultiUserInstancesResponseBodySaleInstanceListRaspCapacity.hpp>
#include <alibabacloud/models/ListMultiUserInstancesResponseBodySaleInstanceListSdkCapacity.hpp>
#include <alibabacloud/models/ListMultiUserInstancesResponseBodySaleInstanceListSlsCapacity.hpp>
#include <alibabacloud/models/ListMultiUserInstancesResponseBodySaleInstanceListThreatAnalysisCapacity.hpp>
#include <alibabacloud/models/ListMultiUserInstancesResponseBodySaleInstanceListThreatAnalysisFlow.hpp>
#include <vector>
#include <alibabacloud/models/ListMultiUserInstancesResponseBodySaleInstanceListVersionSummary.hpp>
#include <alibabacloud/models/ListMultiUserInstancesResponseBodySaleInstanceListWebLockCapacity.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListMultiUserInstancesResponseBodySaleInstanceList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMultiUserInstancesResponseBodySaleInstanceList& obj) { 
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
    friend void from_json(const Darabonba::Json& j, ListMultiUserInstancesResponseBodySaleInstanceList& obj) { 
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
    ListMultiUserInstancesResponseBodySaleInstanceList() = default ;
    ListMultiUserInstancesResponseBodySaleInstanceList(const ListMultiUserInstancesResponseBodySaleInstanceList &) = default ;
    ListMultiUserInstancesResponseBodySaleInstanceList(ListMultiUserInstancesResponseBodySaleInstanceList &&) = default ;
    ListMultiUserInstancesResponseBodySaleInstanceList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMultiUserInstancesResponseBodySaleInstanceList() = default ;
    ListMultiUserInstancesResponseBodySaleInstanceList& operator=(const ListMultiUserInstancesResponseBodySaleInstanceList &) = default ;
    ListMultiUserInstancesResponseBodySaleInstanceList& operator=(ListMultiUserInstancesResponseBodySaleInstanceList &&) = default ;
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
    inline ListMultiUserInstancesResponseBodySaleInstanceList& setAliUid(int64_t aliUid) { DARABONBA_PTR_SET_VALUE(aliUid_, aliUid) };


    // antiRansomwareCapacity Field Functions 
    bool hasAntiRansomwareCapacity() const { return this->antiRansomwareCapacity_ != nullptr;};
    void deleteAntiRansomwareCapacity() { this->antiRansomwareCapacity_ = nullptr;};
    inline const Models::ListMultiUserInstancesResponseBodySaleInstanceListAntiRansomwareCapacity & antiRansomwareCapacity() const { DARABONBA_PTR_GET_CONST(antiRansomwareCapacity_, Models::ListMultiUserInstancesResponseBodySaleInstanceListAntiRansomwareCapacity) };
    inline Models::ListMultiUserInstancesResponseBodySaleInstanceListAntiRansomwareCapacity antiRansomwareCapacity() { DARABONBA_PTR_GET(antiRansomwareCapacity_, Models::ListMultiUserInstancesResponseBodySaleInstanceListAntiRansomwareCapacity) };
    inline ListMultiUserInstancesResponseBodySaleInstanceList& setAntiRansomwareCapacity(const Models::ListMultiUserInstancesResponseBodySaleInstanceListAntiRansomwareCapacity & antiRansomwareCapacity) { DARABONBA_PTR_SET_VALUE(antiRansomwareCapacity_, antiRansomwareCapacity) };
    inline ListMultiUserInstancesResponseBodySaleInstanceList& setAntiRansomwareCapacity(Models::ListMultiUserInstancesResponseBodySaleInstanceListAntiRansomwareCapacity && antiRansomwareCapacity) { DARABONBA_PTR_SET_RVALUE(antiRansomwareCapacity_, antiRansomwareCapacity) };


    // cspmCapacity Field Functions 
    bool hasCspmCapacity() const { return this->cspmCapacity_ != nullptr;};
    void deleteCspmCapacity() { this->cspmCapacity_ = nullptr;};
    inline const Models::ListMultiUserInstancesResponseBodySaleInstanceListCspmCapacity & cspmCapacity() const { DARABONBA_PTR_GET_CONST(cspmCapacity_, Models::ListMultiUserInstancesResponseBodySaleInstanceListCspmCapacity) };
    inline Models::ListMultiUserInstancesResponseBodySaleInstanceListCspmCapacity cspmCapacity() { DARABONBA_PTR_GET(cspmCapacity_, Models::ListMultiUserInstancesResponseBodySaleInstanceListCspmCapacity) };
    inline ListMultiUserInstancesResponseBodySaleInstanceList& setCspmCapacity(const Models::ListMultiUserInstancesResponseBodySaleInstanceListCspmCapacity & cspmCapacity) { DARABONBA_PTR_SET_VALUE(cspmCapacity_, cspmCapacity) };
    inline ListMultiUserInstancesResponseBodySaleInstanceList& setCspmCapacity(Models::ListMultiUserInstancesResponseBodySaleInstanceListCspmCapacity && cspmCapacity) { DARABONBA_PTR_SET_RVALUE(cspmCapacity_, cspmCapacity) };


    // honeypotCapacity Field Functions 
    bool hasHoneypotCapacity() const { return this->honeypotCapacity_ != nullptr;};
    void deleteHoneypotCapacity() { this->honeypotCapacity_ = nullptr;};
    inline const Models::ListMultiUserInstancesResponseBodySaleInstanceListHoneypotCapacity & honeypotCapacity() const { DARABONBA_PTR_GET_CONST(honeypotCapacity_, Models::ListMultiUserInstancesResponseBodySaleInstanceListHoneypotCapacity) };
    inline Models::ListMultiUserInstancesResponseBodySaleInstanceListHoneypotCapacity honeypotCapacity() { DARABONBA_PTR_GET(honeypotCapacity_, Models::ListMultiUserInstancesResponseBodySaleInstanceListHoneypotCapacity) };
    inline ListMultiUserInstancesResponseBodySaleInstanceList& setHoneypotCapacity(const Models::ListMultiUserInstancesResponseBodySaleInstanceListHoneypotCapacity & honeypotCapacity) { DARABONBA_PTR_SET_VALUE(honeypotCapacity_, honeypotCapacity) };
    inline ListMultiUserInstancesResponseBodySaleInstanceList& setHoneypotCapacity(Models::ListMultiUserInstancesResponseBodySaleInstanceListHoneypotCapacity && honeypotCapacity) { DARABONBA_PTR_SET_RVALUE(honeypotCapacity_, honeypotCapacity) };


    // imageScanCapacity Field Functions 
    bool hasImageScanCapacity() const { return this->imageScanCapacity_ != nullptr;};
    void deleteImageScanCapacity() { this->imageScanCapacity_ = nullptr;};
    inline const Models::ListMultiUserInstancesResponseBodySaleInstanceListImageScanCapacity & imageScanCapacity() const { DARABONBA_PTR_GET_CONST(imageScanCapacity_, Models::ListMultiUserInstancesResponseBodySaleInstanceListImageScanCapacity) };
    inline Models::ListMultiUserInstancesResponseBodySaleInstanceListImageScanCapacity imageScanCapacity() { DARABONBA_PTR_GET(imageScanCapacity_, Models::ListMultiUserInstancesResponseBodySaleInstanceListImageScanCapacity) };
    inline ListMultiUserInstancesResponseBodySaleInstanceList& setImageScanCapacity(const Models::ListMultiUserInstancesResponseBodySaleInstanceListImageScanCapacity & imageScanCapacity) { DARABONBA_PTR_SET_VALUE(imageScanCapacity_, imageScanCapacity) };
    inline ListMultiUserInstancesResponseBodySaleInstanceList& setImageScanCapacity(Models::ListMultiUserInstancesResponseBodySaleInstanceListImageScanCapacity && imageScanCapacity) { DARABONBA_PTR_SET_RVALUE(imageScanCapacity_, imageScanCapacity) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListMultiUserInstancesResponseBodySaleInstanceList& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instancePurchaseType Field Functions 
    bool hasInstancePurchaseType() const { return this->instancePurchaseType_ != nullptr;};
    void deleteInstancePurchaseType() { this->instancePurchaseType_ = nullptr;};
    inline int32_t instancePurchaseType() const { DARABONBA_PTR_GET_DEFAULT(instancePurchaseType_, 0) };
    inline ListMultiUserInstancesResponseBodySaleInstanceList& setInstancePurchaseType(int32_t instancePurchaseType) { DARABONBA_PTR_SET_VALUE(instancePurchaseType_, instancePurchaseType) };


    // raspCapacity Field Functions 
    bool hasRaspCapacity() const { return this->raspCapacity_ != nullptr;};
    void deleteRaspCapacity() { this->raspCapacity_ = nullptr;};
    inline const Models::ListMultiUserInstancesResponseBodySaleInstanceListRaspCapacity & raspCapacity() const { DARABONBA_PTR_GET_CONST(raspCapacity_, Models::ListMultiUserInstancesResponseBodySaleInstanceListRaspCapacity) };
    inline Models::ListMultiUserInstancesResponseBodySaleInstanceListRaspCapacity raspCapacity() { DARABONBA_PTR_GET(raspCapacity_, Models::ListMultiUserInstancesResponseBodySaleInstanceListRaspCapacity) };
    inline ListMultiUserInstancesResponseBodySaleInstanceList& setRaspCapacity(const Models::ListMultiUserInstancesResponseBodySaleInstanceListRaspCapacity & raspCapacity) { DARABONBA_PTR_SET_VALUE(raspCapacity_, raspCapacity) };
    inline ListMultiUserInstancesResponseBodySaleInstanceList& setRaspCapacity(Models::ListMultiUserInstancesResponseBodySaleInstanceListRaspCapacity && raspCapacity) { DARABONBA_PTR_SET_RVALUE(raspCapacity_, raspCapacity) };


    // sdkCapacity Field Functions 
    bool hasSdkCapacity() const { return this->sdkCapacity_ != nullptr;};
    void deleteSdkCapacity() { this->sdkCapacity_ = nullptr;};
    inline const Models::ListMultiUserInstancesResponseBodySaleInstanceListSdkCapacity & sdkCapacity() const { DARABONBA_PTR_GET_CONST(sdkCapacity_, Models::ListMultiUserInstancesResponseBodySaleInstanceListSdkCapacity) };
    inline Models::ListMultiUserInstancesResponseBodySaleInstanceListSdkCapacity sdkCapacity() { DARABONBA_PTR_GET(sdkCapacity_, Models::ListMultiUserInstancesResponseBodySaleInstanceListSdkCapacity) };
    inline ListMultiUserInstancesResponseBodySaleInstanceList& setSdkCapacity(const Models::ListMultiUserInstancesResponseBodySaleInstanceListSdkCapacity & sdkCapacity) { DARABONBA_PTR_SET_VALUE(sdkCapacity_, sdkCapacity) };
    inline ListMultiUserInstancesResponseBodySaleInstanceList& setSdkCapacity(Models::ListMultiUserInstancesResponseBodySaleInstanceListSdkCapacity && sdkCapacity) { DARABONBA_PTR_SET_RVALUE(sdkCapacity_, sdkCapacity) };


    // slsCapacity Field Functions 
    bool hasSlsCapacity() const { return this->slsCapacity_ != nullptr;};
    void deleteSlsCapacity() { this->slsCapacity_ = nullptr;};
    inline const Models::ListMultiUserInstancesResponseBodySaleInstanceListSlsCapacity & slsCapacity() const { DARABONBA_PTR_GET_CONST(slsCapacity_, Models::ListMultiUserInstancesResponseBodySaleInstanceListSlsCapacity) };
    inline Models::ListMultiUserInstancesResponseBodySaleInstanceListSlsCapacity slsCapacity() { DARABONBA_PTR_GET(slsCapacity_, Models::ListMultiUserInstancesResponseBodySaleInstanceListSlsCapacity) };
    inline ListMultiUserInstancesResponseBodySaleInstanceList& setSlsCapacity(const Models::ListMultiUserInstancesResponseBodySaleInstanceListSlsCapacity & slsCapacity) { DARABONBA_PTR_SET_VALUE(slsCapacity_, slsCapacity) };
    inline ListMultiUserInstancesResponseBodySaleInstanceList& setSlsCapacity(Models::ListMultiUserInstancesResponseBodySaleInstanceListSlsCapacity && slsCapacity) { DARABONBA_PTR_SET_RVALUE(slsCapacity_, slsCapacity) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline ListMultiUserInstancesResponseBodySaleInstanceList& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // threatAnalysisCapacity Field Functions 
    bool hasThreatAnalysisCapacity() const { return this->threatAnalysisCapacity_ != nullptr;};
    void deleteThreatAnalysisCapacity() { this->threatAnalysisCapacity_ = nullptr;};
    inline const Models::ListMultiUserInstancesResponseBodySaleInstanceListThreatAnalysisCapacity & threatAnalysisCapacity() const { DARABONBA_PTR_GET_CONST(threatAnalysisCapacity_, Models::ListMultiUserInstancesResponseBodySaleInstanceListThreatAnalysisCapacity) };
    inline Models::ListMultiUserInstancesResponseBodySaleInstanceListThreatAnalysisCapacity threatAnalysisCapacity() { DARABONBA_PTR_GET(threatAnalysisCapacity_, Models::ListMultiUserInstancesResponseBodySaleInstanceListThreatAnalysisCapacity) };
    inline ListMultiUserInstancesResponseBodySaleInstanceList& setThreatAnalysisCapacity(const Models::ListMultiUserInstancesResponseBodySaleInstanceListThreatAnalysisCapacity & threatAnalysisCapacity) { DARABONBA_PTR_SET_VALUE(threatAnalysisCapacity_, threatAnalysisCapacity) };
    inline ListMultiUserInstancesResponseBodySaleInstanceList& setThreatAnalysisCapacity(Models::ListMultiUserInstancesResponseBodySaleInstanceListThreatAnalysisCapacity && threatAnalysisCapacity) { DARABONBA_PTR_SET_RVALUE(threatAnalysisCapacity_, threatAnalysisCapacity) };


    // threatAnalysisFlow Field Functions 
    bool hasThreatAnalysisFlow() const { return this->threatAnalysisFlow_ != nullptr;};
    void deleteThreatAnalysisFlow() { this->threatAnalysisFlow_ = nullptr;};
    inline const Models::ListMultiUserInstancesResponseBodySaleInstanceListThreatAnalysisFlow & threatAnalysisFlow() const { DARABONBA_PTR_GET_CONST(threatAnalysisFlow_, Models::ListMultiUserInstancesResponseBodySaleInstanceListThreatAnalysisFlow) };
    inline Models::ListMultiUserInstancesResponseBodySaleInstanceListThreatAnalysisFlow threatAnalysisFlow() { DARABONBA_PTR_GET(threatAnalysisFlow_, Models::ListMultiUserInstancesResponseBodySaleInstanceListThreatAnalysisFlow) };
    inline ListMultiUserInstancesResponseBodySaleInstanceList& setThreatAnalysisFlow(const Models::ListMultiUserInstancesResponseBodySaleInstanceListThreatAnalysisFlow & threatAnalysisFlow) { DARABONBA_PTR_SET_VALUE(threatAnalysisFlow_, threatAnalysisFlow) };
    inline ListMultiUserInstancesResponseBodySaleInstanceList& setThreatAnalysisFlow(Models::ListMultiUserInstancesResponseBodySaleInstanceListThreatAnalysisFlow && threatAnalysisFlow) { DARABONBA_PTR_SET_RVALUE(threatAnalysisFlow_, threatAnalysisFlow) };


    // userType Field Functions 
    bool hasUserType() const { return this->userType_ != nullptr;};
    void deleteUserType() { this->userType_ = nullptr;};
    inline int32_t userType() const { DARABONBA_PTR_GET_DEFAULT(userType_, 0) };
    inline ListMultiUserInstancesResponseBodySaleInstanceList& setUserType(int32_t userType) { DARABONBA_PTR_SET_VALUE(userType_, userType) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline int32_t version() const { DARABONBA_PTR_GET_DEFAULT(version_, 0) };
    inline ListMultiUserInstancesResponseBodySaleInstanceList& setVersion(int32_t version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    // versionSummary Field Functions 
    bool hasVersionSummary() const { return this->versionSummary_ != nullptr;};
    void deleteVersionSummary() { this->versionSummary_ = nullptr;};
    inline const vector<Models::ListMultiUserInstancesResponseBodySaleInstanceListVersionSummary> & versionSummary() const { DARABONBA_PTR_GET_CONST(versionSummary_, vector<Models::ListMultiUserInstancesResponseBodySaleInstanceListVersionSummary>) };
    inline vector<Models::ListMultiUserInstancesResponseBodySaleInstanceListVersionSummary> versionSummary() { DARABONBA_PTR_GET(versionSummary_, vector<Models::ListMultiUserInstancesResponseBodySaleInstanceListVersionSummary>) };
    inline ListMultiUserInstancesResponseBodySaleInstanceList& setVersionSummary(const vector<Models::ListMultiUserInstancesResponseBodySaleInstanceListVersionSummary> & versionSummary) { DARABONBA_PTR_SET_VALUE(versionSummary_, versionSummary) };
    inline ListMultiUserInstancesResponseBodySaleInstanceList& setVersionSummary(vector<Models::ListMultiUserInstancesResponseBodySaleInstanceListVersionSummary> && versionSummary) { DARABONBA_PTR_SET_RVALUE(versionSummary_, versionSummary) };


    // webLockCapacity Field Functions 
    bool hasWebLockCapacity() const { return this->webLockCapacity_ != nullptr;};
    void deleteWebLockCapacity() { this->webLockCapacity_ = nullptr;};
    inline const Models::ListMultiUserInstancesResponseBodySaleInstanceListWebLockCapacity & webLockCapacity() const { DARABONBA_PTR_GET_CONST(webLockCapacity_, Models::ListMultiUserInstancesResponseBodySaleInstanceListWebLockCapacity) };
    inline Models::ListMultiUserInstancesResponseBodySaleInstanceListWebLockCapacity webLockCapacity() { DARABONBA_PTR_GET(webLockCapacity_, Models::ListMultiUserInstancesResponseBodySaleInstanceListWebLockCapacity) };
    inline ListMultiUserInstancesResponseBodySaleInstanceList& setWebLockCapacity(const Models::ListMultiUserInstancesResponseBodySaleInstanceListWebLockCapacity & webLockCapacity) { DARABONBA_PTR_SET_VALUE(webLockCapacity_, webLockCapacity) };
    inline ListMultiUserInstancesResponseBodySaleInstanceList& setWebLockCapacity(Models::ListMultiUserInstancesResponseBodySaleInstanceListWebLockCapacity && webLockCapacity) { DARABONBA_PTR_SET_RVALUE(webLockCapacity_, webLockCapacity) };


  protected:
    // UID of the member account.
    std::shared_ptr<int64_t> aliUid_ = nullptr;
    // Anti-ransomware capacity usage of the member account.
    std::shared_ptr<Models::ListMultiUserInstancesResponseBodySaleInstanceListAntiRansomwareCapacity> antiRansomwareCapacity_ = nullptr;
    // Member account CSPM (Cloud Security Posture Management) scan usage.
    std::shared_ptr<Models::ListMultiUserInstancesResponseBodySaleInstanceListCspmCapacity> cspmCapacity_ = nullptr;
    // Usage details of honeypot authorizations for the member account.
    std::shared_ptr<Models::ListMultiUserInstancesResponseBodySaleInstanceListHoneypotCapacity> honeypotCapacity_ = nullptr;
    // Member account image scanning authorization usage.
    std::shared_ptr<Models::ListMultiUserInstancesResponseBodySaleInstanceListImageScanCapacity> imageScanCapacity_ = nullptr;
    // Cloud Security Center instance ID purchased by the member account.
    std::shared_ptr<string> instanceId_ = nullptr;
    // Instance purchase type. Values: 
    // - **0**: Self-purchased.
    // - **1**: Allocated.
    std::shared_ptr<int32_t> instancePurchaseType_ = nullptr;
    // Member account RASP (Runtime Application Self-Protection) usage.
    std::shared_ptr<Models::ListMultiUserInstancesResponseBodySaleInstanceListRaspCapacity> raspCapacity_ = nullptr;
    // Usage details of malicious file detection SDK authorizations for the member account.
    std::shared_ptr<Models::ListMultiUserInstancesResponseBodySaleInstanceListSdkCapacity> sdkCapacity_ = nullptr;
    // Log storage capacity usage of the member account.
    std::shared_ptr<Models::ListMultiUserInstancesResponseBodySaleInstanceListSlsCapacity> slsCapacity_ = nullptr;
    // Status of the member account instance. Values: 
    // - **1**: Active.
    // - **2**: Inactive.
    std::shared_ptr<int32_t> status_ = nullptr;
    // Member account threat analysis capacity usage.
    std::shared_ptr<Models::ListMultiUserInstancesResponseBodySaleInstanceListThreatAnalysisCapacity> threatAnalysisCapacity_ = nullptr;
    // Member account threat analysis and response log ingestion traffic usage.
    std::shared_ptr<Models::ListMultiUserInstancesResponseBodySaleInstanceListThreatAnalysisFlow> threatAnalysisFlow_ = nullptr;
    // User type. Values:
    // * **Administrator User**：1
    // * **Regular User**：2
    std::shared_ptr<int32_t> userType_ = nullptr;
    // Version of the Cloud Security Center for the member account. Values:  
    // - **1**: Free Edition 
    // - **3**: Enterprise Edition
    // - **5**: Advanced Edition
    // - **6**: Anti-Virus Edition    
    // - **7**: Flagship Edition   
    // - **8**: Multiple Versions   
    // - **10**: Only Purchased Value-Added Services
    std::shared_ptr<int32_t> version_ = nullptr;
    // Authorization usage statistics for the member account.
    std::shared_ptr<vector<Models::ListMultiUserInstancesResponseBodySaleInstanceListVersionSummary>> versionSummary_ = nullptr;
    // Member account web lock (anti-tampering) authorization usage.
    std::shared_ptr<Models::ListMultiUserInstancesResponseBodySaleInstanceListWebLockCapacity> webLockCapacity_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
