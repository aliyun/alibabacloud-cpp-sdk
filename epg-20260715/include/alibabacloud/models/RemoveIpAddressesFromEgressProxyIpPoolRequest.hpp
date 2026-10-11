// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REMOVEIPADDRESSESFROMEGRESSPROXYIPPOOLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REMOVEIPADDRESSESFROMEGRESSPROXYIPPOOLREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EPG20260715
{
namespace Models
{
  class RemoveIpAddressesFromEgressProxyIpPoolRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RemoveIpAddressesFromEgressProxyIpPoolRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(EgressProxyIpPoolId, egressProxyIpPoolId_);
      DARABONBA_PTR_TO_JSON(ZoneMappings, zoneMappings_);
    };
    friend void from_json(const Darabonba::Json& j, RemoveIpAddressesFromEgressProxyIpPoolRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(EgressProxyIpPoolId, egressProxyIpPoolId_);
      DARABONBA_PTR_FROM_JSON(ZoneMappings, zoneMappings_);
    };
    RemoveIpAddressesFromEgressProxyIpPoolRequest() = default ;
    RemoveIpAddressesFromEgressProxyIpPoolRequest(const RemoveIpAddressesFromEgressProxyIpPoolRequest &) = default ;
    RemoveIpAddressesFromEgressProxyIpPoolRequest(RemoveIpAddressesFromEgressProxyIpPoolRequest &&) = default ;
    RemoveIpAddressesFromEgressProxyIpPoolRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RemoveIpAddressesFromEgressProxyIpPoolRequest() = default ;
    RemoveIpAddressesFromEgressProxyIpPoolRequest& operator=(const RemoveIpAddressesFromEgressProxyIpPoolRequest &) = default ;
    RemoveIpAddressesFromEgressProxyIpPoolRequest& operator=(RemoveIpAddressesFromEgressProxyIpPoolRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ZoneMappings : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ZoneMappings& obj) { 
        DARABONBA_PTR_TO_JSON(IpAddresses, ipAddresses_);
        DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
      };
      friend void from_json(const Darabonba::Json& j, ZoneMappings& obj) { 
        DARABONBA_PTR_FROM_JSON(IpAddresses, ipAddresses_);
        DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
      };
      ZoneMappings() = default ;
      ZoneMappings(const ZoneMappings &) = default ;
      ZoneMappings(ZoneMappings &&) = default ;
      ZoneMappings(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ZoneMappings() = default ;
      ZoneMappings& operator=(const ZoneMappings &) = default ;
      ZoneMappings& operator=(ZoneMappings &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class IpAddresses : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const IpAddresses& obj) { 
          DARABONBA_PTR_TO_JSON(EipAllocationId, eipAllocationId_);
          DARABONBA_PTR_TO_JSON(PrivateIpv4Address, privateIpv4Address_);
        };
        friend void from_json(const Darabonba::Json& j, IpAddresses& obj) { 
          DARABONBA_PTR_FROM_JSON(EipAllocationId, eipAllocationId_);
          DARABONBA_PTR_FROM_JSON(PrivateIpv4Address, privateIpv4Address_);
        };
        IpAddresses() = default ;
        IpAddresses(const IpAddresses &) = default ;
        IpAddresses(IpAddresses &&) = default ;
        IpAddresses(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~IpAddresses() = default ;
        IpAddresses& operator=(const IpAddresses &) = default ;
        IpAddresses& operator=(IpAddresses &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->eipAllocationId_ == nullptr
        && this->privateIpv4Address_ == nullptr; };
        // eipAllocationId Field Functions 
        bool hasEipAllocationId() const { return this->eipAllocationId_ != nullptr;};
        void deleteEipAllocationId() { this->eipAllocationId_ = nullptr;};
        inline string getEipAllocationId() const { DARABONBA_PTR_GET_DEFAULT(eipAllocationId_, "") };
        inline IpAddresses& setEipAllocationId(string eipAllocationId) { DARABONBA_PTR_SET_VALUE(eipAllocationId_, eipAllocationId) };


        // privateIpv4Address Field Functions 
        bool hasPrivateIpv4Address() const { return this->privateIpv4Address_ != nullptr;};
        void deletePrivateIpv4Address() { this->privateIpv4Address_ = nullptr;};
        inline string getPrivateIpv4Address() const { DARABONBA_PTR_GET_DEFAULT(privateIpv4Address_, "") };
        inline IpAddresses& setPrivateIpv4Address(string privateIpv4Address) { DARABONBA_PTR_SET_VALUE(privateIpv4Address_, privateIpv4Address) };


      protected:
        shared_ptr<string> eipAllocationId_ {};
        shared_ptr<string> privateIpv4Address_ {};
      };

      virtual bool empty() const override { return this->ipAddresses_ == nullptr
        && this->zoneId_ == nullptr; };
      // ipAddresses Field Functions 
      bool hasIpAddresses() const { return this->ipAddresses_ != nullptr;};
      void deleteIpAddresses() { this->ipAddresses_ = nullptr;};
      inline const vector<ZoneMappings::IpAddresses> & getIpAddresses() const { DARABONBA_PTR_GET_CONST(ipAddresses_, vector<ZoneMappings::IpAddresses>) };
      inline vector<ZoneMappings::IpAddresses> getIpAddresses() { DARABONBA_PTR_GET(ipAddresses_, vector<ZoneMappings::IpAddresses>) };
      inline ZoneMappings& setIpAddresses(const vector<ZoneMappings::IpAddresses> & ipAddresses) { DARABONBA_PTR_SET_VALUE(ipAddresses_, ipAddresses) };
      inline ZoneMappings& setIpAddresses(vector<ZoneMappings::IpAddresses> && ipAddresses) { DARABONBA_PTR_SET_RVALUE(ipAddresses_, ipAddresses) };


      // zoneId Field Functions 
      bool hasZoneId() const { return this->zoneId_ != nullptr;};
      void deleteZoneId() { this->zoneId_ = nullptr;};
      inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
      inline ZoneMappings& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


    protected:
      // This parameter is required.
      shared_ptr<vector<ZoneMappings::IpAddresses>> ipAddresses_ {};
      // This parameter is required.
      shared_ptr<string> zoneId_ {};
    };

    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->dryRun_ == nullptr && this->egressProxyIpPoolId_ == nullptr && this->zoneMappings_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline RemoveIpAddressesFromEgressProxyIpPoolRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline RemoveIpAddressesFromEgressProxyIpPoolRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // egressProxyIpPoolId Field Functions 
    bool hasEgressProxyIpPoolId() const { return this->egressProxyIpPoolId_ != nullptr;};
    void deleteEgressProxyIpPoolId() { this->egressProxyIpPoolId_ = nullptr;};
    inline string getEgressProxyIpPoolId() const { DARABONBA_PTR_GET_DEFAULT(egressProxyIpPoolId_, "") };
    inline RemoveIpAddressesFromEgressProxyIpPoolRequest& setEgressProxyIpPoolId(string egressProxyIpPoolId) { DARABONBA_PTR_SET_VALUE(egressProxyIpPoolId_, egressProxyIpPoolId) };


    // zoneMappings Field Functions 
    bool hasZoneMappings() const { return this->zoneMappings_ != nullptr;};
    void deleteZoneMappings() { this->zoneMappings_ = nullptr;};
    inline const vector<RemoveIpAddressesFromEgressProxyIpPoolRequest::ZoneMappings> & getZoneMappings() const { DARABONBA_PTR_GET_CONST(zoneMappings_, vector<RemoveIpAddressesFromEgressProxyIpPoolRequest::ZoneMappings>) };
    inline vector<RemoveIpAddressesFromEgressProxyIpPoolRequest::ZoneMappings> getZoneMappings() { DARABONBA_PTR_GET(zoneMappings_, vector<RemoveIpAddressesFromEgressProxyIpPoolRequest::ZoneMappings>) };
    inline RemoveIpAddressesFromEgressProxyIpPoolRequest& setZoneMappings(const vector<RemoveIpAddressesFromEgressProxyIpPoolRequest::ZoneMappings> & zoneMappings) { DARABONBA_PTR_SET_VALUE(zoneMappings_, zoneMappings) };
    inline RemoveIpAddressesFromEgressProxyIpPoolRequest& setZoneMappings(vector<RemoveIpAddressesFromEgressProxyIpPoolRequest::ZoneMappings> && zoneMappings) { DARABONBA_PTR_SET_RVALUE(zoneMappings_, zoneMappings) };


  protected:
    shared_ptr<string> clientToken_ {};
    shared_ptr<bool> dryRun_ {};
    // This parameter is required.
    shared_ptr<string> egressProxyIpPoolId_ {};
    // This parameter is required.
    shared_ptr<vector<RemoveIpAddressesFromEgressProxyIpPoolRequest::ZoneMappings>> zoneMappings_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EPG20260715
#endif
