// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATELAKEBASEMOUNTPARAMETERGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATELAKEBASEMOUNTPARAMETERGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class CreateLakebaseMountParameterGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateLakebaseMountParameterGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ParamGroupCategory, paramGroupCategory_);
      DARABONBA_PTR_TO_JSON(ParameterGroupDesc, parameterGroupDesc_);
      DARABONBA_PTR_TO_JSON(ParameterGroupName, parameterGroupName_);
      DARABONBA_PTR_TO_JSON(Parameters, parameters_);
      DARABONBA_PTR_TO_JSON(PolarFsInstanceId, polarFsInstanceId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateLakebaseMountParameterGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ParamGroupCategory, paramGroupCategory_);
      DARABONBA_PTR_FROM_JSON(ParameterGroupDesc, parameterGroupDesc_);
      DARABONBA_PTR_FROM_JSON(ParameterGroupName, parameterGroupName_);
      DARABONBA_PTR_FROM_JSON(Parameters, parameters_);
      DARABONBA_PTR_FROM_JSON(PolarFsInstanceId, polarFsInstanceId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    CreateLakebaseMountParameterGroupRequest() = default ;
    CreateLakebaseMountParameterGroupRequest(const CreateLakebaseMountParameterGroupRequest &) = default ;
    CreateLakebaseMountParameterGroupRequest(CreateLakebaseMountParameterGroupRequest &&) = default ;
    CreateLakebaseMountParameterGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateLakebaseMountParameterGroupRequest() = default ;
    CreateLakebaseMountParameterGroupRequest& operator=(const CreateLakebaseMountParameterGroupRequest &) = default ;
    CreateLakebaseMountParameterGroupRequest& operator=(CreateLakebaseMountParameterGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->paramGroupCategory_ == nullptr
        && this->parameterGroupDesc_ == nullptr && this->parameterGroupName_ == nullptr && this->parameters_ == nullptr && this->polarFsInstanceId_ == nullptr && this->regionId_ == nullptr; };
    // paramGroupCategory Field Functions 
    bool hasParamGroupCategory() const { return this->paramGroupCategory_ != nullptr;};
    void deleteParamGroupCategory() { this->paramGroupCategory_ = nullptr;};
    inline string getParamGroupCategory() const { DARABONBA_PTR_GET_DEFAULT(paramGroupCategory_, "") };
    inline CreateLakebaseMountParameterGroupRequest& setParamGroupCategory(string paramGroupCategory) { DARABONBA_PTR_SET_VALUE(paramGroupCategory_, paramGroupCategory) };


    // parameterGroupDesc Field Functions 
    bool hasParameterGroupDesc() const { return this->parameterGroupDesc_ != nullptr;};
    void deleteParameterGroupDesc() { this->parameterGroupDesc_ = nullptr;};
    inline string getParameterGroupDesc() const { DARABONBA_PTR_GET_DEFAULT(parameterGroupDesc_, "") };
    inline CreateLakebaseMountParameterGroupRequest& setParameterGroupDesc(string parameterGroupDesc) { DARABONBA_PTR_SET_VALUE(parameterGroupDesc_, parameterGroupDesc) };


    // parameterGroupName Field Functions 
    bool hasParameterGroupName() const { return this->parameterGroupName_ != nullptr;};
    void deleteParameterGroupName() { this->parameterGroupName_ = nullptr;};
    inline string getParameterGroupName() const { DARABONBA_PTR_GET_DEFAULT(parameterGroupName_, "") };
    inline CreateLakebaseMountParameterGroupRequest& setParameterGroupName(string parameterGroupName) { DARABONBA_PTR_SET_VALUE(parameterGroupName_, parameterGroupName) };


    // parameters Field Functions 
    bool hasParameters() const { return this->parameters_ != nullptr;};
    void deleteParameters() { this->parameters_ = nullptr;};
    inline string getParameters() const { DARABONBA_PTR_GET_DEFAULT(parameters_, "") };
    inline CreateLakebaseMountParameterGroupRequest& setParameters(string parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };


    // polarFsInstanceId Field Functions 
    bool hasPolarFsInstanceId() const { return this->polarFsInstanceId_ != nullptr;};
    void deletePolarFsInstanceId() { this->polarFsInstanceId_ = nullptr;};
    inline string getPolarFsInstanceId() const { DARABONBA_PTR_GET_DEFAULT(polarFsInstanceId_, "") };
    inline CreateLakebaseMountParameterGroupRequest& setPolarFsInstanceId(string polarFsInstanceId) { DARABONBA_PTR_SET_VALUE(polarFsInstanceId_, polarFsInstanceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateLakebaseMountParameterGroupRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The instance category. Valid values:
    // - basic: Basic Edition.
    // - high_performance: High-performance Edition.
    // 
    // This parameter is required.
    shared_ptr<string> paramGroupCategory_ {};
    // The description of the parameter template.
    shared_ptr<string> parameterGroupDesc_ {};
    // The name of the parameter template.
    // 
    // This parameter is required.
    shared_ptr<string> parameterGroupName_ {};
    // The JSON string of parameters and their values.
    // 
    // This parameter is required.
    shared_ptr<string> parameters_ {};
    // The PolarFS instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> polarFsInstanceId_ {};
    // The region ID.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
