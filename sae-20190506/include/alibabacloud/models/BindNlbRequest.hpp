// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BINDNLBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BINDNLBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class BindNlbRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BindNlbRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AddressType, addressType_);
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(Listeners, listeners_);
      DARABONBA_PTR_TO_JSON(NlbId, nlbId_);
      DARABONBA_PTR_TO_JSON(ZoneMappings, zoneMappings_);
    };
    friend void from_json(const Darabonba::Json& j, BindNlbRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AddressType, addressType_);
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(Listeners, listeners_);
      DARABONBA_PTR_FROM_JSON(NlbId, nlbId_);
      DARABONBA_PTR_FROM_JSON(ZoneMappings, zoneMappings_);
    };
    BindNlbRequest() = default ;
    BindNlbRequest(const BindNlbRequest &) = default ;
    BindNlbRequest(BindNlbRequest &&) = default ;
    BindNlbRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BindNlbRequest() = default ;
    BindNlbRequest& operator=(const BindNlbRequest &) = default ;
    BindNlbRequest& operator=(BindNlbRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->addressType_ == nullptr
        && this->appId_ == nullptr && this->listeners_ == nullptr && this->nlbId_ == nullptr && this->zoneMappings_ == nullptr; };
    // addressType Field Functions 
    bool hasAddressType() const { return this->addressType_ != nullptr;};
    void deleteAddressType() { this->addressType_ = nullptr;};
    inline string getAddressType() const { DARABONBA_PTR_GET_DEFAULT(addressType_, "") };
    inline BindNlbRequest& setAddressType(string addressType) { DARABONBA_PTR_SET_VALUE(addressType_, addressType) };


    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline BindNlbRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // listeners Field Functions 
    bool hasListeners() const { return this->listeners_ != nullptr;};
    void deleteListeners() { this->listeners_ = nullptr;};
    inline string getListeners() const { DARABONBA_PTR_GET_DEFAULT(listeners_, "") };
    inline BindNlbRequest& setListeners(string listeners) { DARABONBA_PTR_SET_VALUE(listeners_, listeners) };


    // nlbId Field Functions 
    bool hasNlbId() const { return this->nlbId_ != nullptr;};
    void deleteNlbId() { this->nlbId_ = nullptr;};
    inline string getNlbId() const { DARABONBA_PTR_GET_DEFAULT(nlbId_, "") };
    inline BindNlbRequest& setNlbId(string nlbId) { DARABONBA_PTR_SET_VALUE(nlbId_, nlbId) };


    // zoneMappings Field Functions 
    bool hasZoneMappings() const { return this->zoneMappings_ != nullptr;};
    void deleteZoneMappings() { this->zoneMappings_ = nullptr;};
    inline string getZoneMappings() const { DARABONBA_PTR_GET_DEFAULT(zoneMappings_, "") };
    inline BindNlbRequest& setZoneMappings(string zoneMappings) { DARABONBA_PTR_SET_VALUE(zoneMappings_, zoneMappings) };


  protected:
    // The address type. Valid values:
    // - Internet: public network address.
    // - Intranet: private network address.
    shared_ptr<string> addressType_ {};
    // The ID of the application.
    shared_ptr<string> appId_ {};
    // The JSON array string of the listeners to be configured. The structure of each listener is as follows:
    // 
    // - **Port**: Integer type, required. The load balancing listener port. Valid values: 0 to 65535.
    // 
    // - **TargetPort**: Integer type, required. The listening port of the container in the instance. Valid values: 0 to 65535.
    // 
    // - **Protocol**: String type, required. The listening protocol. Valid values: TCP, UDP, and TCPSSL.
    // 
    // - **CertIds**: String type, optional. The list of server certificates. This parameter takes effect only for TCPSSL listeners.
    shared_ptr<string> listeners_ {};
    // The ID of the NLB instance.
    shared_ptr<string> nlbId_ {};
    // The JSON string of the zone and vSwitch mapping list. You can add up to 10 zones. If the current region supports two or more zones, you must add at least two zones. The structure of a ZoneMapping is as follows:
    // 
    // - VSwitchId: String type. The vSwitch corresponding to the zone. Each zone can use only one vSwitch and one subnet.
    // 
    // - ZoneId: String type. The zone ID of the Network Load Balancer (NLB) instance.
    shared_ptr<string> zoneMappings_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
