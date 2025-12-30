// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDNSGTMMONITORCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDNSGTMMONITORCONFIGRESPONSEBODY_HPP_
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
  class DescribeDnsGtmMonitorConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDnsGtmMonitorConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(CreateTimestamp, createTimestamp_);
      DARABONBA_PTR_TO_JSON(EvaluationCount, evaluationCount_);
      DARABONBA_PTR_TO_JSON(Interval, interval_);
      DARABONBA_PTR_TO_JSON(IspCityNodes, ispCityNodes_);
      DARABONBA_PTR_TO_JSON(MonitorConfigId, monitorConfigId_);
      DARABONBA_PTR_TO_JSON(MonitorExtendInfo, monitorExtendInfo_);
      DARABONBA_PTR_TO_JSON(ProtocolType, protocolType_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Timeout, timeout_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_TO_JSON(UpdateTimestamp, updateTimestamp_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDnsGtmMonitorConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(CreateTimestamp, createTimestamp_);
      DARABONBA_PTR_FROM_JSON(EvaluationCount, evaluationCount_);
      DARABONBA_PTR_FROM_JSON(Interval, interval_);
      DARABONBA_PTR_FROM_JSON(IspCityNodes, ispCityNodes_);
      DARABONBA_PTR_FROM_JSON(MonitorConfigId, monitorConfigId_);
      DARABONBA_PTR_FROM_JSON(MonitorExtendInfo, monitorExtendInfo_);
      DARABONBA_PTR_FROM_JSON(ProtocolType, protocolType_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Timeout, timeout_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_FROM_JSON(UpdateTimestamp, updateTimestamp_);
    };
    DescribeDnsGtmMonitorConfigResponseBody() = default ;
    DescribeDnsGtmMonitorConfigResponseBody(const DescribeDnsGtmMonitorConfigResponseBody &) = default ;
    DescribeDnsGtmMonitorConfigResponseBody(DescribeDnsGtmMonitorConfigResponseBody &&) = default ;
    DescribeDnsGtmMonitorConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDnsGtmMonitorConfigResponseBody() = default ;
    DescribeDnsGtmMonitorConfigResponseBody& operator=(const DescribeDnsGtmMonitorConfigResponseBody &) = default ;
    DescribeDnsGtmMonitorConfigResponseBody& operator=(DescribeDnsGtmMonitorConfigResponseBody &&) = default ;
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
          DARABONBA_PTR_TO_JSON(IspCode, ispCode_);
          DARABONBA_PTR_TO_JSON(IspName, ispName_);
        };
        friend void from_json(const Darabonba::Json& j, IspCityNode& obj) { 
          DARABONBA_PTR_FROM_JSON(CityCode, cityCode_);
          DARABONBA_PTR_FROM_JSON(CityName, cityName_);
          DARABONBA_PTR_FROM_JSON(CountryCode, countryCode_);
          DARABONBA_PTR_FROM_JSON(CountryName, countryName_);
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
        && this->cityName_ == nullptr && this->countryCode_ == nullptr && this->countryName_ == nullptr && this->ispCode_ == nullptr && this->ispName_ == nullptr; };
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
        // The city code.
        shared_ptr<string> cityCode_ {};
        // The display name of the city.
        shared_ptr<string> cityName_ {};
        // The code of the country or region.
        shared_ptr<string> countryCode_ {};
        // The display name of the country or region.
        shared_ptr<string> countryName_ {};
        // The Internet service provider (ISP) code.
        shared_ptr<string> ispCode_ {};
        // The display name of the ISP.
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
        && this->createTimestamp_ == nullptr && this->evaluationCount_ == nullptr && this->interval_ == nullptr && this->ispCityNodes_ == nullptr && this->monitorConfigId_ == nullptr
        && this->monitorExtendInfo_ == nullptr && this->protocolType_ == nullptr && this->requestId_ == nullptr && this->timeout_ == nullptr && this->updateTime_ == nullptr
        && this->updateTimestamp_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline DescribeDnsGtmMonitorConfigResponseBody& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // createTimestamp Field Functions 
    bool hasCreateTimestamp() const { return this->createTimestamp_ != nullptr;};
    void deleteCreateTimestamp() { this->createTimestamp_ = nullptr;};
    inline int64_t getCreateTimestamp() const { DARABONBA_PTR_GET_DEFAULT(createTimestamp_, 0L) };
    inline DescribeDnsGtmMonitorConfigResponseBody& setCreateTimestamp(int64_t createTimestamp) { DARABONBA_PTR_SET_VALUE(createTimestamp_, createTimestamp) };


    // evaluationCount Field Functions 
    bool hasEvaluationCount() const { return this->evaluationCount_ != nullptr;};
    void deleteEvaluationCount() { this->evaluationCount_ = nullptr;};
    inline int32_t getEvaluationCount() const { DARABONBA_PTR_GET_DEFAULT(evaluationCount_, 0) };
    inline DescribeDnsGtmMonitorConfigResponseBody& setEvaluationCount(int32_t evaluationCount) { DARABONBA_PTR_SET_VALUE(evaluationCount_, evaluationCount) };


    // interval Field Functions 
    bool hasInterval() const { return this->interval_ != nullptr;};
    void deleteInterval() { this->interval_ = nullptr;};
    inline int32_t getInterval() const { DARABONBA_PTR_GET_DEFAULT(interval_, 0) };
    inline DescribeDnsGtmMonitorConfigResponseBody& setInterval(int32_t interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


    // ispCityNodes Field Functions 
    bool hasIspCityNodes() const { return this->ispCityNodes_ != nullptr;};
    void deleteIspCityNodes() { this->ispCityNodes_ = nullptr;};
    inline const DescribeDnsGtmMonitorConfigResponseBody::IspCityNodes & getIspCityNodes() const { DARABONBA_PTR_GET_CONST(ispCityNodes_, DescribeDnsGtmMonitorConfigResponseBody::IspCityNodes) };
    inline DescribeDnsGtmMonitorConfigResponseBody::IspCityNodes getIspCityNodes() { DARABONBA_PTR_GET(ispCityNodes_, DescribeDnsGtmMonitorConfigResponseBody::IspCityNodes) };
    inline DescribeDnsGtmMonitorConfigResponseBody& setIspCityNodes(const DescribeDnsGtmMonitorConfigResponseBody::IspCityNodes & ispCityNodes) { DARABONBA_PTR_SET_VALUE(ispCityNodes_, ispCityNodes) };
    inline DescribeDnsGtmMonitorConfigResponseBody& setIspCityNodes(DescribeDnsGtmMonitorConfigResponseBody::IspCityNodes && ispCityNodes) { DARABONBA_PTR_SET_RVALUE(ispCityNodes_, ispCityNodes) };


    // monitorConfigId Field Functions 
    bool hasMonitorConfigId() const { return this->monitorConfigId_ != nullptr;};
    void deleteMonitorConfigId() { this->monitorConfigId_ = nullptr;};
    inline string getMonitorConfigId() const { DARABONBA_PTR_GET_DEFAULT(monitorConfigId_, "") };
    inline DescribeDnsGtmMonitorConfigResponseBody& setMonitorConfigId(string monitorConfigId) { DARABONBA_PTR_SET_VALUE(monitorConfigId_, monitorConfigId) };


    // monitorExtendInfo Field Functions 
    bool hasMonitorExtendInfo() const { return this->monitorExtendInfo_ != nullptr;};
    void deleteMonitorExtendInfo() { this->monitorExtendInfo_ = nullptr;};
    inline string getMonitorExtendInfo() const { DARABONBA_PTR_GET_DEFAULT(monitorExtendInfo_, "") };
    inline DescribeDnsGtmMonitorConfigResponseBody& setMonitorExtendInfo(string monitorExtendInfo) { DARABONBA_PTR_SET_VALUE(monitorExtendInfo_, monitorExtendInfo) };


    // protocolType Field Functions 
    bool hasProtocolType() const { return this->protocolType_ != nullptr;};
    void deleteProtocolType() { this->protocolType_ = nullptr;};
    inline string getProtocolType() const { DARABONBA_PTR_GET_DEFAULT(protocolType_, "") };
    inline DescribeDnsGtmMonitorConfigResponseBody& setProtocolType(string protocolType) { DARABONBA_PTR_SET_VALUE(protocolType_, protocolType) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDnsGtmMonitorConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // timeout Field Functions 
    bool hasTimeout() const { return this->timeout_ != nullptr;};
    void deleteTimeout() { this->timeout_ = nullptr;};
    inline int32_t getTimeout() const { DARABONBA_PTR_GET_DEFAULT(timeout_, 0) };
    inline DescribeDnsGtmMonitorConfigResponseBody& setTimeout(int32_t timeout) { DARABONBA_PTR_SET_VALUE(timeout_, timeout) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline DescribeDnsGtmMonitorConfigResponseBody& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    // updateTimestamp Field Functions 
    bool hasUpdateTimestamp() const { return this->updateTimestamp_ != nullptr;};
    void deleteUpdateTimestamp() { this->updateTimestamp_ = nullptr;};
    inline int64_t getUpdateTimestamp() const { DARABONBA_PTR_GET_DEFAULT(updateTimestamp_, 0L) };
    inline DescribeDnsGtmMonitorConfigResponseBody& setUpdateTimestamp(int64_t updateTimestamp) { DARABONBA_PTR_SET_VALUE(updateTimestamp_, updateTimestamp) };


  protected:
    // The time when the health check configuration was created. The time follows the ISO 8601 standard in the YYYY-MM-DDThh:mm:ss format. The time is displayed in UTC.
    shared_ptr<string> createTime_ {};
    // The time when the health check configuration was created. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    shared_ptr<int64_t> createTimestamp_ {};
    // The number of consecutive failures.
    shared_ptr<int32_t> evaluationCount_ {};
    // The health check interval. Unit: seconds.
    shared_ptr<int32_t> interval_ {};
    // The health check nodes.
    shared_ptr<DescribeDnsGtmMonitorConfigResponseBody::IspCityNodes> ispCityNodes_ {};
    // The ID of the health check configuration.
    shared_ptr<string> monitorConfigId_ {};
    // The extended information. The required parameters vary based on the value of ProtocolType.
    // 
    // *   HTTP or HTTPS
    // 
    //     *   port: the port that you want to check
    // 
    //     *   host: the host settings
    // 
    //     *   path: the URL path
    // 
    //     *   code: the response code. The health check result is deemed abnormal if the returned value is greater than the specified value.
    // 
    //     *   failureRate: the failure rate
    // 
    //     *   sni: specifies whether to enable server name indication (SNI). This parameter is available only when ProtocolType is set to HTTPS. Valid values:
    // 
    //         *   true: enables SNI.
    //         *   false: disables SNI.
    // 
    //     *   nodeType: the type of the node for monitoring when the address pool type is domain name. Valid values:
    // 
    //         *   IPV4
    //         *   IPV6
    // 
    // *   PING:
    // 
    //     *   failureRate: the failure rate
    // 
    //     *   packetNum: the number of ping packets
    // 
    //     *   packetLossRate: the loss rate of ping packets
    // 
    //     *   nodeType: the type of the node for monitoring when the address pool type is domain name. Valid values:
    // 
    //         *   IPV4
    //         *   IPV6
    // 
    // *   TCP
    // 
    //     *   port: the port that you want to check
    // 
    //     *   failureRate: the failure rate
    // 
    //     *   nodeType: the type of the node for monitoring when the address pool type is domain name. Valid values:
    // 
    //         *   IPV4
    //         *   IPV6
    shared_ptr<string> monitorExtendInfo_ {};
    // The health check protocol. Valid values:
    // 
    // *   HTTP
    // *   HTTPS
    // *   PING
    // *   TCP
    shared_ptr<string> protocolType_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The timeout period. Unit: milliseconds.
    shared_ptr<int32_t> timeout_ {};
    // The time when the health check configuration was updated. The time follows the ISO 8601 standard in the YYYY-MM-DDThh:mm:ss format. The time is displayed in UTC.
    shared_ptr<string> updateTime_ {};
    // The time when the health check configuration was updated. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    shared_ptr<int64_t> updateTimestamp_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
