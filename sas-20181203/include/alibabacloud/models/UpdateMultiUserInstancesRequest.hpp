// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEMULTIUSERINSTANCESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEMULTIUSERINSTANCESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class UpdateMultiUserInstancesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateMultiUserInstancesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(MemberInstances, memberInstances_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateMultiUserInstancesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(MemberInstances, memberInstances_);
    };
    UpdateMultiUserInstancesRequest() = default ;
    UpdateMultiUserInstancesRequest(const UpdateMultiUserInstancesRequest &) = default ;
    UpdateMultiUserInstancesRequest(UpdateMultiUserInstancesRequest &&) = default ;
    UpdateMultiUserInstancesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateMultiUserInstancesRequest() = default ;
    UpdateMultiUserInstancesRequest& operator=(const UpdateMultiUserInstancesRequest &) = default ;
    UpdateMultiUserInstancesRequest& operator=(UpdateMultiUserInstancesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class MemberInstances : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const MemberInstances& obj) { 
        DARABONBA_PTR_TO_JSON(AliUid, aliUid_);
        DARABONBA_PTR_TO_JSON(AntiRansomwareCapacity, antiRansomwareCapacity_);
        DARABONBA_PTR_TO_JSON(ChargeType, chargeType_);
        DARABONBA_PTR_TO_JSON(CspmCapacity, cspmCapacity_);
        DARABONBA_PTR_TO_JSON(CspmInstanceCapacity, cspmInstanceCapacity_);
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
      friend void from_json(const Darabonba::Json& j, MemberInstances& obj) { 
        DARABONBA_PTR_FROM_JSON(AliUid, aliUid_);
        DARABONBA_PTR_FROM_JSON(AntiRansomwareCapacity, antiRansomwareCapacity_);
        DARABONBA_PTR_FROM_JSON(ChargeType, chargeType_);
        DARABONBA_PTR_FROM_JSON(CspmCapacity, cspmCapacity_);
        DARABONBA_PTR_FROM_JSON(CspmInstanceCapacity, cspmInstanceCapacity_);
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
      MemberInstances() = default ;
      MemberInstances(const MemberInstances &) = default ;
      MemberInstances(MemberInstances &&) = default ;
      MemberInstances(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~MemberInstances() = default ;
      MemberInstances& operator=(const MemberInstances &) = default ;
      MemberInstances& operator=(MemberInstances &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class VersionSummary : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const VersionSummary& obj) { 
          DARABONBA_PTR_TO_JSON(CoreCount, coreCount_);
          DARABONBA_PTR_TO_JSON(EcsCount, ecsCount_);
          DARABONBA_PTR_TO_JSON(Version, version_);
        };
        friend void from_json(const Darabonba::Json& j, VersionSummary& obj) { 
          DARABONBA_PTR_FROM_JSON(CoreCount, coreCount_);
          DARABONBA_PTR_FROM_JSON(EcsCount, ecsCount_);
          DARABONBA_PTR_FROM_JSON(Version, version_);
        };
        VersionSummary() = default ;
        VersionSummary(const VersionSummary &) = default ;
        VersionSummary(VersionSummary &&) = default ;
        VersionSummary(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~VersionSummary() = default ;
        VersionSummary& operator=(const VersionSummary &) = default ;
        VersionSummary& operator=(VersionSummary &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->coreCount_ == nullptr
        && this->ecsCount_ == nullptr && this->version_ == nullptr; };
        // coreCount Field Functions 
        bool hasCoreCount() const { return this->coreCount_ != nullptr;};
        void deleteCoreCount() { this->coreCount_ = nullptr;};
        inline int64_t getCoreCount() const { DARABONBA_PTR_GET_DEFAULT(coreCount_, 0L) };
        inline VersionSummary& setCoreCount(int64_t coreCount) { DARABONBA_PTR_SET_VALUE(coreCount_, coreCount) };


        // ecsCount Field Functions 
        bool hasEcsCount() const { return this->ecsCount_ != nullptr;};
        void deleteEcsCount() { this->ecsCount_ = nullptr;};
        inline int64_t getEcsCount() const { DARABONBA_PTR_GET_DEFAULT(ecsCount_, 0L) };
        inline VersionSummary& setEcsCount(int64_t ecsCount) { DARABONBA_PTR_SET_VALUE(ecsCount_, ecsCount) };


        // version Field Functions 
        bool hasVersion() const { return this->version_ != nullptr;};
        void deleteVersion() { this->version_ = nullptr;};
        inline int32_t getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, 0) };
        inline VersionSummary& setVersion(int32_t version) { DARABONBA_PTR_SET_VALUE(version_, version) };


      protected:
        // The number of authorized cores assigned to the member.
        shared_ptr<int64_t> coreCount_ {};
        // The number of authorized instances assigned to the member.
        shared_ptr<int64_t> ecsCount_ {};
        // The Security Center edition of the member accounts. Valid values:  
        // - **1**: Free Edition 
        // - **3**: Enterprise Edition
        // - **5**: Premium Edition
        // - **6**: Anti-virus Edition    
        // - **7**: Ultimate Edition   
        // - **8**: multi-edition   
        // - **10**: value-added services only
        shared_ptr<int32_t> version_ {};
      };

      virtual bool empty() const override { return this->aliUid_ == nullptr
        && this->antiRansomwareCapacity_ == nullptr && this->chargeType_ == nullptr && this->cspmCapacity_ == nullptr && this->cspmInstanceCapacity_ == nullptr && this->honeypotCapacity_ == nullptr
        && this->imageScanCapacity_ == nullptr && this->instanceId_ == nullptr && this->optType_ == nullptr && this->raspCapacity_ == nullptr && this->sdkCapacity_ == nullptr
        && this->slsCapacity_ == nullptr && this->status_ == nullptr && this->threatAnalysisCapacity_ == nullptr && this->threatAnalysisFlow_ == nullptr && this->version_ == nullptr
        && this->versionSummary_ == nullptr && this->webLockCapacity_ == nullptr; };
      // aliUid Field Functions 
      bool hasAliUid() const { return this->aliUid_ != nullptr;};
      void deleteAliUid() { this->aliUid_ = nullptr;};
      inline int64_t getAliUid() const { DARABONBA_PTR_GET_DEFAULT(aliUid_, 0L) };
      inline MemberInstances& setAliUid(int64_t aliUid) { DARABONBA_PTR_SET_VALUE(aliUid_, aliUid) };


      // antiRansomwareCapacity Field Functions 
      bool hasAntiRansomwareCapacity() const { return this->antiRansomwareCapacity_ != nullptr;};
      void deleteAntiRansomwareCapacity() { this->antiRansomwareCapacity_ = nullptr;};
      inline int64_t getAntiRansomwareCapacity() const { DARABONBA_PTR_GET_DEFAULT(antiRansomwareCapacity_, 0L) };
      inline MemberInstances& setAntiRansomwareCapacity(int64_t antiRansomwareCapacity) { DARABONBA_PTR_SET_VALUE(antiRansomwareCapacity_, antiRansomwareCapacity) };


      // chargeType Field Functions 
      bool hasChargeType() const { return this->chargeType_ != nullptr;};
      void deleteChargeType() { this->chargeType_ = nullptr;};
      inline string getChargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
      inline MemberInstances& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


      // cspmCapacity Field Functions 
      bool hasCspmCapacity() const { return this->cspmCapacity_ != nullptr;};
      void deleteCspmCapacity() { this->cspmCapacity_ = nullptr;};
      inline int64_t getCspmCapacity() const { DARABONBA_PTR_GET_DEFAULT(cspmCapacity_, 0L) };
      inline MemberInstances& setCspmCapacity(int64_t cspmCapacity) { DARABONBA_PTR_SET_VALUE(cspmCapacity_, cspmCapacity) };


      // cspmInstanceCapacity Field Functions 
      bool hasCspmInstanceCapacity() const { return this->cspmInstanceCapacity_ != nullptr;};
      void deleteCspmInstanceCapacity() { this->cspmInstanceCapacity_ = nullptr;};
      inline int64_t getCspmInstanceCapacity() const { DARABONBA_PTR_GET_DEFAULT(cspmInstanceCapacity_, 0L) };
      inline MemberInstances& setCspmInstanceCapacity(int64_t cspmInstanceCapacity) { DARABONBA_PTR_SET_VALUE(cspmInstanceCapacity_, cspmInstanceCapacity) };


      // honeypotCapacity Field Functions 
      bool hasHoneypotCapacity() const { return this->honeypotCapacity_ != nullptr;};
      void deleteHoneypotCapacity() { this->honeypotCapacity_ = nullptr;};
      inline int64_t getHoneypotCapacity() const { DARABONBA_PTR_GET_DEFAULT(honeypotCapacity_, 0L) };
      inline MemberInstances& setHoneypotCapacity(int64_t honeypotCapacity) { DARABONBA_PTR_SET_VALUE(honeypotCapacity_, honeypotCapacity) };


      // imageScanCapacity Field Functions 
      bool hasImageScanCapacity() const { return this->imageScanCapacity_ != nullptr;};
      void deleteImageScanCapacity() { this->imageScanCapacity_ = nullptr;};
      inline int64_t getImageScanCapacity() const { DARABONBA_PTR_GET_DEFAULT(imageScanCapacity_, 0L) };
      inline MemberInstances& setImageScanCapacity(int64_t imageScanCapacity) { DARABONBA_PTR_SET_VALUE(imageScanCapacity_, imageScanCapacity) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline MemberInstances& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // optType Field Functions 
      bool hasOptType() const { return this->optType_ != nullptr;};
      void deleteOptType() { this->optType_ = nullptr;};
      inline string getOptType() const { DARABONBA_PTR_GET_DEFAULT(optType_, "") };
      inline MemberInstances& setOptType(string optType) { DARABONBA_PTR_SET_VALUE(optType_, optType) };


      // raspCapacity Field Functions 
      bool hasRaspCapacity() const { return this->raspCapacity_ != nullptr;};
      void deleteRaspCapacity() { this->raspCapacity_ = nullptr;};
      inline int64_t getRaspCapacity() const { DARABONBA_PTR_GET_DEFAULT(raspCapacity_, 0L) };
      inline MemberInstances& setRaspCapacity(int64_t raspCapacity) { DARABONBA_PTR_SET_VALUE(raspCapacity_, raspCapacity) };


      // sdkCapacity Field Functions 
      bool hasSdkCapacity() const { return this->sdkCapacity_ != nullptr;};
      void deleteSdkCapacity() { this->sdkCapacity_ = nullptr;};
      inline int64_t getSdkCapacity() const { DARABONBA_PTR_GET_DEFAULT(sdkCapacity_, 0L) };
      inline MemberInstances& setSdkCapacity(int64_t sdkCapacity) { DARABONBA_PTR_SET_VALUE(sdkCapacity_, sdkCapacity) };


      // slsCapacity Field Functions 
      bool hasSlsCapacity() const { return this->slsCapacity_ != nullptr;};
      void deleteSlsCapacity() { this->slsCapacity_ = nullptr;};
      inline int64_t getSlsCapacity() const { DARABONBA_PTR_GET_DEFAULT(slsCapacity_, 0L) };
      inline MemberInstances& setSlsCapacity(int64_t slsCapacity) { DARABONBA_PTR_SET_VALUE(slsCapacity_, slsCapacity) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
      inline MemberInstances& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // threatAnalysisCapacity Field Functions 
      bool hasThreatAnalysisCapacity() const { return this->threatAnalysisCapacity_ != nullptr;};
      void deleteThreatAnalysisCapacity() { this->threatAnalysisCapacity_ = nullptr;};
      inline int64_t getThreatAnalysisCapacity() const { DARABONBA_PTR_GET_DEFAULT(threatAnalysisCapacity_, 0L) };
      inline MemberInstances& setThreatAnalysisCapacity(int64_t threatAnalysisCapacity) { DARABONBA_PTR_SET_VALUE(threatAnalysisCapacity_, threatAnalysisCapacity) };


      // threatAnalysisFlow Field Functions 
      bool hasThreatAnalysisFlow() const { return this->threatAnalysisFlow_ != nullptr;};
      void deleteThreatAnalysisFlow() { this->threatAnalysisFlow_ = nullptr;};
      inline int64_t getThreatAnalysisFlow() const { DARABONBA_PTR_GET_DEFAULT(threatAnalysisFlow_, 0L) };
      inline MemberInstances& setThreatAnalysisFlow(int64_t threatAnalysisFlow) { DARABONBA_PTR_SET_VALUE(threatAnalysisFlow_, threatAnalysisFlow) };


      // version Field Functions 
      bool hasVersion() const { return this->version_ != nullptr;};
      void deleteVersion() { this->version_ = nullptr;};
      inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
      inline MemberInstances& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


      // versionSummary Field Functions 
      bool hasVersionSummary() const { return this->versionSummary_ != nullptr;};
      void deleteVersionSummary() { this->versionSummary_ = nullptr;};
      inline const vector<MemberInstances::VersionSummary> & getVersionSummary() const { DARABONBA_PTR_GET_CONST(versionSummary_, vector<MemberInstances::VersionSummary>) };
      inline vector<MemberInstances::VersionSummary> getVersionSummary() { DARABONBA_PTR_GET(versionSummary_, vector<MemberInstances::VersionSummary>) };
      inline MemberInstances& setVersionSummary(const vector<MemberInstances::VersionSummary> & versionSummary) { DARABONBA_PTR_SET_VALUE(versionSummary_, versionSummary) };
      inline MemberInstances& setVersionSummary(vector<MemberInstances::VersionSummary> && versionSummary) { DARABONBA_PTR_SET_RVALUE(versionSummary_, versionSummary) };


      // webLockCapacity Field Functions 
      bool hasWebLockCapacity() const { return this->webLockCapacity_ != nullptr;};
      void deleteWebLockCapacity() { this->webLockCapacity_ = nullptr;};
      inline int64_t getWebLockCapacity() const { DARABONBA_PTR_GET_DEFAULT(webLockCapacity_, 0L) };
      inline MemberInstances& setWebLockCapacity(int64_t webLockCapacity) { DARABONBA_PTR_SET_VALUE(webLockCapacity_, webLockCapacity) };


    protected:
      // The Alibaba Cloud account UID of the member.
      shared_ptr<int64_t> aliUid_ {};
      // The anti-ransomware capacity assigned to the member. Unit: GB.
      shared_ptr<int64_t> antiRansomwareCapacity_ {};
      // The billing type. Valid values:
      // * **PREPAID**: upfront.
      // * **POSTPAID** (default): pay-as-you-go.
      shared_ptr<string> chargeType_ {};
      // The number of cloud platform configuration check scans assigned to the member. Unit: scans per month.
      shared_ptr<int64_t> cspmCapacity_ {};
      shared_ptr<int64_t> cspmInstanceCapacity_ {};
      // The number of honeypot quotas assigned to the member.
      shared_ptr<int64_t> honeypotCapacity_ {};
      // The number of image scan quotas assigned to the member.
      shared_ptr<int64_t> imageScanCapacity_ {};
      // The Security Center instance ID purchased by the member accounts.
      shared_ptr<string> instanceId_ {};
      // The operation type. Valid values:  
      // - **ADD**: increase 
      // - **CHANGE**: update
      // - **DEL**: delete
      shared_ptr<string> optType_ {};
      // The number of application protection quotas assigned to the member. Unit: quotas per month.
      shared_ptr<int64_t> raspCapacity_ {};
      // The number of malicious file detection SDK quotas assigned to the member.
      shared_ptr<int64_t> sdkCapacity_ {};
      // The log storage capacity assigned to the member. Unit: GB.
      shared_ptr<int64_t> slsCapacity_ {};
      // The instance status of the member accounts. Valid values:
      // - **1**: active.
      // - **2**: expired.
      shared_ptr<int32_t> status_ {};
      // The threat analysis capacity assigned to the member. Unit: GB.
      shared_ptr<int64_t> threatAnalysisCapacity_ {};
      // The log ingestion traffic for threat detection and response assigned to the member. Unit: GB/day.
      shared_ptr<int64_t> threatAnalysisFlow_ {};
      // The Security Center edition to bind. Valid values:  
      // - **1**: Free Edition 
      // - **3**: Enterprise Edition
      // - **5**: Advanced Edition
      // - **6**: Anti-virus Edition    
      // - **7**: Ultimate Edition
      shared_ptr<string> version_ {};
      // The authorization usage information of the member accounts.
      shared_ptr<vector<MemberInstances::VersionSummary>> versionSummary_ {};
      // The number of web tamper-proofing authorization quotas assigned to the member.
      shared_ptr<int64_t> webLockCapacity_ {};
    };

    virtual bool empty() const override { return this->memberInstances_ == nullptr; };
    // memberInstances Field Functions 
    bool hasMemberInstances() const { return this->memberInstances_ != nullptr;};
    void deleteMemberInstances() { this->memberInstances_ = nullptr;};
    inline const vector<UpdateMultiUserInstancesRequest::MemberInstances> & getMemberInstances() const { DARABONBA_PTR_GET_CONST(memberInstances_, vector<UpdateMultiUserInstancesRequest::MemberInstances>) };
    inline vector<UpdateMultiUserInstancesRequest::MemberInstances> getMemberInstances() { DARABONBA_PTR_GET(memberInstances_, vector<UpdateMultiUserInstancesRequest::MemberInstances>) };
    inline UpdateMultiUserInstancesRequest& setMemberInstances(const vector<UpdateMultiUserInstancesRequest::MemberInstances> & memberInstances) { DARABONBA_PTR_SET_VALUE(memberInstances_, memberInstances) };
    inline UpdateMultiUserInstancesRequest& setMemberInstances(vector<UpdateMultiUserInstancesRequest::MemberInstances> && memberInstances) { DARABONBA_PTR_SET_RVALUE(memberInstances_, memberInstances) };


  protected:
    // The member instances.
    shared_ptr<vector<UpdateMultiUserInstancesRequest::MemberInstances>> memberInstances_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
