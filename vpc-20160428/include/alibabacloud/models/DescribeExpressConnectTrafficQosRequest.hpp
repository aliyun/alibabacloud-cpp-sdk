// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEXPRESSCONNECTTRAFFICQOSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEXPRESSCONNECTTRAFFICQOSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeExpressConnectTrafficQosRequestTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeExpressConnectTrafficQosRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeExpressConnectTrafficQosRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(QosIdList, qosIdList_);
      DARABONBA_PTR_TO_JSON(QosNameList, qosNameList_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeExpressConnectTrafficQosRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(QosIdList, qosIdList_);
      DARABONBA_PTR_FROM_JSON(QosNameList, qosNameList_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
    };
    DescribeExpressConnectTrafficQosRequest() = default ;
    DescribeExpressConnectTrafficQosRequest(const DescribeExpressConnectTrafficQosRequest &) = default ;
    DescribeExpressConnectTrafficQosRequest(DescribeExpressConnectTrafficQosRequest &&) = default ;
    DescribeExpressConnectTrafficQosRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeExpressConnectTrafficQosRequest() = default ;
    DescribeExpressConnectTrafficQosRequest& operator=(const DescribeExpressConnectTrafficQosRequest &) = default ;
    DescribeExpressConnectTrafficQosRequest& operator=(DescribeExpressConnectTrafficQosRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clientToken_ != nullptr
        && this->maxResults_ != nullptr && this->nextToken_ != nullptr && this->ownerAccount_ != nullptr && this->ownerId_ != nullptr && this->qosIdList_ != nullptr
        && this->qosNameList_ != nullptr && this->regionId_ != nullptr && this->resourceGroupId_ != nullptr && this->resourceOwnerAccount_ != nullptr && this->tags_ != nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline DescribeExpressConnectTrafficQosRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribeExpressConnectTrafficQosRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeExpressConnectTrafficQosRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline DescribeExpressConnectTrafficQosRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DescribeExpressConnectTrafficQosRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // qosIdList Field Functions 
    bool hasQosIdList() const { return this->qosIdList_ != nullptr;};
    void deleteQosIdList() { this->qosIdList_ = nullptr;};
    inline const vector<string> & qosIdList() const { DARABONBA_PTR_GET_CONST(qosIdList_, vector<string>) };
    inline vector<string> qosIdList() { DARABONBA_PTR_GET(qosIdList_, vector<string>) };
    inline DescribeExpressConnectTrafficQosRequest& setQosIdList(const vector<string> & qosIdList) { DARABONBA_PTR_SET_VALUE(qosIdList_, qosIdList) };
    inline DescribeExpressConnectTrafficQosRequest& setQosIdList(vector<string> && qosIdList) { DARABONBA_PTR_SET_RVALUE(qosIdList_, qosIdList) };


    // qosNameList Field Functions 
    bool hasQosNameList() const { return this->qosNameList_ != nullptr;};
    void deleteQosNameList() { this->qosNameList_ = nullptr;};
    inline const vector<string> & qosNameList() const { DARABONBA_PTR_GET_CONST(qosNameList_, vector<string>) };
    inline vector<string> qosNameList() { DARABONBA_PTR_GET(qosNameList_, vector<string>) };
    inline DescribeExpressConnectTrafficQosRequest& setQosNameList(const vector<string> & qosNameList) { DARABONBA_PTR_SET_VALUE(qosNameList_, qosNameList) };
    inline DescribeExpressConnectTrafficQosRequest& setQosNameList(vector<string> && qosNameList) { DARABONBA_PTR_SET_RVALUE(qosNameList_, qosNameList) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeExpressConnectTrafficQosRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeExpressConnectTrafficQosRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline DescribeExpressConnectTrafficQosRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<DescribeExpressConnectTrafficQosRequestTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<DescribeExpressConnectTrafficQosRequestTags>) };
    inline vector<DescribeExpressConnectTrafficQosRequestTags> tags() { DARABONBA_PTR_GET(tags_, vector<DescribeExpressConnectTrafficQosRequestTags>) };
    inline DescribeExpressConnectTrafficQosRequest& setTags(const vector<DescribeExpressConnectTrafficQosRequestTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline DescribeExpressConnectTrafficQosRequest& setTags(vector<DescribeExpressConnectTrafficQosRequestTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


  protected:
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the token, but you must make sure that the token is unique among different requests. The client token can contain only ASCII characters.
    // 
    // > If you do not specify this parameter, the system automatically uses the **request ID** as the **client token**. The **request ID** may be different for each request.
    std::shared_ptr<string> clientToken_ = nullptr;
    // The maximum number of entries to return. Valid values: **1** to **100**. Default value: **10**.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // The pagination token that is used in the next request to retrieve a new page of results.
    // 
    // - If no value is returned for NetToken, you do not need to specify this parameter.
    // - If a value is returned for NextToken, you must specify the token that is obtained from the previous query as the value of **NextToken**.
    std::shared_ptr<string> nextToken_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The IDs of QoS policies.
    std::shared_ptr<vector<string>> qosIdList_ = nullptr;
    // The names of QoS policies.
    std::shared_ptr<vector<string>> qosNameList_ = nullptr;
    // The ID of the region in which the QoS policy is created.
    // 
    // You can call the [DescribeRegions](https://help.aliyun.com/document_detail/36063.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The resource group ID.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    // The tags of the resource.
    std::shared_ptr<vector<DescribeExpressConnectTrafficQosRequestTags>> tags_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
