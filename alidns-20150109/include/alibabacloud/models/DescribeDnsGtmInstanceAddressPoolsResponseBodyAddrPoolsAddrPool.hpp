// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDNSGTMINSTANCEADDRESSPOOLSRESPONSEBODYADDRPOOLSADDRPOOL_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDNSGTMINSTANCEADDRESSPOOLSRESPONSEBODYADDRPOOLSADDRPOOL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeDnsGtmInstanceAddressPoolsResponseBodyAddrPoolsAddrPool : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDnsGtmInstanceAddressPoolsResponseBodyAddrPoolsAddrPool& obj) { 
      DARABONBA_PTR_TO_JSON(AddrCount, addrCount_);
      DARABONBA_PTR_TO_JSON(AddrPoolId, addrPoolId_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(CreateTimestamp, createTimestamp_);
      DARABONBA_PTR_TO_JSON(LbaStrategy, lbaStrategy_);
      DARABONBA_PTR_TO_JSON(MonitorConfigId, monitorConfigId_);
      DARABONBA_PTR_TO_JSON(MonitorStatus, monitorStatus_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_TO_JSON(UpdateTimestamp, updateTimestamp_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDnsGtmInstanceAddressPoolsResponseBodyAddrPoolsAddrPool& obj) { 
      DARABONBA_PTR_FROM_JSON(AddrCount, addrCount_);
      DARABONBA_PTR_FROM_JSON(AddrPoolId, addrPoolId_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(CreateTimestamp, createTimestamp_);
      DARABONBA_PTR_FROM_JSON(LbaStrategy, lbaStrategy_);
      DARABONBA_PTR_FROM_JSON(MonitorConfigId, monitorConfigId_);
      DARABONBA_PTR_FROM_JSON(MonitorStatus, monitorStatus_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_FROM_JSON(UpdateTimestamp, updateTimestamp_);
    };
    DescribeDnsGtmInstanceAddressPoolsResponseBodyAddrPoolsAddrPool() = default ;
    DescribeDnsGtmInstanceAddressPoolsResponseBodyAddrPoolsAddrPool(const DescribeDnsGtmInstanceAddressPoolsResponseBodyAddrPoolsAddrPool &) = default ;
    DescribeDnsGtmInstanceAddressPoolsResponseBodyAddrPoolsAddrPool(DescribeDnsGtmInstanceAddressPoolsResponseBodyAddrPoolsAddrPool &&) = default ;
    DescribeDnsGtmInstanceAddressPoolsResponseBodyAddrPoolsAddrPool(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDnsGtmInstanceAddressPoolsResponseBodyAddrPoolsAddrPool() = default ;
    DescribeDnsGtmInstanceAddressPoolsResponseBodyAddrPoolsAddrPool& operator=(const DescribeDnsGtmInstanceAddressPoolsResponseBodyAddrPoolsAddrPool &) = default ;
    DescribeDnsGtmInstanceAddressPoolsResponseBodyAddrPoolsAddrPool& operator=(DescribeDnsGtmInstanceAddressPoolsResponseBodyAddrPoolsAddrPool &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->addrCount_ != nullptr
        && this->addrPoolId_ != nullptr && this->createTime_ != nullptr && this->createTimestamp_ != nullptr && this->lbaStrategy_ != nullptr && this->monitorConfigId_ != nullptr
        && this->monitorStatus_ != nullptr && this->name_ != nullptr && this->type_ != nullptr && this->updateTime_ != nullptr && this->updateTimestamp_ != nullptr; };
    // addrCount Field Functions 
    bool hasAddrCount() const { return this->addrCount_ != nullptr;};
    void deleteAddrCount() { this->addrCount_ = nullptr;};
    inline int32_t addrCount() const { DARABONBA_PTR_GET_DEFAULT(addrCount_, 0) };
    inline DescribeDnsGtmInstanceAddressPoolsResponseBodyAddrPoolsAddrPool& setAddrCount(int32_t addrCount) { DARABONBA_PTR_SET_VALUE(addrCount_, addrCount) };


    // addrPoolId Field Functions 
    bool hasAddrPoolId() const { return this->addrPoolId_ != nullptr;};
    void deleteAddrPoolId() { this->addrPoolId_ = nullptr;};
    inline string addrPoolId() const { DARABONBA_PTR_GET_DEFAULT(addrPoolId_, "") };
    inline DescribeDnsGtmInstanceAddressPoolsResponseBodyAddrPoolsAddrPool& setAddrPoolId(string addrPoolId) { DARABONBA_PTR_SET_VALUE(addrPoolId_, addrPoolId) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline DescribeDnsGtmInstanceAddressPoolsResponseBodyAddrPoolsAddrPool& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // createTimestamp Field Functions 
    bool hasCreateTimestamp() const { return this->createTimestamp_ != nullptr;};
    void deleteCreateTimestamp() { this->createTimestamp_ = nullptr;};
    inline int64_t createTimestamp() const { DARABONBA_PTR_GET_DEFAULT(createTimestamp_, 0L) };
    inline DescribeDnsGtmInstanceAddressPoolsResponseBodyAddrPoolsAddrPool& setCreateTimestamp(int64_t createTimestamp) { DARABONBA_PTR_SET_VALUE(createTimestamp_, createTimestamp) };


    // lbaStrategy Field Functions 
    bool hasLbaStrategy() const { return this->lbaStrategy_ != nullptr;};
    void deleteLbaStrategy() { this->lbaStrategy_ = nullptr;};
    inline string lbaStrategy() const { DARABONBA_PTR_GET_DEFAULT(lbaStrategy_, "") };
    inline DescribeDnsGtmInstanceAddressPoolsResponseBodyAddrPoolsAddrPool& setLbaStrategy(string lbaStrategy) { DARABONBA_PTR_SET_VALUE(lbaStrategy_, lbaStrategy) };


    // monitorConfigId Field Functions 
    bool hasMonitorConfigId() const { return this->monitorConfigId_ != nullptr;};
    void deleteMonitorConfigId() { this->monitorConfigId_ = nullptr;};
    inline string monitorConfigId() const { DARABONBA_PTR_GET_DEFAULT(monitorConfigId_, "") };
    inline DescribeDnsGtmInstanceAddressPoolsResponseBodyAddrPoolsAddrPool& setMonitorConfigId(string monitorConfigId) { DARABONBA_PTR_SET_VALUE(monitorConfigId_, monitorConfigId) };


    // monitorStatus Field Functions 
    bool hasMonitorStatus() const { return this->monitorStatus_ != nullptr;};
    void deleteMonitorStatus() { this->monitorStatus_ = nullptr;};
    inline string monitorStatus() const { DARABONBA_PTR_GET_DEFAULT(monitorStatus_, "") };
    inline DescribeDnsGtmInstanceAddressPoolsResponseBodyAddrPoolsAddrPool& setMonitorStatus(string monitorStatus) { DARABONBA_PTR_SET_VALUE(monitorStatus_, monitorStatus) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeDnsGtmInstanceAddressPoolsResponseBodyAddrPoolsAddrPool& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeDnsGtmInstanceAddressPoolsResponseBodyAddrPoolsAddrPool& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline DescribeDnsGtmInstanceAddressPoolsResponseBodyAddrPoolsAddrPool& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    // updateTimestamp Field Functions 
    bool hasUpdateTimestamp() const { return this->updateTimestamp_ != nullptr;};
    void deleteUpdateTimestamp() { this->updateTimestamp_ = nullptr;};
    inline int64_t updateTimestamp() const { DARABONBA_PTR_GET_DEFAULT(updateTimestamp_, 0L) };
    inline DescribeDnsGtmInstanceAddressPoolsResponseBodyAddrPoolsAddrPool& setUpdateTimestamp(int64_t updateTimestamp) { DARABONBA_PTR_SET_VALUE(updateTimestamp_, updateTimestamp) };


  protected:
    // The number of addresses in the address pool.
    std::shared_ptr<int32_t> addrCount_ = nullptr;
    // The ID of the address pool.
    std::shared_ptr<string> addrPoolId_ = nullptr;
    // The time when the address pool was created.
    std::shared_ptr<string> createTime_ = nullptr;
    // The timestamp that indicates when the address pool was created.
    std::shared_ptr<int64_t> createTimestamp_ = nullptr;
    // The load balancing policy of the address pool. Valid values:
    // 
    // *   ALL_RR: returns all addresses.
    // *   RATIO: returns addresses by weight.
    std::shared_ptr<string> lbaStrategy_ = nullptr;
    // The ID of the health check task.
    std::shared_ptr<string> monitorConfigId_ = nullptr;
    // Indicates whether health checks are configured. Valid values:
    // 
    // *   OPEN: enabled
    // *   CLOSE: disabled
    // *   UNCONFIGURED: not configured
    std::shared_ptr<string> monitorStatus_ = nullptr;
    // The name of the address pool.
    std::shared_ptr<string> name_ = nullptr;
    // The type of the address pool. Valid values:
    // 
    // *   IPV4: IPv4 address
    // *   IPV6: IPv6 address
    // *   DOMAIN: domain name
    std::shared_ptr<string> type_ = nullptr;
    // The time when the address pool was updated.
    std::shared_ptr<string> updateTime_ = nullptr;
    // The timestamp that indicates when the address pool was updated.
    std::shared_ptr<int64_t> updateTimestamp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
