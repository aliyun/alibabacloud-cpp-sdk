// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCUSTOMPERSONSRESPONSEBODYCATEGORIESCATEGORYPERSONSPERSONFACES_HPP_
#define ALIBABACLOUD_MODELS_LISTCUSTOMPERSONSRESPONSEBODYCATEGORIESCATEGORYPERSONSPERSONFACES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListCustomPersonsResponseBodyCategoriesCategoryPersonsPersonFacesFace.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class ListCustomPersonsResponseBodyCategoriesCategoryPersonsPersonFaces : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCustomPersonsResponseBodyCategoriesCategoryPersonsPersonFaces& obj) { 
      DARABONBA_PTR_TO_JSON(Face, face_);
    };
    friend void from_json(const Darabonba::Json& j, ListCustomPersonsResponseBodyCategoriesCategoryPersonsPersonFaces& obj) { 
      DARABONBA_PTR_FROM_JSON(Face, face_);
    };
    ListCustomPersonsResponseBodyCategoriesCategoryPersonsPersonFaces() = default ;
    ListCustomPersonsResponseBodyCategoriesCategoryPersonsPersonFaces(const ListCustomPersonsResponseBodyCategoriesCategoryPersonsPersonFaces &) = default ;
    ListCustomPersonsResponseBodyCategoriesCategoryPersonsPersonFaces(ListCustomPersonsResponseBodyCategoriesCategoryPersonsPersonFaces &&) = default ;
    ListCustomPersonsResponseBodyCategoriesCategoryPersonsPersonFaces(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCustomPersonsResponseBodyCategoriesCategoryPersonsPersonFaces() = default ;
    ListCustomPersonsResponseBodyCategoriesCategoryPersonsPersonFaces& operator=(const ListCustomPersonsResponseBodyCategoriesCategoryPersonsPersonFaces &) = default ;
    ListCustomPersonsResponseBodyCategoriesCategoryPersonsPersonFaces& operator=(ListCustomPersonsResponseBodyCategoriesCategoryPersonsPersonFaces &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->face_ == nullptr; };
    // face Field Functions 
    bool hasFace() const { return this->face_ != nullptr;};
    void deleteFace() { this->face_ = nullptr;};
    inline const vector<Models::ListCustomPersonsResponseBodyCategoriesCategoryPersonsPersonFacesFace> & face() const { DARABONBA_PTR_GET_CONST(face_, vector<Models::ListCustomPersonsResponseBodyCategoriesCategoryPersonsPersonFacesFace>) };
    inline vector<Models::ListCustomPersonsResponseBodyCategoriesCategoryPersonsPersonFacesFace> face() { DARABONBA_PTR_GET(face_, vector<Models::ListCustomPersonsResponseBodyCategoriesCategoryPersonsPersonFacesFace>) };
    inline ListCustomPersonsResponseBodyCategoriesCategoryPersonsPersonFaces& setFace(const vector<Models::ListCustomPersonsResponseBodyCategoriesCategoryPersonsPersonFacesFace> & face) { DARABONBA_PTR_SET_VALUE(face_, face) };
    inline ListCustomPersonsResponseBodyCategoriesCategoryPersonsPersonFaces& setFace(vector<Models::ListCustomPersonsResponseBodyCategoriesCategoryPersonsPersonFacesFace> && face) { DARABONBA_PTR_SET_RVALUE(face_, face) };


  protected:
    std::shared_ptr<vector<Models::ListCustomPersonsResponseBodyCategoriesCategoryPersonsPersonFacesFace>> face_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
