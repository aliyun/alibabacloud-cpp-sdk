// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MEDIACONVERTSEGMENT_HPP_
#define ALIBABACLOUD_MODELS_MEDIACONVERTSEGMENT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class MediaConvertSegment : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MediaConvertSegment& obj) { 
      DARABONBA_PTR_TO_JSON(Duration, duration_);
      DARABONBA_PTR_TO_JSON(ForceSegTime, forceSegTime_);
    };
    friend void from_json(const Darabonba::Json& j, MediaConvertSegment& obj) { 
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
      DARABONBA_PTR_FROM_JSON(ForceSegTime, forceSegTime_);
    };
    MediaConvertSegment() = default ;
    MediaConvertSegment(const MediaConvertSegment &) = default ;
    MediaConvertSegment(MediaConvertSegment &&) = default ;
    MediaConvertSegment(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MediaConvertSegment() = default ;
    MediaConvertSegment& operator=(const MediaConvertSegment &) = default ;
    MediaConvertSegment& operator=(MediaConvertSegment &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->duration_ == nullptr
        && this->forceSegTime_ == nullptr; };
    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline int32_t getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0) };
    inline MediaConvertSegment& setDuration(int32_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // forceSegTime Field Functions 
    bool hasForceSegTime() const { return this->forceSegTime_ != nullptr;};
    void deleteForceSegTime() { this->forceSegTime_ = nullptr;};
    inline string getForceSegTime() const { DARABONBA_PTR_GET_DEFAULT(forceSegTime_, "") };
    inline MediaConvertSegment& setForceSegTime(string forceSegTime) { DARABONBA_PTR_SET_VALUE(forceSegTime_, forceSegTime) };


  protected:
    shared_ptr<int32_t> duration_ {};
    shared_ptr<string> forceSegTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
