// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINSTANCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTINSTANCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Tablestore20201209
{
namespace Models
{
  class ListInstancesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInstancesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Instances, instances_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListInstancesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Instances, instances_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListInstancesResponseBody() = default ;
    ListInstancesResponseBody(const ListInstancesResponseBody &) = default ;
    ListInstancesResponseBody(ListInstancesResponseBody &&) = default ;
    ListInstancesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInstancesResponseBody() = default ;
    ListInstancesResponseBody& operator=(const ListInstancesResponseBody &) = default ;
    ListInstancesResponseBody& operator=(ListInstancesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Instances : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Instances& obj) { 
        DARABONBA_PTR_TO_JSON(AliasName, aliasName_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(InstanceDescription, instanceDescription_);
        DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
        DARABONBA_PTR_TO_JSON(InstanceSpecification, instanceSpecification_);
        DARABONBA_PTR_TO_JSON(InstanceStatus, instanceStatus_);
        DARABONBA_PTR_TO_JSON(IsMultiAZ, isMultiAZ_);
        DARABONBA_PTR_TO_JSON(PaymentType, paymentType_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_TO_JSON(SPInstanceId, SPInstanceId_);
        DARABONBA_PTR_TO_JSON(StorageType, storageType_);
        DARABONBA_PTR_TO_JSON(UserId, userId_);
        DARABONBA_PTR_TO_JSON(VCUQuota, VCUQuota_);
      };
      friend void from_json(const Darabonba::Json& j, Instances& obj) { 
        DARABONBA_PTR_FROM_JSON(AliasName, aliasName_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(InstanceDescription, instanceDescription_);
        DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
        DARABONBA_PTR_FROM_JSON(InstanceSpecification, instanceSpecification_);
        DARABONBA_PTR_FROM_JSON(InstanceStatus, instanceStatus_);
        DARABONBA_PTR_FROM_JSON(IsMultiAZ, isMultiAZ_);
        DARABONBA_PTR_FROM_JSON(PaymentType, paymentType_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_FROM_JSON(SPInstanceId, SPInstanceId_);
        DARABONBA_PTR_FROM_JSON(StorageType, storageType_);
        DARABONBA_PTR_FROM_JSON(UserId, userId_);
        DARABONBA_PTR_FROM_JSON(VCUQuota, VCUQuota_);
      };
      Instances() = default ;
      Instances(const Instances &) = default ;
      Instances(Instances &&) = default ;
      Instances(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Instances() = default ;
      Instances& operator=(const Instances &) = default ;
      Instances& operator=(Instances &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->aliasName_ == nullptr
        && this->createTime_ == nullptr && this->instanceDescription_ == nullptr && this->instanceName_ == nullptr && this->instanceSpecification_ == nullptr && this->instanceStatus_ == nullptr
        && this->isMultiAZ_ == nullptr && this->paymentType_ == nullptr && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr && this->SPInstanceId_ == nullptr
        && this->storageType_ == nullptr && this->userId_ == nullptr && this->VCUQuota_ == nullptr; };
      // aliasName Field Functions 
      bool hasAliasName() const { return this->aliasName_ != nullptr;};
      void deleteAliasName() { this->aliasName_ = nullptr;};
      inline string getAliasName() const { DARABONBA_PTR_GET_DEFAULT(aliasName_, "") };
      inline Instances& setAliasName(string aliasName) { DARABONBA_PTR_SET_VALUE(aliasName_, aliasName) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Instances& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // instanceDescription Field Functions 
      bool hasInstanceDescription() const { return this->instanceDescription_ != nullptr;};
      void deleteInstanceDescription() { this->instanceDescription_ = nullptr;};
      inline string getInstanceDescription() const { DARABONBA_PTR_GET_DEFAULT(instanceDescription_, "") };
      inline Instances& setInstanceDescription(string instanceDescription) { DARABONBA_PTR_SET_VALUE(instanceDescription_, instanceDescription) };


      // instanceName Field Functions 
      bool hasInstanceName() const { return this->instanceName_ != nullptr;};
      void deleteInstanceName() { this->instanceName_ = nullptr;};
      inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
      inline Instances& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


      // instanceSpecification Field Functions 
      bool hasInstanceSpecification() const { return this->instanceSpecification_ != nullptr;};
      void deleteInstanceSpecification() { this->instanceSpecification_ = nullptr;};
      inline string getInstanceSpecification() const { DARABONBA_PTR_GET_DEFAULT(instanceSpecification_, "") };
      inline Instances& setInstanceSpecification(string instanceSpecification) { DARABONBA_PTR_SET_VALUE(instanceSpecification_, instanceSpecification) };


      // instanceStatus Field Functions 
      bool hasInstanceStatus() const { return this->instanceStatus_ != nullptr;};
      void deleteInstanceStatus() { this->instanceStatus_ = nullptr;};
      inline string getInstanceStatus() const { DARABONBA_PTR_GET_DEFAULT(instanceStatus_, "") };
      inline Instances& setInstanceStatus(string instanceStatus) { DARABONBA_PTR_SET_VALUE(instanceStatus_, instanceStatus) };


      // isMultiAZ Field Functions 
      bool hasIsMultiAZ() const { return this->isMultiAZ_ != nullptr;};
      void deleteIsMultiAZ() { this->isMultiAZ_ = nullptr;};
      inline bool getIsMultiAZ() const { DARABONBA_PTR_GET_DEFAULT(isMultiAZ_, false) };
      inline Instances& setIsMultiAZ(bool isMultiAZ) { DARABONBA_PTR_SET_VALUE(isMultiAZ_, isMultiAZ) };


      // paymentType Field Functions 
      bool hasPaymentType() const { return this->paymentType_ != nullptr;};
      void deletePaymentType() { this->paymentType_ = nullptr;};
      inline string getPaymentType() const { DARABONBA_PTR_GET_DEFAULT(paymentType_, "") };
      inline Instances& setPaymentType(string paymentType) { DARABONBA_PTR_SET_VALUE(paymentType_, paymentType) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline Instances& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // resourceGroupId Field Functions 
      bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
      void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
      inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
      inline Instances& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


      // SPInstanceId Field Functions 
      bool hasSPInstanceId() const { return this->SPInstanceId_ != nullptr;};
      void deleteSPInstanceId() { this->SPInstanceId_ = nullptr;};
      inline string getSPInstanceId() const { DARABONBA_PTR_GET_DEFAULT(SPInstanceId_, "") };
      inline Instances& setSPInstanceId(string SPInstanceId) { DARABONBA_PTR_SET_VALUE(SPInstanceId_, SPInstanceId) };


      // storageType Field Functions 
      bool hasStorageType() const { return this->storageType_ != nullptr;};
      void deleteStorageType() { this->storageType_ = nullptr;};
      inline string getStorageType() const { DARABONBA_PTR_GET_DEFAULT(storageType_, "") };
      inline Instances& setStorageType(string storageType) { DARABONBA_PTR_SET_VALUE(storageType_, storageType) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
      inline Instances& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


      // VCUQuota Field Functions 
      bool hasVCUQuota() const { return this->VCUQuota_ != nullptr;};
      void deleteVCUQuota() { this->VCUQuota_ = nullptr;};
      inline int32_t getVCUQuota() const { DARABONBA_PTR_GET_DEFAULT(VCUQuota_, 0) };
      inline Instances& setVCUQuota(int32_t VCUQuota) { DARABONBA_PTR_SET_VALUE(VCUQuota_, VCUQuota) };


    protected:
      // The instance alias.
      shared_ptr<string> aliasName_ {};
      // The time when the instance was created.
      shared_ptr<string> createTime_ {};
      // The instance description.
      shared_ptr<string> instanceDescription_ {};
      // The name of the instance, which is used to uniquely identify the instance.
      shared_ptr<string> instanceName_ {};
      // The type of the instance.
      // 
      // *   SSD: high-performance instance
      // *   HYBRID: capacity instance
      shared_ptr<string> instanceSpecification_ {};
      // The status of the instance.
      // 
      // *   normal: The instance runs as expected.
      // *   forbidden: The instance is disabled.
      // *   Deleting: The instance is being released.
      shared_ptr<string> instanceStatus_ {};
      // Indicates whether zone-redundant storage (ZRS) is enabled for the instance.
      // 
      // *   true: ZRS is enabled for the instance.
      // *   false: Locally redundant storage (LRS) is enabled for the instance.
      shared_ptr<bool> isMultiAZ_ {};
      // The billing method.
      // 
      // *   Subscription: subscription
      // *   PayAsYouGo: pay as you go
      shared_ptr<string> paymentType_ {};
      // The region ID.
      shared_ptr<string> regionId_ {};
      // The ID of the resource group.
      shared_ptr<string> resourceGroupId_ {};
      // The instance ID.
      shared_ptr<string> SPInstanceId_ {};
      // The storage type.
      // 
      // *   SSD: high-performance
      // *   HYBRID: capacity
      shared_ptr<string> storageType_ {};
      // The user ID.
      shared_ptr<string> userId_ {};
      // The VCU quota.
      shared_ptr<int32_t> VCUQuota_ {};
    };

    virtual bool empty() const override { return this->instances_ == nullptr
        && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // instances Field Functions 
    bool hasInstances() const { return this->instances_ != nullptr;};
    void deleteInstances() { this->instances_ = nullptr;};
    inline const vector<ListInstancesResponseBody::Instances> & getInstances() const { DARABONBA_PTR_GET_CONST(instances_, vector<ListInstancesResponseBody::Instances>) };
    inline vector<ListInstancesResponseBody::Instances> getInstances() { DARABONBA_PTR_GET(instances_, vector<ListInstancesResponseBody::Instances>) };
    inline ListInstancesResponseBody& setInstances(const vector<ListInstancesResponseBody::Instances> & instances) { DARABONBA_PTR_SET_VALUE(instances_, instances) };
    inline ListInstancesResponseBody& setInstances(vector<ListInstancesResponseBody::Instances> && instances) { DARABONBA_PTR_SET_RVALUE(instances_, instances) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListInstancesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListInstancesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListInstancesResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The details about the instances.
    shared_ptr<vector<ListInstancesResponseBody::Instances>> instances_ {};
    // The token that determines the start position of the next query. If this parameter is empty, all instances that you want to query are returned.
    shared_ptr<string> nextToken_ {};
    // The request ID, which can be used to troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // The total number of instances returned.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Tablestore20201209
#endif
