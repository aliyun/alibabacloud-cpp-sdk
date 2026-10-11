// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEEGRESSPROXYIPPOOLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEEGRESSPROXYIPPOOLREQUEST_HPP_
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
  class CreateEgressProxyIpPoolRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateEgressProxyIpPoolRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AddressType, addressType_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(EgressProxyGatewayId, egressProxyGatewayId_);
      DARABONBA_PTR_TO_JSON(EgressProxyIpPoolName, egressProxyIpPoolName_);
      DARABONBA_PTR_TO_JSON(HashFactor, hashFactor_);
      DARABONBA_PTR_TO_JSON(HashHeaderName, hashHeaderName_);
      DARABONBA_PTR_TO_JSON(Scheduler, scheduler_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(ZoneMappings, zoneMappings_);
    };
    friend void from_json(const Darabonba::Json& j, CreateEgressProxyIpPoolRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AddressType, addressType_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(EgressProxyGatewayId, egressProxyGatewayId_);
      DARABONBA_PTR_FROM_JSON(EgressProxyIpPoolName, egressProxyIpPoolName_);
      DARABONBA_PTR_FROM_JSON(HashFactor, hashFactor_);
      DARABONBA_PTR_FROM_JSON(HashHeaderName, hashHeaderName_);
      DARABONBA_PTR_FROM_JSON(Scheduler, scheduler_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(ZoneMappings, zoneMappings_);
    };
    CreateEgressProxyIpPoolRequest() = default ;
    CreateEgressProxyIpPoolRequest(const CreateEgressProxyIpPoolRequest &) = default ;
    CreateEgressProxyIpPoolRequest(CreateEgressProxyIpPoolRequest &&) = default ;
    CreateEgressProxyIpPoolRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateEgressProxyIpPoolRequest() = default ;
    CreateEgressProxyIpPoolRequest& operator=(const CreateEgressProxyIpPoolRequest &) = default ;
    CreateEgressProxyIpPoolRequest& operator=(CreateEgressProxyIpPoolRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ZoneMappings : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ZoneMappings& obj) { 
        DARABONBA_PTR_TO_JSON(IpAddresses, ipAddresses_);
        DARABONBA_PTR_TO_JSON(IpCount, ipCount_);
        DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
        DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
      };
      friend void from_json(const Darabonba::Json& j, ZoneMappings& obj) { 
        DARABONBA_PTR_FROM_JSON(IpAddresses, ipAddresses_);
        DARABONBA_PTR_FROM_JSON(IpCount, ipCount_);
        DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
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
        && this->ipCount_ == nullptr && this->vSwitchId_ == nullptr && this->zoneId_ == nullptr; };
      // ipAddresses Field Functions 
      bool hasIpAddresses() const { return this->ipAddresses_ != nullptr;};
      void deleteIpAddresses() { this->ipAddresses_ = nullptr;};
      inline const vector<ZoneMappings::IpAddresses> & getIpAddresses() const { DARABONBA_PTR_GET_CONST(ipAddresses_, vector<ZoneMappings::IpAddresses>) };
      inline vector<ZoneMappings::IpAddresses> getIpAddresses() { DARABONBA_PTR_GET(ipAddresses_, vector<ZoneMappings::IpAddresses>) };
      inline ZoneMappings& setIpAddresses(const vector<ZoneMappings::IpAddresses> & ipAddresses) { DARABONBA_PTR_SET_VALUE(ipAddresses_, ipAddresses) };
      inline ZoneMappings& setIpAddresses(vector<ZoneMappings::IpAddresses> && ipAddresses) { DARABONBA_PTR_SET_RVALUE(ipAddresses_, ipAddresses) };


      // ipCount Field Functions 
      bool hasIpCount() const { return this->ipCount_ != nullptr;};
      void deleteIpCount() { this->ipCount_ = nullptr;};
      inline int32_t getIpCount() const { DARABONBA_PTR_GET_DEFAULT(ipCount_, 0) };
      inline ZoneMappings& setIpCount(int32_t ipCount) { DARABONBA_PTR_SET_VALUE(ipCount_, ipCount) };


      // vSwitchId Field Functions 
      bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
      void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
      inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
      inline ZoneMappings& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


      // zoneId Field Functions 
      bool hasZoneId() const { return this->zoneId_ != nullptr;};
      void deleteZoneId() { this->zoneId_ = nullptr;};
      inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
      inline ZoneMappings& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


    protected:
      shared_ptr<vector<ZoneMappings::IpAddresses>> ipAddresses_ {};
      shared_ptr<int32_t> ipCount_ {};
      // This parameter is required.
      shared_ptr<string> vSwitchId_ {};
      // This parameter is required.
      shared_ptr<string> zoneId_ {};
    };

    class Tag : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tag& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Tag& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      Tag() = default ;
      Tag(const Tag &) = default ;
      Tag(Tag &&) = default ;
      Tag(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Tag() = default ;
      Tag& operator=(const Tag &) = default ;
      Tag& operator=(Tag &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline Tag& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Tag& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      shared_ptr<string> key_ {};
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->addressType_ == nullptr
        && this->clientToken_ == nullptr && this->description_ == nullptr && this->dryRun_ == nullptr && this->egressProxyGatewayId_ == nullptr && this->egressProxyIpPoolName_ == nullptr
        && this->hashFactor_ == nullptr && this->hashHeaderName_ == nullptr && this->scheduler_ == nullptr && this->tag_ == nullptr && this->zoneMappings_ == nullptr; };
    // addressType Field Functions 
    bool hasAddressType() const { return this->addressType_ != nullptr;};
    void deleteAddressType() { this->addressType_ = nullptr;};
    inline string getAddressType() const { DARABONBA_PTR_GET_DEFAULT(addressType_, "") };
    inline CreateEgressProxyIpPoolRequest& setAddressType(string addressType) { DARABONBA_PTR_SET_VALUE(addressType_, addressType) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateEgressProxyIpPoolRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateEgressProxyIpPoolRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline CreateEgressProxyIpPoolRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // egressProxyGatewayId Field Functions 
    bool hasEgressProxyGatewayId() const { return this->egressProxyGatewayId_ != nullptr;};
    void deleteEgressProxyGatewayId() { this->egressProxyGatewayId_ = nullptr;};
    inline string getEgressProxyGatewayId() const { DARABONBA_PTR_GET_DEFAULT(egressProxyGatewayId_, "") };
    inline CreateEgressProxyIpPoolRequest& setEgressProxyGatewayId(string egressProxyGatewayId) { DARABONBA_PTR_SET_VALUE(egressProxyGatewayId_, egressProxyGatewayId) };


    // egressProxyIpPoolName Field Functions 
    bool hasEgressProxyIpPoolName() const { return this->egressProxyIpPoolName_ != nullptr;};
    void deleteEgressProxyIpPoolName() { this->egressProxyIpPoolName_ = nullptr;};
    inline string getEgressProxyIpPoolName() const { DARABONBA_PTR_GET_DEFAULT(egressProxyIpPoolName_, "") };
    inline CreateEgressProxyIpPoolRequest& setEgressProxyIpPoolName(string egressProxyIpPoolName) { DARABONBA_PTR_SET_VALUE(egressProxyIpPoolName_, egressProxyIpPoolName) };


    // hashFactor Field Functions 
    bool hasHashFactor() const { return this->hashFactor_ != nullptr;};
    void deleteHashFactor() { this->hashFactor_ = nullptr;};
    inline string getHashFactor() const { DARABONBA_PTR_GET_DEFAULT(hashFactor_, "") };
    inline CreateEgressProxyIpPoolRequest& setHashFactor(string hashFactor) { DARABONBA_PTR_SET_VALUE(hashFactor_, hashFactor) };


    // hashHeaderName Field Functions 
    bool hasHashHeaderName() const { return this->hashHeaderName_ != nullptr;};
    void deleteHashHeaderName() { this->hashHeaderName_ = nullptr;};
    inline string getHashHeaderName() const { DARABONBA_PTR_GET_DEFAULT(hashHeaderName_, "") };
    inline CreateEgressProxyIpPoolRequest& setHashHeaderName(string hashHeaderName) { DARABONBA_PTR_SET_VALUE(hashHeaderName_, hashHeaderName) };


    // scheduler Field Functions 
    bool hasScheduler() const { return this->scheduler_ != nullptr;};
    void deleteScheduler() { this->scheduler_ = nullptr;};
    inline string getScheduler() const { DARABONBA_PTR_GET_DEFAULT(scheduler_, "") };
    inline CreateEgressProxyIpPoolRequest& setScheduler(string scheduler) { DARABONBA_PTR_SET_VALUE(scheduler_, scheduler) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<CreateEgressProxyIpPoolRequest::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<CreateEgressProxyIpPoolRequest::Tag>) };
    inline vector<CreateEgressProxyIpPoolRequest::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<CreateEgressProxyIpPoolRequest::Tag>) };
    inline CreateEgressProxyIpPoolRequest& setTag(const vector<CreateEgressProxyIpPoolRequest::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline CreateEgressProxyIpPoolRequest& setTag(vector<CreateEgressProxyIpPoolRequest::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // zoneMappings Field Functions 
    bool hasZoneMappings() const { return this->zoneMappings_ != nullptr;};
    void deleteZoneMappings() { this->zoneMappings_ = nullptr;};
    inline const vector<CreateEgressProxyIpPoolRequest::ZoneMappings> & getZoneMappings() const { DARABONBA_PTR_GET_CONST(zoneMappings_, vector<CreateEgressProxyIpPoolRequest::ZoneMappings>) };
    inline vector<CreateEgressProxyIpPoolRequest::ZoneMappings> getZoneMappings() { DARABONBA_PTR_GET(zoneMappings_, vector<CreateEgressProxyIpPoolRequest::ZoneMappings>) };
    inline CreateEgressProxyIpPoolRequest& setZoneMappings(const vector<CreateEgressProxyIpPoolRequest::ZoneMappings> & zoneMappings) { DARABONBA_PTR_SET_VALUE(zoneMappings_, zoneMappings) };
    inline CreateEgressProxyIpPoolRequest& setZoneMappings(vector<CreateEgressProxyIpPoolRequest::ZoneMappings> && zoneMappings) { DARABONBA_PTR_SET_RVALUE(zoneMappings_, zoneMappings) };


  protected:
    // This parameter is required.
    shared_ptr<string> addressType_ {};
    shared_ptr<string> clientToken_ {};
    shared_ptr<string> description_ {};
    shared_ptr<bool> dryRun_ {};
    // This parameter is required.
    shared_ptr<string> egressProxyGatewayId_ {};
    // This parameter is required.
    shared_ptr<string> egressProxyIpPoolName_ {};
    shared_ptr<string> hashFactor_ {};
    shared_ptr<string> hashHeaderName_ {};
    shared_ptr<string> scheduler_ {};
    shared_ptr<vector<CreateEgressProxyIpPoolRequest::Tag>> tag_ {};
    // This parameter is required.
    shared_ptr<vector<CreateEgressProxyIpPoolRequest::ZoneMappings>> zoneMappings_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EPG20260715
#endif
