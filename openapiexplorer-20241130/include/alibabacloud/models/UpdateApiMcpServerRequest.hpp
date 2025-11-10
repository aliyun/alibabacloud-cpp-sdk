// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEAPIMCPSERVERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEAPIMCPSERVERREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateApiMcpServerRequestAdditionalApiDescriptions.hpp>
#include <alibabacloud/models/UpdateApiMcpServerRequestApis.hpp>
#include <alibabacloud/models/UpdateApiMcpServerRequestPrompts.hpp>
#include <alibabacloud/models/UpdateApiMcpServerRequestTerraformTools.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenAPIExplorer20241130
{
namespace Models
{
  class UpdateApiMcpServerRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateApiMcpServerRequest& obj) { 
      DARABONBA_PTR_TO_JSON(additionalApiDescriptions, additionalApiDescriptions_);
      DARABONBA_PTR_TO_JSON(apis, apis_);
      DARABONBA_PTR_TO_JSON(assumeRoleExtraPolicy, assumeRoleExtraPolicy_);
      DARABONBA_PTR_TO_JSON(assumeRoleName, assumeRoleName_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(enableAssumeRole, enableAssumeRole_);
      DARABONBA_PTR_TO_JSON(instructions, instructions_);
      DARABONBA_PTR_TO_JSON(language, language_);
      DARABONBA_PTR_TO_JSON(oauthClientId, oauthClientId_);
      DARABONBA_PTR_TO_JSON(prompts, prompts_);
      DARABONBA_PTR_TO_JSON(systemTools, systemTools_);
      DARABONBA_PTR_TO_JSON(terraformTools, terraformTools_);
      DARABONBA_PTR_TO_JSON(clientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(id, id_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateApiMcpServerRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(additionalApiDescriptions, additionalApiDescriptions_);
      DARABONBA_PTR_FROM_JSON(apis, apis_);
      DARABONBA_PTR_FROM_JSON(assumeRoleExtraPolicy, assumeRoleExtraPolicy_);
      DARABONBA_PTR_FROM_JSON(assumeRoleName, assumeRoleName_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(enableAssumeRole, enableAssumeRole_);
      DARABONBA_PTR_FROM_JSON(instructions, instructions_);
      DARABONBA_PTR_FROM_JSON(language, language_);
      DARABONBA_PTR_FROM_JSON(oauthClientId, oauthClientId_);
      DARABONBA_PTR_FROM_JSON(prompts, prompts_);
      DARABONBA_PTR_FROM_JSON(systemTools, systemTools_);
      DARABONBA_PTR_FROM_JSON(terraformTools, terraformTools_);
      DARABONBA_PTR_FROM_JSON(clientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(id, id_);
    };
    UpdateApiMcpServerRequest() = default ;
    UpdateApiMcpServerRequest(const UpdateApiMcpServerRequest &) = default ;
    UpdateApiMcpServerRequest(UpdateApiMcpServerRequest &&) = default ;
    UpdateApiMcpServerRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateApiMcpServerRequest() = default ;
    UpdateApiMcpServerRequest& operator=(const UpdateApiMcpServerRequest &) = default ;
    UpdateApiMcpServerRequest& operator=(UpdateApiMcpServerRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->additionalApiDescriptions_ == nullptr
        && return this->apis_ == nullptr && return this->assumeRoleExtraPolicy_ == nullptr && return this->assumeRoleName_ == nullptr && return this->description_ == nullptr && return this->enableAssumeRole_ == nullptr
        && return this->instructions_ == nullptr && return this->language_ == nullptr && return this->oauthClientId_ == nullptr && return this->prompts_ == nullptr && return this->systemTools_ == nullptr
        && return this->terraformTools_ == nullptr && return this->clientToken_ == nullptr && return this->id_ == nullptr; };
    // additionalApiDescriptions Field Functions 
    bool hasAdditionalApiDescriptions() const { return this->additionalApiDescriptions_ != nullptr;};
    void deleteAdditionalApiDescriptions() { this->additionalApiDescriptions_ = nullptr;};
    inline const vector<UpdateApiMcpServerRequestAdditionalApiDescriptions> & additionalApiDescriptions() const { DARABONBA_PTR_GET_CONST(additionalApiDescriptions_, vector<UpdateApiMcpServerRequestAdditionalApiDescriptions>) };
    inline vector<UpdateApiMcpServerRequestAdditionalApiDescriptions> additionalApiDescriptions() { DARABONBA_PTR_GET(additionalApiDescriptions_, vector<UpdateApiMcpServerRequestAdditionalApiDescriptions>) };
    inline UpdateApiMcpServerRequest& setAdditionalApiDescriptions(const vector<UpdateApiMcpServerRequestAdditionalApiDescriptions> & additionalApiDescriptions) { DARABONBA_PTR_SET_VALUE(additionalApiDescriptions_, additionalApiDescriptions) };
    inline UpdateApiMcpServerRequest& setAdditionalApiDescriptions(vector<UpdateApiMcpServerRequestAdditionalApiDescriptions> && additionalApiDescriptions) { DARABONBA_PTR_SET_RVALUE(additionalApiDescriptions_, additionalApiDescriptions) };


    // apis Field Functions 
    bool hasApis() const { return this->apis_ != nullptr;};
    void deleteApis() { this->apis_ = nullptr;};
    inline const vector<UpdateApiMcpServerRequestApis> & apis() const { DARABONBA_PTR_GET_CONST(apis_, vector<UpdateApiMcpServerRequestApis>) };
    inline vector<UpdateApiMcpServerRequestApis> apis() { DARABONBA_PTR_GET(apis_, vector<UpdateApiMcpServerRequestApis>) };
    inline UpdateApiMcpServerRequest& setApis(const vector<UpdateApiMcpServerRequestApis> & apis) { DARABONBA_PTR_SET_VALUE(apis_, apis) };
    inline UpdateApiMcpServerRequest& setApis(vector<UpdateApiMcpServerRequestApis> && apis) { DARABONBA_PTR_SET_RVALUE(apis_, apis) };


    // assumeRoleExtraPolicy Field Functions 
    bool hasAssumeRoleExtraPolicy() const { return this->assumeRoleExtraPolicy_ != nullptr;};
    void deleteAssumeRoleExtraPolicy() { this->assumeRoleExtraPolicy_ = nullptr;};
    inline string assumeRoleExtraPolicy() const { DARABONBA_PTR_GET_DEFAULT(assumeRoleExtraPolicy_, "") };
    inline UpdateApiMcpServerRequest& setAssumeRoleExtraPolicy(string assumeRoleExtraPolicy) { DARABONBA_PTR_SET_VALUE(assumeRoleExtraPolicy_, assumeRoleExtraPolicy) };


    // assumeRoleName Field Functions 
    bool hasAssumeRoleName() const { return this->assumeRoleName_ != nullptr;};
    void deleteAssumeRoleName() { this->assumeRoleName_ = nullptr;};
    inline string assumeRoleName() const { DARABONBA_PTR_GET_DEFAULT(assumeRoleName_, "") };
    inline UpdateApiMcpServerRequest& setAssumeRoleName(string assumeRoleName) { DARABONBA_PTR_SET_VALUE(assumeRoleName_, assumeRoleName) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateApiMcpServerRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // enableAssumeRole Field Functions 
    bool hasEnableAssumeRole() const { return this->enableAssumeRole_ != nullptr;};
    void deleteEnableAssumeRole() { this->enableAssumeRole_ = nullptr;};
    inline bool enableAssumeRole() const { DARABONBA_PTR_GET_DEFAULT(enableAssumeRole_, false) };
    inline UpdateApiMcpServerRequest& setEnableAssumeRole(bool enableAssumeRole) { DARABONBA_PTR_SET_VALUE(enableAssumeRole_, enableAssumeRole) };


    // instructions Field Functions 
    bool hasInstructions() const { return this->instructions_ != nullptr;};
    void deleteInstructions() { this->instructions_ = nullptr;};
    inline string instructions() const { DARABONBA_PTR_GET_DEFAULT(instructions_, "") };
    inline UpdateApiMcpServerRequest& setInstructions(string instructions) { DARABONBA_PTR_SET_VALUE(instructions_, instructions) };


    // language Field Functions 
    bool hasLanguage() const { return this->language_ != nullptr;};
    void deleteLanguage() { this->language_ = nullptr;};
    inline string language() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
    inline UpdateApiMcpServerRequest& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


    // oauthClientId Field Functions 
    bool hasOauthClientId() const { return this->oauthClientId_ != nullptr;};
    void deleteOauthClientId() { this->oauthClientId_ = nullptr;};
    inline string oauthClientId() const { DARABONBA_PTR_GET_DEFAULT(oauthClientId_, "") };
    inline UpdateApiMcpServerRequest& setOauthClientId(string oauthClientId) { DARABONBA_PTR_SET_VALUE(oauthClientId_, oauthClientId) };


    // prompts Field Functions 
    bool hasPrompts() const { return this->prompts_ != nullptr;};
    void deletePrompts() { this->prompts_ = nullptr;};
    inline const vector<UpdateApiMcpServerRequestPrompts> & prompts() const { DARABONBA_PTR_GET_CONST(prompts_, vector<UpdateApiMcpServerRequestPrompts>) };
    inline vector<UpdateApiMcpServerRequestPrompts> prompts() { DARABONBA_PTR_GET(prompts_, vector<UpdateApiMcpServerRequestPrompts>) };
    inline UpdateApiMcpServerRequest& setPrompts(const vector<UpdateApiMcpServerRequestPrompts> & prompts) { DARABONBA_PTR_SET_VALUE(prompts_, prompts) };
    inline UpdateApiMcpServerRequest& setPrompts(vector<UpdateApiMcpServerRequestPrompts> && prompts) { DARABONBA_PTR_SET_RVALUE(prompts_, prompts) };


    // systemTools Field Functions 
    bool hasSystemTools() const { return this->systemTools_ != nullptr;};
    void deleteSystemTools() { this->systemTools_ = nullptr;};
    inline const vector<string> & systemTools() const { DARABONBA_PTR_GET_CONST(systemTools_, vector<string>) };
    inline vector<string> systemTools() { DARABONBA_PTR_GET(systemTools_, vector<string>) };
    inline UpdateApiMcpServerRequest& setSystemTools(const vector<string> & systemTools) { DARABONBA_PTR_SET_VALUE(systemTools_, systemTools) };
    inline UpdateApiMcpServerRequest& setSystemTools(vector<string> && systemTools) { DARABONBA_PTR_SET_RVALUE(systemTools_, systemTools) };


    // terraformTools Field Functions 
    bool hasTerraformTools() const { return this->terraformTools_ != nullptr;};
    void deleteTerraformTools() { this->terraformTools_ = nullptr;};
    inline const vector<UpdateApiMcpServerRequestTerraformTools> & terraformTools() const { DARABONBA_PTR_GET_CONST(terraformTools_, vector<UpdateApiMcpServerRequestTerraformTools>) };
    inline vector<UpdateApiMcpServerRequestTerraformTools> terraformTools() { DARABONBA_PTR_GET(terraformTools_, vector<UpdateApiMcpServerRequestTerraformTools>) };
    inline UpdateApiMcpServerRequest& setTerraformTools(const vector<UpdateApiMcpServerRequestTerraformTools> & terraformTools) { DARABONBA_PTR_SET_VALUE(terraformTools_, terraformTools) };
    inline UpdateApiMcpServerRequest& setTerraformTools(vector<UpdateApiMcpServerRequestTerraformTools> && terraformTools) { DARABONBA_PTR_SET_RVALUE(terraformTools_, terraformTools) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateApiMcpServerRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline UpdateApiMcpServerRequest& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


  protected:
    std::shared_ptr<vector<UpdateApiMcpServerRequestAdditionalApiDescriptions>> additionalApiDescriptions_ = nullptr;
    std::shared_ptr<vector<UpdateApiMcpServerRequestApis>> apis_ = nullptr;
    std::shared_ptr<string> assumeRoleExtraPolicy_ = nullptr;
    std::shared_ptr<string> assumeRoleName_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<bool> enableAssumeRole_ = nullptr;
    std::shared_ptr<string> instructions_ = nullptr;
    std::shared_ptr<string> language_ = nullptr;
    std::shared_ptr<string> oauthClientId_ = nullptr;
    std::shared_ptr<vector<UpdateApiMcpServerRequestPrompts>> prompts_ = nullptr;
    std::shared_ptr<vector<string>> systemTools_ = nullptr;
    std::shared_ptr<vector<UpdateApiMcpServerRequestTerraformTools>> terraformTools_ = nullptr;
    std::shared_ptr<string> clientToken_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> id_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenAPIExplorer20241130
#endif
