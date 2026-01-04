// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHEALTHCHECKLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHEALTHCHECKLISTRESPONSEBODY_HPP_
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
  class DescribeHealthCheckListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHealthCheckListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(HealthCheckList, healthCheckList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHealthCheckListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(HealthCheckList, healthCheckList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeHealthCheckListResponseBody() = default ;
    DescribeHealthCheckListResponseBody(const DescribeHealthCheckListResponseBody &) = default ;
    DescribeHealthCheckListResponseBody(DescribeHealthCheckListResponseBody &&) = default ;
    DescribeHealthCheckListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHealthCheckListResponseBody() = default ;
    DescribeHealthCheckListResponseBody& operator=(const DescribeHealthCheckListResponseBody &) = default ;
    DescribeHealthCheckListResponseBody& operator=(DescribeHealthCheckListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class HealthCheckList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const HealthCheckList& obj) { 
        DARABONBA_PTR_TO_JSON(FrontendPort, frontendPort_);
        DARABONBA_PTR_TO_JSON(HealthCheck, healthCheck_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(Protocol, protocol_);
      };
      friend void from_json(const Darabonba::Json& j, HealthCheckList& obj) { 
        DARABONBA_PTR_FROM_JSON(FrontendPort, frontendPort_);
        DARABONBA_PTR_FROM_JSON(HealthCheck, healthCheck_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
      };
      HealthCheckList() = default ;
      HealthCheckList(const HealthCheckList &) = default ;
      HealthCheckList(HealthCheckList &&) = default ;
      HealthCheckList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~HealthCheckList() = default ;
      HealthCheckList& operator=(const HealthCheckList &) = default ;
      HealthCheckList& operator=(HealthCheckList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class HealthCheck : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const HealthCheck& obj) { 
          DARABONBA_PTR_TO_JSON(Domain, domain_);
          DARABONBA_PTR_TO_JSON(Down, down_);
          DARABONBA_PTR_TO_JSON(Interval, interval_);
          DARABONBA_PTR_TO_JSON(Port, port_);
          DARABONBA_PTR_TO_JSON(Timeout, timeout_);
          DARABONBA_PTR_TO_JSON(Type, type_);
          DARABONBA_PTR_TO_JSON(Up, up_);
          DARABONBA_PTR_TO_JSON(Uri, uri_);
        };
        friend void from_json(const Darabonba::Json& j, HealthCheck& obj) { 
          DARABONBA_PTR_FROM_JSON(Domain, domain_);
          DARABONBA_PTR_FROM_JSON(Down, down_);
          DARABONBA_PTR_FROM_JSON(Interval, interval_);
          DARABONBA_PTR_FROM_JSON(Port, port_);
          DARABONBA_PTR_FROM_JSON(Timeout, timeout_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
          DARABONBA_PTR_FROM_JSON(Up, up_);
          DARABONBA_PTR_FROM_JSON(Uri, uri_);
        };
        HealthCheck() = default ;
        HealthCheck(const HealthCheck &) = default ;
        HealthCheck(HealthCheck &&) = default ;
        HealthCheck(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~HealthCheck() = default ;
        HealthCheck& operator=(const HealthCheck &) = default ;
        HealthCheck& operator=(HealthCheck &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->domain_ == nullptr
        && this->down_ == nullptr && this->interval_ == nullptr && this->port_ == nullptr && this->timeout_ == nullptr && this->type_ == nullptr
        && this->up_ == nullptr && this->uri_ == nullptr; };
        // domain Field Functions 
        bool hasDomain() const { return this->domain_ != nullptr;};
        void deleteDomain() { this->domain_ = nullptr;};
        inline string getDomain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
        inline HealthCheck& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


        // down Field Functions 
        bool hasDown() const { return this->down_ != nullptr;};
        void deleteDown() { this->down_ = nullptr;};
        inline int32_t getDown() const { DARABONBA_PTR_GET_DEFAULT(down_, 0) };
        inline HealthCheck& setDown(int32_t down) { DARABONBA_PTR_SET_VALUE(down_, down) };


        // interval Field Functions 
        bool hasInterval() const { return this->interval_ != nullptr;};
        void deleteInterval() { this->interval_ = nullptr;};
        inline int32_t getInterval() const { DARABONBA_PTR_GET_DEFAULT(interval_, 0) };
        inline HealthCheck& setInterval(int32_t interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


        // port Field Functions 
        bool hasPort() const { return this->port_ != nullptr;};
        void deletePort() { this->port_ = nullptr;};
        inline int32_t getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
        inline HealthCheck& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


        // timeout Field Functions 
        bool hasTimeout() const { return this->timeout_ != nullptr;};
        void deleteTimeout() { this->timeout_ = nullptr;};
        inline int32_t getTimeout() const { DARABONBA_PTR_GET_DEFAULT(timeout_, 0) };
        inline HealthCheck& setTimeout(int32_t timeout) { DARABONBA_PTR_SET_VALUE(timeout_, timeout) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline HealthCheck& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        // up Field Functions 
        bool hasUp() const { return this->up_ != nullptr;};
        void deleteUp() { this->up_ = nullptr;};
        inline int32_t getUp() const { DARABONBA_PTR_GET_DEFAULT(up_, 0) };
        inline HealthCheck& setUp(int32_t up) { DARABONBA_PTR_SET_VALUE(up_, up) };


        // uri Field Functions 
        bool hasUri() const { return this->uri_ != nullptr;};
        void deleteUri() { this->uri_ = nullptr;};
        inline string getUri() const { DARABONBA_PTR_GET_DEFAULT(uri_, "") };
        inline HealthCheck& setUri(string uri) { DARABONBA_PTR_SET_VALUE(uri_, uri) };


      protected:
        // The domain name.
        // 
        // >  This parameter is returned only when the Layer 7 health check configuration is queried.
        shared_ptr<string> domain_ {};
        // The number of consecutive failed health checks that must occur before a port is declared unhealthy. Valid values: **1** to **10**.
        shared_ptr<int32_t> down_ {};
        // The interval at which checks are performed. Valid values: **1** to **30**. Unit: seconds.
        shared_ptr<int32_t> interval_ {};
        // The port that was checked.
        shared_ptr<int32_t> port_ {};
        // The response timeout period. Valid values: **1** to **30**. Unit: seconds.
        shared_ptr<int32_t> timeout_ {};
        // The type of the protocol. Valid values:
        // 
        // *   **tcp**: The Layer 4 health check configuration was queried.
        // *   **http**: The Layer 7 health check configuration was queried.
        shared_ptr<string> type_ {};
        // The number of consecutive successful health checks that must occur before a port is declared healthy. Valid values: **1** to **10**.
        shared_ptr<int32_t> up_ {};
        // The check path.
        // 
        // >  This parameter is returned only when the Layer 7 health check configuration is queried.
        shared_ptr<string> uri_ {};
      };

      virtual bool empty() const override { return this->frontendPort_ == nullptr
        && this->healthCheck_ == nullptr && this->instanceId_ == nullptr && this->protocol_ == nullptr; };
      // frontendPort Field Functions 
      bool hasFrontendPort() const { return this->frontendPort_ != nullptr;};
      void deleteFrontendPort() { this->frontendPort_ = nullptr;};
      inline int32_t getFrontendPort() const { DARABONBA_PTR_GET_DEFAULT(frontendPort_, 0) };
      inline HealthCheckList& setFrontendPort(int32_t frontendPort) { DARABONBA_PTR_SET_VALUE(frontendPort_, frontendPort) };


      // healthCheck Field Functions 
      bool hasHealthCheck() const { return this->healthCheck_ != nullptr;};
      void deleteHealthCheck() { this->healthCheck_ = nullptr;};
      inline const HealthCheckList::HealthCheck & getHealthCheck() const { DARABONBA_PTR_GET_CONST(healthCheck_, HealthCheckList::HealthCheck) };
      inline HealthCheckList::HealthCheck getHealthCheck() { DARABONBA_PTR_GET(healthCheck_, HealthCheckList::HealthCheck) };
      inline HealthCheckList& setHealthCheck(const HealthCheckList::HealthCheck & healthCheck) { DARABONBA_PTR_SET_VALUE(healthCheck_, healthCheck) };
      inline HealthCheckList& setHealthCheck(HealthCheckList::HealthCheck && healthCheck) { DARABONBA_PTR_SET_RVALUE(healthCheck_, healthCheck) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline HealthCheckList& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // protocol Field Functions 
      bool hasProtocol() const { return this->protocol_ != nullptr;};
      void deleteProtocol() { this->protocol_ = nullptr;};
      inline string getProtocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
      inline HealthCheckList& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


    protected:
      // The forwarding port.
      shared_ptr<int32_t> frontendPort_ {};
      // The health check configuration.
      shared_ptr<HealthCheckList::HealthCheck> healthCheck_ {};
      // The ID of the instance.
      shared_ptr<string> instanceId_ {};
      // The forwarding protocol. Valid values:
      // 
      // *   **tcp**
      // *   **udp**
      shared_ptr<string> protocol_ {};
    };

    virtual bool empty() const override { return this->healthCheckList_ == nullptr
        && this->requestId_ == nullptr; };
    // healthCheckList Field Functions 
    bool hasHealthCheckList() const { return this->healthCheckList_ != nullptr;};
    void deleteHealthCheckList() { this->healthCheckList_ = nullptr;};
    inline const vector<DescribeHealthCheckListResponseBody::HealthCheckList> & getHealthCheckList() const { DARABONBA_PTR_GET_CONST(healthCheckList_, vector<DescribeHealthCheckListResponseBody::HealthCheckList>) };
    inline vector<DescribeHealthCheckListResponseBody::HealthCheckList> getHealthCheckList() { DARABONBA_PTR_GET(healthCheckList_, vector<DescribeHealthCheckListResponseBody::HealthCheckList>) };
    inline DescribeHealthCheckListResponseBody& setHealthCheckList(const vector<DescribeHealthCheckListResponseBody::HealthCheckList> & healthCheckList) { DARABONBA_PTR_SET_VALUE(healthCheckList_, healthCheckList) };
    inline DescribeHealthCheckListResponseBody& setHealthCheckList(vector<DescribeHealthCheckListResponseBody::HealthCheckList> && healthCheckList) { DARABONBA_PTR_SET_RVALUE(healthCheckList_, healthCheckList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeHealthCheckListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // An array that consists of information about the health check configuration.
    shared_ptr<vector<DescribeHealthCheckListResponseBody::HealthCheckList>> healthCheckList_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
