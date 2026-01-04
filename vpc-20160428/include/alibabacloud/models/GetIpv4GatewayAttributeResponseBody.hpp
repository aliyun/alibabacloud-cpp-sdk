// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETIPV4GATEWAYATTRIBUTERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETIPV4GATEWAYATTRIBUTERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class GetIpv4GatewayAttributeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetIpv4GatewayAttributeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Enabled, enabled_);
      DARABONBA_PTR_TO_JSON(Ipv4GatewayDescription, ipv4GatewayDescription_);
      DARABONBA_PTR_TO_JSON(Ipv4GatewayId, ipv4GatewayId_);
      DARABONBA_PTR_TO_JSON(Ipv4GatewayName, ipv4GatewayName_);
      DARABONBA_PTR_TO_JSON(Ipv4GatewayRouteTableId, ipv4GatewayRouteTableId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, GetIpv4GatewayAttributeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
      DARABONBA_PTR_FROM_JSON(Ipv4GatewayDescription, ipv4GatewayDescription_);
      DARABONBA_PTR_FROM_JSON(Ipv4GatewayId, ipv4GatewayId_);
      DARABONBA_PTR_FROM_JSON(Ipv4GatewayName, ipv4GatewayName_);
      DARABONBA_PTR_FROM_JSON(Ipv4GatewayRouteTableId, ipv4GatewayRouteTableId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    GetIpv4GatewayAttributeResponseBody() = default ;
    GetIpv4GatewayAttributeResponseBody(const GetIpv4GatewayAttributeResponseBody &) = default ;
    GetIpv4GatewayAttributeResponseBody(GetIpv4GatewayAttributeResponseBody &&) = default ;
    GetIpv4GatewayAttributeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetIpv4GatewayAttributeResponseBody() = default ;
    GetIpv4GatewayAttributeResponseBody& operator=(const GetIpv4GatewayAttributeResponseBody &) = default ;
    GetIpv4GatewayAttributeResponseBody& operator=(GetIpv4GatewayAttributeResponseBody &&) = default ;
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
      // The key of tag N added to the resource.
      shared_ptr<string> key_ {};
      // The value of tag N added to the resource.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->createTime_ == nullptr
        && this->enabled_ == nullptr && this->ipv4GatewayDescription_ == nullptr && this->ipv4GatewayId_ == nullptr && this->ipv4GatewayName_ == nullptr && this->ipv4GatewayRouteTableId_ == nullptr
        && this->requestId_ == nullptr && this->resourceGroupId_ == nullptr && this->status_ == nullptr && this->tags_ == nullptr && this->vpcId_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline GetIpv4GatewayAttributeResponseBody& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
    inline GetIpv4GatewayAttributeResponseBody& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    // ipv4GatewayDescription Field Functions 
    bool hasIpv4GatewayDescription() const { return this->ipv4GatewayDescription_ != nullptr;};
    void deleteIpv4GatewayDescription() { this->ipv4GatewayDescription_ = nullptr;};
    inline string getIpv4GatewayDescription() const { DARABONBA_PTR_GET_DEFAULT(ipv4GatewayDescription_, "") };
    inline GetIpv4GatewayAttributeResponseBody& setIpv4GatewayDescription(string ipv4GatewayDescription) { DARABONBA_PTR_SET_VALUE(ipv4GatewayDescription_, ipv4GatewayDescription) };


    // ipv4GatewayId Field Functions 
    bool hasIpv4GatewayId() const { return this->ipv4GatewayId_ != nullptr;};
    void deleteIpv4GatewayId() { this->ipv4GatewayId_ = nullptr;};
    inline string getIpv4GatewayId() const { DARABONBA_PTR_GET_DEFAULT(ipv4GatewayId_, "") };
    inline GetIpv4GatewayAttributeResponseBody& setIpv4GatewayId(string ipv4GatewayId) { DARABONBA_PTR_SET_VALUE(ipv4GatewayId_, ipv4GatewayId) };


    // ipv4GatewayName Field Functions 
    bool hasIpv4GatewayName() const { return this->ipv4GatewayName_ != nullptr;};
    void deleteIpv4GatewayName() { this->ipv4GatewayName_ = nullptr;};
    inline string getIpv4GatewayName() const { DARABONBA_PTR_GET_DEFAULT(ipv4GatewayName_, "") };
    inline GetIpv4GatewayAttributeResponseBody& setIpv4GatewayName(string ipv4GatewayName) { DARABONBA_PTR_SET_VALUE(ipv4GatewayName_, ipv4GatewayName) };


    // ipv4GatewayRouteTableId Field Functions 
    bool hasIpv4GatewayRouteTableId() const { return this->ipv4GatewayRouteTableId_ != nullptr;};
    void deleteIpv4GatewayRouteTableId() { this->ipv4GatewayRouteTableId_ = nullptr;};
    inline string getIpv4GatewayRouteTableId() const { DARABONBA_PTR_GET_DEFAULT(ipv4GatewayRouteTableId_, "") };
    inline GetIpv4GatewayAttributeResponseBody& setIpv4GatewayRouteTableId(string ipv4GatewayRouteTableId) { DARABONBA_PTR_SET_VALUE(ipv4GatewayRouteTableId_, ipv4GatewayRouteTableId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetIpv4GatewayAttributeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline GetIpv4GatewayAttributeResponseBody& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetIpv4GatewayAttributeResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<GetIpv4GatewayAttributeResponseBody::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<GetIpv4GatewayAttributeResponseBody::Tags>) };
    inline vector<GetIpv4GatewayAttributeResponseBody::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<GetIpv4GatewayAttributeResponseBody::Tags>) };
    inline GetIpv4GatewayAttributeResponseBody& setTags(const vector<GetIpv4GatewayAttributeResponseBody::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline GetIpv4GatewayAttributeResponseBody& setTags(vector<GetIpv4GatewayAttributeResponseBody::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline GetIpv4GatewayAttributeResponseBody& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    // The time when the IPv4 gateway was created.
    shared_ptr<string> createTime_ {};
    // Indicates whether the IPv4 gateway is activated. Valid values:
    // 
    // *   **true**
    // *   **false**
    shared_ptr<bool> enabled_ {};
    // The description of the IPv4 gateway.
    shared_ptr<string> ipv4GatewayDescription_ {};
    // The ID of the IPv4 gateway.
    shared_ptr<string> ipv4GatewayId_ {};
    // The name of the IPv4 gateway.
    shared_ptr<string> ipv4GatewayName_ {};
    // The ID of the route table associated with the IPv4 gateway.
    shared_ptr<string> ipv4GatewayRouteTableId_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The ID of the resource group to which the IPv4 gateway belongs.
    shared_ptr<string> resourceGroupId_ {};
    // The status of the IPv4 gateway. Valid values:
    // 
    // *   **Creating**
    // *   **Created**
    // *   **Modifying**
    // *   **Deleting**
    // *   **Deleted**
    // *   **Activating**
    shared_ptr<string> status_ {};
    // The tag list.
    shared_ptr<vector<GetIpv4GatewayAttributeResponseBody::Tags>> tags_ {};
    // The ID of the VPC with which the IPv4 gateway is associated.
    shared_ptr<string> vpcId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
