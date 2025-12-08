// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DETECTLIVINGFACERESPONSEBODYDATAELEMENTS_HPP_
#define ALIBABACLOUD_MODELS_DETECTLIVINGFACERESPONSEBODYDATAELEMENTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DetectLivingFaceResponseBodyDataElementsResults.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Facebody20191230
{
namespace Models
{
  class DetectLivingFaceResponseBodyDataElements : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DetectLivingFaceResponseBodyDataElements& obj) { 
      DARABONBA_PTR_TO_JSON(FaceNumber, faceNumber_);
      DARABONBA_PTR_TO_JSON(ImageURL, imageURL_);
      DARABONBA_PTR_TO_JSON(Results, results_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, DetectLivingFaceResponseBodyDataElements& obj) { 
      DARABONBA_PTR_FROM_JSON(FaceNumber, faceNumber_);
      DARABONBA_PTR_FROM_JSON(ImageURL, imageURL_);
      DARABONBA_PTR_FROM_JSON(Results, results_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    DetectLivingFaceResponseBodyDataElements() = default ;
    DetectLivingFaceResponseBodyDataElements(const DetectLivingFaceResponseBodyDataElements &) = default ;
    DetectLivingFaceResponseBodyDataElements(DetectLivingFaceResponseBodyDataElements &&) = default ;
    DetectLivingFaceResponseBodyDataElements(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DetectLivingFaceResponseBodyDataElements() = default ;
    DetectLivingFaceResponseBodyDataElements& operator=(const DetectLivingFaceResponseBodyDataElements &) = default ;
    DetectLivingFaceResponseBodyDataElements& operator=(DetectLivingFaceResponseBodyDataElements &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->faceNumber_ == nullptr
        && return this->imageURL_ == nullptr && return this->results_ == nullptr && return this->taskId_ == nullptr; };
    // faceNumber Field Functions 
    bool hasFaceNumber() const { return this->faceNumber_ != nullptr;};
    void deleteFaceNumber() { this->faceNumber_ = nullptr;};
    inline int64_t faceNumber() const { DARABONBA_PTR_GET_DEFAULT(faceNumber_, 0L) };
    inline DetectLivingFaceResponseBodyDataElements& setFaceNumber(int64_t faceNumber) { DARABONBA_PTR_SET_VALUE(faceNumber_, faceNumber) };


    // imageURL Field Functions 
    bool hasImageURL() const { return this->imageURL_ != nullptr;};
    void deleteImageURL() { this->imageURL_ = nullptr;};
    inline string imageURL() const { DARABONBA_PTR_GET_DEFAULT(imageURL_, "") };
    inline DetectLivingFaceResponseBodyDataElements& setImageURL(string imageURL) { DARABONBA_PTR_SET_VALUE(imageURL_, imageURL) };


    // results Field Functions 
    bool hasResults() const { return this->results_ != nullptr;};
    void deleteResults() { this->results_ = nullptr;};
    inline const vector<Models::DetectLivingFaceResponseBodyDataElementsResults> & results() const { DARABONBA_PTR_GET_CONST(results_, vector<Models::DetectLivingFaceResponseBodyDataElementsResults>) };
    inline vector<Models::DetectLivingFaceResponseBodyDataElementsResults> results() { DARABONBA_PTR_GET(results_, vector<Models::DetectLivingFaceResponseBodyDataElementsResults>) };
    inline DetectLivingFaceResponseBodyDataElements& setResults(const vector<Models::DetectLivingFaceResponseBodyDataElementsResults> & results) { DARABONBA_PTR_SET_VALUE(results_, results) };
    inline DetectLivingFaceResponseBodyDataElements& setResults(vector<Models::DetectLivingFaceResponseBodyDataElementsResults> && results) { DARABONBA_PTR_SET_RVALUE(results_, results) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline DetectLivingFaceResponseBodyDataElements& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    std::shared_ptr<int64_t> faceNumber_ = nullptr;
    std::shared_ptr<string> imageURL_ = nullptr;
    std::shared_ptr<vector<Models::DetectLivingFaceResponseBodyDataElementsResults>> results_ = nullptr;
    std::shared_ptr<string> taskId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Facebody20191230
#endif
