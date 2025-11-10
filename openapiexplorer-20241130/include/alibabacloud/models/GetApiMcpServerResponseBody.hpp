// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAPIMCPSERVERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETAPIMCPSERVERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetApiMcpServerResponseBodyAdditionalApiDescriptions.hpp>
#include <alibabacloud/models/GetApiMcpServerResponseBodyApiInfos.hpp>
#include <alibabacloud/models/GetApiMcpServerResponseBodyApis.hpp>
#include <alibabacloud/models/GetApiMcpServerResponseBodyPrompts.hpp>
#include <alibabacloud/models/GetApiMcpServerResponseBodySystemMcpServerInfo.hpp>
#include <alibabacloud/models/GetApiMcpServerResponseBodyTerraformTools.hpp>
#include <alibabacloud/models/GetApiMcpServerResponseBodyUrls.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenAPIExplorer20241130
{
namespace Models
{
  class GetApiMcpServerResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetApiMcpServerResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(additionalApiDescriptions, additionalApiDescriptions_);
      DARABONBA_PTR_TO_JSON(apiInfos, apiInfos_);
      DARABONBA_PTR_TO_JSON(apis, apis_);
      DARABONBA_PTR_TO_JSON(assumeRoleExtraPolicy, assumeRoleExtraPolicy_);
      DARABONBA_PTR_TO_JSON(assumeRoleName, assumeRoleName_);
      DARABONBA_PTR_TO_JSON(createTime, createTime_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(enableAssumeRole, enableAssumeRole_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(instructions, instructions_);
      DARABONBA_PTR_TO_JSON(language, language_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(oauthClientId, oauthClientId_);
      DARABONBA_PTR_TO_JSON(prompts, prompts_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(requiredRAMPolicy, requiredRAMPolicy_);
      DARABONBA_PTR_TO_JSON(sourceType, sourceType_);
      DARABONBA_PTR_TO_JSON(systemMcpServerInfo, systemMcpServerInfo_);
      DARABONBA_PTR_TO_JSON(systemTools, systemTools_);
      DARABONBA_PTR_TO_JSON(terraformTools, terraformTools_);
      DARABONBA_PTR_TO_JSON(updateTime, updateTime_);
      DARABONBA_PTR_TO_JSON(urls, urls_);
    };
    friend void from_json(const Darabonba::Json& j, GetApiMcpServerResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(additionalApiDescriptions, additionalApiDescriptions_);
      DARABONBA_PTR_FROM_JSON(apiInfos, apiInfos_);
      DARABONBA_PTR_FROM_JSON(apis, apis_);
      DARABONBA_PTR_FROM_JSON(assumeRoleExtraPolicy, assumeRoleExtraPolicy_);
      DARABONBA_PTR_FROM_JSON(assumeRoleName, assumeRoleName_);
      DARABONBA_PTR_FROM_JSON(createTime, createTime_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(enableAssumeRole, enableAssumeRole_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(instructions, instructions_);
      DARABONBA_PTR_FROM_JSON(language, language_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(oauthClientId, oauthClientId_);
      DARABONBA_PTR_FROM_JSON(prompts, prompts_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(requiredRAMPolicy, requiredRAMPolicy_);
      DARABONBA_PTR_FROM_JSON(sourceType, sourceType_);
      DARABONBA_PTR_FROM_JSON(systemMcpServerInfo, systemMcpServerInfo_);
      DARABONBA_PTR_FROM_JSON(systemTools, systemTools_);
      DARABONBA_PTR_FROM_JSON(terraformTools, terraformTools_);
      DARABONBA_PTR_FROM_JSON(updateTime, updateTime_);
      DARABONBA_PTR_FROM_JSON(urls, urls_);
    };
    GetApiMcpServerResponseBody() = default ;
    GetApiMcpServerResponseBody(const GetApiMcpServerResponseBody &) = default ;
    GetApiMcpServerResponseBody(GetApiMcpServerResponseBody &&) = default ;
    GetApiMcpServerResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetApiMcpServerResponseBody() = default ;
    GetApiMcpServerResponseBody& operator=(const GetApiMcpServerResponseBody &) = default ;
    GetApiMcpServerResponseBody& operator=(GetApiMcpServerResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->additionalApiDescriptions_ == nullptr
        && return this->apiInfos_ == nullptr && return this->apis_ == nullptr && return this->assumeRoleExtraPolicy_ == nullptr && return this->assumeRoleName_ == nullptr && return this->createTime_ == nullptr
        && return this->description_ == nullptr && return this->enableAssumeRole_ == nullptr && return this->id_ == nullptr && return this->instructions_ == nullptr && return this->language_ == nullptr
        && return this->name_ == nullptr && return this->oauthClientId_ == nullptr && return this->prompts_ == nullptr && return this->requestId_ == nullptr && return this->requiredRAMPolicy_ == nullptr
        && return this->sourceType_ == nullptr && return this->systemMcpServerInfo_ == nullptr && return this->systemTools_ == nullptr && return this->terraformTools_ == nullptr && return this->updateTime_ == nullptr
        && return this->urls_ == nullptr; };
    // additionalApiDescriptions Field Functions 
    bool hasAdditionalApiDescriptions() const { return this->additionalApiDescriptions_ != nullptr;};
    void deleteAdditionalApiDescriptions() { this->additionalApiDescriptions_ = nullptr;};
    inline const vector<GetApiMcpServerResponseBodyAdditionalApiDescriptions> & additionalApiDescriptions() const { DARABONBA_PTR_GET_CONST(additionalApiDescriptions_, vector<GetApiMcpServerResponseBodyAdditionalApiDescriptions>) };
    inline vector<GetApiMcpServerResponseBodyAdditionalApiDescriptions> additionalApiDescriptions() { DARABONBA_PTR_GET(additionalApiDescriptions_, vector<GetApiMcpServerResponseBodyAdditionalApiDescriptions>) };
    inline GetApiMcpServerResponseBody& setAdditionalApiDescriptions(const vector<GetApiMcpServerResponseBodyAdditionalApiDescriptions> & additionalApiDescriptions) { DARABONBA_PTR_SET_VALUE(additionalApiDescriptions_, additionalApiDescriptions) };
    inline GetApiMcpServerResponseBody& setAdditionalApiDescriptions(vector<GetApiMcpServerResponseBodyAdditionalApiDescriptions> && additionalApiDescriptions) { DARABONBA_PTR_SET_RVALUE(additionalApiDescriptions_, additionalApiDescriptions) };


    // apiInfos Field Functions 
    bool hasApiInfos() const { return this->apiInfos_ != nullptr;};
    void deleteApiInfos() { this->apiInfos_ = nullptr;};
    inline const vector<GetApiMcpServerResponseBodyApiInfos> & apiInfos() const { DARABONBA_PTR_GET_CONST(apiInfos_, vector<GetApiMcpServerResponseBodyApiInfos>) };
    inline vector<GetApiMcpServerResponseBodyApiInfos> apiInfos() { DARABONBA_PTR_GET(apiInfos_, vector<GetApiMcpServerResponseBodyApiInfos>) };
    inline GetApiMcpServerResponseBody& setApiInfos(const vector<GetApiMcpServerResponseBodyApiInfos> & apiInfos) { DARABONBA_PTR_SET_VALUE(apiInfos_, apiInfos) };
    inline GetApiMcpServerResponseBody& setApiInfos(vector<GetApiMcpServerResponseBodyApiInfos> && apiInfos) { DARABONBA_PTR_SET_RVALUE(apiInfos_, apiInfos) };


    // apis Field Functions 
    bool hasApis() const { return this->apis_ != nullptr;};
    void deleteApis() { this->apis_ = nullptr;};
    inline const vector<GetApiMcpServerResponseBodyApis> & apis() const { DARABONBA_PTR_GET_CONST(apis_, vector<GetApiMcpServerResponseBodyApis>) };
    inline vector<GetApiMcpServerResponseBodyApis> apis() { DARABONBA_PTR_GET(apis_, vector<GetApiMcpServerResponseBodyApis>) };
    inline GetApiMcpServerResponseBody& setApis(const vector<GetApiMcpServerResponseBodyApis> & apis) { DARABONBA_PTR_SET_VALUE(apis_, apis) };
    inline GetApiMcpServerResponseBody& setApis(vector<GetApiMcpServerResponseBodyApis> && apis) { DARABONBA_PTR_SET_RVALUE(apis_, apis) };


    // assumeRoleExtraPolicy Field Functions 
    bool hasAssumeRoleExtraPolicy() const { return this->assumeRoleExtraPolicy_ != nullptr;};
    void deleteAssumeRoleExtraPolicy() { this->assumeRoleExtraPolicy_ = nullptr;};
    inline string assumeRoleExtraPolicy() const { DARABONBA_PTR_GET_DEFAULT(assumeRoleExtraPolicy_, "") };
    inline GetApiMcpServerResponseBody& setAssumeRoleExtraPolicy(string assumeRoleExtraPolicy) { DARABONBA_PTR_SET_VALUE(assumeRoleExtraPolicy_, assumeRoleExtraPolicy) };


    // assumeRoleName Field Functions 
    bool hasAssumeRoleName() const { return this->assumeRoleName_ != nullptr;};
    void deleteAssumeRoleName() { this->assumeRoleName_ = nullptr;};
    inline string assumeRoleName() const { DARABONBA_PTR_GET_DEFAULT(assumeRoleName_, "") };
    inline GetApiMcpServerResponseBody& setAssumeRoleName(string assumeRoleName) { DARABONBA_PTR_SET_VALUE(assumeRoleName_, assumeRoleName) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline GetApiMcpServerResponseBody& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetApiMcpServerResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // enableAssumeRole Field Functions 
    bool hasEnableAssumeRole() const { return this->enableAssumeRole_ != nullptr;};
    void deleteEnableAssumeRole() { this->enableAssumeRole_ = nullptr;};
    inline bool enableAssumeRole() const { DARABONBA_PTR_GET_DEFAULT(enableAssumeRole_, false) };
    inline GetApiMcpServerResponseBody& setEnableAssumeRole(bool enableAssumeRole) { DARABONBA_PTR_SET_VALUE(enableAssumeRole_, enableAssumeRole) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline GetApiMcpServerResponseBody& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // instructions Field Functions 
    bool hasInstructions() const { return this->instructions_ != nullptr;};
    void deleteInstructions() { this->instructions_ = nullptr;};
    inline string instructions() const { DARABONBA_PTR_GET_DEFAULT(instructions_, "") };
    inline GetApiMcpServerResponseBody& setInstructions(string instructions) { DARABONBA_PTR_SET_VALUE(instructions_, instructions) };


    // language Field Functions 
    bool hasLanguage() const { return this->language_ != nullptr;};
    void deleteLanguage() { this->language_ = nullptr;};
    inline string language() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
    inline GetApiMcpServerResponseBody& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetApiMcpServerResponseBody& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // oauthClientId Field Functions 
    bool hasOauthClientId() const { return this->oauthClientId_ != nullptr;};
    void deleteOauthClientId() { this->oauthClientId_ = nullptr;};
    inline string oauthClientId() const { DARABONBA_PTR_GET_DEFAULT(oauthClientId_, "") };
    inline GetApiMcpServerResponseBody& setOauthClientId(string oauthClientId) { DARABONBA_PTR_SET_VALUE(oauthClientId_, oauthClientId) };


    // prompts Field Functions 
    bool hasPrompts() const { return this->prompts_ != nullptr;};
    void deletePrompts() { this->prompts_ = nullptr;};
    inline const vector<GetApiMcpServerResponseBodyPrompts> & prompts() const { DARABONBA_PTR_GET_CONST(prompts_, vector<GetApiMcpServerResponseBodyPrompts>) };
    inline vector<GetApiMcpServerResponseBodyPrompts> prompts() { DARABONBA_PTR_GET(prompts_, vector<GetApiMcpServerResponseBodyPrompts>) };
    inline GetApiMcpServerResponseBody& setPrompts(const vector<GetApiMcpServerResponseBodyPrompts> & prompts) { DARABONBA_PTR_SET_VALUE(prompts_, prompts) };
    inline GetApiMcpServerResponseBody& setPrompts(vector<GetApiMcpServerResponseBodyPrompts> && prompts) { DARABONBA_PTR_SET_RVALUE(prompts_, prompts) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetApiMcpServerResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // requiredRAMPolicy Field Functions 
    bool hasRequiredRAMPolicy() const { return this->requiredRAMPolicy_ != nullptr;};
    void deleteRequiredRAMPolicy() { this->requiredRAMPolicy_ = nullptr;};
    inline string requiredRAMPolicy() const { DARABONBA_PTR_GET_DEFAULT(requiredRAMPolicy_, "") };
    inline GetApiMcpServerResponseBody& setRequiredRAMPolicy(string requiredRAMPolicy) { DARABONBA_PTR_SET_VALUE(requiredRAMPolicy_, requiredRAMPolicy) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string sourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline GetApiMcpServerResponseBody& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


    // systemMcpServerInfo Field Functions 
    bool hasSystemMcpServerInfo() const { return this->systemMcpServerInfo_ != nullptr;};
    void deleteSystemMcpServerInfo() { this->systemMcpServerInfo_ = nullptr;};
    inline const GetApiMcpServerResponseBodySystemMcpServerInfo & systemMcpServerInfo() const { DARABONBA_PTR_GET_CONST(systemMcpServerInfo_, GetApiMcpServerResponseBodySystemMcpServerInfo) };
    inline GetApiMcpServerResponseBodySystemMcpServerInfo systemMcpServerInfo() { DARABONBA_PTR_GET(systemMcpServerInfo_, GetApiMcpServerResponseBodySystemMcpServerInfo) };
    inline GetApiMcpServerResponseBody& setSystemMcpServerInfo(const GetApiMcpServerResponseBodySystemMcpServerInfo & systemMcpServerInfo) { DARABONBA_PTR_SET_VALUE(systemMcpServerInfo_, systemMcpServerInfo) };
    inline GetApiMcpServerResponseBody& setSystemMcpServerInfo(GetApiMcpServerResponseBodySystemMcpServerInfo && systemMcpServerInfo) { DARABONBA_PTR_SET_RVALUE(systemMcpServerInfo_, systemMcpServerInfo) };


    // systemTools Field Functions 
    bool hasSystemTools() const { return this->systemTools_ != nullptr;};
    void deleteSystemTools() { this->systemTools_ = nullptr;};
    inline const vector<string> & systemTools() const { DARABONBA_PTR_GET_CONST(systemTools_, vector<string>) };
    inline vector<string> systemTools() { DARABONBA_PTR_GET(systemTools_, vector<string>) };
    inline GetApiMcpServerResponseBody& setSystemTools(const vector<string> & systemTools) { DARABONBA_PTR_SET_VALUE(systemTools_, systemTools) };
    inline GetApiMcpServerResponseBody& setSystemTools(vector<string> && systemTools) { DARABONBA_PTR_SET_RVALUE(systemTools_, systemTools) };


    // terraformTools Field Functions 
    bool hasTerraformTools() const { return this->terraformTools_ != nullptr;};
    void deleteTerraformTools() { this->terraformTools_ = nullptr;};
    inline const vector<GetApiMcpServerResponseBodyTerraformTools> & terraformTools() const { DARABONBA_PTR_GET_CONST(terraformTools_, vector<GetApiMcpServerResponseBodyTerraformTools>) };
    inline vector<GetApiMcpServerResponseBodyTerraformTools> terraformTools() { DARABONBA_PTR_GET(terraformTools_, vector<GetApiMcpServerResponseBodyTerraformTools>) };
    inline GetApiMcpServerResponseBody& setTerraformTools(const vector<GetApiMcpServerResponseBodyTerraformTools> & terraformTools) { DARABONBA_PTR_SET_VALUE(terraformTools_, terraformTools) };
    inline GetApiMcpServerResponseBody& setTerraformTools(vector<GetApiMcpServerResponseBodyTerraformTools> && terraformTools) { DARABONBA_PTR_SET_RVALUE(terraformTools_, terraformTools) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline GetApiMcpServerResponseBody& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    // urls Field Functions 
    bool hasUrls() const { return this->urls_ != nullptr;};
    void deleteUrls() { this->urls_ = nullptr;};
    inline const GetApiMcpServerResponseBodyUrls & urls() const { DARABONBA_PTR_GET_CONST(urls_, GetApiMcpServerResponseBodyUrls) };
    inline GetApiMcpServerResponseBodyUrls urls() { DARABONBA_PTR_GET(urls_, GetApiMcpServerResponseBodyUrls) };
    inline GetApiMcpServerResponseBody& setUrls(const GetApiMcpServerResponseBodyUrls & urls) { DARABONBA_PTR_SET_VALUE(urls_, urls) };
    inline GetApiMcpServerResponseBody& setUrls(GetApiMcpServerResponseBodyUrls && urls) { DARABONBA_PTR_SET_RVALUE(urls_, urls) };


  protected:
    std::shared_ptr<vector<GetApiMcpServerResponseBodyAdditionalApiDescriptions>> additionalApiDescriptions_ = nullptr;
    std::shared_ptr<vector<GetApiMcpServerResponseBodyApiInfos>> apiInfos_ = nullptr;
    std::shared_ptr<vector<GetApiMcpServerResponseBodyApis>> apis_ = nullptr;
    std::shared_ptr<string> assumeRoleExtraPolicy_ = nullptr;
    std::shared_ptr<string> assumeRoleName_ = nullptr;
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<bool> enableAssumeRole_ = nullptr;
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<string> instructions_ = nullptr;
    std::shared_ptr<string> language_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> oauthClientId_ = nullptr;
    std::shared_ptr<vector<GetApiMcpServerResponseBodyPrompts>> prompts_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> requiredRAMPolicy_ = nullptr;
    std::shared_ptr<string> sourceType_ = nullptr;
    std::shared_ptr<GetApiMcpServerResponseBodySystemMcpServerInfo> systemMcpServerInfo_ = nullptr;
    std::shared_ptr<vector<string>> systemTools_ = nullptr;
    std::shared_ptr<vector<GetApiMcpServerResponseBodyTerraformTools>> terraformTools_ = nullptr;
    std::shared_ptr<string> updateTime_ = nullptr;
    std::shared_ptr<GetApiMcpServerResponseBodyUrls> urls_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenAPIExplorer20241130
#endif
