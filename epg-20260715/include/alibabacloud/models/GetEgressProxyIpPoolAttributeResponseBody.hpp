// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETEGRESSPROXYIPPOOLATTRIBUTERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETEGRESSPROXYIPPOOLATTRIBUTERESPONSEBODY_HPP_
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
  class GetEgressProxyIpPoolAttributeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetEgressProxyIpPoolAttributeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AddressType, addressType_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EgressProxyGatewayId, egressProxyGatewayId_);
      DARABONBA_PTR_TO_JSON(EgressProxyIpPoolId, egressProxyIpPoolId_);
      DARABONBA_PTR_TO_JSON(EgressProxyIpPoolName, egressProxyIpPoolName_);
      DARABONBA_PTR_TO_JSON(HashFactor, hashFactor_);
      DARABONBA_PTR_TO_JSON(HashHeaderName, hashHeaderName_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Scheduler, scheduler_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(ZoneMappings, zoneMappings_);
    };
    friend void from_json(const Darabonba::Json& j, GetEgressProxyIpPoolAttributeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AddressType, addressType_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EgressProxyGatewayId, egressProxyGatewayId_);
      DARABONBA_PTR_FROM_JSON(EgressProxyIpPoolId, egressProxyIpPoolId_);
      DARABONBA_PTR_FROM_JSON(EgressProxyIpPoolName, egressProxyIpPoolName_);
      DARABONBA_PTR_FROM_JSON(HashFactor, hashFactor_);
      DARABONBA_PTR_FROM_JSON(HashHeaderName, hashHeaderName_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Scheduler, scheduler_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(ZoneMappings, zoneMappings_);
    };
    GetEgressProxyIpPoolAttributeResponseBody() = default ;
    GetEgressProxyIpPoolAttributeResponseBody(const GetEgressProxyIpPoolAttributeResponseBody &) = default ;
    GetEgressProxyIpPoolAttributeResponseBody(GetEgressProxyIpPoolAttributeResponseBody &&) = default ;
    GetEgressProxyIpPoolAttributeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetEgressProxyIpPoolAttributeResponseBody() = default ;
    GetEgressProxyIpPoolAttributeResponseBody& operator=(const GetEgressProxyIpPoolAttributeResponseBody &) = default ;
    GetEgressProxyIpPoolAttributeResponseBody& operator=(GetEgressProxyIpPoolAttributeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ZoneMappings : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ZoneMappings& obj) { 
        DARABONBA_PTR_TO_JSON(IpAddresses, ipAddresses_);
        DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
        DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
      };
      friend void from_json(const Darabonba::Json& j, ZoneMappings& obj) { 
        DARABONBA_PTR_FROM_JSON(IpAddresses, ipAddresses_);
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
          DARABONBA_PTR_TO_JSON(PublicIpv4Address, publicIpv4Address_);
        };
        friend void from_json(const Darabonba::Json& j, IpAddresses& obj) { 
          DARABONBA_PTR_FROM_JSON(EipAllocationId, eipAllocationId_);
          DARABONBA_PTR_FROM_JSON(PrivateIpv4Address, privateIpv4Address_);
          DARABONBA_PTR_FROM_JSON(PublicIpv4Address, publicIpv4Address_);
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
        && this->privateIpv4Address_ == nullptr && this->publicIpv4Address_ == nullptr; };
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


        // publicIpv4Address Field Functions 
        bool hasPublicIpv4Address() const { return this->publicIpv4Address_ != nullptr;};
        void deletePublicIpv4Address() { this->publicIpv4Address_ = nullptr;};
        inline string getPublicIpv4Address() const { DARABONBA_PTR_GET_DEFAULT(publicIpv4Address_, "") };
        inline IpAddresses& setPublicIpv4Address(string publicIpv4Address) { DARABONBA_PTR_SET_VALUE(publicIpv4Address_, publicIpv4Address) };


      protected:
        shared_ptr<string> eipAllocationId_ {};
        shared_ptr<string> privateIpv4Address_ {};
        shared_ptr<string> publicIpv4Address_ {};
      };

      virtual bool empty() const override { return this->ipAddresses_ == nullptr
        && this->vSwitchId_ == nullptr && this->zoneId_ == nullptr; };
      // ipAddresses Field Functions 
      bool hasIpAddresses() const { return this->ipAddresses_ != nullptr;};
      void deleteIpAddresses() { this->ipAddresses_ = nullptr;};
      inline const vector<ZoneMappings::IpAddresses> & getIpAddresses() const { DARABONBA_PTR_GET_CONST(ipAddresses_, vector<ZoneMappings::IpAddresses>) };
      inline vector<ZoneMappings::IpAddresses> getIpAddresses() { DARABONBA_PTR_GET(ipAddresses_, vector<ZoneMappings::IpAddresses>) };
      inline ZoneMappings& setIpAddresses(const vector<ZoneMappings::IpAddresses> & ipAddresses) { DARABONBA_PTR_SET_VALUE(ipAddresses_, ipAddresses) };
      inline ZoneMappings& setIpAddresses(vector<ZoneMappings::IpAddresses> && ipAddresses) { DARABONBA_PTR_SET_RVALUE(ipAddresses_, ipAddresses) };


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
      shared_ptr<string> vSwitchId_ {};
      shared_ptr<string> zoneId_ {};
    };

    class Tags : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tags& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Tags& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      Tags() = default ;
      Tags(const Tags &) = default ;
      Tags(Tags &&) = default ;
      Tags(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Tags() = default ;
      Tags& operator=(const Tags &) = default ;
      Tags& operator=(Tags &&) = default ;
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
      inline Tags& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Tags& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      shared_ptr<string> key_ {};
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->addressType_ == nullptr
        && this->createTime_ == nullptr && this->description_ == nullptr && this->egressProxyGatewayId_ == nullptr && this->egressProxyIpPoolId_ == nullptr && this->egressProxyIpPoolName_ == nullptr
        && this->hashFactor_ == nullptr && this->hashHeaderName_ == nullptr && this->requestId_ == nullptr && this->scheduler_ == nullptr && this->status_ == nullptr
        && this->tags_ == nullptr && this->zoneMappings_ == nullptr; };
    // addressType Field Functions 
    bool hasAddressType() const { return this->addressType_ != nullptr;};
    void deleteAddressType() { this->addressType_ = nullptr;};
    inline string getAddressType() const { DARABONBA_PTR_GET_DEFAULT(addressType_, "") };
    inline GetEgressProxyIpPoolAttributeResponseBody& setAddressType(string addressType) { DARABONBA_PTR_SET_VALUE(addressType_, addressType) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline GetEgressProxyIpPoolAttributeResponseBody& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetEgressProxyIpPoolAttributeResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // egressProxyGatewayId Field Functions 
    bool hasEgressProxyGatewayId() const { return this->egressProxyGatewayId_ != nullptr;};
    void deleteEgressProxyGatewayId() { this->egressProxyGatewayId_ = nullptr;};
    inline string getEgressProxyGatewayId() const { DARABONBA_PTR_GET_DEFAULT(egressProxyGatewayId_, "") };
    inline GetEgressProxyIpPoolAttributeResponseBody& setEgressProxyGatewayId(string egressProxyGatewayId) { DARABONBA_PTR_SET_VALUE(egressProxyGatewayId_, egressProxyGatewayId) };


    // egressProxyIpPoolId Field Functions 
    bool hasEgressProxyIpPoolId() const { return this->egressProxyIpPoolId_ != nullptr;};
    void deleteEgressProxyIpPoolId() { this->egressProxyIpPoolId_ = nullptr;};
    inline string getEgressProxyIpPoolId() const { DARABONBA_PTR_GET_DEFAULT(egressProxyIpPoolId_, "") };
    inline GetEgressProxyIpPoolAttributeResponseBody& setEgressProxyIpPoolId(string egressProxyIpPoolId) { DARABONBA_PTR_SET_VALUE(egressProxyIpPoolId_, egressProxyIpPoolId) };


    // egressProxyIpPoolName Field Functions 
    bool hasEgressProxyIpPoolName() const { return this->egressProxyIpPoolName_ != nullptr;};
    void deleteEgressProxyIpPoolName() { this->egressProxyIpPoolName_ = nullptr;};
    inline string getEgressProxyIpPoolName() const { DARABONBA_PTR_GET_DEFAULT(egressProxyIpPoolName_, "") };
    inline GetEgressProxyIpPoolAttributeResponseBody& setEgressProxyIpPoolName(string egressProxyIpPoolName) { DARABONBA_PTR_SET_VALUE(egressProxyIpPoolName_, egressProxyIpPoolName) };


    // hashFactor Field Functions 
    bool hasHashFactor() const { return this->hashFactor_ != nullptr;};
    void deleteHashFactor() { this->hashFactor_ = nullptr;};
    inline string getHashFactor() const { DARABONBA_PTR_GET_DEFAULT(hashFactor_, "") };
    inline GetEgressProxyIpPoolAttributeResponseBody& setHashFactor(string hashFactor) { DARABONBA_PTR_SET_VALUE(hashFactor_, hashFactor) };


    // hashHeaderName Field Functions 
    bool hasHashHeaderName() const { return this->hashHeaderName_ != nullptr;};
    void deleteHashHeaderName() { this->hashHeaderName_ = nullptr;};
    inline string getHashHeaderName() const { DARABONBA_PTR_GET_DEFAULT(hashHeaderName_, "") };
    inline GetEgressProxyIpPoolAttributeResponseBody& setHashHeaderName(string hashHeaderName) { DARABONBA_PTR_SET_VALUE(hashHeaderName_, hashHeaderName) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetEgressProxyIpPoolAttributeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // scheduler Field Functions 
    bool hasScheduler() const { return this->scheduler_ != nullptr;};
    void deleteScheduler() { this->scheduler_ = nullptr;};
    inline string getScheduler() const { DARABONBA_PTR_GET_DEFAULT(scheduler_, "") };
    inline GetEgressProxyIpPoolAttributeResponseBody& setScheduler(string scheduler) { DARABONBA_PTR_SET_VALUE(scheduler_, scheduler) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetEgressProxyIpPoolAttributeResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<GetEgressProxyIpPoolAttributeResponseBody::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<GetEgressProxyIpPoolAttributeResponseBody::Tags>) };
    inline vector<GetEgressProxyIpPoolAttributeResponseBody::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<GetEgressProxyIpPoolAttributeResponseBody::Tags>) };
    inline GetEgressProxyIpPoolAttributeResponseBody& setTags(const vector<GetEgressProxyIpPoolAttributeResponseBody::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline GetEgressProxyIpPoolAttributeResponseBody& setTags(vector<GetEgressProxyIpPoolAttributeResponseBody::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // zoneMappings Field Functions 
    bool hasZoneMappings() const { return this->zoneMappings_ != nullptr;};
    void deleteZoneMappings() { this->zoneMappings_ = nullptr;};
    inline const vector<GetEgressProxyIpPoolAttributeResponseBody::ZoneMappings> & getZoneMappings() const { DARABONBA_PTR_GET_CONST(zoneMappings_, vector<GetEgressProxyIpPoolAttributeResponseBody::ZoneMappings>) };
    inline vector<GetEgressProxyIpPoolAttributeResponseBody::ZoneMappings> getZoneMappings() { DARABONBA_PTR_GET(zoneMappings_, vector<GetEgressProxyIpPoolAttributeResponseBody::ZoneMappings>) };
    inline GetEgressProxyIpPoolAttributeResponseBody& setZoneMappings(const vector<GetEgressProxyIpPoolAttributeResponseBody::ZoneMappings> & zoneMappings) { DARABONBA_PTR_SET_VALUE(zoneMappings_, zoneMappings) };
    inline GetEgressProxyIpPoolAttributeResponseBody& setZoneMappings(vector<GetEgressProxyIpPoolAttributeResponseBody::ZoneMappings> && zoneMappings) { DARABONBA_PTR_SET_RVALUE(zoneMappings_, zoneMappings) };


  protected:
    shared_ptr<string> addressType_ {};
    shared_ptr<string> createTime_ {};
    shared_ptr<string> description_ {};
    shared_ptr<string> egressProxyGatewayId_ {};
    shared_ptr<string> egressProxyIpPoolId_ {};
    shared_ptr<string> egressProxyIpPoolName_ {};
    shared_ptr<string> hashFactor_ {};
    shared_ptr<string> hashHeaderName_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> scheduler_ {};
    shared_ptr<string> status_ {};
    shared_ptr<vector<GetEgressProxyIpPoolAttributeResponseBody::Tags>> tags_ {};
    shared_ptr<vector<GetEgressProxyIpPoolAttributeResponseBody::ZoneMappings>> zoneMappings_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EPG20260715
#endif
