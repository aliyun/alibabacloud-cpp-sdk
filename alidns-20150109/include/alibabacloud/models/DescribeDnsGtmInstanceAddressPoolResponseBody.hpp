// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDNSGTMINSTANCEADDRESSPOOLRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDNSGTMINSTANCEADDRESSPOOLRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeDnsGtmInstanceAddressPoolResponseBodyAddrs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeDnsGtmInstanceAddressPoolResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDnsGtmInstanceAddressPoolResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AddrCount, addrCount_);
      DARABONBA_PTR_TO_JSON(AddrPoolId, addrPoolId_);
      DARABONBA_PTR_TO_JSON(Addrs, addrs_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(CreateTimestamp, createTimestamp_);
      DARABONBA_PTR_TO_JSON(LbaStrategy, lbaStrategy_);
      DARABONBA_PTR_TO_JSON(MonitorConfigId, monitorConfigId_);
      DARABONBA_PTR_TO_JSON(MonitorStatus, monitorStatus_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_TO_JSON(UpdateTimestamp, updateTimestamp_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDnsGtmInstanceAddressPoolResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AddrCount, addrCount_);
      DARABONBA_PTR_FROM_JSON(AddrPoolId, addrPoolId_);
      DARABONBA_PTR_FROM_JSON(Addrs, addrs_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(CreateTimestamp, createTimestamp_);
      DARABONBA_PTR_FROM_JSON(LbaStrategy, lbaStrategy_);
      DARABONBA_PTR_FROM_JSON(MonitorConfigId, monitorConfigId_);
      DARABONBA_PTR_FROM_JSON(MonitorStatus, monitorStatus_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_FROM_JSON(UpdateTimestamp, updateTimestamp_);
    };
    DescribeDnsGtmInstanceAddressPoolResponseBody() = default ;
    DescribeDnsGtmInstanceAddressPoolResponseBody(const DescribeDnsGtmInstanceAddressPoolResponseBody &) = default ;
    DescribeDnsGtmInstanceAddressPoolResponseBody(DescribeDnsGtmInstanceAddressPoolResponseBody &&) = default ;
    DescribeDnsGtmInstanceAddressPoolResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDnsGtmInstanceAddressPoolResponseBody() = default ;
    DescribeDnsGtmInstanceAddressPoolResponseBody& operator=(const DescribeDnsGtmInstanceAddressPoolResponseBody &) = default ;
    DescribeDnsGtmInstanceAddressPoolResponseBody& operator=(DescribeDnsGtmInstanceAddressPoolResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->addrCount_ == nullptr
        && return this->addrPoolId_ == nullptr && return this->addrs_ == nullptr && return this->createTime_ == nullptr && return this->createTimestamp_ == nullptr && return this->lbaStrategy_ == nullptr
        && return this->monitorConfigId_ == nullptr && return this->monitorStatus_ == nullptr && return this->name_ == nullptr && return this->requestId_ == nullptr && return this->type_ == nullptr
        && return this->updateTime_ == nullptr && return this->updateTimestamp_ == nullptr; };
    // addrCount Field Functions 
    bool hasAddrCount() const { return this->addrCount_ != nullptr;};
    void deleteAddrCount() { this->addrCount_ = nullptr;};
    inline int32_t addrCount() const { DARABONBA_PTR_GET_DEFAULT(addrCount_, 0) };
    inline DescribeDnsGtmInstanceAddressPoolResponseBody& setAddrCount(int32_t addrCount) { DARABONBA_PTR_SET_VALUE(addrCount_, addrCount) };


    // addrPoolId Field Functions 
    bool hasAddrPoolId() const { return this->addrPoolId_ != nullptr;};
    void deleteAddrPoolId() { this->addrPoolId_ = nullptr;};
    inline string addrPoolId() const { DARABONBA_PTR_GET_DEFAULT(addrPoolId_, "") };
    inline DescribeDnsGtmInstanceAddressPoolResponseBody& setAddrPoolId(string addrPoolId) { DARABONBA_PTR_SET_VALUE(addrPoolId_, addrPoolId) };


    // addrs Field Functions 
    bool hasAddrs() const { return this->addrs_ != nullptr;};
    void deleteAddrs() { this->addrs_ = nullptr;};
    inline const DescribeDnsGtmInstanceAddressPoolResponseBodyAddrs & addrs() const { DARABONBA_PTR_GET_CONST(addrs_, DescribeDnsGtmInstanceAddressPoolResponseBodyAddrs) };
    inline DescribeDnsGtmInstanceAddressPoolResponseBodyAddrs addrs() { DARABONBA_PTR_GET(addrs_, DescribeDnsGtmInstanceAddressPoolResponseBodyAddrs) };
    inline DescribeDnsGtmInstanceAddressPoolResponseBody& setAddrs(const DescribeDnsGtmInstanceAddressPoolResponseBodyAddrs & addrs) { DARABONBA_PTR_SET_VALUE(addrs_, addrs) };
    inline DescribeDnsGtmInstanceAddressPoolResponseBody& setAddrs(DescribeDnsGtmInstanceAddressPoolResponseBodyAddrs && addrs) { DARABONBA_PTR_SET_RVALUE(addrs_, addrs) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline DescribeDnsGtmInstanceAddressPoolResponseBody& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // createTimestamp Field Functions 
    bool hasCreateTimestamp() const { return this->createTimestamp_ != nullptr;};
    void deleteCreateTimestamp() { this->createTimestamp_ = nullptr;};
    inline int64_t createTimestamp() const { DARABONBA_PTR_GET_DEFAULT(createTimestamp_, 0L) };
    inline DescribeDnsGtmInstanceAddressPoolResponseBody& setCreateTimestamp(int64_t createTimestamp) { DARABONBA_PTR_SET_VALUE(createTimestamp_, createTimestamp) };


    // lbaStrategy Field Functions 
    bool hasLbaStrategy() const { return this->lbaStrategy_ != nullptr;};
    void deleteLbaStrategy() { this->lbaStrategy_ = nullptr;};
    inline string lbaStrategy() const { DARABONBA_PTR_GET_DEFAULT(lbaStrategy_, "") };
    inline DescribeDnsGtmInstanceAddressPoolResponseBody& setLbaStrategy(string lbaStrategy) { DARABONBA_PTR_SET_VALUE(lbaStrategy_, lbaStrategy) };


    // monitorConfigId Field Functions 
    bool hasMonitorConfigId() const { return this->monitorConfigId_ != nullptr;};
    void deleteMonitorConfigId() { this->monitorConfigId_ = nullptr;};
    inline string monitorConfigId() const { DARABONBA_PTR_GET_DEFAULT(monitorConfigId_, "") };
    inline DescribeDnsGtmInstanceAddressPoolResponseBody& setMonitorConfigId(string monitorConfigId) { DARABONBA_PTR_SET_VALUE(monitorConfigId_, monitorConfigId) };


    // monitorStatus Field Functions 
    bool hasMonitorStatus() const { return this->monitorStatus_ != nullptr;};
    void deleteMonitorStatus() { this->monitorStatus_ = nullptr;};
    inline string monitorStatus() const { DARABONBA_PTR_GET_DEFAULT(monitorStatus_, "") };
    inline DescribeDnsGtmInstanceAddressPoolResponseBody& setMonitorStatus(string monitorStatus) { DARABONBA_PTR_SET_VALUE(monitorStatus_, monitorStatus) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeDnsGtmInstanceAddressPoolResponseBody& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDnsGtmInstanceAddressPoolResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeDnsGtmInstanceAddressPoolResponseBody& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline DescribeDnsGtmInstanceAddressPoolResponseBody& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    // updateTimestamp Field Functions 
    bool hasUpdateTimestamp() const { return this->updateTimestamp_ != nullptr;};
    void deleteUpdateTimestamp() { this->updateTimestamp_ = nullptr;};
    inline int64_t updateTimestamp() const { DARABONBA_PTR_GET_DEFAULT(updateTimestamp_, 0L) };
    inline DescribeDnsGtmInstanceAddressPoolResponseBody& setUpdateTimestamp(int64_t updateTimestamp) { DARABONBA_PTR_SET_VALUE(updateTimestamp_, updateTimestamp) };


  protected:
    // The number of addresses in the address pool.
    std::shared_ptr<int32_t> addrCount_ = nullptr;
    // The ID of the address pool.
    std::shared_ptr<string> addrPoolId_ = nullptr;
    // The addresses in the address pool.
    std::shared_ptr<DescribeDnsGtmInstanceAddressPoolResponseBodyAddrs> addrs_ = nullptr;
    // The time when the address pool was created.
    std::shared_ptr<string> createTime_ = nullptr;
    // The timestamp that indicates the time when the address pool was created.
    std::shared_ptr<int64_t> createTimestamp_ = nullptr;
    // The load balancing policy for the address pool. Valid values:
    // 
    // *   ALL_RR: returns all addresses.
    // *   RATIO: returns addresses by weight.
    std::shared_ptr<string> lbaStrategy_ = nullptr;
    // The ID of the health check configuration.
    std::shared_ptr<string> monitorConfigId_ = nullptr;
    // Indicates the status of the health check. Valid values:
    // 
    // *   OPEN: The health check is enabled.
    // *   CLOSE: The health check is disabled.
    // *   UNCONFIGURED: The health check is not configured.
    std::shared_ptr<string> monitorStatus_ = nullptr;
    // The name of the address pool.
    std::shared_ptr<string> name_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The type of the address pool. Valid values:
    // 
    // *   IPV4: IPv4 address
    // *   IPV6: IPv6 address
    // *   DOMAIN: domain name
    std::shared_ptr<string> type_ = nullptr;
    // The time when the address pool was last updated.
    std::shared_ptr<string> updateTime_ = nullptr;
    // The timestamp that indicates the time when the address pool was last updated.
    std::shared_ptr<int64_t> updateTimestamp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
