// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEARTIFACTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEARTIFACTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNestSupplier20210521
{
namespace Models
{
  class DeleteArtifactRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteArtifactRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ArtifactId, artifactId_);
      DARABONBA_PTR_TO_JSON(ArtifactVersion, artifactVersion_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteArtifactRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ArtifactId, artifactId_);
      DARABONBA_PTR_FROM_JSON(ArtifactVersion, artifactVersion_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
    };
    DeleteArtifactRequest() = default ;
    DeleteArtifactRequest(const DeleteArtifactRequest &) = default ;
    DeleteArtifactRequest(DeleteArtifactRequest &&) = default ;
    DeleteArtifactRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteArtifactRequest() = default ;
    DeleteArtifactRequest& operator=(const DeleteArtifactRequest &) = default ;
    DeleteArtifactRequest& operator=(DeleteArtifactRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->artifactId_ == nullptr
        && this->artifactVersion_ == nullptr && this->clientToken_ == nullptr; };
    // artifactId Field Functions 
    bool hasArtifactId() const { return this->artifactId_ != nullptr;};
    void deleteArtifactId() { this->artifactId_ = nullptr;};
    inline string getArtifactId() const { DARABONBA_PTR_GET_DEFAULT(artifactId_, "") };
    inline DeleteArtifactRequest& setArtifactId(string artifactId) { DARABONBA_PTR_SET_VALUE(artifactId_, artifactId) };


    // artifactVersion Field Functions 
    bool hasArtifactVersion() const { return this->artifactVersion_ != nullptr;};
    void deleteArtifactVersion() { this->artifactVersion_ = nullptr;};
    inline string getArtifactVersion() const { DARABONBA_PTR_GET_DEFAULT(artifactVersion_, "") };
    inline DeleteArtifactRequest& setArtifactVersion(string artifactVersion) { DARABONBA_PTR_SET_VALUE(artifactVersion_, artifactVersion) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline DeleteArtifactRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


  protected:
    // The ID of the artifact.
    // 
    // Call [ListArtifacts](https://help.aliyun.com/document_detail/469993.html) to obtain the artifact ID.
    // 
    // This parameter is required.
    shared_ptr<string> artifactId_ {};
    // The version of the artifact.
    // 
    // Call [ListArtifactVersions](https://help.aliyun.com/document_detail/469995.html) to obtain the artifact version.
    shared_ptr<string> artifactVersion_ {};
    // A client-generated token that ensures the idempotence of the request. Make sure that the token is unique for each request. **ClientToken** supports only ASCII characters and must be no more than 64 characters long.
    shared_ptr<string> clientToken_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNestSupplier20210521
#endif
