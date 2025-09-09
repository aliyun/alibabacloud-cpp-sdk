// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEGTMMONITORREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEGTMMONITORREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateGtmMonitorRequestIspCityNode.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class UpdateGtmMonitorRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateGtmMonitorRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EvaluationCount, evaluationCount_);
      DARABONBA_PTR_TO_JSON(Interval, interval_);
      DARABONBA_PTR_TO_JSON(IspCityNode, ispCityNode_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(MonitorConfigId, monitorConfigId_);
      DARABONBA_PTR_TO_JSON(MonitorExtendInfo, monitorExtendInfo_);
      DARABONBA_PTR_TO_JSON(ProtocolType, protocolType_);
      DARABONBA_PTR_TO_JSON(Timeout, timeout_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateGtmMonitorRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EvaluationCount, evaluationCount_);
      DARABONBA_PTR_FROM_JSON(Interval, interval_);
      DARABONBA_PTR_FROM_JSON(IspCityNode, ispCityNode_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(MonitorConfigId, monitorConfigId_);
      DARABONBA_PTR_FROM_JSON(MonitorExtendInfo, monitorExtendInfo_);
      DARABONBA_PTR_FROM_JSON(ProtocolType, protocolType_);
      DARABONBA_PTR_FROM_JSON(Timeout, timeout_);
    };
    UpdateGtmMonitorRequest() = default ;
    UpdateGtmMonitorRequest(const UpdateGtmMonitorRequest &) = default ;
    UpdateGtmMonitorRequest(UpdateGtmMonitorRequest &&) = default ;
    UpdateGtmMonitorRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateGtmMonitorRequest() = default ;
    UpdateGtmMonitorRequest& operator=(const UpdateGtmMonitorRequest &) = default ;
    UpdateGtmMonitorRequest& operator=(UpdateGtmMonitorRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->evaluationCount_ != nullptr
        && this->interval_ != nullptr && this->ispCityNode_ != nullptr && this->lang_ != nullptr && this->monitorConfigId_ != nullptr && this->monitorExtendInfo_ != nullptr
        && this->protocolType_ != nullptr && this->timeout_ != nullptr; };
    // evaluationCount Field Functions 
    bool hasEvaluationCount() const { return this->evaluationCount_ != nullptr;};
    void deleteEvaluationCount() { this->evaluationCount_ = nullptr;};
    inline int32_t evaluationCount() const { DARABONBA_PTR_GET_DEFAULT(evaluationCount_, 0) };
    inline UpdateGtmMonitorRequest& setEvaluationCount(int32_t evaluationCount) { DARABONBA_PTR_SET_VALUE(evaluationCount_, evaluationCount) };


    // interval Field Functions 
    bool hasInterval() const { return this->interval_ != nullptr;};
    void deleteInterval() { this->interval_ = nullptr;};
    inline int32_t interval() const { DARABONBA_PTR_GET_DEFAULT(interval_, 0) };
    inline UpdateGtmMonitorRequest& setInterval(int32_t interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


    // ispCityNode Field Functions 
    bool hasIspCityNode() const { return this->ispCityNode_ != nullptr;};
    void deleteIspCityNode() { this->ispCityNode_ = nullptr;};
    inline const vector<UpdateGtmMonitorRequestIspCityNode> & ispCityNode() const { DARABONBA_PTR_GET_CONST(ispCityNode_, vector<UpdateGtmMonitorRequestIspCityNode>) };
    inline vector<UpdateGtmMonitorRequestIspCityNode> ispCityNode() { DARABONBA_PTR_GET(ispCityNode_, vector<UpdateGtmMonitorRequestIspCityNode>) };
    inline UpdateGtmMonitorRequest& setIspCityNode(const vector<UpdateGtmMonitorRequestIspCityNode> & ispCityNode) { DARABONBA_PTR_SET_VALUE(ispCityNode_, ispCityNode) };
    inline UpdateGtmMonitorRequest& setIspCityNode(vector<UpdateGtmMonitorRequestIspCityNode> && ispCityNode) { DARABONBA_PTR_SET_RVALUE(ispCityNode_, ispCityNode) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline UpdateGtmMonitorRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // monitorConfigId Field Functions 
    bool hasMonitorConfigId() const { return this->monitorConfigId_ != nullptr;};
    void deleteMonitorConfigId() { this->monitorConfigId_ = nullptr;};
    inline string monitorConfigId() const { DARABONBA_PTR_GET_DEFAULT(monitorConfigId_, "") };
    inline UpdateGtmMonitorRequest& setMonitorConfigId(string monitorConfigId) { DARABONBA_PTR_SET_VALUE(monitorConfigId_, monitorConfigId) };


    // monitorExtendInfo Field Functions 
    bool hasMonitorExtendInfo() const { return this->monitorExtendInfo_ != nullptr;};
    void deleteMonitorExtendInfo() { this->monitorExtendInfo_ = nullptr;};
    inline string monitorExtendInfo() const { DARABONBA_PTR_GET_DEFAULT(monitorExtendInfo_, "") };
    inline UpdateGtmMonitorRequest& setMonitorExtendInfo(string monitorExtendInfo) { DARABONBA_PTR_SET_VALUE(monitorExtendInfo_, monitorExtendInfo) };


    // protocolType Field Functions 
    bool hasProtocolType() const { return this->protocolType_ != nullptr;};
    void deleteProtocolType() { this->protocolType_ = nullptr;};
    inline string protocolType() const { DARABONBA_PTR_GET_DEFAULT(protocolType_, "") };
    inline UpdateGtmMonitorRequest& setProtocolType(string protocolType) { DARABONBA_PTR_SET_VALUE(protocolType_, protocolType) };


    // timeout Field Functions 
    bool hasTimeout() const { return this->timeout_ != nullptr;};
    void deleteTimeout() { this->timeout_ = nullptr;};
    inline int32_t timeout() const { DARABONBA_PTR_GET_DEFAULT(timeout_, 0) };
    inline UpdateGtmMonitorRequest& setTimeout(int32_t timeout) { DARABONBA_PTR_SET_VALUE(timeout_, timeout) };


  protected:
    // The maximum number of consecutive exceptions detected. If the number of consecutive exceptions detected reaches the maximum number, the application service is deemed abnormal.
    std::shared_ptr<int32_t> evaluationCount_ = nullptr;
    // The health check interval. Unit: seconds. Set the value to 60.
    std::shared_ptr<int32_t> interval_ = nullptr;
    // The monitored nodes.
    // 
    // This parameter is required.
    std::shared_ptr<vector<UpdateGtmMonitorRequestIspCityNode>> ispCityNode_ = nullptr;
    // The language of the values of specific response parameters.
    std::shared_ptr<string> lang_ = nullptr;
    // The ID of the health check configuration.
    // 
    // This parameter is required.
    std::shared_ptr<string> monitorConfigId_ = nullptr;
    // The extended information, that is, the parameters required for the protocol. Different protocols require different parameters:
    // 
    // HTTP or HTTPS:
    // 
    // *   port: the port to check.
    // *   failureRate: the failure rate.
    // *   code: the status code threshold. If the returned status code is greater than the specified threshold, the application service is deemed abnormal. Valid values: 400 and 500.
    // *   host: the host configuration.
    // *   path: the health check URL.
    // 
    // PING:
    // 
    // *   packetNum: the number of ping packets.
    // *   packetLossRate: the loss rate of ping packets.
    // *   failureRate: the failure rate.
    // 
    // TCP:
    // 
    // *   port: the port to check.
    // *   failureRate: the failure rate.
    // 
    // This parameter is required.
    std::shared_ptr<string> monitorExtendInfo_ = nullptr;
    // The protocol used for the health check.
    // 
    // This parameter is required.
    std::shared_ptr<string> protocolType_ = nullptr;
    // The health check timeout period. Unit: milliseconds. Valid values: 2000, 3000, 5000, and 10000.
    std::shared_ptr<int32_t> timeout_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
