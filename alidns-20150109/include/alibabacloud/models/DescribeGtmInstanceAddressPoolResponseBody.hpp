// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEGTMINSTANCEADDRESSPOOLRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEGTMINSTANCEADDRESSPOOLRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeGtmInstanceAddressPoolResponseBodyAddrs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeGtmInstanceAddressPoolResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeGtmInstanceAddressPoolResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AddrCount, addrCount_);
      DARABONBA_PTR_TO_JSON(AddrPoolId, addrPoolId_);
      DARABONBA_PTR_TO_JSON(Addrs, addrs_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(CreateTimestamp, createTimestamp_);
      DARABONBA_PTR_TO_JSON(MinAvailableAddrNum, minAvailableAddrNum_);
      DARABONBA_PTR_TO_JSON(MonitorConfigId, monitorConfigId_);
      DARABONBA_PTR_TO_JSON(MonitorStatus, monitorStatus_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_TO_JSON(UpdateTimestamp, updateTimestamp_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeGtmInstanceAddressPoolResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AddrCount, addrCount_);
      DARABONBA_PTR_FROM_JSON(AddrPoolId, addrPoolId_);
      DARABONBA_PTR_FROM_JSON(Addrs, addrs_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(CreateTimestamp, createTimestamp_);
      DARABONBA_PTR_FROM_JSON(MinAvailableAddrNum, minAvailableAddrNum_);
      DARABONBA_PTR_FROM_JSON(MonitorConfigId, monitorConfigId_);
      DARABONBA_PTR_FROM_JSON(MonitorStatus, monitorStatus_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_FROM_JSON(UpdateTimestamp, updateTimestamp_);
    };
    DescribeGtmInstanceAddressPoolResponseBody() = default ;
    DescribeGtmInstanceAddressPoolResponseBody(const DescribeGtmInstanceAddressPoolResponseBody &) = default ;
    DescribeGtmInstanceAddressPoolResponseBody(DescribeGtmInstanceAddressPoolResponseBody &&) = default ;
    DescribeGtmInstanceAddressPoolResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeGtmInstanceAddressPoolResponseBody() = default ;
    DescribeGtmInstanceAddressPoolResponseBody& operator=(const DescribeGtmInstanceAddressPoolResponseBody &) = default ;
    DescribeGtmInstanceAddressPoolResponseBody& operator=(DescribeGtmInstanceAddressPoolResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->addrCount_ != nullptr
        && this->addrPoolId_ != nullptr && this->addrs_ != nullptr && this->createTime_ != nullptr && this->createTimestamp_ != nullptr && this->minAvailableAddrNum_ != nullptr
        && this->monitorConfigId_ != nullptr && this->monitorStatus_ != nullptr && this->name_ != nullptr && this->requestId_ != nullptr && this->status_ != nullptr
        && this->type_ != nullptr && this->updateTime_ != nullptr && this->updateTimestamp_ != nullptr; };
    // addrCount Field Functions 
    bool hasAddrCount() const { return this->addrCount_ != nullptr;};
    void deleteAddrCount() { this->addrCount_ = nullptr;};
    inline int32_t addrCount() const { DARABONBA_PTR_GET_DEFAULT(addrCount_, 0) };
    inline DescribeGtmInstanceAddressPoolResponseBody& setAddrCount(int32_t addrCount) { DARABONBA_PTR_SET_VALUE(addrCount_, addrCount) };


    // addrPoolId Field Functions 
    bool hasAddrPoolId() const { return this->addrPoolId_ != nullptr;};
    void deleteAddrPoolId() { this->addrPoolId_ = nullptr;};
    inline string addrPoolId() const { DARABONBA_PTR_GET_DEFAULT(addrPoolId_, "") };
    inline DescribeGtmInstanceAddressPoolResponseBody& setAddrPoolId(string addrPoolId) { DARABONBA_PTR_SET_VALUE(addrPoolId_, addrPoolId) };


    // addrs Field Functions 
    bool hasAddrs() const { return this->addrs_ != nullptr;};
    void deleteAddrs() { this->addrs_ = nullptr;};
    inline const DescribeGtmInstanceAddressPoolResponseBodyAddrs & addrs() const { DARABONBA_PTR_GET_CONST(addrs_, DescribeGtmInstanceAddressPoolResponseBodyAddrs) };
    inline DescribeGtmInstanceAddressPoolResponseBodyAddrs addrs() { DARABONBA_PTR_GET(addrs_, DescribeGtmInstanceAddressPoolResponseBodyAddrs) };
    inline DescribeGtmInstanceAddressPoolResponseBody& setAddrs(const DescribeGtmInstanceAddressPoolResponseBodyAddrs & addrs) { DARABONBA_PTR_SET_VALUE(addrs_, addrs) };
    inline DescribeGtmInstanceAddressPoolResponseBody& setAddrs(DescribeGtmInstanceAddressPoolResponseBodyAddrs && addrs) { DARABONBA_PTR_SET_RVALUE(addrs_, addrs) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline DescribeGtmInstanceAddressPoolResponseBody& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // createTimestamp Field Functions 
    bool hasCreateTimestamp() const { return this->createTimestamp_ != nullptr;};
    void deleteCreateTimestamp() { this->createTimestamp_ = nullptr;};
    inline int64_t createTimestamp() const { DARABONBA_PTR_GET_DEFAULT(createTimestamp_, 0L) };
    inline DescribeGtmInstanceAddressPoolResponseBody& setCreateTimestamp(int64_t createTimestamp) { DARABONBA_PTR_SET_VALUE(createTimestamp_, createTimestamp) };


    // minAvailableAddrNum Field Functions 
    bool hasMinAvailableAddrNum() const { return this->minAvailableAddrNum_ != nullptr;};
    void deleteMinAvailableAddrNum() { this->minAvailableAddrNum_ = nullptr;};
    inline int32_t minAvailableAddrNum() const { DARABONBA_PTR_GET_DEFAULT(minAvailableAddrNum_, 0) };
    inline DescribeGtmInstanceAddressPoolResponseBody& setMinAvailableAddrNum(int32_t minAvailableAddrNum) { DARABONBA_PTR_SET_VALUE(minAvailableAddrNum_, minAvailableAddrNum) };


    // monitorConfigId Field Functions 
    bool hasMonitorConfigId() const { return this->monitorConfigId_ != nullptr;};
    void deleteMonitorConfigId() { this->monitorConfigId_ = nullptr;};
    inline string monitorConfigId() const { DARABONBA_PTR_GET_DEFAULT(monitorConfigId_, "") };
    inline DescribeGtmInstanceAddressPoolResponseBody& setMonitorConfigId(string monitorConfigId) { DARABONBA_PTR_SET_VALUE(monitorConfigId_, monitorConfigId) };


    // monitorStatus Field Functions 
    bool hasMonitorStatus() const { return this->monitorStatus_ != nullptr;};
    void deleteMonitorStatus() { this->monitorStatus_ = nullptr;};
    inline string monitorStatus() const { DARABONBA_PTR_GET_DEFAULT(monitorStatus_, "") };
    inline DescribeGtmInstanceAddressPoolResponseBody& setMonitorStatus(string monitorStatus) { DARABONBA_PTR_SET_VALUE(monitorStatus_, monitorStatus) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeGtmInstanceAddressPoolResponseBody& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeGtmInstanceAddressPoolResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeGtmInstanceAddressPoolResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeGtmInstanceAddressPoolResponseBody& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline DescribeGtmInstanceAddressPoolResponseBody& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    // updateTimestamp Field Functions 
    bool hasUpdateTimestamp() const { return this->updateTimestamp_ != nullptr;};
    void deleteUpdateTimestamp() { this->updateTimestamp_ = nullptr;};
    inline int64_t updateTimestamp() const { DARABONBA_PTR_GET_DEFAULT(updateTimestamp_, 0L) };
    inline DescribeGtmInstanceAddressPoolResponseBody& setUpdateTimestamp(int64_t updateTimestamp) { DARABONBA_PTR_SET_VALUE(updateTimestamp_, updateTimestamp) };


  protected:
    // The number of addresses in the address pool queried.
    std::shared_ptr<int32_t> addrCount_ = nullptr;
    // The ID of the address pool.
    std::shared_ptr<string> addrPoolId_ = nullptr;
    // The addresses in the address pool.
    std::shared_ptr<DescribeGtmInstanceAddressPoolResponseBodyAddrs> addrs_ = nullptr;
    // The time when the address pool was created.
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<int64_t> createTimestamp_ = nullptr;
    // The minimum number of available addresses in the address pool.
    std::shared_ptr<int32_t> minAvailableAddrNum_ = nullptr;
    // The health check ID of the address pool.
    std::shared_ptr<string> monitorConfigId_ = nullptr;
    // Indicates whether health check was enabled for the address pool. Valid values:
    // 
    // *   **OPEN**: Enabled
    // *   **CLOSE**: Disabled
    // *   **UNCONFIGURED**: Not configured
    std::shared_ptr<string> monitorStatus_ = nullptr;
    // The name of the address pool.
    std::shared_ptr<string> name_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The availability status of the address pool. Valid values:
    // 
    // *   **AVAILABLE**: Available
    // *   **NOT_AVAILABLE**: Unavailable
    std::shared_ptr<string> status_ = nullptr;
    // The type of the address pool. Valid values:
    // 
    // *   **IP**: IP address
    // *   **DOMAIN**: Domain name
    std::shared_ptr<string> type_ = nullptr;
    // The last time when the address pool was updated.
    std::shared_ptr<string> updateTime_ = nullptr;
    // A timestamp that indicates the last time the address pool was updated.
    std::shared_ptr<int64_t> updateTimestamp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
