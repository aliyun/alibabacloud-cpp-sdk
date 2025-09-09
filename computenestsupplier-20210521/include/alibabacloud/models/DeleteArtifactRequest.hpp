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
    virtual bool empty() const override { this->artifactId_ != nullptr
        && this->artifactVersion_ != nullptr && this->clientToken_ != nullptr; };
    // artifactId Field Functions 
    bool hasArtifactId() const { return this->artifactId_ != nullptr;};
    void deleteArtifactId() { this->artifactId_ = nullptr;};
    inline string artifactId() const { DARABONBA_PTR_GET_DEFAULT(artifactId_, "") };
    inline DeleteArtifactRequest& setArtifactId(string artifactId) { DARABONBA_PTR_SET_VALUE(artifactId_, artifactId) };


    // artifactVersion Field Functions 
    bool hasArtifactVersion() const { return this->artifactVersion_ != nullptr;};
    void deleteArtifactVersion() { this->artifactVersion_ = nullptr;};
    inline string artifactVersion() const { DARABONBA_PTR_GET_DEFAULT(artifactVersion_, "") };
    inline DeleteArtifactRequest& setArtifactVersion(string artifactVersion) { DARABONBA_PTR_SET_VALUE(artifactVersion_, artifactVersion) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline DeleteArtifactRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


  protected:
    // The ID of the artifact.
    // 
    // This parameter is required.
    std::shared_ptr<string> artifactId_ = nullptr;
    // The version of the artifact.
    std::shared_ptr<string> artifactVersion_ = nullptr;
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the token, but you must make sure that the token is unique among different requests. The token can contain only ASCII characters and cannot exceed 64 characters in length.
    std::shared_ptr<string> clientToken_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNestSupplier20210521
#endif
