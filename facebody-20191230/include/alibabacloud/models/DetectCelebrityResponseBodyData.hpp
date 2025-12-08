// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DETECTCELEBRITYRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DETECTCELEBRITYRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DetectCelebrityResponseBodyDataFaceRecognizeResults.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Facebody20191230
{
namespace Models
{
  class DetectCelebrityResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DetectCelebrityResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(FaceRecognizeResults, faceRecognizeResults_);
      DARABONBA_PTR_TO_JSON(Height, height_);
      DARABONBA_PTR_TO_JSON(Width, width_);
    };
    friend void from_json(const Darabonba::Json& j, DetectCelebrityResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(FaceRecognizeResults, faceRecognizeResults_);
      DARABONBA_PTR_FROM_JSON(Height, height_);
      DARABONBA_PTR_FROM_JSON(Width, width_);
    };
    DetectCelebrityResponseBodyData() = default ;
    DetectCelebrityResponseBodyData(const DetectCelebrityResponseBodyData &) = default ;
    DetectCelebrityResponseBodyData(DetectCelebrityResponseBodyData &&) = default ;
    DetectCelebrityResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DetectCelebrityResponseBodyData() = default ;
    DetectCelebrityResponseBodyData& operator=(const DetectCelebrityResponseBodyData &) = default ;
    DetectCelebrityResponseBodyData& operator=(DetectCelebrityResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->faceRecognizeResults_ == nullptr
        && return this->height_ == nullptr && return this->width_ == nullptr; };
    // faceRecognizeResults Field Functions 
    bool hasFaceRecognizeResults() const { return this->faceRecognizeResults_ != nullptr;};
    void deleteFaceRecognizeResults() { this->faceRecognizeResults_ = nullptr;};
    inline const vector<Models::DetectCelebrityResponseBodyDataFaceRecognizeResults> & faceRecognizeResults() const { DARABONBA_PTR_GET_CONST(faceRecognizeResults_, vector<Models::DetectCelebrityResponseBodyDataFaceRecognizeResults>) };
    inline vector<Models::DetectCelebrityResponseBodyDataFaceRecognizeResults> faceRecognizeResults() { DARABONBA_PTR_GET(faceRecognizeResults_, vector<Models::DetectCelebrityResponseBodyDataFaceRecognizeResults>) };
    inline DetectCelebrityResponseBodyData& setFaceRecognizeResults(const vector<Models::DetectCelebrityResponseBodyDataFaceRecognizeResults> & faceRecognizeResults) { DARABONBA_PTR_SET_VALUE(faceRecognizeResults_, faceRecognizeResults) };
    inline DetectCelebrityResponseBodyData& setFaceRecognizeResults(vector<Models::DetectCelebrityResponseBodyDataFaceRecognizeResults> && faceRecognizeResults) { DARABONBA_PTR_SET_RVALUE(faceRecognizeResults_, faceRecognizeResults) };


    // height Field Functions 
    bool hasHeight() const { return this->height_ != nullptr;};
    void deleteHeight() { this->height_ = nullptr;};
    inline int32_t height() const { DARABONBA_PTR_GET_DEFAULT(height_, 0) };
    inline DetectCelebrityResponseBodyData& setHeight(int32_t height) { DARABONBA_PTR_SET_VALUE(height_, height) };


    // width Field Functions 
    bool hasWidth() const { return this->width_ != nullptr;};
    void deleteWidth() { this->width_ = nullptr;};
    inline int32_t width() const { DARABONBA_PTR_GET_DEFAULT(width_, 0) };
    inline DetectCelebrityResponseBodyData& setWidth(int32_t width) { DARABONBA_PTR_SET_VALUE(width_, width) };


  protected:
    std::shared_ptr<vector<Models::DetectCelebrityResponseBodyDataFaceRecognizeResults>> faceRecognizeResults_ = nullptr;
    std::shared_ptr<int32_t> height_ = nullptr;
    std::shared_ptr<int32_t> width_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Facebody20191230
#endif
