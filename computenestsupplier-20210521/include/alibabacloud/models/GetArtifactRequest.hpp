// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETARTIFACTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETARTIFACTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNestSupplier20210521
{
namespace Models
{
  class GetArtifactRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetArtifactRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ArtifactId, artifactId_);
      DARABONBA_PTR_TO_JSON(ArtifactName, artifactName_);
      DARABONBA_PTR_TO_JSON(ArtifactVersion, artifactVersion_);
    };
    friend void from_json(const Darabonba::Json& j, GetArtifactRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ArtifactId, artifactId_);
      DARABONBA_PTR_FROM_JSON(ArtifactName, artifactName_);
      DARABONBA_PTR_FROM_JSON(ArtifactVersion, artifactVersion_);
    };
    GetArtifactRequest() = default ;
    GetArtifactRequest(const GetArtifactRequest &) = default ;
    GetArtifactRequest(GetArtifactRequest &&) = default ;
    GetArtifactRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetArtifactRequest() = default ;
    GetArtifactRequest& operator=(const GetArtifactRequest &) = default ;
    GetArtifactRequest& operator=(GetArtifactRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->artifactId_ == nullptr
        && this->artifactName_ == nullptr && this->artifactVersion_ == nullptr; };
    // artifactId Field Functions 
    bool hasArtifactId() const { return this->artifactId_ != nullptr;};
    void deleteArtifactId() { this->artifactId_ = nullptr;};
    inline string getArtifactId() const { DARABONBA_PTR_GET_DEFAULT(artifactId_, "") };
    inline GetArtifactRequest& setArtifactId(string artifactId) { DARABONBA_PTR_SET_VALUE(artifactId_, artifactId) };


    // artifactName Field Functions 
    bool hasArtifactName() const { return this->artifactName_ != nullptr;};
    void deleteArtifactName() { this->artifactName_ = nullptr;};
    inline string getArtifactName() const { DARABONBA_PTR_GET_DEFAULT(artifactName_, "") };
    inline GetArtifactRequest& setArtifactName(string artifactName) { DARABONBA_PTR_SET_VALUE(artifactName_, artifactName) };


    // artifactVersion Field Functions 
    bool hasArtifactVersion() const { return this->artifactVersion_ != nullptr;};
    void deleteArtifactVersion() { this->artifactVersion_ = nullptr;};
    inline string getArtifactVersion() const { DARABONBA_PTR_GET_DEFAULT(artifactVersion_, "") };
    inline GetArtifactRequest& setArtifactVersion(string artifactVersion) { DARABONBA_PTR_SET_VALUE(artifactVersion_, artifactVersion) };


  protected:
    // The ID of the artifact.
    // 
    // Call [ListArtifacts](https://help.aliyun.com/document_detail/469993.html) to obtain the artifact ID.
    shared_ptr<string> artifactId_ {};
    // The name of the artifact.
    // 
    // Call [ListArtifacts](https://help.aliyun.com/document_detail/469993.html) to obtain the artifact name.
    shared_ptr<string> artifactName_ {};
    // The version of the artifact.
    // 
    // Call [ListArtifacts](https://help.aliyun.com/document_detail/469993.html) to obtain the artifact version.
    shared_ptr<string> artifactVersion_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNestSupplier20210521
#endif
