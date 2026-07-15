// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CredentialConfig.hpp>
#include <alibabacloud/models/JobElasticSpec.hpp>
#include <map>
#include <alibabacloud/models/JobSpec.hpp>
#include <alibabacloud/models/JobSettings.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDlc20201203
{
namespace Models
{
  class CreateJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Accessibility, accessibility_);
      DARABONBA_PTR_TO_JSON(CodeSource, codeSource_);
      DARABONBA_PTR_TO_JSON(CredentialConfig, credentialConfig_);
      DARABONBA_PTR_TO_JSON(CustomEnvs, customEnvs_);
      DARABONBA_PTR_TO_JSON(DataSources, dataSources_);
      DARABONBA_PTR_TO_JSON(DebuggerConfigContent, debuggerConfigContent_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
      DARABONBA_PTR_TO_JSON(ElasticSpec, elasticSpec_);
      DARABONBA_PTR_TO_JSON(Envs, envs_);
      DARABONBA_PTR_TO_JSON(JobMaxRunningTimeMinutes, jobMaxRunningTimeMinutes_);
      DARABONBA_PTR_TO_JSON(JobSpecs, jobSpecs_);
      DARABONBA_PTR_TO_JSON(JobType, jobType_);
      DARABONBA_PTR_TO_JSON(Options, options_);
      DARABONBA_PTR_TO_JSON(Priority, priority_);
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(SchedulingStrategy, schedulingStrategy_);
      DARABONBA_PTR_TO_JSON(Settings, settings_);
      DARABONBA_PTR_TO_JSON(SuccessPolicy, successPolicy_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
      DARABONBA_PTR_TO_JSON(TemplateVersion, templateVersion_);
      DARABONBA_PTR_TO_JSON(ThirdpartyLibDir, thirdpartyLibDir_);
      DARABONBA_PTR_TO_JSON(ThirdpartyLibs, thirdpartyLibs_);
      DARABONBA_PTR_TO_JSON(UserCommand, userCommand_);
      DARABONBA_PTR_TO_JSON(UserVpc, userVpc_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Accessibility, accessibility_);
      DARABONBA_PTR_FROM_JSON(CodeSource, codeSource_);
      DARABONBA_PTR_FROM_JSON(CredentialConfig, credentialConfig_);
      DARABONBA_PTR_FROM_JSON(CustomEnvs, customEnvs_);
      DARABONBA_PTR_FROM_JSON(DataSources, dataSources_);
      DARABONBA_PTR_FROM_JSON(DebuggerConfigContent, debuggerConfigContent_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
      DARABONBA_PTR_FROM_JSON(ElasticSpec, elasticSpec_);
      DARABONBA_PTR_FROM_JSON(Envs, envs_);
      DARABONBA_PTR_FROM_JSON(JobMaxRunningTimeMinutes, jobMaxRunningTimeMinutes_);
      DARABONBA_PTR_FROM_JSON(JobSpecs, jobSpecs_);
      DARABONBA_PTR_FROM_JSON(JobType, jobType_);
      DARABONBA_PTR_FROM_JSON(Options, options_);
      DARABONBA_PTR_FROM_JSON(Priority, priority_);
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(SchedulingStrategy, schedulingStrategy_);
      DARABONBA_PTR_FROM_JSON(Settings, settings_);
      DARABONBA_PTR_FROM_JSON(SuccessPolicy, successPolicy_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
      DARABONBA_PTR_FROM_JSON(TemplateVersion, templateVersion_);
      DARABONBA_PTR_FROM_JSON(ThirdpartyLibDir, thirdpartyLibDir_);
      DARABONBA_PTR_FROM_JSON(ThirdpartyLibs, thirdpartyLibs_);
      DARABONBA_PTR_FROM_JSON(UserCommand, userCommand_);
      DARABONBA_PTR_FROM_JSON(UserVpc, userVpc_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    CreateJobRequest() = default ;
    CreateJobRequest(const CreateJobRequest &) = default ;
    CreateJobRequest(CreateJobRequest &&) = default ;
    CreateJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateJobRequest() = default ;
    CreateJobRequest& operator=(const CreateJobRequest &) = default ;
    CreateJobRequest& operator=(CreateJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class UserVpc : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const UserVpc& obj) { 
        DARABONBA_PTR_TO_JSON(DefaultRoute, defaultRoute_);
        DARABONBA_PTR_TO_JSON(ExtendedCIDRs, extendedCIDRs_);
        DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
        DARABONBA_PTR_TO_JSON(SwitchId, switchId_);
        DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      };
      friend void from_json(const Darabonba::Json& j, UserVpc& obj) { 
        DARABONBA_PTR_FROM_JSON(DefaultRoute, defaultRoute_);
        DARABONBA_PTR_FROM_JSON(ExtendedCIDRs, extendedCIDRs_);
        DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
        DARABONBA_PTR_FROM_JSON(SwitchId, switchId_);
        DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      };
      UserVpc() = default ;
      UserVpc(const UserVpc &) = default ;
      UserVpc(UserVpc &&) = default ;
      UserVpc(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~UserVpc() = default ;
      UserVpc& operator=(const UserVpc &) = default ;
      UserVpc& operator=(UserVpc &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->defaultRoute_ == nullptr
        && this->extendedCIDRs_ == nullptr && this->securityGroupId_ == nullptr && this->switchId_ == nullptr && this->vpcId_ == nullptr; };
      // defaultRoute Field Functions 
      bool hasDefaultRoute() const { return this->defaultRoute_ != nullptr;};
      void deleteDefaultRoute() { this->defaultRoute_ = nullptr;};
      inline string getDefaultRoute() const { DARABONBA_PTR_GET_DEFAULT(defaultRoute_, "") };
      inline UserVpc& setDefaultRoute(string defaultRoute) { DARABONBA_PTR_SET_VALUE(defaultRoute_, defaultRoute) };


      // extendedCIDRs Field Functions 
      bool hasExtendedCIDRs() const { return this->extendedCIDRs_ != nullptr;};
      void deleteExtendedCIDRs() { this->extendedCIDRs_ = nullptr;};
      inline const vector<string> & getExtendedCIDRs() const { DARABONBA_PTR_GET_CONST(extendedCIDRs_, vector<string>) };
      inline vector<string> getExtendedCIDRs() { DARABONBA_PTR_GET(extendedCIDRs_, vector<string>) };
      inline UserVpc& setExtendedCIDRs(const vector<string> & extendedCIDRs) { DARABONBA_PTR_SET_VALUE(extendedCIDRs_, extendedCIDRs) };
      inline UserVpc& setExtendedCIDRs(vector<string> && extendedCIDRs) { DARABONBA_PTR_SET_RVALUE(extendedCIDRs_, extendedCIDRs) };


      // securityGroupId Field Functions 
      bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
      void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
      inline string getSecurityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
      inline UserVpc& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


      // switchId Field Functions 
      bool hasSwitchId() const { return this->switchId_ != nullptr;};
      void deleteSwitchId() { this->switchId_ = nullptr;};
      inline string getSwitchId() const { DARABONBA_PTR_GET_DEFAULT(switchId_, "") };
      inline UserVpc& setSwitchId(string switchId) { DARABONBA_PTR_SET_VALUE(switchId_, switchId) };


      // vpcId Field Functions 
      bool hasVpcId() const { return this->vpcId_ != nullptr;};
      void deleteVpcId() { this->vpcId_ = nullptr;};
      inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
      inline UserVpc& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    protected:
      // The default routing. Valid values:
      // - eth0: uses the default network interface controller (NIC) to access external networks through the public gateway.
      // - eth1: uses the user elastic network interfaces (ENIs) to access external networks through the private gateway. For the specific configuration method, see [Configure a DSW instance to access the Internet through a dedicated public gateway](https://help.aliyun.com/document_detail/2525343.html).
      shared_ptr<string> defaultRoute_ {};
      // The extended CIDR blocks.
      // - If the vSwitch ID is empty, this parameter is not required. The system automatically obtains all CIDR blocks under the VPC.
      // - If the vSwitch ID is specified, this parameter is required. Specify all CIDR blocks under the VPC.
      shared_ptr<vector<string>> extendedCIDRs_ {};
      // The ID of the user security group.
      shared_ptr<string> securityGroupId_ {};
      // The ID of the user vSwitch. This parameter is optional.
      // - If this parameter is left empty, the system automatically selects an appropriate vSwitch based on inventory.
      // - You can also specify a vSwitch ID.
      shared_ptr<string> switchId_ {};
      // The ID of the user VPC.
      shared_ptr<string> vpcId_ {};
    };

    class DataSources : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DataSources& obj) { 
        DARABONBA_PTR_TO_JSON(AccessPointId, accessPointId_);
        DARABONBA_PTR_TO_JSON(DataSourceId, dataSourceId_);
        DARABONBA_PTR_TO_JSON(DataSourceVersion, dataSourceVersion_);
        DARABONBA_PTR_TO_JSON(EnableCache, enableCache_);
        DARABONBA_PTR_TO_JSON(MountAccess, mountAccess_);
        DARABONBA_PTR_TO_JSON(MountPath, mountPath_);
        DARABONBA_PTR_TO_JSON(Options, options_);
        DARABONBA_PTR_TO_JSON(RoleChain, roleChain_);
        DARABONBA_PTR_TO_JSON(Uri, uri_);
      };
      friend void from_json(const Darabonba::Json& j, DataSources& obj) { 
        DARABONBA_PTR_FROM_JSON(AccessPointId, accessPointId_);
        DARABONBA_PTR_FROM_JSON(DataSourceId, dataSourceId_);
        DARABONBA_PTR_FROM_JSON(DataSourceVersion, dataSourceVersion_);
        DARABONBA_PTR_FROM_JSON(EnableCache, enableCache_);
        DARABONBA_PTR_FROM_JSON(MountAccess, mountAccess_);
        DARABONBA_PTR_FROM_JSON(MountPath, mountPath_);
        DARABONBA_PTR_FROM_JSON(Options, options_);
        DARABONBA_PTR_FROM_JSON(RoleChain, roleChain_);
        DARABONBA_PTR_FROM_JSON(Uri, uri_);
      };
      DataSources() = default ;
      DataSources(const DataSources &) = default ;
      DataSources(DataSources &&) = default ;
      DataSources(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DataSources() = default ;
      DataSources& operator=(const DataSources &) = default ;
      DataSources& operator=(DataSources &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->accessPointId_ == nullptr
        && this->dataSourceId_ == nullptr && this->dataSourceVersion_ == nullptr && this->enableCache_ == nullptr && this->mountAccess_ == nullptr && this->mountPath_ == nullptr
        && this->options_ == nullptr && this->roleChain_ == nullptr && this->uri_ == nullptr; };
      // accessPointId Field Functions 
      bool hasAccessPointId() const { return this->accessPointId_ != nullptr;};
      void deleteAccessPointId() { this->accessPointId_ = nullptr;};
      inline string getAccessPointId() const { DARABONBA_PTR_GET_DEFAULT(accessPointId_, "") };
      inline DataSources& setAccessPointId(string accessPointId) { DARABONBA_PTR_SET_VALUE(accessPointId_, accessPointId) };


      // dataSourceId Field Functions 
      bool hasDataSourceId() const { return this->dataSourceId_ != nullptr;};
      void deleteDataSourceId() { this->dataSourceId_ = nullptr;};
      inline string getDataSourceId() const { DARABONBA_PTR_GET_DEFAULT(dataSourceId_, "") };
      inline DataSources& setDataSourceId(string dataSourceId) { DARABONBA_PTR_SET_VALUE(dataSourceId_, dataSourceId) };


      // dataSourceVersion Field Functions 
      bool hasDataSourceVersion() const { return this->dataSourceVersion_ != nullptr;};
      void deleteDataSourceVersion() { this->dataSourceVersion_ = nullptr;};
      inline string getDataSourceVersion() const { DARABONBA_PTR_GET_DEFAULT(dataSourceVersion_, "") };
      inline DataSources& setDataSourceVersion(string dataSourceVersion) { DARABONBA_PTR_SET_VALUE(dataSourceVersion_, dataSourceVersion) };


      // enableCache Field Functions 
      bool hasEnableCache() const { return this->enableCache_ != nullptr;};
      void deleteEnableCache() { this->enableCache_ = nullptr;};
      inline bool getEnableCache() const { DARABONBA_PTR_GET_DEFAULT(enableCache_, false) };
      inline DataSources& setEnableCache(bool enableCache) { DARABONBA_PTR_SET_VALUE(enableCache_, enableCache) };


      // mountAccess Field Functions 
      bool hasMountAccess() const { return this->mountAccess_ != nullptr;};
      void deleteMountAccess() { this->mountAccess_ = nullptr;};
      inline string getMountAccess() const { DARABONBA_PTR_GET_DEFAULT(mountAccess_, "") };
      inline DataSources& setMountAccess(string mountAccess) { DARABONBA_PTR_SET_VALUE(mountAccess_, mountAccess) };


      // mountPath Field Functions 
      bool hasMountPath() const { return this->mountPath_ != nullptr;};
      void deleteMountPath() { this->mountPath_ = nullptr;};
      inline string getMountPath() const { DARABONBA_PTR_GET_DEFAULT(mountPath_, "") };
      inline DataSources& setMountPath(string mountPath) { DARABONBA_PTR_SET_VALUE(mountPath_, mountPath) };


      // options Field Functions 
      bool hasOptions() const { return this->options_ != nullptr;};
      void deleteOptions() { this->options_ = nullptr;};
      inline string getOptions() const { DARABONBA_PTR_GET_DEFAULT(options_, "") };
      inline DataSources& setOptions(string options) { DARABONBA_PTR_SET_VALUE(options_, options) };


      // roleChain Field Functions 
      bool hasRoleChain() const { return this->roleChain_ != nullptr;};
      void deleteRoleChain() { this->roleChain_ = nullptr;};
      inline string getRoleChain() const { DARABONBA_PTR_GET_DEFAULT(roleChain_, "") };
      inline DataSources& setRoleChain(string roleChain) { DARABONBA_PTR_SET_VALUE(roleChain_, roleChain) };


      // uri Field Functions 
      bool hasUri() const { return this->uri_ != nullptr;};
      void deleteUri() { this->uri_ = nullptr;};
      inline string getUri() const { DARABONBA_PTR_GET_DEFAULT(uri_, "") };
      inline DataSources& setUri(string uri) { DARABONBA_PTR_SET_VALUE(uri_, uri) };


    protected:
      shared_ptr<string> accessPointId_ {};
      // The ID of the data source. <props="china">For information about how to obtain the data source ID, see [ListDatasets](https://help.aliyun.com/document_detail/457222.html)..
      shared_ptr<string> dataSourceId_ {};
      shared_ptr<string> dataSourceVersion_ {};
      shared_ptr<bool> enableCache_ {};
      shared_ptr<string> mountAccess_ {};
      // The mount path for this job. This parameter is optional. By default, the mount path configured in the data source is used.
      shared_ptr<string> mountPath_ {};
      // The custom dataset mount properties. Only OSS is supported.
      shared_ptr<string> options_ {};
      shared_ptr<string> roleChain_ {};
      // The data source path.
      shared_ptr<string> uri_ {};
    };

    class CustomEnvs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CustomEnvs& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Value, value_);
        DARABONBA_PTR_TO_JSON(Visible, visible_);
      };
      friend void from_json(const Darabonba::Json& j, CustomEnvs& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
        DARABONBA_PTR_FROM_JSON(Visible, visible_);
      };
      CustomEnvs() = default ;
      CustomEnvs(const CustomEnvs &) = default ;
      CustomEnvs(CustomEnvs &&) = default ;
      CustomEnvs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CustomEnvs() = default ;
      CustomEnvs& operator=(const CustomEnvs &) = default ;
      CustomEnvs& operator=(CustomEnvs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr && this->visible_ == nullptr; };
      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline CustomEnvs& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline CustomEnvs& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      // visible Field Functions 
      bool hasVisible() const { return this->visible_ != nullptr;};
      void deleteVisible() { this->visible_ = nullptr;};
      inline string getVisible() const { DARABONBA_PTR_GET_DEFAULT(visible_, "") };
      inline CustomEnvs& setVisible(string visible) { DARABONBA_PTR_SET_VALUE(visible_, visible) };


    protected:
      shared_ptr<string> key_ {};
      shared_ptr<string> value_ {};
      shared_ptr<string> visible_ {};
    };

    class CodeSource : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CodeSource& obj) { 
        DARABONBA_PTR_TO_JSON(Branch, branch_);
        DARABONBA_PTR_TO_JSON(CodeSourceId, codeSourceId_);
        DARABONBA_PTR_TO_JSON(Commit, commit_);
        DARABONBA_PTR_TO_JSON(MountPath, mountPath_);
      };
      friend void from_json(const Darabonba::Json& j, CodeSource& obj) { 
        DARABONBA_PTR_FROM_JSON(Branch, branch_);
        DARABONBA_PTR_FROM_JSON(CodeSourceId, codeSourceId_);
        DARABONBA_PTR_FROM_JSON(Commit, commit_);
        DARABONBA_PTR_FROM_JSON(MountPath, mountPath_);
      };
      CodeSource() = default ;
      CodeSource(const CodeSource &) = default ;
      CodeSource(CodeSource &&) = default ;
      CodeSource(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CodeSource() = default ;
      CodeSource& operator=(const CodeSource &) = default ;
      CodeSource& operator=(CodeSource &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->branch_ == nullptr
        && this->codeSourceId_ == nullptr && this->commit_ == nullptr && this->mountPath_ == nullptr; };
      // branch Field Functions 
      bool hasBranch() const { return this->branch_ != nullptr;};
      void deleteBranch() { this->branch_ = nullptr;};
      inline string getBranch() const { DARABONBA_PTR_GET_DEFAULT(branch_, "") };
      inline CodeSource& setBranch(string branch) { DARABONBA_PTR_SET_VALUE(branch_, branch) };


      // codeSourceId Field Functions 
      bool hasCodeSourceId() const { return this->codeSourceId_ != nullptr;};
      void deleteCodeSourceId() { this->codeSourceId_ = nullptr;};
      inline string getCodeSourceId() const { DARABONBA_PTR_GET_DEFAULT(codeSourceId_, "") };
      inline CodeSource& setCodeSourceId(string codeSourceId) { DARABONBA_PTR_SET_VALUE(codeSourceId_, codeSourceId) };


      // commit Field Functions 
      bool hasCommit() const { return this->commit_ != nullptr;};
      void deleteCommit() { this->commit_ = nullptr;};
      inline string getCommit() const { DARABONBA_PTR_GET_DEFAULT(commit_, "") };
      inline CodeSource& setCommit(string commit) { DARABONBA_PTR_SET_VALUE(commit_, commit) };


      // mountPath Field Functions 
      bool hasMountPath() const { return this->mountPath_ != nullptr;};
      void deleteMountPath() { this->mountPath_ = nullptr;};
      inline string getMountPath() const { DARABONBA_PTR_GET_DEFAULT(mountPath_, "") };
      inline CodeSource& setMountPath(string mountPath) { DARABONBA_PTR_SET_VALUE(mountPath_, mountPath) };


    protected:
      // The branch of the code repository referenced at runtime. This parameter is optional. By default, the branch configured in the code source is used.
      shared_ptr<string> branch_ {};
      // The code source ID. <props="china">For information about how to obtain the code source ID, see [ListCodeSources](https://help.aliyun.com/document_detail/459922.html)..
      shared_ptr<string> codeSourceId_ {};
      // The commit ID of the code to download for this job. This parameter is optional. By default, the commit ID configured in the code source is used.
      shared_ptr<string> commit_ {};
      // The mount path for this job. This parameter is optional. By default, the mount path configured in the code source is used.
      shared_ptr<string> mountPath_ {};
    };

    virtual bool empty() const override { return this->accessibility_ == nullptr
        && this->codeSource_ == nullptr && this->credentialConfig_ == nullptr && this->customEnvs_ == nullptr && this->dataSources_ == nullptr && this->debuggerConfigContent_ == nullptr
        && this->description_ == nullptr && this->displayName_ == nullptr && this->elasticSpec_ == nullptr && this->envs_ == nullptr && this->jobMaxRunningTimeMinutes_ == nullptr
        && this->jobSpecs_ == nullptr && this->jobType_ == nullptr && this->options_ == nullptr && this->priority_ == nullptr && this->resourceId_ == nullptr
        && this->schedulingStrategy_ == nullptr && this->settings_ == nullptr && this->successPolicy_ == nullptr && this->templateId_ == nullptr && this->templateVersion_ == nullptr
        && this->thirdpartyLibDir_ == nullptr && this->thirdpartyLibs_ == nullptr && this->userCommand_ == nullptr && this->userVpc_ == nullptr && this->workspaceId_ == nullptr; };
    // accessibility Field Functions 
    bool hasAccessibility() const { return this->accessibility_ != nullptr;};
    void deleteAccessibility() { this->accessibility_ = nullptr;};
    inline string getAccessibility() const { DARABONBA_PTR_GET_DEFAULT(accessibility_, "") };
    inline CreateJobRequest& setAccessibility(string accessibility) { DARABONBA_PTR_SET_VALUE(accessibility_, accessibility) };


    // codeSource Field Functions 
    bool hasCodeSource() const { return this->codeSource_ != nullptr;};
    void deleteCodeSource() { this->codeSource_ = nullptr;};
    inline const CreateJobRequest::CodeSource & getCodeSource() const { DARABONBA_PTR_GET_CONST(codeSource_, CreateJobRequest::CodeSource) };
    inline CreateJobRequest::CodeSource getCodeSource() { DARABONBA_PTR_GET(codeSource_, CreateJobRequest::CodeSource) };
    inline CreateJobRequest& setCodeSource(const CreateJobRequest::CodeSource & codeSource) { DARABONBA_PTR_SET_VALUE(codeSource_, codeSource) };
    inline CreateJobRequest& setCodeSource(CreateJobRequest::CodeSource && codeSource) { DARABONBA_PTR_SET_RVALUE(codeSource_, codeSource) };


    // credentialConfig Field Functions 
    bool hasCredentialConfig() const { return this->credentialConfig_ != nullptr;};
    void deleteCredentialConfig() { this->credentialConfig_ = nullptr;};
    inline const CredentialConfig & getCredentialConfig() const { DARABONBA_PTR_GET_CONST(credentialConfig_, CredentialConfig) };
    inline CredentialConfig getCredentialConfig() { DARABONBA_PTR_GET(credentialConfig_, CredentialConfig) };
    inline CreateJobRequest& setCredentialConfig(const CredentialConfig & credentialConfig) { DARABONBA_PTR_SET_VALUE(credentialConfig_, credentialConfig) };
    inline CreateJobRequest& setCredentialConfig(CredentialConfig && credentialConfig) { DARABONBA_PTR_SET_RVALUE(credentialConfig_, credentialConfig) };


    // customEnvs Field Functions 
    bool hasCustomEnvs() const { return this->customEnvs_ != nullptr;};
    void deleteCustomEnvs() { this->customEnvs_ = nullptr;};
    inline const vector<CreateJobRequest::CustomEnvs> & getCustomEnvs() const { DARABONBA_PTR_GET_CONST(customEnvs_, vector<CreateJobRequest::CustomEnvs>) };
    inline vector<CreateJobRequest::CustomEnvs> getCustomEnvs() { DARABONBA_PTR_GET(customEnvs_, vector<CreateJobRequest::CustomEnvs>) };
    inline CreateJobRequest& setCustomEnvs(const vector<CreateJobRequest::CustomEnvs> & customEnvs) { DARABONBA_PTR_SET_VALUE(customEnvs_, customEnvs) };
    inline CreateJobRequest& setCustomEnvs(vector<CreateJobRequest::CustomEnvs> && customEnvs) { DARABONBA_PTR_SET_RVALUE(customEnvs_, customEnvs) };


    // dataSources Field Functions 
    bool hasDataSources() const { return this->dataSources_ != nullptr;};
    void deleteDataSources() { this->dataSources_ = nullptr;};
    inline const vector<CreateJobRequest::DataSources> & getDataSources() const { DARABONBA_PTR_GET_CONST(dataSources_, vector<CreateJobRequest::DataSources>) };
    inline vector<CreateJobRequest::DataSources> getDataSources() { DARABONBA_PTR_GET(dataSources_, vector<CreateJobRequest::DataSources>) };
    inline CreateJobRequest& setDataSources(const vector<CreateJobRequest::DataSources> & dataSources) { DARABONBA_PTR_SET_VALUE(dataSources_, dataSources) };
    inline CreateJobRequest& setDataSources(vector<CreateJobRequest::DataSources> && dataSources) { DARABONBA_PTR_SET_RVALUE(dataSources_, dataSources) };


    // debuggerConfigContent Field Functions 
    bool hasDebuggerConfigContent() const { return this->debuggerConfigContent_ != nullptr;};
    void deleteDebuggerConfigContent() { this->debuggerConfigContent_ = nullptr;};
    inline string getDebuggerConfigContent() const { DARABONBA_PTR_GET_DEFAULT(debuggerConfigContent_, "") };
    inline CreateJobRequest& setDebuggerConfigContent(string debuggerConfigContent) { DARABONBA_PTR_SET_VALUE(debuggerConfigContent_, debuggerConfigContent) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateJobRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline CreateJobRequest& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // elasticSpec Field Functions 
    bool hasElasticSpec() const { return this->elasticSpec_ != nullptr;};
    void deleteElasticSpec() { this->elasticSpec_ = nullptr;};
    inline const JobElasticSpec & getElasticSpec() const { DARABONBA_PTR_GET_CONST(elasticSpec_, JobElasticSpec) };
    inline JobElasticSpec getElasticSpec() { DARABONBA_PTR_GET(elasticSpec_, JobElasticSpec) };
    inline CreateJobRequest& setElasticSpec(const JobElasticSpec & elasticSpec) { DARABONBA_PTR_SET_VALUE(elasticSpec_, elasticSpec) };
    inline CreateJobRequest& setElasticSpec(JobElasticSpec && elasticSpec) { DARABONBA_PTR_SET_RVALUE(elasticSpec_, elasticSpec) };


    // envs Field Functions 
    bool hasEnvs() const { return this->envs_ != nullptr;};
    void deleteEnvs() { this->envs_ = nullptr;};
    inline const map<string, string> & getEnvs() const { DARABONBA_PTR_GET_CONST(envs_, map<string, string>) };
    inline map<string, string> getEnvs() { DARABONBA_PTR_GET(envs_, map<string, string>) };
    inline CreateJobRequest& setEnvs(const map<string, string> & envs) { DARABONBA_PTR_SET_VALUE(envs_, envs) };
    inline CreateJobRequest& setEnvs(map<string, string> && envs) { DARABONBA_PTR_SET_RVALUE(envs_, envs) };


    // jobMaxRunningTimeMinutes Field Functions 
    bool hasJobMaxRunningTimeMinutes() const { return this->jobMaxRunningTimeMinutes_ != nullptr;};
    void deleteJobMaxRunningTimeMinutes() { this->jobMaxRunningTimeMinutes_ = nullptr;};
    inline int64_t getJobMaxRunningTimeMinutes() const { DARABONBA_PTR_GET_DEFAULT(jobMaxRunningTimeMinutes_, 0L) };
    inline CreateJobRequest& setJobMaxRunningTimeMinutes(int64_t jobMaxRunningTimeMinutes) { DARABONBA_PTR_SET_VALUE(jobMaxRunningTimeMinutes_, jobMaxRunningTimeMinutes) };


    // jobSpecs Field Functions 
    bool hasJobSpecs() const { return this->jobSpecs_ != nullptr;};
    void deleteJobSpecs() { this->jobSpecs_ = nullptr;};
    inline const vector<JobSpec> & getJobSpecs() const { DARABONBA_PTR_GET_CONST(jobSpecs_, vector<JobSpec>) };
    inline vector<JobSpec> getJobSpecs() { DARABONBA_PTR_GET(jobSpecs_, vector<JobSpec>) };
    inline CreateJobRequest& setJobSpecs(const vector<JobSpec> & jobSpecs) { DARABONBA_PTR_SET_VALUE(jobSpecs_, jobSpecs) };
    inline CreateJobRequest& setJobSpecs(vector<JobSpec> && jobSpecs) { DARABONBA_PTR_SET_RVALUE(jobSpecs_, jobSpecs) };


    // jobType Field Functions 
    bool hasJobType() const { return this->jobType_ != nullptr;};
    void deleteJobType() { this->jobType_ = nullptr;};
    inline string getJobType() const { DARABONBA_PTR_GET_DEFAULT(jobType_, "") };
    inline CreateJobRequest& setJobType(string jobType) { DARABONBA_PTR_SET_VALUE(jobType_, jobType) };


    // options Field Functions 
    bool hasOptions() const { return this->options_ != nullptr;};
    void deleteOptions() { this->options_ = nullptr;};
    inline string getOptions() const { DARABONBA_PTR_GET_DEFAULT(options_, "") };
    inline CreateJobRequest& setOptions(string options) { DARABONBA_PTR_SET_VALUE(options_, options) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline int32_t getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
    inline CreateJobRequest& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline CreateJobRequest& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // schedulingStrategy Field Functions 
    bool hasSchedulingStrategy() const { return this->schedulingStrategy_ != nullptr;};
    void deleteSchedulingStrategy() { this->schedulingStrategy_ = nullptr;};
    inline string getSchedulingStrategy() const { DARABONBA_PTR_GET_DEFAULT(schedulingStrategy_, "") };
    inline CreateJobRequest& setSchedulingStrategy(string schedulingStrategy) { DARABONBA_PTR_SET_VALUE(schedulingStrategy_, schedulingStrategy) };


    // settings Field Functions 
    bool hasSettings() const { return this->settings_ != nullptr;};
    void deleteSettings() { this->settings_ = nullptr;};
    inline const JobSettings & getSettings() const { DARABONBA_PTR_GET_CONST(settings_, JobSettings) };
    inline JobSettings getSettings() { DARABONBA_PTR_GET(settings_, JobSettings) };
    inline CreateJobRequest& setSettings(const JobSettings & settings) { DARABONBA_PTR_SET_VALUE(settings_, settings) };
    inline CreateJobRequest& setSettings(JobSettings && settings) { DARABONBA_PTR_SET_RVALUE(settings_, settings) };


    // successPolicy Field Functions 
    bool hasSuccessPolicy() const { return this->successPolicy_ != nullptr;};
    void deleteSuccessPolicy() { this->successPolicy_ = nullptr;};
    inline string getSuccessPolicy() const { DARABONBA_PTR_GET_DEFAULT(successPolicy_, "") };
    inline CreateJobRequest& setSuccessPolicy(string successPolicy) { DARABONBA_PTR_SET_VALUE(successPolicy_, successPolicy) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline CreateJobRequest& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // templateVersion Field Functions 
    bool hasTemplateVersion() const { return this->templateVersion_ != nullptr;};
    void deleteTemplateVersion() { this->templateVersion_ = nullptr;};
    inline int32_t getTemplateVersion() const { DARABONBA_PTR_GET_DEFAULT(templateVersion_, 0) };
    inline CreateJobRequest& setTemplateVersion(int32_t templateVersion) { DARABONBA_PTR_SET_VALUE(templateVersion_, templateVersion) };


    // thirdpartyLibDir Field Functions 
    bool hasThirdpartyLibDir() const { return this->thirdpartyLibDir_ != nullptr;};
    void deleteThirdpartyLibDir() { this->thirdpartyLibDir_ = nullptr;};
    inline string getThirdpartyLibDir() const { DARABONBA_PTR_GET_DEFAULT(thirdpartyLibDir_, "") };
    inline CreateJobRequest& setThirdpartyLibDir(string thirdpartyLibDir) { DARABONBA_PTR_SET_VALUE(thirdpartyLibDir_, thirdpartyLibDir) };


    // thirdpartyLibs Field Functions 
    bool hasThirdpartyLibs() const { return this->thirdpartyLibs_ != nullptr;};
    void deleteThirdpartyLibs() { this->thirdpartyLibs_ = nullptr;};
    inline const vector<string> & getThirdpartyLibs() const { DARABONBA_PTR_GET_CONST(thirdpartyLibs_, vector<string>) };
    inline vector<string> getThirdpartyLibs() { DARABONBA_PTR_GET(thirdpartyLibs_, vector<string>) };
    inline CreateJobRequest& setThirdpartyLibs(const vector<string> & thirdpartyLibs) { DARABONBA_PTR_SET_VALUE(thirdpartyLibs_, thirdpartyLibs) };
    inline CreateJobRequest& setThirdpartyLibs(vector<string> && thirdpartyLibs) { DARABONBA_PTR_SET_RVALUE(thirdpartyLibs_, thirdpartyLibs) };


    // userCommand Field Functions 
    bool hasUserCommand() const { return this->userCommand_ != nullptr;};
    void deleteUserCommand() { this->userCommand_ = nullptr;};
    inline string getUserCommand() const { DARABONBA_PTR_GET_DEFAULT(userCommand_, "") };
    inline CreateJobRequest& setUserCommand(string userCommand) { DARABONBA_PTR_SET_VALUE(userCommand_, userCommand) };


    // userVpc Field Functions 
    bool hasUserVpc() const { return this->userVpc_ != nullptr;};
    void deleteUserVpc() { this->userVpc_ = nullptr;};
    inline const CreateJobRequest::UserVpc & getUserVpc() const { DARABONBA_PTR_GET_CONST(userVpc_, CreateJobRequest::UserVpc) };
    inline CreateJobRequest::UserVpc getUserVpc() { DARABONBA_PTR_GET(userVpc_, CreateJobRequest::UserVpc) };
    inline CreateJobRequest& setUserVpc(const CreateJobRequest::UserVpc & userVpc) { DARABONBA_PTR_SET_VALUE(userVpc_, userVpc) };
    inline CreateJobRequest& setUserVpc(CreateJobRequest::UserVpc && userVpc) { DARABONBA_PTR_SET_RVALUE(userVpc_, userVpc) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline CreateJobRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // The visibility of the job. Valid values:
    // - PUBLIC: visible to all members in the workspace.
    // - PRIVATE: visible only to you and administrators in the workspace.
    shared_ptr<string> accessibility_ {};
    // The code source used by this job. Before the job nodes start, DLC automatically downloads the code configured in the code source and mounts it to a local directory of the container.
    shared_ptr<CreateJobRequest::CodeSource> codeSource_ {};
    // The access credential configuration.
    shared_ptr<CredentialConfig> credentialConfig_ {};
    shared_ptr<vector<CreateJobRequest::CustomEnvs>> customEnvs_ {};
    // The list of data sources used by the job.
    shared_ptr<vector<CreateJobRequest::DataSources>> dataSources_ {};
    // This parameter is not supported. Ignore this parameter.
    shared_ptr<string> debuggerConfigContent_ {};
    shared_ptr<string> description_ {};
    // The name of the job. The name must meet the following requirements:
    // - The name cannot exceed 256 characters in length.
    // - The name can contain digits, letters, underscores (_), periods (.), and hyphens (-).
    // 
    // This parameter is required.
    shared_ptr<string> displayName_ {};
    // This parameter is not supported. Ignore this parameter.
    shared_ptr<JobElasticSpec> elasticSpec_ {};
    // The environment variable configuration.
    shared_ptr<map<string, string>> envs_ {};
    // The maximum running duration of the job, in minutes.
    shared_ptr<int64_t> jobMaxRunningTimeMinutes_ {};
    // The various runtime configurations of the job, such as the image address, startup command, node resource declarations, and number of replicas.
    // 
    // A DLC job consists of different types of nodes. Nodes of the same type share identical configurations, which is called a JobSpec. **JobSpecs** describes the configurations of all node types and is an array of JobSpec objects.
    // 
    // This parameter is required.
    shared_ptr<vector<JobSpec>> jobSpecs_ {};
    // The job type. This parameter is case-sensitive. Valid values:
    // - TFJob
    // - PyTorchJob
    // - MPIJob
    // - XGBoostJob
    // - OneFlowJob
    // - ElasticBatchJob
    // - SlurmJob
    // - RayJob
    // - DataJuicerJob.
    // 
    // This parameter is required.
    shared_ptr<string> jobType_ {};
    // The additional configuration for this node. You can use this parameter to adjust the behavior of mounted data sources. For example, if the node has an OSS data source mounted, you can set this parameter to `fs.oss.download.thread.concurrency=4,fs.oss.download.queue.size=16` to overwrite the default JindoFS parameter settings.
    shared_ptr<string> options_ {};
    // The priority of the job. This parameter is optional. Default value: 1. Valid values: 1 to 9.
    // 
    // - 1: the lowest priority.
    // - 9: the highest priority.
    shared_ptr<int32_t> priority_ {};
    // The resource group ID. This parameter is optional.
    // - If this parameter is left empty, the job is submitted to the public resource group.
    // - If the current workspace has an attached resource quota, you can specify the corresponding resource quota ID. For details about how to query the resource quota ID, see [Manage resource quotas](https://help.aliyun.com/document_detail/2651299.html).
    shared_ptr<string> resourceId_ {};
    shared_ptr<string> schedulingStrategy_ {};
    // The additional parameter settings for the job.
    shared_ptr<JobSettings> settings_ {};
    // The success policy for distributed multi-node jobs. Only TensorFlow multi-node jobs support this parameter. Valid values:
    // - ChiefWorker: the entire job is considered successful when the Chief pod finishes successfully.
    // - AllWorkers (default): the entire job is considered successful only when all Worker pods finish successfully.
    shared_ptr<string> successPolicy_ {};
    // The job template ID.
    shared_ptr<string> templateId_ {};
    // The job template version.
    shared_ptr<int32_t> templateVersion_ {};
    // The name of the folder that contains the third-party Python library file (requirements.txt). Before running the specified UserCommand on each node, PAI-DLC retrieves the requirements.txt file from the specified folder and runs `pip install -r` to install the libraries.
    shared_ptr<string> thirdpartyLibDir_ {};
    // The list of third-party Python libraries to install.
    shared_ptr<vector<string>> thirdpartyLibs_ {};
    // The startup command for all nodes of the job.
    // 
    // This parameter is required.
    shared_ptr<string> userCommand_ {};
    // The user VPC configuration.
    shared_ptr<CreateJobRequest::UserVpc> userVpc_ {};
    // The workspace ID. <props="china">For information about how to obtain the workspace ID, see [ListWorkspaces](https://help.aliyun.com/document_detail/449124.html)..
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDlc20201203
#endif
