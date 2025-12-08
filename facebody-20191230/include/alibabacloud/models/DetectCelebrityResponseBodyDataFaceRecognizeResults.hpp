// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DETECTCELEBRITYRESPONSEBODYDATAFACERECOGNIZERESULTS_HPP_
#define ALIBABACLOUD_MODELS_DETECTCELEBRITYRESPONSEBODYDATAFACERECOGNIZERESULTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Facebody20191230
{
namespace Models
{
  class DetectCelebrityResponseBodyDataFaceRecognizeResults : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DetectCelebrityResponseBodyDataFaceRecognizeResults& obj) { 
      DARABONBA_PTR_TO_JSON(FaceBoxes, faceBoxes_);
      DARABONBA_PTR_TO_JSON(Name, name_);
    };
    friend void from_json(const Darabonba::Json& j, DetectCelebrityResponseBodyDataFaceRecognizeResults& obj) { 
      DARABONBA_PTR_FROM_JSON(FaceBoxes, faceBoxes_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
    };
    DetectCelebrityResponseBodyDataFaceRecognizeResults() = default ;
    DetectCelebrityResponseBodyDataFaceRecognizeResults(const DetectCelebrityResponseBodyDataFaceRecognizeResults &) = default ;
    DetectCelebrityResponseBodyDataFaceRecognizeResults(DetectCelebrityResponseBodyDataFaceRecognizeResults &&) = default ;
    DetectCelebrityResponseBodyDataFaceRecognizeResults(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DetectCelebrityResponseBodyDataFaceRecognizeResults() = default ;
    DetectCelebrityResponseBodyDataFaceRecognizeResults& operator=(const DetectCelebrityResponseBodyDataFaceRecognizeResults &) = default ;
    DetectCelebrityResponseBodyDataFaceRecognizeResults& operator=(DetectCelebrityResponseBodyDataFaceRecognizeResults &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->faceBoxes_ == nullptr
        && return this->name_ == nullptr; };
    // faceBoxes Field Functions 
    bool hasFaceBoxes() const { return this->faceBoxes_ != nullptr;};
    void deleteFaceBoxes() { this->faceBoxes_ = nullptr;};
    inline const vector<float> & faceBoxes() const { DARABONBA_PTR_GET_CONST(faceBoxes_, vector<float>) };
    inline vector<float> faceBoxes() { DARABONBA_PTR_GET(faceBoxes_, vector<float>) };
    inline DetectCelebrityResponseBodyDataFaceRecognizeResults& setFaceBoxes(const vector<float> & faceBoxes) { DARABONBA_PTR_SET_VALUE(faceBoxes_, faceBoxes) };
    inline DetectCelebrityResponseBodyDataFaceRecognizeResults& setFaceBoxes(vector<float> && faceBoxes) { DARABONBA_PTR_SET_RVALUE(faceBoxes_, faceBoxes) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DetectCelebrityResponseBodyDataFaceRecognizeResults& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    // 1
    std::shared_ptr<vector<float>> faceBoxes_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Facebody20191230
#endif
