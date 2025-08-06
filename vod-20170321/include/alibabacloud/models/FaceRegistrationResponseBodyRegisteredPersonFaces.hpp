// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FACEREGISTRATIONRESPONSEBODYREGISTEREDPERSONFACES_HPP_
#define ALIBABACLOUD_MODELS_FACEREGISTRATIONRESPONSEBODYREGISTEREDPERSONFACES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/FaceRegistrationResponseBodyRegisteredPersonFacesFace.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class FaceRegistrationResponseBodyRegisteredPersonFaces : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FaceRegistrationResponseBodyRegisteredPersonFaces& obj) { 
      DARABONBA_PTR_TO_JSON(Face, face_);
    };
    friend void from_json(const Darabonba::Json& j, FaceRegistrationResponseBodyRegisteredPersonFaces& obj) { 
      DARABONBA_PTR_FROM_JSON(Face, face_);
    };
    FaceRegistrationResponseBodyRegisteredPersonFaces() = default ;
    FaceRegistrationResponseBodyRegisteredPersonFaces(const FaceRegistrationResponseBodyRegisteredPersonFaces &) = default ;
    FaceRegistrationResponseBodyRegisteredPersonFaces(FaceRegistrationResponseBodyRegisteredPersonFaces &&) = default ;
    FaceRegistrationResponseBodyRegisteredPersonFaces(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FaceRegistrationResponseBodyRegisteredPersonFaces() = default ;
    FaceRegistrationResponseBodyRegisteredPersonFaces& operator=(const FaceRegistrationResponseBodyRegisteredPersonFaces &) = default ;
    FaceRegistrationResponseBodyRegisteredPersonFaces& operator=(FaceRegistrationResponseBodyRegisteredPersonFaces &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->face_ != nullptr; };
    // face Field Functions 
    bool hasFace() const { return this->face_ != nullptr;};
    void deleteFace() { this->face_ = nullptr;};
    inline const vector<Models::FaceRegistrationResponseBodyRegisteredPersonFacesFace> & face() const { DARABONBA_PTR_GET_CONST(face_, vector<Models::FaceRegistrationResponseBodyRegisteredPersonFacesFace>) };
    inline vector<Models::FaceRegistrationResponseBodyRegisteredPersonFacesFace> face() { DARABONBA_PTR_GET(face_, vector<Models::FaceRegistrationResponseBodyRegisteredPersonFacesFace>) };
    inline FaceRegistrationResponseBodyRegisteredPersonFaces& setFace(const vector<Models::FaceRegistrationResponseBodyRegisteredPersonFacesFace> & face) { DARABONBA_PTR_SET_VALUE(face_, face) };
    inline FaceRegistrationResponseBodyRegisteredPersonFaces& setFace(vector<Models::FaceRegistrationResponseBodyRegisteredPersonFacesFace> && face) { DARABONBA_PTR_SET_RVALUE(face_, face) };


  protected:
    std::shared_ptr<vector<Models::FaceRegistrationResponseBodyRegisteredPersonFacesFace>> face_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
