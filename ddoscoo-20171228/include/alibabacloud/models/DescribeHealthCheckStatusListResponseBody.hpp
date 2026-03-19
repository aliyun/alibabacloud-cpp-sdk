// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHEALTHCHECKSTATUSLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHEALTHCHECKSTATUSLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20171228
{
namespace Models
{
  class DescribeHealthCheckStatusListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHealthCheckStatusListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(HealthCheckStatusList, healthCheckStatusList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHealthCheckStatusListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(HealthCheckStatusList, healthCheckStatusList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeHealthCheckStatusListResponseBody() = default ;
    DescribeHealthCheckStatusListResponseBody(const DescribeHealthCheckStatusListResponseBody &) = default ;
    DescribeHealthCheckStatusListResponseBody(DescribeHealthCheckStatusListResponseBody &&) = default ;
    DescribeHealthCheckStatusListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHealthCheckStatusListResponseBody() = default ;
    DescribeHealthCheckStatusListResponseBody& operator=(const DescribeHealthCheckStatusListResponseBody &) = default ;
    DescribeHealthCheckStatusListResponseBody& operator=(DescribeHealthCheckStatusListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class HealthCheckStatusList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const HealthCheckStatusList& obj) { 
        DARABONBA_PTR_TO_JSON(FrontendPort, frontendPort_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(Protocol, protocol_);
        DARABONBA_PTR_TO_JSON(RealServerStatusList, realServerStatusList_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, HealthCheckStatusList& obj) { 
        DARABONBA_PTR_FROM_JSON(FrontendPort, frontendPort_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
        DARABONBA_PTR_FROM_JSON(RealServerStatusList, realServerStatusList_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      HealthCheckStatusList() = default ;
      HealthCheckStatusList(const HealthCheckStatusList &) = default ;
      HealthCheckStatusList(HealthCheckStatusList &&) = default ;
      HealthCheckStatusList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~HealthCheckStatusList() = default ;
      HealthCheckStatusList& operator=(const HealthCheckStatusList &) = default ;
      HealthCheckStatusList& operator=(HealthCheckStatusList &&) = default ;
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
        shared_ptr<string> address_ {};
        shared_ptr<string> status_ {};
      };

      virtual bool empty() const override { return this->frontendPort_ == nullptr
        && this->instanceId_ == nullptr && this->protocol_ == nullptr && this->realServerStatusList_ == nullptr && this->status_ == nullptr; };
      // frontendPort Field Functions 
      bool hasFrontendPort() const { return this->frontendPort_ != nullptr;};
      void deleteFrontendPort() { this->frontendPort_ = nullptr;};
      inline int32_t getFrontendPort() const { DARABONBA_PTR_GET_DEFAULT(frontendPort_, 0) };
      inline HealthCheckStatusList& setFrontendPort(int32_t frontendPort) { DARABONBA_PTR_SET_VALUE(frontendPort_, frontendPort) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline HealthCheckStatusList& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // protocol Field Functions 
      bool hasProtocol() const { return this->protocol_ != nullptr;};
      void deleteProtocol() { this->protocol_ = nullptr;};
      inline string getProtocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
      inline HealthCheckStatusList& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


      // realServerStatusList Field Functions 
      bool hasRealServerStatusList() const { return this->realServerStatusList_ != nullptr;};
      void deleteRealServerStatusList() { this->realServerStatusList_ = nullptr;};
      inline const vector<HealthCheckStatusList::RealServerStatusList> & getRealServerStatusList() const { DARABONBA_PTR_GET_CONST(realServerStatusList_, vector<HealthCheckStatusList::RealServerStatusList>) };
      inline vector<HealthCheckStatusList::RealServerStatusList> getRealServerStatusList() { DARABONBA_PTR_GET(realServerStatusList_, vector<HealthCheckStatusList::RealServerStatusList>) };
      inline HealthCheckStatusList& setRealServerStatusList(const vector<HealthCheckStatusList::RealServerStatusList> & realServerStatusList) { DARABONBA_PTR_SET_VALUE(realServerStatusList_, realServerStatusList) };
      inline HealthCheckStatusList& setRealServerStatusList(vector<HealthCheckStatusList::RealServerStatusList> && realServerStatusList) { DARABONBA_PTR_SET_RVALUE(realServerStatusList_, realServerStatusList) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline HealthCheckStatusList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      shared_ptr<int32_t> frontendPort_ {};
      shared_ptr<string> instanceId_ {};
      shared_ptr<string> protocol_ {};
      shared_ptr<vector<HealthCheckStatusList::RealServerStatusList>> realServerStatusList_ {};
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->healthCheckStatusList_ == nullptr
        && this->requestId_ == nullptr; };
    // healthCheckStatusList Field Functions 
    bool hasHealthCheckStatusList() const { return this->healthCheckStatusList_ != nullptr;};
    void deleteHealthCheckStatusList() { this->healthCheckStatusList_ = nullptr;};
    inline const vector<DescribeHealthCheckStatusListResponseBody::HealthCheckStatusList> & getHealthCheckStatusList() const { DARABONBA_PTR_GET_CONST(healthCheckStatusList_, vector<DescribeHealthCheckStatusListResponseBody::HealthCheckStatusList>) };
    inline vector<DescribeHealthCheckStatusListResponseBody::HealthCheckStatusList> getHealthCheckStatusList() { DARABONBA_PTR_GET(healthCheckStatusList_, vector<DescribeHealthCheckStatusListResponseBody::HealthCheckStatusList>) };
    inline DescribeHealthCheckStatusListResponseBody& setHealthCheckStatusList(const vector<DescribeHealthCheckStatusListResponseBody::HealthCheckStatusList> & healthCheckStatusList) { DARABONBA_PTR_SET_VALUE(healthCheckStatusList_, healthCheckStatusList) };
    inline DescribeHealthCheckStatusListResponseBody& setHealthCheckStatusList(vector<DescribeHealthCheckStatusListResponseBody::HealthCheckStatusList> && healthCheckStatusList) { DARABONBA_PTR_SET_RVALUE(healthCheckStatusList_, healthCheckStatusList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeHealthCheckStatusListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<DescribeHealthCheckStatusListResponseBody::HealthCheckStatusList>> healthCheckStatusList_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20171228
#endif
