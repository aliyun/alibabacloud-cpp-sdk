// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEARTIFACTUPLOADTOKENREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEARTIFACTUPLOADTOKENREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace STAROps20260428
{
namespace Models
{
  class CreateArtifactUploadTokenRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateArtifactUploadTokenRequest& obj) { 
      DARABONBA_PTR_TO_JSON(artifactPath, artifactPath_);
    };
    friend void from_json(const Darabonba::Json& j, CreateArtifactUploadTokenRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(artifactPath, artifactPath_);
    };
    CreateArtifactUploadTokenRequest() = default ;
    CreateArtifactUploadTokenRequest(const CreateArtifactUploadTokenRequest &) = default ;
    CreateArtifactUploadTokenRequest(CreateArtifactUploadTokenRequest &&) = default ;
    CreateArtifactUploadTokenRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateArtifactUploadTokenRequest() = default ;
    CreateArtifactUploadTokenRequest& operator=(const CreateArtifactUploadTokenRequest &) = default ;
    CreateArtifactUploadTokenRequest& operator=(CreateArtifactUploadTokenRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->artifactPath_ == nullptr; };
    // artifactPath Field Functions 
    bool hasArtifactPath() const { return this->artifactPath_ != nullptr;};
    void deleteArtifactPath() { this->artifactPath_ = nullptr;};
    inline string getArtifactPath() const { DARABONBA_PTR_GET_DEFAULT(artifactPath_, "") };
    inline CreateArtifactUploadTokenRequest& setArtifactPath(string artifactPath) { DARABONBA_PTR_SET_VALUE(artifactPath_, artifactPath) };


  protected:
    shared_ptr<string> artifactPath_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace STAROps20260428
#endif
