// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYDATABASEINSTANCEPARAMETERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYDATABASEINSTANCEPARAMETERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SWASOPEN20200601
{
namespace Models
{
  class ModifyDatabaseInstanceParameterRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyDatabaseInstanceParameterRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DatabaseInstanceId, databaseInstanceId_);
      DARABONBA_PTR_TO_JSON(ForceRestart, forceRestart_);
      DARABONBA_PTR_TO_JSON(Parameters, parameters_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyDatabaseInstanceParameterRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DatabaseInstanceId, databaseInstanceId_);
      DARABONBA_PTR_FROM_JSON(ForceRestart, forceRestart_);
      DARABONBA_PTR_FROM_JSON(Parameters, parameters_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    ModifyDatabaseInstanceParameterRequest() = default ;
    ModifyDatabaseInstanceParameterRequest(const ModifyDatabaseInstanceParameterRequest &) = default ;
    ModifyDatabaseInstanceParameterRequest(ModifyDatabaseInstanceParameterRequest &&) = default ;
    ModifyDatabaseInstanceParameterRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyDatabaseInstanceParameterRequest() = default ;
    ModifyDatabaseInstanceParameterRequest& operator=(const ModifyDatabaseInstanceParameterRequest &) = default ;
    ModifyDatabaseInstanceParameterRequest& operator=(ModifyDatabaseInstanceParameterRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->databaseInstanceId_ == nullptr && this->forceRestart_ == nullptr && this->parameters_ == nullptr && this->regionId_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline ModifyDatabaseInstanceParameterRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // databaseInstanceId Field Functions 
    bool hasDatabaseInstanceId() const { return this->databaseInstanceId_ != nullptr;};
    void deleteDatabaseInstanceId() { this->databaseInstanceId_ = nullptr;};
    inline string getDatabaseInstanceId() const { DARABONBA_PTR_GET_DEFAULT(databaseInstanceId_, "") };
    inline ModifyDatabaseInstanceParameterRequest& setDatabaseInstanceId(string databaseInstanceId) { DARABONBA_PTR_SET_VALUE(databaseInstanceId_, databaseInstanceId) };


    // forceRestart Field Functions 
    bool hasForceRestart() const { return this->forceRestart_ != nullptr;};
    void deleteForceRestart() { this->forceRestart_ = nullptr;};
    inline bool getForceRestart() const { DARABONBA_PTR_GET_DEFAULT(forceRestart_, false) };
    inline ModifyDatabaseInstanceParameterRequest& setForceRestart(bool forceRestart) { DARABONBA_PTR_SET_VALUE(forceRestart_, forceRestart) };


    // parameters Field Functions 
    bool hasParameters() const { return this->parameters_ != nullptr;};
    void deleteParameters() { this->parameters_ = nullptr;};
    inline string getParameters() const { DARABONBA_PTR_GET_DEFAULT(parameters_, "") };
    inline ModifyDatabaseInstanceParameterRequest& setParameters(string parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyDatabaseInstanceParameterRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // A client-generated token to ensure request idempotence. You must ensure that the token is unique for each request. It can contain only ASCII characters and cannot be longer than 64 characters. For more information, see [How to ensure idempotence](https://help.aliyun.com/document_detail/25693.html).
    shared_ptr<string> clientToken_ {};
    // The ID of the database instance.
    // 
    // This parameter is required.
    shared_ptr<string> databaseInstanceId_ {};
    // Specifies whether to restart the database for the parameter changes to take effect. Valid values:
    // 
    // - true: Forces a restart. Set this to true if any modified parameter requires a restart to take effect. Otherwise, the change will not take effect.
    // 
    // - false: Do not force a restart.
    // 
    // Default value: false.
    shared_ptr<bool> forceRestart_ {};
    // A JSON string that specifies the database parameters and their values. The value for each parameter must be a string. Format: `{"ParameterName1":"Value1","ParameterName2":"Value2",...}`.
    // 
    // This parameter is required.
    shared_ptr<string> parameters_ {};
    // The region ID of the database instance. Call [ListRegions](https://help.aliyun.com/document_detail/189315.html) to view the supported Alibaba Cloud regions.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SWASOPEN20200601
#endif
