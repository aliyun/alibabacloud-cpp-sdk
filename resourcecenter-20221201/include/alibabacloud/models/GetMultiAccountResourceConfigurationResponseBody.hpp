// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMULTIACCOUNTRESOURCECONFIGURATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETMULTIACCOUNTRESOURCECONFIGURATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceCenter20221201
{
namespace Models
{
  class GetMultiAccountResourceConfigurationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMultiAccountResourceConfigurationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccountId, accountId_);
      DARABONBA_ANY_TO_JSON(Configuration, configuration_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_TO_JSON(IpAddressAttributes, ipAddressAttributes_);
      DARABONBA_PTR_TO_JSON(IpAddresses, ipAddresses_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(ResourceName, resourceName_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, GetMultiAccountResourceConfigurationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
      DARABONBA_ANY_FROM_JSON(Configuration, configuration_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_FROM_JSON(IpAddressAttributes, ipAddressAttributes_);
      DARABONBA_PTR_FROM_JSON(IpAddresses, ipAddresses_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(ResourceName, resourceName_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    GetMultiAccountResourceConfigurationResponseBody() = default ;
    GetMultiAccountResourceConfigurationResponseBody(const GetMultiAccountResourceConfigurationResponseBody &) = default ;
    GetMultiAccountResourceConfigurationResponseBody(GetMultiAccountResourceConfigurationResponseBody &&) = default ;
    GetMultiAccountResourceConfigurationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMultiAccountResourceConfigurationResponseBody() = default ;
    GetMultiAccountResourceConfigurationResponseBody& operator=(const GetMultiAccountResourceConfigurationResponseBody &) = default ;
    GetMultiAccountResourceConfigurationResponseBody& operator=(GetMultiAccountResourceConfigurationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
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
      // The tag key.
      shared_ptr<string> key_ {};
      // The tag value.
      shared_ptr<string> value_ {};
    };

    class IpAddressAttributes : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const IpAddressAttributes& obj) { 
        DARABONBA_PTR_TO_JSON(IpAddress, ipAddress_);
        DARABONBA_PTR_TO_JSON(NetworkType, networkType_);
        DARABONBA_PTR_TO_JSON(Version, version_);
      };
      friend void from_json(const Darabonba::Json& j, IpAddressAttributes& obj) { 
        DARABONBA_PTR_FROM_JSON(IpAddress, ipAddress_);
        DARABONBA_PTR_FROM_JSON(NetworkType, networkType_);
        DARABONBA_PTR_FROM_JSON(Version, version_);
      };
      IpAddressAttributes() = default ;
      IpAddressAttributes(const IpAddressAttributes &) = default ;
      IpAddressAttributes(IpAddressAttributes &&) = default ;
      IpAddressAttributes(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~IpAddressAttributes() = default ;
      IpAddressAttributes& operator=(const IpAddressAttributes &) = default ;
      IpAddressAttributes& operator=(IpAddressAttributes &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->ipAddress_ == nullptr
        && this->networkType_ == nullptr && this->version_ == nullptr; };
      // ipAddress Field Functions 
      bool hasIpAddress() const { return this->ipAddress_ != nullptr;};
      void deleteIpAddress() { this->ipAddress_ = nullptr;};
      inline string getIpAddress() const { DARABONBA_PTR_GET_DEFAULT(ipAddress_, "") };
      inline IpAddressAttributes& setIpAddress(string ipAddress) { DARABONBA_PTR_SET_VALUE(ipAddress_, ipAddress) };


      // networkType Field Functions 
      bool hasNetworkType() const { return this->networkType_ != nullptr;};
      void deleteNetworkType() { this->networkType_ = nullptr;};
      inline string getNetworkType() const { DARABONBA_PTR_GET_DEFAULT(networkType_, "") };
      inline IpAddressAttributes& setNetworkType(string networkType) { DARABONBA_PTR_SET_VALUE(networkType_, networkType) };


      // version Field Functions 
      bool hasVersion() const { return this->version_ != nullptr;};
      void deleteVersion() { this->version_ = nullptr;};
      inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
      inline IpAddressAttributes& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    protected:
      // The IP address.
      shared_ptr<string> ipAddress_ {};
      // The network type. Valid values:
      // 
      // - **Public**: Internet
      // 
      // - **Private**: internal network
      shared_ptr<string> networkType_ {};
      // The version of the IP address.
      shared_ptr<string> version_ {};
    };

    virtual bool empty() const override { return this->accountId_ == nullptr
        && this->configuration_ == nullptr && this->createTime_ == nullptr && this->expireTime_ == nullptr && this->ipAddressAttributes_ == nullptr && this->ipAddresses_ == nullptr
        && this->regionId_ == nullptr && this->requestId_ == nullptr && this->resourceGroupId_ == nullptr && this->resourceId_ == nullptr && this->resourceName_ == nullptr
        && this->resourceType_ == nullptr && this->tags_ == nullptr && this->zoneId_ == nullptr; };
    // accountId Field Functions 
    bool hasAccountId() const { return this->accountId_ != nullptr;};
    void deleteAccountId() { this->accountId_ = nullptr;};
    inline string getAccountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
    inline GetMultiAccountResourceConfigurationResponseBody& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


    // configuration Field Functions 
    bool hasConfiguration() const { return this->configuration_ != nullptr;};
    void deleteConfiguration() { this->configuration_ = nullptr;};
    inline     const Darabonba::Json & getConfiguration() const { DARABONBA_GET(configuration_) };
    Darabonba::Json & getConfiguration() { DARABONBA_GET(configuration_) };
    inline GetMultiAccountResourceConfigurationResponseBody& setConfiguration(const Darabonba::Json & configuration) { DARABONBA_SET_VALUE(configuration_, configuration) };
    inline GetMultiAccountResourceConfigurationResponseBody& setConfiguration(Darabonba::Json && configuration) { DARABONBA_SET_RVALUE(configuration_, configuration) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline GetMultiAccountResourceConfigurationResponseBody& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // expireTime Field Functions 
    bool hasExpireTime() const { return this->expireTime_ != nullptr;};
    void deleteExpireTime() { this->expireTime_ = nullptr;};
    inline string getExpireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
    inline GetMultiAccountResourceConfigurationResponseBody& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


    // ipAddressAttributes Field Functions 
    bool hasIpAddressAttributes() const { return this->ipAddressAttributes_ != nullptr;};
    void deleteIpAddressAttributes() { this->ipAddressAttributes_ = nullptr;};
    inline const vector<GetMultiAccountResourceConfigurationResponseBody::IpAddressAttributes> & getIpAddressAttributes() const { DARABONBA_PTR_GET_CONST(ipAddressAttributes_, vector<GetMultiAccountResourceConfigurationResponseBody::IpAddressAttributes>) };
    inline vector<GetMultiAccountResourceConfigurationResponseBody::IpAddressAttributes> getIpAddressAttributes() { DARABONBA_PTR_GET(ipAddressAttributes_, vector<GetMultiAccountResourceConfigurationResponseBody::IpAddressAttributes>) };
    inline GetMultiAccountResourceConfigurationResponseBody& setIpAddressAttributes(const vector<GetMultiAccountResourceConfigurationResponseBody::IpAddressAttributes> & ipAddressAttributes) { DARABONBA_PTR_SET_VALUE(ipAddressAttributes_, ipAddressAttributes) };
    inline GetMultiAccountResourceConfigurationResponseBody& setIpAddressAttributes(vector<GetMultiAccountResourceConfigurationResponseBody::IpAddressAttributes> && ipAddressAttributes) { DARABONBA_PTR_SET_RVALUE(ipAddressAttributes_, ipAddressAttributes) };


    // ipAddresses Field Functions 
    bool hasIpAddresses() const { return this->ipAddresses_ != nullptr;};
    void deleteIpAddresses() { this->ipAddresses_ = nullptr;};
    inline const vector<string> & getIpAddresses() const { DARABONBA_PTR_GET_CONST(ipAddresses_, vector<string>) };
    inline vector<string> getIpAddresses() { DARABONBA_PTR_GET(ipAddresses_, vector<string>) };
    inline GetMultiAccountResourceConfigurationResponseBody& setIpAddresses(const vector<string> & ipAddresses) { DARABONBA_PTR_SET_VALUE(ipAddresses_, ipAddresses) };
    inline GetMultiAccountResourceConfigurationResponseBody& setIpAddresses(vector<string> && ipAddresses) { DARABONBA_PTR_SET_RVALUE(ipAddresses_, ipAddresses) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetMultiAccountResourceConfigurationResponseBody& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetMultiAccountResourceConfigurationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline GetMultiAccountResourceConfigurationResponseBody& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline GetMultiAccountResourceConfigurationResponseBody& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // resourceName Field Functions 
    bool hasResourceName() const { return this->resourceName_ != nullptr;};
    void deleteResourceName() { this->resourceName_ = nullptr;};
    inline string getResourceName() const { DARABONBA_PTR_GET_DEFAULT(resourceName_, "") };
    inline GetMultiAccountResourceConfigurationResponseBody& setResourceName(string resourceName) { DARABONBA_PTR_SET_VALUE(resourceName_, resourceName) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline GetMultiAccountResourceConfigurationResponseBody& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<GetMultiAccountResourceConfigurationResponseBody::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<GetMultiAccountResourceConfigurationResponseBody::Tags>) };
    inline vector<GetMultiAccountResourceConfigurationResponseBody::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<GetMultiAccountResourceConfigurationResponseBody::Tags>) };
    inline GetMultiAccountResourceConfigurationResponseBody& setTags(const vector<GetMultiAccountResourceConfigurationResponseBody::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline GetMultiAccountResourceConfigurationResponseBody& setTags(vector<GetMultiAccountResourceConfigurationResponseBody::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline GetMultiAccountResourceConfigurationResponseBody& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // The ID of the management account or member.
    shared_ptr<string> accountId_ {};
    // The configurations of the resource.
    Darabonba::Json configuration_ {};
    // The time when the resource was created.
    shared_ptr<string> createTime_ {};
    // The time when the resource expires.
    shared_ptr<string> expireTime_ {};
    // The properties of the IP addresses.
    shared_ptr<vector<GetMultiAccountResourceConfigurationResponseBody::IpAddressAttributes>> ipAddressAttributes_ {};
    // The IP addresses.
    // 
    // > Whether this parameter is returned is determined by the Alibaba Cloud service to which the resource belongs.
    shared_ptr<vector<string>> ipAddresses_ {};
    // The ID of the region where the resource resides.
    shared_ptr<string> regionId_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The ID of your Alibaba Cloud resource group.
    shared_ptr<string> resourceGroupId_ {};
    // The resource ID.
    shared_ptr<string> resourceId_ {};
    // The resource name.
    shared_ptr<string> resourceName_ {};
    // The resource type.
    shared_ptr<string> resourceType_ {};
    // The tags.
    shared_ptr<vector<GetMultiAccountResourceConfigurationResponseBody::Tags>> tags_ {};
    // The zone ID.
    shared_ptr<string> zoneId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceCenter20221201
#endif
