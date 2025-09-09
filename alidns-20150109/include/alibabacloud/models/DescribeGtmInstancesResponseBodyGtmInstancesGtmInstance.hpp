// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEGTMINSTANCESRESPONSEBODYGTMINSTANCESGTMINSTANCE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEGTMINSTANCESRESPONSEBODYGTMINSTANCESGTMINSTANCE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeGtmInstancesResponseBodyGtmInstancesGtmInstance : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeGtmInstancesResponseBodyGtmInstancesGtmInstance& obj) { 
      DARABONBA_PTR_TO_JSON(AccessStrategyNum, accessStrategyNum_);
      DARABONBA_PTR_TO_JSON(AddressPoolNum, addressPoolNum_);
      DARABONBA_PTR_TO_JSON(AlertGroup, alertGroup_);
      DARABONBA_PTR_TO_JSON(Cname, cname_);
      DARABONBA_PTR_TO_JSON(CnameMode, cnameMode_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(CreateTimestamp, createTimestamp_);
      DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_TO_JSON(ExpireTimestamp, expireTimestamp_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(LbaStrategy, lbaStrategy_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Ttl, ttl_);
      DARABONBA_PTR_TO_JSON(UserDomainName, userDomainName_);
      DARABONBA_PTR_TO_JSON(VersionCode, versionCode_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeGtmInstancesResponseBodyGtmInstancesGtmInstance& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessStrategyNum, accessStrategyNum_);
      DARABONBA_PTR_FROM_JSON(AddressPoolNum, addressPoolNum_);
      DARABONBA_PTR_FROM_JSON(AlertGroup, alertGroup_);
      DARABONBA_PTR_FROM_JSON(Cname, cname_);
      DARABONBA_PTR_FROM_JSON(CnameMode, cnameMode_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(CreateTimestamp, createTimestamp_);
      DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_FROM_JSON(ExpireTimestamp, expireTimestamp_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(LbaStrategy, lbaStrategy_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Ttl, ttl_);
      DARABONBA_PTR_FROM_JSON(UserDomainName, userDomainName_);
      DARABONBA_PTR_FROM_JSON(VersionCode, versionCode_);
    };
    DescribeGtmInstancesResponseBodyGtmInstancesGtmInstance() = default ;
    DescribeGtmInstancesResponseBodyGtmInstancesGtmInstance(const DescribeGtmInstancesResponseBodyGtmInstancesGtmInstance &) = default ;
    DescribeGtmInstancesResponseBodyGtmInstancesGtmInstance(DescribeGtmInstancesResponseBodyGtmInstancesGtmInstance &&) = default ;
    DescribeGtmInstancesResponseBodyGtmInstancesGtmInstance(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeGtmInstancesResponseBodyGtmInstancesGtmInstance() = default ;
    DescribeGtmInstancesResponseBodyGtmInstancesGtmInstance& operator=(const DescribeGtmInstancesResponseBodyGtmInstancesGtmInstance &) = default ;
    DescribeGtmInstancesResponseBodyGtmInstancesGtmInstance& operator=(DescribeGtmInstancesResponseBodyGtmInstancesGtmInstance &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accessStrategyNum_ != nullptr
        && this->addressPoolNum_ != nullptr && this->alertGroup_ != nullptr && this->cname_ != nullptr && this->cnameMode_ != nullptr && this->createTime_ != nullptr
        && this->createTimestamp_ != nullptr && this->expireTime_ != nullptr && this->expireTimestamp_ != nullptr && this->instanceId_ != nullptr && this->instanceName_ != nullptr
        && this->lbaStrategy_ != nullptr && this->resourceGroupId_ != nullptr && this->ttl_ != nullptr && this->userDomainName_ != nullptr && this->versionCode_ != nullptr; };
    // accessStrategyNum Field Functions 
    bool hasAccessStrategyNum() const { return this->accessStrategyNum_ != nullptr;};
    void deleteAccessStrategyNum() { this->accessStrategyNum_ = nullptr;};
    inline int32_t accessStrategyNum() const { DARABONBA_PTR_GET_DEFAULT(accessStrategyNum_, 0) };
    inline DescribeGtmInstancesResponseBodyGtmInstancesGtmInstance& setAccessStrategyNum(int32_t accessStrategyNum) { DARABONBA_PTR_SET_VALUE(accessStrategyNum_, accessStrategyNum) };


    // addressPoolNum Field Functions 
    bool hasAddressPoolNum() const { return this->addressPoolNum_ != nullptr;};
    void deleteAddressPoolNum() { this->addressPoolNum_ = nullptr;};
    inline int32_t addressPoolNum() const { DARABONBA_PTR_GET_DEFAULT(addressPoolNum_, 0) };
    inline DescribeGtmInstancesResponseBodyGtmInstancesGtmInstance& setAddressPoolNum(int32_t addressPoolNum) { DARABONBA_PTR_SET_VALUE(addressPoolNum_, addressPoolNum) };


    // alertGroup Field Functions 
    bool hasAlertGroup() const { return this->alertGroup_ != nullptr;};
    void deleteAlertGroup() { this->alertGroup_ = nullptr;};
    inline string alertGroup() const { DARABONBA_PTR_GET_DEFAULT(alertGroup_, "") };
    inline DescribeGtmInstancesResponseBodyGtmInstancesGtmInstance& setAlertGroup(string alertGroup) { DARABONBA_PTR_SET_VALUE(alertGroup_, alertGroup) };


    // cname Field Functions 
    bool hasCname() const { return this->cname_ != nullptr;};
    void deleteCname() { this->cname_ = nullptr;};
    inline string cname() const { DARABONBA_PTR_GET_DEFAULT(cname_, "") };
    inline DescribeGtmInstancesResponseBodyGtmInstancesGtmInstance& setCname(string cname) { DARABONBA_PTR_SET_VALUE(cname_, cname) };


    // cnameMode Field Functions 
    bool hasCnameMode() const { return this->cnameMode_ != nullptr;};
    void deleteCnameMode() { this->cnameMode_ = nullptr;};
    inline string cnameMode() const { DARABONBA_PTR_GET_DEFAULT(cnameMode_, "") };
    inline DescribeGtmInstancesResponseBodyGtmInstancesGtmInstance& setCnameMode(string cnameMode) { DARABONBA_PTR_SET_VALUE(cnameMode_, cnameMode) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline DescribeGtmInstancesResponseBodyGtmInstancesGtmInstance& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // createTimestamp Field Functions 
    bool hasCreateTimestamp() const { return this->createTimestamp_ != nullptr;};
    void deleteCreateTimestamp() { this->createTimestamp_ = nullptr;};
    inline int64_t createTimestamp() const { DARABONBA_PTR_GET_DEFAULT(createTimestamp_, 0L) };
    inline DescribeGtmInstancesResponseBodyGtmInstancesGtmInstance& setCreateTimestamp(int64_t createTimestamp) { DARABONBA_PTR_SET_VALUE(createTimestamp_, createTimestamp) };


    // expireTime Field Functions 
    bool hasExpireTime() const { return this->expireTime_ != nullptr;};
    void deleteExpireTime() { this->expireTime_ = nullptr;};
    inline string expireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
    inline DescribeGtmInstancesResponseBodyGtmInstancesGtmInstance& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


    // expireTimestamp Field Functions 
    bool hasExpireTimestamp() const { return this->expireTimestamp_ != nullptr;};
    void deleteExpireTimestamp() { this->expireTimestamp_ = nullptr;};
    inline int64_t expireTimestamp() const { DARABONBA_PTR_GET_DEFAULT(expireTimestamp_, 0L) };
    inline DescribeGtmInstancesResponseBodyGtmInstancesGtmInstance& setExpireTimestamp(int64_t expireTimestamp) { DARABONBA_PTR_SET_VALUE(expireTimestamp_, expireTimestamp) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeGtmInstancesResponseBodyGtmInstancesGtmInstance& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string instanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline DescribeGtmInstancesResponseBodyGtmInstancesGtmInstance& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // lbaStrategy Field Functions 
    bool hasLbaStrategy() const { return this->lbaStrategy_ != nullptr;};
    void deleteLbaStrategy() { this->lbaStrategy_ = nullptr;};
    inline string lbaStrategy() const { DARABONBA_PTR_GET_DEFAULT(lbaStrategy_, "") };
    inline DescribeGtmInstancesResponseBodyGtmInstancesGtmInstance& setLbaStrategy(string lbaStrategy) { DARABONBA_PTR_SET_VALUE(lbaStrategy_, lbaStrategy) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeGtmInstancesResponseBodyGtmInstancesGtmInstance& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // ttl Field Functions 
    bool hasTtl() const { return this->ttl_ != nullptr;};
    void deleteTtl() { this->ttl_ = nullptr;};
    inline int32_t ttl() const { DARABONBA_PTR_GET_DEFAULT(ttl_, 0) };
    inline DescribeGtmInstancesResponseBodyGtmInstancesGtmInstance& setTtl(int32_t ttl) { DARABONBA_PTR_SET_VALUE(ttl_, ttl) };


    // userDomainName Field Functions 
    bool hasUserDomainName() const { return this->userDomainName_ != nullptr;};
    void deleteUserDomainName() { this->userDomainName_ = nullptr;};
    inline string userDomainName() const { DARABONBA_PTR_GET_DEFAULT(userDomainName_, "") };
    inline DescribeGtmInstancesResponseBodyGtmInstancesGtmInstance& setUserDomainName(string userDomainName) { DARABONBA_PTR_SET_VALUE(userDomainName_, userDomainName) };


    // versionCode Field Functions 
    bool hasVersionCode() const { return this->versionCode_ != nullptr;};
    void deleteVersionCode() { this->versionCode_ = nullptr;};
    inline string versionCode() const { DARABONBA_PTR_GET_DEFAULT(versionCode_, "") };
    inline DescribeGtmInstancesResponseBodyGtmInstancesGtmInstance& setVersionCode(string versionCode) { DARABONBA_PTR_SET_VALUE(versionCode_, versionCode) };


  protected:
    // The number of access policies.
    std::shared_ptr<int32_t> accessStrategyNum_ = nullptr;
    // The number of address pools.
    std::shared_ptr<int32_t> addressPoolNum_ = nullptr;
    // The name of the alert group.
    std::shared_ptr<string> alertGroup_ = nullptr;
    // The CNAME domain name that is used to access the instance.
    std::shared_ptr<string> cname_ = nullptr;
    // The CNAME domain name used to access the instance. Valid values:
    // 
    // *   **SYSTEM_ASSIGN**: A CNAME domain name assigned by the system is used.
    // *   **CUSTOM**: A custom CNAME domain name is used.
    std::shared_ptr<string> cnameMode_ = nullptr;
    // The time when the instance was created.
    std::shared_ptr<string> createTime_ = nullptr;
    // The UNIX timestamp that indicates when the instance was created.
    std::shared_ptr<int64_t> createTimestamp_ = nullptr;
    // The time when the instance expires.
    std::shared_ptr<string> expireTime_ = nullptr;
    // The UNIX timestamp that indicates when the instance expires.
    std::shared_ptr<int64_t> expireTimestamp_ = nullptr;
    // The ID of the instance.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The name of the instance.
    std::shared_ptr<string> instanceName_ = nullptr;
    // The load balancing policy that is used. Valid values:
    // 
    // *   **ALL_RR**: Load balancing
    // *   **RATIO**: Weighted round-robin
    std::shared_ptr<string> lbaStrategy_ = nullptr;
    // The ID of the resource group to which the instance belongs.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The global time to live (TTL).
    std::shared_ptr<int32_t> ttl_ = nullptr;
    // The domain name of the user.
    std::shared_ptr<string> userDomainName_ = nullptr;
    // The version code of the instance.
    std::shared_ptr<string> versionCode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
