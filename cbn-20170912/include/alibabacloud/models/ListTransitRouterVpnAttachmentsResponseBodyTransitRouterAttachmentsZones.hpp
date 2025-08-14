// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTRANSITROUTERVPNATTACHMENTSRESPONSEBODYTRANSITROUTERATTACHMENTSZONES_HPP_
#define ALIBABACLOUD_MODELS_LISTTRANSITROUTERVPNATTACHMENTSRESPONSEBODYTRANSITROUTERATTACHMENTSZONES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class ListTransitRouterVpnAttachmentsResponseBodyTransitRouterAttachmentsZones : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTransitRouterVpnAttachmentsResponseBodyTransitRouterAttachmentsZones& obj) { 
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, ListTransitRouterVpnAttachmentsResponseBodyTransitRouterAttachmentsZones& obj) { 
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    ListTransitRouterVpnAttachmentsResponseBodyTransitRouterAttachmentsZones() = default ;
    ListTransitRouterVpnAttachmentsResponseBodyTransitRouterAttachmentsZones(const ListTransitRouterVpnAttachmentsResponseBodyTransitRouterAttachmentsZones &) = default ;
    ListTransitRouterVpnAttachmentsResponseBodyTransitRouterAttachmentsZones(ListTransitRouterVpnAttachmentsResponseBodyTransitRouterAttachmentsZones &&) = default ;
    ListTransitRouterVpnAttachmentsResponseBodyTransitRouterAttachmentsZones(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTransitRouterVpnAttachmentsResponseBodyTransitRouterAttachmentsZones() = default ;
    ListTransitRouterVpnAttachmentsResponseBodyTransitRouterAttachmentsZones& operator=(const ListTransitRouterVpnAttachmentsResponseBodyTransitRouterAttachmentsZones &) = default ;
    ListTransitRouterVpnAttachmentsResponseBodyTransitRouterAttachmentsZones& operator=(ListTransitRouterVpnAttachmentsResponseBodyTransitRouterAttachmentsZones &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->zoneId_ != nullptr; };
    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline ListTransitRouterVpnAttachmentsResponseBodyTransitRouterAttachmentsZones& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // The zone ID.
    // 
    // You can call the [DescribeZones](https://help.aliyun.com/document_detail/36064.html) operation to query the most recent zone list.
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
