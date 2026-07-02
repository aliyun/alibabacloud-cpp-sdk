// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUTSECRETVALUERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_PUTSECRETVALUERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
    class VersionStages : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const VersionStages& obj) { 
        DARABONBA_PTR_TO_JSON(VersionStage, versionStage_);
      };
      friend void from_json(const Darabonba::Json& j, VersionStages& obj) { 
        DARABONBA_PTR_FROM_JSON(VersionStage, versionStage_);
      };
      VersionStages() = default ;
      VersionStages(const VersionStages &) = default ;
      VersionStages(VersionStages &&) = default ;
      VersionStages(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~VersionStages() = default ;
      VersionStages& operator=(const VersionStages &) = default ;
      VersionStages& operator=(VersionStages &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->versionStage_ == nullptr; };
      // versionStage Field Functions 
      bool hasVersionStage() const { return this->versionStage_ != nullptr;};
      void deleteVersionStage() { this->versionStage_ = nullptr;};
      inline const vector<string> & getVersionStage() const { DARABONBA_PTR_GET_CONST(versionStage_, vector<string>) };
      inline vector<string> getVersionStage() { DARABONBA_PTR_GET(versionStage_, vector<string>) };
      inline VersionStages& setVersionStage(const vector<string> & versionStage) { DARABONBA_PTR_SET_VALUE(versionStage_, versionStage) };
      inline VersionStages& setVersionStage(vector<string> && versionStage) { DARABONBA_PTR_SET_RVALUE(versionStage_, versionStage) };


    protected:
      shared_ptr<vector<string>> versionStage_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->secretName_ == nullptr && this->versionId_ == nullptr && this->versionStages_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline PutSecretValueResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // secretName Field Functions 
    bool hasSecretName() const { return this->secretName_ != nullptr;};
    void deleteSecretName() { this->secretName_ = nullptr;};
    inline string getSecretName() const { DARABONBA_PTR_GET_DEFAULT(secretName_, "") };
    inline PutSecretValueResponseBody& setSecretName(string secretName) { DARABONBA_PTR_SET_VALUE(secretName_, secretName) };


    // versionId Field Functions 
    bool hasVersionId() const { return this->versionId_ != nullptr;};
    void deleteVersionId() { this->versionId_ = nullptr;};
    inline string getVersionId() const { DARABONBA_PTR_GET_DEFAULT(versionId_, "") };
    inline PutSecretValueResponseBody& setVersionId(string versionId) { DARABONBA_PTR_SET_VALUE(versionId_, versionId) };


    // versionStages Field Functions 
    bool hasVersionStages() const { return this->versionStages_ != nullptr;};
    void deleteVersionStages() { this->versionStages_ = nullptr;};
    inline const PutSecretValueResponseBody::VersionStages & getVersionStages() const { DARABONBA_PTR_GET_CONST(versionStages_, PutSecretValueResponseBody::VersionStages) };
    inline PutSecretValueResponseBody::VersionStages getVersionStages() { DARABONBA_PTR_GET(versionStages_, PutSecretValueResponseBody::VersionStages) };
    inline PutSecretValueResponseBody& setVersionStages(const PutSecretValueResponseBody::VersionStages & versionStages) { DARABONBA_PTR_SET_VALUE(versionStages_, versionStages) };
    inline PutSecretValueResponseBody& setVersionStages(PutSecretValueResponseBody::VersionStages && versionStages) { DARABONBA_PTR_SET_RVALUE(versionStages_, versionStages) };


  protected:
    // The ID of the request, which is a unique identifier generated by Alibaba Cloud. You can use this ID to troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // The name of the secret.
    shared_ptr<string> secretName_ {};
    // The version number of the secret.
    shared_ptr<string> versionId_ {};
    shared_ptr<PutSecretValueResponseBody::VersionStages> versionStages_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Kms20160120
#endif
