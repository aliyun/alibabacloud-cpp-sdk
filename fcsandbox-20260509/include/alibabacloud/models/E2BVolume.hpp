// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_E2BVOLUME_HPP_
#define ALIBABACLOUD_MODELS_E2BVOLUME_HPP_
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
  class E2BVolume : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const E2BVolume& obj) { 
      DARABONBA_PTR_TO_JSON(agenticFSVolumeConfig, agenticFSVolumeConfig_);
      DARABONBA_PTR_TO_JSON(createdAt, createdAt_);
      DARABONBA_PTR_TO_JSON(mountConfig, mountConfig_);
      DARABONBA_PTR_TO_JSON(ossVolumeConfig, ossVolumeConfig_);
      DARABONBA_PTR_TO_JSON(resourceGroupID, resourceGroupID_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(statusReason, statusReason_);
      DARABONBA_PTR_TO_JSON(storageClass, storageClass_);
      DARABONBA_PTR_TO_JSON(teamID, teamID_);
      DARABONBA_PTR_TO_JSON(updatedAt, updatedAt_);
      DARABONBA_PTR_TO_JSON(userID, userID_);
      DARABONBA_PTR_TO_JSON(volumeID, volumeID_);
      DARABONBA_PTR_TO_JSON(volumeName, volumeName_);
    };
    friend void from_json(const Darabonba::Json& j, E2BVolume& obj) { 
      DARABONBA_PTR_FROM_JSON(agenticFSVolumeConfig, agenticFSVolumeConfig_);
      DARABONBA_PTR_FROM_JSON(createdAt, createdAt_);
      DARABONBA_PTR_FROM_JSON(mountConfig, mountConfig_);
      DARABONBA_PTR_FROM_JSON(ossVolumeConfig, ossVolumeConfig_);
      DARABONBA_PTR_FROM_JSON(resourceGroupID, resourceGroupID_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(statusReason, statusReason_);
      DARABONBA_PTR_FROM_JSON(storageClass, storageClass_);
      DARABONBA_PTR_FROM_JSON(teamID, teamID_);
      DARABONBA_PTR_FROM_JSON(updatedAt, updatedAt_);
      DARABONBA_PTR_FROM_JSON(userID, userID_);
      DARABONBA_PTR_FROM_JSON(volumeID, volumeID_);
      DARABONBA_PTR_FROM_JSON(volumeName, volumeName_);
    };
    E2BVolume() = default ;
    E2BVolume(const E2BVolume &) = default ;
    E2BVolume(E2BVolume &&) = default ;
    E2BVolume(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~E2BVolume() = default ;
    E2BVolume& operator=(const E2BVolume &) = default ;
    E2BVolume& operator=(E2BVolume &&) = default ;
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
        // The virtual private cloud (VPC) ID.
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
      // The RAM role that the user grants to the sandboxed container. After this role is set, the sandboxed container assumes the role to generate temporary access credentials. You can use the temporary access credentials of this role to mount storage in the sandboxed container, such as OSS and AgenticFS.
      shared_ptr<string> role_ {};
      // The virtual private cloud (VPC) ID.
      shared_ptr<MountConfig::VpcConfig> vpcConfig_ {};
    };

    virtual bool empty() const override { return this->agenticFSVolumeConfig_ == nullptr
        && this->createdAt_ == nullptr && this->mountConfig_ == nullptr && this->ossVolumeConfig_ == nullptr && this->resourceGroupID_ == nullptr && this->status_ == nullptr
        && this->statusReason_ == nullptr && this->storageClass_ == nullptr && this->teamID_ == nullptr && this->updatedAt_ == nullptr && this->userID_ == nullptr
        && this->volumeID_ == nullptr && this->volumeName_ == nullptr; };
    // agenticFSVolumeConfig Field Functions 
    bool hasAgenticFSVolumeConfig() const { return this->agenticFSVolumeConfig_ != nullptr;};
    void deleteAgenticFSVolumeConfig() { this->agenticFSVolumeConfig_ = nullptr;};
    inline const AgenticFSVolumeConfig & getAgenticFSVolumeConfig() const { DARABONBA_PTR_GET_CONST(agenticFSVolumeConfig_, AgenticFSVolumeConfig) };
    inline AgenticFSVolumeConfig getAgenticFSVolumeConfig() { DARABONBA_PTR_GET(agenticFSVolumeConfig_, AgenticFSVolumeConfig) };
    inline E2BVolume& setAgenticFSVolumeConfig(const AgenticFSVolumeConfig & agenticFSVolumeConfig) { DARABONBA_PTR_SET_VALUE(agenticFSVolumeConfig_, agenticFSVolumeConfig) };
    inline E2BVolume& setAgenticFSVolumeConfig(AgenticFSVolumeConfig && agenticFSVolumeConfig) { DARABONBA_PTR_SET_RVALUE(agenticFSVolumeConfig_, agenticFSVolumeConfig) };


    // createdAt Field Functions 
    bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
    void deleteCreatedAt() { this->createdAt_ = nullptr;};
    inline string getCreatedAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, "") };
    inline E2BVolume& setCreatedAt(string createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


    // mountConfig Field Functions 
    bool hasMountConfig() const { return this->mountConfig_ != nullptr;};
    void deleteMountConfig() { this->mountConfig_ = nullptr;};
    inline const E2BVolume::MountConfig & getMountConfig() const { DARABONBA_PTR_GET_CONST(mountConfig_, E2BVolume::MountConfig) };
    inline E2BVolume::MountConfig getMountConfig() { DARABONBA_PTR_GET(mountConfig_, E2BVolume::MountConfig) };
    inline E2BVolume& setMountConfig(const E2BVolume::MountConfig & mountConfig) { DARABONBA_PTR_SET_VALUE(mountConfig_, mountConfig) };
    inline E2BVolume& setMountConfig(E2BVolume::MountConfig && mountConfig) { DARABONBA_PTR_SET_RVALUE(mountConfig_, mountConfig) };


    // ossVolumeConfig Field Functions 
    bool hasOssVolumeConfig() const { return this->ossVolumeConfig_ != nullptr;};
    void deleteOssVolumeConfig() { this->ossVolumeConfig_ = nullptr;};
    inline const OSSVolumeConfig & getOssVolumeConfig() const { DARABONBA_PTR_GET_CONST(ossVolumeConfig_, OSSVolumeConfig) };
    inline OSSVolumeConfig getOssVolumeConfig() { DARABONBA_PTR_GET(ossVolumeConfig_, OSSVolumeConfig) };
    inline E2BVolume& setOssVolumeConfig(const OSSVolumeConfig & ossVolumeConfig) { DARABONBA_PTR_SET_VALUE(ossVolumeConfig_, ossVolumeConfig) };
    inline E2BVolume& setOssVolumeConfig(OSSVolumeConfig && ossVolumeConfig) { DARABONBA_PTR_SET_RVALUE(ossVolumeConfig_, ossVolumeConfig) };


    // resourceGroupID Field Functions 
    bool hasResourceGroupID() const { return this->resourceGroupID_ != nullptr;};
    void deleteResourceGroupID() { this->resourceGroupID_ = nullptr;};
    inline string getResourceGroupID() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupID_, "") };
    inline E2BVolume& setResourceGroupID(string resourceGroupID) { DARABONBA_PTR_SET_VALUE(resourceGroupID_, resourceGroupID) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline E2BVolume& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // statusReason Field Functions 
    bool hasStatusReason() const { return this->statusReason_ != nullptr;};
    void deleteStatusReason() { this->statusReason_ = nullptr;};
    inline string getStatusReason() const { DARABONBA_PTR_GET_DEFAULT(statusReason_, "") };
    inline E2BVolume& setStatusReason(string statusReason) { DARABONBA_PTR_SET_VALUE(statusReason_, statusReason) };


    // storageClass Field Functions 
    bool hasStorageClass() const { return this->storageClass_ != nullptr;};
    void deleteStorageClass() { this->storageClass_ = nullptr;};
    inline string getStorageClass() const { DARABONBA_PTR_GET_DEFAULT(storageClass_, "") };
    inline E2BVolume& setStorageClass(string storageClass) { DARABONBA_PTR_SET_VALUE(storageClass_, storageClass) };


    // teamID Field Functions 
    bool hasTeamID() const { return this->teamID_ != nullptr;};
    void deleteTeamID() { this->teamID_ = nullptr;};
    inline string getTeamID() const { DARABONBA_PTR_GET_DEFAULT(teamID_, "") };
    inline E2BVolume& setTeamID(string teamID) { DARABONBA_PTR_SET_VALUE(teamID_, teamID) };


    // updatedAt Field Functions 
    bool hasUpdatedAt() const { return this->updatedAt_ != nullptr;};
    void deleteUpdatedAt() { this->updatedAt_ = nullptr;};
    inline string getUpdatedAt() const { DARABONBA_PTR_GET_DEFAULT(updatedAt_, "") };
    inline E2BVolume& setUpdatedAt(string updatedAt) { DARABONBA_PTR_SET_VALUE(updatedAt_, updatedAt) };


    // userID Field Functions 
    bool hasUserID() const { return this->userID_ != nullptr;};
    void deleteUserID() { this->userID_ = nullptr;};
    inline string getUserID() const { DARABONBA_PTR_GET_DEFAULT(userID_, "") };
    inline E2BVolume& setUserID(string userID) { DARABONBA_PTR_SET_VALUE(userID_, userID) };


    // volumeID Field Functions 
    bool hasVolumeID() const { return this->volumeID_ != nullptr;};
    void deleteVolumeID() { this->volumeID_ = nullptr;};
    inline string getVolumeID() const { DARABONBA_PTR_GET_DEFAULT(volumeID_, "") };
    inline E2BVolume& setVolumeID(string volumeID) { DARABONBA_PTR_SET_VALUE(volumeID_, volumeID) };


    // volumeName Field Functions 
    bool hasVolumeName() const { return this->volumeName_ != nullptr;};
    void deleteVolumeName() { this->volumeName_ = nullptr;};
    inline string getVolumeName() const { DARABONBA_PTR_GET_DEFAULT(volumeName_, "") };
    inline E2BVolume& setVolumeName(string volumeName) { DARABONBA_PTR_SET_VALUE(volumeName_, volumeName) };


  protected:
    // The AgenticFS configuration.
    shared_ptr<AgenticFSVolumeConfig> agenticFSVolumeConfig_ {};
    // The time when the volume was created.
    shared_ptr<string> createdAt_ {};
    // The mount configuration.
    shared_ptr<E2BVolume::MountConfig> mountConfig_ {};
    // The OSS configuration.
    shared_ptr<OSSVolumeConfig> ossVolumeConfig_ {};
    // The resource group ID.
    shared_ptr<string> resourceGroupID_ {};
    // The status. Valid values:
    // - CREATING
    // - AVAILABLE
    // - ERROR
    // - DELETING
    shared_ptr<string> status_ {};
    // The reason for the status.
    shared_ptr<string> statusReason_ {};
    // The storage type. Valid values:
    // - OSS
    // - AGENTIC_FS
    shared_ptr<string> storageClass_ {};
    // The unique identifier of the team.
    shared_ptr<string> teamID_ {};
    // The time when the volume was last updated.
    shared_ptr<string> updatedAt_ {};
    // The UID of the creator.
    shared_ptr<string> userID_ {};
    // The unique identifier of the volume.
    shared_ptr<string> volumeID_ {};
    // The name, which is unique within the team.
    shared_ptr<string> volumeName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FCSandbox20260509
#endif
