// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHANGEZONEDNSGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CHANGEZONEDNSGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Pvtz20180101
{
namespace Models
{
  class ChangeZoneDnsGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ChangeZoneDnsGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DnsGroup, dnsGroup_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, ChangeZoneDnsGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DnsGroup, dnsGroup_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    ChangeZoneDnsGroupRequest() = default ;
    ChangeZoneDnsGroupRequest(const ChangeZoneDnsGroupRequest &) = default ;
    ChangeZoneDnsGroupRequest(ChangeZoneDnsGroupRequest &&) = default ;
    ChangeZoneDnsGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ChangeZoneDnsGroupRequest() = default ;
    ChangeZoneDnsGroupRequest& operator=(const ChangeZoneDnsGroupRequest &) = default ;
    ChangeZoneDnsGroupRequest& operator=(ChangeZoneDnsGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->dnsGroup_ == nullptr && this->zoneId_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline ChangeZoneDnsGroupRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dnsGroup Field Functions 
    bool hasDnsGroup() const { return this->dnsGroup_ != nullptr;};
    void deleteDnsGroup() { this->dnsGroup_ = nullptr;};
    inline string getDnsGroup() const { DARABONBA_PTR_GET_DEFAULT(dnsGroup_, "") };
    inline ChangeZoneDnsGroupRequest& setDnsGroup(string dnsGroup) { DARABONBA_PTR_SET_VALUE(dnsGroup_, dnsGroup) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline ChangeZoneDnsGroupRequest& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the token, but you must make sure that the token is unique among different requests. The token can contain only ASCII characters and cannot exceed 64 characters in length. For more information, see How to ensure idempotence.
    shared_ptr<string> clientToken_ {};
    // The logical location of the built-in authoritative module in which the zone is added. Valid values:
    // 
    // *   Normal zone: regular module
    // *   Fast Zone: acceleration module
    // 
    // This parameter is required.
    shared_ptr<string> dnsGroup_ {};
    // The global ID of the zone.
    // 
    // This parameter is required.
    shared_ptr<string> zoneId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Pvtz20180101
#endif
