// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEGATEWAYLOADBALANCERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATEGATEWAYLOADBALANCERRESPONSEBODY_HPP_
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
  class UpdateGatewayLoadBalancerResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateGatewayLoadBalancerResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateGatewayLoadBalancerResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    UpdateGatewayLoadBalancerResponseBody() = default ;
    UpdateGatewayLoadBalancerResponseBody(const UpdateGatewayLoadBalancerResponseBody &) = default ;
    UpdateGatewayLoadBalancerResponseBody(UpdateGatewayLoadBalancerResponseBody &&) = default ;
    UpdateGatewayLoadBalancerResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateGatewayLoadBalancerResponseBody() = default ;
    UpdateGatewayLoadBalancerResponseBody& operator=(const UpdateGatewayLoadBalancerResponseBody &) = default ;
    UpdateGatewayLoadBalancerResponseBody& operator=(UpdateGatewayLoadBalancerResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(editEnable, editEnable_);
        DARABONBA_PTR_TO_JSON(loadBalancerAddress, loadBalancerAddress_);
        DARABONBA_PTR_TO_JSON(loadBalancerId, loadBalancerId_);
        DARABONBA_PTR_TO_JSON(loadBalancerName, loadBalancerName_);
        DARABONBA_PTR_TO_JSON(loadBalancerType, loadBalancerType_);
        DARABONBA_PTR_TO_JSON(networkType, networkType_);
        DARABONBA_PTR_TO_JSON(ports, ports_);
        DARABONBA_PTR_TO_JSON(serviceWeight, serviceWeight_);
        DARABONBA_PTR_TO_JSON(statusDescription, statusDescription_);
        DARABONBA_PTR_TO_JSON(virtualServiceList, virtualServiceList_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(editEnable, editEnable_);
        DARABONBA_PTR_FROM_JSON(loadBalancerAddress, loadBalancerAddress_);
        DARABONBA_PTR_FROM_JSON(loadBalancerId, loadBalancerId_);
        DARABONBA_PTR_FROM_JSON(loadBalancerName, loadBalancerName_);
        DARABONBA_PTR_FROM_JSON(loadBalancerType, loadBalancerType_);
        DARABONBA_PTR_FROM_JSON(networkType, networkType_);
        DARABONBA_PTR_FROM_JSON(ports, ports_);
        DARABONBA_PTR_FROM_JSON(serviceWeight, serviceWeight_);
        DARABONBA_PTR_FROM_JSON(statusDescription, statusDescription_);
        DARABONBA_PTR_FROM_JSON(virtualServiceList, virtualServiceList_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
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
        inline string getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, "") };
        inline VirtualServiceList& setPort(string port) { DARABONBA_PTR_SET_VALUE(port_, port) };


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
        shared_ptr<string> port_ {};
        shared_ptr<string> protocol_ {};
        shared_ptr<string> virtualServiceGroupId_ {};
        shared_ptr<string> virtualServiceGroupName_ {};
      };

      virtual bool empty() const override { return this->editEnable_ == nullptr
        && this->loadBalancerAddress_ == nullptr && this->loadBalancerId_ == nullptr && this->loadBalancerName_ == nullptr && this->loadBalancerType_ == nullptr && this->networkType_ == nullptr
        && this->ports_ == nullptr && this->serviceWeight_ == nullptr && this->statusDescription_ == nullptr && this->virtualServiceList_ == nullptr; };
      // editEnable Field Functions 
      bool hasEditEnable() const { return this->editEnable_ != nullptr;};
      void deleteEditEnable() { this->editEnable_ = nullptr;};
      inline bool getEditEnable() const { DARABONBA_PTR_GET_DEFAULT(editEnable_, false) };
      inline Data& setEditEnable(bool editEnable) { DARABONBA_PTR_SET_VALUE(editEnable_, editEnable) };


      // loadBalancerAddress Field Functions 
      bool hasLoadBalancerAddress() const { return this->loadBalancerAddress_ != nullptr;};
      void deleteLoadBalancerAddress() { this->loadBalancerAddress_ = nullptr;};
      inline string getLoadBalancerAddress() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerAddress_, "") };
      inline Data& setLoadBalancerAddress(string loadBalancerAddress) { DARABONBA_PTR_SET_VALUE(loadBalancerAddress_, loadBalancerAddress) };


      // loadBalancerId Field Functions 
      bool hasLoadBalancerId() const { return this->loadBalancerId_ != nullptr;};
      void deleteLoadBalancerId() { this->loadBalancerId_ = nullptr;};
      inline string getLoadBalancerId() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerId_, "") };
      inline Data& setLoadBalancerId(string loadBalancerId) { DARABONBA_PTR_SET_VALUE(loadBalancerId_, loadBalancerId) };


      // loadBalancerName Field Functions 
      bool hasLoadBalancerName() const { return this->loadBalancerName_ != nullptr;};
      void deleteLoadBalancerName() { this->loadBalancerName_ = nullptr;};
      inline string getLoadBalancerName() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerName_, "") };
      inline Data& setLoadBalancerName(string loadBalancerName) { DARABONBA_PTR_SET_VALUE(loadBalancerName_, loadBalancerName) };


      // loadBalancerType Field Functions 
      bool hasLoadBalancerType() const { return this->loadBalancerType_ != nullptr;};
      void deleteLoadBalancerType() { this->loadBalancerType_ = nullptr;};
      inline string getLoadBalancerType() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerType_, "") };
      inline Data& setLoadBalancerType(string loadBalancerType) { DARABONBA_PTR_SET_VALUE(loadBalancerType_, loadBalancerType) };


      // networkType Field Functions 
      bool hasNetworkType() const { return this->networkType_ != nullptr;};
      void deleteNetworkType() { this->networkType_ = nullptr;};
      inline string getNetworkType() const { DARABONBA_PTR_GET_DEFAULT(networkType_, "") };
      inline Data& setNetworkType(string networkType) { DARABONBA_PTR_SET_VALUE(networkType_, networkType) };


      // ports Field Functions 
      bool hasPorts() const { return this->ports_ != nullptr;};
      void deletePorts() { this->ports_ = nullptr;};
      inline const vector<int32_t> & getPorts() const { DARABONBA_PTR_GET_CONST(ports_, vector<int32_t>) };
      inline vector<int32_t> getPorts() { DARABONBA_PTR_GET(ports_, vector<int32_t>) };
      inline Data& setPorts(const vector<int32_t> & ports) { DARABONBA_PTR_SET_VALUE(ports_, ports) };
      inline Data& setPorts(vector<int32_t> && ports) { DARABONBA_PTR_SET_RVALUE(ports_, ports) };


      // serviceWeight Field Functions 
      bool hasServiceWeight() const { return this->serviceWeight_ != nullptr;};
      void deleteServiceWeight() { this->serviceWeight_ = nullptr;};
      inline int64_t getServiceWeight() const { DARABONBA_PTR_GET_DEFAULT(serviceWeight_, 0L) };
      inline Data& setServiceWeight(int64_t serviceWeight) { DARABONBA_PTR_SET_VALUE(serviceWeight_, serviceWeight) };


      // statusDescription Field Functions 
      bool hasStatusDescription() const { return this->statusDescription_ != nullptr;};
      void deleteStatusDescription() { this->statusDescription_ = nullptr;};
      inline string getStatusDescription() const { DARABONBA_PTR_GET_DEFAULT(statusDescription_, "") };
      inline Data& setStatusDescription(string statusDescription) { DARABONBA_PTR_SET_VALUE(statusDescription_, statusDescription) };


      // virtualServiceList Field Functions 
      bool hasVirtualServiceList() const { return this->virtualServiceList_ != nullptr;};
      void deleteVirtualServiceList() { this->virtualServiceList_ = nullptr;};
      inline const vector<Data::VirtualServiceList> & getVirtualServiceList() const { DARABONBA_PTR_GET_CONST(virtualServiceList_, vector<Data::VirtualServiceList>) };
      inline vector<Data::VirtualServiceList> getVirtualServiceList() { DARABONBA_PTR_GET(virtualServiceList_, vector<Data::VirtualServiceList>) };
      inline Data& setVirtualServiceList(const vector<Data::VirtualServiceList> & virtualServiceList) { DARABONBA_PTR_SET_VALUE(virtualServiceList_, virtualServiceList) };
      inline Data& setVirtualServiceList(vector<Data::VirtualServiceList> && virtualServiceList) { DARABONBA_PTR_SET_RVALUE(virtualServiceList_, virtualServiceList) };


    protected:
      shared_ptr<bool> editEnable_ {};
      shared_ptr<string> loadBalancerAddress_ {};
      shared_ptr<string> loadBalancerId_ {};
      shared_ptr<string> loadBalancerName_ {};
      shared_ptr<string> loadBalancerType_ {};
      shared_ptr<string> networkType_ {};
      shared_ptr<vector<int32_t>> ports_ {};
      shared_ptr<int64_t> serviceWeight_ {};
      shared_ptr<string> statusDescription_ {};
      shared_ptr<vector<Data::VirtualServiceList>> virtualServiceList_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline UpdateGatewayLoadBalancerResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const UpdateGatewayLoadBalancerResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, UpdateGatewayLoadBalancerResponseBody::Data) };
    inline UpdateGatewayLoadBalancerResponseBody::Data getData() { DARABONBA_PTR_GET(data_, UpdateGatewayLoadBalancerResponseBody::Data) };
    inline UpdateGatewayLoadBalancerResponseBody& setData(const UpdateGatewayLoadBalancerResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline UpdateGatewayLoadBalancerResponseBody& setData(UpdateGatewayLoadBalancerResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline UpdateGatewayLoadBalancerResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdateGatewayLoadBalancerResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<UpdateGatewayLoadBalancerResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
