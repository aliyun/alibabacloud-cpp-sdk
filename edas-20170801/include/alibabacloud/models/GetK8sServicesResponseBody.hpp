// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETK8SSERVICESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETK8SSERVICESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class GetK8sServicesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetK8sServicesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Services, services_);
    };
    friend void from_json(const Darabonba::Json& j, GetK8sServicesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Services, services_);
    };
    GetK8sServicesResponseBody() = default ;
    GetK8sServicesResponseBody(const GetK8sServicesResponseBody &) = default ;
    GetK8sServicesResponseBody(GetK8sServicesResponseBody &&) = default ;
    GetK8sServicesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetK8sServicesResponseBody() = default ;
    GetK8sServicesResponseBody& operator=(const GetK8sServicesResponseBody &) = default ;
    GetK8sServicesResponseBody& operator=(GetK8sServicesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Services : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Services& obj) { 
        DARABONBA_PTR_TO_JSON(ClusterIP, clusterIP_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(ServicePorts, servicePorts_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, Services& obj) { 
        DARABONBA_PTR_FROM_JSON(ClusterIP, clusterIP_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(ServicePorts, servicePorts_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      Services() = default ;
      Services(const Services &) = default ;
      Services(Services &&) = default ;
      Services(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Services() = default ;
      Services& operator=(const Services &) = default ;
      Services& operator=(Services &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ServicePorts : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ServicePorts& obj) { 
          DARABONBA_PTR_TO_JSON(NodePort, nodePort_);
          DARABONBA_PTR_TO_JSON(Port, port_);
          DARABONBA_PTR_TO_JSON(Protocol, protocol_);
          DARABONBA_PTR_TO_JSON(TargetPort, targetPort_);
        };
        friend void from_json(const Darabonba::Json& j, ServicePorts& obj) { 
          DARABONBA_PTR_FROM_JSON(NodePort, nodePort_);
          DARABONBA_PTR_FROM_JSON(Port, port_);
          DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
          DARABONBA_PTR_FROM_JSON(TargetPort, targetPort_);
        };
        ServicePorts() = default ;
        ServicePorts(const ServicePorts &) = default ;
        ServicePorts(ServicePorts &&) = default ;
        ServicePorts(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ServicePorts() = default ;
        ServicePorts& operator=(const ServicePorts &) = default ;
        ServicePorts& operator=(ServicePorts &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->nodePort_ == nullptr
        && this->port_ == nullptr && this->protocol_ == nullptr && this->targetPort_ == nullptr; };
        // nodePort Field Functions 
        bool hasNodePort() const { return this->nodePort_ != nullptr;};
        void deleteNodePort() { this->nodePort_ = nullptr;};
        inline int32_t getNodePort() const { DARABONBA_PTR_GET_DEFAULT(nodePort_, 0) };
        inline ServicePorts& setNodePort(int32_t nodePort) { DARABONBA_PTR_SET_VALUE(nodePort_, nodePort) };


        // port Field Functions 
        bool hasPort() const { return this->port_ != nullptr;};
        void deletePort() { this->port_ = nullptr;};
        inline int32_t getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
        inline ServicePorts& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


        // protocol Field Functions 
        bool hasProtocol() const { return this->protocol_ != nullptr;};
        void deleteProtocol() { this->protocol_ = nullptr;};
        inline string getProtocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
        inline ServicePorts& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


        // targetPort Field Functions 
        bool hasTargetPort() const { return this->targetPort_ != nullptr;};
        void deleteTargetPort() { this->targetPort_ = nullptr;};
        inline string getTargetPort() const { DARABONBA_PTR_GET_DEFAULT(targetPort_, "") };
        inline ServicePorts& setTargetPort(string targetPort) { DARABONBA_PTR_SET_VALUE(targetPort_, targetPort) };


      protected:
        // The node port.
        shared_ptr<int32_t> nodePort_ {};
        // The frontend service port.
        shared_ptr<int32_t> port_ {};
        // The service protocol.
        shared_ptr<string> protocol_ {};
        // The backend container port.
        shared_ptr<string> targetPort_ {};
      };

      virtual bool empty() const override { return this->clusterIP_ == nullptr
        && this->name_ == nullptr && this->servicePorts_ == nullptr && this->type_ == nullptr; };
      // clusterIP Field Functions 
      bool hasClusterIP() const { return this->clusterIP_ != nullptr;};
      void deleteClusterIP() { this->clusterIP_ = nullptr;};
      inline string getClusterIP() const { DARABONBA_PTR_GET_DEFAULT(clusterIP_, "") };
      inline Services& setClusterIP(string clusterIP) { DARABONBA_PTR_SET_VALUE(clusterIP_, clusterIP) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Services& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // servicePorts Field Functions 
      bool hasServicePorts() const { return this->servicePorts_ != nullptr;};
      void deleteServicePorts() { this->servicePorts_ = nullptr;};
      inline const vector<Services::ServicePorts> & getServicePorts() const { DARABONBA_PTR_GET_CONST(servicePorts_, vector<Services::ServicePorts>) };
      inline vector<Services::ServicePorts> getServicePorts() { DARABONBA_PTR_GET(servicePorts_, vector<Services::ServicePorts>) };
      inline Services& setServicePorts(const vector<Services::ServicePorts> & servicePorts) { DARABONBA_PTR_SET_VALUE(servicePorts_, servicePorts) };
      inline Services& setServicePorts(vector<Services::ServicePorts> && servicePorts) { DARABONBA_PTR_SET_RVALUE(servicePorts_, servicePorts) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Services& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // The IP address of the Kubernetes Service.
      shared_ptr<string> clusterIP_ {};
      // The service name.
      shared_ptr<string> name_ {};
      // The list of port mappings.
      shared_ptr<vector<Services::ServicePorts>> servicePorts_ {};
      // The service type.
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->services_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline GetK8sServicesResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetK8sServicesResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetK8sServicesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // services Field Functions 
    bool hasServices() const { return this->services_ != nullptr;};
    void deleteServices() { this->services_ = nullptr;};
    inline const vector<GetK8sServicesResponseBody::Services> & getServices() const { DARABONBA_PTR_GET_CONST(services_, vector<GetK8sServicesResponseBody::Services>) };
    inline vector<GetK8sServicesResponseBody::Services> getServices() { DARABONBA_PTR_GET(services_, vector<GetK8sServicesResponseBody::Services>) };
    inline GetK8sServicesResponseBody& setServices(const vector<GetK8sServicesResponseBody::Services> & services) { DARABONBA_PTR_SET_VALUE(services_, services) };
    inline GetK8sServicesResponseBody& setServices(vector<GetK8sServicesResponseBody::Services> && services) { DARABONBA_PTR_SET_RVALUE(services_, services) };


  protected:
    // The HTTP status code.
    shared_ptr<int32_t> code_ {};
    // Additional information.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The list of Kubernetes Services.
    shared_ptr<vector<GetK8sServicesResponseBody::Services>> services_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
