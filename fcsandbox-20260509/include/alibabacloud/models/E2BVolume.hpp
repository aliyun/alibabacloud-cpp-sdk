// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_E2BVOLUME_HPP_
#define ALIBABACLOUD_MODELS_E2BVOLUME_HPP_
#include <darabonba/Core.hpp>
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
    virtual bool empty() const override { return this->agenticFSVolumeConfig_ == nullptr
        && this->createdAt_ == nullptr && this->ossVolumeConfig_ == nullptr && this->resourceGroupID_ == nullptr && this->status_ == nullptr && this->statusReason_ == nullptr
        && this->storageClass_ == nullptr && this->teamID_ == nullptr && this->updatedAt_ == nullptr && this->userID_ == nullptr && this->volumeID_ == nullptr
        && this->volumeName_ == nullptr; };
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
    shared_ptr<AgenticFSVolumeConfig> agenticFSVolumeConfig_ {};
    shared_ptr<string> createdAt_ {};
    shared_ptr<OSSVolumeConfig> ossVolumeConfig_ {};
    shared_ptr<string> resourceGroupID_ {};
    shared_ptr<string> status_ {};
    shared_ptr<string> statusReason_ {};
    shared_ptr<string> storageClass_ {};
    shared_ptr<string> teamID_ {};
    shared_ptr<string> updatedAt_ {};
    shared_ptr<string> userID_ {};
    shared_ptr<string> volumeID_ {};
    shared_ptr<string> volumeName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FCSandbox20260509
#endif
