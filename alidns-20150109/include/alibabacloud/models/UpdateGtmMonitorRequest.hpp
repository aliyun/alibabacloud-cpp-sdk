// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEGTMMONITORREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEGTMMONITORREQUEST_HPP_
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
      // The city code.
      shared_ptr<string> cityCode_ {};
      // - For more information about the valid values, see the response of the DescribeGtmMonitorAvailableConfig operation.
      // 
      // - If GroupType is set to Border Gateway Protocol (BGP) or Overseas, IspCityNode.N.IspCode is optional. The default value is 465.
      // 
      // - If GroupType is not set to BGP or Overseas, IspCityNode.N.IspCode is required. You must specify a value that matches the value of IspCityNode.N.CityCode.
      shared_ptr<string> ispCode_ {};
    };

    virtual bool empty() const override { return this->evaluationCount_ == nullptr
        && this->interval_ == nullptr && this->ispCityNode_ == nullptr && this->lang_ == nullptr && this->monitorConfigId_ == nullptr && this->monitorExtendInfo_ == nullptr
        && this->protocolType_ == nullptr && this->timeout_ == nullptr; };
    // evaluationCount Field Functions 
    bool hasEvaluationCount() const { return this->evaluationCount_ != nullptr;};
    void deleteEvaluationCount() { this->evaluationCount_ = nullptr;};
    inline int32_t getEvaluationCount() const { DARABONBA_PTR_GET_DEFAULT(evaluationCount_, 0) };
    inline UpdateGtmMonitorRequest& setEvaluationCount(int32_t evaluationCount) { DARABONBA_PTR_SET_VALUE(evaluationCount_, evaluationCount) };


    // interval Field Functions 
    bool hasInterval() const { return this->interval_ != nullptr;};
    void deleteInterval() { this->interval_ = nullptr;};
    inline int32_t getInterval() const { DARABONBA_PTR_GET_DEFAULT(interval_, 0) };
    inline UpdateGtmMonitorRequest& setInterval(int32_t interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


    // ispCityNode Field Functions 
    bool hasIspCityNode() const { return this->ispCityNode_ != nullptr;};
    void deleteIspCityNode() { this->ispCityNode_ = nullptr;};
    inline const vector<UpdateGtmMonitorRequest::IspCityNode> & getIspCityNode() const { DARABONBA_PTR_GET_CONST(ispCityNode_, vector<UpdateGtmMonitorRequest::IspCityNode>) };
    inline vector<UpdateGtmMonitorRequest::IspCityNode> getIspCityNode() { DARABONBA_PTR_GET(ispCityNode_, vector<UpdateGtmMonitorRequest::IspCityNode>) };
    inline UpdateGtmMonitorRequest& setIspCityNode(const vector<UpdateGtmMonitorRequest::IspCityNode> & ispCityNode) { DARABONBA_PTR_SET_VALUE(ispCityNode_, ispCityNode) };
    inline UpdateGtmMonitorRequest& setIspCityNode(vector<UpdateGtmMonitorRequest::IspCityNode> && ispCityNode) { DARABONBA_PTR_SET_RVALUE(ispCityNode_, ispCityNode) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline UpdateGtmMonitorRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // monitorConfigId Field Functions 
    bool hasMonitorConfigId() const { return this->monitorConfigId_ != nullptr;};
    void deleteMonitorConfigId() { this->monitorConfigId_ = nullptr;};
    inline string getMonitorConfigId() const { DARABONBA_PTR_GET_DEFAULT(monitorConfigId_, "") };
    inline UpdateGtmMonitorRequest& setMonitorConfigId(string monitorConfigId) { DARABONBA_PTR_SET_VALUE(monitorConfigId_, monitorConfigId) };


    // monitorExtendInfo Field Functions 
    bool hasMonitorExtendInfo() const { return this->monitorExtendInfo_ != nullptr;};
    void deleteMonitorExtendInfo() { this->monitorExtendInfo_ = nullptr;};
    inline string getMonitorExtendInfo() const { DARABONBA_PTR_GET_DEFAULT(monitorExtendInfo_, "") };
    inline UpdateGtmMonitorRequest& setMonitorExtendInfo(string monitorExtendInfo) { DARABONBA_PTR_SET_VALUE(monitorExtendInfo_, monitorExtendInfo) };


    // protocolType Field Functions 
    bool hasProtocolType() const { return this->protocolType_ != nullptr;};
    void deleteProtocolType() { this->protocolType_ = nullptr;};
    inline string getProtocolType() const { DARABONBA_PTR_GET_DEFAULT(protocolType_, "") };
    inline UpdateGtmMonitorRequest& setProtocolType(string protocolType) { DARABONBA_PTR_SET_VALUE(protocolType_, protocolType) };


    // timeout Field Functions 
    bool hasTimeout() const { return this->timeout_ != nullptr;};
    void deleteTimeout() { this->timeout_ = nullptr;};
    inline int32_t getTimeout() const { DARABONBA_PTR_GET_DEFAULT(timeout_, 0) };
    inline UpdateGtmMonitorRequest& setTimeout(int32_t timeout) { DARABONBA_PTR_SET_VALUE(timeout_, timeout) };


  protected:
    // The number of consecutive health checks.
    shared_ptr<int32_t> evaluationCount_ {};
    // The interval between health checks. Unit: seconds. The value must be 60.
    shared_ptr<int32_t> interval_ {};
    // The list of monitoring nodes.
    // 
    // This parameter is required.
    shared_ptr<vector<UpdateGtmMonitorRequest::IspCityNode>> ispCityNode_ {};
    // The language of the response.
    shared_ptr<string> lang_ {};
    // The ID of the health check configuration.
    // 
    // This parameter is required.
    shared_ptr<string> monitorConfigId_ {};
    // The extended information. The parameters vary based on the protocol.
    // 
    // HTTP and HTTPS:
    // 
    // - port: The health check port.
    // 
    // - failureRate: The failure rate.
    // 
    // - code: The return code. A response with a status code greater than the specified value is considered abnormal. Valid values: 400 and 500.
    // 
    // - host: The host settings.
    // 
    // - path: The URL path.
    // 
    // PING:
    // 
    // - packetNum: The number of ping packets.
    // 
    // - packetLossRate: The packet loss rate.
    // 
    // - failureRate: The failure rate.
    // 
    // TCP:
    // 
    // - port: The health check port.
    // 
    // - failureRate: The failure rate.
    // 
    // This parameter is required.
    shared_ptr<string> monitorExtendInfo_ {};
    // The health check protocol.
    // 
    // This parameter is required.
    shared_ptr<string> protocolType_ {};
    // The timeout period for a health check. Unit: milliseconds. Valid values: 2000, 3000, 5000, and 10000.
    shared_ptr<int32_t> timeout_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
