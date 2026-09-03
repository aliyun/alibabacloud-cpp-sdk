// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEVOLUMEINPUT_HPP_
#define ALIBABACLOUD_MODELS_CREATEVOLUMEINPUT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/AgenticFSVolumeConfig.hpp>
#include <alibabacloud/models/OSSVolumeConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FCSandbox20260509
{
namespace Models
{
  class CreateVolumeInput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateVolumeInput& obj) { 
      DARABONBA_PTR_TO_JSON(agenticFSVolumeConfig, agenticFSVolumeConfig_);
      DARABONBA_PTR_TO_JSON(mountConfig, mountConfig_);
      DARABONBA_PTR_TO_JSON(ossVolumeConfig, ossVolumeConfig_);
      DARABONBA_PTR_TO_JSON(teamID, teamID_);
      DARABONBA_PTR_TO_JSON(volumeName, volumeName_);
    };
    friend void from_json(const Darabonba::Json& j, CreateVolumeInput& obj) { 
      DARABONBA_PTR_FROM_JSON(agenticFSVolumeConfig, agenticFSVolumeConfig_);
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
        // The list of vSwitches.
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
      // The RAM role that the user grants to the cloud sandbox. After this role is set, the cloud sandbox assumes the role to generate temporary access credentials. You can use the temporary access credentials of this role to mount storage in the cloud sandbox, such as OSS and AgenticFS.
      shared_ptr<string> role_ {};
      // The VPC configuration.
      shared_ptr<MountConfig::VpcConfig> vpcConfig_ {};
    };

    virtual bool empty() const override { return this->agenticFSVolumeConfig_ == nullptr
        && this->mountConfig_ == nullptr && this->ossVolumeConfig_ == nullptr && this->teamID_ == nullptr && this->volumeName_ == nullptr; };
    // agenticFSVolumeConfig Field Functions 
    bool hasAgenticFSVolumeConfig() const { return this->agenticFSVolumeConfig_ != nullptr;};
    void deleteAgenticFSVolumeConfig() { this->agenticFSVolumeConfig_ = nullptr;};
    inline const AgenticFSVolumeConfig & getAgenticFSVolumeConfig() const { DARABONBA_PTR_GET_CONST(agenticFSVolumeConfig_, AgenticFSVolumeConfig) };
    inline AgenticFSVolumeConfig getAgenticFSVolumeConfig() { DARABONBA_PTR_GET(agenticFSVolumeConfig_, AgenticFSVolumeConfig) };
    inline CreateVolumeInput& setAgenticFSVolumeConfig(const AgenticFSVolumeConfig & agenticFSVolumeConfig) { DARABONBA_PTR_SET_VALUE(agenticFSVolumeConfig_, agenticFSVolumeConfig) };
    inline CreateVolumeInput& setAgenticFSVolumeConfig(AgenticFSVolumeConfig && agenticFSVolumeConfig) { DARABONBA_PTR_SET_RVALUE(agenticFSVolumeConfig_, agenticFSVolumeConfig) };


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
    // The AgenticFS configuration.
    shared_ptr<AgenticFSVolumeConfig> agenticFSVolumeConfig_ {};
    // The mount configuration.
    shared_ptr<CreateVolumeInput::MountConfig> mountConfig_ {};
    // The OSS configuration.
    shared_ptr<OSSVolumeConfig> ossVolumeConfig_ {};
    // The unique identifier of the team.
    shared_ptr<string> teamID_ {};
    // The name, which must be unique within the team.
    shared_ptr<string> volumeName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FCSandbox20260509
#endif
