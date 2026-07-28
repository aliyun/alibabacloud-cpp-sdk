// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYAPPLICATIONENDPOINTADDRESSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYAPPLICATIONENDPOINTADDRESSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class ModifyApplicationEndpointAddressRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyApplicationEndpointAddressRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_TO_JSON(EndpointId, endpointId_);
      DARABONBA_PTR_TO_JSON(NetType, netType_);
      DARABONBA_PTR_TO_JSON(NewConnectionStringPrefix, newConnectionStringPrefix_);
      DARABONBA_PTR_TO_JSON(NewPorts, newPorts_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyApplicationEndpointAddressRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_FROM_JSON(EndpointId, endpointId_);
      DARABONBA_PTR_FROM_JSON(NetType, netType_);
      DARABONBA_PTR_FROM_JSON(NewConnectionStringPrefix, newConnectionStringPrefix_);
      DARABONBA_PTR_FROM_JSON(NewPorts, newPorts_);
    };
    ModifyApplicationEndpointAddressRequest() = default ;
    ModifyApplicationEndpointAddressRequest(const ModifyApplicationEndpointAddressRequest &) = default ;
    ModifyApplicationEndpointAddressRequest(ModifyApplicationEndpointAddressRequest &&) = default ;
    ModifyApplicationEndpointAddressRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyApplicationEndpointAddressRequest() = default ;
    ModifyApplicationEndpointAddressRequest& operator=(const ModifyApplicationEndpointAddressRequest &) = default ;
    ModifyApplicationEndpointAddressRequest& operator=(ModifyApplicationEndpointAddressRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class NewPorts : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const NewPorts& obj) { 
        DARABONBA_PTR_TO_JSON(NewPort, newPort_);
        DARABONBA_PTR_TO_JSON(OldPort, oldPort_);
        DARABONBA_PTR_TO_JSON(PortName, portName_);
      };
      friend void from_json(const Darabonba::Json& j, NewPorts& obj) { 
        DARABONBA_PTR_FROM_JSON(NewPort, newPort_);
        DARABONBA_PTR_FROM_JSON(OldPort, oldPort_);
        DARABONBA_PTR_FROM_JSON(PortName, portName_);
      };
      NewPorts() = default ;
      NewPorts(const NewPorts &) = default ;
      NewPorts(NewPorts &&) = default ;
      NewPorts(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~NewPorts() = default ;
      NewPorts& operator=(const NewPorts &) = default ;
      NewPorts& operator=(NewPorts &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->newPort_ == nullptr
        && this->oldPort_ == nullptr && this->portName_ == nullptr; };
      // newPort Field Functions 
      bool hasNewPort() const { return this->newPort_ != nullptr;};
      void deleteNewPort() { this->newPort_ = nullptr;};
      inline int32_t getNewPort() const { DARABONBA_PTR_GET_DEFAULT(newPort_, 0) };
      inline NewPorts& setNewPort(int32_t newPort) { DARABONBA_PTR_SET_VALUE(newPort_, newPort) };


      // oldPort Field Functions 
      bool hasOldPort() const { return this->oldPort_ != nullptr;};
      void deleteOldPort() { this->oldPort_ = nullptr;};
      inline int32_t getOldPort() const { DARABONBA_PTR_GET_DEFAULT(oldPort_, 0) };
      inline NewPorts& setOldPort(int32_t oldPort) { DARABONBA_PTR_SET_VALUE(oldPort_, oldPort) };


      // portName Field Functions 
      bool hasPortName() const { return this->portName_ != nullptr;};
      void deletePortName() { this->portName_ = nullptr;};
      inline string getPortName() const { DARABONBA_PTR_GET_DEFAULT(portName_, "") };
      inline NewPorts& setPortName(string portName) { DARABONBA_PTR_SET_VALUE(portName_, portName) };


    protected:
      // The new port value.
      shared_ptr<int32_t> newPort_ {};
      // The old port value.
      shared_ptr<int32_t> oldPort_ {};
      // The port name.
      shared_ptr<string> portName_ {};
    };

    virtual bool empty() const override { return this->applicationId_ == nullptr
        && this->endpointId_ == nullptr && this->netType_ == nullptr && this->newConnectionStringPrefix_ == nullptr && this->newPorts_ == nullptr; };
    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string getApplicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline ModifyApplicationEndpointAddressRequest& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // endpointId Field Functions 
    bool hasEndpointId() const { return this->endpointId_ != nullptr;};
    void deleteEndpointId() { this->endpointId_ = nullptr;};
    inline string getEndpointId() const { DARABONBA_PTR_GET_DEFAULT(endpointId_, "") };
    inline ModifyApplicationEndpointAddressRequest& setEndpointId(string endpointId) { DARABONBA_PTR_SET_VALUE(endpointId_, endpointId) };


    // netType Field Functions 
    bool hasNetType() const { return this->netType_ != nullptr;};
    void deleteNetType() { this->netType_ = nullptr;};
    inline string getNetType() const { DARABONBA_PTR_GET_DEFAULT(netType_, "") };
    inline ModifyApplicationEndpointAddressRequest& setNetType(string netType) { DARABONBA_PTR_SET_VALUE(netType_, netType) };


    // newConnectionStringPrefix Field Functions 
    bool hasNewConnectionStringPrefix() const { return this->newConnectionStringPrefix_ != nullptr;};
    void deleteNewConnectionStringPrefix() { this->newConnectionStringPrefix_ = nullptr;};
    inline string getNewConnectionStringPrefix() const { DARABONBA_PTR_GET_DEFAULT(newConnectionStringPrefix_, "") };
    inline ModifyApplicationEndpointAddressRequest& setNewConnectionStringPrefix(string newConnectionStringPrefix) { DARABONBA_PTR_SET_VALUE(newConnectionStringPrefix_, newConnectionStringPrefix) };


    // newPorts Field Functions 
    bool hasNewPorts() const { return this->newPorts_ != nullptr;};
    void deleteNewPorts() { this->newPorts_ = nullptr;};
    inline const vector<ModifyApplicationEndpointAddressRequest::NewPorts> & getNewPorts() const { DARABONBA_PTR_GET_CONST(newPorts_, vector<ModifyApplicationEndpointAddressRequest::NewPorts>) };
    inline vector<ModifyApplicationEndpointAddressRequest::NewPorts> getNewPorts() { DARABONBA_PTR_GET(newPorts_, vector<ModifyApplicationEndpointAddressRequest::NewPorts>) };
    inline ModifyApplicationEndpointAddressRequest& setNewPorts(const vector<ModifyApplicationEndpointAddressRequest::NewPorts> & newPorts) { DARABONBA_PTR_SET_VALUE(newPorts_, newPorts) };
    inline ModifyApplicationEndpointAddressRequest& setNewPorts(vector<ModifyApplicationEndpointAddressRequest::NewPorts> && newPorts) { DARABONBA_PTR_SET_RVALUE(newPorts_, newPorts) };


  protected:
    // The application ID.
    // 
    // This parameter is required.
    shared_ptr<string> applicationId_ {};
    // The endpoint ID.
    // 
    // This parameter is required.
    shared_ptr<string> endpointId_ {};
    // The network type of the endpoint address. Valid values: 
    // 
    // * **Public**: public network.
    // * **Private**: private network.
    // 
    // This parameter is required.
    shared_ptr<string> netType_ {};
    // The new endpoint prefix.
    shared_ptr<string> newConnectionStringPrefix_ {};
    // The list of new ports.
    shared_ptr<vector<ModifyApplicationEndpointAddressRequest::NewPorts>> newPorts_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
