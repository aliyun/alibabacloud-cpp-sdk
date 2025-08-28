// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECUSTOMERGATEWAYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECUSTOMERGATEWAYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeCustomerGatewayResponseBodyTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeCustomerGatewayResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCustomerGatewayResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Asn, asn_);
      DARABONBA_PTR_TO_JSON(AuthKey, authKey_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(CustomerGatewayId, customerGatewayId_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(IpAddress, ipAddress_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCustomerGatewayResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Asn, asn_);
      DARABONBA_PTR_FROM_JSON(AuthKey, authKey_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(CustomerGatewayId, customerGatewayId_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(IpAddress, ipAddress_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
    };
    DescribeCustomerGatewayResponseBody() = default ;
    DescribeCustomerGatewayResponseBody(const DescribeCustomerGatewayResponseBody &) = default ;
    DescribeCustomerGatewayResponseBody(DescribeCustomerGatewayResponseBody &&) = default ;
    DescribeCustomerGatewayResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCustomerGatewayResponseBody() = default ;
    DescribeCustomerGatewayResponseBody& operator=(const DescribeCustomerGatewayResponseBody &) = default ;
    DescribeCustomerGatewayResponseBody& operator=(DescribeCustomerGatewayResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->asn_ != nullptr
        && this->authKey_ != nullptr && this->createTime_ != nullptr && this->customerGatewayId_ != nullptr && this->description_ != nullptr && this->ipAddress_ != nullptr
        && this->name_ != nullptr && this->requestId_ != nullptr && this->resourceGroupId_ != nullptr && this->tags_ != nullptr; };
    // asn Field Functions 
    bool hasAsn() const { return this->asn_ != nullptr;};
    void deleteAsn() { this->asn_ = nullptr;};
    inline int64_t asn() const { DARABONBA_PTR_GET_DEFAULT(asn_, 0L) };
    inline DescribeCustomerGatewayResponseBody& setAsn(int64_t asn) { DARABONBA_PTR_SET_VALUE(asn_, asn) };


    // authKey Field Functions 
    bool hasAuthKey() const { return this->authKey_ != nullptr;};
    void deleteAuthKey() { this->authKey_ = nullptr;};
    inline string authKey() const { DARABONBA_PTR_GET_DEFAULT(authKey_, "") };
    inline DescribeCustomerGatewayResponseBody& setAuthKey(string authKey) { DARABONBA_PTR_SET_VALUE(authKey_, authKey) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline DescribeCustomerGatewayResponseBody& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // customerGatewayId Field Functions 
    bool hasCustomerGatewayId() const { return this->customerGatewayId_ != nullptr;};
    void deleteCustomerGatewayId() { this->customerGatewayId_ = nullptr;};
    inline string customerGatewayId() const { DARABONBA_PTR_GET_DEFAULT(customerGatewayId_, "") };
    inline DescribeCustomerGatewayResponseBody& setCustomerGatewayId(string customerGatewayId) { DARABONBA_PTR_SET_VALUE(customerGatewayId_, customerGatewayId) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeCustomerGatewayResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // ipAddress Field Functions 
    bool hasIpAddress() const { return this->ipAddress_ != nullptr;};
    void deleteIpAddress() { this->ipAddress_ = nullptr;};
    inline string ipAddress() const { DARABONBA_PTR_GET_DEFAULT(ipAddress_, "") };
    inline DescribeCustomerGatewayResponseBody& setIpAddress(string ipAddress) { DARABONBA_PTR_SET_VALUE(ipAddress_, ipAddress) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeCustomerGatewayResponseBody& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCustomerGatewayResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeCustomerGatewayResponseBody& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const DescribeCustomerGatewayResponseBodyTags & tags() const { DARABONBA_PTR_GET_CONST(tags_, DescribeCustomerGatewayResponseBodyTags) };
    inline DescribeCustomerGatewayResponseBodyTags tags() { DARABONBA_PTR_GET(tags_, DescribeCustomerGatewayResponseBodyTags) };
    inline DescribeCustomerGatewayResponseBody& setTags(const DescribeCustomerGatewayResponseBodyTags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline DescribeCustomerGatewayResponseBody& setTags(DescribeCustomerGatewayResponseBodyTags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


  protected:
    // The autonomous system number (ASN) of the gateway device in the data center.
    std::shared_ptr<int64_t> asn_ = nullptr;
    // The authentication key of the Border Gateway Protocol (BGP) routing protocol for the gateway device in the data center.
    std::shared_ptr<string> authKey_ = nullptr;
    // The timestamp generated when the customer gateway was created. Unit: milliseconds.
    // 
    // This value is a UNIX timestamp representing the number of milliseconds that have elapsed since the epoch time January 1, 1970, 00:00:00 UTC.
    std::shared_ptr<int64_t> createTime_ = nullptr;
    // The ID of the customer gateway.
    std::shared_ptr<string> customerGatewayId_ = nullptr;
    // The description of the customer gateway.
    std::shared_ptr<string> description_ = nullptr;
    // The IP address of the gateway device in the data center.
    std::shared_ptr<string> ipAddress_ = nullptr;
    // The name of the customer gateway.
    std::shared_ptr<string> name_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The ID of the resource group to which the customer gateway belongs.
    // 
    // You can call the [ListResourceGroups](https://help.aliyun.com/document_detail/158855.html) operation to query resource groups.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The list of tags added to the customer gateway.
    std::shared_ptr<DescribeCustomerGatewayResponseBodyTags> tags_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
