// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAPISTAGEVARIABLEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEAPISTAGEVARIABLEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class CreateApiStageVariableRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateApiStageVariableRequest& obj) { 
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_TO_JSON(StageId, stageId_);
      DARABONBA_PTR_TO_JSON(StageRouteModel, stageRouteModel_);
      DARABONBA_PTR_TO_JSON(SupportRoute, supportRoute_);
      DARABONBA_PTR_TO_JSON(VariableName, variableName_);
      DARABONBA_PTR_TO_JSON(VariableValue, variableValue_);
    };
    friend void from_json(const Darabonba::Json& j, CreateApiStageVariableRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_FROM_JSON(StageId, stageId_);
      DARABONBA_PTR_FROM_JSON(StageRouteModel, stageRouteModel_);
      DARABONBA_PTR_FROM_JSON(SupportRoute, supportRoute_);
      DARABONBA_PTR_FROM_JSON(VariableName, variableName_);
      DARABONBA_PTR_FROM_JSON(VariableValue, variableValue_);
    };
    CreateApiStageVariableRequest() = default ;
    CreateApiStageVariableRequest(const CreateApiStageVariableRequest &) = default ;
    CreateApiStageVariableRequest(CreateApiStageVariableRequest &&) = default ;
    CreateApiStageVariableRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateApiStageVariableRequest() = default ;
    CreateApiStageVariableRequest& operator=(const CreateApiStageVariableRequest &) = default ;
    CreateApiStageVariableRequest& operator=(CreateApiStageVariableRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->groupId_ == nullptr
        && this->securityToken_ == nullptr && this->stageId_ == nullptr && this->stageRouteModel_ == nullptr && this->supportRoute_ == nullptr && this->variableName_ == nullptr
        && this->variableValue_ == nullptr; };
    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline CreateApiStageVariableRequest& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string getSecurityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline CreateApiStageVariableRequest& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


    // stageId Field Functions 
    bool hasStageId() const { return this->stageId_ != nullptr;};
    void deleteStageId() { this->stageId_ = nullptr;};
    inline string getStageId() const { DARABONBA_PTR_GET_DEFAULT(stageId_, "") };
    inline CreateApiStageVariableRequest& setStageId(string stageId) { DARABONBA_PTR_SET_VALUE(stageId_, stageId) };


    // stageRouteModel Field Functions 
    bool hasStageRouteModel() const { return this->stageRouteModel_ != nullptr;};
    void deleteStageRouteModel() { this->stageRouteModel_ = nullptr;};
    inline string getStageRouteModel() const { DARABONBA_PTR_GET_DEFAULT(stageRouteModel_, "") };
    inline CreateApiStageVariableRequest& setStageRouteModel(string stageRouteModel) { DARABONBA_PTR_SET_VALUE(stageRouteModel_, stageRouteModel) };


    // supportRoute Field Functions 
    bool hasSupportRoute() const { return this->supportRoute_ != nullptr;};
    void deleteSupportRoute() { this->supportRoute_ = nullptr;};
    inline bool getSupportRoute() const { DARABONBA_PTR_GET_DEFAULT(supportRoute_, false) };
    inline CreateApiStageVariableRequest& setSupportRoute(bool supportRoute) { DARABONBA_PTR_SET_VALUE(supportRoute_, supportRoute) };


    // variableName Field Functions 
    bool hasVariableName() const { return this->variableName_ != nullptr;};
    void deleteVariableName() { this->variableName_ = nullptr;};
    inline string getVariableName() const { DARABONBA_PTR_GET_DEFAULT(variableName_, "") };
    inline CreateApiStageVariableRequest& setVariableName(string variableName) { DARABONBA_PTR_SET_VALUE(variableName_, variableName) };


    // variableValue Field Functions 
    bool hasVariableValue() const { return this->variableValue_ != nullptr;};
    void deleteVariableValue() { this->variableValue_ = nullptr;};
    inline string getVariableValue() const { DARABONBA_PTR_GET_DEFAULT(variableValue_, "") };
    inline CreateApiStageVariableRequest& setVariableValue(string variableValue) { DARABONBA_PTR_SET_VALUE(variableValue_, variableValue) };


  protected:
    // The ID of the API group.
    // 
    // This parameter is required.
    shared_ptr<string> groupId_ {};
    shared_ptr<string> securityToken_ {};
    // The ID of the runtime environment.
    // 
    // This parameter is required.
    shared_ptr<string> stageId_ {};
    // The routing model of the environment.
    shared_ptr<string> stageRouteModel_ {};
    // Specifies whether routing is supported.
    shared_ptr<bool> supportRoute_ {};
    // The name of the variable to be added. This parameter is case-sensitive.
    // 
    // This parameter is required.
    shared_ptr<string> variableName_ {};
    // The value of the variable.
    shared_ptr<string> variableValue_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
