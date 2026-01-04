// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHEALTHCHECKSTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHEALTHCHECKSTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeHealthCheckStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHealthCheckStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(HealthCheckStatus, healthCheckStatus_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHealthCheckStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(HealthCheckStatus, healthCheckStatus_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeHealthCheckStatusResponseBody() = default ;
    DescribeHealthCheckStatusResponseBody(const DescribeHealthCheckStatusResponseBody &) = default ;
    DescribeHealthCheckStatusResponseBody(DescribeHealthCheckStatusResponseBody &&) = default ;
    DescribeHealthCheckStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHealthCheckStatusResponseBody() = default ;
    DescribeHealthCheckStatusResponseBody& operator=(const DescribeHealthCheckStatusResponseBody &) = default ;
    DescribeHealthCheckStatusResponseBody& operator=(DescribeHealthCheckStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class HealthCheckStatus : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const HealthCheckStatus& obj) { 
        DARABONBA_PTR_TO_JSON(FrontendPort, frontendPort_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(Protocol, protocol_);
        DARABONBA_PTR_TO_JSON(RealServerStatusList, realServerStatusList_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, HealthCheckStatus& obj) { 
        DARABONBA_PTR_FROM_JSON(FrontendPort, frontendPort_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
        DARABONBA_PTR_FROM_JSON(RealServerStatusList, realServerStatusList_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      HealthCheckStatus() = default ;
      HealthCheckStatus(const HealthCheckStatus &) = default ;
      HealthCheckStatus(HealthCheckStatus &&) = default ;
      HealthCheckStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~HealthCheckStatus() = default ;
      HealthCheckStatus& operator=(const HealthCheckStatus &) = default ;
      HealthCheckStatus& operator=(HealthCheckStatus &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class RealServerStatusList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RealServerStatusList& obj) { 
          DARABONBA_PTR_TO_JSON(Address, address_);
          DARABONBA_PTR_TO_JSON(Status, status_);
        };
        friend void from_json(const Darabonba::Json& j, RealServerStatusList& obj) { 
          DARABONBA_PTR_FROM_JSON(Address, address_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
        };
        RealServerStatusList() = default ;
        RealServerStatusList(const RealServerStatusList &) = default ;
        RealServerStatusList(RealServerStatusList &&) = default ;
        RealServerStatusList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RealServerStatusList() = default ;
        RealServerStatusList& operator=(const RealServerStatusList &) = default ;
        RealServerStatusList& operator=(RealServerStatusList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->address_ == nullptr
        && this->status_ == nullptr; };
        // address Field Functions 
        bool hasAddress() const { return this->address_ != nullptr;};
        void deleteAddress() { this->address_ = nullptr;};
        inline string getAddress() const { DARABONBA_PTR_GET_DEFAULT(address_, "") };
        inline RealServerStatusList& setAddress(string address) { DARABONBA_PTR_SET_VALUE(address_, address) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline RealServerStatusList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        // The IP address of the origin server.
        shared_ptr<string> address_ {};
        // The health state of the IP address. Valid values:
        // 
        // *   **normal**: healthy
        // *   **abnormal**: unhealthy
        shared_ptr<string> status_ {};
      };

      virtual bool empty() const override { return this->frontendPort_ == nullptr
        && this->instanceId_ == nullptr && this->protocol_ == nullptr && this->realServerStatusList_ == nullptr && this->status_ == nullptr; };
      // frontendPort Field Functions 
      bool hasFrontendPort() const { return this->frontendPort_ != nullptr;};
      void deleteFrontendPort() { this->frontendPort_ = nullptr;};
      inline int32_t getFrontendPort() const { DARABONBA_PTR_GET_DEFAULT(frontendPort_, 0) };
      inline HealthCheckStatus& setFrontendPort(int32_t frontendPort) { DARABONBA_PTR_SET_VALUE(frontendPort_, frontendPort) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline HealthCheckStatus& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // protocol Field Functions 
      bool hasProtocol() const { return this->protocol_ != nullptr;};
      void deleteProtocol() { this->protocol_ = nullptr;};
      inline string getProtocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
      inline HealthCheckStatus& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


      // realServerStatusList Field Functions 
      bool hasRealServerStatusList() const { return this->realServerStatusList_ != nullptr;};
      void deleteRealServerStatusList() { this->realServerStatusList_ = nullptr;};
      inline const vector<HealthCheckStatus::RealServerStatusList> & getRealServerStatusList() const { DARABONBA_PTR_GET_CONST(realServerStatusList_, vector<HealthCheckStatus::RealServerStatusList>) };
      inline vector<HealthCheckStatus::RealServerStatusList> getRealServerStatusList() { DARABONBA_PTR_GET(realServerStatusList_, vector<HealthCheckStatus::RealServerStatusList>) };
      inline HealthCheckStatus& setRealServerStatusList(const vector<HealthCheckStatus::RealServerStatusList> & realServerStatusList) { DARABONBA_PTR_SET_VALUE(realServerStatusList_, realServerStatusList) };
      inline HealthCheckStatus& setRealServerStatusList(vector<HealthCheckStatus::RealServerStatusList> && realServerStatusList) { DARABONBA_PTR_SET_RVALUE(realServerStatusList_, realServerStatusList) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline HealthCheckStatus& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // The forwarding port.
      shared_ptr<int32_t> frontendPort_ {};
      // The ID of the instance.
      shared_ptr<string> instanceId_ {};
      // The forwarding protocol. Valid values:
      // 
      // *   **tcp**
      // *   **udp**
      shared_ptr<string> protocol_ {};
      // An array that consists of the health states of the IP addresses of the origin server.
      shared_ptr<vector<HealthCheckStatus::RealServerStatusList>> realServerStatusList_ {};
      // The health status of the origin server. Valid values:
      // 
      // *   **normal**: healthy
      // *   **abnormal**: unhealthy
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->healthCheckStatus_ == nullptr
        && this->requestId_ == nullptr; };
    // healthCheckStatus Field Functions 
    bool hasHealthCheckStatus() const { return this->healthCheckStatus_ != nullptr;};
    void deleteHealthCheckStatus() { this->healthCheckStatus_ = nullptr;};
    inline const vector<DescribeHealthCheckStatusResponseBody::HealthCheckStatus> & getHealthCheckStatus() const { DARABONBA_PTR_GET_CONST(healthCheckStatus_, vector<DescribeHealthCheckStatusResponseBody::HealthCheckStatus>) };
    inline vector<DescribeHealthCheckStatusResponseBody::HealthCheckStatus> getHealthCheckStatus() { DARABONBA_PTR_GET(healthCheckStatus_, vector<DescribeHealthCheckStatusResponseBody::HealthCheckStatus>) };
    inline DescribeHealthCheckStatusResponseBody& setHealthCheckStatus(const vector<DescribeHealthCheckStatusResponseBody::HealthCheckStatus> & healthCheckStatus) { DARABONBA_PTR_SET_VALUE(healthCheckStatus_, healthCheckStatus) };
    inline DescribeHealthCheckStatusResponseBody& setHealthCheckStatus(vector<DescribeHealthCheckStatusResponseBody::HealthCheckStatus> && healthCheckStatus) { DARABONBA_PTR_SET_RVALUE(healthCheckStatus_, healthCheckStatus) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeHealthCheckStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // An array that consists of the details of the health status of the origin server.
    shared_ptr<vector<DescribeHealthCheckStatusResponseBody::HealthCheckStatus>> healthCheckStatus_ {};
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
