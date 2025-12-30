// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDESKTOPMETADATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDESKTOPMETADATARESPONSEBODY_HPP_
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
  class DescribeDesktopMetadataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDesktopMetadataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Desktops, desktops_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDesktopMetadataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Desktops, desktops_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDesktopMetadataResponseBody() = default ;
    DescribeDesktopMetadataResponseBody(const DescribeDesktopMetadataResponseBody &) = default ;
    DescribeDesktopMetadataResponseBody(DescribeDesktopMetadataResponseBody &&) = default ;
    DescribeDesktopMetadataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDesktopMetadataResponseBody() = default ;
    DescribeDesktopMetadataResponseBody& operator=(const DescribeDesktopMetadataResponseBody &) = default ;
    DescribeDesktopMetadataResponseBody& operator=(DescribeDesktopMetadataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Desktops : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Desktops& obj) { 
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
      friend void from_json(const Darabonba::Json& j, Desktops& obj) { 
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
      Desktops() = default ;
      Desktops(const Desktops &) = default ;
      Desktops(Desktops &&) = default ;
      Desktops(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Desktops() = default ;
      Desktops& operator=(const Desktops &) = default ;
      Desktops& operator=(Desktops &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->chargeType_ == nullptr
        && this->creationTime_ == nullptr && this->desktopGroupId_ == nullptr && this->desktopId_ == nullptr && this->desktopName_ == nullptr && this->desktopStatus_ == nullptr
        && this->desktopType_ == nullptr && this->expiredTime_ == nullptr && this->imageId_ == nullptr && this->localName_ == nullptr && this->managementFlags_ == nullptr
        && this->memberEniIp_ == nullptr && this->officeSiteId_ == nullptr && this->platform_ == nullptr && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr
        && this->resourceGroupName_ == nullptr && this->startTime_ == nullptr; };
      // chargeType Field Functions 
      bool hasChargeType() const { return this->chargeType_ != nullptr;};
      void deleteChargeType() { this->chargeType_ = nullptr;};
      inline string getChargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
      inline Desktops& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


      // creationTime Field Functions 
      bool hasCreationTime() const { return this->creationTime_ != nullptr;};
      void deleteCreationTime() { this->creationTime_ = nullptr;};
      inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
      inline Desktops& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


      // desktopGroupId Field Functions 
      bool hasDesktopGroupId() const { return this->desktopGroupId_ != nullptr;};
      void deleteDesktopGroupId() { this->desktopGroupId_ = nullptr;};
      inline string getDesktopGroupId() const { DARABONBA_PTR_GET_DEFAULT(desktopGroupId_, "") };
      inline Desktops& setDesktopGroupId(string desktopGroupId) { DARABONBA_PTR_SET_VALUE(desktopGroupId_, desktopGroupId) };


      // desktopId Field Functions 
      bool hasDesktopId() const { return this->desktopId_ != nullptr;};
      void deleteDesktopId() { this->desktopId_ = nullptr;};
      inline string getDesktopId() const { DARABONBA_PTR_GET_DEFAULT(desktopId_, "") };
      inline Desktops& setDesktopId(string desktopId) { DARABONBA_PTR_SET_VALUE(desktopId_, desktopId) };


      // desktopName Field Functions 
      bool hasDesktopName() const { return this->desktopName_ != nullptr;};
      void deleteDesktopName() { this->desktopName_ = nullptr;};
      inline string getDesktopName() const { DARABONBA_PTR_GET_DEFAULT(desktopName_, "") };
      inline Desktops& setDesktopName(string desktopName) { DARABONBA_PTR_SET_VALUE(desktopName_, desktopName) };


      // desktopStatus Field Functions 
      bool hasDesktopStatus() const { return this->desktopStatus_ != nullptr;};
      void deleteDesktopStatus() { this->desktopStatus_ = nullptr;};
      inline string getDesktopStatus() const { DARABONBA_PTR_GET_DEFAULT(desktopStatus_, "") };
      inline Desktops& setDesktopStatus(string desktopStatus) { DARABONBA_PTR_SET_VALUE(desktopStatus_, desktopStatus) };


      // desktopType Field Functions 
      bool hasDesktopType() const { return this->desktopType_ != nullptr;};
      void deleteDesktopType() { this->desktopType_ = nullptr;};
      inline string getDesktopType() const { DARABONBA_PTR_GET_DEFAULT(desktopType_, "") };
      inline Desktops& setDesktopType(string desktopType) { DARABONBA_PTR_SET_VALUE(desktopType_, desktopType) };


      // expiredTime Field Functions 
      bool hasExpiredTime() const { return this->expiredTime_ != nullptr;};
      void deleteExpiredTime() { this->expiredTime_ = nullptr;};
      inline string getExpiredTime() const { DARABONBA_PTR_GET_DEFAULT(expiredTime_, "") };
      inline Desktops& setExpiredTime(string expiredTime) { DARABONBA_PTR_SET_VALUE(expiredTime_, expiredTime) };


      // imageId Field Functions 
      bool hasImageId() const { return this->imageId_ != nullptr;};
      void deleteImageId() { this->imageId_ = nullptr;};
      inline string getImageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
      inline Desktops& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


      // localName Field Functions 
      bool hasLocalName() const { return this->localName_ != nullptr;};
      void deleteLocalName() { this->localName_ = nullptr;};
      inline string getLocalName() const { DARABONBA_PTR_GET_DEFAULT(localName_, "") };
      inline Desktops& setLocalName(string localName) { DARABONBA_PTR_SET_VALUE(localName_, localName) };


      // managementFlags Field Functions 
      bool hasManagementFlags() const { return this->managementFlags_ != nullptr;};
      void deleteManagementFlags() { this->managementFlags_ = nullptr;};
      inline const vector<string> & getManagementFlags() const { DARABONBA_PTR_GET_CONST(managementFlags_, vector<string>) };
      inline vector<string> getManagementFlags() { DARABONBA_PTR_GET(managementFlags_, vector<string>) };
      inline Desktops& setManagementFlags(const vector<string> & managementFlags) { DARABONBA_PTR_SET_VALUE(managementFlags_, managementFlags) };
      inline Desktops& setManagementFlags(vector<string> && managementFlags) { DARABONBA_PTR_SET_RVALUE(managementFlags_, managementFlags) };


      // memberEniIp Field Functions 
      bool hasMemberEniIp() const { return this->memberEniIp_ != nullptr;};
      void deleteMemberEniIp() { this->memberEniIp_ = nullptr;};
      inline string getMemberEniIp() const { DARABONBA_PTR_GET_DEFAULT(memberEniIp_, "") };
      inline Desktops& setMemberEniIp(string memberEniIp) { DARABONBA_PTR_SET_VALUE(memberEniIp_, memberEniIp) };


      // officeSiteId Field Functions 
      bool hasOfficeSiteId() const { return this->officeSiteId_ != nullptr;};
      void deleteOfficeSiteId() { this->officeSiteId_ = nullptr;};
      inline string getOfficeSiteId() const { DARABONBA_PTR_GET_DEFAULT(officeSiteId_, "") };
      inline Desktops& setOfficeSiteId(string officeSiteId) { DARABONBA_PTR_SET_VALUE(officeSiteId_, officeSiteId) };


      // platform Field Functions 
      bool hasPlatform() const { return this->platform_ != nullptr;};
      void deletePlatform() { this->platform_ = nullptr;};
      inline string getPlatform() const { DARABONBA_PTR_GET_DEFAULT(platform_, "") };
      inline Desktops& setPlatform(string platform) { DARABONBA_PTR_SET_VALUE(platform_, platform) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline Desktops& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // resourceGroupId Field Functions 
      bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
      void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
      inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
      inline Desktops& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


      // resourceGroupName Field Functions 
      bool hasResourceGroupName() const { return this->resourceGroupName_ != nullptr;};
      void deleteResourceGroupName() { this->resourceGroupName_ = nullptr;};
      inline string getResourceGroupName() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupName_, "") };
      inline Desktops& setResourceGroupName(string resourceGroupName) { DARABONBA_PTR_SET_VALUE(resourceGroupName_, resourceGroupName) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
      inline Desktops& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    protected:
      shared_ptr<string> chargeType_ {};
      shared_ptr<string> creationTime_ {};
      shared_ptr<string> desktopGroupId_ {};
      shared_ptr<string> desktopId_ {};
      shared_ptr<string> desktopName_ {};
      shared_ptr<string> desktopStatus_ {};
      shared_ptr<string> desktopType_ {};
      shared_ptr<string> expiredTime_ {};
      shared_ptr<string> imageId_ {};
      shared_ptr<string> localName_ {};
      shared_ptr<vector<string>> managementFlags_ {};
      shared_ptr<string> memberEniIp_ {};
      shared_ptr<string> officeSiteId_ {};
      shared_ptr<string> platform_ {};
      shared_ptr<string> regionId_ {};
      shared_ptr<string> resourceGroupId_ {};
      shared_ptr<string> resourceGroupName_ {};
      shared_ptr<string> startTime_ {};
    };

    virtual bool empty() const override { return this->desktops_ == nullptr
        && this->nextToken_ == nullptr && this->requestId_ == nullptr; };
    // desktops Field Functions 
    bool hasDesktops() const { return this->desktops_ != nullptr;};
    void deleteDesktops() { this->desktops_ = nullptr;};
    inline const vector<DescribeDesktopMetadataResponseBody::Desktops> & getDesktops() const { DARABONBA_PTR_GET_CONST(desktops_, vector<DescribeDesktopMetadataResponseBody::Desktops>) };
    inline vector<DescribeDesktopMetadataResponseBody::Desktops> getDesktops() { DARABONBA_PTR_GET(desktops_, vector<DescribeDesktopMetadataResponseBody::Desktops>) };
    inline DescribeDesktopMetadataResponseBody& setDesktops(const vector<DescribeDesktopMetadataResponseBody::Desktops> & desktops) { DARABONBA_PTR_SET_VALUE(desktops_, desktops) };
    inline DescribeDesktopMetadataResponseBody& setDesktops(vector<DescribeDesktopMetadataResponseBody::Desktops> && desktops) { DARABONBA_PTR_SET_RVALUE(desktops_, desktops) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeDesktopMetadataResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDesktopMetadataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<DescribeDesktopMetadataResponseBody::Desktops>> desktops_ {};
    shared_ptr<string> nextToken_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
