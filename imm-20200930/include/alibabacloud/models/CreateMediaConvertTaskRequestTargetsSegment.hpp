// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMEDIACONVERTTASKREQUESTTARGETSSEGMENT_HPP_
#define ALIBABACLOUD_MODELS_CREATEMEDIACONVERTTASKREQUESTTARGETSSEGMENT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class CreateMediaConvertTaskRequestTargetsSegment : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateMediaConvertTaskRequestTargetsSegment& obj) { 
      DARABONBA_PTR_TO_JSON(Duration, duration_);
      DARABONBA_PTR_TO_JSON(Format, format_);
      DARABONBA_PTR_TO_JSON(StartNumber, startNumber_);
    };
    friend void from_json(const Darabonba::Json& j, CreateMediaConvertTaskRequestTargetsSegment& obj) { 
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
      DARABONBA_PTR_FROM_JSON(Format, format_);
      DARABONBA_PTR_FROM_JSON(StartNumber, startNumber_);
    };
    CreateMediaConvertTaskRequestTargetsSegment() = default ;
    CreateMediaConvertTaskRequestTargetsSegment(const CreateMediaConvertTaskRequestTargetsSegment &) = default ;
    CreateMediaConvertTaskRequestTargetsSegment(CreateMediaConvertTaskRequestTargetsSegment &&) = default ;
    CreateMediaConvertTaskRequestTargetsSegment(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateMediaConvertTaskRequestTargetsSegment() = default ;
    CreateMediaConvertTaskRequestTargetsSegment& operator=(const CreateMediaConvertTaskRequestTargetsSegment &) = default ;
    CreateMediaConvertTaskRequestTargetsSegment& operator=(CreateMediaConvertTaskRequestTargetsSegment &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->duration_ == nullptr
        && return this->format_ == nullptr && return this->startNumber_ == nullptr; };
    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline double duration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0.0) };
    inline CreateMediaConvertTaskRequestTargetsSegment& setDuration(double duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // format Field Functions 
    bool hasFormat() const { return this->format_ != nullptr;};
    void deleteFormat() { this->format_ = nullptr;};
    inline string format() const { DARABONBA_PTR_GET_DEFAULT(format_, "") };
    inline CreateMediaConvertTaskRequestTargetsSegment& setFormat(string format) { DARABONBA_PTR_SET_VALUE(format_, format) };


    // startNumber Field Functions 
    bool hasStartNumber() const { return this->startNumber_ != nullptr;};
    void deleteStartNumber() { this->startNumber_ = nullptr;};
    inline int32_t startNumber() const { DARABONBA_PTR_GET_DEFAULT(startNumber_, 0) };
    inline CreateMediaConvertTaskRequestTargetsSegment& setStartNumber(int32_t startNumber) { DARABONBA_PTR_SET_VALUE(startNumber_, startNumber) };


  protected:
    // Segment length. Unit: seconds.
    std::shared_ptr<double> duration_ = nullptr;
    // Media slicing method. The value range is as follows:
    // - hls
    // - dash
    std::shared_ptr<string> format_ = nullptr;
    // Starting sequence number, supported only for hls, default is 0.
    std::shared_ptr<int32_t> startNumber_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
