// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEVPCENDPOINTSERVICEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEVPCENDPOINTSERVICEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Privatelink20200415
{
namespace Models
{
  class CreateVpcEndpointServiceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateVpcEndpointServiceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AddressIpVersion, addressIpVersion_);
      DARABONBA_PTR_TO_JSON(AutoAcceptEnabled, autoAcceptEnabled_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(Payer, payer_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Resource, resource_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ServiceDescription, serviceDescription_);
      DARABONBA_PTR_TO_JSON(ServiceResourceType, serviceResourceType_);
      DARABONBA_PTR_TO_JSON(ServiceSupportIPv6, serviceSupportIPv6_);
      DARABONBA_PTR_TO_JSON(SupportedRegionList, supportedRegionList_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(ZoneAffinityEnabled, zoneAffinityEnabled_);
    };
    friend void from_json(const Darabonba::Json& j, CreateVpcEndpointServiceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AddressIpVersion, addressIpVersion_);
      DARABONBA_PTR_FROM_JSON(AutoAcceptEnabled, autoAcceptEnabled_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(Payer, payer_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Resource, resource_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ServiceDescription, serviceDescription_);
      DARABONBA_PTR_FROM_JSON(ServiceResourceType, serviceResourceType_);
      DARABONBA_PTR_FROM_JSON(ServiceSupportIPv6, serviceSupportIPv6_);
      DARABONBA_PTR_FROM_JSON(SupportedRegionList, supportedRegionList_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(ZoneAffinityEnabled, zoneAffinityEnabled_);
    };
    CreateVpcEndpointServiceRequest() = default ;
    CreateVpcEndpointServiceRequest(const CreateVpcEndpointServiceRequest &) = default ;
    CreateVpcEndpointServiceRequest(CreateVpcEndpointServiceRequest &&) = default ;
    CreateVpcEndpointServiceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateVpcEndpointServiceRequest() = default ;
    CreateVpcEndpointServiceRequest& operator=(const CreateVpcEndpointServiceRequest &) = default ;
    CreateVpcEndpointServiceRequest& operator=(CreateVpcEndpointServiceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
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
      // The tag key. You can specify at most 20 tag keys. The tag key cannot be an empty string.
      // 
      // The tag key can be at most 64 characters in length. It cannot start with `aliyun` or `acs:`, and cannot contain `http://` or `https://`.
      shared_ptr<string> key_ {};
      // The tag value. You can specify at most 20 tag values. The tag value can be an empty string.
      // 
      // The tag value can be at most 128 characters in length. It cannot start with `aliyun` or `acs:`, and cannot contain `http://` or `https://`.
      shared_ptr<string> value_ {};
    };

    class Resource : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Resource& obj) { 
        DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
        DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
        DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
      };
      friend void from_json(const Darabonba::Json& j, Resource& obj) { 
        DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
        DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
        DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
      };
      Resource() = default ;
      Resource(const Resource &) = default ;
      Resource(Resource &&) = default ;
      Resource(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Resource() = default ;
      Resource& operator=(const Resource &) = default ;
      Resource& operator=(Resource &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->resourceId_ == nullptr
        && this->resourceType_ == nullptr && this->zoneId_ == nullptr; };
      // resourceId Field Functions 
      bool hasResourceId() const { return this->resourceId_ != nullptr;};
      void deleteResourceId() { this->resourceId_ = nullptr;};
      inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
      inline Resource& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


      // resourceType Field Functions 
      bool hasResourceType() const { return this->resourceType_ != nullptr;};
      void deleteResourceType() { this->resourceType_ = nullptr;};
      inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
      inline Resource& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


      // zoneId Field Functions 
      bool hasZoneId() const { return this->zoneId_ != nullptr;};
      void deleteZoneId() { this->zoneId_ = nullptr;};
      inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
      inline Resource& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


    protected:
      // The ID of the service resource that is added to the endpoint service.
      shared_ptr<string> resourceId_ {};
      // The type of the service resource that is added to the endpoint service. You can add at most 20 service resources to an endpoint service. Valid values:
      // 
      // - **slb**: a Classic Load Balancer (CLB) instance.
      // 
      // - **alb**: an Application Load Balancer (ALB) instance.
      // - **nlb**: a Network Load Balancer (NLB) instance.
      // - **gwlb**: a Gateway Load Balancer (GWLB) instance.
      shared_ptr<string> resourceType_ {};
      // The zone ID.
      shared_ptr<string> zoneId_ {};
    };

    virtual bool empty() const override { return this->addressIpVersion_ == nullptr
        && this->autoAcceptEnabled_ == nullptr && this->clientToken_ == nullptr && this->dryRun_ == nullptr && this->payer_ == nullptr && this->regionId_ == nullptr
        && this->resource_ == nullptr && this->resourceGroupId_ == nullptr && this->serviceDescription_ == nullptr && this->serviceResourceType_ == nullptr && this->serviceSupportIPv6_ == nullptr
        && this->supportedRegionList_ == nullptr && this->tag_ == nullptr && this->zoneAffinityEnabled_ == nullptr; };
    // addressIpVersion Field Functions 
    bool hasAddressIpVersion() const { return this->addressIpVersion_ != nullptr;};
    void deleteAddressIpVersion() { this->addressIpVersion_ = nullptr;};
    inline string getAddressIpVersion() const { DARABONBA_PTR_GET_DEFAULT(addressIpVersion_, "") };
    inline CreateVpcEndpointServiceRequest& setAddressIpVersion(string addressIpVersion) { DARABONBA_PTR_SET_VALUE(addressIpVersion_, addressIpVersion) };


    // autoAcceptEnabled Field Functions 
    bool hasAutoAcceptEnabled() const { return this->autoAcceptEnabled_ != nullptr;};
    void deleteAutoAcceptEnabled() { this->autoAcceptEnabled_ = nullptr;};
    inline bool getAutoAcceptEnabled() const { DARABONBA_PTR_GET_DEFAULT(autoAcceptEnabled_, false) };
    inline CreateVpcEndpointServiceRequest& setAutoAcceptEnabled(bool autoAcceptEnabled) { DARABONBA_PTR_SET_VALUE(autoAcceptEnabled_, autoAcceptEnabled) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateVpcEndpointServiceRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline CreateVpcEndpointServiceRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // payer Field Functions 
    bool hasPayer() const { return this->payer_ != nullptr;};
    void deletePayer() { this->payer_ = nullptr;};
    inline string getPayer() const { DARABONBA_PTR_GET_DEFAULT(payer_, "") };
    inline CreateVpcEndpointServiceRequest& setPayer(string payer) { DARABONBA_PTR_SET_VALUE(payer_, payer) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateVpcEndpointServiceRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resource Field Functions 
    bool hasResource() const { return this->resource_ != nullptr;};
    void deleteResource() { this->resource_ = nullptr;};
    inline const vector<CreateVpcEndpointServiceRequest::Resource> & getResource() const { DARABONBA_PTR_GET_CONST(resource_, vector<CreateVpcEndpointServiceRequest::Resource>) };
    inline vector<CreateVpcEndpointServiceRequest::Resource> getResource() { DARABONBA_PTR_GET(resource_, vector<CreateVpcEndpointServiceRequest::Resource>) };
    inline CreateVpcEndpointServiceRequest& setResource(const vector<CreateVpcEndpointServiceRequest::Resource> & resource) { DARABONBA_PTR_SET_VALUE(resource_, resource) };
    inline CreateVpcEndpointServiceRequest& setResource(vector<CreateVpcEndpointServiceRequest::Resource> && resource) { DARABONBA_PTR_SET_RVALUE(resource_, resource) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateVpcEndpointServiceRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // serviceDescription Field Functions 
    bool hasServiceDescription() const { return this->serviceDescription_ != nullptr;};
    void deleteServiceDescription() { this->serviceDescription_ = nullptr;};
    inline string getServiceDescription() const { DARABONBA_PTR_GET_DEFAULT(serviceDescription_, "") };
    inline CreateVpcEndpointServiceRequest& setServiceDescription(string serviceDescription) { DARABONBA_PTR_SET_VALUE(serviceDescription_, serviceDescription) };


    // serviceResourceType Field Functions 
    bool hasServiceResourceType() const { return this->serviceResourceType_ != nullptr;};
    void deleteServiceResourceType() { this->serviceResourceType_ = nullptr;};
    inline string getServiceResourceType() const { DARABONBA_PTR_GET_DEFAULT(serviceResourceType_, "") };
    inline CreateVpcEndpointServiceRequest& setServiceResourceType(string serviceResourceType) { DARABONBA_PTR_SET_VALUE(serviceResourceType_, serviceResourceType) };


    // serviceSupportIPv6 Field Functions 
    bool hasServiceSupportIPv6() const { return this->serviceSupportIPv6_ != nullptr;};
    void deleteServiceSupportIPv6() { this->serviceSupportIPv6_ = nullptr;};
    inline bool getServiceSupportIPv6() const { DARABONBA_PTR_GET_DEFAULT(serviceSupportIPv6_, false) };
    inline CreateVpcEndpointServiceRequest& setServiceSupportIPv6(bool serviceSupportIPv6) { DARABONBA_PTR_SET_VALUE(serviceSupportIPv6_, serviceSupportIPv6) };


    // supportedRegionList Field Functions 
    bool hasSupportedRegionList() const { return this->supportedRegionList_ != nullptr;};
    void deleteSupportedRegionList() { this->supportedRegionList_ = nullptr;};
    inline const vector<string> & getSupportedRegionList() const { DARABONBA_PTR_GET_CONST(supportedRegionList_, vector<string>) };
    inline vector<string> getSupportedRegionList() { DARABONBA_PTR_GET(supportedRegionList_, vector<string>) };
    inline CreateVpcEndpointServiceRequest& setSupportedRegionList(const vector<string> & supportedRegionList) { DARABONBA_PTR_SET_VALUE(supportedRegionList_, supportedRegionList) };
    inline CreateVpcEndpointServiceRequest& setSupportedRegionList(vector<string> && supportedRegionList) { DARABONBA_PTR_SET_RVALUE(supportedRegionList_, supportedRegionList) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<CreateVpcEndpointServiceRequest::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<CreateVpcEndpointServiceRequest::Tag>) };
    inline vector<CreateVpcEndpointServiceRequest::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<CreateVpcEndpointServiceRequest::Tag>) };
    inline CreateVpcEndpointServiceRequest& setTag(const vector<CreateVpcEndpointServiceRequest::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline CreateVpcEndpointServiceRequest& setTag(vector<CreateVpcEndpointServiceRequest::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // zoneAffinityEnabled Field Functions 
    bool hasZoneAffinityEnabled() const { return this->zoneAffinityEnabled_ != nullptr;};
    void deleteZoneAffinityEnabled() { this->zoneAffinityEnabled_ = nullptr;};
    inline bool getZoneAffinityEnabled() const { DARABONBA_PTR_GET_DEFAULT(zoneAffinityEnabled_, false) };
    inline CreateVpcEndpointServiceRequest& setZoneAffinityEnabled(bool zoneAffinityEnabled) { DARABONBA_PTR_SET_VALUE(zoneAffinityEnabled_, zoneAffinityEnabled) };


  protected:
    // The IP version. Valid values:
    // 
    // - **IPv4** (default): IPv4.
    // - **DualStack**: dual stack.
    // > Only endpoint services whose backend resource type is nlb or gwlb support DualStack. If the endpoint service supports dual stack, its backend resources must also support dual stack.
    shared_ptr<string> addressIpVersion_ {};
    // Specifies whether to automatically accept endpoint connection requests. Valid values:
    // 
    // - **true**: automatically accepts endpoint connection requests.
    // 
    // - **false** (default): does not automatically accept endpoint connection requests.
    shared_ptr<bool> autoAcceptEnabled_ {};
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the value, but you must ensure that it is unique among different requests. **ClientToken** can contain only ASCII characters.
    shared_ptr<string> clientToken_ {};
    // Specifies whether to perform only a dry run, without performing the actual request. Valid values:
    // 
    // - **true**: performs only a dry run. The system checks the request for required parameters, request format, and service limits. If the request fails the dry run, an error message is returned. If the request passes the dry run, the `DryRunOperation` error code is returned.
    // 
    // - **false** (default): performs a dry run and sends the request. If the request passes the dry run, an HTTP 2xx status code is returned and the operation is performed.
    shared_ptr<bool> dryRun_ {};
    // The payer of the endpoint service. Valid values:
    // 
    // - **Endpoint**: the service consumer.
    // 
    // - **EndpointService**: the service provider.
    shared_ptr<string> payer_ {};
    // The ID of the region where the endpoint service is created.
    // 
    // You can call the [DescribeRegions](https://help.aliyun.com/document_detail/469325.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The list of service resources of the endpoint service. You can add at most 10 service resources when you create the endpoint service. After the endpoint service is created, you can continue to add service resources.
    shared_ptr<vector<CreateVpcEndpointServiceRequest::Resource>> resource_ {};
    // The ID of the resource group.
    shared_ptr<string> resourceGroupId_ {};
    // The description of the endpoint service.
    shared_ptr<string> serviceDescription_ {};
    // The type of the service resource. Valid values:
    // 
    // - **slb**: a Classic Load Balancer (CLB) instance.
    // 
    // - **alb**: an Application Load Balancer (ALB) instance.
    // - **nlb**: a Network Load Balancer (NLB) instance.
    // - **gwlb**: a Gateway Load Balancer (GWLB) instance.
    // 
    // > TCPSSL listeners of NLB instances cannot be accessed.
    shared_ptr<string> serviceResourceType_ {};
    // Specifies whether the endpoint service supports IPv6. Valid values:
    // 
    // - **true**: yes.
    // 
    // - **false** (default): no.
    shared_ptr<bool> serviceSupportIPv6_ {};
    // The list of regions in which the endpoint service is available. Service consumers can initiate endpoint connections from the regions in the list.
    shared_ptr<vector<string>> supportedRegionList_ {};
    // The tag list.
    shared_ptr<vector<CreateVpcEndpointServiceRequest::Tag>> tag_ {};
    // Specifies whether to enable zone affinity for endpoint domain name resolution. Valid values:
    // 
    // - **true**: yes.
    // 
    // - **false** (default): no.
    shared_ptr<bool> zoneAffinityEnabled_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Privatelink20200415
#endif
