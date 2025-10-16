// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBUNDLESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBUNDLESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribeBundlesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBundlesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BundleId, bundleId_);
      DARABONBA_PTR_TO_JSON(BundleType, bundleType_);
      DARABONBA_PTR_TO_JSON(CheckStock, checkStock_);
      DARABONBA_PTR_TO_JSON(CpuCount, cpuCount_);
      DARABONBA_PTR_TO_JSON(DesktopTypeFamily, desktopTypeFamily_);
      DARABONBA_PTR_TO_JSON(FotaChannel, fotaChannel_);
      DARABONBA_PTR_TO_JSON(FromDesktopGroup, fromDesktopGroup_);
      DARABONBA_PTR_TO_JSON(GpuCount, gpuCount_);
      DARABONBA_PTR_TO_JSON(GpuDriverType, gpuDriverType_);
      DARABONBA_PTR_TO_JSON(ImageId, imageId_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(MemorySize, memorySize_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(OsType, osType_);
      DARABONBA_PTR_TO_JSON(ProtocolType, protocolType_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Scope, scope_);
      DARABONBA_PTR_TO_JSON(SelectedBundle, selectedBundle_);
      DARABONBA_PTR_TO_JSON(SessionType, sessionType_);
      DARABONBA_PTR_TO_JSON(SupportMultiSession, supportMultiSession_);
      DARABONBA_PTR_TO_JSON(VolumeEncryptionEnabled, volumeEncryptionEnabled_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBundlesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BundleId, bundleId_);
      DARABONBA_PTR_FROM_JSON(BundleType, bundleType_);
      DARABONBA_PTR_FROM_JSON(CheckStock, checkStock_);
      DARABONBA_PTR_FROM_JSON(CpuCount, cpuCount_);
      DARABONBA_PTR_FROM_JSON(DesktopTypeFamily, desktopTypeFamily_);
      DARABONBA_PTR_FROM_JSON(FotaChannel, fotaChannel_);
      DARABONBA_PTR_FROM_JSON(FromDesktopGroup, fromDesktopGroup_);
      DARABONBA_PTR_FROM_JSON(GpuCount, gpuCount_);
      DARABONBA_PTR_FROM_JSON(GpuDriverType, gpuDriverType_);
      DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(MemorySize, memorySize_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(OsType, osType_);
      DARABONBA_PTR_FROM_JSON(ProtocolType, protocolType_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Scope, scope_);
      DARABONBA_PTR_FROM_JSON(SelectedBundle, selectedBundle_);
      DARABONBA_PTR_FROM_JSON(SessionType, sessionType_);
      DARABONBA_PTR_FROM_JSON(SupportMultiSession, supportMultiSession_);
      DARABONBA_PTR_FROM_JSON(VolumeEncryptionEnabled, volumeEncryptionEnabled_);
    };
    DescribeBundlesRequest() = default ;
    DescribeBundlesRequest(const DescribeBundlesRequest &) = default ;
    DescribeBundlesRequest(DescribeBundlesRequest &&) = default ;
    DescribeBundlesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBundlesRequest() = default ;
    DescribeBundlesRequest& operator=(const DescribeBundlesRequest &) = default ;
    DescribeBundlesRequest& operator=(DescribeBundlesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bundleId_ == nullptr
        && return this->bundleType_ == nullptr && return this->checkStock_ == nullptr && return this->cpuCount_ == nullptr && return this->desktopTypeFamily_ == nullptr && return this->fotaChannel_ == nullptr
        && return this->fromDesktopGroup_ == nullptr && return this->gpuCount_ == nullptr && return this->gpuDriverType_ == nullptr && return this->imageId_ == nullptr && return this->maxResults_ == nullptr
        && return this->memorySize_ == nullptr && return this->nextToken_ == nullptr && return this->osType_ == nullptr && return this->protocolType_ == nullptr && return this->regionId_ == nullptr
        && return this->scope_ == nullptr && return this->selectedBundle_ == nullptr && return this->sessionType_ == nullptr && return this->supportMultiSession_ == nullptr && return this->volumeEncryptionEnabled_ == nullptr; };
    // bundleId Field Functions 
    bool hasBundleId() const { return this->bundleId_ != nullptr;};
    void deleteBundleId() { this->bundleId_ = nullptr;};
    inline const vector<string> & bundleId() const { DARABONBA_PTR_GET_CONST(bundleId_, vector<string>) };
    inline vector<string> bundleId() { DARABONBA_PTR_GET(bundleId_, vector<string>) };
    inline DescribeBundlesRequest& setBundleId(const vector<string> & bundleId) { DARABONBA_PTR_SET_VALUE(bundleId_, bundleId) };
    inline DescribeBundlesRequest& setBundleId(vector<string> && bundleId) { DARABONBA_PTR_SET_RVALUE(bundleId_, bundleId) };


    // bundleType Field Functions 
    bool hasBundleType() const { return this->bundleType_ != nullptr;};
    void deleteBundleType() { this->bundleType_ = nullptr;};
    inline string bundleType() const { DARABONBA_PTR_GET_DEFAULT(bundleType_, "") };
    inline DescribeBundlesRequest& setBundleType(string bundleType) { DARABONBA_PTR_SET_VALUE(bundleType_, bundleType) };


    // checkStock Field Functions 
    bool hasCheckStock() const { return this->checkStock_ != nullptr;};
    void deleteCheckStock() { this->checkStock_ = nullptr;};
    inline bool checkStock() const { DARABONBA_PTR_GET_DEFAULT(checkStock_, false) };
    inline DescribeBundlesRequest& setCheckStock(bool checkStock) { DARABONBA_PTR_SET_VALUE(checkStock_, checkStock) };


    // cpuCount Field Functions 
    bool hasCpuCount() const { return this->cpuCount_ != nullptr;};
    void deleteCpuCount() { this->cpuCount_ = nullptr;};
    inline int32_t cpuCount() const { DARABONBA_PTR_GET_DEFAULT(cpuCount_, 0) };
    inline DescribeBundlesRequest& setCpuCount(int32_t cpuCount) { DARABONBA_PTR_SET_VALUE(cpuCount_, cpuCount) };


    // desktopTypeFamily Field Functions 
    bool hasDesktopTypeFamily() const { return this->desktopTypeFamily_ != nullptr;};
    void deleteDesktopTypeFamily() { this->desktopTypeFamily_ = nullptr;};
    inline string desktopTypeFamily() const { DARABONBA_PTR_GET_DEFAULT(desktopTypeFamily_, "") };
    inline DescribeBundlesRequest& setDesktopTypeFamily(string desktopTypeFamily) { DARABONBA_PTR_SET_VALUE(desktopTypeFamily_, desktopTypeFamily) };


    // fotaChannel Field Functions 
    bool hasFotaChannel() const { return this->fotaChannel_ != nullptr;};
    void deleteFotaChannel() { this->fotaChannel_ = nullptr;};
    inline string fotaChannel() const { DARABONBA_PTR_GET_DEFAULT(fotaChannel_, "") };
    inline DescribeBundlesRequest& setFotaChannel(string fotaChannel) { DARABONBA_PTR_SET_VALUE(fotaChannel_, fotaChannel) };


    // fromDesktopGroup Field Functions 
    bool hasFromDesktopGroup() const { return this->fromDesktopGroup_ != nullptr;};
    void deleteFromDesktopGroup() { this->fromDesktopGroup_ = nullptr;};
    inline bool fromDesktopGroup() const { DARABONBA_PTR_GET_DEFAULT(fromDesktopGroup_, false) };
    inline DescribeBundlesRequest& setFromDesktopGroup(bool fromDesktopGroup) { DARABONBA_PTR_SET_VALUE(fromDesktopGroup_, fromDesktopGroup) };


    // gpuCount Field Functions 
    bool hasGpuCount() const { return this->gpuCount_ != nullptr;};
    void deleteGpuCount() { this->gpuCount_ = nullptr;};
    inline float gpuCount() const { DARABONBA_PTR_GET_DEFAULT(gpuCount_, 0.0) };
    inline DescribeBundlesRequest& setGpuCount(float gpuCount) { DARABONBA_PTR_SET_VALUE(gpuCount_, gpuCount) };


    // gpuDriverType Field Functions 
    bool hasGpuDriverType() const { return this->gpuDriverType_ != nullptr;};
    void deleteGpuDriverType() { this->gpuDriverType_ = nullptr;};
    inline string gpuDriverType() const { DARABONBA_PTR_GET_DEFAULT(gpuDriverType_, "") };
    inline DescribeBundlesRequest& setGpuDriverType(string gpuDriverType) { DARABONBA_PTR_SET_VALUE(gpuDriverType_, gpuDriverType) };


    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline const vector<string> & imageId() const { DARABONBA_PTR_GET_CONST(imageId_, vector<string>) };
    inline vector<string> imageId() { DARABONBA_PTR_GET(imageId_, vector<string>) };
    inline DescribeBundlesRequest& setImageId(const vector<string> & imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };
    inline DescribeBundlesRequest& setImageId(vector<string> && imageId) { DARABONBA_PTR_SET_RVALUE(imageId_, imageId) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribeBundlesRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // memorySize Field Functions 
    bool hasMemorySize() const { return this->memorySize_ != nullptr;};
    void deleteMemorySize() { this->memorySize_ = nullptr;};
    inline int32_t memorySize() const { DARABONBA_PTR_GET_DEFAULT(memorySize_, 0) };
    inline DescribeBundlesRequest& setMemorySize(int32_t memorySize) { DARABONBA_PTR_SET_VALUE(memorySize_, memorySize) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeBundlesRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // osType Field Functions 
    bool hasOsType() const { return this->osType_ != nullptr;};
    void deleteOsType() { this->osType_ = nullptr;};
    inline string osType() const { DARABONBA_PTR_GET_DEFAULT(osType_, "") };
    inline DescribeBundlesRequest& setOsType(string osType) { DARABONBA_PTR_SET_VALUE(osType_, osType) };


    // protocolType Field Functions 
    bool hasProtocolType() const { return this->protocolType_ != nullptr;};
    void deleteProtocolType() { this->protocolType_ = nullptr;};
    inline string protocolType() const { DARABONBA_PTR_GET_DEFAULT(protocolType_, "") };
    inline DescribeBundlesRequest& setProtocolType(string protocolType) { DARABONBA_PTR_SET_VALUE(protocolType_, protocolType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeBundlesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // scope Field Functions 
    bool hasScope() const { return this->scope_ != nullptr;};
    void deleteScope() { this->scope_ = nullptr;};
    inline string scope() const { DARABONBA_PTR_GET_DEFAULT(scope_, "") };
    inline DescribeBundlesRequest& setScope(string scope) { DARABONBA_PTR_SET_VALUE(scope_, scope) };


    // selectedBundle Field Functions 
    bool hasSelectedBundle() const { return this->selectedBundle_ != nullptr;};
    void deleteSelectedBundle() { this->selectedBundle_ = nullptr;};
    inline bool selectedBundle() const { DARABONBA_PTR_GET_DEFAULT(selectedBundle_, false) };
    inline DescribeBundlesRequest& setSelectedBundle(bool selectedBundle) { DARABONBA_PTR_SET_VALUE(selectedBundle_, selectedBundle) };


    // sessionType Field Functions 
    bool hasSessionType() const { return this->sessionType_ != nullptr;};
    void deleteSessionType() { this->sessionType_ = nullptr;};
    inline string sessionType() const { DARABONBA_PTR_GET_DEFAULT(sessionType_, "") };
    inline DescribeBundlesRequest& setSessionType(string sessionType) { DARABONBA_PTR_SET_VALUE(sessionType_, sessionType) };


    // supportMultiSession Field Functions 
    bool hasSupportMultiSession() const { return this->supportMultiSession_ != nullptr;};
    void deleteSupportMultiSession() { this->supportMultiSession_ = nullptr;};
    inline bool supportMultiSession() const { DARABONBA_PTR_GET_DEFAULT(supportMultiSession_, false) };
    inline DescribeBundlesRequest& setSupportMultiSession(bool supportMultiSession) { DARABONBA_PTR_SET_VALUE(supportMultiSession_, supportMultiSession) };


    // volumeEncryptionEnabled Field Functions 
    bool hasVolumeEncryptionEnabled() const { return this->volumeEncryptionEnabled_ != nullptr;};
    void deleteVolumeEncryptionEnabled() { this->volumeEncryptionEnabled_ = nullptr;};
    inline bool volumeEncryptionEnabled() const { DARABONBA_PTR_GET_DEFAULT(volumeEncryptionEnabled_, false) };
    inline DescribeBundlesRequest& setVolumeEncryptionEnabled(bool volumeEncryptionEnabled) { DARABONBA_PTR_SET_VALUE(volumeEncryptionEnabled_, volumeEncryptionEnabled) };


  protected:
    // The IDs of the cloud computer templates. You can specify 1 to 100 IDs.
    std::shared_ptr<vector<string>> bundleId_ = nullptr;
    // The type of the cloud computer template.
    // 
    // Valid values:
    // 
    // *   SYSTEM: system template
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   CUSTOM: custom template
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    std::shared_ptr<string> bundleType_ = nullptr;
    // Specifies whether to query the inventory status of the cloud computer instance type.
    std::shared_ptr<bool> checkStock_ = nullptr;
    // The number of vCPUs contained in the cloud computer instance type.
    std::shared_ptr<int32_t> cpuCount_ = nullptr;
    // The instance family of the cloud computers.
    // 
    // Valid values:
    // 
    // *   eds.graphics: graphical instance families
    // *   eds.hf: instance families with high clock speeds
    // *   eds.general: general-purpose instance families
    std::shared_ptr<string> desktopTypeFamily_ = nullptr;
    // >  This parameter is not available for public use.
    std::shared_ptr<string> fotaChannel_ = nullptr;
    // Specifies whether the cloud computers in the template belong to a cloud computer pool.
    // 
    // Valid values:
    // 
    // *   true
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   false
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    std::shared_ptr<bool> fromDesktopGroup_ = nullptr;
    // The number of GPUs contained in the cloud computer instance type.
    std::shared_ptr<float> gpuCount_ = nullptr;
    // The GPU driver type.
    // 
    // Valid values:
    // 
    // *   T4
    // *   A10
    // *   G28
    // *   G39
    std::shared_ptr<string> gpuDriverType_ = nullptr;
    // The image IDs.
    std::shared_ptr<vector<string>> imageId_ = nullptr;
    // The number of entries to return on each page.
    // 
    // Maximum value: 100.
    // 
    // Default value: 10.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // The memory size of the cloud computer instance type. Unit: GiB.
    std::shared_ptr<int32_t> memorySize_ = nullptr;
    // The token that is used to start the next query.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The type of the OS.
    // 
    // Valid values:
    // 
    // *   Linux
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   Windows
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    std::shared_ptr<string> osType_ = nullptr;
    // The protocol type.
    // 
    // Valid values:
    // 
    // *   HDX: High-definition Experience (HDX) protocol
    // *   ASP: in-house Adaptive Streaming Protocol (ASP) (recommend)
    std::shared_ptr<string> protocolType_ = nullptr;
    // The region ID. You can call the [DescribeRegions](~~DescribeRegions~~) operation to query the regions supported by Elastic Desktop Service (EDS).
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The scenario to use the image.
    std::shared_ptr<string> scope_ = nullptr;
    // The desktop template that is selected based on specific criteria.
    std::shared_ptr<bool> selectedBundle_ = nullptr;
    // The type of the session. Valide values:
    // 
    // - SingleSession
    // - MultipleSession
    std::shared_ptr<string> sessionType_ = nullptr;
    // Specifies whether to return multi-session cloud computer templates. Default value: false.
    std::shared_ptr<bool> supportMultiSession_ = nullptr;
    // Specifies whether to enable disk encryption.
    std::shared_ptr<bool> volumeEncryptionEnabled_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
