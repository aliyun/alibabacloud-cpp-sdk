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
    virtual bool empty() const override { this->addressType_ != nullptr
        && this->appId_ != nullptr && this->listeners_ != nullptr && this->nlbId_ != nullptr && this->zoneMappings_ != nullptr; };
    // addressType Field Functions 
    bool hasAddressType() const { return this->addressType_ != nullptr;};
    void deleteAddressType() { this->addressType_ = nullptr;};
    inline string addressType() const { DARABONBA_PTR_GET_DEFAULT(addressType_, "") };
    inline BindNlbRequest& setAddressType(string addressType) { DARABONBA_PTR_SET_VALUE(addressType_, addressType) };


    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline BindNlbRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // listeners Field Functions 
    bool hasListeners() const { return this->listeners_ != nullptr;};
    void deleteListeners() { this->listeners_ = nullptr;};
    inline string listeners() const { DARABONBA_PTR_GET_DEFAULT(listeners_, "") };
    inline BindNlbRequest& setListeners(string listeners) { DARABONBA_PTR_SET_VALUE(listeners_, listeners) };


    // nlbId Field Functions 
    bool hasNlbId() const { return this->nlbId_ != nullptr;};
    void deleteNlbId() { this->nlbId_ = nullptr;};
    inline string nlbId() const { DARABONBA_PTR_GET_DEFAULT(nlbId_, "") };
    inline BindNlbRequest& setNlbId(string nlbId) { DARABONBA_PTR_SET_VALUE(nlbId_, nlbId) };


    // zoneMappings Field Functions 
    bool hasZoneMappings() const { return this->zoneMappings_ != nullptr;};
    void deleteZoneMappings() { this->zoneMappings_ = nullptr;};
    inline string zoneMappings() const { DARABONBA_PTR_GET_DEFAULT(zoneMappings_, "") };
    inline BindNlbRequest& setZoneMappings(string zoneMappings) { DARABONBA_PTR_SET_VALUE(zoneMappings_, zoneMappings) };


  protected:
    // The type of the IP addresses. Valid values:
    // 
    // *   Internet: public endpoint.
    // *   Intranet: private endpoint.
    std::shared_ptr<string> addressType_ = nullptr;
    // The ID of the application to which the NLB instance is bound.
    std::shared_ptr<string> appId_ = nullptr;
    // The listener that you want to manage. The value is a string that consists of JSON arrays. Each listener contains the following fields:
    // 
    // *   **port**: the port number of the NLB listener. This field is required. Data type: integer. Valid values: 0 to 65535.
    // *   **TargetPort**: the port number of the container listener. This field is required. Data type: integer. Valid values: 0 to 65535.
    // *   **Protocol**: the listener protocol. This field is required. Data type: string. Valid values: TCP, UDP, and TCPSSL.
    // *   **CertIds**: the IDs of the server certificates. This field is optional. Data type: string. This field is supported only by TCPSSL listeners.
    std::shared_ptr<string> listeners_ = nullptr;
    // The ID of the NLB instance.
    std::shared_ptr<string> nlbId_ = nullptr;
    // The mappings between zones and vSwitches. The value is a JSON string. You can specify at most 10 zones. If the region supports two or more zones, specify at least two zones. A ZoneMapping contains the following fields:
    // 
    // *   The ID of the vSwitch in the zone. Each zone can contain only one vSwitch and one subnet. Data type: string.
    // *   The zone ID of the NLB instance. Data type: string.
    std::shared_ptr<string> zoneMappings_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
