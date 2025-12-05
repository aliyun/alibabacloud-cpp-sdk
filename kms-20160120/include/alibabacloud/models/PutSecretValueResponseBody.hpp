// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUTSECRETVALUERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_PUTSECRETVALUERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/PutSecretValueResponseBodyVersionStages.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Kms20160120
{
namespace Models
{
  class PutSecretValueResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PutSecretValueResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SecretName, secretName_);
      DARABONBA_PTR_TO_JSON(VersionId, versionId_);
      DARABONBA_PTR_TO_JSON(VersionStages, versionStages_);
    };
    friend void from_json(const Darabonba::Json& j, PutSecretValueResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SecretName, secretName_);
      DARABONBA_PTR_FROM_JSON(VersionId, versionId_);
      DARABONBA_PTR_FROM_JSON(VersionStages, versionStages_);
    };
    PutSecretValueResponseBody() = default ;
    PutSecretValueResponseBody(const PutSecretValueResponseBody &) = default ;
    PutSecretValueResponseBody(PutSecretValueResponseBody &&) = default ;
    PutSecretValueResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PutSecretValueResponseBody() = default ;
    PutSecretValueResponseBody& operator=(const PutSecretValueResponseBody &) = default ;
    PutSecretValueResponseBody& operator=(PutSecretValueResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->secretName_ == nullptr && return this->versionId_ == nullptr && return this->versionStages_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline PutSecretValueResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // secretName Field Functions 
    bool hasSecretName() const { return this->secretName_ != nullptr;};
    void deleteSecretName() { this->secretName_ = nullptr;};
    inline string secretName() const { DARABONBA_PTR_GET_DEFAULT(secretName_, "") };
    inline PutSecretValueResponseBody& setSecretName(string secretName) { DARABONBA_PTR_SET_VALUE(secretName_, secretName) };


    // versionId Field Functions 
    bool hasVersionId() const { return this->versionId_ != nullptr;};
    void deleteVersionId() { this->versionId_ = nullptr;};
    inline string versionId() const { DARABONBA_PTR_GET_DEFAULT(versionId_, "") };
    inline PutSecretValueResponseBody& setVersionId(string versionId) { DARABONBA_PTR_SET_VALUE(versionId_, versionId) };


    // versionStages Field Functions 
    bool hasVersionStages() const { return this->versionStages_ != nullptr;};
    void deleteVersionStages() { this->versionStages_ = nullptr;};
    inline const PutSecretValueResponseBodyVersionStages & versionStages() const { DARABONBA_PTR_GET_CONST(versionStages_, PutSecretValueResponseBodyVersionStages) };
    inline PutSecretValueResponseBodyVersionStages versionStages() { DARABONBA_PTR_GET(versionStages_, PutSecretValueResponseBodyVersionStages) };
    inline PutSecretValueResponseBody& setVersionStages(const PutSecretValueResponseBodyVersionStages & versionStages) { DARABONBA_PTR_SET_VALUE(versionStages_, versionStages) };
    inline PutSecretValueResponseBody& setVersionStages(PutSecretValueResponseBodyVersionStages && versionStages) { DARABONBA_PTR_SET_RVALUE(versionStages_, versionStages) };


  protected:
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
    // The name of the secret.
    std::shared_ptr<string> secretName_ = nullptr;
    // The new version of the secret value.
    std::shared_ptr<string> versionId_ = nullptr;
    // The stage labels that are used to mark the new version.
    std::shared_ptr<PutSecretValueResponseBodyVersionStages> versionStages_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Kms20160120
#endif
