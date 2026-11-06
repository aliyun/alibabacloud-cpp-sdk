// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYLAKEBASEMOUNTPARAMETERGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYLAKEBASEMOUNTPARAMETERGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class ModifyLakebaseMountParameterGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyLakebaseMountParameterGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeleteParameters, deleteParameters_);
      DARABONBA_PTR_TO_JSON(ParameterGroupId, parameterGroupId_);
      DARABONBA_PTR_TO_JSON(ParameterGroupName, parameterGroupName_);
      DARABONBA_PTR_TO_JSON(Parameters, parameters_);
      DARABONBA_PTR_TO_JSON(PolarFsInstanceId, polarFsInstanceId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyLakebaseMountParameterGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeleteParameters, deleteParameters_);
      DARABONBA_PTR_FROM_JSON(ParameterGroupId, parameterGroupId_);
      DARABONBA_PTR_FROM_JSON(ParameterGroupName, parameterGroupName_);
      DARABONBA_PTR_FROM_JSON(Parameters, parameters_);
      DARABONBA_PTR_FROM_JSON(PolarFsInstanceId, polarFsInstanceId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    ModifyLakebaseMountParameterGroupRequest() = default ;
    ModifyLakebaseMountParameterGroupRequest(const ModifyLakebaseMountParameterGroupRequest &) = default ;
    ModifyLakebaseMountParameterGroupRequest(ModifyLakebaseMountParameterGroupRequest &&) = default ;
    ModifyLakebaseMountParameterGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyLakebaseMountParameterGroupRequest() = default ;
    ModifyLakebaseMountParameterGroupRequest& operator=(const ModifyLakebaseMountParameterGroupRequest &) = default ;
    ModifyLakebaseMountParameterGroupRequest& operator=(ModifyLakebaseMountParameterGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->deleteParameters_ == nullptr
        && this->parameterGroupId_ == nullptr && this->parameterGroupName_ == nullptr && this->parameters_ == nullptr && this->polarFsInstanceId_ == nullptr && this->regionId_ == nullptr; };
    // deleteParameters Field Functions 
    bool hasDeleteParameters() const { return this->deleteParameters_ != nullptr;};
    void deleteDeleteParameters() { this->deleteParameters_ = nullptr;};
    inline string getDeleteParameters() const { DARABONBA_PTR_GET_DEFAULT(deleteParameters_, "") };
    inline ModifyLakebaseMountParameterGroupRequest& setDeleteParameters(string deleteParameters) { DARABONBA_PTR_SET_VALUE(deleteParameters_, deleteParameters) };


    // parameterGroupId Field Functions 
    bool hasParameterGroupId() const { return this->parameterGroupId_ != nullptr;};
    void deleteParameterGroupId() { this->parameterGroupId_ = nullptr;};
    inline string getParameterGroupId() const { DARABONBA_PTR_GET_DEFAULT(parameterGroupId_, "") };
    inline ModifyLakebaseMountParameterGroupRequest& setParameterGroupId(string parameterGroupId) { DARABONBA_PTR_SET_VALUE(parameterGroupId_, parameterGroupId) };


    // parameterGroupName Field Functions 
    bool hasParameterGroupName() const { return this->parameterGroupName_ != nullptr;};
    void deleteParameterGroupName() { this->parameterGroupName_ = nullptr;};
    inline string getParameterGroupName() const { DARABONBA_PTR_GET_DEFAULT(parameterGroupName_, "") };
    inline ModifyLakebaseMountParameterGroupRequest& setParameterGroupName(string parameterGroupName) { DARABONBA_PTR_SET_VALUE(parameterGroupName_, parameterGroupName) };


    // parameters Field Functions 
    bool hasParameters() const { return this->parameters_ != nullptr;};
    void deleteParameters() { this->parameters_ = nullptr;};
    inline string getParameters() const { DARABONBA_PTR_GET_DEFAULT(parameters_, "") };
    inline ModifyLakebaseMountParameterGroupRequest& setParameters(string parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };


    // polarFsInstanceId Field Functions 
    bool hasPolarFsInstanceId() const { return this->polarFsInstanceId_ != nullptr;};
    void deletePolarFsInstanceId() { this->polarFsInstanceId_ = nullptr;};
    inline string getPolarFsInstanceId() const { DARABONBA_PTR_GET_DEFAULT(polarFsInstanceId_, "") };
    inline ModifyLakebaseMountParameterGroupRequest& setPolarFsInstanceId(string polarFsInstanceId) { DARABONBA_PTR_SET_VALUE(polarFsInstanceId_, polarFsInstanceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyLakebaseMountParameterGroupRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The names of the parameters to delete, separated by commas.
    shared_ptr<string> deleteParameters_ {};
    // The parameter template ID.
    // 
    // This parameter is required.
    shared_ptr<string> parameterGroupId_ {};
    // The new parameter template name.
    shared_ptr<string> parameterGroupName_ {};
    // The JSON string of added or modified parameter key-value pairs.
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
