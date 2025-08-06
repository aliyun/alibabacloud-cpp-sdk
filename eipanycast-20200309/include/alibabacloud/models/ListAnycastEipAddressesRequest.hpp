// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTANYCASTEIPADDRESSESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTANYCASTEIPADDRESSESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListAnycastEipAddressesRequestTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eipanycast20200309
{
namespace Models
{
  class ListAnycastEipAddressesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAnycastEipAddressesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AnycastEipAddress, anycastEipAddress_);
      DARABONBA_PTR_TO_JSON(AnycastId, anycastId_);
      DARABONBA_PTR_TO_JSON(AnycastIds, anycastIds_);
      DARABONBA_PTR_TO_JSON(BindInstanceIds, bindInstanceIds_);
      DARABONBA_PTR_TO_JSON(BusinessStatus, businessStatus_);
      DARABONBA_PTR_TO_JSON(InstanceChargeType, instanceChargeType_);
      DARABONBA_PTR_TO_JSON(InternetChargeType, internetChargeType_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ServiceLocation, serviceLocation_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, ListAnycastEipAddressesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AnycastEipAddress, anycastEipAddress_);
      DARABONBA_PTR_FROM_JSON(AnycastId, anycastId_);
      DARABONBA_PTR_FROM_JSON(AnycastIds, anycastIds_);
      DARABONBA_PTR_FROM_JSON(BindInstanceIds, bindInstanceIds_);
      DARABONBA_PTR_FROM_JSON(BusinessStatus, businessStatus_);
      DARABONBA_PTR_FROM_JSON(InstanceChargeType, instanceChargeType_);
      DARABONBA_PTR_FROM_JSON(InternetChargeType, internetChargeType_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ServiceLocation, serviceLocation_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
    };
    ListAnycastEipAddressesRequest() = default ;
    ListAnycastEipAddressesRequest(const ListAnycastEipAddressesRequest &) = default ;
    ListAnycastEipAddressesRequest(ListAnycastEipAddressesRequest &&) = default ;
    ListAnycastEipAddressesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAnycastEipAddressesRequest() = default ;
    ListAnycastEipAddressesRequest& operator=(const ListAnycastEipAddressesRequest &) = default ;
    ListAnycastEipAddressesRequest& operator=(ListAnycastEipAddressesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->anycastEipAddress_ != nullptr
        && this->anycastId_ != nullptr && this->anycastIds_ != nullptr && this->bindInstanceIds_ != nullptr && this->businessStatus_ != nullptr && this->instanceChargeType_ != nullptr
        && this->internetChargeType_ != nullptr && this->maxResults_ != nullptr && this->name_ != nullptr && this->nextToken_ != nullptr && this->resourceGroupId_ != nullptr
        && this->serviceLocation_ != nullptr && this->status_ != nullptr && this->tags_ != nullptr; };
    // anycastEipAddress Field Functions 
    bool hasAnycastEipAddress() const { return this->anycastEipAddress_ != nullptr;};
    void deleteAnycastEipAddress() { this->anycastEipAddress_ = nullptr;};
    inline string anycastEipAddress() const { DARABONBA_PTR_GET_DEFAULT(anycastEipAddress_, "") };
    inline ListAnycastEipAddressesRequest& setAnycastEipAddress(string anycastEipAddress) { DARABONBA_PTR_SET_VALUE(anycastEipAddress_, anycastEipAddress) };


    // anycastId Field Functions 
    bool hasAnycastId() const { return this->anycastId_ != nullptr;};
    void deleteAnycastId() { this->anycastId_ = nullptr;};
    inline string anycastId() const { DARABONBA_PTR_GET_DEFAULT(anycastId_, "") };
    inline ListAnycastEipAddressesRequest& setAnycastId(string anycastId) { DARABONBA_PTR_SET_VALUE(anycastId_, anycastId) };


    // anycastIds Field Functions 
    bool hasAnycastIds() const { return this->anycastIds_ != nullptr;};
    void deleteAnycastIds() { this->anycastIds_ = nullptr;};
    inline const vector<string> & anycastIds() const { DARABONBA_PTR_GET_CONST(anycastIds_, vector<string>) };
    inline vector<string> anycastIds() { DARABONBA_PTR_GET(anycastIds_, vector<string>) };
    inline ListAnycastEipAddressesRequest& setAnycastIds(const vector<string> & anycastIds) { DARABONBA_PTR_SET_VALUE(anycastIds_, anycastIds) };
    inline ListAnycastEipAddressesRequest& setAnycastIds(vector<string> && anycastIds) { DARABONBA_PTR_SET_RVALUE(anycastIds_, anycastIds) };


    // bindInstanceIds Field Functions 
    bool hasBindInstanceIds() const { return this->bindInstanceIds_ != nullptr;};
    void deleteBindInstanceIds() { this->bindInstanceIds_ = nullptr;};
    inline const vector<string> & bindInstanceIds() const { DARABONBA_PTR_GET_CONST(bindInstanceIds_, vector<string>) };
    inline vector<string> bindInstanceIds() { DARABONBA_PTR_GET(bindInstanceIds_, vector<string>) };
    inline ListAnycastEipAddressesRequest& setBindInstanceIds(const vector<string> & bindInstanceIds) { DARABONBA_PTR_SET_VALUE(bindInstanceIds_, bindInstanceIds) };
    inline ListAnycastEipAddressesRequest& setBindInstanceIds(vector<string> && bindInstanceIds) { DARABONBA_PTR_SET_RVALUE(bindInstanceIds_, bindInstanceIds) };


    // businessStatus Field Functions 
    bool hasBusinessStatus() const { return this->businessStatus_ != nullptr;};
    void deleteBusinessStatus() { this->businessStatus_ = nullptr;};
    inline string businessStatus() const { DARABONBA_PTR_GET_DEFAULT(businessStatus_, "") };
    inline ListAnycastEipAddressesRequest& setBusinessStatus(string businessStatus) { DARABONBA_PTR_SET_VALUE(businessStatus_, businessStatus) };


    // instanceChargeType Field Functions 
    bool hasInstanceChargeType() const { return this->instanceChargeType_ != nullptr;};
    void deleteInstanceChargeType() { this->instanceChargeType_ = nullptr;};
    inline string instanceChargeType() const { DARABONBA_PTR_GET_DEFAULT(instanceChargeType_, "") };
    inline ListAnycastEipAddressesRequest& setInstanceChargeType(string instanceChargeType) { DARABONBA_PTR_SET_VALUE(instanceChargeType_, instanceChargeType) };


    // internetChargeType Field Functions 
    bool hasInternetChargeType() const { return this->internetChargeType_ != nullptr;};
    void deleteInternetChargeType() { this->internetChargeType_ = nullptr;};
    inline string internetChargeType() const { DARABONBA_PTR_GET_DEFAULT(internetChargeType_, "") };
    inline ListAnycastEipAddressesRequest& setInternetChargeType(string internetChargeType) { DARABONBA_PTR_SET_VALUE(internetChargeType_, internetChargeType) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListAnycastEipAddressesRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListAnycastEipAddressesRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListAnycastEipAddressesRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ListAnycastEipAddressesRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // serviceLocation Field Functions 
    bool hasServiceLocation() const { return this->serviceLocation_ != nullptr;};
    void deleteServiceLocation() { this->serviceLocation_ = nullptr;};
    inline string serviceLocation() const { DARABONBA_PTR_GET_DEFAULT(serviceLocation_, "") };
    inline ListAnycastEipAddressesRequest& setServiceLocation(string serviceLocation) { DARABONBA_PTR_SET_VALUE(serviceLocation_, serviceLocation) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListAnycastEipAddressesRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<ListAnycastEipAddressesRequestTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<ListAnycastEipAddressesRequestTags>) };
    inline vector<ListAnycastEipAddressesRequestTags> tags() { DARABONBA_PTR_GET(tags_, vector<ListAnycastEipAddressesRequestTags>) };
    inline ListAnycastEipAddressesRequest& setTags(const vector<ListAnycastEipAddressesRequestTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline ListAnycastEipAddressesRequest& setTags(vector<ListAnycastEipAddressesRequestTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


  protected:
    // The IP address that is allocated to the Anycast EIP.
    std::shared_ptr<string> anycastEipAddress_ = nullptr;
    // The ID of the Anycast EIP.
    // 
    // >  To ensure the accuracy of the query result, we do not recommend that you specify **AnycastIds** and **AnycastId** at the same time.
    std::shared_ptr<string> anycastId_ = nullptr;
    // The IDs of Anycast EIPs.
    // 
    // You can enter at most 50 Anycast EIP IDs.
    // 
    // >  To ensure the accuracy of the query result, we do not recommend that you specify **AnycastIds** and **AnycastId** at the same time.
    std::shared_ptr<vector<string>> anycastIds_ = nullptr;
    // The IDs of the cloud resources with which the Anycast EIPs are associated.
    // 
    // You can enter at most 100 cloud resource IDs.
    std::shared_ptr<vector<string>> bindInstanceIds_ = nullptr;
    // The service status of the Anycast EIP. Valid values:
    // 
    // *   **Normal**
    // *   **FinancialLocked**
    std::shared_ptr<string> businessStatus_ = nullptr;
    // The billing method of the Anycast EIP.
    // 
    // Set the value to **PostPaid**, which specifies the pay-as-you-go billing method.
    std::shared_ptr<string> instanceChargeType_ = nullptr;
    // The metering method of the Anycast EIP.
    // 
    // Set the value to **PayByTraffic**, which specifies the pay-by-data-transfer metering method.
    std::shared_ptr<string> internetChargeType_ = nullptr;
    // The number of entries to return on each page. Valid values: **20 to 100**. Default value: **50**.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // The name of the Anycast EIP.
    // 
    // The name must be 0 to 128 characters in length, and can contain digits, hyphens (-), and underscores (_). The name must start with a letter.
    std::shared_ptr<string> name_ = nullptr;
    // The pagination token that is used in the next request to retrieve a new page of results. Valid values:
    // 
    // *   You do not need to specify this parameter for the first request.
    // *   You must specify the token that is obtained from the previous query as the value of NextToken.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The ID of the resource group to which the instance belongs.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The access area of the Anycast EIP.
    // 
    // Set the value to **international**, which specifies the regions outside the Chinese mainland.
    std::shared_ptr<string> serviceLocation_ = nullptr;
    // The status of the Anycast EIP. Valid values:
    // 
    // *   **Associating**
    // *   **Unassociating**
    // *   **Allocated**
    // *   **Associated**
    // *   **Modifying**
    // *   **Releasing**
    // *   **Released**
    std::shared_ptr<string> status_ = nullptr;
    // The tags.
    std::shared_ptr<vector<ListAnycastEipAddressesRequestTags>> tags_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eipanycast20200309
#endif
