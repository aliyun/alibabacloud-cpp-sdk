// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYPARAMETERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYPARAMETERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class ModifyParameterRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyParameterRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(ParamLevel, paramLevel_);
      DARABONBA_PTR_TO_JSON(ParameterGroupId, parameterGroupId_);
      DARABONBA_PTR_TO_JSON(Parameters, parameters_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyParameterRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(ParamLevel, paramLevel_);
      DARABONBA_PTR_FROM_JSON(ParameterGroupId, parameterGroupId_);
      DARABONBA_PTR_FROM_JSON(Parameters, parameters_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    ModifyParameterRequest() = default ;
    ModifyParameterRequest(const ModifyParameterRequest &) = default ;
    ModifyParameterRequest(ModifyParameterRequest &&) = default ;
    ModifyParameterRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyParameterRequest() = default ;
    ModifyParameterRequest& operator=(const ModifyParameterRequest &) = default ;
    ModifyParameterRequest& operator=(ModifyParameterRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->DBInstanceId_ == nullptr && this->paramLevel_ == nullptr && this->parameterGroupId_ == nullptr && this->parameters_ == nullptr && this->regionId_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline ModifyParameterRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline ModifyParameterRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // paramLevel Field Functions 
    bool hasParamLevel() const { return this->paramLevel_ != nullptr;};
    void deleteParamLevel() { this->paramLevel_ = nullptr;};
    inline string getParamLevel() const { DARABONBA_PTR_GET_DEFAULT(paramLevel_, "") };
    inline ModifyParameterRequest& setParamLevel(string paramLevel) { DARABONBA_PTR_SET_VALUE(paramLevel_, paramLevel) };


    // parameterGroupId Field Functions 
    bool hasParameterGroupId() const { return this->parameterGroupId_ != nullptr;};
    void deleteParameterGroupId() { this->parameterGroupId_ = nullptr;};
    inline string getParameterGroupId() const { DARABONBA_PTR_GET_DEFAULT(parameterGroupId_, "") };
    inline ModifyParameterRequest& setParameterGroupId(string parameterGroupId) { DARABONBA_PTR_SET_VALUE(parameterGroupId_, parameterGroupId) };


    // parameters Field Functions 
    bool hasParameters() const { return this->parameters_ != nullptr;};
    void deleteParameters() { this->parameters_ = nullptr;};
    inline string getParameters() const { DARABONBA_PTR_GET_DEFAULT(parameters_, "") };
    inline ModifyParameterRequest& setParameters(string parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyParameterRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    shared_ptr<string> clientToken_ {};
    // This parameter is required.
    shared_ptr<string> DBInstanceId_ {};
    shared_ptr<string> paramLevel_ {};
    shared_ptr<string> parameterGroupId_ {};
    shared_ptr<string> parameters_ {};
    // This parameter is required.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
