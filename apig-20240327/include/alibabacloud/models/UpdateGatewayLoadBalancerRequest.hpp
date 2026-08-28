// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEGATEWAYLOADBALANCERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEGATEWAYLOADBALANCERREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class UpdateGatewayLoadBalancerRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateGatewayLoadBalancerRequest& obj) { 
      DARABONBA_PTR_TO_JSON(loadBalancerDTO, loadBalancerDTO_);
      DARABONBA_PTR_TO_JSON(option, option_);
      DARABONBA_PTR_TO_JSON(ports, ports_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateGatewayLoadBalancerRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(loadBalancerDTO, loadBalancerDTO_);
      DARABONBA_PTR_FROM_JSON(option, option_);
      DARABONBA_PTR_FROM_JSON(ports, ports_);
    };
    UpdateGatewayLoadBalancerRequest() = default ;
    UpdateGatewayLoadBalancerRequest(const UpdateGatewayLoadBalancerRequest &) = default ;
    UpdateGatewayLoadBalancerRequest(UpdateGatewayLoadBalancerRequest &&) = default ;
    UpdateGatewayLoadBalancerRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateGatewayLoadBalancerRequest() = default ;
    UpdateGatewayLoadBalancerRequest& operator=(const UpdateGatewayLoadBalancerRequest &) = default ;
    UpdateGatewayLoadBalancerRequest& operator=(UpdateGatewayLoadBalancerRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Ports : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Ports& obj) { 
        DARABONBA_PTR_TO_JSON(gatewayLoadBalancerPorts, gatewayLoadBalancerPorts_);
        DARABONBA_PTR_TO_JSON(type, type_);
      };
      friend void from_json(const Darabonba::Json& j, Ports& obj) { 
        DARABONBA_PTR_FROM_JSON(gatewayLoadBalancerPorts, gatewayLoadBalancerPorts_);
        DARABONBA_PTR_FROM_JSON(type, type_);
      };
      Ports() = default ;
      Ports(const Ports &) = default ;
      Ports(Ports &&) = default ;
      Ports(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Ports() = default ;
      Ports& operator=(const Ports &) = default ;
      Ports& operator=(Ports &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class GatewayLoadBalancerPorts : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const GatewayLoadBalancerPorts& obj) { 
          DARABONBA_PTR_TO_JSON(port, port_);
          DARABONBA_PTR_TO_JSON(protocol, protocol_);
        };
        friend void from_json(const Darabonba::Json& j, GatewayLoadBalancerPorts& obj) { 
          DARABONBA_PTR_FROM_JSON(port, port_);
          DARABONBA_PTR_FROM_JSON(protocol, protocol_);
        };
        GatewayLoadBalancerPorts() = default ;
        GatewayLoadBalancerPorts(const GatewayLoadBalancerPorts &) = default ;
        GatewayLoadBalancerPorts(GatewayLoadBalancerPorts &&) = default ;
        GatewayLoadBalancerPorts(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~GatewayLoadBalancerPorts() = default ;
        GatewayLoadBalancerPorts& operator=(const GatewayLoadBalancerPorts &) = default ;
        GatewayLoadBalancerPorts& operator=(GatewayLoadBalancerPorts &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->port_ == nullptr
        && this->protocol_ == nullptr; };
        // port Field Functions 
        bool hasPort() const { return this->port_ != nullptr;};
        void deletePort() { this->port_ = nullptr;};
        inline int32_t getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
        inline GatewayLoadBalancerPorts& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


        // protocol Field Functions 
        bool hasProtocol() const { return this->protocol_ != nullptr;};
        void deleteProtocol() { this->protocol_ = nullptr;};
        inline string getProtocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
        inline GatewayLoadBalancerPorts& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


      protected:
        shared_ptr<int32_t> port_ {};
        shared_ptr<string> protocol_ {};
      };

      virtual bool empty() const override { return this->gatewayLoadBalancerPorts_ == nullptr
        && this->type_ == nullptr; };
      // gatewayLoadBalancerPorts Field Functions 
      bool hasGatewayLoadBalancerPorts() const { return this->gatewayLoadBalancerPorts_ != nullptr;};
      void deleteGatewayLoadBalancerPorts() { this->gatewayLoadBalancerPorts_ = nullptr;};
      inline const vector<Ports::GatewayLoadBalancerPorts> & getGatewayLoadBalancerPorts() const { DARABONBA_PTR_GET_CONST(gatewayLoadBalancerPorts_, vector<Ports::GatewayLoadBalancerPorts>) };
      inline vector<Ports::GatewayLoadBalancerPorts> getGatewayLoadBalancerPorts() { DARABONBA_PTR_GET(gatewayLoadBalancerPorts_, vector<Ports::GatewayLoadBalancerPorts>) };
      inline Ports& setGatewayLoadBalancerPorts(const vector<Ports::GatewayLoadBalancerPorts> & gatewayLoadBalancerPorts) { DARABONBA_PTR_SET_VALUE(gatewayLoadBalancerPorts_, gatewayLoadBalancerPorts) };
      inline Ports& setGatewayLoadBalancerPorts(vector<Ports::GatewayLoadBalancerPorts> && gatewayLoadBalancerPorts) { DARABONBA_PTR_SET_RVALUE(gatewayLoadBalancerPorts_, gatewayLoadBalancerPorts) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Ports& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      shared_ptr<vector<Ports::GatewayLoadBalancerPorts>> gatewayLoadBalancerPorts_ {};
      shared_ptr<string> type_ {};
    };

    class LoadBalancerDTO : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const LoadBalancerDTO& obj) { 
        DARABONBA_PTR_TO_JSON(loadBalancerId, loadBalancerId_);
        DARABONBA_PTR_TO_JSON(loadBalancerType, loadBalancerType_);
        DARABONBA_PTR_TO_JSON(networkType, networkType_);
        DARABONBA_PTR_TO_JSON(serviceWeight, serviceWeight_);
        DARABONBA_PTR_TO_JSON(virtualServiceList, virtualServiceList_);
      };
      friend void from_json(const Darabonba::Json& j, LoadBalancerDTO& obj) { 
        DARABONBA_PTR_FROM_JSON(loadBalancerId, loadBalancerId_);
        DARABONBA_PTR_FROM_JSON(loadBalancerType, loadBalancerType_);
        DARABONBA_PTR_FROM_JSON(networkType, networkType_);
        DARABONBA_PTR_FROM_JSON(serviceWeight, serviceWeight_);
        DARABONBA_PTR_FROM_JSON(virtualServiceList, virtualServiceList_);
      };
      LoadBalancerDTO() = default ;
      LoadBalancerDTO(const LoadBalancerDTO &) = default ;
      LoadBalancerDTO(LoadBalancerDTO &&) = default ;
      LoadBalancerDTO(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~LoadBalancerDTO() = default ;
      LoadBalancerDTO& operator=(const LoadBalancerDTO &) = default ;
      LoadBalancerDTO& operator=(LoadBalancerDTO &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class VirtualServiceList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const VirtualServiceList& obj) { 
          DARABONBA_PTR_TO_JSON(port, port_);
          DARABONBA_PTR_TO_JSON(protocol, protocol_);
          DARABONBA_PTR_TO_JSON(virtualServiceGroupId, virtualServiceGroupId_);
          DARABONBA_PTR_TO_JSON(virtualServiceGroupName, virtualServiceGroupName_);
        };
        friend void from_json(const Darabonba::Json& j, VirtualServiceList& obj) { 
          DARABONBA_PTR_FROM_JSON(port, port_);
          DARABONBA_PTR_FROM_JSON(protocol, protocol_);
          DARABONBA_PTR_FROM_JSON(virtualServiceGroupId, virtualServiceGroupId_);
          DARABONBA_PTR_FROM_JSON(virtualServiceGroupName, virtualServiceGroupName_);
        };
        VirtualServiceList() = default ;
        VirtualServiceList(const VirtualServiceList &) = default ;
        VirtualServiceList(VirtualServiceList &&) = default ;
        VirtualServiceList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~VirtualServiceList() = default ;
        VirtualServiceList& operator=(const VirtualServiceList &) = default ;
        VirtualServiceList& operator=(VirtualServiceList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->port_ == nullptr
        && this->protocol_ == nullptr && this->virtualServiceGroupId_ == nullptr && this->virtualServiceGroupName_ == nullptr; };
        // port Field Functions 
        bool hasPort() const { return this->port_ != nullptr;};
        void deletePort() { this->port_ = nullptr;};
        inline int64_t getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, 0L) };
        inline VirtualServiceList& setPort(int64_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


        // protocol Field Functions 
        bool hasProtocol() const { return this->protocol_ != nullptr;};
        void deleteProtocol() { this->protocol_ = nullptr;};
        inline string getProtocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
        inline VirtualServiceList& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


        // virtualServiceGroupId Field Functions 
        bool hasVirtualServiceGroupId() const { return this->virtualServiceGroupId_ != nullptr;};
        void deleteVirtualServiceGroupId() { this->virtualServiceGroupId_ = nullptr;};
        inline string getVirtualServiceGroupId() const { DARABONBA_PTR_GET_DEFAULT(virtualServiceGroupId_, "") };
        inline VirtualServiceList& setVirtualServiceGroupId(string virtualServiceGroupId) { DARABONBA_PTR_SET_VALUE(virtualServiceGroupId_, virtualServiceGroupId) };


        // virtualServiceGroupName Field Functions 
        bool hasVirtualServiceGroupName() const { return this->virtualServiceGroupName_ != nullptr;};
        void deleteVirtualServiceGroupName() { this->virtualServiceGroupName_ = nullptr;};
        inline string getVirtualServiceGroupName() const { DARABONBA_PTR_GET_DEFAULT(virtualServiceGroupName_, "") };
        inline VirtualServiceList& setVirtualServiceGroupName(string virtualServiceGroupName) { DARABONBA_PTR_SET_VALUE(virtualServiceGroupName_, virtualServiceGroupName) };


      protected:
        shared_ptr<int64_t> port_ {};
        shared_ptr<string> protocol_ {};
        shared_ptr<string> virtualServiceGroupId_ {};
        shared_ptr<string> virtualServiceGroupName_ {};
      };

      virtual bool empty() const override { return this->loadBalancerId_ == nullptr
        && this->loadBalancerType_ == nullptr && this->networkType_ == nullptr && this->serviceWeight_ == nullptr && this->virtualServiceList_ == nullptr; };
      // loadBalancerId Field Functions 
      bool hasLoadBalancerId() const { return this->loadBalancerId_ != nullptr;};
      void deleteLoadBalancerId() { this->loadBalancerId_ = nullptr;};
      inline string getLoadBalancerId() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerId_, "") };
      inline LoadBalancerDTO& setLoadBalancerId(string loadBalancerId) { DARABONBA_PTR_SET_VALUE(loadBalancerId_, loadBalancerId) };


      // loadBalancerType Field Functions 
      bool hasLoadBalancerType() const { return this->loadBalancerType_ != nullptr;};
      void deleteLoadBalancerType() { this->loadBalancerType_ = nullptr;};
      inline string getLoadBalancerType() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerType_, "") };
      inline LoadBalancerDTO& setLoadBalancerType(string loadBalancerType) { DARABONBA_PTR_SET_VALUE(loadBalancerType_, loadBalancerType) };


      // networkType Field Functions 
      bool hasNetworkType() const { return this->networkType_ != nullptr;};
      void deleteNetworkType() { this->networkType_ = nullptr;};
      inline string getNetworkType() const { DARABONBA_PTR_GET_DEFAULT(networkType_, "") };
      inline LoadBalancerDTO& setNetworkType(string networkType) { DARABONBA_PTR_SET_VALUE(networkType_, networkType) };


      // serviceWeight Field Functions 
      bool hasServiceWeight() const { return this->serviceWeight_ != nullptr;};
      void deleteServiceWeight() { this->serviceWeight_ = nullptr;};
      inline int64_t getServiceWeight() const { DARABONBA_PTR_GET_DEFAULT(serviceWeight_, 0L) };
      inline LoadBalancerDTO& setServiceWeight(int64_t serviceWeight) { DARABONBA_PTR_SET_VALUE(serviceWeight_, serviceWeight) };


      // virtualServiceList Field Functions 
      bool hasVirtualServiceList() const { return this->virtualServiceList_ != nullptr;};
      void deleteVirtualServiceList() { this->virtualServiceList_ = nullptr;};
      inline const vector<LoadBalancerDTO::VirtualServiceList> & getVirtualServiceList() const { DARABONBA_PTR_GET_CONST(virtualServiceList_, vector<LoadBalancerDTO::VirtualServiceList>) };
      inline vector<LoadBalancerDTO::VirtualServiceList> getVirtualServiceList() { DARABONBA_PTR_GET(virtualServiceList_, vector<LoadBalancerDTO::VirtualServiceList>) };
      inline LoadBalancerDTO& setVirtualServiceList(const vector<LoadBalancerDTO::VirtualServiceList> & virtualServiceList) { DARABONBA_PTR_SET_VALUE(virtualServiceList_, virtualServiceList) };
      inline LoadBalancerDTO& setVirtualServiceList(vector<LoadBalancerDTO::VirtualServiceList> && virtualServiceList) { DARABONBA_PTR_SET_RVALUE(virtualServiceList_, virtualServiceList) };


    protected:
      shared_ptr<string> loadBalancerId_ {};
      shared_ptr<string> loadBalancerType_ {};
      shared_ptr<string> networkType_ {};
      shared_ptr<int64_t> serviceWeight_ {};
      shared_ptr<vector<LoadBalancerDTO::VirtualServiceList>> virtualServiceList_ {};
    };

    virtual bool empty() const override { return this->loadBalancerDTO_ == nullptr
        && this->option_ == nullptr && this->ports_ == nullptr; };
    // loadBalancerDTO Field Functions 
    bool hasLoadBalancerDTO() const { return this->loadBalancerDTO_ != nullptr;};
    void deleteLoadBalancerDTO() { this->loadBalancerDTO_ = nullptr;};
    inline const UpdateGatewayLoadBalancerRequest::LoadBalancerDTO & getLoadBalancerDTO() const { DARABONBA_PTR_GET_CONST(loadBalancerDTO_, UpdateGatewayLoadBalancerRequest::LoadBalancerDTO) };
    inline UpdateGatewayLoadBalancerRequest::LoadBalancerDTO getLoadBalancerDTO() { DARABONBA_PTR_GET(loadBalancerDTO_, UpdateGatewayLoadBalancerRequest::LoadBalancerDTO) };
    inline UpdateGatewayLoadBalancerRequest& setLoadBalancerDTO(const UpdateGatewayLoadBalancerRequest::LoadBalancerDTO & loadBalancerDTO) { DARABONBA_PTR_SET_VALUE(loadBalancerDTO_, loadBalancerDTO) };
    inline UpdateGatewayLoadBalancerRequest& setLoadBalancerDTO(UpdateGatewayLoadBalancerRequest::LoadBalancerDTO && loadBalancerDTO) { DARABONBA_PTR_SET_RVALUE(loadBalancerDTO_, loadBalancerDTO) };


    // option Field Functions 
    bool hasOption() const { return this->option_ != nullptr;};
    void deleteOption() { this->option_ = nullptr;};
    inline string getOption() const { DARABONBA_PTR_GET_DEFAULT(option_, "") };
    inline UpdateGatewayLoadBalancerRequest& setOption(string option) { DARABONBA_PTR_SET_VALUE(option_, option) };


    // ports Field Functions 
    bool hasPorts() const { return this->ports_ != nullptr;};
    void deletePorts() { this->ports_ = nullptr;};
    inline const vector<UpdateGatewayLoadBalancerRequest::Ports> & getPorts() const { DARABONBA_PTR_GET_CONST(ports_, vector<UpdateGatewayLoadBalancerRequest::Ports>) };
    inline vector<UpdateGatewayLoadBalancerRequest::Ports> getPorts() { DARABONBA_PTR_GET(ports_, vector<UpdateGatewayLoadBalancerRequest::Ports>) };
    inline UpdateGatewayLoadBalancerRequest& setPorts(const vector<UpdateGatewayLoadBalancerRequest::Ports> & ports) { DARABONBA_PTR_SET_VALUE(ports_, ports) };
    inline UpdateGatewayLoadBalancerRequest& setPorts(vector<UpdateGatewayLoadBalancerRequest::Ports> && ports) { DARABONBA_PTR_SET_RVALUE(ports_, ports) };


  protected:
    shared_ptr<UpdateGatewayLoadBalancerRequest::LoadBalancerDTO> loadBalancerDTO_ {};
    shared_ptr<string> option_ {};
    shared_ptr<vector<UpdateGatewayLoadBalancerRequest::Ports>> ports_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
