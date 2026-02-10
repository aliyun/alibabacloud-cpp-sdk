// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINSTANCEAUTHRANGERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETINSTANCEAUTHRANGERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetInstanceAuthRangeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInstanceAuthRangeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceAuthRange, instanceAuthRange_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetInstanceAuthRangeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceAuthRange, instanceAuthRange_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetInstanceAuthRangeResponseBody() = default ;
    GetInstanceAuthRangeResponseBody(const GetInstanceAuthRangeResponseBody &) = default ;
    GetInstanceAuthRangeResponseBody(GetInstanceAuthRangeResponseBody &&) = default ;
    GetInstanceAuthRangeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInstanceAuthRangeResponseBody() = default ;
    GetInstanceAuthRangeResponseBody& operator=(const GetInstanceAuthRangeResponseBody &) = default ;
    GetInstanceAuthRangeResponseBody& operator=(GetInstanceAuthRangeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class InstanceAuthRange : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const InstanceAuthRange& obj) { 
        DARABONBA_PTR_TO_JSON(AdvancedCount, advancedCount_);
        DARABONBA_PTR_TO_JSON(AntiRansomwareCapacity, antiRansomwareCapacity_);
        DARABONBA_PTR_TO_JSON(AntiRansomwareService, antiRansomwareService_);
        DARABONBA_PTR_TO_JSON(AntiVirusCore, antiVirusCore_);
        DARABONBA_PTR_TO_JSON(ContainerCore, containerCore_);
        DARABONBA_PTR_TO_JSON(ContainerCount, containerCount_);
        DARABONBA_PTR_TO_JSON(CspmCapacity, cspmCapacity_);
        DARABONBA_PTR_TO_JSON(EnterpriseCount, enterpriseCount_);
        DARABONBA_PTR_TO_JSON(HoneypotCapacity, honeypotCapacity_);
        DARABONBA_PTR_TO_JSON(ImageScanCapacity, imageScanCapacity_);
        DARABONBA_PTR_TO_JSON(RaspCapacity, raspCapacity_);
        DARABONBA_PTR_TO_JSON(SdkCapacity, sdkCapacity_);
        DARABONBA_PTR_TO_JSON(SlsCapacity, slsCapacity_);
        DARABONBA_PTR_TO_JSON(ThreatAnalysisCapacity, threatAnalysisCapacity_);
        DARABONBA_PTR_TO_JSON(ThreatAnalysisFlow, threatAnalysisFlow_);
        DARABONBA_PTR_TO_JSON(WebLockCapacity, webLockCapacity_);
      };
      friend void from_json(const Darabonba::Json& j, InstanceAuthRange& obj) { 
        DARABONBA_PTR_FROM_JSON(AdvancedCount, advancedCount_);
        DARABONBA_PTR_FROM_JSON(AntiRansomwareCapacity, antiRansomwareCapacity_);
        DARABONBA_PTR_FROM_JSON(AntiRansomwareService, antiRansomwareService_);
        DARABONBA_PTR_FROM_JSON(AntiVirusCore, antiVirusCore_);
        DARABONBA_PTR_FROM_JSON(ContainerCore, containerCore_);
        DARABONBA_PTR_FROM_JSON(ContainerCount, containerCount_);
        DARABONBA_PTR_FROM_JSON(CspmCapacity, cspmCapacity_);
        DARABONBA_PTR_FROM_JSON(EnterpriseCount, enterpriseCount_);
        DARABONBA_PTR_FROM_JSON(HoneypotCapacity, honeypotCapacity_);
        DARABONBA_PTR_FROM_JSON(ImageScanCapacity, imageScanCapacity_);
        DARABONBA_PTR_FROM_JSON(RaspCapacity, raspCapacity_);
        DARABONBA_PTR_FROM_JSON(SdkCapacity, sdkCapacity_);
        DARABONBA_PTR_FROM_JSON(SlsCapacity, slsCapacity_);
        DARABONBA_PTR_FROM_JSON(ThreatAnalysisCapacity, threatAnalysisCapacity_);
        DARABONBA_PTR_FROM_JSON(ThreatAnalysisFlow, threatAnalysisFlow_);
        DARABONBA_PTR_FROM_JSON(WebLockCapacity, webLockCapacity_);
      };
      InstanceAuthRange() = default ;
      InstanceAuthRange(const InstanceAuthRange &) = default ;
      InstanceAuthRange(InstanceAuthRange &&) = default ;
      InstanceAuthRange(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~InstanceAuthRange() = default ;
      InstanceAuthRange& operator=(const InstanceAuthRange &) = default ;
      InstanceAuthRange& operator=(InstanceAuthRange &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->advancedCount_ == nullptr
        && this->antiRansomwareCapacity_ == nullptr && this->antiRansomwareService_ == nullptr && this->antiVirusCore_ == nullptr && this->containerCore_ == nullptr && this->containerCount_ == nullptr
        && this->cspmCapacity_ == nullptr && this->enterpriseCount_ == nullptr && this->honeypotCapacity_ == nullptr && this->imageScanCapacity_ == nullptr && this->raspCapacity_ == nullptr
        && this->sdkCapacity_ == nullptr && this->slsCapacity_ == nullptr && this->threatAnalysisCapacity_ == nullptr && this->threatAnalysisFlow_ == nullptr && this->webLockCapacity_ == nullptr; };
      // advancedCount Field Functions 
      bool hasAdvancedCount() const { return this->advancedCount_ != nullptr;};
      void deleteAdvancedCount() { this->advancedCount_ = nullptr;};
      inline string getAdvancedCount() const { DARABONBA_PTR_GET_DEFAULT(advancedCount_, "") };
      inline InstanceAuthRange& setAdvancedCount(string advancedCount) { DARABONBA_PTR_SET_VALUE(advancedCount_, advancedCount) };


      // antiRansomwareCapacity Field Functions 
      bool hasAntiRansomwareCapacity() const { return this->antiRansomwareCapacity_ != nullptr;};
      void deleteAntiRansomwareCapacity() { this->antiRansomwareCapacity_ = nullptr;};
      inline string getAntiRansomwareCapacity() const { DARABONBA_PTR_GET_DEFAULT(antiRansomwareCapacity_, "") };
      inline InstanceAuthRange& setAntiRansomwareCapacity(string antiRansomwareCapacity) { DARABONBA_PTR_SET_VALUE(antiRansomwareCapacity_, antiRansomwareCapacity) };


      // antiRansomwareService Field Functions 
      bool hasAntiRansomwareService() const { return this->antiRansomwareService_ != nullptr;};
      void deleteAntiRansomwareService() { this->antiRansomwareService_ = nullptr;};
      inline int32_t getAntiRansomwareService() const { DARABONBA_PTR_GET_DEFAULT(antiRansomwareService_, 0) };
      inline InstanceAuthRange& setAntiRansomwareService(int32_t antiRansomwareService) { DARABONBA_PTR_SET_VALUE(antiRansomwareService_, antiRansomwareService) };


      // antiVirusCore Field Functions 
      bool hasAntiVirusCore() const { return this->antiVirusCore_ != nullptr;};
      void deleteAntiVirusCore() { this->antiVirusCore_ = nullptr;};
      inline string getAntiVirusCore() const { DARABONBA_PTR_GET_DEFAULT(antiVirusCore_, "") };
      inline InstanceAuthRange& setAntiVirusCore(string antiVirusCore) { DARABONBA_PTR_SET_VALUE(antiVirusCore_, antiVirusCore) };


      // containerCore Field Functions 
      bool hasContainerCore() const { return this->containerCore_ != nullptr;};
      void deleteContainerCore() { this->containerCore_ = nullptr;};
      inline string getContainerCore() const { DARABONBA_PTR_GET_DEFAULT(containerCore_, "") };
      inline InstanceAuthRange& setContainerCore(string containerCore) { DARABONBA_PTR_SET_VALUE(containerCore_, containerCore) };


      // containerCount Field Functions 
      bool hasContainerCount() const { return this->containerCount_ != nullptr;};
      void deleteContainerCount() { this->containerCount_ = nullptr;};
      inline string getContainerCount() const { DARABONBA_PTR_GET_DEFAULT(containerCount_, "") };
      inline InstanceAuthRange& setContainerCount(string containerCount) { DARABONBA_PTR_SET_VALUE(containerCount_, containerCount) };


      // cspmCapacity Field Functions 
      bool hasCspmCapacity() const { return this->cspmCapacity_ != nullptr;};
      void deleteCspmCapacity() { this->cspmCapacity_ = nullptr;};
      inline string getCspmCapacity() const { DARABONBA_PTR_GET_DEFAULT(cspmCapacity_, "") };
      inline InstanceAuthRange& setCspmCapacity(string cspmCapacity) { DARABONBA_PTR_SET_VALUE(cspmCapacity_, cspmCapacity) };


      // enterpriseCount Field Functions 
      bool hasEnterpriseCount() const { return this->enterpriseCount_ != nullptr;};
      void deleteEnterpriseCount() { this->enterpriseCount_ = nullptr;};
      inline string getEnterpriseCount() const { DARABONBA_PTR_GET_DEFAULT(enterpriseCount_, "") };
      inline InstanceAuthRange& setEnterpriseCount(string enterpriseCount) { DARABONBA_PTR_SET_VALUE(enterpriseCount_, enterpriseCount) };


      // honeypotCapacity Field Functions 
      bool hasHoneypotCapacity() const { return this->honeypotCapacity_ != nullptr;};
      void deleteHoneypotCapacity() { this->honeypotCapacity_ = nullptr;};
      inline string getHoneypotCapacity() const { DARABONBA_PTR_GET_DEFAULT(honeypotCapacity_, "") };
      inline InstanceAuthRange& setHoneypotCapacity(string honeypotCapacity) { DARABONBA_PTR_SET_VALUE(honeypotCapacity_, honeypotCapacity) };


      // imageScanCapacity Field Functions 
      bool hasImageScanCapacity() const { return this->imageScanCapacity_ != nullptr;};
      void deleteImageScanCapacity() { this->imageScanCapacity_ = nullptr;};
      inline string getImageScanCapacity() const { DARABONBA_PTR_GET_DEFAULT(imageScanCapacity_, "") };
      inline InstanceAuthRange& setImageScanCapacity(string imageScanCapacity) { DARABONBA_PTR_SET_VALUE(imageScanCapacity_, imageScanCapacity) };


      // raspCapacity Field Functions 
      bool hasRaspCapacity() const { return this->raspCapacity_ != nullptr;};
      void deleteRaspCapacity() { this->raspCapacity_ = nullptr;};
      inline string getRaspCapacity() const { DARABONBA_PTR_GET_DEFAULT(raspCapacity_, "") };
      inline InstanceAuthRange& setRaspCapacity(string raspCapacity) { DARABONBA_PTR_SET_VALUE(raspCapacity_, raspCapacity) };


      // sdkCapacity Field Functions 
      bool hasSdkCapacity() const { return this->sdkCapacity_ != nullptr;};
      void deleteSdkCapacity() { this->sdkCapacity_ = nullptr;};
      inline string getSdkCapacity() const { DARABONBA_PTR_GET_DEFAULT(sdkCapacity_, "") };
      inline InstanceAuthRange& setSdkCapacity(string sdkCapacity) { DARABONBA_PTR_SET_VALUE(sdkCapacity_, sdkCapacity) };


      // slsCapacity Field Functions 
      bool hasSlsCapacity() const { return this->slsCapacity_ != nullptr;};
      void deleteSlsCapacity() { this->slsCapacity_ = nullptr;};
      inline string getSlsCapacity() const { DARABONBA_PTR_GET_DEFAULT(slsCapacity_, "") };
      inline InstanceAuthRange& setSlsCapacity(string slsCapacity) { DARABONBA_PTR_SET_VALUE(slsCapacity_, slsCapacity) };


      // threatAnalysisCapacity Field Functions 
      bool hasThreatAnalysisCapacity() const { return this->threatAnalysisCapacity_ != nullptr;};
      void deleteThreatAnalysisCapacity() { this->threatAnalysisCapacity_ = nullptr;};
      inline string getThreatAnalysisCapacity() const { DARABONBA_PTR_GET_DEFAULT(threatAnalysisCapacity_, "") };
      inline InstanceAuthRange& setThreatAnalysisCapacity(string threatAnalysisCapacity) { DARABONBA_PTR_SET_VALUE(threatAnalysisCapacity_, threatAnalysisCapacity) };


      // threatAnalysisFlow Field Functions 
      bool hasThreatAnalysisFlow() const { return this->threatAnalysisFlow_ != nullptr;};
      void deleteThreatAnalysisFlow() { this->threatAnalysisFlow_ = nullptr;};
      inline string getThreatAnalysisFlow() const { DARABONBA_PTR_GET_DEFAULT(threatAnalysisFlow_, "") };
      inline InstanceAuthRange& setThreatAnalysisFlow(string threatAnalysisFlow) { DARABONBA_PTR_SET_VALUE(threatAnalysisFlow_, threatAnalysisFlow) };


      // webLockCapacity Field Functions 
      bool hasWebLockCapacity() const { return this->webLockCapacity_ != nullptr;};
      void deleteWebLockCapacity() { this->webLockCapacity_ = nullptr;};
      inline string getWebLockCapacity() const { DARABONBA_PTR_GET_DEFAULT(webLockCapacity_, "") };
      inline InstanceAuthRange& setWebLockCapacity(string webLockCapacity) { DARABONBA_PTR_SET_VALUE(webLockCapacity_, webLockCapacity) };


    protected:
      // Advanced version count. Values:
      // 
      // - **1-2000000000**: Range
      // - **1**: Step
      shared_ptr<string> advancedCount_ {};
      // Anti-ransomware capacity. Values:
      // 
      // - **1-9000000000**: Range
      // - **10**: Step
      shared_ptr<string> antiRansomwareCapacity_ {};
      // Anti-ransomware service. Values:
      // - **0**: Not enabled
      // - **1**: Enabled
      shared_ptr<int32_t> antiRansomwareService_ {};
      // Anti-virus core count. Values:
      // 
      // - **1-2000000000**: Range
      // - **1**: Step
      shared_ptr<string> antiVirusCore_ {};
      // Flagship version core count. Values:
      // 
      // - **1-2000000000**: Range
      // - **1**: Step
      shared_ptr<string> containerCore_ {};
      // Flagship version count. Values:
      // 
      // - **1-2000000000**: Range
      // - **1**: Step
      shared_ptr<string> containerCount_ {};
      // Number of cloud platform configuration check scans. Value:
      // 
      // - **15000-9999999999**：Range
      // - **55000**：Step
      shared_ptr<string> cspmCapacity_ {};
      // Enterprise version count. Range:
      // - **Value**: 1-2000000000
      // - **Step**: 1
      shared_ptr<string> enterpriseCount_ {};
      // Number of authorized honeypots. Value:
      // 
      // - **20-500**：Range
      // - **1**：Step
      shared_ptr<string> honeypotCapacity_ {};
      // Image scan authorization count. Values:
      // 
      // - **1-200000**: Range
      // - **20**: Step
      shared_ptr<string> imageScanCapacity_ {};
      // Application protection count. Values:
      // 
      // - **1-100000000**: Range
      // - **1**: Step
      shared_ptr<string> raspCapacity_ {};
      // Number of authorized malicious file detection SDKs. Value:
      // 
      // - **10-9999999999**：Range
      // - **10**：Step
      shared_ptr<string> sdkCapacity_ {};
      // Log storage capacity. Values:
      // 
      // - **1-600000000**: Range
      // - **10**: Step
      shared_ptr<string> slsCapacity_ {};
      // Threat analysis capacity. Values:
      // 
      // - **1-9999999999**: Range
      // - **1000**: Step
      shared_ptr<string> threatAnalysisCapacity_ {};
      // Threat analysis and response log access traffic. Values:
      // 
      // - **1-9999999999**: Range
      // - **100**: Step
      shared_ptr<string> threatAnalysisFlow_ {};
      // Web tamper-proof authorization count. Values:
      // 
      // - **1-9999**: Range
      // - **1**: Step
      shared_ptr<string> webLockCapacity_ {};
    };

    virtual bool empty() const override { return this->instanceAuthRange_ == nullptr
        && this->requestId_ == nullptr; };
    // instanceAuthRange Field Functions 
    bool hasInstanceAuthRange() const { return this->instanceAuthRange_ != nullptr;};
    void deleteInstanceAuthRange() { this->instanceAuthRange_ = nullptr;};
    inline const GetInstanceAuthRangeResponseBody::InstanceAuthRange & getInstanceAuthRange() const { DARABONBA_PTR_GET_CONST(instanceAuthRange_, GetInstanceAuthRangeResponseBody::InstanceAuthRange) };
    inline GetInstanceAuthRangeResponseBody::InstanceAuthRange getInstanceAuthRange() { DARABONBA_PTR_GET(instanceAuthRange_, GetInstanceAuthRangeResponseBody::InstanceAuthRange) };
    inline GetInstanceAuthRangeResponseBody& setInstanceAuthRange(const GetInstanceAuthRangeResponseBody::InstanceAuthRange & instanceAuthRange) { DARABONBA_PTR_SET_VALUE(instanceAuthRange_, instanceAuthRange) };
    inline GetInstanceAuthRangeResponseBody& setInstanceAuthRange(GetInstanceAuthRangeResponseBody::InstanceAuthRange && instanceAuthRange) { DARABONBA_PTR_SET_RVALUE(instanceAuthRange_, instanceAuthRange) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetInstanceAuthRangeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Instance range validation
    shared_ptr<GetInstanceAuthRangeResponseBody::InstanceAuthRange> instanceAuthRange_ {};
    // The ID of the current call request, which is a unique identifier generated by Alibaba Cloud for this request and can be used to troubleshoot and locate issues.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
