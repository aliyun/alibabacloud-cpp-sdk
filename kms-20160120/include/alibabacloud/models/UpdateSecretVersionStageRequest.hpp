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
        && return this->removeFromVersion_ == nullptr && return this->secretName_ == nullptr && return this->versionStage_ == nullptr; };
    // moveToVersion Field Functions 
    bool hasMoveToVersion() const { return this->moveToVersion_ != nullptr;};
    void deleteMoveToVersion() { this->moveToVersion_ = nullptr;};
    inline string moveToVersion() const { DARABONBA_PTR_GET_DEFAULT(moveToVersion_, "") };
    inline UpdateSecretVersionStageRequest& setMoveToVersion(string moveToVersion) { DARABONBA_PTR_SET_VALUE(moveToVersion_, moveToVersion) };


    // removeFromVersion Field Functions 
    bool hasRemoveFromVersion() const { return this->removeFromVersion_ != nullptr;};
    void deleteRemoveFromVersion() { this->removeFromVersion_ = nullptr;};
    inline string removeFromVersion() const { DARABONBA_PTR_GET_DEFAULT(removeFromVersion_, "") };
    inline UpdateSecretVersionStageRequest& setRemoveFromVersion(string removeFromVersion) { DARABONBA_PTR_SET_VALUE(removeFromVersion_, removeFromVersion) };


    // secretName Field Functions 
    bool hasSecretName() const { return this->secretName_ != nullptr;};
    void deleteSecretName() { this->secretName_ = nullptr;};
    inline string secretName() const { DARABONBA_PTR_GET_DEFAULT(secretName_, "") };
    inline UpdateSecretVersionStageRequest& setSecretName(string secretName) { DARABONBA_PTR_SET_VALUE(secretName_, secretName) };


    // versionStage Field Functions 
    bool hasVersionStage() const { return this->versionStage_ != nullptr;};
    void deleteVersionStage() { this->versionStage_ = nullptr;};
    inline string versionStage() const { DARABONBA_PTR_GET_DEFAULT(versionStage_, "") };
    inline UpdateSecretVersionStageRequest& setVersionStage(string versionStage) { DARABONBA_PTR_SET_VALUE(versionStage_, versionStage) };


  protected:
    // The version from which you want to remove the specified stage label.
    // 
    // >  You must specify at least one of the RemoveFromVersion and MoveToVersion parameters.
    std::shared_ptr<string> moveToVersion_ = nullptr;
    // The specified stage label. Valid values:
    // 
    // *   ACSCurrent
    // *   ACSPrevious
    // *   Custom stage label
    std::shared_ptr<string> removeFromVersion_ = nullptr;
    // The operation that you want to perform. Set the value to **UpdateSecretVersionStage**.
    // 
    // This parameter is required.
    std::shared_ptr<string> secretName_ = nullptr;
    // The name of the secret.
    // 
    // This parameter is required.
    std::shared_ptr<string> versionStage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Kms20160120
#endif
