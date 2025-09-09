// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTARTIFACTRISKSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTARTIFACTRISKSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNestSupplier20210521
{
namespace Models
{
  class ListArtifactRisksRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListArtifactRisksRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ArtifactId, artifactId_);
      DARABONBA_PTR_TO_JSON(ArtifactVersion, artifactVersion_);
    };
    friend void from_json(const Darabonba::Json& j, ListArtifactRisksRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ArtifactId, artifactId_);
      DARABONBA_PTR_FROM_JSON(ArtifactVersion, artifactVersion_);
    };
    ListArtifactRisksRequest() = default ;
    ListArtifactRisksRequest(const ListArtifactRisksRequest &) = default ;
    ListArtifactRisksRequest(ListArtifactRisksRequest &&) = default ;
    ListArtifactRisksRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListArtifactRisksRequest() = default ;
    ListArtifactRisksRequest& operator=(const ListArtifactRisksRequest &) = default ;
    ListArtifactRisksRequest& operator=(ListArtifactRisksRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->artifactId_ != nullptr
        && this->artifactVersion_ != nullptr; };
    // artifactId Field Functions 
    bool hasArtifactId() const { return this->artifactId_ != nullptr;};
    void deleteArtifactId() { this->artifactId_ = nullptr;};
    inline string artifactId() const { DARABONBA_PTR_GET_DEFAULT(artifactId_, "") };
    inline ListArtifactRisksRequest& setArtifactId(string artifactId) { DARABONBA_PTR_SET_VALUE(artifactId_, artifactId) };


    // artifactVersion Field Functions 
    bool hasArtifactVersion() const { return this->artifactVersion_ != nullptr;};
    void deleteArtifactVersion() { this->artifactVersion_ = nullptr;};
    inline string artifactVersion() const { DARABONBA_PTR_GET_DEFAULT(artifactVersion_, "") };
    inline ListArtifactRisksRequest& setArtifactVersion(string artifactVersion) { DARABONBA_PTR_SET_VALUE(artifactVersion_, artifactVersion) };


  protected:
    // Artifact ID.
    std::shared_ptr<string> artifactId_ = nullptr;
    // Artifact version.
    std::shared_ptr<string> artifactVersion_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNestSupplier20210521
#endif
