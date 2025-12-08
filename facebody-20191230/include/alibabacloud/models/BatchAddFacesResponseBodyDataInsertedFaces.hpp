// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHADDFACESRESPONSEBODYDATAINSERTEDFACES_HPP_
#define ALIBABACLOUD_MODELS_BATCHADDFACESRESPONSEBODYDATAINSERTEDFACES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Facebody20191230
{
namespace Models
{
  class BatchAddFacesResponseBodyDataInsertedFaces : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchAddFacesResponseBodyDataInsertedFaces& obj) { 
      DARABONBA_PTR_TO_JSON(FaceId, faceId_);
      DARABONBA_PTR_TO_JSON(ImageURL, imageURL_);
      DARABONBA_PTR_TO_JSON(QualitieScore, qualitieScore_);
    };
    friend void from_json(const Darabonba::Json& j, BatchAddFacesResponseBodyDataInsertedFaces& obj) { 
      DARABONBA_PTR_FROM_JSON(FaceId, faceId_);
      DARABONBA_PTR_FROM_JSON(ImageURL, imageURL_);
      DARABONBA_PTR_FROM_JSON(QualitieScore, qualitieScore_);
    };
    BatchAddFacesResponseBodyDataInsertedFaces() = default ;
    BatchAddFacesResponseBodyDataInsertedFaces(const BatchAddFacesResponseBodyDataInsertedFaces &) = default ;
    BatchAddFacesResponseBodyDataInsertedFaces(BatchAddFacesResponseBodyDataInsertedFaces &&) = default ;
    BatchAddFacesResponseBodyDataInsertedFaces(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchAddFacesResponseBodyDataInsertedFaces() = default ;
    BatchAddFacesResponseBodyDataInsertedFaces& operator=(const BatchAddFacesResponseBodyDataInsertedFaces &) = default ;
    BatchAddFacesResponseBodyDataInsertedFaces& operator=(BatchAddFacesResponseBodyDataInsertedFaces &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->faceId_ == nullptr
        && return this->imageURL_ == nullptr && return this->qualitieScore_ == nullptr; };
    // faceId Field Functions 
    bool hasFaceId() const { return this->faceId_ != nullptr;};
    void deleteFaceId() { this->faceId_ = nullptr;};
    inline string faceId() const { DARABONBA_PTR_GET_DEFAULT(faceId_, "") };
    inline BatchAddFacesResponseBodyDataInsertedFaces& setFaceId(string faceId) { DARABONBA_PTR_SET_VALUE(faceId_, faceId) };


    // imageURL Field Functions 
    bool hasImageURL() const { return this->imageURL_ != nullptr;};
    void deleteImageURL() { this->imageURL_ = nullptr;};
    inline string imageURL() const { DARABONBA_PTR_GET_DEFAULT(imageURL_, "") };
    inline BatchAddFacesResponseBodyDataInsertedFaces& setImageURL(string imageURL) { DARABONBA_PTR_SET_VALUE(imageURL_, imageURL) };


    // qualitieScore Field Functions 
    bool hasQualitieScore() const { return this->qualitieScore_ != nullptr;};
    void deleteQualitieScore() { this->qualitieScore_ = nullptr;};
    inline float qualitieScore() const { DARABONBA_PTR_GET_DEFAULT(qualitieScore_, 0.0) };
    inline BatchAddFacesResponseBodyDataInsertedFaces& setQualitieScore(float qualitieScore) { DARABONBA_PTR_SET_VALUE(qualitieScore_, qualitieScore) };


  protected:
    std::shared_ptr<string> faceId_ = nullptr;
    std::shared_ptr<string> imageURL_ = nullptr;
    std::shared_ptr<float> qualitieScore_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Facebody20191230
#endif
