// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RELEASEARTIFACTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RELEASEARTIFACTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNestSupplier20210521
{
namespace Models
{
  class ReleaseArtifactRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ReleaseArtifactRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ArtifactId, artifactId_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
    };
    friend void from_json(const Darabonba::Json& j, ReleaseArtifactRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ArtifactId, artifactId_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
    };
    ReleaseArtifactRequest() = default ;
    ReleaseArtifactRequest(const ReleaseArtifactRequest &) = default ;
    ReleaseArtifactRequest(ReleaseArtifactRequest &&) = default ;
    ReleaseArtifactRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ReleaseArtifactRequest() = default ;
    ReleaseArtifactRequest& operator=(const ReleaseArtifactRequest &) = default ;
    ReleaseArtifactRequest& operator=(ReleaseArtifactRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->artifactId_ == nullptr
        && this->clientToken_ == nullptr; };
    // artifactId Field Functions 
    bool hasArtifactId() const { return this->artifactId_ != nullptr;};
    void deleteArtifactId() { this->artifactId_ = nullptr;};
    inline string getArtifactId() const { DARABONBA_PTR_GET_DEFAULT(artifactId_, "") };
    inline ReleaseArtifactRequest& setArtifactId(string artifactId) { DARABONBA_PTR_SET_VALUE(artifactId_, artifactId) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline ReleaseArtifactRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


  protected:
    // The artifact ID.
    // 
    // Call [ListArtifacts](https://help.aliyun.com/document_detail/469993.html) to obtain the artifact ID.
    // 
    // This parameter is required.
    shared_ptr<string> artifactId_ {};
    // A client-generated token that ensures the idempotence of the request. The token must be unique for each request. The value of **ClientToken** can contain only ASCII characters and must be no more than 64 characters in length.
    shared_ptr<string> clientToken_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNestSupplier20210521
#endif
