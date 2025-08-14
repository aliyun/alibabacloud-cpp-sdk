// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETRANSITROUTERVPCATTACHMENTSHRINKREQUESTZONEMAPPINGS_HPP_
#define ALIBABACLOUD_MODELS_CREATETRANSITROUTERVPCATTACHMENTSHRINKREQUESTZONEMAPPINGS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class CreateTransitRouterVpcAttachmentShrinkRequestZoneMappings : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTransitRouterVpcAttachmentShrinkRequestZoneMappings& obj) { 
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTransitRouterVpcAttachmentShrinkRequestZoneMappings& obj) { 
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    CreateTransitRouterVpcAttachmentShrinkRequestZoneMappings() = default ;
    CreateTransitRouterVpcAttachmentShrinkRequestZoneMappings(const CreateTransitRouterVpcAttachmentShrinkRequestZoneMappings &) = default ;
    CreateTransitRouterVpcAttachmentShrinkRequestZoneMappings(CreateTransitRouterVpcAttachmentShrinkRequestZoneMappings &&) = default ;
    CreateTransitRouterVpcAttachmentShrinkRequestZoneMappings(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTransitRouterVpcAttachmentShrinkRequestZoneMappings() = default ;
    CreateTransitRouterVpcAttachmentShrinkRequestZoneMappings& operator=(const CreateTransitRouterVpcAttachmentShrinkRequestZoneMappings &) = default ;
    CreateTransitRouterVpcAttachmentShrinkRequestZoneMappings& operator=(CreateTransitRouterVpcAttachmentShrinkRequestZoneMappings &&) = default ;
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
    inline CreateTransitRouterVpcAttachmentShrinkRequestZoneMappings& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline CreateTransitRouterVpcAttachmentShrinkRequestZoneMappings& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // A vSwitch that is deployed in the zone that supports Enterprise Edition transit routers.
    // 
    // You can specify vSwitches for at most 10 zones in each call.
    // 
    // This parameter is required.
    std::shared_ptr<string> vSwitchId_ = nullptr;
    // The ID of the zone that supports Enterprise Edition transit routers.
    // 
    // You can call the [DescribeZones](https://help.aliyun.com/document_detail/36064.html) operation to query the most recent zone list.
    // 
    // You can specify at most 10 zones in each call.
    // 
    // This parameter is required.
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
