// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RECOGNIZEFACERESPONSEBODYDATAQUALITIES_HPP_
#define ALIBABACLOUD_MODELS_RECOGNIZEFACERESPONSEBODYDATAQUALITIES_HPP_
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
  class RecognizeFaceResponseBodyDataQualities : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RecognizeFaceResponseBodyDataQualities& obj) { 
      DARABONBA_PTR_TO_JSON(BlurList, blurList_);
      DARABONBA_PTR_TO_JSON(FnfList, fnfList_);
      DARABONBA_PTR_TO_JSON(GlassList, glassList_);
      DARABONBA_PTR_TO_JSON(IlluList, illuList_);
      DARABONBA_PTR_TO_JSON(MaskList, maskList_);
      DARABONBA_PTR_TO_JSON(NoiseList, noiseList_);
      DARABONBA_PTR_TO_JSON(PoseList, poseList_);
      DARABONBA_PTR_TO_JSON(ScoreList, scoreList_);
    };
    friend void from_json(const Darabonba::Json& j, RecognizeFaceResponseBodyDataQualities& obj) { 
      DARABONBA_PTR_FROM_JSON(BlurList, blurList_);
      DARABONBA_PTR_FROM_JSON(FnfList, fnfList_);
      DARABONBA_PTR_FROM_JSON(GlassList, glassList_);
      DARABONBA_PTR_FROM_JSON(IlluList, illuList_);
      DARABONBA_PTR_FROM_JSON(MaskList, maskList_);
      DARABONBA_PTR_FROM_JSON(NoiseList, noiseList_);
      DARABONBA_PTR_FROM_JSON(PoseList, poseList_);
      DARABONBA_PTR_FROM_JSON(ScoreList, scoreList_);
    };
    RecognizeFaceResponseBodyDataQualities() = default ;
    RecognizeFaceResponseBodyDataQualities(const RecognizeFaceResponseBodyDataQualities &) = default ;
    RecognizeFaceResponseBodyDataQualities(RecognizeFaceResponseBodyDataQualities &&) = default ;
    RecognizeFaceResponseBodyDataQualities(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RecognizeFaceResponseBodyDataQualities() = default ;
    RecognizeFaceResponseBodyDataQualities& operator=(const RecognizeFaceResponseBodyDataQualities &) = default ;
    RecognizeFaceResponseBodyDataQualities& operator=(RecognizeFaceResponseBodyDataQualities &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->blurList_ == nullptr
        && return this->fnfList_ == nullptr && return this->glassList_ == nullptr && return this->illuList_ == nullptr && return this->maskList_ == nullptr && return this->noiseList_ == nullptr
        && return this->poseList_ == nullptr && return this->scoreList_ == nullptr; };
    // blurList Field Functions 
    bool hasBlurList() const { return this->blurList_ != nullptr;};
    void deleteBlurList() { this->blurList_ = nullptr;};
    inline const vector<float> & blurList() const { DARABONBA_PTR_GET_CONST(blurList_, vector<float>) };
    inline vector<float> blurList() { DARABONBA_PTR_GET(blurList_, vector<float>) };
    inline RecognizeFaceResponseBodyDataQualities& setBlurList(const vector<float> & blurList) { DARABONBA_PTR_SET_VALUE(blurList_, blurList) };
    inline RecognizeFaceResponseBodyDataQualities& setBlurList(vector<float> && blurList) { DARABONBA_PTR_SET_RVALUE(blurList_, blurList) };


    // fnfList Field Functions 
    bool hasFnfList() const { return this->fnfList_ != nullptr;};
    void deleteFnfList() { this->fnfList_ = nullptr;};
    inline const vector<float> & fnfList() const { DARABONBA_PTR_GET_CONST(fnfList_, vector<float>) };
    inline vector<float> fnfList() { DARABONBA_PTR_GET(fnfList_, vector<float>) };
    inline RecognizeFaceResponseBodyDataQualities& setFnfList(const vector<float> & fnfList) { DARABONBA_PTR_SET_VALUE(fnfList_, fnfList) };
    inline RecognizeFaceResponseBodyDataQualities& setFnfList(vector<float> && fnfList) { DARABONBA_PTR_SET_RVALUE(fnfList_, fnfList) };


    // glassList Field Functions 
    bool hasGlassList() const { return this->glassList_ != nullptr;};
    void deleteGlassList() { this->glassList_ = nullptr;};
    inline const vector<float> & glassList() const { DARABONBA_PTR_GET_CONST(glassList_, vector<float>) };
    inline vector<float> glassList() { DARABONBA_PTR_GET(glassList_, vector<float>) };
    inline RecognizeFaceResponseBodyDataQualities& setGlassList(const vector<float> & glassList) { DARABONBA_PTR_SET_VALUE(glassList_, glassList) };
    inline RecognizeFaceResponseBodyDataQualities& setGlassList(vector<float> && glassList) { DARABONBA_PTR_SET_RVALUE(glassList_, glassList) };


    // illuList Field Functions 
    bool hasIlluList() const { return this->illuList_ != nullptr;};
    void deleteIlluList() { this->illuList_ = nullptr;};
    inline const vector<float> & illuList() const { DARABONBA_PTR_GET_CONST(illuList_, vector<float>) };
    inline vector<float> illuList() { DARABONBA_PTR_GET(illuList_, vector<float>) };
    inline RecognizeFaceResponseBodyDataQualities& setIlluList(const vector<float> & illuList) { DARABONBA_PTR_SET_VALUE(illuList_, illuList) };
    inline RecognizeFaceResponseBodyDataQualities& setIlluList(vector<float> && illuList) { DARABONBA_PTR_SET_RVALUE(illuList_, illuList) };


    // maskList Field Functions 
    bool hasMaskList() const { return this->maskList_ != nullptr;};
    void deleteMaskList() { this->maskList_ = nullptr;};
    inline const vector<float> & maskList() const { DARABONBA_PTR_GET_CONST(maskList_, vector<float>) };
    inline vector<float> maskList() { DARABONBA_PTR_GET(maskList_, vector<float>) };
    inline RecognizeFaceResponseBodyDataQualities& setMaskList(const vector<float> & maskList) { DARABONBA_PTR_SET_VALUE(maskList_, maskList) };
    inline RecognizeFaceResponseBodyDataQualities& setMaskList(vector<float> && maskList) { DARABONBA_PTR_SET_RVALUE(maskList_, maskList) };


    // noiseList Field Functions 
    bool hasNoiseList() const { return this->noiseList_ != nullptr;};
    void deleteNoiseList() { this->noiseList_ = nullptr;};
    inline const vector<float> & noiseList() const { DARABONBA_PTR_GET_CONST(noiseList_, vector<float>) };
    inline vector<float> noiseList() { DARABONBA_PTR_GET(noiseList_, vector<float>) };
    inline RecognizeFaceResponseBodyDataQualities& setNoiseList(const vector<float> & noiseList) { DARABONBA_PTR_SET_VALUE(noiseList_, noiseList) };
    inline RecognizeFaceResponseBodyDataQualities& setNoiseList(vector<float> && noiseList) { DARABONBA_PTR_SET_RVALUE(noiseList_, noiseList) };


    // poseList Field Functions 
    bool hasPoseList() const { return this->poseList_ != nullptr;};
    void deletePoseList() { this->poseList_ = nullptr;};
    inline const vector<float> & poseList() const { DARABONBA_PTR_GET_CONST(poseList_, vector<float>) };
    inline vector<float> poseList() { DARABONBA_PTR_GET(poseList_, vector<float>) };
    inline RecognizeFaceResponseBodyDataQualities& setPoseList(const vector<float> & poseList) { DARABONBA_PTR_SET_VALUE(poseList_, poseList) };
    inline RecognizeFaceResponseBodyDataQualities& setPoseList(vector<float> && poseList) { DARABONBA_PTR_SET_RVALUE(poseList_, poseList) };


    // scoreList Field Functions 
    bool hasScoreList() const { return this->scoreList_ != nullptr;};
    void deleteScoreList() { this->scoreList_ = nullptr;};
    inline const vector<float> & scoreList() const { DARABONBA_PTR_GET_CONST(scoreList_, vector<float>) };
    inline vector<float> scoreList() { DARABONBA_PTR_GET(scoreList_, vector<float>) };
    inline RecognizeFaceResponseBodyDataQualities& setScoreList(const vector<float> & scoreList) { DARABONBA_PTR_SET_VALUE(scoreList_, scoreList) };
    inline RecognizeFaceResponseBodyDataQualities& setScoreList(vector<float> && scoreList) { DARABONBA_PTR_SET_RVALUE(scoreList_, scoreList) };


  protected:
    // 1
    std::shared_ptr<vector<float>> blurList_ = nullptr;
    // 1
    std::shared_ptr<vector<float>> fnfList_ = nullptr;
    // 1
    std::shared_ptr<vector<float>> glassList_ = nullptr;
    // 1
    std::shared_ptr<vector<float>> illuList_ = nullptr;
    // 1
    std::shared_ptr<vector<float>> maskList_ = nullptr;
    // 1
    std::shared_ptr<vector<float>> noiseList_ = nullptr;
    // 1
    std::shared_ptr<vector<float>> poseList_ = nullptr;
    // 1
    std::shared_ptr<vector<float>> scoreList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Facebody20191230
#endif
