// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVPCGRANTRULESTOECRREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVPCGRANTRULESTOECRREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeVpcGrantRulesToEcrRequestTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeVpcGrantRulesToEcrRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVpcGrantRulesToEcrRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EcrInstanceId, ecrInstanceId_);
      DARABONBA_PTR_TO_JSON(EcrOwnerId, ecrOwnerId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVpcGrantRulesToEcrRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EcrInstanceId, ecrInstanceId_);
      DARABONBA_PTR_FROM_JSON(EcrOwnerId, ecrOwnerId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
    };
    DescribeVpcGrantRulesToEcrRequest() = default ;
    DescribeVpcGrantRulesToEcrRequest(const DescribeVpcGrantRulesToEcrRequest &) = default ;
    DescribeVpcGrantRulesToEcrRequest(DescribeVpcGrantRulesToEcrRequest &&) = default ;
    DescribeVpcGrantRulesToEcrRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVpcGrantRulesToEcrRequest() = default ;
    DescribeVpcGrantRulesToEcrRequest& operator=(const DescribeVpcGrantRulesToEcrRequest &) = default ;
    DescribeVpcGrantRulesToEcrRequest& operator=(DescribeVpcGrantRulesToEcrRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ecrInstanceId_ != nullptr
        && this->ecrOwnerId_ != nullptr && this->instanceId_ != nullptr && this->instanceType_ != nullptr && this->maxResults_ != nullptr && this->nextToken_ != nullptr
        && this->ownerAccount_ != nullptr && this->ownerId_ != nullptr && this->regionId_ != nullptr && this->resourceGroupId_ != nullptr && this->resourceOwnerAccount_ != nullptr
        && this->resourceOwnerId_ != nullptr && this->tags_ != nullptr; };
    // ecrInstanceId Field Functions 
    bool hasEcrInstanceId() const { return this->ecrInstanceId_ != nullptr;};
    void deleteEcrInstanceId() { this->ecrInstanceId_ = nullptr;};
    inline string ecrInstanceId() const { DARABONBA_PTR_GET_DEFAULT(ecrInstanceId_, "") };
    inline DescribeVpcGrantRulesToEcrRequest& setEcrInstanceId(string ecrInstanceId) { DARABONBA_PTR_SET_VALUE(ecrInstanceId_, ecrInstanceId) };


    // ecrOwnerId Field Functions 
    bool hasEcrOwnerId() const { return this->ecrOwnerId_ != nullptr;};
    void deleteEcrOwnerId() { this->ecrOwnerId_ = nullptr;};
    inline int64_t ecrOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ecrOwnerId_, 0L) };
    inline DescribeVpcGrantRulesToEcrRequest& setEcrOwnerId(int64_t ecrOwnerId) { DARABONBA_PTR_SET_VALUE(ecrOwnerId_, ecrOwnerId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeVpcGrantRulesToEcrRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string instanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline DescribeVpcGrantRulesToEcrRequest& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribeVpcGrantRulesToEcrRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeVpcGrantRulesToEcrRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline DescribeVpcGrantRulesToEcrRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DescribeVpcGrantRulesToEcrRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeVpcGrantRulesToEcrRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeVpcGrantRulesToEcrRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline DescribeVpcGrantRulesToEcrRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline DescribeVpcGrantRulesToEcrRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<DescribeVpcGrantRulesToEcrRequestTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<DescribeVpcGrantRulesToEcrRequestTags>) };
    inline vector<DescribeVpcGrantRulesToEcrRequestTags> tags() { DARABONBA_PTR_GET(tags_, vector<DescribeVpcGrantRulesToEcrRequestTags>) };
    inline DescribeVpcGrantRulesToEcrRequest& setTags(const vector<DescribeVpcGrantRulesToEcrRequestTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline DescribeVpcGrantRulesToEcrRequest& setTags(vector<DescribeVpcGrantRulesToEcrRequestTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


  protected:
    std::shared_ptr<string> ecrInstanceId_ = nullptr;
    std::shared_ptr<int64_t> ecrOwnerId_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> instanceType_ = nullptr;
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    std::shared_ptr<string> nextToken_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    std::shared_ptr<vector<DescribeVpcGrantRulesToEcrRequestTags>> tags_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
