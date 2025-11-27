// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TARGETIMAGEANIMATIONS_HPP_
#define ALIBABACLOUD_MODELS_TARGETIMAGEANIMATIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class TargetImageAnimations : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TargetImageAnimations& obj) { 
      DARABONBA_PTR_TO_JSON(Format, format_);
      DARABONBA_PTR_TO_JSON(FrameRate, frameRate_);
      DARABONBA_PTR_TO_JSON(Height, height_);
      DARABONBA_PTR_TO_JSON(Interval, interval_);
      DARABONBA_PTR_TO_JSON(Number, number_);
      DARABONBA_PTR_TO_JSON(ScaleType, scaleType_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(URI, URI_);
      DARABONBA_PTR_TO_JSON(Width, width_);
    };
    friend void from_json(const Darabonba::Json& j, TargetImageAnimations& obj) { 
      DARABONBA_PTR_FROM_JSON(Format, format_);
      DARABONBA_PTR_FROM_JSON(FrameRate, frameRate_);
      DARABONBA_PTR_FROM_JSON(Height, height_);
      DARABONBA_PTR_FROM_JSON(Interval, interval_);
      DARABONBA_PTR_FROM_JSON(Number, number_);
      DARABONBA_PTR_FROM_JSON(ScaleType, scaleType_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(URI, URI_);
      DARABONBA_PTR_FROM_JSON(Width, width_);
    };
    TargetImageAnimations() = default ;
    TargetImageAnimations(const TargetImageAnimations &) = default ;
    TargetImageAnimations(TargetImageAnimations &&) = default ;
    TargetImageAnimations(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TargetImageAnimations() = default ;
    TargetImageAnimations& operator=(const TargetImageAnimations &) = default ;
    TargetImageAnimations& operator=(TargetImageAnimations &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->format_ == nullptr
        && return this->frameRate_ == nullptr && return this->height_ == nullptr && return this->interval_ == nullptr && return this->number_ == nullptr && return this->scaleType_ == nullptr
        && return this->startTime_ == nullptr && return this->URI_ == nullptr && return this->width_ == nullptr; };
    // format Field Functions 
    bool hasFormat() const { return this->format_ != nullptr;};
    void deleteFormat() { this->format_ = nullptr;};
    inline string format() const { DARABONBA_PTR_GET_DEFAULT(format_, "") };
    inline TargetImageAnimations& setFormat(string format) { DARABONBA_PTR_SET_VALUE(format_, format) };


    // frameRate Field Functions 
    bool hasFrameRate() const { return this->frameRate_ != nullptr;};
    void deleteFrameRate() { this->frameRate_ = nullptr;};
    inline double frameRate() const { DARABONBA_PTR_GET_DEFAULT(frameRate_, 0.0) };
    inline TargetImageAnimations& setFrameRate(double frameRate) { DARABONBA_PTR_SET_VALUE(frameRate_, frameRate) };


    // height Field Functions 
    bool hasHeight() const { return this->height_ != nullptr;};
    void deleteHeight() { this->height_ = nullptr;};
    inline double height() const { DARABONBA_PTR_GET_DEFAULT(height_, 0.0) };
    inline TargetImageAnimations& setHeight(double height) { DARABONBA_PTR_SET_VALUE(height_, height) };


    // interval Field Functions 
    bool hasInterval() const { return this->interval_ != nullptr;};
    void deleteInterval() { this->interval_ = nullptr;};
    inline double interval() const { DARABONBA_PTR_GET_DEFAULT(interval_, 0.0) };
    inline TargetImageAnimations& setInterval(double interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


    // number Field Functions 
    bool hasNumber() const { return this->number_ != nullptr;};
    void deleteNumber() { this->number_ = nullptr;};
    inline int32_t number() const { DARABONBA_PTR_GET_DEFAULT(number_, 0) };
    inline TargetImageAnimations& setNumber(int32_t number) { DARABONBA_PTR_SET_VALUE(number_, number) };


    // scaleType Field Functions 
    bool hasScaleType() const { return this->scaleType_ != nullptr;};
    void deleteScaleType() { this->scaleType_ = nullptr;};
    inline string scaleType() const { DARABONBA_PTR_GET_DEFAULT(scaleType_, "") };
    inline TargetImageAnimations& setScaleType(string scaleType) { DARABONBA_PTR_SET_VALUE(scaleType_, scaleType) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline double startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0.0) };
    inline TargetImageAnimations& setStartTime(double startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // URI Field Functions 
    bool hasURI() const { return this->URI_ != nullptr;};
    void deleteURI() { this->URI_ = nullptr;};
    inline string URI() const { DARABONBA_PTR_GET_DEFAULT(URI_, "") };
    inline TargetImageAnimations& setURI(string URI) { DARABONBA_PTR_SET_VALUE(URI_, URI) };


    // width Field Functions 
    bool hasWidth() const { return this->width_ != nullptr;};
    void deleteWidth() { this->width_ = nullptr;};
    inline double width() const { DARABONBA_PTR_GET_DEFAULT(width_, 0.0) };
    inline TargetImageAnimations& setWidth(double width) { DARABONBA_PTR_SET_VALUE(width_, width) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> format_ = nullptr;
    std::shared_ptr<double> frameRate_ = nullptr;
    std::shared_ptr<double> height_ = nullptr;
    std::shared_ptr<double> interval_ = nullptr;
    std::shared_ptr<int32_t> number_ = nullptr;
    std::shared_ptr<string> scaleType_ = nullptr;
    std::shared_ptr<double> startTime_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> URI_ = nullptr;
    std::shared_ptr<double> width_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
