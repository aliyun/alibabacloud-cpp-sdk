// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDESKTOPMETADATARESPONSEBODYDESKTOPS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDESKTOPMETADATARESPONSEBODYDESKTOPS_HPP_
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
  class DescribeDesktopMetadataResponseBodyDesktops : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDesktopMetadataResponseBodyDesktops& obj) { 
      DARABONBA_PTR_TO_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(DesktopGroupId, desktopGroupId_);
      DARABONBA_PTR_TO_JSON(DesktopId, desktopId_);
      DARABONBA_PTR_TO_JSON(DesktopName, desktopName_);
      DARABONBA_PTR_TO_JSON(DesktopStatus, desktopStatus_);
      DARABONBA_PTR_TO_JSON(DesktopType, desktopType_);
      DARABONBA_PTR_TO_JSON(ExpiredTime, expiredTime_);
      DARABONBA_PTR_TO_JSON(ImageId, imageId_);
      DARABONBA_PTR_TO_JSON(LocalName, localName_);
      DARABONBA_PTR_TO_JSON(ManagementFlags, managementFlags_);
      DARABONBA_PTR_TO_JSON(MemberEniIp, memberEniIp_);
      DARABONBA_PTR_TO_JSON(OfficeSiteId, officeSiteId_);
      DARABONBA_PTR_TO_JSON(Platform, platform_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupName, resourceGroupName_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDesktopMetadataResponseBodyDesktops& obj) { 
      DARABONBA_PTR_FROM_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(DesktopGroupId, desktopGroupId_);
      DARABONBA_PTR_FROM_JSON(DesktopId, desktopId_);
      DARABONBA_PTR_FROM_JSON(DesktopName, desktopName_);
      DARABONBA_PTR_FROM_JSON(DesktopStatus, desktopStatus_);
      DARABONBA_PTR_FROM_JSON(DesktopType, desktopType_);
      DARABONBA_PTR_FROM_JSON(ExpiredTime, expiredTime_);
      DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
      DARABONBA_PTR_FROM_JSON(LocalName, localName_);
      DARABONBA_PTR_FROM_JSON(ManagementFlags, managementFlags_);
      DARABONBA_PTR_FROM_JSON(MemberEniIp, memberEniIp_);
      DARABONBA_PTR_FROM_JSON(OfficeSiteId, officeSiteId_);
      DARABONBA_PTR_FROM_JSON(Platform, platform_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupName, resourceGroupName_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeDesktopMetadataResponseBodyDesktops() = default ;
    DescribeDesktopMetadataResponseBodyDesktops(const DescribeDesktopMetadataResponseBodyDesktops &) = default ;
    DescribeDesktopMetadataResponseBodyDesktops(DescribeDesktopMetadataResponseBodyDesktops &&) = default ;
    DescribeDesktopMetadataResponseBodyDesktops(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDesktopMetadataResponseBodyDesktops() = default ;
    DescribeDesktopMetadataResponseBodyDesktops& operator=(const DescribeDesktopMetadataResponseBodyDesktops &) = default ;
    DescribeDesktopMetadataResponseBodyDesktops& operator=(DescribeDesktopMetadataResponseBodyDesktops &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->chargeType_ == nullptr
        && return this->creationTime_ == nullptr && return this->desktopGroupId_ == nullptr && return this->desktopId_ == nullptr && return this->desktopName_ == nullptr && return this->desktopStatus_ == nullptr
        && return this->desktopType_ == nullptr && return this->expiredTime_ == nullptr && return this->imageId_ == nullptr && return this->localName_ == nullptr && return this->managementFlags_ == nullptr
        && return this->memberEniIp_ == nullptr && return this->officeSiteId_ == nullptr && return this->platform_ == nullptr && return this->regionId_ == nullptr && return this->resourceGroupId_ == nullptr
        && return this->resourceGroupName_ == nullptr && return this->startTime_ == nullptr; };
    // chargeType Field Functions 
    bool hasChargeType() const { return this->chargeType_ != nullptr;};
    void deleteChargeType() { this->chargeType_ = nullptr;};
    inline string chargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
    inline DescribeDesktopMetadataResponseBodyDesktops& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline DescribeDesktopMetadataResponseBodyDesktops& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // desktopGroupId Field Functions 
    bool hasDesktopGroupId() const { return this->desktopGroupId_ != nullptr;};
    void deleteDesktopGroupId() { this->desktopGroupId_ = nullptr;};
    inline string desktopGroupId() const { DARABONBA_PTR_GET_DEFAULT(desktopGroupId_, "") };
    inline DescribeDesktopMetadataResponseBodyDesktops& setDesktopGroupId(string desktopGroupId) { DARABONBA_PTR_SET_VALUE(desktopGroupId_, desktopGroupId) };


    // desktopId Field Functions 
    bool hasDesktopId() const { return this->desktopId_ != nullptr;};
    void deleteDesktopId() { this->desktopId_ = nullptr;};
    inline string desktopId() const { DARABONBA_PTR_GET_DEFAULT(desktopId_, "") };
    inline DescribeDesktopMetadataResponseBodyDesktops& setDesktopId(string desktopId) { DARABONBA_PTR_SET_VALUE(desktopId_, desktopId) };


    // desktopName Field Functions 
    bool hasDesktopName() const { return this->desktopName_ != nullptr;};
    void deleteDesktopName() { this->desktopName_ = nullptr;};
    inline string desktopName() const { DARABONBA_PTR_GET_DEFAULT(desktopName_, "") };
    inline DescribeDesktopMetadataResponseBodyDesktops& setDesktopName(string desktopName) { DARABONBA_PTR_SET_VALUE(desktopName_, desktopName) };


    // desktopStatus Field Functions 
    bool hasDesktopStatus() const { return this->desktopStatus_ != nullptr;};
    void deleteDesktopStatus() { this->desktopStatus_ = nullptr;};
    inline string desktopStatus() const { DARABONBA_PTR_GET_DEFAULT(desktopStatus_, "") };
    inline DescribeDesktopMetadataResponseBodyDesktops& setDesktopStatus(string desktopStatus) { DARABONBA_PTR_SET_VALUE(desktopStatus_, desktopStatus) };


    // desktopType Field Functions 
    bool hasDesktopType() const { return this->desktopType_ != nullptr;};
    void deleteDesktopType() { this->desktopType_ = nullptr;};
    inline string desktopType() const { DARABONBA_PTR_GET_DEFAULT(desktopType_, "") };
    inline DescribeDesktopMetadataResponseBodyDesktops& setDesktopType(string desktopType) { DARABONBA_PTR_SET_VALUE(desktopType_, desktopType) };


    // expiredTime Field Functions 
    bool hasExpiredTime() const { return this->expiredTime_ != nullptr;};
    void deleteExpiredTime() { this->expiredTime_ = nullptr;};
    inline string expiredTime() const { DARABONBA_PTR_GET_DEFAULT(expiredTime_, "") };
    inline DescribeDesktopMetadataResponseBodyDesktops& setExpiredTime(string expiredTime) { DARABONBA_PTR_SET_VALUE(expiredTime_, expiredTime) };


    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string imageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline DescribeDesktopMetadataResponseBodyDesktops& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // localName Field Functions 
    bool hasLocalName() const { return this->localName_ != nullptr;};
    void deleteLocalName() { this->localName_ = nullptr;};
    inline string localName() const { DARABONBA_PTR_GET_DEFAULT(localName_, "") };
    inline DescribeDesktopMetadataResponseBodyDesktops& setLocalName(string localName) { DARABONBA_PTR_SET_VALUE(localName_, localName) };


    // managementFlags Field Functions 
    bool hasManagementFlags() const { return this->managementFlags_ != nullptr;};
    void deleteManagementFlags() { this->managementFlags_ = nullptr;};
    inline const vector<string> & managementFlags() const { DARABONBA_PTR_GET_CONST(managementFlags_, vector<string>) };
    inline vector<string> managementFlags() { DARABONBA_PTR_GET(managementFlags_, vector<string>) };
    inline DescribeDesktopMetadataResponseBodyDesktops& setManagementFlags(const vector<string> & managementFlags) { DARABONBA_PTR_SET_VALUE(managementFlags_, managementFlags) };
    inline DescribeDesktopMetadataResponseBodyDesktops& setManagementFlags(vector<string> && managementFlags) { DARABONBA_PTR_SET_RVALUE(managementFlags_, managementFlags) };


    // memberEniIp Field Functions 
    bool hasMemberEniIp() const { return this->memberEniIp_ != nullptr;};
    void deleteMemberEniIp() { this->memberEniIp_ = nullptr;};
    inline string memberEniIp() const { DARABONBA_PTR_GET_DEFAULT(memberEniIp_, "") };
    inline DescribeDesktopMetadataResponseBodyDesktops& setMemberEniIp(string memberEniIp) { DARABONBA_PTR_SET_VALUE(memberEniIp_, memberEniIp) };


    // officeSiteId Field Functions 
    bool hasOfficeSiteId() const { return this->officeSiteId_ != nullptr;};
    void deleteOfficeSiteId() { this->officeSiteId_ = nullptr;};
    inline string officeSiteId() const { DARABONBA_PTR_GET_DEFAULT(officeSiteId_, "") };
    inline DescribeDesktopMetadataResponseBodyDesktops& setOfficeSiteId(string officeSiteId) { DARABONBA_PTR_SET_VALUE(officeSiteId_, officeSiteId) };


    // platform Field Functions 
    bool hasPlatform() const { return this->platform_ != nullptr;};
    void deletePlatform() { this->platform_ = nullptr;};
    inline string platform() const { DARABONBA_PTR_GET_DEFAULT(platform_, "") };
    inline DescribeDesktopMetadataResponseBodyDesktops& setPlatform(string platform) { DARABONBA_PTR_SET_VALUE(platform_, platform) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeDesktopMetadataResponseBodyDesktops& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeDesktopMetadataResponseBodyDesktops& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceGroupName Field Functions 
    bool hasResourceGroupName() const { return this->resourceGroupName_ != nullptr;};
    void deleteResourceGroupName() { this->resourceGroupName_ = nullptr;};
    inline string resourceGroupName() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupName_, "") };
    inline DescribeDesktopMetadataResponseBodyDesktops& setResourceGroupName(string resourceGroupName) { DARABONBA_PTR_SET_VALUE(resourceGroupName_, resourceGroupName) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeDesktopMetadataResponseBodyDesktops& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    std::shared_ptr<string> chargeType_ = nullptr;
    std::shared_ptr<string> creationTime_ = nullptr;
    std::shared_ptr<string> desktopGroupId_ = nullptr;
    std::shared_ptr<string> desktopId_ = nullptr;
    std::shared_ptr<string> desktopName_ = nullptr;
    std::shared_ptr<string> desktopStatus_ = nullptr;
    std::shared_ptr<string> desktopType_ = nullptr;
    std::shared_ptr<string> expiredTime_ = nullptr;
    std::shared_ptr<string> imageId_ = nullptr;
    std::shared_ptr<string> localName_ = nullptr;
    std::shared_ptr<vector<string>> managementFlags_ = nullptr;
    std::shared_ptr<string> memberEniIp_ = nullptr;
    std::shared_ptr<string> officeSiteId_ = nullptr;
    std::shared_ptr<string> platform_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    std::shared_ptr<string> resourceGroupName_ = nullptr;
    std::shared_ptr<string> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
