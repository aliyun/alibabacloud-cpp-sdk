// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTRANSITROUTERVPCATTACHMENTSRESPONSEBODYTRANSITROUTERATTACHMENTSZONEMAPPINGS_HPP_
#define ALIBABACLOUD_MODELS_LISTTRANSITROUTERVPCATTACHMENTSRESPONSEBODYTRANSITROUTERATTACHMENTSZONEMAPPINGS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class ListTransitRouterVpcAttachmentsResponseBodyTransitRouterAttachmentsZoneMappings : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTransitRouterVpcAttachmentsResponseBodyTransitRouterAttachmentsZoneMappings& obj) { 
      DARABONBA_PTR_TO_JSON(NetworkInterfaceId, networkInterfaceId_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, ListTransitRouterVpcAttachmentsResponseBodyTransitRouterAttachmentsZoneMappings& obj) { 
      DARABONBA_PTR_FROM_JSON(NetworkInterfaceId, networkInterfaceId_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    ListTransitRouterVpcAttachmentsResponseBodyTransitRouterAttachmentsZoneMappings() = default ;
    ListTransitRouterVpcAttachmentsResponseBodyTransitRouterAttachmentsZoneMappings(const ListTransitRouterVpcAttachmentsResponseBodyTransitRouterAttachmentsZoneMappings &) = default ;
    ListTransitRouterVpcAttachmentsResponseBodyTransitRouterAttachmentsZoneMappings(ListTransitRouterVpcAttachmentsResponseBodyTransitRouterAttachmentsZoneMappings &&) = default ;
    ListTransitRouterVpcAttachmentsResponseBodyTransitRouterAttachmentsZoneMappings(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTransitRouterVpcAttachmentsResponseBodyTransitRouterAttachmentsZoneMappings() = default ;
    ListTransitRouterVpcAttachmentsResponseBodyTransitRouterAttachmentsZoneMappings& operator=(const ListTransitRouterVpcAttachmentsResponseBodyTransitRouterAttachmentsZoneMappings &) = default ;
    ListTransitRouterVpcAttachmentsResponseBodyTransitRouterAttachmentsZoneMappings& operator=(ListTransitRouterVpcAttachmentsResponseBodyTransitRouterAttachmentsZoneMappings &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->networkInterfaceId_ != nullptr
        && this->vSwitchId_ != nullptr && this->zoneId_ != nullptr; };
    // networkInterfaceId Field Functions 
    bool hasNetworkInterfaceId() const { return this->networkInterfaceId_ != nullptr;};
    void deleteNetworkInterfaceId() { this->networkInterfaceId_ = nullptr;};
    inline string networkInterfaceId() const { DARABONBA_PTR_GET_DEFAULT(networkInterfaceId_, "") };
    inline ListTransitRouterVpcAttachmentsResponseBodyTransitRouterAttachmentsZoneMappings& setNetworkInterfaceId(string networkInterfaceId) { DARABONBA_PTR_SET_VALUE(networkInterfaceId_, networkInterfaceId) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string vSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline ListTransitRouterVpcAttachmentsResponseBodyTransitRouterAttachmentsZoneMappings& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline ListTransitRouterVpcAttachmentsResponseBodyTransitRouterAttachmentsZoneMappings& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // The ID of the ENI created by the Enterprise Edition transit router in the vSwitch.
    std::shared_ptr<string> networkInterfaceId_ = nullptr;
    // The vSwitch ID.
    std::shared_ptr<string> vSwitchId_ = nullptr;
    // The zone ID.
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
