// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATETRANSITROUTERVPCATTACHMENTZONESREQUESTADDZONEMAPPINGS_HPP_
#define ALIBABACLOUD_MODELS_UPDATETRANSITROUTERVPCATTACHMENTZONESREQUESTADDZONEMAPPINGS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class UpdateTransitRouterVpcAttachmentZonesRequestAddZoneMappings : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateTransitRouterVpcAttachmentZonesRequestAddZoneMappings& obj) { 
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateTransitRouterVpcAttachmentZonesRequestAddZoneMappings& obj) { 
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    UpdateTransitRouterVpcAttachmentZonesRequestAddZoneMappings() = default ;
    UpdateTransitRouterVpcAttachmentZonesRequestAddZoneMappings(const UpdateTransitRouterVpcAttachmentZonesRequestAddZoneMappings &) = default ;
    UpdateTransitRouterVpcAttachmentZonesRequestAddZoneMappings(UpdateTransitRouterVpcAttachmentZonesRequestAddZoneMappings &&) = default ;
    UpdateTransitRouterVpcAttachmentZonesRequestAddZoneMappings(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateTransitRouterVpcAttachmentZonesRequestAddZoneMappings() = default ;
    UpdateTransitRouterVpcAttachmentZonesRequestAddZoneMappings& operator=(const UpdateTransitRouterVpcAttachmentZonesRequestAddZoneMappings &) = default ;
    UpdateTransitRouterVpcAttachmentZonesRequestAddZoneMappings& operator=(UpdateTransitRouterVpcAttachmentZonesRequestAddZoneMappings &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->vSwitchId_ != nullptr
        && this->zoneId_ != nullptr; };
    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string vSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline UpdateTransitRouterVpcAttachmentZonesRequestAddZoneMappings& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline UpdateTransitRouterVpcAttachmentZonesRequestAddZoneMappings& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // The ID of the vSwitch that you want to add to the VPC connection.
    // 
    // You can specify at most 10 vSwitches in each call.
    // 
    // *   If the VPC connection belongs to the current Alibaba Cloud account, you can call the [DescribeVSwitches](https://help.aliyun.com/document_detail/35748.html) operation to query the IDs of the vSwitches and zones of the VPC.
    // *   If the VPC connection belongs to another Alibaba Cloud account, you can call the [ListGrantVSwitchesToCen](https://help.aliyun.com/document_detail/427599.html) operation to query the IDs of the vSwitches and zones of the VPC.
    std::shared_ptr<string> vSwitchId_ = nullptr;
    // The ID of the zone where the vSwitch that you want to add to the VPC connection is deployed.
    // 
    // You can specify at most 10 vSwitches in each call.
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
