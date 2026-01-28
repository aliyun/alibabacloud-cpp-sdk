// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEELASTICITYASSURANCESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEELASTICITYASSURANCESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeElasticityAssurancesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeElasticityAssurancesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(PrivatePoolOptions, privatePoolOptions_);
      DARABONBA_PTR_TO_JSON(InstanceChargeType, instanceChargeType_);
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PackageType, packageType_);
      DARABONBA_PTR_TO_JSON(Platform, platform_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeElasticityAssurancesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(PrivatePoolOptions, privatePoolOptions_);
      DARABONBA_PTR_FROM_JSON(InstanceChargeType, instanceChargeType_);
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PackageType, packageType_);
      DARABONBA_PTR_FROM_JSON(Platform, platform_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    DescribeElasticityAssurancesRequest() = default ;
    DescribeElasticityAssurancesRequest(const DescribeElasticityAssurancesRequest &) = default ;
    DescribeElasticityAssurancesRequest(DescribeElasticityAssurancesRequest &&) = default ;
    DescribeElasticityAssurancesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeElasticityAssurancesRequest() = default ;
    DescribeElasticityAssurancesRequest& operator=(const DescribeElasticityAssurancesRequest &) = default ;
    DescribeElasticityAssurancesRequest& operator=(DescribeElasticityAssurancesRequest &&) = default ;
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
      // The key of tag N. Valid values of N: 1 to 20.
      // 
      // If you specify a tag to query resources, up to 1,000 resources with this tag are returned in the response. If you specify multiple tags to query resources, up to 1,000 resources with all these tags are returned in the response. To query more than 1,000 resources that have specified tags added, call the [ListTagResources](https://help.aliyun.com/document_detail/110425.html) operation.
      shared_ptr<string> key_ {};
      // The value of tag N. Valid values of N: 1 to 20.
      shared_ptr<string> value_ {};
    };

    class PrivatePoolOptions : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PrivatePoolOptions& obj) { 
        DARABONBA_PTR_TO_JSON(Ids, ids_);
      };
      friend void from_json(const Darabonba::Json& j, PrivatePoolOptions& obj) { 
        DARABONBA_PTR_FROM_JSON(Ids, ids_);
      };
      PrivatePoolOptions() = default ;
      PrivatePoolOptions(const PrivatePoolOptions &) = default ;
      PrivatePoolOptions(PrivatePoolOptions &&) = default ;
      PrivatePoolOptions(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PrivatePoolOptions() = default ;
      PrivatePoolOptions& operator=(const PrivatePoolOptions &) = default ;
      PrivatePoolOptions& operator=(PrivatePoolOptions &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->ids_ == nullptr; };
      // ids Field Functions 
      bool hasIds() const { return this->ids_ != nullptr;};
      void deleteIds() { this->ids_ = nullptr;};
      inline string getIds() const { DARABONBA_PTR_GET_DEFAULT(ids_, "") };
      inline PrivatePoolOptions& setIds(string ids) { DARABONBA_PTR_SET_VALUE(ids_, ids) };


    protected:
      // The IDs of the elasticity assurances. The value can be a JSON array that consists of up to 100 elasticity assurance IDs. Separate the IDs with commas (,).
      shared_ptr<string> ids_ {};
    };

    virtual bool empty() const override { return this->privatePoolOptions_ == nullptr
        && this->instanceChargeType_ == nullptr && this->instanceType_ == nullptr && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->ownerAccount_ == nullptr
        && this->ownerId_ == nullptr && this->packageType_ == nullptr && this->platform_ == nullptr && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr
        && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->status_ == nullptr && this->tag_ == nullptr && this->zoneId_ == nullptr; };
    // privatePoolOptions Field Functions 
    bool hasPrivatePoolOptions() const { return this->privatePoolOptions_ != nullptr;};
    void deletePrivatePoolOptions() { this->privatePoolOptions_ = nullptr;};
    inline const DescribeElasticityAssurancesRequest::PrivatePoolOptions & getPrivatePoolOptions() const { DARABONBA_PTR_GET_CONST(privatePoolOptions_, DescribeElasticityAssurancesRequest::PrivatePoolOptions) };
    inline DescribeElasticityAssurancesRequest::PrivatePoolOptions getPrivatePoolOptions() { DARABONBA_PTR_GET(privatePoolOptions_, DescribeElasticityAssurancesRequest::PrivatePoolOptions) };
    inline DescribeElasticityAssurancesRequest& setPrivatePoolOptions(const DescribeElasticityAssurancesRequest::PrivatePoolOptions & privatePoolOptions) { DARABONBA_PTR_SET_VALUE(privatePoolOptions_, privatePoolOptions) };
    inline DescribeElasticityAssurancesRequest& setPrivatePoolOptions(DescribeElasticityAssurancesRequest::PrivatePoolOptions && privatePoolOptions) { DARABONBA_PTR_SET_RVALUE(privatePoolOptions_, privatePoolOptions) };


    // instanceChargeType Field Functions 
    bool hasInstanceChargeType() const { return this->instanceChargeType_ != nullptr;};
    void deleteInstanceChargeType() { this->instanceChargeType_ = nullptr;};
    inline string getInstanceChargeType() const { DARABONBA_PTR_GET_DEFAULT(instanceChargeType_, "") };
    inline DescribeElasticityAssurancesRequest& setInstanceChargeType(string instanceChargeType) { DARABONBA_PTR_SET_VALUE(instanceChargeType_, instanceChargeType) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline DescribeElasticityAssurancesRequest& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribeElasticityAssurancesRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeElasticityAssurancesRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline DescribeElasticityAssurancesRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DescribeElasticityAssurancesRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // packageType Field Functions 
    bool hasPackageType() const { return this->packageType_ != nullptr;};
    void deletePackageType() { this->packageType_ = nullptr;};
    inline string getPackageType() const { DARABONBA_PTR_GET_DEFAULT(packageType_, "") };
    inline DescribeElasticityAssurancesRequest& setPackageType(string packageType) { DARABONBA_PTR_SET_VALUE(packageType_, packageType) };


    // platform Field Functions 
    bool hasPlatform() const { return this->platform_ != nullptr;};
    void deletePlatform() { this->platform_ = nullptr;};
    inline string getPlatform() const { DARABONBA_PTR_GET_DEFAULT(platform_, "") };
    inline DescribeElasticityAssurancesRequest& setPlatform(string platform) { DARABONBA_PTR_SET_VALUE(platform_, platform) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeElasticityAssurancesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeElasticityAssurancesRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline DescribeElasticityAssurancesRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline DescribeElasticityAssurancesRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeElasticityAssurancesRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<DescribeElasticityAssurancesRequest::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<DescribeElasticityAssurancesRequest::Tag>) };
    inline vector<DescribeElasticityAssurancesRequest::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<DescribeElasticityAssurancesRequest::Tag>) };
    inline DescribeElasticityAssurancesRequest& setTag(const vector<DescribeElasticityAssurancesRequest::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline DescribeElasticityAssurancesRequest& setTag(vector<DescribeElasticityAssurancesRequest::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline DescribeElasticityAssurancesRequest& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    shared_ptr<DescribeElasticityAssurancesRequest::PrivatePoolOptions> privatePoolOptions_ {};
    // The billing method of the instance. Set the value to PostPaid. Only pay-as-you-go instances can be created by using elasticity assurances.
    // 
    // Default value: PostPaid.
    shared_ptr<string> instanceChargeType_ {};
    // The instance type.
    shared_ptr<string> instanceType_ {};
    // The maximum number of entries to return on each page.
    // 
    // Valid values: 1 to 100.
    // 
    // Default value: 10.
    shared_ptr<int32_t> maxResults_ {};
    // The pagination token that is used in the request to retrieve a new page of results. You must specify the token that is obtained from the previous query as the value of NextToken.
    shared_ptr<string> nextToken_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The type of the elasticity assurance. Valid values:
    // 
    // *   ElasticityAssurance: the general-purpose elasticity assurance. RecurrenceRules is not specified for a general-purpose elasticity assurance.
    // *   TimeDivisionElasticityAssurance: the time-segmented elasticity assurance. RecurrenceRules is specified for a time-segmented assurance.
    shared_ptr<string> packageType_ {};
    // > This parameter is deprecated.
    shared_ptr<string> platform_ {};
    // The region ID of the elasticity assurances. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/25609.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The ID of the resource group. If you configure this parameter to query resources, up to 1,000 resources that belong to the specified resource group can be displayed in the response.
    // 
    // > Resources in the default resource group are displayed in the response regardless of whether you configure this parameter.
    shared_ptr<string> resourceGroupId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The status of the elasticity assurance. Valid values:
    // 
    // *   All: All states.
    // *   Deactivated: The elasticity assurance is pending activation. This state is in invitational preview.
    // *   Preparing: The elasticity assurance is being prepared.
    // *   Prepared: The elasticity assurance is to take effect.
    // *   Active: The elasticity assurance is in effect.
    // *   Released: The elasticity assurance is released.
    // 
    // If you do not specify this parameter, elasticity assurances in states other than Pending and Released are queried.
    shared_ptr<string> status_ {};
    // The tags.
    shared_ptr<vector<DescribeElasticityAssurancesRequest::Tag>> tag_ {};
    // The zone ID of the elasticity assurances.
    shared_ptr<string> zoneId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
