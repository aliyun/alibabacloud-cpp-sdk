// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEAPPLICATIONGROUPSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEAPPLICATIONGROUPSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Oos20190601
{
namespace Models
{
  class UpdateApplicationGroupShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateApplicationGroupShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationName, applicationName_);
      DARABONBA_PTR_TO_JSON(DeployedRevisionId, deployedRevisionId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(NewName, newName_);
      DARABONBA_PTR_TO_JSON(OperationName, operationName_);
      DARABONBA_PTR_TO_JSON(Parameters, parametersShrink_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateApplicationGroupShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationName, applicationName_);
      DARABONBA_PTR_FROM_JSON(DeployedRevisionId, deployedRevisionId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(NewName, newName_);
      DARABONBA_PTR_FROM_JSON(OperationName, operationName_);
      DARABONBA_PTR_FROM_JSON(Parameters, parametersShrink_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    UpdateApplicationGroupShrinkRequest() = default ;
    UpdateApplicationGroupShrinkRequest(const UpdateApplicationGroupShrinkRequest &) = default ;
    UpdateApplicationGroupShrinkRequest(UpdateApplicationGroupShrinkRequest &&) = default ;
    UpdateApplicationGroupShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateApplicationGroupShrinkRequest() = default ;
    UpdateApplicationGroupShrinkRequest& operator=(const UpdateApplicationGroupShrinkRequest &) = default ;
    UpdateApplicationGroupShrinkRequest& operator=(UpdateApplicationGroupShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicationName_ == nullptr
        && return this->deployedRevisionId_ == nullptr && return this->name_ == nullptr && return this->newName_ == nullptr && return this->operationName_ == nullptr && return this->parametersShrink_ == nullptr
        && return this->regionId_ == nullptr; };
    // applicationName Field Functions 
    bool hasApplicationName() const { return this->applicationName_ != nullptr;};
    void deleteApplicationName() { this->applicationName_ = nullptr;};
    inline string applicationName() const { DARABONBA_PTR_GET_DEFAULT(applicationName_, "") };
    inline UpdateApplicationGroupShrinkRequest& setApplicationName(string applicationName) { DARABONBA_PTR_SET_VALUE(applicationName_, applicationName) };


    // deployedRevisionId Field Functions 
    bool hasDeployedRevisionId() const { return this->deployedRevisionId_ != nullptr;};
    void deleteDeployedRevisionId() { this->deployedRevisionId_ = nullptr;};
    inline string deployedRevisionId() const { DARABONBA_PTR_GET_DEFAULT(deployedRevisionId_, "") };
    inline UpdateApplicationGroupShrinkRequest& setDeployedRevisionId(string deployedRevisionId) { DARABONBA_PTR_SET_VALUE(deployedRevisionId_, deployedRevisionId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateApplicationGroupShrinkRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // newName Field Functions 
    bool hasNewName() const { return this->newName_ != nullptr;};
    void deleteNewName() { this->newName_ = nullptr;};
    inline string newName() const { DARABONBA_PTR_GET_DEFAULT(newName_, "") };
    inline UpdateApplicationGroupShrinkRequest& setNewName(string newName) { DARABONBA_PTR_SET_VALUE(newName_, newName) };


    // operationName Field Functions 
    bool hasOperationName() const { return this->operationName_ != nullptr;};
    void deleteOperationName() { this->operationName_ = nullptr;};
    inline string operationName() const { DARABONBA_PTR_GET_DEFAULT(operationName_, "") };
    inline UpdateApplicationGroupShrinkRequest& setOperationName(string operationName) { DARABONBA_PTR_SET_VALUE(operationName_, operationName) };


    // parametersShrink Field Functions 
    bool hasParametersShrink() const { return this->parametersShrink_ != nullptr;};
    void deleteParametersShrink() { this->parametersShrink_ = nullptr;};
    inline string parametersShrink() const { DARABONBA_PTR_GET_DEFAULT(parametersShrink_, "") };
    inline UpdateApplicationGroupShrinkRequest& setParametersShrink(string parametersShrink) { DARABONBA_PTR_SET_VALUE(parametersShrink_, parametersShrink) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdateApplicationGroupShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The application name.
    // 
    // This parameter is required.
    std::shared_ptr<string> applicationName_ = nullptr;
    std::shared_ptr<string> deployedRevisionId_ = nullptr;
    // The name of the application group.
    // 
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    // The new name of the application group.
    std::shared_ptr<string> newName_ = nullptr;
    // The name of the configuration update operation.
    std::shared_ptr<string> operationName_ = nullptr;
    // The JSON string that consists of a set of parameters. Default value: {}.
    std::shared_ptr<string> parametersShrink_ = nullptr;
    // The region ID. Set the value to cn-hangzhou.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Oos20190601
#endif
