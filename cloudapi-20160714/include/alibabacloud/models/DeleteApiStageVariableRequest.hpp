// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEAPISTAGEVARIABLEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEAPISTAGEVARIABLEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DeleteApiStageVariableRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteApiStageVariableRequest& obj) { 
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_TO_JSON(StageId, stageId_);
      DARABONBA_PTR_TO_JSON(VariableName, variableName_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteApiStageVariableRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_FROM_JSON(StageId, stageId_);
      DARABONBA_PTR_FROM_JSON(VariableName, variableName_);
    };
    DeleteApiStageVariableRequest() = default ;
    DeleteApiStageVariableRequest(const DeleteApiStageVariableRequest &) = default ;
    DeleteApiStageVariableRequest(DeleteApiStageVariableRequest &&) = default ;
    DeleteApiStageVariableRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteApiStageVariableRequest() = default ;
    DeleteApiStageVariableRequest& operator=(const DeleteApiStageVariableRequest &) = default ;
    DeleteApiStageVariableRequest& operator=(DeleteApiStageVariableRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->groupId_ == nullptr
        && return this->securityToken_ == nullptr && return this->stageId_ == nullptr && return this->variableName_ == nullptr; };
    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline DeleteApiStageVariableRequest& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string securityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline DeleteApiStageVariableRequest& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


    // stageId Field Functions 
    bool hasStageId() const { return this->stageId_ != nullptr;};
    void deleteStageId() { this->stageId_ = nullptr;};
    inline string stageId() const { DARABONBA_PTR_GET_DEFAULT(stageId_, "") };
    inline DeleteApiStageVariableRequest& setStageId(string stageId) { DARABONBA_PTR_SET_VALUE(stageId_, stageId) };


    // variableName Field Functions 
    bool hasVariableName() const { return this->variableName_ != nullptr;};
    void deleteVariableName() { this->variableName_ = nullptr;};
    inline string variableName() const { DARABONBA_PTR_GET_DEFAULT(variableName_, "") };
    inline DeleteApiStageVariableRequest& setVariableName(string variableName) { DARABONBA_PTR_SET_VALUE(variableName_, variableName) };


  protected:
    // The ID of the API group.
    // 
    // This parameter is required.
    std::shared_ptr<string> groupId_ = nullptr;
    std::shared_ptr<string> securityToken_ = nullptr;
    // The ID of the environment.
    // 
    // This parameter is required.
    std::shared_ptr<string> stageId_ = nullptr;
    // The name of the variable to be deleted. This parameter is case-sensitive.
    // 
    // This parameter is required.
    std::shared_ptr<string> variableName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
