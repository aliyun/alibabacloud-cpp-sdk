// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESERVERIDEINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATESERVERIDEINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class UpdateServerIdeInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateServerIdeInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CredentialConfig, credentialConfig_);
      DARABONBA_PTR_TO_JSON(Cu, cu_);
      DARABONBA_PTR_TO_JSON(Datasets, datasets_);
      DARABONBA_PTR_TO_JSON(ImageId, imageId_);
      DARABONBA_PTR_TO_JSON(ImageUrl, imageUrl_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(UserVpc, userVpc_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateServerIdeInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CredentialConfig, credentialConfig_);
      DARABONBA_PTR_FROM_JSON(Cu, cu_);
      DARABONBA_PTR_FROM_JSON(Datasets, datasets_);
      DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
      DARABONBA_PTR_FROM_JSON(ImageUrl, imageUrl_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(UserVpc, userVpc_);
    };
    UpdateServerIdeInstanceRequest() = default ;
    UpdateServerIdeInstanceRequest(const UpdateServerIdeInstanceRequest &) = default ;
    UpdateServerIdeInstanceRequest(UpdateServerIdeInstanceRequest &&) = default ;
    UpdateServerIdeInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateServerIdeInstanceRequest() = default ;
    UpdateServerIdeInstanceRequest& operator=(const UpdateServerIdeInstanceRequest &) = default ;
    UpdateServerIdeInstanceRequest& operator=(UpdateServerIdeInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class UserVpc : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const UserVpc& obj) { 
        DARABONBA_PTR_TO_JSON(ForwardInfos, forwardInfos_);
        DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
        DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
        DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      };
      friend void from_json(const Darabonba::Json& j, UserVpc& obj) { 
        DARABONBA_PTR_FROM_JSON(ForwardInfos, forwardInfos_);
        DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
        DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
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
      class ForwardInfos : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ForwardInfos& obj) { 
          DARABONBA_PTR_TO_JSON(AccessType, accessType_);
          DARABONBA_PTR_TO_JSON(ContainerName, containerName_);
          DARABONBA_PTR_TO_JSON(EipAllocationId, eipAllocationId_);
          DARABONBA_PTR_TO_JSON(Enable, enable_);
          DARABONBA_PTR_TO_JSON(ExternalPort, externalPort_);
          DARABONBA_PTR_TO_JSON(ForwardPort, forwardPort_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(NatGatewayId, natGatewayId_);
          DARABONBA_PTR_TO_JSON(SSHPublicKey, SSHPublicKey_);
        };
        friend void from_json(const Darabonba::Json& j, ForwardInfos& obj) { 
          DARABONBA_PTR_FROM_JSON(AccessType, accessType_);
          DARABONBA_PTR_FROM_JSON(ContainerName, containerName_);
          DARABONBA_PTR_FROM_JSON(EipAllocationId, eipAllocationId_);
          DARABONBA_PTR_FROM_JSON(Enable, enable_);
          DARABONBA_PTR_FROM_JSON(ExternalPort, externalPort_);
          DARABONBA_PTR_FROM_JSON(ForwardPort, forwardPort_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(NatGatewayId, natGatewayId_);
          DARABONBA_PTR_FROM_JSON(SSHPublicKey, SSHPublicKey_);
        };
        ForwardInfos() = default ;
        ForwardInfos(const ForwardInfos &) = default ;
        ForwardInfos(ForwardInfos &&) = default ;
        ForwardInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ForwardInfos() = default ;
        ForwardInfos& operator=(const ForwardInfos &) = default ;
        ForwardInfos& operator=(ForwardInfos &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->accessType_ == nullptr
        && this->containerName_ == nullptr && this->eipAllocationId_ == nullptr && this->enable_ == nullptr && this->externalPort_ == nullptr && this->forwardPort_ == nullptr
        && this->name_ == nullptr && this->natGatewayId_ == nullptr && this->SSHPublicKey_ == nullptr; };
        // accessType Field Functions 
        bool hasAccessType() const { return this->accessType_ != nullptr;};
        void deleteAccessType() { this->accessType_ = nullptr;};
        inline const vector<string> & getAccessType() const { DARABONBA_PTR_GET_CONST(accessType_, vector<string>) };
        inline vector<string> getAccessType() { DARABONBA_PTR_GET(accessType_, vector<string>) };
        inline ForwardInfos& setAccessType(const vector<string> & accessType) { DARABONBA_PTR_SET_VALUE(accessType_, accessType) };
        inline ForwardInfos& setAccessType(vector<string> && accessType) { DARABONBA_PTR_SET_RVALUE(accessType_, accessType) };


        // containerName Field Functions 
        bool hasContainerName() const { return this->containerName_ != nullptr;};
        void deleteContainerName() { this->containerName_ = nullptr;};
        inline string getContainerName() const { DARABONBA_PTR_GET_DEFAULT(containerName_, "") };
        inline ForwardInfos& setContainerName(string containerName) { DARABONBA_PTR_SET_VALUE(containerName_, containerName) };


        // eipAllocationId Field Functions 
        bool hasEipAllocationId() const { return this->eipAllocationId_ != nullptr;};
        void deleteEipAllocationId() { this->eipAllocationId_ = nullptr;};
        inline string getEipAllocationId() const { DARABONBA_PTR_GET_DEFAULT(eipAllocationId_, "") };
        inline ForwardInfos& setEipAllocationId(string eipAllocationId) { DARABONBA_PTR_SET_VALUE(eipAllocationId_, eipAllocationId) };


        // enable Field Functions 
        bool hasEnable() const { return this->enable_ != nullptr;};
        void deleteEnable() { this->enable_ = nullptr;};
        inline bool getEnable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
        inline ForwardInfos& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


        // externalPort Field Functions 
        bool hasExternalPort() const { return this->externalPort_ != nullptr;};
        void deleteExternalPort() { this->externalPort_ = nullptr;};
        inline string getExternalPort() const { DARABONBA_PTR_GET_DEFAULT(externalPort_, "") };
        inline ForwardInfos& setExternalPort(string externalPort) { DARABONBA_PTR_SET_VALUE(externalPort_, externalPort) };


        // forwardPort Field Functions 
        bool hasForwardPort() const { return this->forwardPort_ != nullptr;};
        void deleteForwardPort() { this->forwardPort_ = nullptr;};
        inline string getForwardPort() const { DARABONBA_PTR_GET_DEFAULT(forwardPort_, "") };
        inline ForwardInfos& setForwardPort(string forwardPort) { DARABONBA_PTR_SET_VALUE(forwardPort_, forwardPort) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline ForwardInfos& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // natGatewayId Field Functions 
        bool hasNatGatewayId() const { return this->natGatewayId_ != nullptr;};
        void deleteNatGatewayId() { this->natGatewayId_ = nullptr;};
        inline string getNatGatewayId() const { DARABONBA_PTR_GET_DEFAULT(natGatewayId_, "") };
        inline ForwardInfos& setNatGatewayId(string natGatewayId) { DARABONBA_PTR_SET_VALUE(natGatewayId_, natGatewayId) };


        // SSHPublicKey Field Functions 
        bool hasSSHPublicKey() const { return this->SSHPublicKey_ != nullptr;};
        void deleteSSHPublicKey() { this->SSHPublicKey_ = nullptr;};
        inline string getSSHPublicKey() const { DARABONBA_PTR_GET_DEFAULT(SSHPublicKey_, "") };
        inline ForwardInfos& setSSHPublicKey(string SSHPublicKey) { DARABONBA_PTR_SET_VALUE(SSHPublicKey_, SSHPublicKey) };


      protected:
        // The list of access types.
        shared_ptr<vector<string>> accessType_ {};
        // The name of the target container.
        shared_ptr<string> containerName_ {};
        // The instance ID of the public EIP.
        shared_ptr<string> eipAllocationId_ {};
        // Specifies whether to enable the port forwarding configuration.
        shared_ptr<bool> enable_ {};
        // The mapped public port.
        shared_ptr<string> externalPort_ {};
        // The target port in the instance container.
        shared_ptr<string> forwardPort_ {};
        // The name of the port forwarding configuration.
        shared_ptr<string> name_ {};
        // The NAT gateway ID.
        shared_ptr<string> natGatewayId_ {};
        // The public key used for SSH access.
        shared_ptr<string> SSHPublicKey_ {};
      };

      virtual bool empty() const override { return this->forwardInfos_ == nullptr
        && this->securityGroupId_ == nullptr && this->vSwitchId_ == nullptr && this->vpcId_ == nullptr; };
      // forwardInfos Field Functions 
      bool hasForwardInfos() const { return this->forwardInfos_ != nullptr;};
      void deleteForwardInfos() { this->forwardInfos_ = nullptr;};
      inline const vector<UserVpc::ForwardInfos> & getForwardInfos() const { DARABONBA_PTR_GET_CONST(forwardInfos_, vector<UserVpc::ForwardInfos>) };
      inline vector<UserVpc::ForwardInfos> getForwardInfos() { DARABONBA_PTR_GET(forwardInfos_, vector<UserVpc::ForwardInfos>) };
      inline UserVpc& setForwardInfos(const vector<UserVpc::ForwardInfos> & forwardInfos) { DARABONBA_PTR_SET_VALUE(forwardInfos_, forwardInfos) };
      inline UserVpc& setForwardInfos(vector<UserVpc::ForwardInfos> && forwardInfos) { DARABONBA_PTR_SET_RVALUE(forwardInfos_, forwardInfos) };


      // securityGroupId Field Functions 
      bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
      void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
      inline string getSecurityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
      inline UserVpc& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


      // vSwitchId Field Functions 
      bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
      void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
      inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
      inline UserVpc& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


      // vpcId Field Functions 
      bool hasVpcId() const { return this->vpcId_ != nullptr;};
      void deleteVpcId() { this->vpcId_ = nullptr;};
      inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
      inline UserVpc& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    protected:
      // The list of port forwarding configurations.
      shared_ptr<vector<UserVpc::ForwardInfos>> forwardInfos_ {};
      // The security group ID.
      shared_ptr<string> securityGroupId_ {};
      // The vSwitch ID.
      shared_ptr<string> vSwitchId_ {};
      // The VPC ID.
      shared_ptr<string> vpcId_ {};
    };

    class Datasets : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Datasets& obj) { 
        DARABONBA_PTR_TO_JSON(ExtOptions, extOptions_);
        DARABONBA_PTR_TO_JSON(Identifier, identifier_);
        DARABONBA_PTR_TO_JSON(MountPath, mountPath_);
        DARABONBA_PTR_TO_JSON(ReadOnly, readOnly_);
        DARABONBA_PTR_TO_JSON(Uri, uri_);
        DARABONBA_PTR_TO_JSON(Version, version_);
      };
      friend void from_json(const Darabonba::Json& j, Datasets& obj) { 
        DARABONBA_PTR_FROM_JSON(ExtOptions, extOptions_);
        DARABONBA_PTR_FROM_JSON(Identifier, identifier_);
        DARABONBA_PTR_FROM_JSON(MountPath, mountPath_);
        DARABONBA_PTR_FROM_JSON(ReadOnly, readOnly_);
        DARABONBA_PTR_FROM_JSON(Uri, uri_);
        DARABONBA_PTR_FROM_JSON(Version, version_);
      };
      Datasets() = default ;
      Datasets(const Datasets &) = default ;
      Datasets(Datasets &&) = default ;
      Datasets(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Datasets() = default ;
      Datasets& operator=(const Datasets &) = default ;
      Datasets& operator=(Datasets &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->extOptions_ == nullptr
        && this->identifier_ == nullptr && this->mountPath_ == nullptr && this->readOnly_ == nullptr && this->uri_ == nullptr && this->version_ == nullptr; };
      // extOptions Field Functions 
      bool hasExtOptions() const { return this->extOptions_ != nullptr;};
      void deleteExtOptions() { this->extOptions_ = nullptr;};
      inline string getExtOptions() const { DARABONBA_PTR_GET_DEFAULT(extOptions_, "") };
      inline Datasets& setExtOptions(string extOptions) { DARABONBA_PTR_SET_VALUE(extOptions_, extOptions) };


      // identifier Field Functions 
      bool hasIdentifier() const { return this->identifier_ != nullptr;};
      void deleteIdentifier() { this->identifier_ = nullptr;};
      inline string getIdentifier() const { DARABONBA_PTR_GET_DEFAULT(identifier_, "") };
      inline Datasets& setIdentifier(string identifier) { DARABONBA_PTR_SET_VALUE(identifier_, identifier) };


      // mountPath Field Functions 
      bool hasMountPath() const { return this->mountPath_ != nullptr;};
      void deleteMountPath() { this->mountPath_ = nullptr;};
      inline string getMountPath() const { DARABONBA_PTR_GET_DEFAULT(mountPath_, "") };
      inline Datasets& setMountPath(string mountPath) { DARABONBA_PTR_SET_VALUE(mountPath_, mountPath) };


      // readOnly Field Functions 
      bool hasReadOnly() const { return this->readOnly_ != nullptr;};
      void deleteReadOnly() { this->readOnly_ = nullptr;};
      inline bool getReadOnly() const { DARABONBA_PTR_GET_DEFAULT(readOnly_, false) };
      inline Datasets& setReadOnly(bool readOnly) { DARABONBA_PTR_SET_VALUE(readOnly_, readOnly) };


      // uri Field Functions 
      bool hasUri() const { return this->uri_ != nullptr;};
      void deleteUri() { this->uri_ = nullptr;};
      inline string getUri() const { DARABONBA_PTR_GET_DEFAULT(uri_, "") };
      inline Datasets& setUri(string uri) { DARABONBA_PTR_SET_VALUE(uri_, uri) };


      // version Field Functions 
      bool hasVersion() const { return this->version_ != nullptr;};
      void deleteVersion() { this->version_ = nullptr;};
      inline int32_t getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, 0) };
      inline Datasets& setVersion(int32_t version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    protected:
      // The custom mount properties of the dataset. The content is passed as mount options.
      shared_ptr<string> extOptions_ {};
      // The dataset identifier.
      shared_ptr<string> identifier_ {};
      // The mount path of the dataset in the instance.
      shared_ptr<string> mountPath_ {};
      // Specifies whether to mount the dataset in read-only mode.
      shared_ptr<bool> readOnly_ {};
      // The storage service directory URI for direct mounting.
      shared_ptr<string> uri_ {};
      // The dataset version number.
      shared_ptr<int32_t> version_ {};
    };

    class CredentialConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CredentialConfig& obj) { 
        DARABONBA_PTR_TO_JSON(AliyunEnvRoleKey, aliyunEnvRoleKey_);
        DARABONBA_PTR_TO_JSON(Configs, configs_);
        DARABONBA_PTR_TO_JSON(Enable, enable_);
      };
      friend void from_json(const Darabonba::Json& j, CredentialConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(AliyunEnvRoleKey, aliyunEnvRoleKey_);
        DARABONBA_PTR_FROM_JSON(Configs, configs_);
        DARABONBA_PTR_FROM_JSON(Enable, enable_);
      };
      CredentialConfig() = default ;
      CredentialConfig(const CredentialConfig &) = default ;
      CredentialConfig(CredentialConfig &&) = default ;
      CredentialConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CredentialConfig() = default ;
      CredentialConfig& operator=(const CredentialConfig &) = default ;
      CredentialConfig& operator=(CredentialConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Configs : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Configs& obj) { 
          DARABONBA_PTR_TO_JSON(Key, key_);
          DARABONBA_PTR_TO_JSON(Roles, roles_);
          DARABONBA_PTR_TO_JSON(Type, type_);
        };
        friend void from_json(const Darabonba::Json& j, Configs& obj) { 
          DARABONBA_PTR_FROM_JSON(Key, key_);
          DARABONBA_PTR_FROM_JSON(Roles, roles_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
        };
        Configs() = default ;
        Configs(const Configs &) = default ;
        Configs(Configs &&) = default ;
        Configs(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Configs() = default ;
        Configs& operator=(const Configs &) = default ;
        Configs& operator=(Configs &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Roles : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Roles& obj) { 
            DARABONBA_PTR_TO_JSON(AssumeRoleFor, assumeRoleFor_);
            DARABONBA_PTR_TO_JSON(Policy, policy_);
            DARABONBA_PTR_TO_JSON(RoleArn, roleArn_);
            DARABONBA_PTR_TO_JSON(RoleType, roleType_);
            DARABONBA_PTR_TO_JSON(UserInfo, userInfo_);
          };
          friend void from_json(const Darabonba::Json& j, Roles& obj) { 
            DARABONBA_PTR_FROM_JSON(AssumeRoleFor, assumeRoleFor_);
            DARABONBA_PTR_FROM_JSON(Policy, policy_);
            DARABONBA_PTR_FROM_JSON(RoleArn, roleArn_);
            DARABONBA_PTR_FROM_JSON(RoleType, roleType_);
            DARABONBA_PTR_FROM_JSON(UserInfo, userInfo_);
          };
          Roles() = default ;
          Roles(const Roles &) = default ;
          Roles(Roles &&) = default ;
          Roles(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Roles() = default ;
          Roles& operator=(const Roles &) = default ;
          Roles& operator=(Roles &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class UserInfo : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const UserInfo& obj) { 
              DARABONBA_PTR_TO_JSON(Id, id_);
              DARABONBA_PTR_TO_JSON(Type, type_);
            };
            friend void from_json(const Darabonba::Json& j, UserInfo& obj) { 
              DARABONBA_PTR_FROM_JSON(Id, id_);
              DARABONBA_PTR_FROM_JSON(Type, type_);
            };
            UserInfo() = default ;
            UserInfo(const UserInfo &) = default ;
            UserInfo(UserInfo &&) = default ;
            UserInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~UserInfo() = default ;
            UserInfo& operator=(const UserInfo &) = default ;
            UserInfo& operator=(UserInfo &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->id_ == nullptr
        && this->type_ == nullptr; };
            // id Field Functions 
            bool hasId() const { return this->id_ != nullptr;};
            void deleteId() { this->id_ = nullptr;};
            inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
            inline UserInfo& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


            // type Field Functions 
            bool hasType() const { return this->type_ != nullptr;};
            void deleteType() { this->type_ = nullptr;};
            inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
            inline UserInfo& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


          protected:
            // The account ID of the delegated user.
            shared_ptr<string> id_ {};
            // The user type. Valid values:
            // - customer: Alibaba Cloud account.
            // - sub: RAM user.
            // - AssumedRoleUser: RAM role.
            shared_ptr<string> type_ {};
          };

          virtual bool empty() const override { return this->assumeRoleFor_ == nullptr
        && this->policy_ == nullptr && this->roleArn_ == nullptr && this->roleType_ == nullptr && this->userInfo_ == nullptr; };
          // assumeRoleFor Field Functions 
          bool hasAssumeRoleFor() const { return this->assumeRoleFor_ != nullptr;};
          void deleteAssumeRoleFor() { this->assumeRoleFor_ = nullptr;};
          inline string getAssumeRoleFor() const { DARABONBA_PTR_GET_DEFAULT(assumeRoleFor_, "") };
          inline Roles& setAssumeRoleFor(string assumeRoleFor) { DARABONBA_PTR_SET_VALUE(assumeRoleFor_, assumeRoleFor) };


          // policy Field Functions 
          bool hasPolicy() const { return this->policy_ != nullptr;};
          void deletePolicy() { this->policy_ = nullptr;};
          inline string getPolicy() const { DARABONBA_PTR_GET_DEFAULT(policy_, "") };
          inline Roles& setPolicy(string policy) { DARABONBA_PTR_SET_VALUE(policy_, policy) };


          // roleArn Field Functions 
          bool hasRoleArn() const { return this->roleArn_ != nullptr;};
          void deleteRoleArn() { this->roleArn_ = nullptr;};
          inline string getRoleArn() const { DARABONBA_PTR_GET_DEFAULT(roleArn_, "") };
          inline Roles& setRoleArn(string roleArn) { DARABONBA_PTR_SET_VALUE(roleArn_, roleArn) };


          // roleType Field Functions 
          bool hasRoleType() const { return this->roleType_ != nullptr;};
          void deleteRoleType() { this->roleType_ = nullptr;};
          inline string getRoleType() const { DARABONBA_PTR_GET_DEFAULT(roleType_, "") };
          inline Roles& setRoleType(string roleType) { DARABONBA_PTR_SET_VALUE(roleType_, roleType) };


          // userInfo Field Functions 
          bool hasUserInfo() const { return this->userInfo_ != nullptr;};
          void deleteUserInfo() { this->userInfo_ = nullptr;};
          inline const Roles::UserInfo & getUserInfo() const { DARABONBA_PTR_GET_CONST(userInfo_, Roles::UserInfo) };
          inline Roles::UserInfo getUserInfo() { DARABONBA_PTR_GET(userInfo_, Roles::UserInfo) };
          inline Roles& setUserInfo(const Roles::UserInfo & userInfo) { DARABONBA_PTR_SET_VALUE(userInfo_, userInfo) };
          inline Roles& setUserInfo(Roles::UserInfo && userInfo) { DARABONBA_PTR_SET_RVALUE(userInfo_, userInfo) };


        protected:
          // The Alibaba Cloud account ID of the principal that assumes the role.
          shared_ptr<string> assumeRoleFor_ {};
          // The policy used to further restrict the role permissions.
          shared_ptr<string> policy_ {};
          // The ARN of the RAM role.
          shared_ptr<string> roleArn_ {};
          // The role assumption type. Valid values:
          // - service: assumed by a service.
          // - user: assumed by a user.
          shared_ptr<string> roleType_ {};
          // The information of the delegated user.
          shared_ptr<Roles::UserInfo> userInfo_ {};
        };

        virtual bool empty() const override { return this->key_ == nullptr
        && this->roles_ == nullptr && this->type_ == nullptr; };
        // key Field Functions 
        bool hasKey() const { return this->key_ != nullptr;};
        void deleteKey() { this->key_ = nullptr;};
        inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
        inline Configs& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


        // roles Field Functions 
        bool hasRoles() const { return this->roles_ != nullptr;};
        void deleteRoles() { this->roles_ = nullptr;};
        inline const vector<Configs::Roles> & getRoles() const { DARABONBA_PTR_GET_CONST(roles_, vector<Configs::Roles>) };
        inline vector<Configs::Roles> getRoles() { DARABONBA_PTR_GET(roles_, vector<Configs::Roles>) };
        inline Configs& setRoles(const vector<Configs::Roles> & roles) { DARABONBA_PTR_SET_VALUE(roles_, roles) };
        inline Configs& setRoles(vector<Configs::Roles> && roles) { DARABONBA_PTR_SET_RVALUE(roles_, roles) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline Configs& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        // The identifier key of the credential configuration.
        shared_ptr<string> key_ {};
        // The list of roles in the credential configuration.
        shared_ptr<vector<Configs::Roles>> roles_ {};
        // The credential configuration type. Valid values:
        // - Role: single role assumption.
        // - RoleChain: role chain assumption.
        shared_ptr<string> type_ {};
      };

      virtual bool empty() const override { return this->aliyunEnvRoleKey_ == nullptr
        && this->configs_ == nullptr && this->enable_ == nullptr; };
      // aliyunEnvRoleKey Field Functions 
      bool hasAliyunEnvRoleKey() const { return this->aliyunEnvRoleKey_ != nullptr;};
      void deleteAliyunEnvRoleKey() { this->aliyunEnvRoleKey_ = nullptr;};
      inline string getAliyunEnvRoleKey() const { DARABONBA_PTR_GET_DEFAULT(aliyunEnvRoleKey_, "") };
      inline CredentialConfig& setAliyunEnvRoleKey(string aliyunEnvRoleKey) { DARABONBA_PTR_SET_VALUE(aliyunEnvRoleKey_, aliyunEnvRoleKey) };


      // configs Field Functions 
      bool hasConfigs() const { return this->configs_ != nullptr;};
      void deleteConfigs() { this->configs_ = nullptr;};
      inline const vector<CredentialConfig::Configs> & getConfigs() const { DARABONBA_PTR_GET_CONST(configs_, vector<CredentialConfig::Configs>) };
      inline vector<CredentialConfig::Configs> getConfigs() { DARABONBA_PTR_GET(configs_, vector<CredentialConfig::Configs>) };
      inline CredentialConfig& setConfigs(const vector<CredentialConfig::Configs> & configs) { DARABONBA_PTR_SET_VALUE(configs_, configs) };
      inline CredentialConfig& setConfigs(vector<CredentialConfig::Configs> && configs) { DARABONBA_PTR_SET_RVALUE(configs_, configs) };


      // enable Field Functions 
      bool hasEnable() const { return this->enable_ != nullptr;};
      void deleteEnable() { this->enable_ = nullptr;};
      inline bool getEnable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
      inline CredentialConfig& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


    protected:
      // The environment variable role key.
      shared_ptr<string> aliyunEnvRoleKey_ {};
      // The list of credential configurations.
      shared_ptr<vector<CredentialConfig::Configs>> configs_ {};
      // Specifies whether to enable credential injection.
      shared_ptr<bool> enable_ {};
    };

    virtual bool empty() const override { return this->credentialConfig_ == nullptr
        && this->cu_ == nullptr && this->datasets_ == nullptr && this->imageId_ == nullptr && this->imageUrl_ == nullptr && this->instanceId_ == nullptr
        && this->instanceName_ == nullptr && this->projectId_ == nullptr && this->userVpc_ == nullptr; };
    // credentialConfig Field Functions 
    bool hasCredentialConfig() const { return this->credentialConfig_ != nullptr;};
    void deleteCredentialConfig() { this->credentialConfig_ = nullptr;};
    inline const UpdateServerIdeInstanceRequest::CredentialConfig & getCredentialConfig() const { DARABONBA_PTR_GET_CONST(credentialConfig_, UpdateServerIdeInstanceRequest::CredentialConfig) };
    inline UpdateServerIdeInstanceRequest::CredentialConfig getCredentialConfig() { DARABONBA_PTR_GET(credentialConfig_, UpdateServerIdeInstanceRequest::CredentialConfig) };
    inline UpdateServerIdeInstanceRequest& setCredentialConfig(const UpdateServerIdeInstanceRequest::CredentialConfig & credentialConfig) { DARABONBA_PTR_SET_VALUE(credentialConfig_, credentialConfig) };
    inline UpdateServerIdeInstanceRequest& setCredentialConfig(UpdateServerIdeInstanceRequest::CredentialConfig && credentialConfig) { DARABONBA_PTR_SET_RVALUE(credentialConfig_, credentialConfig) };


    // cu Field Functions 
    bool hasCu() const { return this->cu_ != nullptr;};
    void deleteCu() { this->cu_ = nullptr;};
    inline int32_t getCu() const { DARABONBA_PTR_GET_DEFAULT(cu_, 0) };
    inline UpdateServerIdeInstanceRequest& setCu(int32_t cu) { DARABONBA_PTR_SET_VALUE(cu_, cu) };


    // datasets Field Functions 
    bool hasDatasets() const { return this->datasets_ != nullptr;};
    void deleteDatasets() { this->datasets_ = nullptr;};
    inline const vector<UpdateServerIdeInstanceRequest::Datasets> & getDatasets() const { DARABONBA_PTR_GET_CONST(datasets_, vector<UpdateServerIdeInstanceRequest::Datasets>) };
    inline vector<UpdateServerIdeInstanceRequest::Datasets> getDatasets() { DARABONBA_PTR_GET(datasets_, vector<UpdateServerIdeInstanceRequest::Datasets>) };
    inline UpdateServerIdeInstanceRequest& setDatasets(const vector<UpdateServerIdeInstanceRequest::Datasets> & datasets) { DARABONBA_PTR_SET_VALUE(datasets_, datasets) };
    inline UpdateServerIdeInstanceRequest& setDatasets(vector<UpdateServerIdeInstanceRequest::Datasets> && datasets) { DARABONBA_PTR_SET_RVALUE(datasets_, datasets) };


    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string getImageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline UpdateServerIdeInstanceRequest& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // imageUrl Field Functions 
    bool hasImageUrl() const { return this->imageUrl_ != nullptr;};
    void deleteImageUrl() { this->imageUrl_ = nullptr;};
    inline string getImageUrl() const { DARABONBA_PTR_GET_DEFAULT(imageUrl_, "") };
    inline UpdateServerIdeInstanceRequest& setImageUrl(string imageUrl) { DARABONBA_PTR_SET_VALUE(imageUrl_, imageUrl) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline UpdateServerIdeInstanceRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline UpdateServerIdeInstanceRequest& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline UpdateServerIdeInstanceRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // userVpc Field Functions 
    bool hasUserVpc() const { return this->userVpc_ != nullptr;};
    void deleteUserVpc() { this->userVpc_ = nullptr;};
    inline const UpdateServerIdeInstanceRequest::UserVpc & getUserVpc() const { DARABONBA_PTR_GET_CONST(userVpc_, UpdateServerIdeInstanceRequest::UserVpc) };
    inline UpdateServerIdeInstanceRequest::UserVpc getUserVpc() { DARABONBA_PTR_GET(userVpc_, UpdateServerIdeInstanceRequest::UserVpc) };
    inline UpdateServerIdeInstanceRequest& setUserVpc(const UpdateServerIdeInstanceRequest::UserVpc & userVpc) { DARABONBA_PTR_SET_VALUE(userVpc_, userVpc) };
    inline UpdateServerIdeInstanceRequest& setUserVpc(UpdateServerIdeInstanceRequest::UserVpc && userVpc) { DARABONBA_PTR_SET_RVALUE(userVpc_, userVpc) };


  protected:
    // The credential injection configuration for the instance. After this feature is enabled, you can use the default RAM role chain or specify a custom RAM role.
    shared_ptr<UpdateServerIdeInstanceRequest::CredentialConfig> credentialConfig_ {};
    // The number of CUs used by the instance.
    shared_ptr<int32_t> cu_ {};
    // The list of datasets mounted to the instance.
    shared_ptr<vector<UpdateServerIdeInstanceRequest::Datasets>> datasets_ {};
    // The image ID. You can call ListServerIdeImages to obtain the ID.
    shared_ptr<string> imageId_ {};
    // The image URL. This parameter is required when you use a non-DataWorks official image.
    shared_ptr<string> imageUrl_ {};
    // The personal development environment instance ID. You can call ListServerIdeInstances to obtain the ID.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The name of the personal development environment instance.
    shared_ptr<string> instanceName_ {};
    // The DataWorks workspace ID.
    shared_ptr<int64_t> projectId_ {};
    // The VPC configuration used by the instance.
    shared_ptr<UpdateServerIdeInstanceRequest::UserVpc> userVpc_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
