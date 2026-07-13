// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDDNSGTMMONITORREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDDNSGTMMONITORREQUEST_HPP_
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
  class AddDnsGtmMonitorRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddDnsGtmMonitorRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AddrPoolId, addrPoolId_);
      DARABONBA_PTR_TO_JSON(EvaluationCount, evaluationCount_);
      DARABONBA_PTR_TO_JSON(Interval, interval_);
      DARABONBA_PTR_TO_JSON(IspCityNode, ispCityNode_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(MonitorExtendInfo, monitorExtendInfo_);
      DARABONBA_PTR_TO_JSON(ProtocolType, protocolType_);
      DARABONBA_PTR_TO_JSON(Timeout, timeout_);
    };
    friend void from_json(const Darabonba::Json& j, AddDnsGtmMonitorRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AddrPoolId, addrPoolId_);
      DARABONBA_PTR_FROM_JSON(EvaluationCount, evaluationCount_);
      DARABONBA_PTR_FROM_JSON(Interval, interval_);
      DARABONBA_PTR_FROM_JSON(IspCityNode, ispCityNode_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(MonitorExtendInfo, monitorExtendInfo_);
      DARABONBA_PTR_FROM_JSON(ProtocolType, protocolType_);
      DARABONBA_PTR_FROM_JSON(Timeout, timeout_);
    };
    AddDnsGtmMonitorRequest() = default ;
    AddDnsGtmMonitorRequest(const AddDnsGtmMonitorRequest &) = default ;
    AddDnsGtmMonitorRequest(AddDnsGtmMonitorRequest &&) = default ;
    AddDnsGtmMonitorRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddDnsGtmMonitorRequest() = default ;
    AddDnsGtmMonitorRequest& operator=(const AddDnsGtmMonitorRequest &) = default ;
    AddDnsGtmMonitorRequest& operator=(AddDnsGtmMonitorRequest &&) = default ;
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
      // The city code of the monitoring node.
      shared_ptr<string> cityCode_ {};
      // The carrier code of the monitoring node.
      shared_ptr<string> ispCode_ {};
    };

    virtual bool empty() const override { return this->addrPoolId_ == nullptr
        && this->evaluationCount_ == nullptr && this->interval_ == nullptr && this->ispCityNode_ == nullptr && this->lang_ == nullptr && this->monitorExtendInfo_ == nullptr
        && this->protocolType_ == nullptr && this->timeout_ == nullptr; };
    // addrPoolId Field Functions 
    bool hasAddrPoolId() const { return this->addrPoolId_ != nullptr;};
    void deleteAddrPoolId() { this->addrPoolId_ = nullptr;};
    inline string getAddrPoolId() const { DARABONBA_PTR_GET_DEFAULT(addrPoolId_, "") };
    inline AddDnsGtmMonitorRequest& setAddrPoolId(string addrPoolId) { DARABONBA_PTR_SET_VALUE(addrPoolId_, addrPoolId) };


    // evaluationCount Field Functions 
    bool hasEvaluationCount() const { return this->evaluationCount_ != nullptr;};
    void deleteEvaluationCount() { this->evaluationCount_ = nullptr;};
    inline int32_t getEvaluationCount() const { DARABONBA_PTR_GET_DEFAULT(evaluationCount_, 0) };
    inline AddDnsGtmMonitorRequest& setEvaluationCount(int32_t evaluationCount) { DARABONBA_PTR_SET_VALUE(evaluationCount_, evaluationCount) };


    // interval Field Functions 
    bool hasInterval() const { return this->interval_ != nullptr;};
    void deleteInterval() { this->interval_ = nullptr;};
    inline int32_t getInterval() const { DARABONBA_PTR_GET_DEFAULT(interval_, 0) };
    inline AddDnsGtmMonitorRequest& setInterval(int32_t interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


    // ispCityNode Field Functions 
    bool hasIspCityNode() const { return this->ispCityNode_ != nullptr;};
    void deleteIspCityNode() { this->ispCityNode_ = nullptr;};
    inline const vector<AddDnsGtmMonitorRequest::IspCityNode> & getIspCityNode() const { DARABONBA_PTR_GET_CONST(ispCityNode_, vector<AddDnsGtmMonitorRequest::IspCityNode>) };
    inline vector<AddDnsGtmMonitorRequest::IspCityNode> getIspCityNode() { DARABONBA_PTR_GET(ispCityNode_, vector<AddDnsGtmMonitorRequest::IspCityNode>) };
    inline AddDnsGtmMonitorRequest& setIspCityNode(const vector<AddDnsGtmMonitorRequest::IspCityNode> & ispCityNode) { DARABONBA_PTR_SET_VALUE(ispCityNode_, ispCityNode) };
    inline AddDnsGtmMonitorRequest& setIspCityNode(vector<AddDnsGtmMonitorRequest::IspCityNode> && ispCityNode) { DARABONBA_PTR_SET_RVALUE(ispCityNode_, ispCityNode) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline AddDnsGtmMonitorRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // monitorExtendInfo Field Functions 
    bool hasMonitorExtendInfo() const { return this->monitorExtendInfo_ != nullptr;};
    void deleteMonitorExtendInfo() { this->monitorExtendInfo_ = nullptr;};
    inline string getMonitorExtendInfo() const { DARABONBA_PTR_GET_DEFAULT(monitorExtendInfo_, "") };
    inline AddDnsGtmMonitorRequest& setMonitorExtendInfo(string monitorExtendInfo) { DARABONBA_PTR_SET_VALUE(monitorExtendInfo_, monitorExtendInfo) };


    // protocolType Field Functions 
    bool hasProtocolType() const { return this->protocolType_ != nullptr;};
    void deleteProtocolType() { this->protocolType_ = nullptr;};
    inline string getProtocolType() const { DARABONBA_PTR_GET_DEFAULT(protocolType_, "") };
    inline AddDnsGtmMonitorRequest& setProtocolType(string protocolType) { DARABONBA_PTR_SET_VALUE(protocolType_, protocolType) };


    // timeout Field Functions 
    bool hasTimeout() const { return this->timeout_ != nullptr;};
    void deleteTimeout() { this->timeout_ = nullptr;};
    inline int32_t getTimeout() const { DARABONBA_PTR_GET_DEFAULT(timeout_, 0) };
    inline AddDnsGtmMonitorRequest& setTimeout(int32_t timeout) { DARABONBA_PTR_SET_VALUE(timeout_, timeout) };


  protected:
    // The ID of the address pool. You can call the [DescribeDnsGtmInstanceAddressPools](https://www.alibabacloud.com/help/en/dns/api-alidns-2015-01-09-describednsgtminstanceaddresspools) operation to obtain the ID.
    // 
    // This parameter is required.
    shared_ptr<string> addrPoolId_ {};
    // The number of consecutive health checks.
    // 
    // This parameter is required.
    shared_ptr<int32_t> evaluationCount_ {};
    // The health check interval. Unit: seconds.
    // 
    // This parameter is required.
    shared_ptr<int32_t> interval_ {};
    // The list of monitoring nodes.
    // 
    // This parameter is required.
    shared_ptr<vector<AddDnsGtmMonitorRequest::IspCityNode>> ispCityNode_ {};
    // The language of the response. Default value: en. Valid values: en, zh, and ja.
    shared_ptr<string> lang_ {};
    // The extended information. The parameters vary based on the protocol type.
    // 
    // - HTTP or HTTPS
    // 
    //   - port: The health check port.
    // 
    //   - host: The Host header.
    // 
    //   - path: The URL path.
    // 
    //   - code: The health check is considered abnormal if the returned HTTP status code is greater than this value.
    // 
    //   - failureRate: The failure rate.
    // 
    //   - sni: Specifies whether to enable Server Name Indication (SNI). This parameter is used only when the health check protocol is HTTPS. Valid values:
    // 
    //     - true
    // 
    //     - false
    // 
    //   - nodeType: The type of the monitoring node. This parameter is used when the address pool type is DOMAIN. Valid values:
    // 
    //     - IPV4
    // 
    //     - IPV6
    // 
    // - PING
    // 
    //   - failureRate: The failure rate.
    // 
    //   - packetNum: The number of ping packets.
    // 
    //   - packetLossRate: The packet loss rate.
    // 
    //   - nodeType: The type of the monitoring node. This parameter is used when the address pool type is DOMAIN. Valid values:
    // 
    //     - IPV4
    // 
    //     - IPV6
    // 
    // - TCP
    // 
    //   - port: The health check port.
    // 
    //   - failureRate: The failure rate.
    // 
    //   - nodeType: The type of the monitoring node. This parameter is used when the address pool type is DOMAIN. Valid values:
    // 
    //     - IPV4
    // 
    //     - IPV6
    // 
    // > This parameter must be a JSON string.
    // 
    // This parameter is required.
    shared_ptr<string> monitorExtendInfo_ {};
    // The health check protocol. Valid values:
    // 
    // - HTTP
    // 
    // - HTTPS
    // 
    // - PING
    // 
    // - TCP
    // 
    // This parameter is required.
    shared_ptr<string> protocolType_ {};
    // The timeout period. Unit: milliseconds.
    // 
    // This parameter is required.
    shared_ptr<int32_t> timeout_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
