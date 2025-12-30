// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDNSGTMINSTANCEADDRESSPOOLRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDNSGTMINSTANCEADDRESSPOOLRESPONSEBODY_HPP_
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
          DARABONBA_PTR_TO_JSON(Addr, addr_);
          DARABONBA_PTR_TO_JSON(AlertStatus, alertStatus_);
          DARABONBA_PTR_TO_JSON(AttributeInfo, attributeInfo_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(CreateTimestamp, createTimestamp_);
          DARABONBA_PTR_TO_JSON(LbaWeight, lbaWeight_);
          DARABONBA_PTR_TO_JSON(Mode, mode_);
          DARABONBA_PTR_TO_JSON(Remark, remark_);
          DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
          DARABONBA_PTR_TO_JSON(UpdateTimestamp, updateTimestamp_);
        };
        friend void from_json(const Darabonba::Json& j, Addr& obj) { 
          DARABONBA_PTR_FROM_JSON(Addr, addr_);
          DARABONBA_PTR_FROM_JSON(AlertStatus, alertStatus_);
          DARABONBA_PTR_FROM_JSON(AttributeInfo, attributeInfo_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(CreateTimestamp, createTimestamp_);
          DARABONBA_PTR_FROM_JSON(LbaWeight, lbaWeight_);
          DARABONBA_PTR_FROM_JSON(Mode, mode_);
          DARABONBA_PTR_FROM_JSON(Remark, remark_);
          DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
          DARABONBA_PTR_FROM_JSON(UpdateTimestamp, updateTimestamp_);
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
        virtual bool empty() const override { return this->addr_ == nullptr
        && this->alertStatus_ == nullptr && this->attributeInfo_ == nullptr && this->createTime_ == nullptr && this->createTimestamp_ == nullptr && this->lbaWeight_ == nullptr
        && this->mode_ == nullptr && this->remark_ == nullptr && this->updateTime_ == nullptr && this->updateTimestamp_ == nullptr; };
        // addr Field Functions 
        bool hasAddr() const { return this->addr_ != nullptr;};
        void deleteAddr() { this->addr_ = nullptr;};
        inline string getAddr() const { DARABONBA_PTR_GET_DEFAULT(addr_, "") };
        inline Addr& setAddr(string addr) { DARABONBA_PTR_SET_VALUE(addr_, addr) };


        // alertStatus Field Functions 
        bool hasAlertStatus() const { return this->alertStatus_ != nullptr;};
        void deleteAlertStatus() { this->alertStatus_ = nullptr;};
        inline string getAlertStatus() const { DARABONBA_PTR_GET_DEFAULT(alertStatus_, "") };
        inline Addr& setAlertStatus(string alertStatus) { DARABONBA_PTR_SET_VALUE(alertStatus_, alertStatus) };


        // attributeInfo Field Functions 
        bool hasAttributeInfo() const { return this->attributeInfo_ != nullptr;};
        void deleteAttributeInfo() { this->attributeInfo_ = nullptr;};
        inline string getAttributeInfo() const { DARABONBA_PTR_GET_DEFAULT(attributeInfo_, "") };
        inline Addr& setAttributeInfo(string attributeInfo) { DARABONBA_PTR_SET_VALUE(attributeInfo_, attributeInfo) };


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


        // remark Field Functions 
        bool hasRemark() const { return this->remark_ != nullptr;};
        void deleteRemark() { this->remark_ = nullptr;};
        inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
        inline Addr& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


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


      protected:
        // The address.
        shared_ptr<string> addr_ {};
        // The status of the last health check on the address. Valid values:
        // 
        // *   OK: No active alerts are triggered.
        // *   ALERT: Alerts are triggered based on the alert rules.
        shared_ptr<string> alertStatus_ {};
        // The source region of the address.
        // 
        // *   lineCode: the line code of the source region of the address. This parameter is deprecated, and lineCodes prevails.
        // *   lineName: the line name of the source region of the address. This parameter is deprecated.
        // *   lineCodes: the line codes of the source regions of the address.
        shared_ptr<string> attributeInfo_ {};
        // The time when the address was added into the address pool.
        shared_ptr<string> createTime_ {};
        // The timestamp that indicates the time when the address was added into the address pool.
        shared_ptr<int64_t> createTimestamp_ {};
        // The weight of the address.
        shared_ptr<int32_t> lbaWeight_ {};
        // The mode of the address. Valid values:
        // 
        // *   SMART: smart return
        // *   ONLINE: always online
        // *   OFFLINE: always offline
        shared_ptr<string> mode_ {};
        // The description of the address.
        shared_ptr<string> remark_ {};
        // The time when the address was last updated.
        shared_ptr<string> updateTime_ {};
        // The timestamp that indicates the time when the address was last updated.
        shared_ptr<int64_t> updateTimestamp_ {};
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
        && this->addrPoolId_ == nullptr && this->addrs_ == nullptr && this->createTime_ == nullptr && this->createTimestamp_ == nullptr && this->lbaStrategy_ == nullptr
        && this->monitorConfigId_ == nullptr && this->monitorStatus_ == nullptr && this->name_ == nullptr && this->requestId_ == nullptr && this->type_ == nullptr
        && this->updateTime_ == nullptr && this->updateTimestamp_ == nullptr; };
    // addrCount Field Functions 
    bool hasAddrCount() const { return this->addrCount_ != nullptr;};
    void deleteAddrCount() { this->addrCount_ = nullptr;};
    inline int32_t getAddrCount() const { DARABONBA_PTR_GET_DEFAULT(addrCount_, 0) };
    inline DescribeDnsGtmInstanceAddressPoolResponseBody& setAddrCount(int32_t addrCount) { DARABONBA_PTR_SET_VALUE(addrCount_, addrCount) };


    // addrPoolId Field Functions 
    bool hasAddrPoolId() const { return this->addrPoolId_ != nullptr;};
    void deleteAddrPoolId() { this->addrPoolId_ = nullptr;};
    inline string getAddrPoolId() const { DARABONBA_PTR_GET_DEFAULT(addrPoolId_, "") };
    inline DescribeDnsGtmInstanceAddressPoolResponseBody& setAddrPoolId(string addrPoolId) { DARABONBA_PTR_SET_VALUE(addrPoolId_, addrPoolId) };


    // addrs Field Functions 
    bool hasAddrs() const { return this->addrs_ != nullptr;};
    void deleteAddrs() { this->addrs_ = nullptr;};
    inline const DescribeDnsGtmInstanceAddressPoolResponseBody::Addrs & getAddrs() const { DARABONBA_PTR_GET_CONST(addrs_, DescribeDnsGtmInstanceAddressPoolResponseBody::Addrs) };
    inline DescribeDnsGtmInstanceAddressPoolResponseBody::Addrs getAddrs() { DARABONBA_PTR_GET(addrs_, DescribeDnsGtmInstanceAddressPoolResponseBody::Addrs) };
    inline DescribeDnsGtmInstanceAddressPoolResponseBody& setAddrs(const DescribeDnsGtmInstanceAddressPoolResponseBody::Addrs & addrs) { DARABONBA_PTR_SET_VALUE(addrs_, addrs) };
    inline DescribeDnsGtmInstanceAddressPoolResponseBody& setAddrs(DescribeDnsGtmInstanceAddressPoolResponseBody::Addrs && addrs) { DARABONBA_PTR_SET_RVALUE(addrs_, addrs) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline DescribeDnsGtmInstanceAddressPoolResponseBody& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // createTimestamp Field Functions 
    bool hasCreateTimestamp() const { return this->createTimestamp_ != nullptr;};
    void deleteCreateTimestamp() { this->createTimestamp_ = nullptr;};
    inline int64_t getCreateTimestamp() const { DARABONBA_PTR_GET_DEFAULT(createTimestamp_, 0L) };
    inline DescribeDnsGtmInstanceAddressPoolResponseBody& setCreateTimestamp(int64_t createTimestamp) { DARABONBA_PTR_SET_VALUE(createTimestamp_, createTimestamp) };


    // lbaStrategy Field Functions 
    bool hasLbaStrategy() const { return this->lbaStrategy_ != nullptr;};
    void deleteLbaStrategy() { this->lbaStrategy_ = nullptr;};
    inline string getLbaStrategy() const { DARABONBA_PTR_GET_DEFAULT(lbaStrategy_, "") };
    inline DescribeDnsGtmInstanceAddressPoolResponseBody& setLbaStrategy(string lbaStrategy) { DARABONBA_PTR_SET_VALUE(lbaStrategy_, lbaStrategy) };


    // monitorConfigId Field Functions 
    bool hasMonitorConfigId() const { return this->monitorConfigId_ != nullptr;};
    void deleteMonitorConfigId() { this->monitorConfigId_ = nullptr;};
    inline string getMonitorConfigId() const { DARABONBA_PTR_GET_DEFAULT(monitorConfigId_, "") };
    inline DescribeDnsGtmInstanceAddressPoolResponseBody& setMonitorConfigId(string monitorConfigId) { DARABONBA_PTR_SET_VALUE(monitorConfigId_, monitorConfigId) };


    // monitorStatus Field Functions 
    bool hasMonitorStatus() const { return this->monitorStatus_ != nullptr;};
    void deleteMonitorStatus() { this->monitorStatus_ = nullptr;};
    inline string getMonitorStatus() const { DARABONBA_PTR_GET_DEFAULT(monitorStatus_, "") };
    inline DescribeDnsGtmInstanceAddressPoolResponseBody& setMonitorStatus(string monitorStatus) { DARABONBA_PTR_SET_VALUE(monitorStatus_, monitorStatus) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeDnsGtmInstanceAddressPoolResponseBody& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDnsGtmInstanceAddressPoolResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeDnsGtmInstanceAddressPoolResponseBody& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline DescribeDnsGtmInstanceAddressPoolResponseBody& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    // updateTimestamp Field Functions 
    bool hasUpdateTimestamp() const { return this->updateTimestamp_ != nullptr;};
    void deleteUpdateTimestamp() { this->updateTimestamp_ = nullptr;};
    inline int64_t getUpdateTimestamp() const { DARABONBA_PTR_GET_DEFAULT(updateTimestamp_, 0L) };
    inline DescribeDnsGtmInstanceAddressPoolResponseBody& setUpdateTimestamp(int64_t updateTimestamp) { DARABONBA_PTR_SET_VALUE(updateTimestamp_, updateTimestamp) };


  protected:
    // The number of addresses in the address pool.
    shared_ptr<int32_t> addrCount_ {};
    // The ID of the address pool.
    shared_ptr<string> addrPoolId_ {};
    // The addresses in the address pool.
    shared_ptr<DescribeDnsGtmInstanceAddressPoolResponseBody::Addrs> addrs_ {};
    // The time when the address pool was created.
    shared_ptr<string> createTime_ {};
    // The timestamp that indicates the time when the address pool was created.
    shared_ptr<int64_t> createTimestamp_ {};
    // The load balancing policy for the address pool. Valid values:
    // 
    // *   ALL_RR: returns all addresses.
    // *   RATIO: returns addresses by weight.
    shared_ptr<string> lbaStrategy_ {};
    // The ID of the health check configuration.
    shared_ptr<string> monitorConfigId_ {};
    // Indicates the status of the health check. Valid values:
    // 
    // *   OPEN: The health check is enabled.
    // *   CLOSE: The health check is disabled.
    // *   UNCONFIGURED: The health check is not configured.
    shared_ptr<string> monitorStatus_ {};
    // The name of the address pool.
    shared_ptr<string> name_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The type of the address pool. Valid values:
    // 
    // *   IPV4: IPv4 address
    // *   IPV6: IPv6 address
    // *   DOMAIN: domain name
    shared_ptr<string> type_ {};
    // The time when the address pool was last updated.
    shared_ptr<string> updateTime_ {};
    // The timestamp that indicates the time when the address pool was last updated.
    shared_ptr<int64_t> updateTimestamp_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
