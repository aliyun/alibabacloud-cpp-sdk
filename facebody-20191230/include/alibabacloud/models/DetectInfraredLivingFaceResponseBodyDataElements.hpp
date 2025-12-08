// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DETECTINFRAREDLIVINGFACERESPONSEBODYDATAELEMENTS_HPP_
#define ALIBABACLOUD_MODELS_DETECTINFRAREDLIVINGFACERESPONSEBODYDATAELEMENTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DetectInfraredLivingFaceResponseBodyDataElementsResults.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Facebody20191230
{
namespace Models
{
  class DetectInfraredLivingFaceResponseBodyDataElements : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DetectInfraredLivingFaceResponseBodyDataElements& obj) { 
      DARABONBA_PTR_TO_JSON(FaceNumber, faceNumber_);
      DARABONBA_PTR_TO_JSON(ImageURL, imageURL_);
      DARABONBA_PTR_TO_JSON(Results, results_);
    };
    friend void from_json(const Darabonba::Json& j, DetectInfraredLivingFaceResponseBodyDataElements& obj) { 
      DARABONBA_PTR_FROM_JSON(FaceNumber, faceNumber_);
      DARABONBA_PTR_FROM_JSON(ImageURL, imageURL_);
      DARABONBA_PTR_FROM_JSON(Results, results_);
    };
    DetectInfraredLivingFaceResponseBodyDataElements() = default ;
    DetectInfraredLivingFaceResponseBodyDataElements(const DetectInfraredLivingFaceResponseBodyDataElements &) = default ;
    DetectInfraredLivingFaceResponseBodyDataElements(DetectInfraredLivingFaceResponseBodyDataElements &&) = default ;
    DetectInfraredLivingFaceResponseBodyDataElements(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DetectInfraredLivingFaceResponseBodyDataElements() = default ;
    DetectInfraredLivingFaceResponseBodyDataElements& operator=(const DetectInfraredLivingFaceResponseBodyDataElements &) = default ;
    DetectInfraredLivingFaceResponseBodyDataElements& operator=(DetectInfraredLivingFaceResponseBodyDataElements &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->faceNumber_ == nullptr
        && return this->imageURL_ == nullptr && return this->results_ == nullptr; };
    // faceNumber Field Functions 
    bool hasFaceNumber() const { return this->faceNumber_ != nullptr;};
    void deleteFaceNumber() { this->faceNumber_ = nullptr;};
    inline int64_t faceNumber() const { DARABONBA_PTR_GET_DEFAULT(faceNumber_, 0L) };
    inline DetectInfraredLivingFaceResponseBodyDataElements& setFaceNumber(int64_t faceNumber) { DARABONBA_PTR_SET_VALUE(faceNumber_, faceNumber) };


    // imageURL Field Functions 
    bool hasImageURL() const { return this->imageURL_ != nullptr;};
    void deleteImageURL() { this->imageURL_ = nullptr;};
    inline string imageURL() const { DARABONBA_PTR_GET_DEFAULT(imageURL_, "") };
    inline DetectInfraredLivingFaceResponseBodyDataElements& setImageURL(string imageURL) { DARABONBA_PTR_SET_VALUE(imageURL_, imageURL) };


    // results Field Functions 
    bool hasResults() const { return this->results_ != nullptr;};
    void deleteResults() { this->results_ = nullptr;};
    inline const vector<Models::DetectInfraredLivingFaceResponseBodyDataElementsResults> & results() const { DARABONBA_PTR_GET_CONST(results_, vector<Models::DetectInfraredLivingFaceResponseBodyDataElementsResults>) };
    inline vector<Models::DetectInfraredLivingFaceResponseBodyDataElementsResults> results() { DARABONBA_PTR_GET(results_, vector<Models::DetectInfraredLivingFaceResponseBodyDataElementsResults>) };
    inline DetectInfraredLivingFaceResponseBodyDataElements& setResults(const vector<Models::DetectInfraredLivingFaceResponseBodyDataElementsResults> & results) { DARABONBA_PTR_SET_VALUE(results_, results) };
    inline DetectInfraredLivingFaceResponseBodyDataElements& setResults(vector<Models::DetectInfraredLivingFaceResponseBodyDataElementsResults> && results) { DARABONBA_PTR_SET_RVALUE(results_, results) };


  protected:
    std::shared_ptr<int64_t> faceNumber_ = nullptr;
    std::shared_ptr<string> imageURL_ = nullptr;
    std::shared_ptr<vector<Models::DetectInfraredLivingFaceResponseBodyDataElementsResults>> results_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Facebody20191230
#endif
