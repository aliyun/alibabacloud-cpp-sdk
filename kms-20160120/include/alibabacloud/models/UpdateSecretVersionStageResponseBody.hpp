// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESECRETVERSIONSTAGERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATESECRETVERSIONSTAGERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Kms20160120
{
namespace Models
{
  class UpdateSecretVersionStageResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateSecretVersionStageResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SecretName, secretName_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateSecretVersionStageResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SecretName, secretName_);
    };
    UpdateSecretVersionStageResponseBody() = default ;
    UpdateSecretVersionStageResponseBody(const UpdateSecretVersionStageResponseBody &) = default ;
    UpdateSecretVersionStageResponseBody(UpdateSecretVersionStageResponseBody &&) = default ;
    UpdateSecretVersionStageResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateSecretVersionStageResponseBody() = default ;
    UpdateSecretVersionStageResponseBody& operator=(const UpdateSecretVersionStageResponseBody &) = default ;
    UpdateSecretVersionStageResponseBody& operator=(UpdateSecretVersionStageResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->secretName_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdateSecretVersionStageResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // secretName Field Functions 
    bool hasSecretName() const { return this->secretName_ != nullptr;};
    void deleteSecretName() { this->secretName_ = nullptr;};
    inline string secretName() const { DARABONBA_PTR_GET_DEFAULT(secretName_, "") };
    inline UpdateSecretVersionStageResponseBody& setSecretName(string secretName) { DARABONBA_PTR_SET_VALUE(secretName_, secretName) };


  protected:
    // The name of the secret.
    std::shared_ptr<string> requestId_ = nullptr;
    // The version to which you want to apply the specified stage label.
    // 
    // > * You must specify at least one of the RemoveFromVersion and MoveToVersion parameters.
    // > * If the VersionStage parameter is set to ACSCurrent or ACSPrevious, this parameter is required.
    std::shared_ptr<string> secretName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Kms20160120
#endif
