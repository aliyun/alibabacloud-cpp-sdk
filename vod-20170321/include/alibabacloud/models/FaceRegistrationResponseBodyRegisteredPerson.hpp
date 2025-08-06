// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FACEREGISTRATIONRESPONSEBODYREGISTEREDPERSON_HPP_
#define ALIBABACLOUD_MODELS_FACEREGISTRATIONRESPONSEBODYREGISTEREDPERSON_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/FaceRegistrationResponseBodyRegisteredPersonFaces.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class FaceRegistrationResponseBodyRegisteredPerson : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FaceRegistrationResponseBodyRegisteredPerson& obj) { 
      DARABONBA_PTR_TO_JSON(Faces, faces_);
      DARABONBA_PTR_TO_JSON(PersonId, personId_);
      DARABONBA_PTR_TO_JSON(PersonName, personName_);
    };
    friend void from_json(const Darabonba::Json& j, FaceRegistrationResponseBodyRegisteredPerson& obj) { 
      DARABONBA_PTR_FROM_JSON(Faces, faces_);
      DARABONBA_PTR_FROM_JSON(PersonId, personId_);
      DARABONBA_PTR_FROM_JSON(PersonName, personName_);
    };
    FaceRegistrationResponseBodyRegisteredPerson() = default ;
    FaceRegistrationResponseBodyRegisteredPerson(const FaceRegistrationResponseBodyRegisteredPerson &) = default ;
    FaceRegistrationResponseBodyRegisteredPerson(FaceRegistrationResponseBodyRegisteredPerson &&) = default ;
    FaceRegistrationResponseBodyRegisteredPerson(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FaceRegistrationResponseBodyRegisteredPerson() = default ;
    FaceRegistrationResponseBodyRegisteredPerson& operator=(const FaceRegistrationResponseBodyRegisteredPerson &) = default ;
    FaceRegistrationResponseBodyRegisteredPerson& operator=(FaceRegistrationResponseBodyRegisteredPerson &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->faces_ != nullptr
        && this->personId_ != nullptr && this->personName_ != nullptr; };
    // faces Field Functions 
    bool hasFaces() const { return this->faces_ != nullptr;};
    void deleteFaces() { this->faces_ = nullptr;};
    inline const Models::FaceRegistrationResponseBodyRegisteredPersonFaces & faces() const { DARABONBA_PTR_GET_CONST(faces_, Models::FaceRegistrationResponseBodyRegisteredPersonFaces) };
    inline Models::FaceRegistrationResponseBodyRegisteredPersonFaces faces() { DARABONBA_PTR_GET(faces_, Models::FaceRegistrationResponseBodyRegisteredPersonFaces) };
    inline FaceRegistrationResponseBodyRegisteredPerson& setFaces(const Models::FaceRegistrationResponseBodyRegisteredPersonFaces & faces) { DARABONBA_PTR_SET_VALUE(faces_, faces) };
    inline FaceRegistrationResponseBodyRegisteredPerson& setFaces(Models::FaceRegistrationResponseBodyRegisteredPersonFaces && faces) { DARABONBA_PTR_SET_RVALUE(faces_, faces) };


    // personId Field Functions 
    bool hasPersonId() const { return this->personId_ != nullptr;};
    void deletePersonId() { this->personId_ = nullptr;};
    inline string personId() const { DARABONBA_PTR_GET_DEFAULT(personId_, "") };
    inline FaceRegistrationResponseBodyRegisteredPerson& setPersonId(string personId) { DARABONBA_PTR_SET_VALUE(personId_, personId) };


    // personName Field Functions 
    bool hasPersonName() const { return this->personName_ != nullptr;};
    void deletePersonName() { this->personName_ = nullptr;};
    inline string personName() const { DARABONBA_PTR_GET_DEFAULT(personName_, "") };
    inline FaceRegistrationResponseBodyRegisteredPerson& setPersonName(string personName) { DARABONBA_PTR_SET_VALUE(personName_, personName) };


  protected:
    std::shared_ptr<Models::FaceRegistrationResponseBodyRegisteredPersonFaces> faces_ = nullptr;
    std::shared_ptr<string> personId_ = nullptr;
    std::shared_ptr<string> personName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
