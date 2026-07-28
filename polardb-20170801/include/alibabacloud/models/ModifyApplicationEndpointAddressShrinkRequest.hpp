// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYAPPLICATIONENDPOINTADDRESSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYAPPLICATIONENDPOINTADDRESSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class ModifyApplicationEndpointAddressShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyApplicationEndpointAddressShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_TO_JSON(EndpointId, endpointId_);
      DARABONBA_PTR_TO_JSON(NetType, netType_);
      DARABONBA_PTR_TO_JSON(NewConnectionStringPrefix, newConnectionStringPrefix_);
      DARABONBA_PTR_TO_JSON(NewPorts, newPortsShrink_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyApplicationEndpointAddressShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_FROM_JSON(EndpointId, endpointId_);
      DARABONBA_PTR_FROM_JSON(NetType, netType_);
      DARABONBA_PTR_FROM_JSON(NewConnectionStringPrefix, newConnectionStringPrefix_);
      DARABONBA_PTR_FROM_JSON(NewPorts, newPortsShrink_);
    };
    ModifyApplicationEndpointAddressShrinkRequest() = default ;
    ModifyApplicationEndpointAddressShrinkRequest(const ModifyApplicationEndpointAddressShrinkRequest &) = default ;
    ModifyApplicationEndpointAddressShrinkRequest(ModifyApplicationEndpointAddressShrinkRequest &&) = default ;
    ModifyApplicationEndpointAddressShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyApplicationEndpointAddressShrinkRequest() = default ;
    ModifyApplicationEndpointAddressShrinkRequest& operator=(const ModifyApplicationEndpointAddressShrinkRequest &) = default ;
    ModifyApplicationEndpointAddressShrinkRequest& operator=(ModifyApplicationEndpointAddressShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicationId_ == nullptr
        && this->endpointId_ == nullptr && this->netType_ == nullptr && this->newConnectionStringPrefix_ == nullptr && this->newPortsShrink_ == nullptr; };
    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string getApplicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline ModifyApplicationEndpointAddressShrinkRequest& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // endpointId Field Functions 
    bool hasEndpointId() const { return this->endpointId_ != nullptr;};
    void deleteEndpointId() { this->endpointId_ = nullptr;};
    inline string getEndpointId() const { DARABONBA_PTR_GET_DEFAULT(endpointId_, "") };
    inline ModifyApplicationEndpointAddressShrinkRequest& setEndpointId(string endpointId) { DARABONBA_PTR_SET_VALUE(endpointId_, endpointId) };


    // netType Field Functions 
    bool hasNetType() const { return this->netType_ != nullptr;};
    void deleteNetType() { this->netType_ = nullptr;};
    inline string getNetType() const { DARABONBA_PTR_GET_DEFAULT(netType_, "") };
    inline ModifyApplicationEndpointAddressShrinkRequest& setNetType(string netType) { DARABONBA_PTR_SET_VALUE(netType_, netType) };


    // newConnectionStringPrefix Field Functions 
    bool hasNewConnectionStringPrefix() const { return this->newConnectionStringPrefix_ != nullptr;};
    void deleteNewConnectionStringPrefix() { this->newConnectionStringPrefix_ = nullptr;};
    inline string getNewConnectionStringPrefix() const { DARABONBA_PTR_GET_DEFAULT(newConnectionStringPrefix_, "") };
    inline ModifyApplicationEndpointAddressShrinkRequest& setNewConnectionStringPrefix(string newConnectionStringPrefix) { DARABONBA_PTR_SET_VALUE(newConnectionStringPrefix_, newConnectionStringPrefix) };


    // newPortsShrink Field Functions 
    bool hasNewPortsShrink() const { return this->newPortsShrink_ != nullptr;};
    void deleteNewPortsShrink() { this->newPortsShrink_ = nullptr;};
    inline string getNewPortsShrink() const { DARABONBA_PTR_GET_DEFAULT(newPortsShrink_, "") };
    inline ModifyApplicationEndpointAddressShrinkRequest& setNewPortsShrink(string newPortsShrink) { DARABONBA_PTR_SET_VALUE(newPortsShrink_, newPortsShrink) };


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
    shared_ptr<string> newPortsShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
