// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEEDGEFUNCTIONSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEEDGEFUNCTIONSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RdsAi20250507
{
namespace Models
{
  class UpdateEdgeFunctionShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateEdgeFunctionShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Code, codeShrink_);
      DARABONBA_PTR_TO_JSON(CustomConfig, customConfigShrink_);
      DARABONBA_PTR_TO_JSON(EdgeFunctionName, edgeFunctionName_);
      DARABONBA_PTR_TO_JSON(Envs, envsShrink_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateEdgeFunctionShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Code, codeShrink_);
      DARABONBA_PTR_FROM_JSON(CustomConfig, customConfigShrink_);
      DARABONBA_PTR_FROM_JSON(EdgeFunctionName, edgeFunctionName_);
      DARABONBA_PTR_FROM_JSON(Envs, envsShrink_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    UpdateEdgeFunctionShrinkRequest() = default ;
    UpdateEdgeFunctionShrinkRequest(const UpdateEdgeFunctionShrinkRequest &) = default ;
    UpdateEdgeFunctionShrinkRequest(UpdateEdgeFunctionShrinkRequest &&) = default ;
    UpdateEdgeFunctionShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateEdgeFunctionShrinkRequest() = default ;
    UpdateEdgeFunctionShrinkRequest& operator=(const UpdateEdgeFunctionShrinkRequest &) = default ;
    UpdateEdgeFunctionShrinkRequest& operator=(UpdateEdgeFunctionShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->codeShrink_ == nullptr && this->customConfigShrink_ == nullptr && this->edgeFunctionName_ == nullptr && this->envsShrink_ == nullptr && this->instanceName_ == nullptr
        && this->regionId_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateEdgeFunctionShrinkRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // codeShrink Field Functions 
    bool hasCodeShrink() const { return this->codeShrink_ != nullptr;};
    void deleteCodeShrink() { this->codeShrink_ = nullptr;};
    inline string getCodeShrink() const { DARABONBA_PTR_GET_DEFAULT(codeShrink_, "") };
    inline UpdateEdgeFunctionShrinkRequest& setCodeShrink(string codeShrink) { DARABONBA_PTR_SET_VALUE(codeShrink_, codeShrink) };


    // customConfigShrink Field Functions 
    bool hasCustomConfigShrink() const { return this->customConfigShrink_ != nullptr;};
    void deleteCustomConfigShrink() { this->customConfigShrink_ = nullptr;};
    inline string getCustomConfigShrink() const { DARABONBA_PTR_GET_DEFAULT(customConfigShrink_, "") };
    inline UpdateEdgeFunctionShrinkRequest& setCustomConfigShrink(string customConfigShrink) { DARABONBA_PTR_SET_VALUE(customConfigShrink_, customConfigShrink) };


    // edgeFunctionName Field Functions 
    bool hasEdgeFunctionName() const { return this->edgeFunctionName_ != nullptr;};
    void deleteEdgeFunctionName() { this->edgeFunctionName_ = nullptr;};
    inline string getEdgeFunctionName() const { DARABONBA_PTR_GET_DEFAULT(edgeFunctionName_, "") };
    inline UpdateEdgeFunctionShrinkRequest& setEdgeFunctionName(string edgeFunctionName) { DARABONBA_PTR_SET_VALUE(edgeFunctionName_, edgeFunctionName) };


    // envsShrink Field Functions 
    bool hasEnvsShrink() const { return this->envsShrink_ != nullptr;};
    void deleteEnvsShrink() { this->envsShrink_ = nullptr;};
    inline string getEnvsShrink() const { DARABONBA_PTR_GET_DEFAULT(envsShrink_, "") };
    inline UpdateEdgeFunctionShrinkRequest& setEnvsShrink(string envsShrink) { DARABONBA_PTR_SET_VALUE(envsShrink_, envsShrink) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline UpdateEdgeFunctionShrinkRequest& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdateEdgeFunctionShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    shared_ptr<string> clientToken_ {};
    shared_ptr<string> codeShrink_ {};
    shared_ptr<string> customConfigShrink_ {};
    // fc-xxxx。
    shared_ptr<string> edgeFunctionName_ {};
    shared_ptr<string> envsShrink_ {};
    // This parameter is required.
    shared_ptr<string> instanceName_ {};
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RdsAi20250507
#endif
