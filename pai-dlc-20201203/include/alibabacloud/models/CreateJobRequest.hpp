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
      DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
      DARABONBA_PTR_TO_JSON(ElasticSpec, elasticSpec_);
      DARABONBA_PTR_TO_JSON(Envs, envs_);
      DARABONBA_PTR_TO_JSON(JobMaxRunningTimeMinutes, jobMaxRunningTimeMinutes_);
      DARABONBA_PTR_TO_JSON(JobSpecs, jobSpecs_);
      DARABONBA_PTR_TO_JSON(JobType, jobType_);
      DARABONBA_PTR_TO_JSON(Options, options_);
      DARABONBA_PTR_TO_JSON(Priority, priority_);
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(Settings, settings_);
      DARABONBA_PTR_TO_JSON(SuccessPolicy, successPolicy_);
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
      DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
      DARABONBA_PTR_FROM_JSON(ElasticSpec, elasticSpec_);
      DARABONBA_PTR_FROM_JSON(Envs, envs_);
      DARABONBA_PTR_FROM_JSON(JobMaxRunningTimeMinutes, jobMaxRunningTimeMinutes_);
      DARABONBA_PTR_FROM_JSON(JobSpecs, jobSpecs_);
      DARABONBA_PTR_FROM_JSON(JobType, jobType_);
      DARABONBA_PTR_FROM_JSON(Options, options_);
      DARABONBA_PTR_FROM_JSON(Priority, priority_);
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(Settings, settings_);
      DARABONBA_PTR_FROM_JSON(SuccessPolicy, successPolicy_);
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
      // The default route. Default value: false. Valid values:
      // 
      // *   eth0: The default network interface is used to access the Internet through the public gateway.
      // *   eth1: The user\\"s elastic network interface (ENI) is used to access the Internet through the private gateway. For more information about the configuration method, see [Enable Internet access for a DSW instance by using a private Internet NAT gateway](https://help.aliyun.com/document_detail/2525343.html).
      shared_ptr<string> defaultRoute_ {};
      // The extended CIDR block.
      // 
      // *   If you leave the SwitchId and ExtendedCIDRs parameters empty, the system automatically obtains all CIDR blocks in a VPC.
      // *   If you configure the SwitchId and ExtendedCIDRs parameters, we recommend that you specify all CIDR blocks in a VPC.
      shared_ptr<vector<string>> extendedCIDRs_ {};
      // The ID of the security group.
      shared_ptr<string> securityGroupId_ {};
      // The vSwitch ID. This parameter is optional.
      // 
      // *   If you leave this parameter empty, the system automatically selects a vSwitch based on the inventory status.
      // *   You can also specify a vSwitch ID.
      shared_ptr<string> switchId_ {};
      // The VPC ID.
      shared_ptr<string> vpcId_ {};
    };

    class DataSources : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DataSources& obj) { 
        DARABONBA_PTR_TO_JSON(DataSourceId, dataSourceId_);
        DARABONBA_PTR_TO_JSON(DataSourceVersion, dataSourceVersion_);
        DARABONBA_PTR_TO_JSON(EnableCache, enableCache_);
        DARABONBA_PTR_TO_JSON(MountAccess, mountAccess_);
        DARABONBA_PTR_TO_JSON(MountPath, mountPath_);
        DARABONBA_PTR_TO_JSON(Options, options_);
        DARABONBA_PTR_TO_JSON(Uri, uri_);
      };
      friend void from_json(const Darabonba::Json& j, DataSources& obj) { 
        DARABONBA_PTR_FROM_JSON(DataSourceId, dataSourceId_);
        DARABONBA_PTR_FROM_JSON(DataSourceVersion, dataSourceVersion_);
        DARABONBA_PTR_FROM_JSON(EnableCache, enableCache_);
        DARABONBA_PTR_FROM_JSON(MountAccess, mountAccess_);
        DARABONBA_PTR_FROM_JSON(MountPath, mountPath_);
        DARABONBA_PTR_FROM_JSON(Options, options_);
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
      virtual bool empty() const override { return this->dataSourceId_ == nullptr
        && this->dataSourceVersion_ == nullptr && this->enableCache_ == nullptr && this->mountAccess_ == nullptr && this->mountPath_ == nullptr && this->options_ == nullptr
        && this->uri_ == nullptr; };
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


      // uri Field Functions 
      bool hasUri() const { return this->uri_ != nullptr;};
      void deleteUri() { this->uri_ = nullptr;};
      inline string getUri() const { DARABONBA_PTR_GET_DEFAULT(uri_, "") };
      inline DataSources& setUri(string uri) { DARABONBA_PTR_SET_VALUE(uri_, uri) };


    protected:
      // The data source ID.
      shared_ptr<string> dataSourceId_ {};
      shared_ptr<string> dataSourceVersion_ {};
      shared_ptr<bool> enableCache_ {};
      shared_ptr<string> mountAccess_ {};
      // The path to which the job is mounted. By default, the mount path in the data source configuration is used. This parameter is optional.
      shared_ptr<string> mountPath_ {};
      // The mount attribute of the custom dataset. Set the value to OSS.
      shared_ptr<string> options_ {};
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
      // The branch of the referenced code repository. By default, the branch configured in the code source is used. This parameter is optional.
      shared_ptr<string> branch_ {};
      // The ID of the code source.
      shared_ptr<string> codeSourceId_ {};
      // The commit ID of the code to be downloaded. By default, the commit ID configured in the code source is used. This parameter is optional.
      shared_ptr<string> commit_ {};
      // The path to which the job is mounted. By default, the mount path configured in the data source is used. This parameter is optional.
      shared_ptr<string> mountPath_ {};
    };

    virtual bool empty() const override { return this->accessibility_ == nullptr
        && this->codeSource_ == nullptr && this->credentialConfig_ == nullptr && this->customEnvs_ == nullptr && this->dataSources_ == nullptr && this->debuggerConfigContent_ == nullptr
        && this->displayName_ == nullptr && this->elasticSpec_ == nullptr && this->envs_ == nullptr && this->jobMaxRunningTimeMinutes_ == nullptr && this->jobSpecs_ == nullptr
        && this->jobType_ == nullptr && this->options_ == nullptr && this->priority_ == nullptr && this->resourceId_ == nullptr && this->settings_ == nullptr
        && this->successPolicy_ == nullptr && this->thirdpartyLibDir_ == nullptr && this->thirdpartyLibs_ == nullptr && this->userCommand_ == nullptr && this->userVpc_ == nullptr
        && this->workspaceId_ == nullptr; };
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
    // The job visibility. Valid values:
    // 
    // *   PUBLIC: The job is visible to all members in the workspace.
    // *   PRIVATE: The job is visible only to you and the administrator of the workspace.
    shared_ptr<string> accessibility_ {};
    // The code source of the job. Before the node of the job runs, DLC automatically downloads the configured code from the code source and mounts the code to the local path of the container.
    shared_ptr<CreateJobRequest::CodeSource> codeSource_ {};
    // The access credential configuration.
    shared_ptr<CredentialConfig> credentialConfig_ {};
    shared_ptr<vector<CreateJobRequest::CustomEnvs>> customEnvs_ {};
    // The data sources for job running.
    shared_ptr<vector<CreateJobRequest::DataSources>> dataSources_ {};
    // This parameter is not supported.
    shared_ptr<string> debuggerConfigContent_ {};
    // The job name. The name must be in the following format:
    // 
    // *   The name must be 1 to 256 characters in length.
    // *   The name can contain digits, letters, underscores (_), periods (.), and hyphens (-).
    // 
    // This parameter is required.
    shared_ptr<string> displayName_ {};
    // This parameter is not supported.
    shared_ptr<JobElasticSpec> elasticSpec_ {};
    // The environment variables.
    shared_ptr<map<string, string>> envs_ {};
    // The maximum running duration of the job. Unit: minutes.
    shared_ptr<int64_t> jobMaxRunningTimeMinutes_ {};
    // **JobSpecs** describes the configurations for job running, such as the image address, startup command, node resource declaration, and number of replicas.
    // 
    // A DLC job consists of different types of nodes. If nodes of the same type have exactly the same configuration, the configuration is called JobSpec. **JobSpecs** specifies the configurations of all types of nodes. The value is of the array type.
    // 
    // This parameter is required.
    shared_ptr<vector<JobSpec>> jobSpecs_ {};
    // The job type. The value is case-sensitive. The following job types are supported:
    // 
    // *   TFJob
    // *   PyTorchJob
    // *   MPIJob
    // *   XGBoostJob
    // *   OneFlowJob
    // *   ElasticBatchJob
    // *   SlurmJob
    // *   RayJob
    // 
    // Valid values and corresponding frameworks:
    // 
    // *   OneFlowJob: OneFlow.
    // *   PyTorchJob: PyTorch.
    // *   SlurmJob: Slurm.
    // *   XGBoostJob: XGBoost.
    // *   ElasticBatchJob: ElasticBatch.
    // *   MPIJob: MPIJob.
    // *   TFJob: Tensorflow.
    // *   RayJob: Ray.
    // 
    // This parameter is required.
    shared_ptr<string> jobType_ {};
    // The additional configuration of the job. You can use this parameter to adjust the behavior of the attached data source. For example, if the attached data source of the job is of the OSS type, you can use this parameter to add the following configurations to override the default parameters of JindoFS: `fs.oss.download.thread.concurrency=4,fs.oss.download.queue.size=16`.
    shared_ptr<string> options_ {};
    // The priority of the job. Default value: 1. Valid values: 1 to 9.
    // 
    // *   1 is the lowest priority.
    // *   9: the highest priority.
    shared_ptr<int32_t> priority_ {};
    // The ID of the resource group. This parameter is optional.
    // 
    // *   If you leave this parameter empty, the job is submitted to a public resource group.
    // *   If a resource quota is bound to the current workspace, you can specify the resource quota ID. For more information about how to query the resource quota ID, see [Manage resource quotas](https://help.aliyun.com/document_detail/2651299.html).
    shared_ptr<string> resourceId_ {};
    // The additional parameter configurations of the job.
    shared_ptr<JobSettings> settings_ {};
    // The policy that is used to check whether a distributed multi-node job is successful. Only TensorFlow distributed multi-node jobs are supported.
    // 
    // *   ChiefWorker: If you use this policy, the job is considered successful when the pod on the chief node completes operations.
    // *   AllWorkers (default): If you use this policy, the job is considered successful when all worker nodes complete operations.
    shared_ptr<string> successPolicy_ {};
    // The folder in which the third-party Python library file requirements.txt is stored. Before the startup command specified by the UserCommand parameter is run on each node, DLC fetches the requirements.txt file from the folder and runs `pip install -r` to install the required package and library.
    shared_ptr<string> thirdpartyLibDir_ {};
    // The third-party Python libraries to be installed.
    shared_ptr<vector<string>> thirdpartyLibs_ {};
    // The startup command for all nodes of the job.
    // 
    // This parameter is required.
    shared_ptr<string> userCommand_ {};
    // The VPC settings.
    shared_ptr<CreateJobRequest::UserVpc> userVpc_ {};
    // The workspace ID.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDlc20201203
#endif
