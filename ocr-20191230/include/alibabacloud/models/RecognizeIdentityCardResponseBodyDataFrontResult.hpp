// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RECOGNIZEIDENTITYCARDRESPONSEBODYDATAFRONTRESULT_HPP_
#define ALIBABACLOUD_MODELS_RECOGNIZEIDENTITYCARDRESPONSEBODYDATAFRONTRESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/RecognizeIdentityCardResponseBodyDataFrontResultCardAreas.hpp>
#include <alibabacloud/models/RecognizeIdentityCardResponseBodyDataFrontResultFaceRectVertices.hpp>
#include <alibabacloud/models/RecognizeIdentityCardResponseBodyDataFrontResultFaceRectangle.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ocr20191230
{
namespace Models
{
  class RecognizeIdentityCardResponseBodyDataFrontResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RecognizeIdentityCardResponseBodyDataFrontResult& obj) { 
      DARABONBA_PTR_TO_JSON(Address, address_);
      DARABONBA_PTR_TO_JSON(BirthDate, birthDate_);
      DARABONBA_PTR_TO_JSON(CardAreas, cardAreas_);
      DARABONBA_PTR_TO_JSON(FaceRectVertices, faceRectVertices_);
      DARABONBA_PTR_TO_JSON(FaceRectangle, faceRectangle_);
      DARABONBA_PTR_TO_JSON(Gender, gender_);
      DARABONBA_PTR_TO_JSON(IDNumber, IDNumber_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Nationality, nationality_);
    };
    friend void from_json(const Darabonba::Json& j, RecognizeIdentityCardResponseBodyDataFrontResult& obj) { 
      DARABONBA_PTR_FROM_JSON(Address, address_);
      DARABONBA_PTR_FROM_JSON(BirthDate, birthDate_);
      DARABONBA_PTR_FROM_JSON(CardAreas, cardAreas_);
      DARABONBA_PTR_FROM_JSON(FaceRectVertices, faceRectVertices_);
      DARABONBA_PTR_FROM_JSON(FaceRectangle, faceRectangle_);
      DARABONBA_PTR_FROM_JSON(Gender, gender_);
      DARABONBA_PTR_FROM_JSON(IDNumber, IDNumber_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Nationality, nationality_);
    };
    RecognizeIdentityCardResponseBodyDataFrontResult() = default ;
    RecognizeIdentityCardResponseBodyDataFrontResult(const RecognizeIdentityCardResponseBodyDataFrontResult &) = default ;
    RecognizeIdentityCardResponseBodyDataFrontResult(RecognizeIdentityCardResponseBodyDataFrontResult &&) = default ;
    RecognizeIdentityCardResponseBodyDataFrontResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RecognizeIdentityCardResponseBodyDataFrontResult() = default ;
    RecognizeIdentityCardResponseBodyDataFrontResult& operator=(const RecognizeIdentityCardResponseBodyDataFrontResult &) = default ;
    RecognizeIdentityCardResponseBodyDataFrontResult& operator=(RecognizeIdentityCardResponseBodyDataFrontResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->address_ == nullptr
        && return this->birthDate_ == nullptr && return this->cardAreas_ == nullptr && return this->faceRectVertices_ == nullptr && return this->faceRectangle_ == nullptr && return this->gender_ == nullptr
        && return this->IDNumber_ == nullptr && return this->name_ == nullptr && return this->nationality_ == nullptr; };
    // address Field Functions 
    bool hasAddress() const { return this->address_ != nullptr;};
    void deleteAddress() { this->address_ = nullptr;};
    inline string address() const { DARABONBA_PTR_GET_DEFAULT(address_, "") };
    inline RecognizeIdentityCardResponseBodyDataFrontResult& setAddress(string address) { DARABONBA_PTR_SET_VALUE(address_, address) };


    // birthDate Field Functions 
    bool hasBirthDate() const { return this->birthDate_ != nullptr;};
    void deleteBirthDate() { this->birthDate_ = nullptr;};
    inline string birthDate() const { DARABONBA_PTR_GET_DEFAULT(birthDate_, "") };
    inline RecognizeIdentityCardResponseBodyDataFrontResult& setBirthDate(string birthDate) { DARABONBA_PTR_SET_VALUE(birthDate_, birthDate) };


    // cardAreas Field Functions 
    bool hasCardAreas() const { return this->cardAreas_ != nullptr;};
    void deleteCardAreas() { this->cardAreas_ = nullptr;};
    inline const vector<Models::RecognizeIdentityCardResponseBodyDataFrontResultCardAreas> & cardAreas() const { DARABONBA_PTR_GET_CONST(cardAreas_, vector<Models::RecognizeIdentityCardResponseBodyDataFrontResultCardAreas>) };
    inline vector<Models::RecognizeIdentityCardResponseBodyDataFrontResultCardAreas> cardAreas() { DARABONBA_PTR_GET(cardAreas_, vector<Models::RecognizeIdentityCardResponseBodyDataFrontResultCardAreas>) };
    inline RecognizeIdentityCardResponseBodyDataFrontResult& setCardAreas(const vector<Models::RecognizeIdentityCardResponseBodyDataFrontResultCardAreas> & cardAreas) { DARABONBA_PTR_SET_VALUE(cardAreas_, cardAreas) };
    inline RecognizeIdentityCardResponseBodyDataFrontResult& setCardAreas(vector<Models::RecognizeIdentityCardResponseBodyDataFrontResultCardAreas> && cardAreas) { DARABONBA_PTR_SET_RVALUE(cardAreas_, cardAreas) };


    // faceRectVertices Field Functions 
    bool hasFaceRectVertices() const { return this->faceRectVertices_ != nullptr;};
    void deleteFaceRectVertices() { this->faceRectVertices_ = nullptr;};
    inline const vector<Models::RecognizeIdentityCardResponseBodyDataFrontResultFaceRectVertices> & faceRectVertices() const { DARABONBA_PTR_GET_CONST(faceRectVertices_, vector<Models::RecognizeIdentityCardResponseBodyDataFrontResultFaceRectVertices>) };
    inline vector<Models::RecognizeIdentityCardResponseBodyDataFrontResultFaceRectVertices> faceRectVertices() { DARABONBA_PTR_GET(faceRectVertices_, vector<Models::RecognizeIdentityCardResponseBodyDataFrontResultFaceRectVertices>) };
    inline RecognizeIdentityCardResponseBodyDataFrontResult& setFaceRectVertices(const vector<Models::RecognizeIdentityCardResponseBodyDataFrontResultFaceRectVertices> & faceRectVertices) { DARABONBA_PTR_SET_VALUE(faceRectVertices_, faceRectVertices) };
    inline RecognizeIdentityCardResponseBodyDataFrontResult& setFaceRectVertices(vector<Models::RecognizeIdentityCardResponseBodyDataFrontResultFaceRectVertices> && faceRectVertices) { DARABONBA_PTR_SET_RVALUE(faceRectVertices_, faceRectVertices) };


    // faceRectangle Field Functions 
    bool hasFaceRectangle() const { return this->faceRectangle_ != nullptr;};
    void deleteFaceRectangle() { this->faceRectangle_ = nullptr;};
    inline const Models::RecognizeIdentityCardResponseBodyDataFrontResultFaceRectangle & faceRectangle() const { DARABONBA_PTR_GET_CONST(faceRectangle_, Models::RecognizeIdentityCardResponseBodyDataFrontResultFaceRectangle) };
    inline Models::RecognizeIdentityCardResponseBodyDataFrontResultFaceRectangle faceRectangle() { DARABONBA_PTR_GET(faceRectangle_, Models::RecognizeIdentityCardResponseBodyDataFrontResultFaceRectangle) };
    inline RecognizeIdentityCardResponseBodyDataFrontResult& setFaceRectangle(const Models::RecognizeIdentityCardResponseBodyDataFrontResultFaceRectangle & faceRectangle) { DARABONBA_PTR_SET_VALUE(faceRectangle_, faceRectangle) };
    inline RecognizeIdentityCardResponseBodyDataFrontResult& setFaceRectangle(Models::RecognizeIdentityCardResponseBodyDataFrontResultFaceRectangle && faceRectangle) { DARABONBA_PTR_SET_RVALUE(faceRectangle_, faceRectangle) };


    // gender Field Functions 
    bool hasGender() const { return this->gender_ != nullptr;};
    void deleteGender() { this->gender_ = nullptr;};
    inline string gender() const { DARABONBA_PTR_GET_DEFAULT(gender_, "") };
    inline RecognizeIdentityCardResponseBodyDataFrontResult& setGender(string gender) { DARABONBA_PTR_SET_VALUE(gender_, gender) };


    // IDNumber Field Functions 
    bool hasIDNumber() const { return this->IDNumber_ != nullptr;};
    void deleteIDNumber() { this->IDNumber_ = nullptr;};
    inline string IDNumber() const { DARABONBA_PTR_GET_DEFAULT(IDNumber_, "") };
    inline RecognizeIdentityCardResponseBodyDataFrontResult& setIDNumber(string IDNumber) { DARABONBA_PTR_SET_VALUE(IDNumber_, IDNumber) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline RecognizeIdentityCardResponseBodyDataFrontResult& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // nationality Field Functions 
    bool hasNationality() const { return this->nationality_ != nullptr;};
    void deleteNationality() { this->nationality_ = nullptr;};
    inline string nationality() const { DARABONBA_PTR_GET_DEFAULT(nationality_, "") };
    inline RecognizeIdentityCardResponseBodyDataFrontResult& setNationality(string nationality) { DARABONBA_PTR_SET_VALUE(nationality_, nationality) };


  protected:
    std::shared_ptr<string> address_ = nullptr;
    std::shared_ptr<string> birthDate_ = nullptr;
    std::shared_ptr<vector<Models::RecognizeIdentityCardResponseBodyDataFrontResultCardAreas>> cardAreas_ = nullptr;
    std::shared_ptr<vector<Models::RecognizeIdentityCardResponseBodyDataFrontResultFaceRectVertices>> faceRectVertices_ = nullptr;
    std::shared_ptr<Models::RecognizeIdentityCardResponseBodyDataFrontResultFaceRectangle> faceRectangle_ = nullptr;
    std::shared_ptr<string> gender_ = nullptr;
    std::shared_ptr<string> IDNumber_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> nationality_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ocr20191230
#endif
