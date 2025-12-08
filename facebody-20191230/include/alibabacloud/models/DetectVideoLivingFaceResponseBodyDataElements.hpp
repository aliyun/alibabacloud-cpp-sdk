// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DETECTVIDEOLIVINGFACERESPONSEBODYDATAELEMENTS_HPP_
#define ALIBABACLOUD_MODELS_DETECTVIDEOLIVINGFACERESPONSEBODYDATAELEMENTS_HPP_
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
  class DetectVideoLivingFaceResponseBodyDataElements : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DetectVideoLivingFaceResponseBodyDataElements& obj) { 
      DARABONBA_PTR_TO_JSON(FaceConfidence, faceConfidence_);
      DARABONBA_PTR_TO_JSON(LiveConfidence, liveConfidence_);
      DARABONBA_PTR_TO_JSON(Rect, rect_);
    };
    friend void from_json(const Darabonba::Json& j, DetectVideoLivingFaceResponseBodyDataElements& obj) { 
      DARABONBA_PTR_FROM_JSON(FaceConfidence, faceConfidence_);
      DARABONBA_PTR_FROM_JSON(LiveConfidence, liveConfidence_);
      DARABONBA_PTR_FROM_JSON(Rect, rect_);
    };
    DetectVideoLivingFaceResponseBodyDataElements() = default ;
    DetectVideoLivingFaceResponseBodyDataElements(const DetectVideoLivingFaceResponseBodyDataElements &) = default ;
    DetectVideoLivingFaceResponseBodyDataElements(DetectVideoLivingFaceResponseBodyDataElements &&) = default ;
    DetectVideoLivingFaceResponseBodyDataElements(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DetectVideoLivingFaceResponseBodyDataElements() = default ;
    DetectVideoLivingFaceResponseBodyDataElements& operator=(const DetectVideoLivingFaceResponseBodyDataElements &) = default ;
    DetectVideoLivingFaceResponseBodyDataElements& operator=(DetectVideoLivingFaceResponseBodyDataElements &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->faceConfidence_ == nullptr
        && return this->liveConfidence_ == nullptr && return this->rect_ == nullptr; };
    // faceConfidence Field Functions 
    bool hasFaceConfidence() const { return this->faceConfidence_ != nullptr;};
    void deleteFaceConfidence() { this->faceConfidence_ = nullptr;};
    inline float faceConfidence() const { DARABONBA_PTR_GET_DEFAULT(faceConfidence_, 0.0) };
    inline DetectVideoLivingFaceResponseBodyDataElements& setFaceConfidence(float faceConfidence) { DARABONBA_PTR_SET_VALUE(faceConfidence_, faceConfidence) };


    // liveConfidence Field Functions 
    bool hasLiveConfidence() const { return this->liveConfidence_ != nullptr;};
    void deleteLiveConfidence() { this->liveConfidence_ = nullptr;};
    inline float liveConfidence() const { DARABONBA_PTR_GET_DEFAULT(liveConfidence_, 0.0) };
    inline DetectVideoLivingFaceResponseBodyDataElements& setLiveConfidence(float liveConfidence) { DARABONBA_PTR_SET_VALUE(liveConfidence_, liveConfidence) };


    // rect Field Functions 
    bool hasRect() const { return this->rect_ != nullptr;};
    void deleteRect() { this->rect_ = nullptr;};
    inline const vector<int32_t> & rect() const { DARABONBA_PTR_GET_CONST(rect_, vector<int32_t>) };
    inline vector<int32_t> rect() { DARABONBA_PTR_GET(rect_, vector<int32_t>) };
    inline DetectVideoLivingFaceResponseBodyDataElements& setRect(const vector<int32_t> & rect) { DARABONBA_PTR_SET_VALUE(rect_, rect) };
    inline DetectVideoLivingFaceResponseBodyDataElements& setRect(vector<int32_t> && rect) { DARABONBA_PTR_SET_RVALUE(rect_, rect) };


  protected:
    std::shared_ptr<float> faceConfidence_ = nullptr;
    std::shared_ptr<float> liveConfidence_ = nullptr;
    std::shared_ptr<vector<int32_t>> rect_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Facebody20191230
#endif
