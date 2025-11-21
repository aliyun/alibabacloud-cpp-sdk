// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateInstanceRequestComponents.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Milvus20231012
{
namespace Models
{
  class UpdateInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(autoBackup, autoBackup_);
      DARABONBA_PTR_TO_JSON(components, components_);
      DARABONBA_PTR_TO_JSON(configuration, configuration_);
      DARABONBA_PTR_TO_JSON(ha, ha_);
      DARABONBA_PTR_TO_JSON(instanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(instanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(clientToken, clientToken_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(autoBackup, autoBackup_);
      DARABONBA_PTR_FROM_JSON(components, components_);
      DARABONBA_PTR_FROM_JSON(configuration, configuration_);
      DARABONBA_PTR_FROM_JSON(ha, ha_);
      DARABONBA_PTR_FROM_JSON(instanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(instanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(clientToken, clientToken_);
    };
    UpdateInstanceRequest() = default ;
    UpdateInstanceRequest(const UpdateInstanceRequest &) = default ;
    UpdateInstanceRequest(UpdateInstanceRequest &&) = default ;
    UpdateInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateInstanceRequest() = default ;
    UpdateInstanceRequest& operator=(const UpdateInstanceRequest &) = default ;
    UpdateInstanceRequest& operator=(UpdateInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->regionId_ == nullptr
        && return this->autoBackup_ == nullptr && return this->components_ == nullptr && return this->configuration_ == nullptr && return this->ha_ == nullptr && return this->instanceId_ == nullptr
        && return this->instanceName_ == nullptr && return this->clientToken_ == nullptr; };
    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdateInstanceRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // autoBackup Field Functions 
    bool hasAutoBackup() const { return this->autoBackup_ != nullptr;};
    void deleteAutoBackup() { this->autoBackup_ = nullptr;};
    inline bool autoBackup() const { DARABONBA_PTR_GET_DEFAULT(autoBackup_, false) };
    inline UpdateInstanceRequest& setAutoBackup(bool autoBackup) { DARABONBA_PTR_SET_VALUE(autoBackup_, autoBackup) };


    // components Field Functions 
    bool hasComponents() const { return this->components_ != nullptr;};
    void deleteComponents() { this->components_ = nullptr;};
    inline const vector<UpdateInstanceRequestComponents> & components() const { DARABONBA_PTR_GET_CONST(components_, vector<UpdateInstanceRequestComponents>) };
    inline vector<UpdateInstanceRequestComponents> components() { DARABONBA_PTR_GET(components_, vector<UpdateInstanceRequestComponents>) };
    inline UpdateInstanceRequest& setComponents(const vector<UpdateInstanceRequestComponents> & components) { DARABONBA_PTR_SET_VALUE(components_, components) };
    inline UpdateInstanceRequest& setComponents(vector<UpdateInstanceRequestComponents> && components) { DARABONBA_PTR_SET_RVALUE(components_, components) };


    // configuration Field Functions 
    bool hasConfiguration() const { return this->configuration_ != nullptr;};
    void deleteConfiguration() { this->configuration_ = nullptr;};
    inline string configuration() const { DARABONBA_PTR_GET_DEFAULT(configuration_, "") };
    inline UpdateInstanceRequest& setConfiguration(string configuration) { DARABONBA_PTR_SET_VALUE(configuration_, configuration) };


    // ha Field Functions 
    bool hasHa() const { return this->ha_ != nullptr;};
    void deleteHa() { this->ha_ = nullptr;};
    inline bool ha() const { DARABONBA_PTR_GET_DEFAULT(ha_, false) };
    inline UpdateInstanceRequest& setHa(bool ha) { DARABONBA_PTR_SET_VALUE(ha_, ha) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline UpdateInstanceRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string instanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline UpdateInstanceRequest& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateInstanceRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


  protected:
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<bool> autoBackup_ = nullptr;
    std::shared_ptr<vector<UpdateInstanceRequestComponents>> components_ = nullptr;
    std::shared_ptr<string> configuration_ = nullptr;
    std::shared_ptr<bool> ha_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> instanceName_ = nullptr;
    std::shared_ptr<string> clientToken_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Milvus20231012
#endif
