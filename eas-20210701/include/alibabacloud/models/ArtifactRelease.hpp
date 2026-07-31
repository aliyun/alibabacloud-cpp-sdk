// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ARTIFACTRELEASE_HPP_
#define ALIBABACLOUD_MODELS_ARTIFACTRELEASE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eas20210701
{
namespace Models
{
  class ArtifactRelease : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ArtifactRelease& obj) { 
      DARABONBA_PTR_TO_JSON(ArtifactRef, artifactRef_);
      DARABONBA_PTR_TO_JSON(CreatedAt, createdAt_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Image, image_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(Version, version_);
    };
    friend void from_json(const Darabonba::Json& j, ArtifactRelease& obj) { 
      DARABONBA_PTR_FROM_JSON(ArtifactRef, artifactRef_);
      DARABONBA_PTR_FROM_JSON(CreatedAt, createdAt_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Image, image_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
    };
    ArtifactRelease() = default ;
    ArtifactRelease(const ArtifactRelease &) = default ;
    ArtifactRelease(ArtifactRelease &&) = default ;
    ArtifactRelease(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ArtifactRelease() = default ;
    ArtifactRelease& operator=(const ArtifactRelease &) = default ;
    ArtifactRelease& operator=(ArtifactRelease &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->artifactRef_ == nullptr
        && this->createdAt_ == nullptr && this->description_ == nullptr && this->image_ == nullptr && this->type_ == nullptr && this->version_ == nullptr; };
    // artifactRef Field Functions 
    bool hasArtifactRef() const { return this->artifactRef_ != nullptr;};
    void deleteArtifactRef() { this->artifactRef_ = nullptr;};
    inline string getArtifactRef() const { DARABONBA_PTR_GET_DEFAULT(artifactRef_, "") };
    inline ArtifactRelease& setArtifactRef(string artifactRef) { DARABONBA_PTR_SET_VALUE(artifactRef_, artifactRef) };


    // createdAt Field Functions 
    bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
    void deleteCreatedAt() { this->createdAt_ = nullptr;};
    inline string getCreatedAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, "") };
    inline ArtifactRelease& setCreatedAt(string createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ArtifactRelease& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // image Field Functions 
    bool hasImage() const { return this->image_ != nullptr;};
    void deleteImage() { this->image_ = nullptr;};
    inline string getImage() const { DARABONBA_PTR_GET_DEFAULT(image_, "") };
    inline ArtifactRelease& setImage(string image) { DARABONBA_PTR_SET_VALUE(image_, image) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ArtifactRelease& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline ArtifactRelease& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    shared_ptr<string> artifactRef_ {};
    shared_ptr<string> createdAt_ {};
    shared_ptr<string> description_ {};
    shared_ptr<string> image_ {};
    shared_ptr<string> type_ {};
    shared_ptr<string> version_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eas20210701
#endif
