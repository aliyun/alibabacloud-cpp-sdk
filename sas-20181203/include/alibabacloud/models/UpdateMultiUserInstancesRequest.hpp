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
        // Number of cores authorized for the member.
        shared_ptr<int64_t> coreCount_ {};
        // Number of authorizations allocated to the member.
        shared_ptr<int64_t> ecsCount_ {};
        // Version of the Cloud Security Center for the member account. Values:  
        // - **1**: Free Edition 
        // - **3**: Enterprise Edition
        // - **5**: Advanced Edition
        // - **6**: Antivirus Edition    
        // - **7**: Flagship Edition   
        // - **8**: Multiple Versions   
        // - **10**: Only Purchase Value-Added Services
        shared_ptr<int32_t> version_ {};
      };

      virtual bool empty() const override { return this->aliUid_ == nullptr
        && this->antiRansomwareCapacity_ == nullptr && this->chargeType_ == nullptr && this->cspmCapacity_ == nullptr && this->honeypotCapacity_ == nullptr && this->imageScanCapacity_ == nullptr
        && this->instanceId_ == nullptr && this->optType_ == nullptr && this->raspCapacity_ == nullptr && this->sdkCapacity_ == nullptr && this->slsCapacity_ == nullptr
        && this->status_ == nullptr && this->threatAnalysisCapacity_ == nullptr && this->threatAnalysisFlow_ == nullptr && this->version_ == nullptr && this->versionSummary_ == nullptr
        && this->webLockCapacity_ == nullptr; };
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
      // Anti-ransomware capacity allocated to the member, in GB.
      shared_ptr<int64_t> antiRansomwareCapacity_ {};
      // Charge type, values:
      // * **PREPAID**: Prepaid.
      // * **POSTPAID** (default): Postpaid.
      shared_ptr<string> chargeType_ {};
      // Cloud platform configuration check scan count allocated to the member. Unit: times per month.
      shared_ptr<int64_t> cspmCapacity_ {};
      // Honeypot authorization count allocated to the member.
      shared_ptr<int64_t> honeypotCapacity_ {};
      // Image scan authorization count allocated to the member.
      shared_ptr<int64_t> imageScanCapacity_ {};
      // The Cloud Security Center instance ID purchased by the member account.
      shared_ptr<string> instanceId_ {};
      // Operation type. Values:  
      // - **ADD**: Add 
      // - **CHANGE**: Change
      // - **DEL**: Delete
      shared_ptr<string> optType_ {};
      // Application protection count allocated to the member. Unit: per month.
      shared_ptr<int64_t> raspCapacity_ {};
      // Malicious file detection SDK authorization count allocated to the member.
      shared_ptr<int64_t> sdkCapacity_ {};
      // Log storage capacity allocated to the member, in GB.
      shared_ptr<int64_t> slsCapacity_ {};
      // Status of the member account instance. Values: 
      // - **1**: Valid. 
      // - **2**: Invalid.
      shared_ptr<int32_t> status_ {};
      // Threat analysis capacity allocated to the member. Unit: GB.
      shared_ptr<int64_t> threatAnalysisCapacity_ {};
      // Threat analysis and response log access traffic allocated to the member. Unit: GB/day.
      shared_ptr<int64_t> threatAnalysisFlow_ {};
      // The version of Cloud Security Center protection to be bound. Values:  
      // - **1**: Free Edition 
      // - **3**: Enterprise Edition
      // - **5**: Advanced Edition
      // - **6**: Antivirus Edition    
      // - **7**: Flagship Edition
      shared_ptr<string> version_ {};
      // Member account authorization usage information.
      shared_ptr<vector<MemberInstances::VersionSummary>> versionSummary_ {};
      // Web tamper-proof authorization count allocated to the member.
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
    // Member instances.
    shared_ptr<vector<UpdateMultiUserInstancesRequest::MemberInstances>> memberInstances_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
