// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RECOGNIZEFACERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_RECOGNIZEFACERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/RecognizeFaceResponseBodyDataQualities.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Facebody20191230
{
namespace Models
{
  class RecognizeFaceResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RecognizeFaceResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AgeList, ageList_);
      DARABONBA_PTR_TO_JSON(BeautyList, beautyList_);
      DARABONBA_PTR_TO_JSON(DenseFeatureLength, denseFeatureLength_);
      DARABONBA_PTR_TO_JSON(DenseFeatures, denseFeatures_);
      DARABONBA_PTR_TO_JSON(Expressions, expressions_);
      DARABONBA_PTR_TO_JSON(FaceCount, faceCount_);
      DARABONBA_PTR_TO_JSON(FaceProbabilityList, faceProbabilityList_);
      DARABONBA_PTR_TO_JSON(FaceRectangles, faceRectangles_);
      DARABONBA_PTR_TO_JSON(GenderList, genderList_);
      DARABONBA_PTR_TO_JSON(Glasses, glasses_);
      DARABONBA_PTR_TO_JSON(HatList, hatList_);
      DARABONBA_PTR_TO_JSON(LandmarkCount, landmarkCount_);
      DARABONBA_PTR_TO_JSON(Landmarks, landmarks_);
      DARABONBA_PTR_TO_JSON(Masks, masks_);
      DARABONBA_PTR_TO_JSON(PoseList, poseList_);
      DARABONBA_PTR_TO_JSON(Pupils, pupils_);
      DARABONBA_PTR_TO_JSON(Qualities, qualities_);
    };
    friend void from_json(const Darabonba::Json& j, RecognizeFaceResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AgeList, ageList_);
      DARABONBA_PTR_FROM_JSON(BeautyList, beautyList_);
      DARABONBA_PTR_FROM_JSON(DenseFeatureLength, denseFeatureLength_);
      DARABONBA_PTR_FROM_JSON(DenseFeatures, denseFeatures_);
      DARABONBA_PTR_FROM_JSON(Expressions, expressions_);
      DARABONBA_PTR_FROM_JSON(FaceCount, faceCount_);
      DARABONBA_PTR_FROM_JSON(FaceProbabilityList, faceProbabilityList_);
      DARABONBA_PTR_FROM_JSON(FaceRectangles, faceRectangles_);
      DARABONBA_PTR_FROM_JSON(GenderList, genderList_);
      DARABONBA_PTR_FROM_JSON(Glasses, glasses_);
      DARABONBA_PTR_FROM_JSON(HatList, hatList_);
      DARABONBA_PTR_FROM_JSON(LandmarkCount, landmarkCount_);
      DARABONBA_PTR_FROM_JSON(Landmarks, landmarks_);
      DARABONBA_PTR_FROM_JSON(Masks, masks_);
      DARABONBA_PTR_FROM_JSON(PoseList, poseList_);
      DARABONBA_PTR_FROM_JSON(Pupils, pupils_);
      DARABONBA_PTR_FROM_JSON(Qualities, qualities_);
    };
    RecognizeFaceResponseBodyData() = default ;
    RecognizeFaceResponseBodyData(const RecognizeFaceResponseBodyData &) = default ;
    RecognizeFaceResponseBodyData(RecognizeFaceResponseBodyData &&) = default ;
    RecognizeFaceResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RecognizeFaceResponseBodyData() = default ;
    RecognizeFaceResponseBodyData& operator=(const RecognizeFaceResponseBodyData &) = default ;
    RecognizeFaceResponseBodyData& operator=(RecognizeFaceResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ageList_ == nullptr
        && return this->beautyList_ == nullptr && return this->denseFeatureLength_ == nullptr && return this->denseFeatures_ == nullptr && return this->expressions_ == nullptr && return this->faceCount_ == nullptr
        && return this->faceProbabilityList_ == nullptr && return this->faceRectangles_ == nullptr && return this->genderList_ == nullptr && return this->glasses_ == nullptr && return this->hatList_ == nullptr
        && return this->landmarkCount_ == nullptr && return this->landmarks_ == nullptr && return this->masks_ == nullptr && return this->poseList_ == nullptr && return this->pupils_ == nullptr
        && return this->qualities_ == nullptr; };
    // ageList Field Functions 
    bool hasAgeList() const { return this->ageList_ != nullptr;};
    void deleteAgeList() { this->ageList_ = nullptr;};
    inline const vector<int32_t> & ageList() const { DARABONBA_PTR_GET_CONST(ageList_, vector<int32_t>) };
    inline vector<int32_t> ageList() { DARABONBA_PTR_GET(ageList_, vector<int32_t>) };
    inline RecognizeFaceResponseBodyData& setAgeList(const vector<int32_t> & ageList) { DARABONBA_PTR_SET_VALUE(ageList_, ageList) };
    inline RecognizeFaceResponseBodyData& setAgeList(vector<int32_t> && ageList) { DARABONBA_PTR_SET_RVALUE(ageList_, ageList) };


    // beautyList Field Functions 
    bool hasBeautyList() const { return this->beautyList_ != nullptr;};
    void deleteBeautyList() { this->beautyList_ = nullptr;};
    inline const vector<float> & beautyList() const { DARABONBA_PTR_GET_CONST(beautyList_, vector<float>) };
    inline vector<float> beautyList() { DARABONBA_PTR_GET(beautyList_, vector<float>) };
    inline RecognizeFaceResponseBodyData& setBeautyList(const vector<float> & beautyList) { DARABONBA_PTR_SET_VALUE(beautyList_, beautyList) };
    inline RecognizeFaceResponseBodyData& setBeautyList(vector<float> && beautyList) { DARABONBA_PTR_SET_RVALUE(beautyList_, beautyList) };


    // denseFeatureLength Field Functions 
    bool hasDenseFeatureLength() const { return this->denseFeatureLength_ != nullptr;};
    void deleteDenseFeatureLength() { this->denseFeatureLength_ = nullptr;};
    inline int32_t denseFeatureLength() const { DARABONBA_PTR_GET_DEFAULT(denseFeatureLength_, 0) };
    inline RecognizeFaceResponseBodyData& setDenseFeatureLength(int32_t denseFeatureLength) { DARABONBA_PTR_SET_VALUE(denseFeatureLength_, denseFeatureLength) };


    // denseFeatures Field Functions 
    bool hasDenseFeatures() const { return this->denseFeatures_ != nullptr;};
    void deleteDenseFeatures() { this->denseFeatures_ = nullptr;};
    inline const vector<string> & denseFeatures() const { DARABONBA_PTR_GET_CONST(denseFeatures_, vector<string>) };
    inline vector<string> denseFeatures() { DARABONBA_PTR_GET(denseFeatures_, vector<string>) };
    inline RecognizeFaceResponseBodyData& setDenseFeatures(const vector<string> & denseFeatures) { DARABONBA_PTR_SET_VALUE(denseFeatures_, denseFeatures) };
    inline RecognizeFaceResponseBodyData& setDenseFeatures(vector<string> && denseFeatures) { DARABONBA_PTR_SET_RVALUE(denseFeatures_, denseFeatures) };


    // expressions Field Functions 
    bool hasExpressions() const { return this->expressions_ != nullptr;};
    void deleteExpressions() { this->expressions_ = nullptr;};
    inline const vector<int32_t> & expressions() const { DARABONBA_PTR_GET_CONST(expressions_, vector<int32_t>) };
    inline vector<int32_t> expressions() { DARABONBA_PTR_GET(expressions_, vector<int32_t>) };
    inline RecognizeFaceResponseBodyData& setExpressions(const vector<int32_t> & expressions) { DARABONBA_PTR_SET_VALUE(expressions_, expressions) };
    inline RecognizeFaceResponseBodyData& setExpressions(vector<int32_t> && expressions) { DARABONBA_PTR_SET_RVALUE(expressions_, expressions) };


    // faceCount Field Functions 
    bool hasFaceCount() const { return this->faceCount_ != nullptr;};
    void deleteFaceCount() { this->faceCount_ = nullptr;};
    inline int32_t faceCount() const { DARABONBA_PTR_GET_DEFAULT(faceCount_, 0) };
    inline RecognizeFaceResponseBodyData& setFaceCount(int32_t faceCount) { DARABONBA_PTR_SET_VALUE(faceCount_, faceCount) };


    // faceProbabilityList Field Functions 
    bool hasFaceProbabilityList() const { return this->faceProbabilityList_ != nullptr;};
    void deleteFaceProbabilityList() { this->faceProbabilityList_ = nullptr;};
    inline const vector<float> & faceProbabilityList() const { DARABONBA_PTR_GET_CONST(faceProbabilityList_, vector<float>) };
    inline vector<float> faceProbabilityList() { DARABONBA_PTR_GET(faceProbabilityList_, vector<float>) };
    inline RecognizeFaceResponseBodyData& setFaceProbabilityList(const vector<float> & faceProbabilityList) { DARABONBA_PTR_SET_VALUE(faceProbabilityList_, faceProbabilityList) };
    inline RecognizeFaceResponseBodyData& setFaceProbabilityList(vector<float> && faceProbabilityList) { DARABONBA_PTR_SET_RVALUE(faceProbabilityList_, faceProbabilityList) };


    // faceRectangles Field Functions 
    bool hasFaceRectangles() const { return this->faceRectangles_ != nullptr;};
    void deleteFaceRectangles() { this->faceRectangles_ = nullptr;};
    inline const vector<int32_t> & faceRectangles() const { DARABONBA_PTR_GET_CONST(faceRectangles_, vector<int32_t>) };
    inline vector<int32_t> faceRectangles() { DARABONBA_PTR_GET(faceRectangles_, vector<int32_t>) };
    inline RecognizeFaceResponseBodyData& setFaceRectangles(const vector<int32_t> & faceRectangles) { DARABONBA_PTR_SET_VALUE(faceRectangles_, faceRectangles) };
    inline RecognizeFaceResponseBodyData& setFaceRectangles(vector<int32_t> && faceRectangles) { DARABONBA_PTR_SET_RVALUE(faceRectangles_, faceRectangles) };


    // genderList Field Functions 
    bool hasGenderList() const { return this->genderList_ != nullptr;};
    void deleteGenderList() { this->genderList_ = nullptr;};
    inline const vector<int32_t> & genderList() const { DARABONBA_PTR_GET_CONST(genderList_, vector<int32_t>) };
    inline vector<int32_t> genderList() { DARABONBA_PTR_GET(genderList_, vector<int32_t>) };
    inline RecognizeFaceResponseBodyData& setGenderList(const vector<int32_t> & genderList) { DARABONBA_PTR_SET_VALUE(genderList_, genderList) };
    inline RecognizeFaceResponseBodyData& setGenderList(vector<int32_t> && genderList) { DARABONBA_PTR_SET_RVALUE(genderList_, genderList) };


    // glasses Field Functions 
    bool hasGlasses() const { return this->glasses_ != nullptr;};
    void deleteGlasses() { this->glasses_ = nullptr;};
    inline const vector<int32_t> & glasses() const { DARABONBA_PTR_GET_CONST(glasses_, vector<int32_t>) };
    inline vector<int32_t> glasses() { DARABONBA_PTR_GET(glasses_, vector<int32_t>) };
    inline RecognizeFaceResponseBodyData& setGlasses(const vector<int32_t> & glasses) { DARABONBA_PTR_SET_VALUE(glasses_, glasses) };
    inline RecognizeFaceResponseBodyData& setGlasses(vector<int32_t> && glasses) { DARABONBA_PTR_SET_RVALUE(glasses_, glasses) };


    // hatList Field Functions 
    bool hasHatList() const { return this->hatList_ != nullptr;};
    void deleteHatList() { this->hatList_ = nullptr;};
    inline const vector<int32_t> & hatList() const { DARABONBA_PTR_GET_CONST(hatList_, vector<int32_t>) };
    inline vector<int32_t> hatList() { DARABONBA_PTR_GET(hatList_, vector<int32_t>) };
    inline RecognizeFaceResponseBodyData& setHatList(const vector<int32_t> & hatList) { DARABONBA_PTR_SET_VALUE(hatList_, hatList) };
    inline RecognizeFaceResponseBodyData& setHatList(vector<int32_t> && hatList) { DARABONBA_PTR_SET_RVALUE(hatList_, hatList) };


    // landmarkCount Field Functions 
    bool hasLandmarkCount() const { return this->landmarkCount_ != nullptr;};
    void deleteLandmarkCount() { this->landmarkCount_ = nullptr;};
    inline int32_t landmarkCount() const { DARABONBA_PTR_GET_DEFAULT(landmarkCount_, 0) };
    inline RecognizeFaceResponseBodyData& setLandmarkCount(int32_t landmarkCount) { DARABONBA_PTR_SET_VALUE(landmarkCount_, landmarkCount) };


    // landmarks Field Functions 
    bool hasLandmarks() const { return this->landmarks_ != nullptr;};
    void deleteLandmarks() { this->landmarks_ = nullptr;};
    inline const vector<float> & landmarks() const { DARABONBA_PTR_GET_CONST(landmarks_, vector<float>) };
    inline vector<float> landmarks() { DARABONBA_PTR_GET(landmarks_, vector<float>) };
    inline RecognizeFaceResponseBodyData& setLandmarks(const vector<float> & landmarks) { DARABONBA_PTR_SET_VALUE(landmarks_, landmarks) };
    inline RecognizeFaceResponseBodyData& setLandmarks(vector<float> && landmarks) { DARABONBA_PTR_SET_RVALUE(landmarks_, landmarks) };


    // masks Field Functions 
    bool hasMasks() const { return this->masks_ != nullptr;};
    void deleteMasks() { this->masks_ = nullptr;};
    inline const vector<int64_t> & masks() const { DARABONBA_PTR_GET_CONST(masks_, vector<int64_t>) };
    inline vector<int64_t> masks() { DARABONBA_PTR_GET(masks_, vector<int64_t>) };
    inline RecognizeFaceResponseBodyData& setMasks(const vector<int64_t> & masks) { DARABONBA_PTR_SET_VALUE(masks_, masks) };
    inline RecognizeFaceResponseBodyData& setMasks(vector<int64_t> && masks) { DARABONBA_PTR_SET_RVALUE(masks_, masks) };


    // poseList Field Functions 
    bool hasPoseList() const { return this->poseList_ != nullptr;};
    void deletePoseList() { this->poseList_ = nullptr;};
    inline const vector<float> & poseList() const { DARABONBA_PTR_GET_CONST(poseList_, vector<float>) };
    inline vector<float> poseList() { DARABONBA_PTR_GET(poseList_, vector<float>) };
    inline RecognizeFaceResponseBodyData& setPoseList(const vector<float> & poseList) { DARABONBA_PTR_SET_VALUE(poseList_, poseList) };
    inline RecognizeFaceResponseBodyData& setPoseList(vector<float> && poseList) { DARABONBA_PTR_SET_RVALUE(poseList_, poseList) };


    // pupils Field Functions 
    bool hasPupils() const { return this->pupils_ != nullptr;};
    void deletePupils() { this->pupils_ = nullptr;};
    inline const vector<float> & pupils() const { DARABONBA_PTR_GET_CONST(pupils_, vector<float>) };
    inline vector<float> pupils() { DARABONBA_PTR_GET(pupils_, vector<float>) };
    inline RecognizeFaceResponseBodyData& setPupils(const vector<float> & pupils) { DARABONBA_PTR_SET_VALUE(pupils_, pupils) };
    inline RecognizeFaceResponseBodyData& setPupils(vector<float> && pupils) { DARABONBA_PTR_SET_RVALUE(pupils_, pupils) };


    // qualities Field Functions 
    bool hasQualities() const { return this->qualities_ != nullptr;};
    void deleteQualities() { this->qualities_ = nullptr;};
    inline const Models::RecognizeFaceResponseBodyDataQualities & qualities() const { DARABONBA_PTR_GET_CONST(qualities_, Models::RecognizeFaceResponseBodyDataQualities) };
    inline Models::RecognizeFaceResponseBodyDataQualities qualities() { DARABONBA_PTR_GET(qualities_, Models::RecognizeFaceResponseBodyDataQualities) };
    inline RecognizeFaceResponseBodyData& setQualities(const Models::RecognizeFaceResponseBodyDataQualities & qualities) { DARABONBA_PTR_SET_VALUE(qualities_, qualities) };
    inline RecognizeFaceResponseBodyData& setQualities(Models::RecognizeFaceResponseBodyDataQualities && qualities) { DARABONBA_PTR_SET_RVALUE(qualities_, qualities) };


  protected:
    // 1
    std::shared_ptr<vector<int32_t>> ageList_ = nullptr;
    // 1
    std::shared_ptr<vector<float>> beautyList_ = nullptr;
    std::shared_ptr<int32_t> denseFeatureLength_ = nullptr;
    // 1
    std::shared_ptr<vector<string>> denseFeatures_ = nullptr;
    // 1
    std::shared_ptr<vector<int32_t>> expressions_ = nullptr;
    std::shared_ptr<int32_t> faceCount_ = nullptr;
    // 1
    std::shared_ptr<vector<float>> faceProbabilityList_ = nullptr;
    // 1
    std::shared_ptr<vector<int32_t>> faceRectangles_ = nullptr;
    // 1
    std::shared_ptr<vector<int32_t>> genderList_ = nullptr;
    // 1
    std::shared_ptr<vector<int32_t>> glasses_ = nullptr;
    // 1
    std::shared_ptr<vector<int32_t>> hatList_ = nullptr;
    std::shared_ptr<int32_t> landmarkCount_ = nullptr;
    // 1
    std::shared_ptr<vector<float>> landmarks_ = nullptr;
    // 1
    std::shared_ptr<vector<int64_t>> masks_ = nullptr;
    // 1
    std::shared_ptr<vector<float>> poseList_ = nullptr;
    // 1
    std::shared_ptr<vector<float>> pupils_ = nullptr;
    std::shared_ptr<Models::RecognizeFaceResponseBodyDataQualities> qualities_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Facebody20191230
#endif
