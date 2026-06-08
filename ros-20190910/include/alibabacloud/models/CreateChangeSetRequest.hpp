// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECHANGESETREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECHANGESETREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ROS20190910
{
namespace Models
{
  class CreateChangeSetRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateChangeSetRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ChangeSetName, changeSetName_);
      DARABONBA_PTR_TO_JSON(ChangeSetType, changeSetType_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DisableRollback, disableRollback_);
      DARABONBA_PTR_TO_JSON(NotificationURLs, notificationURLs_);
      DARABONBA_PTR_TO_JSON(Parallelism, parallelism_);
      DARABONBA_PTR_TO_JSON(Parameters, parameters_);
      DARABONBA_PTR_TO_JSON(RamRoleName, ramRoleName_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ReplacementOption, replacementOption_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ResourcesToImport, resourcesToImport_);
      DARABONBA_PTR_TO_JSON(StackId, stackId_);
      DARABONBA_PTR_TO_JSON(StackName, stackName_);
      DARABONBA_PTR_TO_JSON(StackPolicyBody, stackPolicyBody_);
      DARABONBA_PTR_TO_JSON(StackPolicyDuringUpdateBody, stackPolicyDuringUpdateBody_);
      DARABONBA_PTR_TO_JSON(StackPolicyDuringUpdateURL, stackPolicyDuringUpdateURL_);
      DARABONBA_PTR_TO_JSON(StackPolicyURL, stackPolicyURL_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(TaintResources, taintResources_);
      DARABONBA_PTR_TO_JSON(TemplateBody, templateBody_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
      DARABONBA_PTR_TO_JSON(TemplateScratchId, templateScratchId_);
      DARABONBA_PTR_TO_JSON(TemplateURL, templateURL_);
      DARABONBA_PTR_TO_JSON(TemplateVersion, templateVersion_);
      DARABONBA_PTR_TO_JSON(TimeoutInMinutes, timeoutInMinutes_);
      DARABONBA_PTR_TO_JSON(UsePreviousParameters, usePreviousParameters_);
    };
    friend void from_json(const Darabonba::Json& j, CreateChangeSetRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ChangeSetName, changeSetName_);
      DARABONBA_PTR_FROM_JSON(ChangeSetType, changeSetType_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DisableRollback, disableRollback_);
      DARABONBA_PTR_FROM_JSON(NotificationURLs, notificationURLs_);
      DARABONBA_PTR_FROM_JSON(Parallelism, parallelism_);
      DARABONBA_PTR_FROM_JSON(Parameters, parameters_);
      DARABONBA_PTR_FROM_JSON(RamRoleName, ramRoleName_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ReplacementOption, replacementOption_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ResourcesToImport, resourcesToImport_);
      DARABONBA_PTR_FROM_JSON(StackId, stackId_);
      DARABONBA_PTR_FROM_JSON(StackName, stackName_);
      DARABONBA_PTR_FROM_JSON(StackPolicyBody, stackPolicyBody_);
      DARABONBA_PTR_FROM_JSON(StackPolicyDuringUpdateBody, stackPolicyDuringUpdateBody_);
      DARABONBA_PTR_FROM_JSON(StackPolicyDuringUpdateURL, stackPolicyDuringUpdateURL_);
      DARABONBA_PTR_FROM_JSON(StackPolicyURL, stackPolicyURL_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(TaintResources, taintResources_);
      DARABONBA_PTR_FROM_JSON(TemplateBody, templateBody_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
      DARABONBA_PTR_FROM_JSON(TemplateScratchId, templateScratchId_);
      DARABONBA_PTR_FROM_JSON(TemplateURL, templateURL_);
      DARABONBA_PTR_FROM_JSON(TemplateVersion, templateVersion_);
      DARABONBA_PTR_FROM_JSON(TimeoutInMinutes, timeoutInMinutes_);
      DARABONBA_PTR_FROM_JSON(UsePreviousParameters, usePreviousParameters_);
    };
    CreateChangeSetRequest() = default ;
    CreateChangeSetRequest(const CreateChangeSetRequest &) = default ;
    CreateChangeSetRequest(CreateChangeSetRequest &&) = default ;
    CreateChangeSetRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateChangeSetRequest() = default ;
    CreateChangeSetRequest& operator=(const CreateChangeSetRequest &) = default ;
    CreateChangeSetRequest& operator=(CreateChangeSetRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Tags : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tags& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Tags& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      Tags() = default ;
      Tags(const Tags &) = default ;
      Tags(Tags &&) = default ;
      Tags(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Tags() = default ;
      Tags& operator=(const Tags &) = default ;
      Tags& operator=(Tags &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline Tags& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Tags& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      shared_ptr<string> key_ {};
      shared_ptr<string> value_ {};
    };

    class ResourcesToImport : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResourcesToImport& obj) { 
        DARABONBA_PTR_TO_JSON(LogicalResourceId, logicalResourceId_);
        DARABONBA_PTR_TO_JSON(ResourceIdentifier, resourceIdentifier_);
        DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      };
      friend void from_json(const Darabonba::Json& j, ResourcesToImport& obj) { 
        DARABONBA_PTR_FROM_JSON(LogicalResourceId, logicalResourceId_);
        DARABONBA_PTR_FROM_JSON(ResourceIdentifier, resourceIdentifier_);
        DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      };
      ResourcesToImport() = default ;
      ResourcesToImport(const ResourcesToImport &) = default ;
      ResourcesToImport(ResourcesToImport &&) = default ;
      ResourcesToImport(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ResourcesToImport() = default ;
      ResourcesToImport& operator=(const ResourcesToImport &) = default ;
      ResourcesToImport& operator=(ResourcesToImport &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->logicalResourceId_ == nullptr
        && this->resourceIdentifier_ == nullptr && this->resourceType_ == nullptr; };
      // logicalResourceId Field Functions 
      bool hasLogicalResourceId() const { return this->logicalResourceId_ != nullptr;};
      void deleteLogicalResourceId() { this->logicalResourceId_ = nullptr;};
      inline string getLogicalResourceId() const { DARABONBA_PTR_GET_DEFAULT(logicalResourceId_, "") };
      inline ResourcesToImport& setLogicalResourceId(string logicalResourceId) { DARABONBA_PTR_SET_VALUE(logicalResourceId_, logicalResourceId) };


      // resourceIdentifier Field Functions 
      bool hasResourceIdentifier() const { return this->resourceIdentifier_ != nullptr;};
      void deleteResourceIdentifier() { this->resourceIdentifier_ = nullptr;};
      inline string getResourceIdentifier() const { DARABONBA_PTR_GET_DEFAULT(resourceIdentifier_, "") };
      inline ResourcesToImport& setResourceIdentifier(string resourceIdentifier) { DARABONBA_PTR_SET_VALUE(resourceIdentifier_, resourceIdentifier) };


      // resourceType Field Functions 
      bool hasResourceType() const { return this->resourceType_ != nullptr;};
      void deleteResourceType() { this->resourceType_ = nullptr;};
      inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
      inline ResourcesToImport& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    protected:
      // The logical ID of resource N. The logical ID is the name of the resource defined in the template.
      // 
      // >  This parameter takes effect only when ChangeSetType is set to IMPORT. ResourcesToImport is optional. If you specify ResourcesToImport, you must specify ResourcesToImport.N.LogicalResourceId.
      shared_ptr<string> logicalResourceId_ {};
      // The key-value mapping between strings. The key-value mapping is used to identify resource N that you want to import. The key-value mapping must be a JSON string.\\
      // A key is an identifier property of a resource and a value is the property value. For example, the key of the ALIYUN::ECS::VPC resource is VpcId and the value is `vpc-2zevx9ios****`.
      // 
      // You can call the [GetTemplateSummary](https://help.aliyun.com/document_detail/172485.html) operation to query the identifier property of the resource.
      // 
      // >  This parameter takes effect only when ChangeSetType is set to IMPORT. ResourcesToImport is optional. If you specify ResourcesToImport, you must specify ResourcesToImport.N.ResourceIdentifier.
      shared_ptr<string> resourceIdentifier_ {};
      // The type of resource N. The resource type must be the same as the resource type that is defined in the template.
      // 
      // >  This parameter takes effect only when ChangeSetType is set to IMPORT. ResourcesToImport is optional. If you specify ResourcesToImport, you must specify ResourcesToImport.N.ResourceType.
      shared_ptr<string> resourceType_ {};
    };

    class Parameters : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Parameters& obj) { 
        DARABONBA_PTR_TO_JSON(ParameterKey, parameterKey_);
        DARABONBA_PTR_TO_JSON(ParameterValue, parameterValue_);
      };
      friend void from_json(const Darabonba::Json& j, Parameters& obj) { 
        DARABONBA_PTR_FROM_JSON(ParameterKey, parameterKey_);
        DARABONBA_PTR_FROM_JSON(ParameterValue, parameterValue_);
      };
      Parameters() = default ;
      Parameters(const Parameters &) = default ;
      Parameters(Parameters &&) = default ;
      Parameters(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Parameters() = default ;
      Parameters& operator=(const Parameters &) = default ;
      Parameters& operator=(Parameters &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->parameterKey_ == nullptr
        && this->parameterValue_ == nullptr; };
      // parameterKey Field Functions 
      bool hasParameterKey() const { return this->parameterKey_ != nullptr;};
      void deleteParameterKey() { this->parameterKey_ = nullptr;};
      inline string getParameterKey() const { DARABONBA_PTR_GET_DEFAULT(parameterKey_, "") };
      inline Parameters& setParameterKey(string parameterKey) { DARABONBA_PTR_SET_VALUE(parameterKey_, parameterKey) };


      // parameterValue Field Functions 
      bool hasParameterValue() const { return this->parameterValue_ != nullptr;};
      void deleteParameterValue() { this->parameterValue_ = nullptr;};
      inline string getParameterValue() const { DARABONBA_PTR_GET_DEFAULT(parameterValue_, "") };
      inline Parameters& setParameterValue(string parameterValue) { DARABONBA_PTR_SET_VALUE(parameterValue_, parameterValue) };


    protected:
      // The key of parameter N that is defined in the template. If you do not specify the key and value of a parameter, ROS uses the default name and value that are defined in the template. Maximum value of N: 200.
      // 
      // >  Parameters is optional. If you specify Parameters, you must also specify Parameters.N.ParameterKey.
      // 
      // This parameter is required.
      shared_ptr<string> parameterKey_ {};
      // The value of parameter N that is defined in the template. Maximum value of N: 200.
      // 
      // >  Parameters is optional. If you specify Parameters, you must also specify Parameters.N.ParameterValue.
      // 
      // This parameter is required.
      shared_ptr<string> parameterValue_ {};
    };

    virtual bool empty() const override { return this->changeSetName_ == nullptr
        && this->changeSetType_ == nullptr && this->clientToken_ == nullptr && this->description_ == nullptr && this->disableRollback_ == nullptr && this->notificationURLs_ == nullptr
        && this->parallelism_ == nullptr && this->parameters_ == nullptr && this->ramRoleName_ == nullptr && this->regionId_ == nullptr && this->replacementOption_ == nullptr
        && this->resourceGroupId_ == nullptr && this->resourcesToImport_ == nullptr && this->stackId_ == nullptr && this->stackName_ == nullptr && this->stackPolicyBody_ == nullptr
        && this->stackPolicyDuringUpdateBody_ == nullptr && this->stackPolicyDuringUpdateURL_ == nullptr && this->stackPolicyURL_ == nullptr && this->tags_ == nullptr && this->taintResources_ == nullptr
        && this->templateBody_ == nullptr && this->templateId_ == nullptr && this->templateScratchId_ == nullptr && this->templateURL_ == nullptr && this->templateVersion_ == nullptr
        && this->timeoutInMinutes_ == nullptr && this->usePreviousParameters_ == nullptr; };
    // changeSetName Field Functions 
    bool hasChangeSetName() const { return this->changeSetName_ != nullptr;};
    void deleteChangeSetName() { this->changeSetName_ = nullptr;};
    inline string getChangeSetName() const { DARABONBA_PTR_GET_DEFAULT(changeSetName_, "") };
    inline CreateChangeSetRequest& setChangeSetName(string changeSetName) { DARABONBA_PTR_SET_VALUE(changeSetName_, changeSetName) };


    // changeSetType Field Functions 
    bool hasChangeSetType() const { return this->changeSetType_ != nullptr;};
    void deleteChangeSetType() { this->changeSetType_ = nullptr;};
    inline string getChangeSetType() const { DARABONBA_PTR_GET_DEFAULT(changeSetType_, "") };
    inline CreateChangeSetRequest& setChangeSetType(string changeSetType) { DARABONBA_PTR_SET_VALUE(changeSetType_, changeSetType) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateChangeSetRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateChangeSetRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // disableRollback Field Functions 
    bool hasDisableRollback() const { return this->disableRollback_ != nullptr;};
    void deleteDisableRollback() { this->disableRollback_ = nullptr;};
    inline bool getDisableRollback() const { DARABONBA_PTR_GET_DEFAULT(disableRollback_, false) };
    inline CreateChangeSetRequest& setDisableRollback(bool disableRollback) { DARABONBA_PTR_SET_VALUE(disableRollback_, disableRollback) };


    // notificationURLs Field Functions 
    bool hasNotificationURLs() const { return this->notificationURLs_ != nullptr;};
    void deleteNotificationURLs() { this->notificationURLs_ = nullptr;};
    inline const vector<string> & getNotificationURLs() const { DARABONBA_PTR_GET_CONST(notificationURLs_, vector<string>) };
    inline vector<string> getNotificationURLs() { DARABONBA_PTR_GET(notificationURLs_, vector<string>) };
    inline CreateChangeSetRequest& setNotificationURLs(const vector<string> & notificationURLs) { DARABONBA_PTR_SET_VALUE(notificationURLs_, notificationURLs) };
    inline CreateChangeSetRequest& setNotificationURLs(vector<string> && notificationURLs) { DARABONBA_PTR_SET_RVALUE(notificationURLs_, notificationURLs) };


    // parallelism Field Functions 
    bool hasParallelism() const { return this->parallelism_ != nullptr;};
    void deleteParallelism() { this->parallelism_ = nullptr;};
    inline int64_t getParallelism() const { DARABONBA_PTR_GET_DEFAULT(parallelism_, 0L) };
    inline CreateChangeSetRequest& setParallelism(int64_t parallelism) { DARABONBA_PTR_SET_VALUE(parallelism_, parallelism) };


    // parameters Field Functions 
    bool hasParameters() const { return this->parameters_ != nullptr;};
    void deleteParameters() { this->parameters_ = nullptr;};
    inline const vector<CreateChangeSetRequest::Parameters> & getParameters() const { DARABONBA_PTR_GET_CONST(parameters_, vector<CreateChangeSetRequest::Parameters>) };
    inline vector<CreateChangeSetRequest::Parameters> getParameters() { DARABONBA_PTR_GET(parameters_, vector<CreateChangeSetRequest::Parameters>) };
    inline CreateChangeSetRequest& setParameters(const vector<CreateChangeSetRequest::Parameters> & parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };
    inline CreateChangeSetRequest& setParameters(vector<CreateChangeSetRequest::Parameters> && parameters) { DARABONBA_PTR_SET_RVALUE(parameters_, parameters) };


    // ramRoleName Field Functions 
    bool hasRamRoleName() const { return this->ramRoleName_ != nullptr;};
    void deleteRamRoleName() { this->ramRoleName_ = nullptr;};
    inline string getRamRoleName() const { DARABONBA_PTR_GET_DEFAULT(ramRoleName_, "") };
    inline CreateChangeSetRequest& setRamRoleName(string ramRoleName) { DARABONBA_PTR_SET_VALUE(ramRoleName_, ramRoleName) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateChangeSetRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // replacementOption Field Functions 
    bool hasReplacementOption() const { return this->replacementOption_ != nullptr;};
    void deleteReplacementOption() { this->replacementOption_ = nullptr;};
    inline string getReplacementOption() const { DARABONBA_PTR_GET_DEFAULT(replacementOption_, "") };
    inline CreateChangeSetRequest& setReplacementOption(string replacementOption) { DARABONBA_PTR_SET_VALUE(replacementOption_, replacementOption) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateChangeSetRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourcesToImport Field Functions 
    bool hasResourcesToImport() const { return this->resourcesToImport_ != nullptr;};
    void deleteResourcesToImport() { this->resourcesToImport_ = nullptr;};
    inline const vector<CreateChangeSetRequest::ResourcesToImport> & getResourcesToImport() const { DARABONBA_PTR_GET_CONST(resourcesToImport_, vector<CreateChangeSetRequest::ResourcesToImport>) };
    inline vector<CreateChangeSetRequest::ResourcesToImport> getResourcesToImport() { DARABONBA_PTR_GET(resourcesToImport_, vector<CreateChangeSetRequest::ResourcesToImport>) };
    inline CreateChangeSetRequest& setResourcesToImport(const vector<CreateChangeSetRequest::ResourcesToImport> & resourcesToImport) { DARABONBA_PTR_SET_VALUE(resourcesToImport_, resourcesToImport) };
    inline CreateChangeSetRequest& setResourcesToImport(vector<CreateChangeSetRequest::ResourcesToImport> && resourcesToImport) { DARABONBA_PTR_SET_RVALUE(resourcesToImport_, resourcesToImport) };


    // stackId Field Functions 
    bool hasStackId() const { return this->stackId_ != nullptr;};
    void deleteStackId() { this->stackId_ = nullptr;};
    inline string getStackId() const { DARABONBA_PTR_GET_DEFAULT(stackId_, "") };
    inline CreateChangeSetRequest& setStackId(string stackId) { DARABONBA_PTR_SET_VALUE(stackId_, stackId) };


    // stackName Field Functions 
    bool hasStackName() const { return this->stackName_ != nullptr;};
    void deleteStackName() { this->stackName_ = nullptr;};
    inline string getStackName() const { DARABONBA_PTR_GET_DEFAULT(stackName_, "") };
    inline CreateChangeSetRequest& setStackName(string stackName) { DARABONBA_PTR_SET_VALUE(stackName_, stackName) };


    // stackPolicyBody Field Functions 
    bool hasStackPolicyBody() const { return this->stackPolicyBody_ != nullptr;};
    void deleteStackPolicyBody() { this->stackPolicyBody_ = nullptr;};
    inline string getStackPolicyBody() const { DARABONBA_PTR_GET_DEFAULT(stackPolicyBody_, "") };
    inline CreateChangeSetRequest& setStackPolicyBody(string stackPolicyBody) { DARABONBA_PTR_SET_VALUE(stackPolicyBody_, stackPolicyBody) };


    // stackPolicyDuringUpdateBody Field Functions 
    bool hasStackPolicyDuringUpdateBody() const { return this->stackPolicyDuringUpdateBody_ != nullptr;};
    void deleteStackPolicyDuringUpdateBody() { this->stackPolicyDuringUpdateBody_ = nullptr;};
    inline string getStackPolicyDuringUpdateBody() const { DARABONBA_PTR_GET_DEFAULT(stackPolicyDuringUpdateBody_, "") };
    inline CreateChangeSetRequest& setStackPolicyDuringUpdateBody(string stackPolicyDuringUpdateBody) { DARABONBA_PTR_SET_VALUE(stackPolicyDuringUpdateBody_, stackPolicyDuringUpdateBody) };


    // stackPolicyDuringUpdateURL Field Functions 
    bool hasStackPolicyDuringUpdateURL() const { return this->stackPolicyDuringUpdateURL_ != nullptr;};
    void deleteStackPolicyDuringUpdateURL() { this->stackPolicyDuringUpdateURL_ = nullptr;};
    inline string getStackPolicyDuringUpdateURL() const { DARABONBA_PTR_GET_DEFAULT(stackPolicyDuringUpdateURL_, "") };
    inline CreateChangeSetRequest& setStackPolicyDuringUpdateURL(string stackPolicyDuringUpdateURL) { DARABONBA_PTR_SET_VALUE(stackPolicyDuringUpdateURL_, stackPolicyDuringUpdateURL) };


    // stackPolicyURL Field Functions 
    bool hasStackPolicyURL() const { return this->stackPolicyURL_ != nullptr;};
    void deleteStackPolicyURL() { this->stackPolicyURL_ = nullptr;};
    inline string getStackPolicyURL() const { DARABONBA_PTR_GET_DEFAULT(stackPolicyURL_, "") };
    inline CreateChangeSetRequest& setStackPolicyURL(string stackPolicyURL) { DARABONBA_PTR_SET_VALUE(stackPolicyURL_, stackPolicyURL) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<CreateChangeSetRequest::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<CreateChangeSetRequest::Tags>) };
    inline vector<CreateChangeSetRequest::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<CreateChangeSetRequest::Tags>) };
    inline CreateChangeSetRequest& setTags(const vector<CreateChangeSetRequest::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline CreateChangeSetRequest& setTags(vector<CreateChangeSetRequest::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // taintResources Field Functions 
    bool hasTaintResources() const { return this->taintResources_ != nullptr;};
    void deleteTaintResources() { this->taintResources_ = nullptr;};
    inline const vector<string> & getTaintResources() const { DARABONBA_PTR_GET_CONST(taintResources_, vector<string>) };
    inline vector<string> getTaintResources() { DARABONBA_PTR_GET(taintResources_, vector<string>) };
    inline CreateChangeSetRequest& setTaintResources(const vector<string> & taintResources) { DARABONBA_PTR_SET_VALUE(taintResources_, taintResources) };
    inline CreateChangeSetRequest& setTaintResources(vector<string> && taintResources) { DARABONBA_PTR_SET_RVALUE(taintResources_, taintResources) };


    // templateBody Field Functions 
    bool hasTemplateBody() const { return this->templateBody_ != nullptr;};
    void deleteTemplateBody() { this->templateBody_ = nullptr;};
    inline string getTemplateBody() const { DARABONBA_PTR_GET_DEFAULT(templateBody_, "") };
    inline CreateChangeSetRequest& setTemplateBody(string templateBody) { DARABONBA_PTR_SET_VALUE(templateBody_, templateBody) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline CreateChangeSetRequest& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // templateScratchId Field Functions 
    bool hasTemplateScratchId() const { return this->templateScratchId_ != nullptr;};
    void deleteTemplateScratchId() { this->templateScratchId_ = nullptr;};
    inline string getTemplateScratchId() const { DARABONBA_PTR_GET_DEFAULT(templateScratchId_, "") };
    inline CreateChangeSetRequest& setTemplateScratchId(string templateScratchId) { DARABONBA_PTR_SET_VALUE(templateScratchId_, templateScratchId) };


    // templateURL Field Functions 
    bool hasTemplateURL() const { return this->templateURL_ != nullptr;};
    void deleteTemplateURL() { this->templateURL_ = nullptr;};
    inline string getTemplateURL() const { DARABONBA_PTR_GET_DEFAULT(templateURL_, "") };
    inline CreateChangeSetRequest& setTemplateURL(string templateURL) { DARABONBA_PTR_SET_VALUE(templateURL_, templateURL) };


    // templateVersion Field Functions 
    bool hasTemplateVersion() const { return this->templateVersion_ != nullptr;};
    void deleteTemplateVersion() { this->templateVersion_ = nullptr;};
    inline string getTemplateVersion() const { DARABONBA_PTR_GET_DEFAULT(templateVersion_, "") };
    inline CreateChangeSetRequest& setTemplateVersion(string templateVersion) { DARABONBA_PTR_SET_VALUE(templateVersion_, templateVersion) };


    // timeoutInMinutes Field Functions 
    bool hasTimeoutInMinutes() const { return this->timeoutInMinutes_ != nullptr;};
    void deleteTimeoutInMinutes() { this->timeoutInMinutes_ = nullptr;};
    inline int64_t getTimeoutInMinutes() const { DARABONBA_PTR_GET_DEFAULT(timeoutInMinutes_, 0L) };
    inline CreateChangeSetRequest& setTimeoutInMinutes(int64_t timeoutInMinutes) { DARABONBA_PTR_SET_VALUE(timeoutInMinutes_, timeoutInMinutes) };


    // usePreviousParameters Field Functions 
    bool hasUsePreviousParameters() const { return this->usePreviousParameters_ != nullptr;};
    void deleteUsePreviousParameters() { this->usePreviousParameters_ = nullptr;};
    inline bool getUsePreviousParameters() const { DARABONBA_PTR_GET_DEFAULT(usePreviousParameters_, false) };
    inline CreateChangeSetRequest& setUsePreviousParameters(bool usePreviousParameters) { DARABONBA_PTR_SET_VALUE(usePreviousParameters_, usePreviousParameters) };


  protected:
    // The name of the change set.\\
    // The name can be up to 255 characters in length and can contain digits, letters, hyphens (-), and underscores (_). The name must start with a digit or a letter.
    // 
    // > Make sure that the name is unique among all names of change sets that are associated with the specified stack.
    // 
    // This parameter is required.
    shared_ptr<string> changeSetName_ {};
    // The type of the change set. Valid values:
    // 
    // *   CREATE: creates a change set for a new stack.
    // *   UPDATE (default): creates a change set for an existing stack.
    // *   IMPORT: creates a change set for a new stack or an existing stack to import resources that are not managed by ROS.
    // 
    // If you set ChangeSetType to CREATE, ROS creates a stack. The stack remains in the `REVIEW_IN_PROGRESS` state until you execute the change set.
    // 
    // > 
    // 
    // *   You cannot set ChangeSetType to UPDATE when you create a change set for a new stack. You cannot set ChangeSetType to CREATE when you create a change set for an existing stack.
    // 
    // *   If you set ChangeSetType to Import, you cannot configure a stack policy. You can specify ChangeSetType only when you create or update a stack.
    shared_ptr<string> changeSetType_ {};
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the value, but you must make sure that the value is unique among different requests.\\
    // The token can contain letters, digits, hyphens (-), and underscores (_) and cannot exceed 64 characters in length.\\
    // For more information, see [How to ensure idempotence](https://help.aliyun.com/document_detail/134212.html).
    shared_ptr<string> clientToken_ {};
    // The description of the change set. The description can be up to 1,024 bytes in length.
    shared_ptr<string> description_ {};
    // Specifies whether to disable rollback when the stack fails to be created.\\
    // Valid values:
    // 
    // *   true: disables rollback for the stack when the stack fails to be created.
    // *   false (default): enables rollback for the stack when the stack fails to be created.
    // 
    // > This parameter takes effect only if you set ChangeSetType to CREATE or IMPORT.
    shared_ptr<bool> disableRollback_ {};
    // The callback URLs that are used to receive stack events.
    shared_ptr<vector<string>> notificationURLs_ {};
    // The maximum number of concurrent operations that can be performed on resources. By default, this parameter is empty. You can set this parameter to an integer that is greater than or equal to 0. If you set this parameter to a specific value, ROS associates the value with the stack. The value can affect subsequent operations on the stack.
    // 
    // This parameter takes effect only if you set ChangeSetType to CREATE or UPDATE.
    // 
    // *   Valid values for change sets of the CREATE type:
    // 
    //     *   If you set this parameter to an integer that is greater than 0, the integer is used.
    //     *   If you set this parameter to 0 or leave this parameter empty, no limit is imposed on ROS stacks. However, the default value in Terraform is used for Terraform stacks. In most cases, the default value in Terraform is 10.
    // 
    // *   Valid values for change sets of the UPDATE type:
    // 
    //     *   If you set this parameter to an integer that is greater than 0, the integer is used.
    //     *   If you set this parameter to 0, no limit is imposed on ROS stacks. However, the default value in Terraform is used for Terraform stacks. In most cases, the default value in Terraform is 10.
    //     *   If you leave this parameter empty, the value that you specified for this parameter in the previous request is used. If you left this parameter empty in the previous request, no limit is imposed on ROS stacks. However, the default value in Terraform is used for Terraform stacks. In most cases, the default value in Terraform is 10.
    shared_ptr<int64_t> parallelism_ {};
    // The parameters that are defined in the template.
    shared_ptr<vector<CreateChangeSetRequest::Parameters>> parameters_ {};
    // The name of the Resource Access Management (RAM) role. ROS assumes the RAM role to create the stack and uses the credentials of the role to call the APIs of Alibaba Cloud services.\\
    // ROS assumes the RAM role to perform operations on the stack. If you have permissions to perform operations on the stack, ROS assumes the RAM role even if you do not have permissions to use the RAM role. You must make sure that permissions are granted to the RAM role based on the principle of least privilege.\\
    // If you do not specify this parameter, ROS assumes the existing role of the stack. If no roles are available, ROS uses a temporary credential that is generated from the credentials of your account.\\
    // The RAM role name can be up to 64 characters in length.
    // 
    // For more information about RAM roles, see [Use a stack role](https://help.aliyun.com/document_detail/2568025.html).
    shared_ptr<string> ramRoleName_ {};
    // The region ID of the change set.
    // 
    // You can call the [DescribeRegions](https://help.aliyun.com/document_detail/131035.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // Specifies whether to enable replacement update if a resource property is changed and you cannot modify the new resource property. For a change, the physical ID of the resource remains unchanged. For a replacement update, the existing resource is deleted, a new resource is created, and the physical ID of the resource is changed. Valid values:
    // 
    // *   Enabled
    // *   Disabled (default)
    // 
    // > Operations that you perform to modify the resource properties for an update take precedence over operations you perform to replace the resource properties for an update. This parameter takes effect only if you set ChangeSetType to UPDATE.
    shared_ptr<string> replacementOption_ {};
    shared_ptr<string> resourceGroupId_ {};
    // The resources that you want to import to the stack.
    shared_ptr<vector<CreateChangeSetRequest::ResourcesToImport>> resourcesToImport_ {};
    // The ID of the stack for which you want to create the change set. ROS compares the stack information with the information that you submit, such as an updated template or parameter value, to generate the change set.\\
    // You can call the [ListStacks](https://help.aliyun.com/document_detail/610818.html) operation to query the stack ID.
    // 
    // >  This parameter takes effect only when ChangeSetType is set to UPDATE or IMPORT.
    shared_ptr<string> stackId_ {};
    // The name of the stack for which you want to create the change set.\\
    // The name can be up to 255 characters in length and can contain digits, letters, hyphens (-), and underscores (_). The name must start with a digit or a letter.
    // 
    // > This parameter takes effect only if you set ChangeSetType to CREATE or IMPORT.
    shared_ptr<string> stackName_ {};
    // The structure that contains the stack policy body. The policy body must be 1 to 16,384 bytes in length.
    // 
    // If you set ChangeSetType to **CREATE**, you can specify StackPolicyBody or StackPolicyURL.
    // 
    // If you set ChangeSetType to **UPDATE**, you can specify only one of the following parameters:
    // 
    // *   StackPolicyBody
    // *   StackPolicyURL
    // *   StackPolicyDuringUpdateBody
    // *   StackPolicyDuringUpdateURL
    shared_ptr<string> stackPolicyBody_ {};
    // The structure of the temporary overriding stack policy. The policy body must be 1 to 16,384 bytes in length.\\
    // If you need to update protected resources, specify a temporary overriding stack policy for the resources during the update. If you do not specify a temporary overriding stack policy, the existing stack policy that is associated with the stack is used.\\
    // This parameter takes effect only if you set ChangeSetType to UPDATE. You can specify only one of the following parameters:
    // 
    // *   StackPolicyBody
    // *   StackPolicyURL
    // *   StackPolicyDuringUpdateBody
    // *   StackPolicyDuringUpdateURL
    shared_ptr<string> stackPolicyDuringUpdateBody_ {};
    // The URL of the stack policy based on which the stack is updated. The URL must point to a policy that is located on an HTTP or HTTPS web server or in an OSS bucket, such as oss://ros/stack-policy/demo and oss://ros/stack-policy/demo?RegionId=cn-hangzhou. The policy file can be up to 16,384 bytes in length.
    // 
    // > If you do not specify the region of the OSS bucket, the value of RegionId is used.
    // 
    // The URL can be up to 1,350 bytes in length.\\
    // If you need to update protected resources, specify a temporary overriding stack policy for the resources during the update. If you do not specify a stack policy, the existing policy that is associated with the stack is used. This parameter takes effect only if you set ChangeSetType to UPDATE. You can specify only one of the following parameters:
    // 
    // *   StackPolicyBody
    // *   StackPolicyURL
    // *   StackPolicyDuringUpdateBody
    // *   StackPolicyDuringUpdateURL
    shared_ptr<string> stackPolicyDuringUpdateURL_ {};
    // The URL of the file that contains the stack policy. The URL must point to a policy that is located on an HTTP or HTTPS web server or in an Object Storage Service (OSS) bucket, such as oss://ros/stack-policy/demo or oss://ros/stack-policy/demo?RegionId=cn-hangzhou. The policy file can be up to 16,384 bytes in length.
    // 
    // The URL can be up to 1,350 bytes in length.
    // 
    // >  If you do not specify the region ID of the OSS bucket, the value of RegionId is used.
    // 
    // If you set ChangeSetType to **CREATE**, you can specify StackPolicyBody or StackPolicyURL.
    // 
    // If you set ChangeSetType to **UPDATE**, you can specify only one of the following parameters:
    // 
    // *   StackPolicyBody
    // *   StackPolicyURL
    // *   StackPolicyDuringUpdateBody
    // *   StackPolicyDuringUpdateURL
    shared_ptr<string> stackPolicyURL_ {};
    shared_ptr<vector<CreateChangeSetRequest::Tags>> tags_ {};
    shared_ptr<vector<string>> taintResources_ {};
    // The structure that contains the template body. The template body must be 1 to 524,288 bytes in length. If the length of the template body exceeds the upper limit, we recommend that you add parameters to the HTTP POST request body to prevent request failures caused by excessively long URLs.
    // 
    // >  You must and can specify only one of the following parameters: TemplateBody, TemplateURL, and TemplateId.
    shared_ptr<string> templateBody_ {};
    // The template ID. This parameter applies to shared templates and private templates.
    // 
    // You can call the [ListTemplates](https://help.aliyun.com/document_detail/610842.html) operation to query the template ID.
    // 
    // >  You can specify only one of the following parameters: TemplateBody, TemplateURL, and TemplateId.
    shared_ptr<string> templateId_ {};
    // The ID of the resource scenario. In this example, this parameter specifies the ID of a resource management scenario.
    // 
    // This parameter takes effect only when ChangeSetType is set to IMPORT. TemplateScratchId is supported only when you import resources to create a new stack.
    // 
    // If you want to use a resource management scenario to import resources, you can specify only TemplateScratchId rather than configuring parameters related to templates.
    // 
    // You can call the [ListTemplateScratches](https://help.aliyun.com/document_detail/610832.html) operation to query the ID of the resource management scenario.
    shared_ptr<string> templateScratchId_ {};
    // The URL of the file that contains the template body. The URL must point to a template that is located on an HTTP or HTTPS web server or in an OSS bucket, such as oss://ros/template/demo and oss://ros/template/demo?RegionId=cn-hangzhou. The template body can be up to 524,288 bytes in length.
    // 
    // > If you do not specify the region of the OSS bucket, the value of RegionId is used.
    // 
    // You can specify only one of the following parameters: TemplateBody, TemplateURL, and TemplateId.
    // 
    // The URL can be up to 1,024 bytes in length.
    shared_ptr<string> templateURL_ {};
    // The version of the template.
    // 
    // > This parameter takes effect only if you specify TemplateId.
    shared_ptr<string> templateVersion_ {};
    // The amount of time that can elapse before the stack enters the CREATE_FAILED or UPDATE_FAILED state.\\
    // If you set ChangeSetType to CREATE, this parameter is required. If you set ChangeSetType to UPDATE, this parameter is optional.
    // 
    // *   Unit: minutes.
    // *   Valid values: 10 to 1440.
    // *   Default value: 60.
    shared_ptr<int64_t> timeoutInMinutes_ {};
    // Specifies whether to use the values that were passed last time for the parameters that you do not specify in the current request. Valid values:
    // 
    // *   true
    // *   false (default)
    // 
    // > This parameter takes effect only if you set ChangeSetType to UPDATE or IMPORT.
    shared_ptr<bool> usePreviousParameters_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif
