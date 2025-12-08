// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_COMPAREFACEWITHMASKRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_COMPAREFACEWITHMASKRESPONSEBODYDATA_HPP_
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
  class CompareFaceWithMaskResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CompareFaceWithMaskResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Confidence, confidence_);
      DARABONBA_PTR_TO_JSON(IsMaskA, isMaskA_);
      DARABONBA_PTR_TO_JSON(IsMaskB, isMaskB_);
      DARABONBA_PTR_TO_JSON(LandmarksAList, landmarksAList_);
      DARABONBA_PTR_TO_JSON(LandmarksBList, landmarksBList_);
      DARABONBA_PTR_TO_JSON(MessageTips, messageTips_);
      DARABONBA_PTR_TO_JSON(QualityScoreA, qualityScoreA_);
      DARABONBA_PTR_TO_JSON(QualityScoreB, qualityScoreB_);
      DARABONBA_PTR_TO_JSON(RectAList, rectAList_);
      DARABONBA_PTR_TO_JSON(RectBList, rectBList_);
      DARABONBA_PTR_TO_JSON(Thresholds, thresholds_);
    };
    friend void from_json(const Darabonba::Json& j, CompareFaceWithMaskResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Confidence, confidence_);
      DARABONBA_PTR_FROM_JSON(IsMaskA, isMaskA_);
      DARABONBA_PTR_FROM_JSON(IsMaskB, isMaskB_);
      DARABONBA_PTR_FROM_JSON(LandmarksAList, landmarksAList_);
      DARABONBA_PTR_FROM_JSON(LandmarksBList, landmarksBList_);
      DARABONBA_PTR_FROM_JSON(MessageTips, messageTips_);
      DARABONBA_PTR_FROM_JSON(QualityScoreA, qualityScoreA_);
      DARABONBA_PTR_FROM_JSON(QualityScoreB, qualityScoreB_);
      DARABONBA_PTR_FROM_JSON(RectAList, rectAList_);
      DARABONBA_PTR_FROM_JSON(RectBList, rectBList_);
      DARABONBA_PTR_FROM_JSON(Thresholds, thresholds_);
    };
    CompareFaceWithMaskResponseBodyData() = default ;
    CompareFaceWithMaskResponseBodyData(const CompareFaceWithMaskResponseBodyData &) = default ;
    CompareFaceWithMaskResponseBodyData(CompareFaceWithMaskResponseBodyData &&) = default ;
    CompareFaceWithMaskResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CompareFaceWithMaskResponseBodyData() = default ;
    CompareFaceWithMaskResponseBodyData& operator=(const CompareFaceWithMaskResponseBodyData &) = default ;
    CompareFaceWithMaskResponseBodyData& operator=(CompareFaceWithMaskResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->confidence_ == nullptr
        && return this->isMaskA_ == nullptr && return this->isMaskB_ == nullptr && return this->landmarksAList_ == nullptr && return this->landmarksBList_ == nullptr && return this->messageTips_ == nullptr
        && return this->qualityScoreA_ == nullptr && return this->qualityScoreB_ == nullptr && return this->rectAList_ == nullptr && return this->rectBList_ == nullptr && return this->thresholds_ == nullptr; };
    // confidence Field Functions 
    bool hasConfidence() const { return this->confidence_ != nullptr;};
    void deleteConfidence() { this->confidence_ = nullptr;};
    inline float confidence() const { DARABONBA_PTR_GET_DEFAULT(confidence_, 0.0) };
    inline CompareFaceWithMaskResponseBodyData& setConfidence(float confidence) { DARABONBA_PTR_SET_VALUE(confidence_, confidence) };


    // isMaskA Field Functions 
    bool hasIsMaskA() const { return this->isMaskA_ != nullptr;};
    void deleteIsMaskA() { this->isMaskA_ = nullptr;};
    inline int64_t isMaskA() const { DARABONBA_PTR_GET_DEFAULT(isMaskA_, 0L) };
    inline CompareFaceWithMaskResponseBodyData& setIsMaskA(int64_t isMaskA) { DARABONBA_PTR_SET_VALUE(isMaskA_, isMaskA) };


    // isMaskB Field Functions 
    bool hasIsMaskB() const { return this->isMaskB_ != nullptr;};
    void deleteIsMaskB() { this->isMaskB_ = nullptr;};
    inline int64_t isMaskB() const { DARABONBA_PTR_GET_DEFAULT(isMaskB_, 0L) };
    inline CompareFaceWithMaskResponseBodyData& setIsMaskB(int64_t isMaskB) { DARABONBA_PTR_SET_VALUE(isMaskB_, isMaskB) };


    // landmarksAList Field Functions 
    bool hasLandmarksAList() const { return this->landmarksAList_ != nullptr;};
    void deleteLandmarksAList() { this->landmarksAList_ = nullptr;};
    inline const vector<int64_t> & landmarksAList() const { DARABONBA_PTR_GET_CONST(landmarksAList_, vector<int64_t>) };
    inline vector<int64_t> landmarksAList() { DARABONBA_PTR_GET(landmarksAList_, vector<int64_t>) };
    inline CompareFaceWithMaskResponseBodyData& setLandmarksAList(const vector<int64_t> & landmarksAList) { DARABONBA_PTR_SET_VALUE(landmarksAList_, landmarksAList) };
    inline CompareFaceWithMaskResponseBodyData& setLandmarksAList(vector<int64_t> && landmarksAList) { DARABONBA_PTR_SET_RVALUE(landmarksAList_, landmarksAList) };


    // landmarksBList Field Functions 
    bool hasLandmarksBList() const { return this->landmarksBList_ != nullptr;};
    void deleteLandmarksBList() { this->landmarksBList_ = nullptr;};
    inline const vector<int64_t> & landmarksBList() const { DARABONBA_PTR_GET_CONST(landmarksBList_, vector<int64_t>) };
    inline vector<int64_t> landmarksBList() { DARABONBA_PTR_GET(landmarksBList_, vector<int64_t>) };
    inline CompareFaceWithMaskResponseBodyData& setLandmarksBList(const vector<int64_t> & landmarksBList) { DARABONBA_PTR_SET_VALUE(landmarksBList_, landmarksBList) };
    inline CompareFaceWithMaskResponseBodyData& setLandmarksBList(vector<int64_t> && landmarksBList) { DARABONBA_PTR_SET_RVALUE(landmarksBList_, landmarksBList) };


    // messageTips Field Functions 
    bool hasMessageTips() const { return this->messageTips_ != nullptr;};
    void deleteMessageTips() { this->messageTips_ = nullptr;};
    inline string messageTips() const { DARABONBA_PTR_GET_DEFAULT(messageTips_, "") };
    inline CompareFaceWithMaskResponseBodyData& setMessageTips(string messageTips) { DARABONBA_PTR_SET_VALUE(messageTips_, messageTips) };


    // qualityScoreA Field Functions 
    bool hasQualityScoreA() const { return this->qualityScoreA_ != nullptr;};
    void deleteQualityScoreA() { this->qualityScoreA_ = nullptr;};
    inline float qualityScoreA() const { DARABONBA_PTR_GET_DEFAULT(qualityScoreA_, 0.0) };
    inline CompareFaceWithMaskResponseBodyData& setQualityScoreA(float qualityScoreA) { DARABONBA_PTR_SET_VALUE(qualityScoreA_, qualityScoreA) };


    // qualityScoreB Field Functions 
    bool hasQualityScoreB() const { return this->qualityScoreB_ != nullptr;};
    void deleteQualityScoreB() { this->qualityScoreB_ = nullptr;};
    inline float qualityScoreB() const { DARABONBA_PTR_GET_DEFAULT(qualityScoreB_, 0.0) };
    inline CompareFaceWithMaskResponseBodyData& setQualityScoreB(float qualityScoreB) { DARABONBA_PTR_SET_VALUE(qualityScoreB_, qualityScoreB) };


    // rectAList Field Functions 
    bool hasRectAList() const { return this->rectAList_ != nullptr;};
    void deleteRectAList() { this->rectAList_ = nullptr;};
    inline const vector<int64_t> & rectAList() const { DARABONBA_PTR_GET_CONST(rectAList_, vector<int64_t>) };
    inline vector<int64_t> rectAList() { DARABONBA_PTR_GET(rectAList_, vector<int64_t>) };
    inline CompareFaceWithMaskResponseBodyData& setRectAList(const vector<int64_t> & rectAList) { DARABONBA_PTR_SET_VALUE(rectAList_, rectAList) };
    inline CompareFaceWithMaskResponseBodyData& setRectAList(vector<int64_t> && rectAList) { DARABONBA_PTR_SET_RVALUE(rectAList_, rectAList) };


    // rectBList Field Functions 
    bool hasRectBList() const { return this->rectBList_ != nullptr;};
    void deleteRectBList() { this->rectBList_ = nullptr;};
    inline const vector<int64_t> & rectBList() const { DARABONBA_PTR_GET_CONST(rectBList_, vector<int64_t>) };
    inline vector<int64_t> rectBList() { DARABONBA_PTR_GET(rectBList_, vector<int64_t>) };
    inline CompareFaceWithMaskResponseBodyData& setRectBList(const vector<int64_t> & rectBList) { DARABONBA_PTR_SET_VALUE(rectBList_, rectBList) };
    inline CompareFaceWithMaskResponseBodyData& setRectBList(vector<int64_t> && rectBList) { DARABONBA_PTR_SET_RVALUE(rectBList_, rectBList) };


    // thresholds Field Functions 
    bool hasThresholds() const { return this->thresholds_ != nullptr;};
    void deleteThresholds() { this->thresholds_ = nullptr;};
    inline const vector<int64_t> & thresholds() const { DARABONBA_PTR_GET_CONST(thresholds_, vector<int64_t>) };
    inline vector<int64_t> thresholds() { DARABONBA_PTR_GET(thresholds_, vector<int64_t>) };
    inline CompareFaceWithMaskResponseBodyData& setThresholds(const vector<int64_t> & thresholds) { DARABONBA_PTR_SET_VALUE(thresholds_, thresholds) };
    inline CompareFaceWithMaskResponseBodyData& setThresholds(vector<int64_t> && thresholds) { DARABONBA_PTR_SET_RVALUE(thresholds_, thresholds) };


  protected:
    std::shared_ptr<float> confidence_ = nullptr;
    std::shared_ptr<int64_t> isMaskA_ = nullptr;
    std::shared_ptr<int64_t> isMaskB_ = nullptr;
    std::shared_ptr<vector<int64_t>> landmarksAList_ = nullptr;
    std::shared_ptr<vector<int64_t>> landmarksBList_ = nullptr;
    std::shared_ptr<string> messageTips_ = nullptr;
    std::shared_ptr<float> qualityScoreA_ = nullptr;
    std::shared_ptr<float> qualityScoreB_ = nullptr;
    std::shared_ptr<vector<int64_t>> rectAList_ = nullptr;
    std::shared_ptr<vector<int64_t>> rectBList_ = nullptr;
    std::shared_ptr<vector<int64_t>> thresholds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Facebody20191230
#endif
