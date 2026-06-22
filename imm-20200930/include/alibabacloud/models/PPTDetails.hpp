// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PPTDETAILS_HPP_
#define ALIBABACLOUD_MODELS_PPTDETAILS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class PPTDetails : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PPTDetails& obj) { 
      DARABONBA_PTR_TO_JSON(ImagePath, imagePath_);
      DARABONBA_PTR_TO_JSON(PPTShotIndex, PPTShotIndex_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, PPTDetails& obj) { 
      DARABONBA_PTR_FROM_JSON(ImagePath, imagePath_);
      DARABONBA_PTR_FROM_JSON(PPTShotIndex, PPTShotIndex_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    PPTDetails() = default ;
    PPTDetails(const PPTDetails &) = default ;
    PPTDetails(PPTDetails &&) = default ;
    PPTDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PPTDetails() = default ;
    PPTDetails& operator=(const PPTDetails &) = default ;
    PPTDetails& operator=(PPTDetails &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->imagePath_ == nullptr
        && this->PPTShotIndex_ == nullptr && this->startTime_ == nullptr; };
    // imagePath Field Functions 
    bool hasImagePath() const { return this->imagePath_ != nullptr;};
    void deleteImagePath() { this->imagePath_ = nullptr;};
    inline string getImagePath() const { DARABONBA_PTR_GET_DEFAULT(imagePath_, "") };
    inline PPTDetails& setImagePath(string imagePath) { DARABONBA_PTR_SET_VALUE(imagePath_, imagePath) };


    // PPTShotIndex Field Functions 
    bool hasPPTShotIndex() const { return this->PPTShotIndex_ != nullptr;};
    void deletePPTShotIndex() { this->PPTShotIndex_ = nullptr;};
    inline int64_t getPPTShotIndex() const { DARABONBA_PTR_GET_DEFAULT(PPTShotIndex_, 0L) };
    inline PPTDetails& setPPTShotIndex(int64_t PPTShotIndex) { DARABONBA_PTR_SET_VALUE(PPTShotIndex_, PPTShotIndex) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline PPTDetails& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The URL of the captured slide image, which is stored in an Object Storage Service (OSS) bucket.
    shared_ptr<string> imagePath_ {};
    // The zero-based index of the slide in the sequence of detected slides.
    shared_ptr<int64_t> PPTShotIndex_ {};
    // The start time of the slide, in milliseconds, from the beginning of the video.
    shared_ptr<int64_t> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
