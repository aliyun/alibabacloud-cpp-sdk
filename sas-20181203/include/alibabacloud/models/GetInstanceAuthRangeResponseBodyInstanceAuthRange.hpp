// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINSTANCEAUTHRANGERESPONSEBODYINSTANCEAUTHRANGE_HPP_
#define ALIBABACLOUD_MODELS_GETINSTANCEAUTHRANGERESPONSEBODYINSTANCEAUTHRANGE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetInstanceAuthRangeResponseBodyInstanceAuthRange : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInstanceAuthRangeResponseBodyInstanceAuthRange& obj) { 
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
    friend void from_json(const Darabonba::Json& j, GetInstanceAuthRangeResponseBodyInstanceAuthRange& obj) { 
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
    GetInstanceAuthRangeResponseBodyInstanceAuthRange() = default ;
    GetInstanceAuthRangeResponseBodyInstanceAuthRange(const GetInstanceAuthRangeResponseBodyInstanceAuthRange &) = default ;
    GetInstanceAuthRangeResponseBodyInstanceAuthRange(GetInstanceAuthRangeResponseBodyInstanceAuthRange &&) = default ;
    GetInstanceAuthRangeResponseBodyInstanceAuthRange(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInstanceAuthRangeResponseBodyInstanceAuthRange() = default ;
    GetInstanceAuthRangeResponseBodyInstanceAuthRange& operator=(const GetInstanceAuthRangeResponseBodyInstanceAuthRange &) = default ;
    GetInstanceAuthRangeResponseBodyInstanceAuthRange& operator=(GetInstanceAuthRangeResponseBodyInstanceAuthRange &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->advancedCount_ == nullptr
        && return this->antiRansomwareCapacity_ == nullptr && return this->antiRansomwareService_ == nullptr && return this->antiVirusCore_ == nullptr && return this->containerCore_ == nullptr && return this->containerCount_ == nullptr
        && return this->cspmCapacity_ == nullptr && return this->enterpriseCount_ == nullptr && return this->honeypotCapacity_ == nullptr && return this->imageScanCapacity_ == nullptr && return this->raspCapacity_ == nullptr
        && return this->sdkCapacity_ == nullptr && return this->slsCapacity_ == nullptr && return this->threatAnalysisCapacity_ == nullptr && return this->threatAnalysisFlow_ == nullptr && return this->webLockCapacity_ == nullptr; };
    // advancedCount Field Functions 
    bool hasAdvancedCount() const { return this->advancedCount_ != nullptr;};
    void deleteAdvancedCount() { this->advancedCount_ = nullptr;};
    inline string advancedCount() const { DARABONBA_PTR_GET_DEFAULT(advancedCount_, "") };
    inline GetInstanceAuthRangeResponseBodyInstanceAuthRange& setAdvancedCount(string advancedCount) { DARABONBA_PTR_SET_VALUE(advancedCount_, advancedCount) };


    // antiRansomwareCapacity Field Functions 
    bool hasAntiRansomwareCapacity() const { return this->antiRansomwareCapacity_ != nullptr;};
    void deleteAntiRansomwareCapacity() { this->antiRansomwareCapacity_ = nullptr;};
    inline string antiRansomwareCapacity() const { DARABONBA_PTR_GET_DEFAULT(antiRansomwareCapacity_, "") };
    inline GetInstanceAuthRangeResponseBodyInstanceAuthRange& setAntiRansomwareCapacity(string antiRansomwareCapacity) { DARABONBA_PTR_SET_VALUE(antiRansomwareCapacity_, antiRansomwareCapacity) };


    // antiRansomwareService Field Functions 
    bool hasAntiRansomwareService() const { return this->antiRansomwareService_ != nullptr;};
    void deleteAntiRansomwareService() { this->antiRansomwareService_ = nullptr;};
    inline int32_t antiRansomwareService() const { DARABONBA_PTR_GET_DEFAULT(antiRansomwareService_, 0) };
    inline GetInstanceAuthRangeResponseBodyInstanceAuthRange& setAntiRansomwareService(int32_t antiRansomwareService) { DARABONBA_PTR_SET_VALUE(antiRansomwareService_, antiRansomwareService) };


    // antiVirusCore Field Functions 
    bool hasAntiVirusCore() const { return this->antiVirusCore_ != nullptr;};
    void deleteAntiVirusCore() { this->antiVirusCore_ = nullptr;};
    inline string antiVirusCore() const { DARABONBA_PTR_GET_DEFAULT(antiVirusCore_, "") };
    inline GetInstanceAuthRangeResponseBodyInstanceAuthRange& setAntiVirusCore(string antiVirusCore) { DARABONBA_PTR_SET_VALUE(antiVirusCore_, antiVirusCore) };


    // containerCore Field Functions 
    bool hasContainerCore() const { return this->containerCore_ != nullptr;};
    void deleteContainerCore() { this->containerCore_ = nullptr;};
    inline string containerCore() const { DARABONBA_PTR_GET_DEFAULT(containerCore_, "") };
    inline GetInstanceAuthRangeResponseBodyInstanceAuthRange& setContainerCore(string containerCore) { DARABONBA_PTR_SET_VALUE(containerCore_, containerCore) };


    // containerCount Field Functions 
    bool hasContainerCount() const { return this->containerCount_ != nullptr;};
    void deleteContainerCount() { this->containerCount_ = nullptr;};
    inline string containerCount() const { DARABONBA_PTR_GET_DEFAULT(containerCount_, "") };
    inline GetInstanceAuthRangeResponseBodyInstanceAuthRange& setContainerCount(string containerCount) { DARABONBA_PTR_SET_VALUE(containerCount_, containerCount) };


    // cspmCapacity Field Functions 
    bool hasCspmCapacity() const { return this->cspmCapacity_ != nullptr;};
    void deleteCspmCapacity() { this->cspmCapacity_ = nullptr;};
    inline string cspmCapacity() const { DARABONBA_PTR_GET_DEFAULT(cspmCapacity_, "") };
    inline GetInstanceAuthRangeResponseBodyInstanceAuthRange& setCspmCapacity(string cspmCapacity) { DARABONBA_PTR_SET_VALUE(cspmCapacity_, cspmCapacity) };


    // enterpriseCount Field Functions 
    bool hasEnterpriseCount() const { return this->enterpriseCount_ != nullptr;};
    void deleteEnterpriseCount() { this->enterpriseCount_ = nullptr;};
    inline string enterpriseCount() const { DARABONBA_PTR_GET_DEFAULT(enterpriseCount_, "") };
    inline GetInstanceAuthRangeResponseBodyInstanceAuthRange& setEnterpriseCount(string enterpriseCount) { DARABONBA_PTR_SET_VALUE(enterpriseCount_, enterpriseCount) };


    // honeypotCapacity Field Functions 
    bool hasHoneypotCapacity() const { return this->honeypotCapacity_ != nullptr;};
    void deleteHoneypotCapacity() { this->honeypotCapacity_ = nullptr;};
    inline string honeypotCapacity() const { DARABONBA_PTR_GET_DEFAULT(honeypotCapacity_, "") };
    inline GetInstanceAuthRangeResponseBodyInstanceAuthRange& setHoneypotCapacity(string honeypotCapacity) { DARABONBA_PTR_SET_VALUE(honeypotCapacity_, honeypotCapacity) };


    // imageScanCapacity Field Functions 
    bool hasImageScanCapacity() const { return this->imageScanCapacity_ != nullptr;};
    void deleteImageScanCapacity() { this->imageScanCapacity_ = nullptr;};
    inline string imageScanCapacity() const { DARABONBA_PTR_GET_DEFAULT(imageScanCapacity_, "") };
    inline GetInstanceAuthRangeResponseBodyInstanceAuthRange& setImageScanCapacity(string imageScanCapacity) { DARABONBA_PTR_SET_VALUE(imageScanCapacity_, imageScanCapacity) };


    // raspCapacity Field Functions 
    bool hasRaspCapacity() const { return this->raspCapacity_ != nullptr;};
    void deleteRaspCapacity() { this->raspCapacity_ = nullptr;};
    inline string raspCapacity() const { DARABONBA_PTR_GET_DEFAULT(raspCapacity_, "") };
    inline GetInstanceAuthRangeResponseBodyInstanceAuthRange& setRaspCapacity(string raspCapacity) { DARABONBA_PTR_SET_VALUE(raspCapacity_, raspCapacity) };


    // sdkCapacity Field Functions 
    bool hasSdkCapacity() const { return this->sdkCapacity_ != nullptr;};
    void deleteSdkCapacity() { this->sdkCapacity_ = nullptr;};
    inline string sdkCapacity() const { DARABONBA_PTR_GET_DEFAULT(sdkCapacity_, "") };
    inline GetInstanceAuthRangeResponseBodyInstanceAuthRange& setSdkCapacity(string sdkCapacity) { DARABONBA_PTR_SET_VALUE(sdkCapacity_, sdkCapacity) };


    // slsCapacity Field Functions 
    bool hasSlsCapacity() const { return this->slsCapacity_ != nullptr;};
    void deleteSlsCapacity() { this->slsCapacity_ = nullptr;};
    inline string slsCapacity() const { DARABONBA_PTR_GET_DEFAULT(slsCapacity_, "") };
    inline GetInstanceAuthRangeResponseBodyInstanceAuthRange& setSlsCapacity(string slsCapacity) { DARABONBA_PTR_SET_VALUE(slsCapacity_, slsCapacity) };


    // threatAnalysisCapacity Field Functions 
    bool hasThreatAnalysisCapacity() const { return this->threatAnalysisCapacity_ != nullptr;};
    void deleteThreatAnalysisCapacity() { this->threatAnalysisCapacity_ = nullptr;};
    inline string threatAnalysisCapacity() const { DARABONBA_PTR_GET_DEFAULT(threatAnalysisCapacity_, "") };
    inline GetInstanceAuthRangeResponseBodyInstanceAuthRange& setThreatAnalysisCapacity(string threatAnalysisCapacity) { DARABONBA_PTR_SET_VALUE(threatAnalysisCapacity_, threatAnalysisCapacity) };


    // threatAnalysisFlow Field Functions 
    bool hasThreatAnalysisFlow() const { return this->threatAnalysisFlow_ != nullptr;};
    void deleteThreatAnalysisFlow() { this->threatAnalysisFlow_ = nullptr;};
    inline string threatAnalysisFlow() const { DARABONBA_PTR_GET_DEFAULT(threatAnalysisFlow_, "") };
    inline GetInstanceAuthRangeResponseBodyInstanceAuthRange& setThreatAnalysisFlow(string threatAnalysisFlow) { DARABONBA_PTR_SET_VALUE(threatAnalysisFlow_, threatAnalysisFlow) };


    // webLockCapacity Field Functions 
    bool hasWebLockCapacity() const { return this->webLockCapacity_ != nullptr;};
    void deleteWebLockCapacity() { this->webLockCapacity_ = nullptr;};
    inline string webLockCapacity() const { DARABONBA_PTR_GET_DEFAULT(webLockCapacity_, "") };
    inline GetInstanceAuthRangeResponseBodyInstanceAuthRange& setWebLockCapacity(string webLockCapacity) { DARABONBA_PTR_SET_VALUE(webLockCapacity_, webLockCapacity) };


  protected:
    std::shared_ptr<string> advancedCount_ = nullptr;
    std::shared_ptr<string> antiRansomwareCapacity_ = nullptr;
    std::shared_ptr<int32_t> antiRansomwareService_ = nullptr;
    std::shared_ptr<string> antiVirusCore_ = nullptr;
    std::shared_ptr<string> containerCore_ = nullptr;
    std::shared_ptr<string> containerCount_ = nullptr;
    std::shared_ptr<string> cspmCapacity_ = nullptr;
    std::shared_ptr<string> enterpriseCount_ = nullptr;
    std::shared_ptr<string> honeypotCapacity_ = nullptr;
    std::shared_ptr<string> imageScanCapacity_ = nullptr;
    std::shared_ptr<string> raspCapacity_ = nullptr;
    std::shared_ptr<string> sdkCapacity_ = nullptr;
    std::shared_ptr<string> slsCapacity_ = nullptr;
    std::shared_ptr<string> threatAnalysisCapacity_ = nullptr;
    std::shared_ptr<string> threatAnalysisFlow_ = nullptr;
    std::shared_ptr<string> webLockCapacity_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
