// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DETECTFACERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DETECTFACERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DetectFaceResponseBodyDataQualities.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Facebody20191230
{
namespace Models
{
  class DetectFaceResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DetectFaceResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(FaceCount, faceCount_);
      DARABONBA_PTR_TO_JSON(FaceProbabilityList, faceProbabilityList_);
      DARABONBA_PTR_TO_JSON(FaceRectangles, faceRectangles_);
      DARABONBA_PTR_TO_JSON(LandmarkCount, landmarkCount_);
      DARABONBA_PTR_TO_JSON(LandmarkScore, landmarkScore_);
      DARABONBA_PTR_TO_JSON(Landmarks, landmarks_);
      DARABONBA_PTR_TO_JSON(PoseList, poseList_);
      DARABONBA_PTR_TO_JSON(Pupils, pupils_);
      DARABONBA_PTR_TO_JSON(Qualities, qualities_);
    };
    friend void from_json(const Darabonba::Json& j, DetectFaceResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(FaceCount, faceCount_);
      DARABONBA_PTR_FROM_JSON(FaceProbabilityList, faceProbabilityList_);
      DARABONBA_PTR_FROM_JSON(FaceRectangles, faceRectangles_);
      DARABONBA_PTR_FROM_JSON(LandmarkCount, landmarkCount_);
      DARABONBA_PTR_FROM_JSON(LandmarkScore, landmarkScore_);
      DARABONBA_PTR_FROM_JSON(Landmarks, landmarks_);
      DARABONBA_PTR_FROM_JSON(PoseList, poseList_);
      DARABONBA_PTR_FROM_JSON(Pupils, pupils_);
      DARABONBA_PTR_FROM_JSON(Qualities, qualities_);
    };
    DetectFaceResponseBodyData() = default ;
    DetectFaceResponseBodyData(const DetectFaceResponseBodyData &) = default ;
    DetectFaceResponseBodyData(DetectFaceResponseBodyData &&) = default ;
    DetectFaceResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DetectFaceResponseBodyData() = default ;
    DetectFaceResponseBodyData& operator=(const DetectFaceResponseBodyData &) = default ;
    DetectFaceResponseBodyData& operator=(DetectFaceResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->faceCount_ == nullptr
        && return this->faceProbabilityList_ == nullptr && return this->faceRectangles_ == nullptr && return this->landmarkCount_ == nullptr && return this->landmarkScore_ == nullptr && return this->landmarks_ == nullptr
        && return this->poseList_ == nullptr && return this->pupils_ == nullptr && return this->qualities_ == nullptr; };
    // faceCount Field Functions 
    bool hasFaceCount() const { return this->faceCount_ != nullptr;};
    void deleteFaceCount() { this->faceCount_ = nullptr;};
    inline int32_t faceCount() const { DARABONBA_PTR_GET_DEFAULT(faceCount_, 0) };
    inline DetectFaceResponseBodyData& setFaceCount(int32_t faceCount) { DARABONBA_PTR_SET_VALUE(faceCount_, faceCount) };


    // faceProbabilityList Field Functions 
    bool hasFaceProbabilityList() const { return this->faceProbabilityList_ != nullptr;};
    void deleteFaceProbabilityList() { this->faceProbabilityList_ = nullptr;};
    inline const vector<float> & faceProbabilityList() const { DARABONBA_PTR_GET_CONST(faceProbabilityList_, vector<float>) };
    inline vector<float> faceProbabilityList() { DARABONBA_PTR_GET(faceProbabilityList_, vector<float>) };
    inline DetectFaceResponseBodyData& setFaceProbabilityList(const vector<float> & faceProbabilityList) { DARABONBA_PTR_SET_VALUE(faceProbabilityList_, faceProbabilityList) };
    inline DetectFaceResponseBodyData& setFaceProbabilityList(vector<float> && faceProbabilityList) { DARABONBA_PTR_SET_RVALUE(faceProbabilityList_, faceProbabilityList) };


    // faceRectangles Field Functions 
    bool hasFaceRectangles() const { return this->faceRectangles_ != nullptr;};
    void deleteFaceRectangles() { this->faceRectangles_ = nullptr;};
    inline const vector<int32_t> & faceRectangles() const { DARABONBA_PTR_GET_CONST(faceRectangles_, vector<int32_t>) };
    inline vector<int32_t> faceRectangles() { DARABONBA_PTR_GET(faceRectangles_, vector<int32_t>) };
    inline DetectFaceResponseBodyData& setFaceRectangles(const vector<int32_t> & faceRectangles) { DARABONBA_PTR_SET_VALUE(faceRectangles_, faceRectangles) };
    inline DetectFaceResponseBodyData& setFaceRectangles(vector<int32_t> && faceRectangles) { DARABONBA_PTR_SET_RVALUE(faceRectangles_, faceRectangles) };


    // landmarkCount Field Functions 
    bool hasLandmarkCount() const { return this->landmarkCount_ != nullptr;};
    void deleteLandmarkCount() { this->landmarkCount_ = nullptr;};
    inline int32_t landmarkCount() const { DARABONBA_PTR_GET_DEFAULT(landmarkCount_, 0) };
    inline DetectFaceResponseBodyData& setLandmarkCount(int32_t landmarkCount) { DARABONBA_PTR_SET_VALUE(landmarkCount_, landmarkCount) };


    // landmarkScore Field Functions 
    bool hasLandmarkScore() const { return this->landmarkScore_ != nullptr;};
    void deleteLandmarkScore() { this->landmarkScore_ = nullptr;};
    inline const vector<float> & landmarkScore() const { DARABONBA_PTR_GET_CONST(landmarkScore_, vector<float>) };
    inline vector<float> landmarkScore() { DARABONBA_PTR_GET(landmarkScore_, vector<float>) };
    inline DetectFaceResponseBodyData& setLandmarkScore(const vector<float> & landmarkScore) { DARABONBA_PTR_SET_VALUE(landmarkScore_, landmarkScore) };
    inline DetectFaceResponseBodyData& setLandmarkScore(vector<float> && landmarkScore) { DARABONBA_PTR_SET_RVALUE(landmarkScore_, landmarkScore) };


    // landmarks Field Functions 
    bool hasLandmarks() const { return this->landmarks_ != nullptr;};
    void deleteLandmarks() { this->landmarks_ = nullptr;};
    inline const vector<float> & landmarks() const { DARABONBA_PTR_GET_CONST(landmarks_, vector<float>) };
    inline vector<float> landmarks() { DARABONBA_PTR_GET(landmarks_, vector<float>) };
    inline DetectFaceResponseBodyData& setLandmarks(const vector<float> & landmarks) { DARABONBA_PTR_SET_VALUE(landmarks_, landmarks) };
    inline DetectFaceResponseBodyData& setLandmarks(vector<float> && landmarks) { DARABONBA_PTR_SET_RVALUE(landmarks_, landmarks) };


    // poseList Field Functions 
    bool hasPoseList() const { return this->poseList_ != nullptr;};
    void deletePoseList() { this->poseList_ = nullptr;};
    inline const vector<float> & poseList() const { DARABONBA_PTR_GET_CONST(poseList_, vector<float>) };
    inline vector<float> poseList() { DARABONBA_PTR_GET(poseList_, vector<float>) };
    inline DetectFaceResponseBodyData& setPoseList(const vector<float> & poseList) { DARABONBA_PTR_SET_VALUE(poseList_, poseList) };
    inline DetectFaceResponseBodyData& setPoseList(vector<float> && poseList) { DARABONBA_PTR_SET_RVALUE(poseList_, poseList) };


    // pupils Field Functions 
    bool hasPupils() const { return this->pupils_ != nullptr;};
    void deletePupils() { this->pupils_ = nullptr;};
    inline const vector<double> & pupils() const { DARABONBA_PTR_GET_CONST(pupils_, vector<double>) };
    inline vector<double> pupils() { DARABONBA_PTR_GET(pupils_, vector<double>) };
    inline DetectFaceResponseBodyData& setPupils(const vector<double> & pupils) { DARABONBA_PTR_SET_VALUE(pupils_, pupils) };
    inline DetectFaceResponseBodyData& setPupils(vector<double> && pupils) { DARABONBA_PTR_SET_RVALUE(pupils_, pupils) };


    // qualities Field Functions 
    bool hasQualities() const { return this->qualities_ != nullptr;};
    void deleteQualities() { this->qualities_ = nullptr;};
    inline const Models::DetectFaceResponseBodyDataQualities & qualities() const { DARABONBA_PTR_GET_CONST(qualities_, Models::DetectFaceResponseBodyDataQualities) };
    inline Models::DetectFaceResponseBodyDataQualities qualities() { DARABONBA_PTR_GET(qualities_, Models::DetectFaceResponseBodyDataQualities) };
    inline DetectFaceResponseBodyData& setQualities(const Models::DetectFaceResponseBodyDataQualities & qualities) { DARABONBA_PTR_SET_VALUE(qualities_, qualities) };
    inline DetectFaceResponseBodyData& setQualities(Models::DetectFaceResponseBodyDataQualities && qualities) { DARABONBA_PTR_SET_RVALUE(qualities_, qualities) };


  protected:
    std::shared_ptr<int32_t> faceCount_ = nullptr;
    // 1
    std::shared_ptr<vector<float>> faceProbabilityList_ = nullptr;
    // 1
    std::shared_ptr<vector<int32_t>> faceRectangles_ = nullptr;
    std::shared_ptr<int32_t> landmarkCount_ = nullptr;
    std::shared_ptr<vector<float>> landmarkScore_ = nullptr;
    // 1
    std::shared_ptr<vector<float>> landmarks_ = nullptr;
    // 1
    std::shared_ptr<vector<float>> poseList_ = nullptr;
    // 1
    std::shared_ptr<vector<double>> pupils_ = nullptr;
    std::shared_ptr<Models::DetectFaceResponseBodyDataQualities> qualities_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Facebody20191230
#endif
