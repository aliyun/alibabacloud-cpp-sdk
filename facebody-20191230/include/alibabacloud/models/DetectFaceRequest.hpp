// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DETECTFACEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DETECTFACEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Facebody20191230
{
namespace Models
{
  class DetectFaceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DetectFaceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ImageURL, imageURL_);
      DARABONBA_PTR_TO_JSON(Landmark, landmark_);
      DARABONBA_PTR_TO_JSON(MaxFaceNumber, maxFaceNumber_);
      DARABONBA_PTR_TO_JSON(Pose, pose_);
      DARABONBA_PTR_TO_JSON(Quality, quality_);
    };
    friend void from_json(const Darabonba::Json& j, DetectFaceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ImageURL, imageURL_);
      DARABONBA_PTR_FROM_JSON(Landmark, landmark_);
      DARABONBA_PTR_FROM_JSON(MaxFaceNumber, maxFaceNumber_);
      DARABONBA_PTR_FROM_JSON(Pose, pose_);
      DARABONBA_PTR_FROM_JSON(Quality, quality_);
    };
    DetectFaceRequest() = default ;
    DetectFaceRequest(const DetectFaceRequest &) = default ;
    DetectFaceRequest(DetectFaceRequest &&) = default ;
    DetectFaceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DetectFaceRequest() = default ;
    DetectFaceRequest& operator=(const DetectFaceRequest &) = default ;
    DetectFaceRequest& operator=(DetectFaceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->imageURL_ == nullptr
        && return this->landmark_ == nullptr && return this->maxFaceNumber_ == nullptr && return this->pose_ == nullptr && return this->quality_ == nullptr; };
    // imageURL Field Functions 
    bool hasImageURL() const { return this->imageURL_ != nullptr;};
    void deleteImageURL() { this->imageURL_ = nullptr;};
    inline string imageURL() const { DARABONBA_PTR_GET_DEFAULT(imageURL_, "") };
    inline DetectFaceRequest& setImageURL(string imageURL) { DARABONBA_PTR_SET_VALUE(imageURL_, imageURL) };


    // landmark Field Functions 
    bool hasLandmark() const { return this->landmark_ != nullptr;};
    void deleteLandmark() { this->landmark_ = nullptr;};
    inline bool landmark() const { DARABONBA_PTR_GET_DEFAULT(landmark_, false) };
    inline DetectFaceRequest& setLandmark(bool landmark) { DARABONBA_PTR_SET_VALUE(landmark_, landmark) };


    // maxFaceNumber Field Functions 
    bool hasMaxFaceNumber() const { return this->maxFaceNumber_ != nullptr;};
    void deleteMaxFaceNumber() { this->maxFaceNumber_ = nullptr;};
    inline int64_t maxFaceNumber() const { DARABONBA_PTR_GET_DEFAULT(maxFaceNumber_, 0L) };
    inline DetectFaceRequest& setMaxFaceNumber(int64_t maxFaceNumber) { DARABONBA_PTR_SET_VALUE(maxFaceNumber_, maxFaceNumber) };


    // pose Field Functions 
    bool hasPose() const { return this->pose_ != nullptr;};
    void deletePose() { this->pose_ = nullptr;};
    inline bool pose() const { DARABONBA_PTR_GET_DEFAULT(pose_, false) };
    inline DetectFaceRequest& setPose(bool pose) { DARABONBA_PTR_SET_VALUE(pose_, pose) };


    // quality Field Functions 
    bool hasQuality() const { return this->quality_ != nullptr;};
    void deleteQuality() { this->quality_ = nullptr;};
    inline bool quality() const { DARABONBA_PTR_GET_DEFAULT(quality_, false) };
    inline DetectFaceRequest& setQuality(bool quality) { DARABONBA_PTR_SET_VALUE(quality_, quality) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> imageURL_ = nullptr;
    std::shared_ptr<bool> landmark_ = nullptr;
    std::shared_ptr<int64_t> maxFaceNumber_ = nullptr;
    std::shared_ptr<bool> pose_ = nullptr;
    std::shared_ptr<bool> quality_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Facebody20191230
#endif
