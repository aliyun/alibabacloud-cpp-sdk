// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEVOLUMEINPUT_HPP_
#define ALIBABACLOUD_MODELS_CREATEVOLUMEINPUT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/AgenticBucketVolumeConfig.hpp>
#include <alibabacloud/models/JuiceFSVolumeConfig.hpp>
#include <alibabacloud/models/OSSVolumeConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sandbox20260820
{
namespace Models
{
  class CreateVolumeInput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateVolumeInput& obj) { 
      DARABONBA_PTR_TO_JSON(agenticBucketVolumeConfig, agenticBucketVolumeConfig_);
      DARABONBA_PTR_TO_JSON(agenticFSVolumeConfig, agenticFSVolumeConfig_);
      DARABONBA_PTR_TO_JSON(juiceFSVolumeConfig, juiceFSVolumeConfig_);
      DARABONBA_PTR_TO_JSON(mountConfig, mountConfig_);
      DARABONBA_PTR_TO_JSON(ossVolumeConfig, ossVolumeConfig_);
      DARABONBA_PTR_TO_JSON(teamID, teamID_);
      DARABONBA_PTR_TO_JSON(volumeName, volumeName_);
    };
    friend void from_json(const Darabonba::Json& j, CreateVolumeInput& obj) { 
      DARABONBA_PTR_FROM_JSON(agenticBucketVolumeConfig, agenticBucketVolumeConfig_);
      DARABONBA_PTR_FROM_JSON(agenticFSVolumeConfig, agenticFSVolumeConfig_);
      DARABONBA_PTR_FROM_JSON(juiceFSVolumeConfig, juiceFSVolumeConfig_);
      DARABONBA_PTR_FROM_JSON(mountConfig, mountConfig_);
      DARABONBA_PTR_FROM_JSON(ossVolumeConfig, ossVolumeConfig_);
      DARABONBA_PTR_FROM_JSON(teamID, teamID_);
      DARABONBA_PTR_FROM_JSON(volumeName, volumeName_);
    };
    CreateVolumeInput() = default ;
    CreateVolumeInput(const CreateVolumeInput &) = default ;
    CreateVolumeInput(CreateVolumeInput &&) = default ;
    CreateVolumeInput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateVolumeInput() = default ;
    CreateVolumeInput& operator=(const CreateVolumeInput &) = default ;
    CreateVolumeInput& operator=(CreateVolumeInput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class MountConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const MountConfig& obj) { 
        DARABONBA_PTR_TO_JSON(role, role_);
        DARABONBA_PTR_TO_JSON(vpcConfig, vpcConfig_);
      };
      friend void from_json(const Darabonba::Json& j, MountConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(role, role_);
        DARABONBA_PTR_FROM_JSON(vpcConfig, vpcConfig_);
      };
      MountConfig() = default ;
      MountConfig(const MountConfig &) = default ;
      MountConfig(MountConfig &&) = default ;
      MountConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~MountConfig() = default ;
      MountConfig& operator=(const MountConfig &) = default ;
      MountConfig& operator=(MountConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class VpcConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const VpcConfig& obj) { 
          DARABONBA_PTR_TO_JSON(securityGroupId, securityGroupId_);
          DARABONBA_PTR_TO_JSON(vSwitchIds, vSwitchIds_);
          DARABONBA_PTR_TO_JSON(vpcId, vpcId_);
        };
        friend void from_json(const Darabonba::Json& j, VpcConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(securityGroupId, securityGroupId_);
          DARABONBA_PTR_FROM_JSON(vSwitchIds, vSwitchIds_);
          DARABONBA_PTR_FROM_JSON(vpcId, vpcId_);
        };
        VpcConfig() = default ;
        VpcConfig(const VpcConfig &) = default ;
        VpcConfig(VpcConfig &&) = default ;
        VpcConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~VpcConfig() = default ;
        VpcConfig& operator=(const VpcConfig &) = default ;
        VpcConfig& operator=(VpcConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->securityGroupId_ == nullptr
        && this->vSwitchIds_ == nullptr && this->vpcId_ == nullptr; };
        // securityGroupId Field Functions 
        bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
        void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
        inline string getSecurityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
        inline VpcConfig& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


        // vSwitchIds Field Functions 
        bool hasVSwitchIds() const { return this->vSwitchIds_ != nullptr;};
        void deleteVSwitchIds() { this->vSwitchIds_ = nullptr;};
        inline const vector<string> & getVSwitchIds() const { DARABONBA_PTR_GET_CONST(vSwitchIds_, vector<string>) };
        inline vector<string> getVSwitchIds() { DARABONBA_PTR_GET(vSwitchIds_, vector<string>) };
        inline VpcConfig& setVSwitchIds(const vector<string> & vSwitchIds) { DARABONBA_PTR_SET_VALUE(vSwitchIds_, vSwitchIds) };
        inline VpcConfig& setVSwitchIds(vector<string> && vSwitchIds) { DARABONBA_PTR_SET_RVALUE(vSwitchIds_, vSwitchIds) };


        // vpcId Field Functions 
        bool hasVpcId() const { return this->vpcId_ != nullptr;};
        void deleteVpcId() { this->vpcId_ = nullptr;};
        inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
        inline VpcConfig& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


      protected:
        // The security group ID.
        shared_ptr<string> securityGroupId_ {};
        // The vSwitch IDs.
        shared_ptr<vector<string>> vSwitchIds_ {};
        // The VPC ID.
        shared_ptr<string> vpcId_ {};
      };

      virtual bool empty() const override { return this->role_ == nullptr
        && this->vpcConfig_ == nullptr; };
      // role Field Functions 
      bool hasRole() const { return this->role_ != nullptr;};
      void deleteRole() { this->role_ = nullptr;};
      inline string getRole() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
      inline MountConfig& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


      // vpcConfig Field Functions 
      bool hasVpcConfig() const { return this->vpcConfig_ != nullptr;};
      void deleteVpcConfig() { this->vpcConfig_ = nullptr;};
      inline const MountConfig::VpcConfig & getVpcConfig() const { DARABONBA_PTR_GET_CONST(vpcConfig_, MountConfig::VpcConfig) };
      inline MountConfig::VpcConfig getVpcConfig() { DARABONBA_PTR_GET(vpcConfig_, MountConfig::VpcConfig) };
      inline MountConfig& setVpcConfig(const MountConfig::VpcConfig & vpcConfig) { DARABONBA_PTR_SET_VALUE(vpcConfig_, vpcConfig) };
      inline MountConfig& setVpcConfig(MountConfig::VpcConfig && vpcConfig) { DARABONBA_PTR_SET_RVALUE(vpcConfig_, vpcConfig) };


    protected:
      // The permission role.
      shared_ptr<string> role_ {};
      // The VPC configuration.
      shared_ptr<MountConfig::VpcConfig> vpcConfig_ {};
    };

    class AgenticFSVolumeConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AgenticFSVolumeConfig& obj) { 
        DARABONBA_PTR_TO_JSON(groupID, groupID_);
        DARABONBA_PTR_TO_JSON(serverAddr, serverAddr_);
        DARABONBA_PTR_TO_JSON(userID, userID_);
      };
      friend void from_json(const Darabonba::Json& j, AgenticFSVolumeConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(groupID, groupID_);
        DARABONBA_PTR_FROM_JSON(serverAddr, serverAddr_);
        DARABONBA_PTR_FROM_JSON(userID, userID_);
      };
      AgenticFSVolumeConfig() = default ;
      AgenticFSVolumeConfig(const AgenticFSVolumeConfig &) = default ;
      AgenticFSVolumeConfig(AgenticFSVolumeConfig &&) = default ;
      AgenticFSVolumeConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AgenticFSVolumeConfig() = default ;
      AgenticFSVolumeConfig& operator=(const AgenticFSVolumeConfig &) = default ;
      AgenticFSVolumeConfig& operator=(AgenticFSVolumeConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->groupID_ == nullptr
        && this->serverAddr_ == nullptr && this->userID_ == nullptr; };
      // groupID Field Functions 
      bool hasGroupID() const { return this->groupID_ != nullptr;};
      void deleteGroupID() { this->groupID_ = nullptr;};
      inline int32_t getGroupID() const { DARABONBA_PTR_GET_DEFAULT(groupID_, 0) };
      inline AgenticFSVolumeConfig& setGroupID(int32_t groupID) { DARABONBA_PTR_SET_VALUE(groupID_, groupID) };


      // serverAddr Field Functions 
      bool hasServerAddr() const { return this->serverAddr_ != nullptr;};
      void deleteServerAddr() { this->serverAddr_ = nullptr;};
      inline string getServerAddr() const { DARABONBA_PTR_GET_DEFAULT(serverAddr_, "") };
      inline AgenticFSVolumeConfig& setServerAddr(string serverAddr) { DARABONBA_PTR_SET_VALUE(serverAddr_, serverAddr) };


      // userID Field Functions 
      bool hasUserID() const { return this->userID_ != nullptr;};
      void deleteUserID() { this->userID_ = nullptr;};
      inline int32_t getUserID() const { DARABONBA_PTR_GET_DEFAULT(userID_, 0) };
      inline AgenticFSVolumeConfig& setUserID(int32_t userID) { DARABONBA_PTR_SET_VALUE(userID_, userID) };


    protected:
      // The groupID of the local directory.
      shared_ptr<int32_t> groupID_ {};
      // The Access Point endpoint address.
      shared_ptr<string> serverAddr_ {};
      // The userID of the local directory.
      shared_ptr<int32_t> userID_ {};
    };

    virtual bool empty() const override { return this->agenticBucketVolumeConfig_ == nullptr
        && this->agenticFSVolumeConfig_ == nullptr && this->juiceFSVolumeConfig_ == nullptr && this->mountConfig_ == nullptr && this->ossVolumeConfig_ == nullptr && this->teamID_ == nullptr
        && this->volumeName_ == nullptr; };
    // agenticBucketVolumeConfig Field Functions 
    bool hasAgenticBucketVolumeConfig() const { return this->agenticBucketVolumeConfig_ != nullptr;};
    void deleteAgenticBucketVolumeConfig() { this->agenticBucketVolumeConfig_ = nullptr;};
    inline const AgenticBucketVolumeConfig & getAgenticBucketVolumeConfig() const { DARABONBA_PTR_GET_CONST(agenticBucketVolumeConfig_, AgenticBucketVolumeConfig) };
    inline AgenticBucketVolumeConfig getAgenticBucketVolumeConfig() { DARABONBA_PTR_GET(agenticBucketVolumeConfig_, AgenticBucketVolumeConfig) };
    inline CreateVolumeInput& setAgenticBucketVolumeConfig(const AgenticBucketVolumeConfig & agenticBucketVolumeConfig) { DARABONBA_PTR_SET_VALUE(agenticBucketVolumeConfig_, agenticBucketVolumeConfig) };
    inline CreateVolumeInput& setAgenticBucketVolumeConfig(AgenticBucketVolumeConfig && agenticBucketVolumeConfig) { DARABONBA_PTR_SET_RVALUE(agenticBucketVolumeConfig_, agenticBucketVolumeConfig) };


    // agenticFSVolumeConfig Field Functions 
    bool hasAgenticFSVolumeConfig() const { return this->agenticFSVolumeConfig_ != nullptr;};
    void deleteAgenticFSVolumeConfig() { this->agenticFSVolumeConfig_ = nullptr;};
    inline const CreateVolumeInput::AgenticFSVolumeConfig & getAgenticFSVolumeConfig() const { DARABONBA_PTR_GET_CONST(agenticFSVolumeConfig_, CreateVolumeInput::AgenticFSVolumeConfig) };
    inline CreateVolumeInput::AgenticFSVolumeConfig getAgenticFSVolumeConfig() { DARABONBA_PTR_GET(agenticFSVolumeConfig_, CreateVolumeInput::AgenticFSVolumeConfig) };
    inline CreateVolumeInput& setAgenticFSVolumeConfig(const CreateVolumeInput::AgenticFSVolumeConfig & agenticFSVolumeConfig) { DARABONBA_PTR_SET_VALUE(agenticFSVolumeConfig_, agenticFSVolumeConfig) };
    inline CreateVolumeInput& setAgenticFSVolumeConfig(CreateVolumeInput::AgenticFSVolumeConfig && agenticFSVolumeConfig) { DARABONBA_PTR_SET_RVALUE(agenticFSVolumeConfig_, agenticFSVolumeConfig) };


    // juiceFSVolumeConfig Field Functions 
    bool hasJuiceFSVolumeConfig() const { return this->juiceFSVolumeConfig_ != nullptr;};
    void deleteJuiceFSVolumeConfig() { this->juiceFSVolumeConfig_ = nullptr;};
    inline const JuiceFSVolumeConfig & getJuiceFSVolumeConfig() const { DARABONBA_PTR_GET_CONST(juiceFSVolumeConfig_, JuiceFSVolumeConfig) };
    inline JuiceFSVolumeConfig getJuiceFSVolumeConfig() { DARABONBA_PTR_GET(juiceFSVolumeConfig_, JuiceFSVolumeConfig) };
    inline CreateVolumeInput& setJuiceFSVolumeConfig(const JuiceFSVolumeConfig & juiceFSVolumeConfig) { DARABONBA_PTR_SET_VALUE(juiceFSVolumeConfig_, juiceFSVolumeConfig) };
    inline CreateVolumeInput& setJuiceFSVolumeConfig(JuiceFSVolumeConfig && juiceFSVolumeConfig) { DARABONBA_PTR_SET_RVALUE(juiceFSVolumeConfig_, juiceFSVolumeConfig) };


    // mountConfig Field Functions 
    bool hasMountConfig() const { return this->mountConfig_ != nullptr;};
    void deleteMountConfig() { this->mountConfig_ = nullptr;};
    inline const CreateVolumeInput::MountConfig & getMountConfig() const { DARABONBA_PTR_GET_CONST(mountConfig_, CreateVolumeInput::MountConfig) };
    inline CreateVolumeInput::MountConfig getMountConfig() { DARABONBA_PTR_GET(mountConfig_, CreateVolumeInput::MountConfig) };
    inline CreateVolumeInput& setMountConfig(const CreateVolumeInput::MountConfig & mountConfig) { DARABONBA_PTR_SET_VALUE(mountConfig_, mountConfig) };
    inline CreateVolumeInput& setMountConfig(CreateVolumeInput::MountConfig && mountConfig) { DARABONBA_PTR_SET_RVALUE(mountConfig_, mountConfig) };


    // ossVolumeConfig Field Functions 
    bool hasOssVolumeConfig() const { return this->ossVolumeConfig_ != nullptr;};
    void deleteOssVolumeConfig() { this->ossVolumeConfig_ = nullptr;};
    inline const OSSVolumeConfig & getOssVolumeConfig() const { DARABONBA_PTR_GET_CONST(ossVolumeConfig_, OSSVolumeConfig) };
    inline OSSVolumeConfig getOssVolumeConfig() { DARABONBA_PTR_GET(ossVolumeConfig_, OSSVolumeConfig) };
    inline CreateVolumeInput& setOssVolumeConfig(const OSSVolumeConfig & ossVolumeConfig) { DARABONBA_PTR_SET_VALUE(ossVolumeConfig_, ossVolumeConfig) };
    inline CreateVolumeInput& setOssVolumeConfig(OSSVolumeConfig && ossVolumeConfig) { DARABONBA_PTR_SET_RVALUE(ossVolumeConfig_, ossVolumeConfig) };


    // teamID Field Functions 
    bool hasTeamID() const { return this->teamID_ != nullptr;};
    void deleteTeamID() { this->teamID_ = nullptr;};
    inline string getTeamID() const { DARABONBA_PTR_GET_DEFAULT(teamID_, "") };
    inline CreateVolumeInput& setTeamID(string teamID) { DARABONBA_PTR_SET_VALUE(teamID_, teamID) };


    // volumeName Field Functions 
    bool hasVolumeName() const { return this->volumeName_ != nullptr;};
    void deleteVolumeName() { this->volumeName_ = nullptr;};
    inline string getVolumeName() const { DARABONBA_PTR_GET_DEFAULT(volumeName_, "") };
    inline CreateVolumeInput& setVolumeName(string volumeName) { DARABONBA_PTR_SET_VALUE(volumeName_, volumeName) };


  protected:
    // The AgenticBucket Volume configuration.
    shared_ptr<AgenticBucketVolumeConfig> agenticBucketVolumeConfig_ {};
    // The AgenticFS Volume configuration.
    shared_ptr<CreateVolumeInput::AgenticFSVolumeConfig> agenticFSVolumeConfig_ {};
    // The JuiceFS Volume configuration.
    shared_ptr<JuiceFSVolumeConfig> juiceFSVolumeConfig_ {};
    // The mount configuration.
    shared_ptr<CreateVolumeInput::MountConfig> mountConfig_ {};
    // The OSS Volume configuration.
    shared_ptr<OSSVolumeConfig> ossVolumeConfig_ {};
    // The unique identifier of the team.
    shared_ptr<string> teamID_ {};
    // The name, which must be unique within the team.
    shared_ptr<string> volumeName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sandbox20260820
#endif
