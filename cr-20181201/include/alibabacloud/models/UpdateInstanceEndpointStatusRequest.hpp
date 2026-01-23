// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEINSTANCEENDPOINTSTATUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEINSTANCEENDPOINTSTATUSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cr20181201
{
namespace Models
{
  class UpdateInstanceEndpointStatusRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateInstanceEndpointStatusRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Enable, enable_);
      DARABONBA_PTR_TO_JSON(EndpointType, endpointType_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(ModuleName, moduleName_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateInstanceEndpointStatusRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Enable, enable_);
      DARABONBA_PTR_FROM_JSON(EndpointType, endpointType_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(ModuleName, moduleName_);
    };
    UpdateInstanceEndpointStatusRequest() = default ;
    UpdateInstanceEndpointStatusRequest(const UpdateInstanceEndpointStatusRequest &) = default ;
    UpdateInstanceEndpointStatusRequest(UpdateInstanceEndpointStatusRequest &&) = default ;
    UpdateInstanceEndpointStatusRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateInstanceEndpointStatusRequest() = default ;
    UpdateInstanceEndpointStatusRequest& operator=(const UpdateInstanceEndpointStatusRequest &) = default ;
    UpdateInstanceEndpointStatusRequest& operator=(UpdateInstanceEndpointStatusRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->enable_ == nullptr
        && this->endpointType_ == nullptr && this->instanceId_ == nullptr && this->moduleName_ == nullptr; };
    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline bool getEnable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
    inline UpdateInstanceEndpointStatusRequest& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


    // endpointType Field Functions 
    bool hasEndpointType() const { return this->endpointType_ != nullptr;};
    void deleteEndpointType() { this->endpointType_ = nullptr;};
    inline string getEndpointType() const { DARABONBA_PTR_GET_DEFAULT(endpointType_, "") };
    inline UpdateInstanceEndpointStatusRequest& setEndpointType(string endpointType) { DARABONBA_PTR_SET_VALUE(endpointType_, endpointType) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline UpdateInstanceEndpointStatusRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // moduleName Field Functions 
    bool hasModuleName() const { return this->moduleName_ != nullptr;};
    void deleteModuleName() { this->moduleName_ = nullptr;};
    inline string getModuleName() const { DARABONBA_PTR_GET_DEFAULT(moduleName_, "") };
    inline UpdateInstanceEndpointStatusRequest& setModuleName(string moduleName) { DARABONBA_PTR_SET_VALUE(moduleName_, moduleName) };


  protected:
    // Specifies whether to enable the instance endpoint. Valid values:
    // 
    // *   `true`: enables the instance endpoint.
    // *   `false`: disables the instance endpoint
    // 
    // This parameter is required.
    shared_ptr<bool> enable_ {};
    // The type of the endpoint. Set the value to Internet.
    // 
    // This parameter is required.
    shared_ptr<string> endpointType_ {};
    // The ID of the instance.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The name of the module that you want to access. Valid values:
    // 
    // *   `Registry`: the image repository.
    // *   `Chart`: a Helm chart.
    shared_ptr<string> moduleName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cr20181201
#endif
