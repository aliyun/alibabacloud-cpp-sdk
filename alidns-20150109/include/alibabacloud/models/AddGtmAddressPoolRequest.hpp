// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDGTMADDRESSPOOLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDGTMADDRESSPOOLREQUEST_HPP_
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
  class AddGtmAddressPoolRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddGtmAddressPoolRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Addr, addr_);
      DARABONBA_PTR_TO_JSON(EvaluationCount, evaluationCount_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Interval, interval_);
      DARABONBA_PTR_TO_JSON(IspCityNode, ispCityNode_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(MinAvailableAddrNum, minAvailableAddrNum_);
      DARABONBA_PTR_TO_JSON(MonitorExtendInfo, monitorExtendInfo_);
      DARABONBA_PTR_TO_JSON(MonitorStatus, monitorStatus_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(ProtocolType, protocolType_);
      DARABONBA_PTR_TO_JSON(Timeout, timeout_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, AddGtmAddressPoolRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Addr, addr_);
      DARABONBA_PTR_FROM_JSON(EvaluationCount, evaluationCount_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Interval, interval_);
      DARABONBA_PTR_FROM_JSON(IspCityNode, ispCityNode_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(MinAvailableAddrNum, minAvailableAddrNum_);
      DARABONBA_PTR_FROM_JSON(MonitorExtendInfo, monitorExtendInfo_);
      DARABONBA_PTR_FROM_JSON(MonitorStatus, monitorStatus_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(ProtocolType, protocolType_);
      DARABONBA_PTR_FROM_JSON(Timeout, timeout_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    AddGtmAddressPoolRequest() = default ;
    AddGtmAddressPoolRequest(const AddGtmAddressPoolRequest &) = default ;
    AddGtmAddressPoolRequest(AddGtmAddressPoolRequest &&) = default ;
    AddGtmAddressPoolRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddGtmAddressPoolRequest() = default ;
    AddGtmAddressPoolRequest& operator=(const AddGtmAddressPoolRequest &) = default ;
    AddGtmAddressPoolRequest& operator=(AddGtmAddressPoolRequest &&) = default ;
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
      // The code of the city where the monitored node is deployed. For more information about specific values, see the response parameters of DescribeGtmMonitorAvailableConfig.
      shared_ptr<string> cityCode_ {};
      // *   The code of the Internet service provider (ISP) to which the monitored node belongs. For more information about specific values, see the response parameters of DescribeGtmMonitorAvailableConfig.
      // *   If the value of the GroupType parameter is BGP or OVERSEAS, IspCode is optional. The default value is 465.
      // *   If the value of the GroupType parameter is not BGP or OVERSEAS, IspCode is required and is used together with CityCode.
      shared_ptr<string> ispCode_ {};
    };

    class Addr : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Addr& obj) { 
        DARABONBA_PTR_TO_JSON(LbaWeight, lbaWeight_);
        DARABONBA_PTR_TO_JSON(Mode, mode_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Addr& obj) { 
        DARABONBA_PTR_FROM_JSON(LbaWeight, lbaWeight_);
        DARABONBA_PTR_FROM_JSON(Mode, mode_);
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
      virtual bool empty() const override { return this->lbaWeight_ == nullptr
        && this->mode_ == nullptr && this->value_ == nullptr; };
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


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Addr& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // The weight of the address pool.
      shared_ptr<int32_t> lbaWeight_ {};
      // The mode of the address pool. Valid values:
      // 
      // *   **SMART**: smart return
      // *   **ONLINE**: always online
      // *   **OFFLINE**: always offline
      shared_ptr<string> mode_ {};
      // The address in the address pool.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->addr_ == nullptr
        && this->evaluationCount_ == nullptr && this->instanceId_ == nullptr && this->interval_ == nullptr && this->ispCityNode_ == nullptr && this->lang_ == nullptr
        && this->minAvailableAddrNum_ == nullptr && this->monitorExtendInfo_ == nullptr && this->monitorStatus_ == nullptr && this->name_ == nullptr && this->protocolType_ == nullptr
        && this->timeout_ == nullptr && this->type_ == nullptr; };
    // addr Field Functions 
    bool hasAddr() const { return this->addr_ != nullptr;};
    void deleteAddr() { this->addr_ = nullptr;};
    inline const vector<AddGtmAddressPoolRequest::Addr> & getAddr() const { DARABONBA_PTR_GET_CONST(addr_, vector<AddGtmAddressPoolRequest::Addr>) };
    inline vector<AddGtmAddressPoolRequest::Addr> getAddr() { DARABONBA_PTR_GET(addr_, vector<AddGtmAddressPoolRequest::Addr>) };
    inline AddGtmAddressPoolRequest& setAddr(const vector<AddGtmAddressPoolRequest::Addr> & addr) { DARABONBA_PTR_SET_VALUE(addr_, addr) };
    inline AddGtmAddressPoolRequest& setAddr(vector<AddGtmAddressPoolRequest::Addr> && addr) { DARABONBA_PTR_SET_RVALUE(addr_, addr) };


    // evaluationCount Field Functions 
    bool hasEvaluationCount() const { return this->evaluationCount_ != nullptr;};
    void deleteEvaluationCount() { this->evaluationCount_ = nullptr;};
    inline int32_t getEvaluationCount() const { DARABONBA_PTR_GET_DEFAULT(evaluationCount_, 0) };
    inline AddGtmAddressPoolRequest& setEvaluationCount(int32_t evaluationCount) { DARABONBA_PTR_SET_VALUE(evaluationCount_, evaluationCount) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline AddGtmAddressPoolRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // interval Field Functions 
    bool hasInterval() const { return this->interval_ != nullptr;};
    void deleteInterval() { this->interval_ = nullptr;};
    inline int32_t getInterval() const { DARABONBA_PTR_GET_DEFAULT(interval_, 0) };
    inline AddGtmAddressPoolRequest& setInterval(int32_t interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


    // ispCityNode Field Functions 
    bool hasIspCityNode() const { return this->ispCityNode_ != nullptr;};
    void deleteIspCityNode() { this->ispCityNode_ = nullptr;};
    inline const vector<AddGtmAddressPoolRequest::IspCityNode> & getIspCityNode() const { DARABONBA_PTR_GET_CONST(ispCityNode_, vector<AddGtmAddressPoolRequest::IspCityNode>) };
    inline vector<AddGtmAddressPoolRequest::IspCityNode> getIspCityNode() { DARABONBA_PTR_GET(ispCityNode_, vector<AddGtmAddressPoolRequest::IspCityNode>) };
    inline AddGtmAddressPoolRequest& setIspCityNode(const vector<AddGtmAddressPoolRequest::IspCityNode> & ispCityNode) { DARABONBA_PTR_SET_VALUE(ispCityNode_, ispCityNode) };
    inline AddGtmAddressPoolRequest& setIspCityNode(vector<AddGtmAddressPoolRequest::IspCityNode> && ispCityNode) { DARABONBA_PTR_SET_RVALUE(ispCityNode_, ispCityNode) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline AddGtmAddressPoolRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // minAvailableAddrNum Field Functions 
    bool hasMinAvailableAddrNum() const { return this->minAvailableAddrNum_ != nullptr;};
    void deleteMinAvailableAddrNum() { this->minAvailableAddrNum_ = nullptr;};
    inline int32_t getMinAvailableAddrNum() const { DARABONBA_PTR_GET_DEFAULT(minAvailableAddrNum_, 0) };
    inline AddGtmAddressPoolRequest& setMinAvailableAddrNum(int32_t minAvailableAddrNum) { DARABONBA_PTR_SET_VALUE(minAvailableAddrNum_, minAvailableAddrNum) };


    // monitorExtendInfo Field Functions 
    bool hasMonitorExtendInfo() const { return this->monitorExtendInfo_ != nullptr;};
    void deleteMonitorExtendInfo() { this->monitorExtendInfo_ = nullptr;};
    inline string getMonitorExtendInfo() const { DARABONBA_PTR_GET_DEFAULT(monitorExtendInfo_, "") };
    inline AddGtmAddressPoolRequest& setMonitorExtendInfo(string monitorExtendInfo) { DARABONBA_PTR_SET_VALUE(monitorExtendInfo_, monitorExtendInfo) };


    // monitorStatus Field Functions 
    bool hasMonitorStatus() const { return this->monitorStatus_ != nullptr;};
    void deleteMonitorStatus() { this->monitorStatus_ = nullptr;};
    inline string getMonitorStatus() const { DARABONBA_PTR_GET_DEFAULT(monitorStatus_, "") };
    inline AddGtmAddressPoolRequest& setMonitorStatus(string monitorStatus) { DARABONBA_PTR_SET_VALUE(monitorStatus_, monitorStatus) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline AddGtmAddressPoolRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // protocolType Field Functions 
    bool hasProtocolType() const { return this->protocolType_ != nullptr;};
    void deleteProtocolType() { this->protocolType_ = nullptr;};
    inline string getProtocolType() const { DARABONBA_PTR_GET_DEFAULT(protocolType_, "") };
    inline AddGtmAddressPoolRequest& setProtocolType(string protocolType) { DARABONBA_PTR_SET_VALUE(protocolType_, protocolType) };


    // timeout Field Functions 
    bool hasTimeout() const { return this->timeout_ != nullptr;};
    void deleteTimeout() { this->timeout_ = nullptr;};
    inline int32_t getTimeout() const { DARABONBA_PTR_GET_DEFAULT(timeout_, 0) };
    inline AddGtmAddressPoolRequest& setTimeout(int32_t timeout) { DARABONBA_PTR_SET_VALUE(timeout_, timeout) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline AddGtmAddressPoolRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The address pools.
    // 
    // This parameter is required.
    shared_ptr<vector<AddGtmAddressPoolRequest::Addr>> addr_ {};
    // The number of consecutive failures.
    shared_ptr<int32_t> evaluationCount_ {};
    // The ID of the GTM instance for which you want to create an address pool.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The health check interval. Unit: seconds. Set the value to 60.
    shared_ptr<int32_t> interval_ {};
    // The monitored nodes.
    shared_ptr<vector<AddGtmAddressPoolRequest::IspCityNode>> ispCityNode_ {};
    // The language of the values of specific response parameters.
    shared_ptr<string> lang_ {};
    // The minimum number of available addresses in the address pool.
    // 
    // This parameter is required.
    shared_ptr<int32_t> minAvailableAddrNum_ {};
    // The extended information. The required parameters vary based on the value of ProtocolType.
    // 
    // When ProtocolType is set to HTTP or HTTPS:
    // 
    // *   port: the port that you want to check
    // *   failureRate: the failure rate
    // *   code: the return code. The health check result is deemed abnormal if the returned value is greater than the specified value. Valid values: 400 and 500.
    // *   host: the host settings
    // *   path: the URL path
    // 
    // When ProtocolType is set to PING:
    // 
    // *   packetNum: the number of ping packets
    // *   packetLossRate: the packet loss rate
    // *   failureRate: the failure rate
    // 
    // When ProtocolType is set to TCP:
    // 
    // *   port: the port that you want to check
    // *   failureRate: the failure rate
    shared_ptr<string> monitorExtendInfo_ {};
    // Specifies whether to enable the health check. Valid values:
    // 
    // *   **OPEN**: enables the health check.
    // *   **CLOSE**: disables the health check. This is the default value.
    shared_ptr<string> monitorStatus_ {};
    // The name of the address pool.
    // 
    // This parameter is required.
    shared_ptr<string> name_ {};
    // The health check protocol. Valid values:
    // 
    // *   HTTP
    // *   HTTPS
    // *   Ping
    // *   TCP
    shared_ptr<string> protocolType_ {};
    // The timeout period. Unit: milliseconds. Valid values: 2000, 3000, 5000, and 10000.
    shared_ptr<int32_t> timeout_ {};
    // The type of the address pool. Valid values:
    // 
    // *   **IP**: IPv4 address
    // *   **DOMAIN**: domain name
    // 
    // This parameter is required.
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
