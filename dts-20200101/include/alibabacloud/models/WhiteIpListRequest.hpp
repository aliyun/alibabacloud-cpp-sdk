// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_WHITEIPLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_WHITEIPLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class WhiteIpListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const WhiteIpListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DestAliyunUid, destAliyunUid_);
      DARABONBA_PTR_TO_JSON(DestPrimaryVswId, destPrimaryVswId_);
      DARABONBA_PTR_TO_JSON(DestRoleName, destRoleName_);
      DARABONBA_PTR_TO_JSON(DestSecondaryVswId, destSecondaryVswId_);
      DARABONBA_PTR_TO_JSON(DestVpcId, destVpcId_);
      DARABONBA_PTR_TO_JSON(DestinationRegion, destinationRegion_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(SrcAliyunUid, srcAliyunUid_);
      DARABONBA_PTR_TO_JSON(SrcPrimaryVswId, srcPrimaryVswId_);
      DARABONBA_PTR_TO_JSON(SrcRoleName, srcRoleName_);
      DARABONBA_PTR_TO_JSON(SrcSecondaryVswId, srcSecondaryVswId_);
      DARABONBA_PTR_TO_JSON(SrcVpcId, srcVpcId_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(ZeroEtlJob, zeroEtlJob_);
    };
    friend void from_json(const Darabonba::Json& j, WhiteIpListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DestAliyunUid, destAliyunUid_);
      DARABONBA_PTR_FROM_JSON(DestPrimaryVswId, destPrimaryVswId_);
      DARABONBA_PTR_FROM_JSON(DestRoleName, destRoleName_);
      DARABONBA_PTR_FROM_JSON(DestSecondaryVswId, destSecondaryVswId_);
      DARABONBA_PTR_FROM_JSON(DestVpcId, destVpcId_);
      DARABONBA_PTR_FROM_JSON(DestinationRegion, destinationRegion_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(SrcAliyunUid, srcAliyunUid_);
      DARABONBA_PTR_FROM_JSON(SrcPrimaryVswId, srcPrimaryVswId_);
      DARABONBA_PTR_FROM_JSON(SrcRoleName, srcRoleName_);
      DARABONBA_PTR_FROM_JSON(SrcSecondaryVswId, srcSecondaryVswId_);
      DARABONBA_PTR_FROM_JSON(SrcVpcId, srcVpcId_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(ZeroEtlJob, zeroEtlJob_);
    };
    WhiteIpListRequest() = default ;
    WhiteIpListRequest(const WhiteIpListRequest &) = default ;
    WhiteIpListRequest(WhiteIpListRequest &&) = default ;
    WhiteIpListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~WhiteIpListRequest() = default ;
    WhiteIpListRequest& operator=(const WhiteIpListRequest &) = default ;
    WhiteIpListRequest& operator=(WhiteIpListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->destAliyunUid_ != nullptr
        && this->destPrimaryVswId_ != nullptr && this->destRoleName_ != nullptr && this->destSecondaryVswId_ != nullptr && this->destVpcId_ != nullptr && this->destinationRegion_ != nullptr
        && this->region_ != nullptr && this->regionId_ != nullptr && this->resourceGroupId_ != nullptr && this->srcAliyunUid_ != nullptr && this->srcPrimaryVswId_ != nullptr
        && this->srcRoleName_ != nullptr && this->srcSecondaryVswId_ != nullptr && this->srcVpcId_ != nullptr && this->type_ != nullptr && this->zeroEtlJob_ != nullptr; };
    // destAliyunUid Field Functions 
    bool hasDestAliyunUid() const { return this->destAliyunUid_ != nullptr;};
    void deleteDestAliyunUid() { this->destAliyunUid_ = nullptr;};
    inline string destAliyunUid() const { DARABONBA_PTR_GET_DEFAULT(destAliyunUid_, "") };
    inline WhiteIpListRequest& setDestAliyunUid(string destAliyunUid) { DARABONBA_PTR_SET_VALUE(destAliyunUid_, destAliyunUid) };


    // destPrimaryVswId Field Functions 
    bool hasDestPrimaryVswId() const { return this->destPrimaryVswId_ != nullptr;};
    void deleteDestPrimaryVswId() { this->destPrimaryVswId_ = nullptr;};
    inline string destPrimaryVswId() const { DARABONBA_PTR_GET_DEFAULT(destPrimaryVswId_, "") };
    inline WhiteIpListRequest& setDestPrimaryVswId(string destPrimaryVswId) { DARABONBA_PTR_SET_VALUE(destPrimaryVswId_, destPrimaryVswId) };


    // destRoleName Field Functions 
    bool hasDestRoleName() const { return this->destRoleName_ != nullptr;};
    void deleteDestRoleName() { this->destRoleName_ = nullptr;};
    inline string destRoleName() const { DARABONBA_PTR_GET_DEFAULT(destRoleName_, "") };
    inline WhiteIpListRequest& setDestRoleName(string destRoleName) { DARABONBA_PTR_SET_VALUE(destRoleName_, destRoleName) };


    // destSecondaryVswId Field Functions 
    bool hasDestSecondaryVswId() const { return this->destSecondaryVswId_ != nullptr;};
    void deleteDestSecondaryVswId() { this->destSecondaryVswId_ = nullptr;};
    inline string destSecondaryVswId() const { DARABONBA_PTR_GET_DEFAULT(destSecondaryVswId_, "") };
    inline WhiteIpListRequest& setDestSecondaryVswId(string destSecondaryVswId) { DARABONBA_PTR_SET_VALUE(destSecondaryVswId_, destSecondaryVswId) };


    // destVpcId Field Functions 
    bool hasDestVpcId() const { return this->destVpcId_ != nullptr;};
    void deleteDestVpcId() { this->destVpcId_ = nullptr;};
    inline string destVpcId() const { DARABONBA_PTR_GET_DEFAULT(destVpcId_, "") };
    inline WhiteIpListRequest& setDestVpcId(string destVpcId) { DARABONBA_PTR_SET_VALUE(destVpcId_, destVpcId) };


    // destinationRegion Field Functions 
    bool hasDestinationRegion() const { return this->destinationRegion_ != nullptr;};
    void deleteDestinationRegion() { this->destinationRegion_ = nullptr;};
    inline string destinationRegion() const { DARABONBA_PTR_GET_DEFAULT(destinationRegion_, "") };
    inline WhiteIpListRequest& setDestinationRegion(string destinationRegion) { DARABONBA_PTR_SET_VALUE(destinationRegion_, destinationRegion) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline WhiteIpListRequest& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline WhiteIpListRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline WhiteIpListRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // srcAliyunUid Field Functions 
    bool hasSrcAliyunUid() const { return this->srcAliyunUid_ != nullptr;};
    void deleteSrcAliyunUid() { this->srcAliyunUid_ = nullptr;};
    inline string srcAliyunUid() const { DARABONBA_PTR_GET_DEFAULT(srcAliyunUid_, "") };
    inline WhiteIpListRequest& setSrcAliyunUid(string srcAliyunUid) { DARABONBA_PTR_SET_VALUE(srcAliyunUid_, srcAliyunUid) };


    // srcPrimaryVswId Field Functions 
    bool hasSrcPrimaryVswId() const { return this->srcPrimaryVswId_ != nullptr;};
    void deleteSrcPrimaryVswId() { this->srcPrimaryVswId_ = nullptr;};
    inline string srcPrimaryVswId() const { DARABONBA_PTR_GET_DEFAULT(srcPrimaryVswId_, "") };
    inline WhiteIpListRequest& setSrcPrimaryVswId(string srcPrimaryVswId) { DARABONBA_PTR_SET_VALUE(srcPrimaryVswId_, srcPrimaryVswId) };


    // srcRoleName Field Functions 
    bool hasSrcRoleName() const { return this->srcRoleName_ != nullptr;};
    void deleteSrcRoleName() { this->srcRoleName_ = nullptr;};
    inline string srcRoleName() const { DARABONBA_PTR_GET_DEFAULT(srcRoleName_, "") };
    inline WhiteIpListRequest& setSrcRoleName(string srcRoleName) { DARABONBA_PTR_SET_VALUE(srcRoleName_, srcRoleName) };


    // srcSecondaryVswId Field Functions 
    bool hasSrcSecondaryVswId() const { return this->srcSecondaryVswId_ != nullptr;};
    void deleteSrcSecondaryVswId() { this->srcSecondaryVswId_ = nullptr;};
    inline string srcSecondaryVswId() const { DARABONBA_PTR_GET_DEFAULT(srcSecondaryVswId_, "") };
    inline WhiteIpListRequest& setSrcSecondaryVswId(string srcSecondaryVswId) { DARABONBA_PTR_SET_VALUE(srcSecondaryVswId_, srcSecondaryVswId) };


    // srcVpcId Field Functions 
    bool hasSrcVpcId() const { return this->srcVpcId_ != nullptr;};
    void deleteSrcVpcId() { this->srcVpcId_ = nullptr;};
    inline string srcVpcId() const { DARABONBA_PTR_GET_DEFAULT(srcVpcId_, "") };
    inline WhiteIpListRequest& setSrcVpcId(string srcVpcId) { DARABONBA_PTR_SET_VALUE(srcVpcId_, srcVpcId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline WhiteIpListRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // zeroEtlJob Field Functions 
    bool hasZeroEtlJob() const { return this->zeroEtlJob_ != nullptr;};
    void deleteZeroEtlJob() { this->zeroEtlJob_ = nullptr;};
    inline bool zeroEtlJob() const { DARABONBA_PTR_GET_DEFAULT(zeroEtlJob_, false) };
    inline WhiteIpListRequest& setZeroEtlJob(bool zeroEtlJob) { DARABONBA_PTR_SET_VALUE(zeroEtlJob_, zeroEtlJob) };


  protected:
    // destination aliyun uid
    std::shared_ptr<string> destAliyunUid_ = nullptr;
    // VPCNAT destination main VSW
    std::shared_ptr<string> destPrimaryVswId_ = nullptr;
    // destination role name
    std::shared_ptr<string> destRoleName_ = nullptr;
    // VPCNAT destination backup VSW
    std::shared_ptr<string> destSecondaryVswId_ = nullptr;
    // source vpc id
    std::shared_ptr<string> destVpcId_ = nullptr;
    // The region ID to which the target instance belongs, please refer to the supported region list for details.
    // >>If the target instance is a self built database or third-party cloud database with a public IP address, you can pass in the cn Hangzhou or the region ID closest to the physical distance of the database.
    //  - When the DTS task is migration or synchronization, this parameter must be passed in.
    std::shared_ptr<string> destinationRegion_ = nullptr;
    // The region ID of the change tracking instance. The region ID is the same as that of the source instance. For more information, see [List of supported regions](https://help.aliyun.com/document_detail/141033.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> region_ = nullptr;
    // The ID of the region where the change tracking instance resides. For more information, see [List of supported regions](https://help.aliyun.com/document_detail/141033.html).
    std::shared_ptr<string> regionId_ = nullptr;
    // Resource group ID.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // source aliyun uid
    std::shared_ptr<string> srcAliyunUid_ = nullptr;
    // VPCNAT source end main VSW
    std::shared_ptr<string> srcPrimaryVswId_ = nullptr;
    // source role Name
    std::shared_ptr<string> srcRoleName_ = nullptr;
    // VPCNAT source backup VSW
    std::shared_ptr<string> srcSecondaryVswId_ = nullptr;
    // source vpc id
    std::shared_ptr<string> srcVpcId_ = nullptr;
    // The access method for self built databases or third-party cloud databases, with a value of
    //  - Internet: accessed through the public network.
    //  - VPC: Connected through dedicated line/VPN gateway/intelligent gateway.
    // 
    // This parameter is required.
    std::shared_ptr<string> type_ = nullptr;
    // Whether it is a seamless integration (Zero-ETL) task, the value can be:
    // - **false**: No. - **true**: Yes.
    std::shared_ptr<bool> zeroEtlJob_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
