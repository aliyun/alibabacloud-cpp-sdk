// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCUSTOMPERSONSRESPONSEBODYCATEGORIESCATEGORYPERSONSPERSONFACESFACE_HPP_
#define ALIBABACLOUD_MODELS_LISTCUSTOMPERSONSRESPONSEBODYCATEGORIESCATEGORYPERSONSPERSONFACESFACE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class ListCustomPersonsResponseBodyCategoriesCategoryPersonsPersonFacesFace : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCustomPersonsResponseBodyCategoriesCategoryPersonsPersonFacesFace& obj) { 
      DARABONBA_PTR_TO_JSON(FaceId, faceId_);
      DARABONBA_PTR_TO_JSON(ImageUrl, imageUrl_);
    };
    friend void from_json(const Darabonba::Json& j, ListCustomPersonsResponseBodyCategoriesCategoryPersonsPersonFacesFace& obj) { 
      DARABONBA_PTR_FROM_JSON(FaceId, faceId_);
      DARABONBA_PTR_FROM_JSON(ImageUrl, imageUrl_);
    };
    ListCustomPersonsResponseBodyCategoriesCategoryPersonsPersonFacesFace() = default ;
    ListCustomPersonsResponseBodyCategoriesCategoryPersonsPersonFacesFace(const ListCustomPersonsResponseBodyCategoriesCategoryPersonsPersonFacesFace &) = default ;
    ListCustomPersonsResponseBodyCategoriesCategoryPersonsPersonFacesFace(ListCustomPersonsResponseBodyCategoriesCategoryPersonsPersonFacesFace &&) = default ;
    ListCustomPersonsResponseBodyCategoriesCategoryPersonsPersonFacesFace(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCustomPersonsResponseBodyCategoriesCategoryPersonsPersonFacesFace() = default ;
    ListCustomPersonsResponseBodyCategoriesCategoryPersonsPersonFacesFace& operator=(const ListCustomPersonsResponseBodyCategoriesCategoryPersonsPersonFacesFace &) = default ;
    ListCustomPersonsResponseBodyCategoriesCategoryPersonsPersonFacesFace& operator=(ListCustomPersonsResponseBodyCategoriesCategoryPersonsPersonFacesFace &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->faceId_ == nullptr
        && return this->imageUrl_ == nullptr; };
    // faceId Field Functions 
    bool hasFaceId() const { return this->faceId_ != nullptr;};
    void deleteFaceId() { this->faceId_ = nullptr;};
    inline string faceId() const { DARABONBA_PTR_GET_DEFAULT(faceId_, "") };
    inline ListCustomPersonsResponseBodyCategoriesCategoryPersonsPersonFacesFace& setFaceId(string faceId) { DARABONBA_PTR_SET_VALUE(faceId_, faceId) };


    // imageUrl Field Functions 
    bool hasImageUrl() const { return this->imageUrl_ != nullptr;};
    void deleteImageUrl() { this->imageUrl_ = nullptr;};
    inline string imageUrl() const { DARABONBA_PTR_GET_DEFAULT(imageUrl_, "") };
    inline ListCustomPersonsResponseBodyCategoriesCategoryPersonsPersonFacesFace& setImageUrl(string imageUrl) { DARABONBA_PTR_SET_VALUE(imageUrl_, imageUrl) };


  protected:
    // The ID of the face.
    std::shared_ptr<string> faceId_ = nullptr;
    // The URL of the facial image that was registered for the figure.
    std::shared_ptr<string> imageUrl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
