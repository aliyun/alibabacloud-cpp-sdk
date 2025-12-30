// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLOUDGTMMONITORTEMPLATERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLOUDGTMMONITORTEMPLATERESPONSEBODY_HPP_
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
  class DescribeCloudGtmMonitorTemplateResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCloudGtmMonitorTemplateResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(CreateTimestamp, createTimestamp_);
      DARABONBA_PTR_TO_JSON(EvaluationCount, evaluationCount_);
      DARABONBA_PTR_TO_JSON(ExtendInfo, extendInfo_);
      DARABONBA_PTR_TO_JSON(FailureRate, failureRate_);
      DARABONBA_PTR_TO_JSON(Interval, interval_);
      DARABONBA_PTR_TO_JSON(IpVersion, ipVersion_);
      DARABONBA_PTR_TO_JSON(IspCityNodes, ispCityNodes_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Protocol, protocol_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
      DARABONBA_PTR_TO_JSON(Timeout, timeout_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_TO_JSON(UpdateTimestamp, updateTimestamp_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCloudGtmMonitorTemplateResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(CreateTimestamp, createTimestamp_);
      DARABONBA_PTR_FROM_JSON(EvaluationCount, evaluationCount_);
      DARABONBA_PTR_FROM_JSON(ExtendInfo, extendInfo_);
      DARABONBA_PTR_FROM_JSON(FailureRate, failureRate_);
      DARABONBA_PTR_FROM_JSON(Interval, interval_);
      DARABONBA_PTR_FROM_JSON(IpVersion, ipVersion_);
      DARABONBA_PTR_FROM_JSON(IspCityNodes, ispCityNodes_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
      DARABONBA_PTR_FROM_JSON(Timeout, timeout_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_FROM_JSON(UpdateTimestamp, updateTimestamp_);
    };
    DescribeCloudGtmMonitorTemplateResponseBody() = default ;
    DescribeCloudGtmMonitorTemplateResponseBody(const DescribeCloudGtmMonitorTemplateResponseBody &) = default ;
    DescribeCloudGtmMonitorTemplateResponseBody(DescribeCloudGtmMonitorTemplateResponseBody &&) = default ;
    DescribeCloudGtmMonitorTemplateResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCloudGtmMonitorTemplateResponseBody() = default ;
    DescribeCloudGtmMonitorTemplateResponseBody& operator=(const DescribeCloudGtmMonitorTemplateResponseBody &) = default ;
    DescribeCloudGtmMonitorTemplateResponseBody& operator=(DescribeCloudGtmMonitorTemplateResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class IspCityNodes : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const IspCityNodes& obj) { 
        DARABONBA_PTR_TO_JSON(IspCityNode, ispCityNode_);
      };
      friend void from_json(const Darabonba::Json& j, IspCityNodes& obj) { 
        DARABONBA_PTR_FROM_JSON(IspCityNode, ispCityNode_);
      };
      IspCityNodes() = default ;
      IspCityNodes(const IspCityNodes &) = default ;
      IspCityNodes(IspCityNodes &&) = default ;
      IspCityNodes(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~IspCityNodes() = default ;
      IspCityNodes& operator=(const IspCityNodes &) = default ;
      IspCityNodes& operator=(IspCityNodes &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class IspCityNode : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const IspCityNode& obj) { 
          DARABONBA_PTR_TO_JSON(CityCode, cityCode_);
          DARABONBA_PTR_TO_JSON(CityName, cityName_);
          DARABONBA_PTR_TO_JSON(CountryCode, countryCode_);
          DARABONBA_PTR_TO_JSON(CountryName, countryName_);
          DARABONBA_PTR_TO_JSON(GroupName, groupName_);
          DARABONBA_PTR_TO_JSON(GroupType, groupType_);
          DARABONBA_PTR_TO_JSON(IspCode, ispCode_);
          DARABONBA_PTR_TO_JSON(IspName, ispName_);
        };
        friend void from_json(const Darabonba::Json& j, IspCityNode& obj) { 
          DARABONBA_PTR_FROM_JSON(CityCode, cityCode_);
          DARABONBA_PTR_FROM_JSON(CityName, cityName_);
          DARABONBA_PTR_FROM_JSON(CountryCode, countryCode_);
          DARABONBA_PTR_FROM_JSON(CountryName, countryName_);
          DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
          DARABONBA_PTR_FROM_JSON(GroupType, groupType_);
          DARABONBA_PTR_FROM_JSON(IspCode, ispCode_);
          DARABONBA_PTR_FROM_JSON(IspName, ispName_);
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
        && this->cityName_ == nullptr && this->countryCode_ == nullptr && this->countryName_ == nullptr && this->groupName_ == nullptr && this->groupType_ == nullptr
        && this->ispCode_ == nullptr && this->ispName_ == nullptr; };
        // cityCode Field Functions 
        bool hasCityCode() const { return this->cityCode_ != nullptr;};
        void deleteCityCode() { this->cityCode_ = nullptr;};
        inline string getCityCode() const { DARABONBA_PTR_GET_DEFAULT(cityCode_, "") };
        inline IspCityNode& setCityCode(string cityCode) { DARABONBA_PTR_SET_VALUE(cityCode_, cityCode) };


        // cityName Field Functions 
        bool hasCityName() const { return this->cityName_ != nullptr;};
        void deleteCityName() { this->cityName_ = nullptr;};
        inline string getCityName() const { DARABONBA_PTR_GET_DEFAULT(cityName_, "") };
        inline IspCityNode& setCityName(string cityName) { DARABONBA_PTR_SET_VALUE(cityName_, cityName) };


        // countryCode Field Functions 
        bool hasCountryCode() const { return this->countryCode_ != nullptr;};
        void deleteCountryCode() { this->countryCode_ = nullptr;};
        inline string getCountryCode() const { DARABONBA_PTR_GET_DEFAULT(countryCode_, "") };
        inline IspCityNode& setCountryCode(string countryCode) { DARABONBA_PTR_SET_VALUE(countryCode_, countryCode) };


        // countryName Field Functions 
        bool hasCountryName() const { return this->countryName_ != nullptr;};
        void deleteCountryName() { this->countryName_ = nullptr;};
        inline string getCountryName() const { DARABONBA_PTR_GET_DEFAULT(countryName_, "") };
        inline IspCityNode& setCountryName(string countryName) { DARABONBA_PTR_SET_VALUE(countryName_, countryName) };


        // groupName Field Functions 
        bool hasGroupName() const { return this->groupName_ != nullptr;};
        void deleteGroupName() { this->groupName_ = nullptr;};
        inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
        inline IspCityNode& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


        // groupType Field Functions 
        bool hasGroupType() const { return this->groupType_ != nullptr;};
        void deleteGroupType() { this->groupType_ = nullptr;};
        inline string getGroupType() const { DARABONBA_PTR_GET_DEFAULT(groupType_, "") };
        inline IspCityNode& setGroupType(string groupType) { DARABONBA_PTR_SET_VALUE(groupType_, groupType) };


        // ispCode Field Functions 
        bool hasIspCode() const { return this->ispCode_ != nullptr;};
        void deleteIspCode() { this->ispCode_ = nullptr;};
        inline string getIspCode() const { DARABONBA_PTR_GET_DEFAULT(ispCode_, "") };
        inline IspCityNode& setIspCode(string ispCode) { DARABONBA_PTR_SET_VALUE(ispCode_, ispCode) };


        // ispName Field Functions 
        bool hasIspName() const { return this->ispName_ != nullptr;};
        void deleteIspName() { this->ispName_ = nullptr;};
        inline string getIspName() const { DARABONBA_PTR_GET_DEFAULT(ispName_, "") };
        inline IspCityNode& setIspName(string ispName) { DARABONBA_PTR_SET_VALUE(ispName_, ispName) };


      protected:
        // City code
        shared_ptr<string> cityCode_ {};
        // City name
        shared_ptr<string> cityName_ {};
        // Country Code
        shared_ptr<string> countryCode_ {};
        // Country Name
        shared_ptr<string> countryName_ {};
        // Probe node group type name
        shared_ptr<string> groupName_ {};
        // Probe node group types:
        // - BGP: BGP nodes
        // - OVERSEAS: International nodes
        // - ISP: Carrier nodes
        shared_ptr<string> groupType_ {};
        // Operator Code
        shared_ptr<string> ispCode_ {};
        // Operator Name
        shared_ptr<string> ispName_ {};
      };

      virtual bool empty() const override { return this->ispCityNode_ == nullptr; };
      // ispCityNode Field Functions 
      bool hasIspCityNode() const { return this->ispCityNode_ != nullptr;};
      void deleteIspCityNode() { this->ispCityNode_ = nullptr;};
      inline const vector<IspCityNodes::IspCityNode> & getIspCityNode() const { DARABONBA_PTR_GET_CONST(ispCityNode_, vector<IspCityNodes::IspCityNode>) };
      inline vector<IspCityNodes::IspCityNode> getIspCityNode() { DARABONBA_PTR_GET(ispCityNode_, vector<IspCityNodes::IspCityNode>) };
      inline IspCityNodes& setIspCityNode(const vector<IspCityNodes::IspCityNode> & ispCityNode) { DARABONBA_PTR_SET_VALUE(ispCityNode_, ispCityNode) };
      inline IspCityNodes& setIspCityNode(vector<IspCityNodes::IspCityNode> && ispCityNode) { DARABONBA_PTR_SET_RVALUE(ispCityNode_, ispCityNode) };


    protected:
      shared_ptr<vector<IspCityNodes::IspCityNode>> ispCityNode_ {};
    };

    virtual bool empty() const override { return this->createTime_ == nullptr
        && this->createTimestamp_ == nullptr && this->evaluationCount_ == nullptr && this->extendInfo_ == nullptr && this->failureRate_ == nullptr && this->interval_ == nullptr
        && this->ipVersion_ == nullptr && this->ispCityNodes_ == nullptr && this->name_ == nullptr && this->protocol_ == nullptr && this->remark_ == nullptr
        && this->requestId_ == nullptr && this->templateId_ == nullptr && this->timeout_ == nullptr && this->updateTime_ == nullptr && this->updateTimestamp_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline DescribeCloudGtmMonitorTemplateResponseBody& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // createTimestamp Field Functions 
    bool hasCreateTimestamp() const { return this->createTimestamp_ != nullptr;};
    void deleteCreateTimestamp() { this->createTimestamp_ = nullptr;};
    inline int64_t getCreateTimestamp() const { DARABONBA_PTR_GET_DEFAULT(createTimestamp_, 0L) };
    inline DescribeCloudGtmMonitorTemplateResponseBody& setCreateTimestamp(int64_t createTimestamp) { DARABONBA_PTR_SET_VALUE(createTimestamp_, createTimestamp) };


    // evaluationCount Field Functions 
    bool hasEvaluationCount() const { return this->evaluationCount_ != nullptr;};
    void deleteEvaluationCount() { this->evaluationCount_ = nullptr;};
    inline int32_t getEvaluationCount() const { DARABONBA_PTR_GET_DEFAULT(evaluationCount_, 0) };
    inline DescribeCloudGtmMonitorTemplateResponseBody& setEvaluationCount(int32_t evaluationCount) { DARABONBA_PTR_SET_VALUE(evaluationCount_, evaluationCount) };


    // extendInfo Field Functions 
    bool hasExtendInfo() const { return this->extendInfo_ != nullptr;};
    void deleteExtendInfo() { this->extendInfo_ = nullptr;};
    inline string getExtendInfo() const { DARABONBA_PTR_GET_DEFAULT(extendInfo_, "") };
    inline DescribeCloudGtmMonitorTemplateResponseBody& setExtendInfo(string extendInfo) { DARABONBA_PTR_SET_VALUE(extendInfo_, extendInfo) };


    // failureRate Field Functions 
    bool hasFailureRate() const { return this->failureRate_ != nullptr;};
    void deleteFailureRate() { this->failureRate_ = nullptr;};
    inline int32_t getFailureRate() const { DARABONBA_PTR_GET_DEFAULT(failureRate_, 0) };
    inline DescribeCloudGtmMonitorTemplateResponseBody& setFailureRate(int32_t failureRate) { DARABONBA_PTR_SET_VALUE(failureRate_, failureRate) };


    // interval Field Functions 
    bool hasInterval() const { return this->interval_ != nullptr;};
    void deleteInterval() { this->interval_ = nullptr;};
    inline int32_t getInterval() const { DARABONBA_PTR_GET_DEFAULT(interval_, 0) };
    inline DescribeCloudGtmMonitorTemplateResponseBody& setInterval(int32_t interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


    // ipVersion Field Functions 
    bool hasIpVersion() const { return this->ipVersion_ != nullptr;};
    void deleteIpVersion() { this->ipVersion_ = nullptr;};
    inline string getIpVersion() const { DARABONBA_PTR_GET_DEFAULT(ipVersion_, "") };
    inline DescribeCloudGtmMonitorTemplateResponseBody& setIpVersion(string ipVersion) { DARABONBA_PTR_SET_VALUE(ipVersion_, ipVersion) };


    // ispCityNodes Field Functions 
    bool hasIspCityNodes() const { return this->ispCityNodes_ != nullptr;};
    void deleteIspCityNodes() { this->ispCityNodes_ = nullptr;};
    inline const DescribeCloudGtmMonitorTemplateResponseBody::IspCityNodes & getIspCityNodes() const { DARABONBA_PTR_GET_CONST(ispCityNodes_, DescribeCloudGtmMonitorTemplateResponseBody::IspCityNodes) };
    inline DescribeCloudGtmMonitorTemplateResponseBody::IspCityNodes getIspCityNodes() { DARABONBA_PTR_GET(ispCityNodes_, DescribeCloudGtmMonitorTemplateResponseBody::IspCityNodes) };
    inline DescribeCloudGtmMonitorTemplateResponseBody& setIspCityNodes(const DescribeCloudGtmMonitorTemplateResponseBody::IspCityNodes & ispCityNodes) { DARABONBA_PTR_SET_VALUE(ispCityNodes_, ispCityNodes) };
    inline DescribeCloudGtmMonitorTemplateResponseBody& setIspCityNodes(DescribeCloudGtmMonitorTemplateResponseBody::IspCityNodes && ispCityNodes) { DARABONBA_PTR_SET_RVALUE(ispCityNodes_, ispCityNodes) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeCloudGtmMonitorTemplateResponseBody& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // protocol Field Functions 
    bool hasProtocol() const { return this->protocol_ != nullptr;};
    void deleteProtocol() { this->protocol_ = nullptr;};
    inline string getProtocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
    inline DescribeCloudGtmMonitorTemplateResponseBody& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline DescribeCloudGtmMonitorTemplateResponseBody& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCloudGtmMonitorTemplateResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline DescribeCloudGtmMonitorTemplateResponseBody& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // timeout Field Functions 
    bool hasTimeout() const { return this->timeout_ != nullptr;};
    void deleteTimeout() { this->timeout_ = nullptr;};
    inline int32_t getTimeout() const { DARABONBA_PTR_GET_DEFAULT(timeout_, 0) };
    inline DescribeCloudGtmMonitorTemplateResponseBody& setTimeout(int32_t timeout) { DARABONBA_PTR_SET_VALUE(timeout_, timeout) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline DescribeCloudGtmMonitorTemplateResponseBody& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    // updateTimestamp Field Functions 
    bool hasUpdateTimestamp() const { return this->updateTimestamp_ != nullptr;};
    void deleteUpdateTimestamp() { this->updateTimestamp_ = nullptr;};
    inline int64_t getUpdateTimestamp() const { DARABONBA_PTR_GET_DEFAULT(updateTimestamp_, 0L) };
    inline DescribeCloudGtmMonitorTemplateResponseBody& setUpdateTimestamp(int64_t updateTimestamp) { DARABONBA_PTR_SET_VALUE(updateTimestamp_, updateTimestamp) };


  protected:
    // Health check template creation time.
    shared_ptr<string> createTime_ {};
    // Health check template creation time (timestamp).
    shared_ptr<int64_t> createTimestamp_ {};
    // Retries count. The system will only judge the application service as abnormal after consecutive monitoring failures to prevent inaccurate monitoring results due to momentary network fluctuations or other reasons. Available retry counts are:
    // - 1
    // - 2
    // - 3
    shared_ptr<int32_t> evaluationCount_ {};
    // The extended information. The value of this parameter is a JSON string. The required parameters vary based on the health check protocol.
    // 
    // *   HTTP or HTTPS:
    // 
    //     **host**: the Host field of an HTTP or HTTPS request header during an HTTP or HTTPS health check. The parameter value indicates the HTTP website that you want to visit. By default, the value is the primary domain name. You can change the value based on your business requirements.
    // 
    //     **path**: the URL for HTTP or HTTPS health checks. Default value: /.
    // 
    //     **code**: the alert threshold. During an HTTP or HTTPS health check, the system checks whether a web server functions as expected based on the status code that is returned from the web server. If the returned status code is greater than the specified threshold, the corresponding application service address is deemed abnormal. Valid values:
    // 
    //     *   400: indicates an invalid request. If an HTTP or HTTPS request contains invalid request parameters, a web server returns a status code that is greater than 400. You must specify an exact URL for path if you set code to 400.
    //     *   500: indicates a server error. If some exceptions occur on a web server, the web server returns a status code that is greater than 500. This value is used by default.
    // 
    //     **sni**: indicates whether Server Name Indication (SNI) is enabled. This parameter is used only when the health check protocol is HTTPS. SNI is an extension to the Transport Layer Security (TLS) protocol, which allows a client to specify the host to be connected when the client sends a TLS handshake request. TLS handshakes occur before any data of HTTP requests is sent. Therefore, SNI enables servers to identify the services that clients are attempting to access before certificates are sent. This allows the servers to present correct certificates to the clients. Valid values:
    // 
    //     *   true: SNI is enabled.
    //     *   false: SNI is disabled.
    // 
    //     **followRedirect**: indicates whether 3XX redirects are followed. Valid values:
    // 
    //     *   true: 3XX redirects are followed. You are redirected to the destination address if a 3XX status code such as 301, 302, 303, 307, or 308 is returned.
    //     *   false: 3XX redirects are not followed.
    // 
    // *   ping:
    // 
    //     **packetNum**: the total number of Internet Control Message Protocol (ICMP) packets that are sent to the address for each ping-based health check. Valid values: 20, 50, and 100.
    // 
    //     **packetLossRate**: the ICMP packet loss rate for each ping-based health check. The packet loss rate in a health check can be calculated by using the following formula: Packet loss rate in a health check = (Number of lost packets/Total number of sent ICMP packets) × 100%. If the packet loss rate reaches the threshold, an alert is triggered. Valid values: 10, 30, 40, 80, 90, and 100.
    shared_ptr<string> extendInfo_ {};
    // Percentage of selected node probe failures (%), that is, the percentage of abnormal detection points among the total detection points. When the failure ratio exceeds the set threshold, the service address is judged as abnormal. The available failure ratio thresholds are:
    // - 20
    // - 50
    // - 80
    // - 100
    shared_ptr<int32_t> failureRate_ {};
    // The time interval (in seconds) between each check, with a default interval of 1 minute. The minimum supported health check interval is 15 seconds, available for flagship edition instances.
    shared_ptr<int32_t> interval_ {};
    // Detect the type of the node IP address:
    // - IPv4: Applicable when the target address type is IPv4;
    // - IPv6: Applicable when the target address type is IPv6.
    shared_ptr<string> ipVersion_ {};
    // Probe node list, detailed information can be obtained by calling ListCloudGtmMonitorNodes.
    shared_ptr<DescribeCloudGtmMonitorTemplateResponseBody::IspCityNodes> ispCityNodes_ {};
    // The name of the health check probe template, which is recommended to be distinguishable for configuration personnel to differentiate and remember, ideally indicating the health check protocol.
    shared_ptr<string> name_ {};
    // Protocol types to initiate probes to the target IP address:
    // - ping
    // - tcp
    // - http
    // - https
    shared_ptr<string> protocol_ {};
    // Remarks for the health check template.
    shared_ptr<string> remark_ {};
    // Unique request identification code.
    shared_ptr<string> requestId_ {};
    // The ID of the health check template. This ID uniquely identifies the health check template.
    shared_ptr<string> templateId_ {};
    // Probe timeout (in milliseconds), data packets not returned within the timeout period are deemed as health check timeouts:
    // - 2000
    // - 3000
    // - 5000
    // - 10000
    shared_ptr<int32_t> timeout_ {};
    // Health check template configuration modification time.
    shared_ptr<string> updateTime_ {};
    // Health check template configuration modification time (timestamp).
    shared_ptr<int64_t> updateTimestamp_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
