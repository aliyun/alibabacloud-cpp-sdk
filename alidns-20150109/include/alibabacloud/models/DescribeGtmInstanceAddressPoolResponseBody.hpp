// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEGTMINSTANCEADDRESSPOOLRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEGTMINSTANCEADDRESSPOOLRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
    class Addrs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Addrs& obj) { 
        DARABONBA_PTR_TO_JSON(Addr, addr_);
      };
      friend void from_json(const Darabonba::Json& j, Addrs& obj) { 
        DARABONBA_PTR_FROM_JSON(Addr, addr_);
      };
      Addrs() = default ;
      Addrs(const Addrs &) = default ;
      Addrs(Addrs &&) = default ;
      Addrs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Addrs() = default ;
      Addrs& operator=(const Addrs &) = default ;
      Addrs& operator=(Addrs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Addr : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Addr& obj) { 
          DARABONBA_PTR_TO_JSON(AddrId, addrId_);
          DARABONBA_PTR_TO_JSON(AlertStatus, alertStatus_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(CreateTimestamp, createTimestamp_);
          DARABONBA_PTR_TO_JSON(LbaWeight, lbaWeight_);
          DARABONBA_PTR_TO_JSON(Mode, mode_);
          DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
          DARABONBA_PTR_TO_JSON(UpdateTimestamp, updateTimestamp_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, Addr& obj) { 
          DARABONBA_PTR_FROM_JSON(AddrId, addrId_);
          DARABONBA_PTR_FROM_JSON(AlertStatus, alertStatus_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(CreateTimestamp, createTimestamp_);
          DARABONBA_PTR_FROM_JSON(LbaWeight, lbaWeight_);
          DARABONBA_PTR_FROM_JSON(Mode, mode_);
          DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
          DARABONBA_PTR_FROM_JSON(UpdateTimestamp, updateTimestamp_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
        };
        Addr() = default ;
        Addr(const Addr &) = default ;
        Addr(Addr &&) = default ;
        Addr(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Addr() = default ;
        Addr& operator=(const Addr &) = default ;
        Addr& operator=(Addr &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->addrId_ == nullptr
        && this->alertStatus_ == nullptr && this->createTime_ == nullptr && this->createTimestamp_ == nullptr && this->lbaWeight_ == nullptr && this->mode_ == nullptr
        && this->updateTime_ == nullptr && this->updateTimestamp_ == nullptr && this->value_ == nullptr; };
        // addrId Field Functions 
        bool hasAddrId() const { return this->addrId_ != nullptr;};
        void deleteAddrId() { this->addrId_ = nullptr;};
        inline int64_t getAddrId() const { DARABONBA_PTR_GET_DEFAULT(addrId_, 0L) };
        inline Addr& setAddrId(int64_t addrId) { DARABONBA_PTR_SET_VALUE(addrId_, addrId) };


        // alertStatus Field Functions 
        bool hasAlertStatus() const { return this->alertStatus_ != nullptr;};
        void deleteAlertStatus() { this->alertStatus_ = nullptr;};
        inline string getAlertStatus() const { DARABONBA_PTR_GET_DEFAULT(alertStatus_, "") };
        inline Addr& setAlertStatus(string alertStatus) { DARABONBA_PTR_SET_VALUE(alertStatus_, alertStatus) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline Addr& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // createTimestamp Field Functions 
        bool hasCreateTimestamp() const { return this->createTimestamp_ != nullptr;};
        void deleteCreateTimestamp() { this->createTimestamp_ = nullptr;};
        inline int64_t getCreateTimestamp() const { DARABONBA_PTR_GET_DEFAULT(createTimestamp_, 0L) };
        inline Addr& setCreateTimestamp(int64_t createTimestamp) { DARABONBA_PTR_SET_VALUE(createTimestamp_, createTimestamp) };


        // lbaWeight Field Functions 
        bool hasLbaWeight() const { return this->lbaWeight_ != nullptr;};
        void deleteLbaWeight() { this->lbaWeight_ = nullptr;};
        inline int32_t getLbaWeight() const { DARABONBA_PTR_GET_DEFAULT(lbaWeight_, 0) };
        inline Addr& setLbaWeight(int32_t lbaWeight) { DARABONBA_PTR_SET_VALUE(lbaWeight_, lbaWeight) };


        // mode Field Functions 
        bool hasMode() const { return this->mode_ != nullptr;};
        void deleteMode() { this->mode_ = nullptr;};
        inline string getMode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
        inline Addr& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


        // updateTime Field Functions 
        bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
        void deleteUpdateTime() { this->updateTime_ = nullptr;};
        inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
        inline Addr& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


        // updateTimestamp Field Functions 
        bool hasUpdateTimestamp() const { return this->updateTimestamp_ != nullptr;};
        void deleteUpdateTimestamp() { this->updateTimestamp_ = nullptr;};
        inline int64_t getUpdateTimestamp() const { DARABONBA_PTR_GET_DEFAULT(updateTimestamp_, 0L) };
        inline Addr& setUpdateTimestamp(int64_t updateTimestamp) { DARABONBA_PTR_SET_VALUE(updateTimestamp_, updateTimestamp) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline Addr& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        // The ID of the address.
        shared_ptr<int64_t> addrId_ {};
        // Indicates whether health check was enabled for the address. Valid values:
        // 
        // *   **OK**: Normal
        // *   **ALERT**: Alert
        shared_ptr<string> alertStatus_ {};
        // The time when the address pool was created.
        shared_ptr<string> createTime_ {};
        shared_ptr<int64_t> createTimestamp_ {};
        // The weight of the address.
        shared_ptr<int32_t> lbaWeight_ {};
        // The mode of the address. Valid values:
        // 
        // *   **SMART**: Intelligent return
        // *   **ONLINE**: Always online
        // *   **OFFLINE**: Always offline
        shared_ptr<string> mode_ {};
        // The last time when the address was updated.
        shared_ptr<string> updateTime_ {};
        // A timestamp that indicates the last time when the address was updated.
        shared_ptr<int64_t> updateTimestamp_ {};
        // The address.
        shared_ptr<string> value_ {};
      };

      virtual bool empty() const override { return this->addr_ == nullptr; };
      // addr Field Functions 
      bool hasAddr() const { return this->addr_ != nullptr;};
      void deleteAddr() { this->addr_ = nullptr;};
      inline const vector<Addrs::Addr> & getAddr() const { DARABONBA_PTR_GET_CONST(addr_, vector<Addrs::Addr>) };
      inline vector<Addrs::Addr> getAddr() { DARABONBA_PTR_GET(addr_, vector<Addrs::Addr>) };
      inline Addrs& setAddr(const vector<Addrs::Addr> & addr) { DARABONBA_PTR_SET_VALUE(addr_, addr) };
      inline Addrs& setAddr(vector<Addrs::Addr> && addr) { DARABONBA_PTR_SET_RVALUE(addr_, addr) };


    protected:
      shared_ptr<vector<Addrs::Addr>> addr_ {};
    };

    virtual bool empty() const override { return this->addrCount_ == nullptr
        && this->addrPoolId_ == nullptr && this->addrs_ == nullptr && this->createTime_ == nullptr && this->createTimestamp_ == nullptr && this->minAvailableAddrNum_ == nullptr
        && this->monitorConfigId_ == nullptr && this->monitorStatus_ == nullptr && this->name_ == nullptr && this->requestId_ == nullptr && this->status_ == nullptr
        && this->type_ == nullptr && this->updateTime_ == nullptr && this->updateTimestamp_ == nullptr; };
    // addrCount Field Functions 
    bool hasAddrCount() const { return this->addrCount_ != nullptr;};
    void deleteAddrCount() { this->addrCount_ = nullptr;};
    inline int32_t getAddrCount() const { DARABONBA_PTR_GET_DEFAULT(addrCount_, 0) };
    inline DescribeGtmInstanceAddressPoolResponseBody& setAddrCount(int32_t addrCount) { DARABONBA_PTR_SET_VALUE(addrCount_, addrCount) };


    // addrPoolId Field Functions 
    bool hasAddrPoolId() const { return this->addrPoolId_ != nullptr;};
    void deleteAddrPoolId() { this->addrPoolId_ = nullptr;};
    inline string getAddrPoolId() const { DARABONBA_PTR_GET_DEFAULT(addrPoolId_, "") };
    inline DescribeGtmInstanceAddressPoolResponseBody& setAddrPoolId(string addrPoolId) { DARABONBA_PTR_SET_VALUE(addrPoolId_, addrPoolId) };


    // addrs Field Functions 
    bool hasAddrs() const { return this->addrs_ != nullptr;};
    void deleteAddrs() { this->addrs_ = nullptr;};
    inline const DescribeGtmInstanceAddressPoolResponseBody::Addrs & getAddrs() const { DARABONBA_PTR_GET_CONST(addrs_, DescribeGtmInstanceAddressPoolResponseBody::Addrs) };
    inline DescribeGtmInstanceAddressPoolResponseBody::Addrs getAddrs() { DARABONBA_PTR_GET(addrs_, DescribeGtmInstanceAddressPoolResponseBody::Addrs) };
    inline DescribeGtmInstanceAddressPoolResponseBody& setAddrs(const DescribeGtmInstanceAddressPoolResponseBody::Addrs & addrs) { DARABONBA_PTR_SET_VALUE(addrs_, addrs) };
    inline DescribeGtmInstanceAddressPoolResponseBody& setAddrs(DescribeGtmInstanceAddressPoolResponseBody::Addrs && addrs) { DARABONBA_PTR_SET_RVALUE(addrs_, addrs) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline DescribeGtmInstanceAddressPoolResponseBody& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // createTimestamp Field Functions 
    bool hasCreateTimestamp() const { return this->createTimestamp_ != nullptr;};
    void deleteCreateTimestamp() { this->createTimestamp_ = nullptr;};
    inline int64_t getCreateTimestamp() const { DARABONBA_PTR_GET_DEFAULT(createTimestamp_, 0L) };
    inline DescribeGtmInstanceAddressPoolResponseBody& setCreateTimestamp(int64_t createTimestamp) { DARABONBA_PTR_SET_VALUE(createTimestamp_, createTimestamp) };


    // minAvailableAddrNum Field Functions 
    bool hasMinAvailableAddrNum() const { return this->minAvailableAddrNum_ != nullptr;};
    void deleteMinAvailableAddrNum() { this->minAvailableAddrNum_ = nullptr;};
    inline int32_t getMinAvailableAddrNum() const { DARABONBA_PTR_GET_DEFAULT(minAvailableAddrNum_, 0) };
    inline DescribeGtmInstanceAddressPoolResponseBody& setMinAvailableAddrNum(int32_t minAvailableAddrNum) { DARABONBA_PTR_SET_VALUE(minAvailableAddrNum_, minAvailableAddrNum) };


    // monitorConfigId Field Functions 
    bool hasMonitorConfigId() const { return this->monitorConfigId_ != nullptr;};
    void deleteMonitorConfigId() { this->monitorConfigId_ = nullptr;};
    inline string getMonitorConfigId() const { DARABONBA_PTR_GET_DEFAULT(monitorConfigId_, "") };
    inline DescribeGtmInstanceAddressPoolResponseBody& setMonitorConfigId(string monitorConfigId) { DARABONBA_PTR_SET_VALUE(monitorConfigId_, monitorConfigId) };


    // monitorStatus Field Functions 
    bool hasMonitorStatus() const { return this->monitorStatus_ != nullptr;};
    void deleteMonitorStatus() { this->monitorStatus_ = nullptr;};
    inline string getMonitorStatus() const { DARABONBA_PTR_GET_DEFAULT(monitorStatus_, "") };
    inline DescribeGtmInstanceAddressPoolResponseBody& setMonitorStatus(string monitorStatus) { DARABONBA_PTR_SET_VALUE(monitorStatus_, monitorStatus) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeGtmInstanceAddressPoolResponseBody& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeGtmInstanceAddressPoolResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeGtmInstanceAddressPoolResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeGtmInstanceAddressPoolResponseBody& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline DescribeGtmInstanceAddressPoolResponseBody& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    // updateTimestamp Field Functions 
    bool hasUpdateTimestamp() const { return this->updateTimestamp_ != nullptr;};
    void deleteUpdateTimestamp() { this->updateTimestamp_ = nullptr;};
    inline int64_t getUpdateTimestamp() const { DARABONBA_PTR_GET_DEFAULT(updateTimestamp_, 0L) };
    inline DescribeGtmInstanceAddressPoolResponseBody& setUpdateTimestamp(int64_t updateTimestamp) { DARABONBA_PTR_SET_VALUE(updateTimestamp_, updateTimestamp) };


  protected:
    // The number of addresses in the address pool queried.
    shared_ptr<int32_t> addrCount_ {};
    // The ID of the address pool.
    shared_ptr<string> addrPoolId_ {};
    // The addresses in the address pool.
    shared_ptr<DescribeGtmInstanceAddressPoolResponseBody::Addrs> addrs_ {};
    // The time when the address pool was created.
    shared_ptr<string> createTime_ {};
    shared_ptr<int64_t> createTimestamp_ {};
    // The minimum number of available addresses in the address pool.
    shared_ptr<int32_t> minAvailableAddrNum_ {};
    // The health check ID of the address pool.
    shared_ptr<string> monitorConfigId_ {};
    // Indicates whether health check was enabled for the address pool. Valid values:
    // 
    // *   **OPEN**: Enabled
    // *   **CLOSE**: Disabled
    // *   **UNCONFIGURED**: Not configured
    shared_ptr<string> monitorStatus_ {};
    // The name of the address pool.
    shared_ptr<string> name_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The availability status of the address pool. Valid values:
    // 
    // *   **AVAILABLE**: Available
    // *   **NOT_AVAILABLE**: Unavailable
    shared_ptr<string> status_ {};
    // The type of the address pool. Valid values:
    // 
    // *   **IP**: IP address
    // *   **DOMAIN**: Domain name
    shared_ptr<string> type_ {};
    // The last time when the address pool was updated.
    shared_ptr<string> updateTime_ {};
    // A timestamp that indicates the last time the address pool was updated.
    shared_ptr<int64_t> updateTimestamp_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
