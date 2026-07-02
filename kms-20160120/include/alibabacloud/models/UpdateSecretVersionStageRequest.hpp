// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESECRETVERSIONSTAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATESECRETVERSIONSTAGEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Kms20160120
{
namespace Models
{
  class UpdateSecretVersionStageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateSecretVersionStageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(MoveToVersion, moveToVersion_);
      DARABONBA_PTR_TO_JSON(RemoveFromVersion, removeFromVersion_);
      DARABONBA_PTR_TO_JSON(SecretName, secretName_);
      DARABONBA_PTR_TO_JSON(VersionStage, versionStage_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateSecretVersionStageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(MoveToVersion, moveToVersion_);
      DARABONBA_PTR_FROM_JSON(RemoveFromVersion, removeFromVersion_);
      DARABONBA_PTR_FROM_JSON(SecretName, secretName_);
      DARABONBA_PTR_FROM_JSON(VersionStage, versionStage_);
    };
    UpdateSecretVersionStageRequest() = default ;
    UpdateSecretVersionStageRequest(const UpdateSecretVersionStageRequest &) = default ;
    UpdateSecretVersionStageRequest(UpdateSecretVersionStageRequest &&) = default ;
    UpdateSecretVersionStageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateSecretVersionStageRequest() = default ;
    UpdateSecretVersionStageRequest& operator=(const UpdateSecretVersionStageRequest &) = default ;
    UpdateSecretVersionStageRequest& operator=(UpdateSecretVersionStageRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->moveToVersion_ == nullptr
        && this->removeFromVersion_ == nullptr && this->secretName_ == nullptr && this->versionStage_ == nullptr; };
    // moveToVersion Field Functions 
    bool hasMoveToVersion() const { return this->moveToVersion_ != nullptr;};
    void deleteMoveToVersion() { this->moveToVersion_ = nullptr;};
    inline string getMoveToVersion() const { DARABONBA_PTR_GET_DEFAULT(moveToVersion_, "") };
    inline UpdateSecretVersionStageRequest& setMoveToVersion(string moveToVersion) { DARABONBA_PTR_SET_VALUE(moveToVersion_, moveToVersion) };


    // removeFromVersion Field Functions 
    bool hasRemoveFromVersion() const { return this->removeFromVersion_ != nullptr;};
    void deleteRemoveFromVersion() { this->removeFromVersion_ = nullptr;};
    inline string getRemoveFromVersion() const { DARABONBA_PTR_GET_DEFAULT(removeFromVersion_, "") };
    inline UpdateSecretVersionStageRequest& setRemoveFromVersion(string removeFromVersion) { DARABONBA_PTR_SET_VALUE(removeFromVersion_, removeFromVersion) };


    // secretName Field Functions 
    bool hasSecretName() const { return this->secretName_ != nullptr;};
    void deleteSecretName() { this->secretName_ = nullptr;};
    inline string getSecretName() const { DARABONBA_PTR_GET_DEFAULT(secretName_, "") };
    inline UpdateSecretVersionStageRequest& setSecretName(string secretName) { DARABONBA_PTR_SET_VALUE(secretName_, secretName) };


    // versionStage Field Functions 
    bool hasVersionStage() const { return this->versionStage_ != nullptr;};
    void deleteVersionStage() { this->versionStage_ = nullptr;};
    inline string getVersionStage() const { DARABONBA_PTR_GET_DEFAULT(versionStage_, "") };
    inline UpdateSecretVersionStageRequest& setVersionStage(string versionStage) { DARABONBA_PTR_SET_VALUE(versionStage_, versionStage) };


  protected:
    // The version number of the secret. This parameter specifies that the version stage set by VersionStage is attached to this version.
    // 
    // > - You must specify at least one of RemoveFromVersion and MoveToVersion.
    // >
    // > - If you set VersionStage to ACSCurrent or ACSPrevious, you must specify this parameter.
    shared_ptr<string> moveToVersion_ {};
    // The version number of the secret. This parameter specifies that the version stage set by VersionStage is removed from this version.
    // 
    // > You must specify at least one of RemoveFromVersion and MoveToVersion.
    shared_ptr<string> removeFromVersion_ {};
    // The name or Alibaba Cloud Resource Name (ARN) of the secret.
    // 
    // > To access a secret in a different Alibaba Cloud account, you must specify the ARN of the secret. The ARN is in the format of `acs:kms:${region}:${account}:secret/${secret-name}`.
    // 
    // This parameter is required.
    shared_ptr<string> secretName_ {};
    // The version stage of the secret.
    // 
    // **Scenario 1: Add a version stage to a specified secret version.**
    // 
    // Specify this parameter and MoveToVersion. Do not specify RemoveFromVersion. This parameter can be set to ACSCurrent, ACSPrevious, or a custom stage.
    // 
    // **Scenario 2: Remove a version stage from a specified secret version.**
    // 
    // Specify this parameter and RemoveFromVersion. Do not specify MoveToVersion. This parameter must be set to a custom stage.
    // 
    // > ACSCurrent and ACSPrevious are system-reserved stages. You cannot directly remove them. You can only remove them from one secret version and attach them to another.
    // 
    // **Scenario 3: Remove a version stage from a specified secret version and attach it to another secret version.**
    // 
    // Specify this parameter, MoveToVersion, and RemoveFromVersion. This parameter can be set to ACSCurrent, ACSPrevious, or a custom stage.
    // 
    // This parameter is required.
    shared_ptr<string> versionStage_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Kms20160120
#endif
