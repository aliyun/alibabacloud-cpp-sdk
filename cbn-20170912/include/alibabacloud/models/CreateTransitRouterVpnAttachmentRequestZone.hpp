// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETRANSITROUTERVPNATTACHMENTREQUESTZONE_HPP_
#define ALIBABACLOUD_MODELS_CREATETRANSITROUTERVPNATTACHMENTREQUESTZONE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class CreateTransitRouterVpnAttachmentRequestZone : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTransitRouterVpnAttachmentRequestZone& obj) { 
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTransitRouterVpnAttachmentRequestZone& obj) { 
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    CreateTransitRouterVpnAttachmentRequestZone() = default ;
    CreateTransitRouterVpnAttachmentRequestZone(const CreateTransitRouterVpnAttachmentRequestZone &) = default ;
    CreateTransitRouterVpnAttachmentRequestZone(CreateTransitRouterVpnAttachmentRequestZone &&) = default ;
    CreateTransitRouterVpnAttachmentRequestZone(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTransitRouterVpnAttachmentRequestZone() = default ;
    CreateTransitRouterVpnAttachmentRequestZone& operator=(const CreateTransitRouterVpnAttachmentRequestZone &) = default ;
    CreateTransitRouterVpnAttachmentRequestZone& operator=(CreateTransitRouterVpnAttachmentRequestZone &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->zoneId_ != nullptr; };
    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline CreateTransitRouterVpnAttachmentRequestZone& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // The zone ID of the read-only instance.
    // 
    // You can call the [ListTransitRouterAvailableResource](https://help.aliyun.com/document_detail/261356.html) operation to query the most recent zone list.
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
