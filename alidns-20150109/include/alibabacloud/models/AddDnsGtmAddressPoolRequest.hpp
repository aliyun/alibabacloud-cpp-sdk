// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDDNSGTMADDRESSPOOLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDDNSGTMADDRESSPOOLREQUEST_HPP_
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
  class AddDnsGtmAddressPoolRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddDnsGtmAddressPoolRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Addr, addr_);
      DARABONBA_PTR_TO_JSON(EvaluationCount, evaluationCount_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Interval, interval_);
      DARABONBA_PTR_TO_JSON(IspCityNode, ispCityNode_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(LbaStrategy, lbaStrategy_);
      DARABONBA_PTR_TO_JSON(MonitorExtendInfo, monitorExtendInfo_);
      DARABONBA_PTR_TO_JSON(MonitorStatus, monitorStatus_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(ProtocolType, protocolType_);
      DARABONBA_PTR_TO_JSON(Timeout, timeout_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, AddDnsGtmAddressPoolRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Addr, addr_);
      DARABONBA_PTR_FROM_JSON(EvaluationCount, evaluationCount_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Interval, interval_);
      DARABONBA_PTR_FROM_JSON(IspCityNode, ispCityNode_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(LbaStrategy, lbaStrategy_);
      DARABONBA_PTR_FROM_JSON(MonitorExtendInfo, monitorExtendInfo_);
      DARABONBA_PTR_FROM_JSON(MonitorStatus, monitorStatus_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(ProtocolType, protocolType_);
      DARABONBA_PTR_FROM_JSON(Timeout, timeout_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    AddDnsGtmAddressPoolRequest() = default ;
    AddDnsGtmAddressPoolRequest(const AddDnsGtmAddressPoolRequest &) = default ;
    AddDnsGtmAddressPoolRequest(AddDnsGtmAddressPoolRequest &&) = default ;
    AddDnsGtmAddressPoolRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddDnsGtmAddressPoolRequest() = default ;
    AddDnsGtmAddressPoolRequest& operator=(const AddDnsGtmAddressPoolRequest &) = default ;
    AddDnsGtmAddressPoolRequest& operator=(AddDnsGtmAddressPoolRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class IspCityNode : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const IspCityNode& obj) { 
        DARABONBA_PTR_TO_JSON(CityCode, cityCode_);
        DARABONBA_PTR_TO_JSON(IspCode, ispCode_);
      };
      friend void from_json(const Darabonba::Json& j, IspCityNode& obj) { 
        DARABONBA_PTR_FROM_JSON(CityCode, cityCode_);
        DARABONBA_PTR_FROM_JSON(IspCode, ispCode_);
      };
      IspCityNode() = default ;
      IspCityNode(const IspCityNode &) = default ;
      IspCityNode(IspCityNode &&) = default ;
      IspCityNode(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~IspCityNode() = default ;
      IspCityNode& operator=(const IspCityNode &) = default ;
      IspCityNode& operator=(IspCityNode &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->cityCode_ == nullptr
        && this->ispCode_ == nullptr; };
      // cityCode Field Functions 
      bool hasCityCode() const { return this->cityCode_ != nullptr;};
      void deleteCityCode() { this->cityCode_ = nullptr;};
      inline string getCityCode() const { DARABONBA_PTR_GET_DEFAULT(cityCode_, "") };
      inline IspCityNode& setCityCode(string cityCode) { DARABONBA_PTR_SET_VALUE(cityCode_, cityCode) };


      // ispCode Field Functions 
      bool hasIspCode() const { return this->ispCode_ != nullptr;};
      void deleteIspCode() { this->ispCode_ = nullptr;};
      inline string getIspCode() const { DARABONBA_PTR_GET_DEFAULT(ispCode_, "") };
      inline IspCityNode& setIspCode(string ispCode) { DARABONBA_PTR_SET_VALUE(ispCode_, ispCode) };


    protected:
      // The city code. If MonitorStatus is set to OPEN, CityCode is required.
      // 
      // For information about the valid values, see the response of the DescribeDnsGtmMonitorAvailableConfig operation.
      shared_ptr<string> cityCode_ {};
      // If MonitorStatus is set to OPEN, IspCode is required.
      // For information about the valid values, see the response of the DescribeDnsGtmMonitorAvailableConfig operation.
      shared_ptr<string> ispCode_ {};
    };

    class Addr : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Addr& obj) { 
        DARABONBA_PTR_TO_JSON(Addr, addr_);
        DARABONBA_PTR_TO_JSON(AttributeInfo, attributeInfo_);
        DARABONBA_PTR_TO_JSON(LbaWeight, lbaWeight_);
        DARABONBA_PTR_TO_JSON(Mode, mode_);
        DARABONBA_PTR_TO_JSON(Remark, remark_);
      };
      friend void from_json(const Darabonba::Json& j, Addr& obj) { 
        DARABONBA_PTR_FROM_JSON(Addr, addr_);
        DARABONBA_PTR_FROM_JSON(AttributeInfo, attributeInfo_);
        DARABONBA_PTR_FROM_JSON(LbaWeight, lbaWeight_);
        DARABONBA_PTR_FROM_JSON(Mode, mode_);
        DARABONBA_PTR_FROM_JSON(Remark, remark_);
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
        && this->attributeInfo_ == nullptr && this->lbaWeight_ == nullptr && this->mode_ == nullptr && this->remark_ == nullptr; };
      // addr Field Functions 
      bool hasAddr() const { return this->addr_ != nullptr;};
      void deleteAddr() { this->addr_ = nullptr;};
      inline string getAddr() const { DARABONBA_PTR_GET_DEFAULT(addr_, "") };
      inline Addr& setAddr(string addr) { DARABONBA_PTR_SET_VALUE(addr_, addr) };


      // attributeInfo Field Functions 
      bool hasAttributeInfo() const { return this->attributeInfo_ != nullptr;};
      void deleteAttributeInfo() { this->attributeInfo_ = nullptr;};
      inline string getAttributeInfo() const { DARABONBA_PTR_GET_DEFAULT(attributeInfo_, "") };
      inline Addr& setAttributeInfo(string attributeInfo) { DARABONBA_PTR_SET_VALUE(attributeInfo_, attributeInfo) };


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


    protected:
      // The address.
      // 
      // This parameter is required.
      shared_ptr<string> addr_ {};
      // The source region of the address. This parameter is a JSON string.
      // 
      // - lineCode: The line code of the source region.
      // 
      // - lineCodeRectifyType: The rectification type for the line code. Default value: AUTO.
      // 
      //   - NO_NEED: No rectification is performed.
      // 
      //   - RECTIFIED: The line code is rectified.
      // 
      //   - AUTO: The line code is automatically rectified.
      // 
      // This parameter is required.
      shared_ptr<string> attributeInfo_ {};
      // The weight.
      shared_ptr<int32_t> lbaWeight_ {};
      // The mode. Valid values:
      // 
      // - SMART: smart return
      // 
      // - ONLINE: always online
      // 
      // - OFFLINE: always offline
      // 
      // This parameter is required.
      shared_ptr<string> mode_ {};
      // The remarks.
      shared_ptr<string> remark_ {};
    };

    virtual bool empty() const override { return this->addr_ == nullptr
        && this->evaluationCount_ == nullptr && this->instanceId_ == nullptr && this->interval_ == nullptr && this->ispCityNode_ == nullptr && this->lang_ == nullptr
        && this->lbaStrategy_ == nullptr && this->monitorExtendInfo_ == nullptr && this->monitorStatus_ == nullptr && this->name_ == nullptr && this->protocolType_ == nullptr
        && this->timeout_ == nullptr && this->type_ == nullptr; };
    // addr Field Functions 
    bool hasAddr() const { return this->addr_ != nullptr;};
    void deleteAddr() { this->addr_ = nullptr;};
    inline const vector<AddDnsGtmAddressPoolRequest::Addr> & getAddr() const { DARABONBA_PTR_GET_CONST(addr_, vector<AddDnsGtmAddressPoolRequest::Addr>) };
    inline vector<AddDnsGtmAddressPoolRequest::Addr> getAddr() { DARABONBA_PTR_GET(addr_, vector<AddDnsGtmAddressPoolRequest::Addr>) };
    inline AddDnsGtmAddressPoolRequest& setAddr(const vector<AddDnsGtmAddressPoolRequest::Addr> & addr) { DARABONBA_PTR_SET_VALUE(addr_, addr) };
    inline AddDnsGtmAddressPoolRequest& setAddr(vector<AddDnsGtmAddressPoolRequest::Addr> && addr) { DARABONBA_PTR_SET_RVALUE(addr_, addr) };


    // evaluationCount Field Functions 
    bool hasEvaluationCount() const { return this->evaluationCount_ != nullptr;};
    void deleteEvaluationCount() { this->evaluationCount_ = nullptr;};
    inline int32_t getEvaluationCount() const { DARABONBA_PTR_GET_DEFAULT(evaluationCount_, 0) };
    inline AddDnsGtmAddressPoolRequest& setEvaluationCount(int32_t evaluationCount) { DARABONBA_PTR_SET_VALUE(evaluationCount_, evaluationCount) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline AddDnsGtmAddressPoolRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // interval Field Functions 
    bool hasInterval() const { return this->interval_ != nullptr;};
    void deleteInterval() { this->interval_ = nullptr;};
    inline int32_t getInterval() const { DARABONBA_PTR_GET_DEFAULT(interval_, 0) };
    inline AddDnsGtmAddressPoolRequest& setInterval(int32_t interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


    // ispCityNode Field Functions 
    bool hasIspCityNode() const { return this->ispCityNode_ != nullptr;};
    void deleteIspCityNode() { this->ispCityNode_ = nullptr;};
    inline const vector<AddDnsGtmAddressPoolRequest::IspCityNode> & getIspCityNode() const { DARABONBA_PTR_GET_CONST(ispCityNode_, vector<AddDnsGtmAddressPoolRequest::IspCityNode>) };
    inline vector<AddDnsGtmAddressPoolRequest::IspCityNode> getIspCityNode() { DARABONBA_PTR_GET(ispCityNode_, vector<AddDnsGtmAddressPoolRequest::IspCityNode>) };
    inline AddDnsGtmAddressPoolRequest& setIspCityNode(const vector<AddDnsGtmAddressPoolRequest::IspCityNode> & ispCityNode) { DARABONBA_PTR_SET_VALUE(ispCityNode_, ispCityNode) };
    inline AddDnsGtmAddressPoolRequest& setIspCityNode(vector<AddDnsGtmAddressPoolRequest::IspCityNode> && ispCityNode) { DARABONBA_PTR_SET_RVALUE(ispCityNode_, ispCityNode) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline AddDnsGtmAddressPoolRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // lbaStrategy Field Functions 
    bool hasLbaStrategy() const { return this->lbaStrategy_ != nullptr;};
    void deleteLbaStrategy() { this->lbaStrategy_ = nullptr;};
    inline string getLbaStrategy() const { DARABONBA_PTR_GET_DEFAULT(lbaStrategy_, "") };
    inline AddDnsGtmAddressPoolRequest& setLbaStrategy(string lbaStrategy) { DARABONBA_PTR_SET_VALUE(lbaStrategy_, lbaStrategy) };


    // monitorExtendInfo Field Functions 
    bool hasMonitorExtendInfo() const { return this->monitorExtendInfo_ != nullptr;};
    void deleteMonitorExtendInfo() { this->monitorExtendInfo_ = nullptr;};
    inline string getMonitorExtendInfo() const { DARABONBA_PTR_GET_DEFAULT(monitorExtendInfo_, "") };
    inline AddDnsGtmAddressPoolRequest& setMonitorExtendInfo(string monitorExtendInfo) { DARABONBA_PTR_SET_VALUE(monitorExtendInfo_, monitorExtendInfo) };


    // monitorStatus Field Functions 
    bool hasMonitorStatus() const { return this->monitorStatus_ != nullptr;};
    void deleteMonitorStatus() { this->monitorStatus_ = nullptr;};
    inline string getMonitorStatus() const { DARABONBA_PTR_GET_DEFAULT(monitorStatus_, "") };
    inline AddDnsGtmAddressPoolRequest& setMonitorStatus(string monitorStatus) { DARABONBA_PTR_SET_VALUE(monitorStatus_, monitorStatus) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline AddDnsGtmAddressPoolRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // protocolType Field Functions 
    bool hasProtocolType() const { return this->protocolType_ != nullptr;};
    void deleteProtocolType() { this->protocolType_ = nullptr;};
    inline string getProtocolType() const { DARABONBA_PTR_GET_DEFAULT(protocolType_, "") };
    inline AddDnsGtmAddressPoolRequest& setProtocolType(string protocolType) { DARABONBA_PTR_SET_VALUE(protocolType_, protocolType) };


    // timeout Field Functions 
    bool hasTimeout() const { return this->timeout_ != nullptr;};
    void deleteTimeout() { this->timeout_ = nullptr;};
    inline int32_t getTimeout() const { DARABONBA_PTR_GET_DEFAULT(timeout_, 0) };
    inline AddDnsGtmAddressPoolRequest& setTimeout(int32_t timeout) { DARABONBA_PTR_SET_VALUE(timeout_, timeout) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline AddDnsGtmAddressPoolRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The list of addresses in the address pool.
    // 
    // This parameter is required.
    shared_ptr<vector<AddDnsGtmAddressPoolRequest::Addr>> addr_ {};
    // The number of consecutive failed health checks.
    shared_ptr<int32_t> evaluationCount_ {};
    // The instance ID.
    // <props="intl">Call [DescribeDnsGtmInstances](https://www.alibabacloud.com/help/en/dns/api-alidns-2015-01-09-describednsgtminstances) to obtain the instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The health check interval. Unit: seconds.
    shared_ptr<int32_t> interval_ {};
    // The list of health check nodes. If MonitorStatus is set to OPEN, you must specify at least one valid health check node.
    shared_ptr<vector<AddDnsGtmAddressPoolRequest::IspCityNode>> ispCityNode_ {};
    // The language of some returned parameters. Default value: en. Valid values: en, zh, and ja.
    shared_ptr<string> lang_ {};
    // The load balancing policy. Valid values:
    // 
    // - ALL_RR: returns all addresses.
    // 
    // - RATIO: returns addresses by weight.
    // 
    // This parameter is required.
    shared_ptr<string> lbaStrategy_ {};
    // The extended information. This parameter is a JSON string. The required parameters vary based on the health check protocol:
    // 
    // - HTTP and HTTPS:
    // 
    //   - port: The health check port.
    // 
    //   - host: The host settings.
    // 
    //   - path: The URL path.
    // 
    //   - code: The return code. A response with a status code greater than this value is considered abnormal. Valid values: 400 and 500.
    // 
    //   - failureRate: The failure rate.
    // 
    //   - sni: Specifies whether to enable Server Name Indication (SNI). This parameter is available only for the HTTPS protocol.
    // 
    //     - true: Enable SNI.
    // 
    //     - Other values: Disable SNI.
    // 
    //   - nodeType: The type of the health check node when the address pool type is DOMAIN. Valid values:
    // 
    //     - IPV4
    // 
    //     - IPV6
    // 
    // - PING:
    // 
    //   - failureRate: The failure rate.
    // 
    //   - packetNum: The number of ping packets.
    // 
    //   - packetLossRate: The packet loss rate.
    // 
    //   - nodeType: The type of the health check node when the address pool type is DOMAIN. Valid values:
    // 
    //     - IPV4
    // 
    //     - IPV6
    // 
    // - TCP:
    // 
    //   - port: The health check port.
    // 
    //   - failureRate: The failure rate.
    // 
    //   - nodeType: The type of the health check node when the address pool type is DOMAIN. Valid values:
    // 
    //     - IPV4
    // 
    //     - IPV6
    shared_ptr<string> monitorExtendInfo_ {};
    // The status of the health check feature. Default value: CLOSE. If you set this parameter to OPEN, the health check configuration is verified. Otherwise, the configuration is ignored.
    // 
    // - OPEN: enabled
    // 
    // - CLOSE: disabled
    shared_ptr<string> monitorStatus_ {};
    // The name of the address pool.
    // 
    // This parameter is required.
    shared_ptr<string> name_ {};
    // The health check protocol. Valid values:
    // 
    // - HTTP
    // 
    // - HTTPS
    // 
    // - PING
    // 
    // - TCP
    shared_ptr<string> protocolType_ {};
    // The timeout period. Unit: milliseconds.
    shared_ptr<int32_t> timeout_ {};
    // The type of the address pool. Valid values:
    // 
    // - IPV4: IPv4 address
    // 
    // - IPV6: IPv6 address
    // 
    // - DOMAIN: domain name
    // 
    // This parameter is required.
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
