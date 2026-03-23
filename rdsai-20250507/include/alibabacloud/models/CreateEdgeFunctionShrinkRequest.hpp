// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEEDGEFUNCTIONSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEEDGEFUNCTIONSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RdsAi20250507
{
namespace Models
{
  class CreateEdgeFunctionShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateEdgeFunctionShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Code, codeShrink_);
      DARABONBA_PTR_TO_JSON(CustomConfig, customConfigShrink_);
      DARABONBA_PTR_TO_JSON(EdgeFunctionName, edgeFunctionName_);
      DARABONBA_PTR_TO_JSON(Envs, envsShrink_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateEdgeFunctionShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Code, codeShrink_);
      DARABONBA_PTR_FROM_JSON(CustomConfig, customConfigShrink_);
      DARABONBA_PTR_FROM_JSON(EdgeFunctionName, edgeFunctionName_);
      DARABONBA_PTR_FROM_JSON(Envs, envsShrink_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    CreateEdgeFunctionShrinkRequest() = default ;
    CreateEdgeFunctionShrinkRequest(const CreateEdgeFunctionShrinkRequest &) = default ;
    CreateEdgeFunctionShrinkRequest(CreateEdgeFunctionShrinkRequest &&) = default ;
    CreateEdgeFunctionShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateEdgeFunctionShrinkRequest() = default ;
    CreateEdgeFunctionShrinkRequest& operator=(const CreateEdgeFunctionShrinkRequest &) = default ;
    CreateEdgeFunctionShrinkRequest& operator=(CreateEdgeFunctionShrinkRequest &&) = default ;
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
    inline CreateEdgeFunctionShrinkRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // codeShrink Field Functions 
    bool hasCodeShrink() const { return this->codeShrink_ != nullptr;};
    void deleteCodeShrink() { this->codeShrink_ = nullptr;};
    inline string getCodeShrink() const { DARABONBA_PTR_GET_DEFAULT(codeShrink_, "") };
    inline CreateEdgeFunctionShrinkRequest& setCodeShrink(string codeShrink) { DARABONBA_PTR_SET_VALUE(codeShrink_, codeShrink) };


    // customConfigShrink Field Functions 
    bool hasCustomConfigShrink() const { return this->customConfigShrink_ != nullptr;};
    void deleteCustomConfigShrink() { this->customConfigShrink_ = nullptr;};
    inline string getCustomConfigShrink() const { DARABONBA_PTR_GET_DEFAULT(customConfigShrink_, "") };
    inline CreateEdgeFunctionShrinkRequest& setCustomConfigShrink(string customConfigShrink) { DARABONBA_PTR_SET_VALUE(customConfigShrink_, customConfigShrink) };


    // edgeFunctionName Field Functions 
    bool hasEdgeFunctionName() const { return this->edgeFunctionName_ != nullptr;};
    void deleteEdgeFunctionName() { this->edgeFunctionName_ = nullptr;};
    inline string getEdgeFunctionName() const { DARABONBA_PTR_GET_DEFAULT(edgeFunctionName_, "") };
    inline CreateEdgeFunctionShrinkRequest& setEdgeFunctionName(string edgeFunctionName) { DARABONBA_PTR_SET_VALUE(edgeFunctionName_, edgeFunctionName) };


    // envsShrink Field Functions 
    bool hasEnvsShrink() const { return this->envsShrink_ != nullptr;};
    void deleteEnvsShrink() { this->envsShrink_ = nullptr;};
    inline string getEnvsShrink() const { DARABONBA_PTR_GET_DEFAULT(envsShrink_, "") };
    inline CreateEdgeFunctionShrinkRequest& setEnvsShrink(string envsShrink) { DARABONBA_PTR_SET_VALUE(envsShrink_, envsShrink) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline CreateEdgeFunctionShrinkRequest& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateEdgeFunctionShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The client token that is used to ensure the idempotence of the request.
    shared_ptr<string> clientToken_ {};
    // The code parameters.
    shared_ptr<string> codeShrink_ {};
    // The configuration parameters of the edge function.
    shared_ptr<string> customConfigShrink_ {};
    // The name of the function.
    shared_ptr<string> edgeFunctionName_ {};
    // The environment variables.
    shared_ptr<string> envsShrink_ {};
    // The ID of the RDS Supabase instance.
    // 
    // This parameter is required.
    shared_ptr<string> instanceName_ {};
    // The region ID.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RdsAi20250507
#endif
