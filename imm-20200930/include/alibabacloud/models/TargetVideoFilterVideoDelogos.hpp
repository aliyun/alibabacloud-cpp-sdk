// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TARGETVIDEOFILTERVIDEODELOGOS_HPP_
#define ALIBABACLOUD_MODELS_TARGETVIDEOFILTERVIDEODELOGOS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class TargetVideoFilterVideoDelogos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TargetVideoFilterVideoDelogos& obj) { 
      DARABONBA_PTR_TO_JSON(Duration, duration_);
      DARABONBA_PTR_TO_JSON(Dx, dx_);
      DARABONBA_PTR_TO_JSON(Dy, dy_);
      DARABONBA_PTR_TO_JSON(Height, height_);
      DARABONBA_PTR_TO_JSON(ReferPos, referPos_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Width, width_);
    };
    friend void from_json(const Darabonba::Json& j, TargetVideoFilterVideoDelogos& obj) { 
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
      DARABONBA_PTR_FROM_JSON(Dx, dx_);
      DARABONBA_PTR_FROM_JSON(Dy, dy_);
      DARABONBA_PTR_FROM_JSON(Height, height_);
      DARABONBA_PTR_FROM_JSON(ReferPos, referPos_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Width, width_);
    };
    TargetVideoFilterVideoDelogos() = default ;
    TargetVideoFilterVideoDelogos(const TargetVideoFilterVideoDelogos &) = default ;
    TargetVideoFilterVideoDelogos(TargetVideoFilterVideoDelogos &&) = default ;
    TargetVideoFilterVideoDelogos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TargetVideoFilterVideoDelogos() = default ;
    TargetVideoFilterVideoDelogos& operator=(const TargetVideoFilterVideoDelogos &) = default ;
    TargetVideoFilterVideoDelogos& operator=(TargetVideoFilterVideoDelogos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->duration_ != nullptr
        && this->dx_ != nullptr && this->dy_ != nullptr && this->height_ != nullptr && this->referPos_ != nullptr && this->startTime_ != nullptr
        && this->width_ != nullptr; };
    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline double duration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0.0) };
    inline TargetVideoFilterVideoDelogos& setDuration(double duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // dx Field Functions 
    bool hasDx() const { return this->dx_ != nullptr;};
    void deleteDx() { this->dx_ = nullptr;};
    inline float dx() const { DARABONBA_PTR_GET_DEFAULT(dx_, 0.0) };
    inline TargetVideoFilterVideoDelogos& setDx(float dx) { DARABONBA_PTR_SET_VALUE(dx_, dx) };


    // dy Field Functions 
    bool hasDy() const { return this->dy_ != nullptr;};
    void deleteDy() { this->dy_ = nullptr;};
    inline float dy() const { DARABONBA_PTR_GET_DEFAULT(dy_, 0.0) };
    inline TargetVideoFilterVideoDelogos& setDy(float dy) { DARABONBA_PTR_SET_VALUE(dy_, dy) };


    // height Field Functions 
    bool hasHeight() const { return this->height_ != nullptr;};
    void deleteHeight() { this->height_ = nullptr;};
    inline float height() const { DARABONBA_PTR_GET_DEFAULT(height_, 0.0) };
    inline TargetVideoFilterVideoDelogos& setHeight(float height) { DARABONBA_PTR_SET_VALUE(height_, height) };


    // referPos Field Functions 
    bool hasReferPos() const { return this->referPos_ != nullptr;};
    void deleteReferPos() { this->referPos_ = nullptr;};
    inline string referPos() const { DARABONBA_PTR_GET_DEFAULT(referPos_, "") };
    inline TargetVideoFilterVideoDelogos& setReferPos(string referPos) { DARABONBA_PTR_SET_VALUE(referPos_, referPos) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline double startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0.0) };
    inline TargetVideoFilterVideoDelogos& setStartTime(double startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // width Field Functions 
    bool hasWidth() const { return this->width_ != nullptr;};
    void deleteWidth() { this->width_ = nullptr;};
    inline float width() const { DARABONBA_PTR_GET_DEFAULT(width_, 0.0) };
    inline TargetVideoFilterVideoDelogos& setWidth(float width) { DARABONBA_PTR_SET_VALUE(width_, width) };


  protected:
    std::shared_ptr<double> duration_ = nullptr;
    std::shared_ptr<float> dx_ = nullptr;
    std::shared_ptr<float> dy_ = nullptr;
    std::shared_ptr<float> height_ = nullptr;
    std::shared_ptr<string> referPos_ = nullptr;
    std::shared_ptr<double> startTime_ = nullptr;
    std::shared_ptr<float> width_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
