// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITTRANSCODEJOBREQUESTOUTPUTGROUPPROCESSCONFIGIMAGEWATERMARKSOVERWRITEPARAMSTIMELINE_HPP_
#define ALIBABACLOUD_MODELS_SUBMITTRANSCODEJOBREQUESTOUTPUTGROUPPROCESSCONFIGIMAGEWATERMARKSOVERWRITEPARAMSTIMELINE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class SubmitTranscodeJobRequestOutputGroupProcessConfigImageWatermarksOverwriteParamsTimeline : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitTranscodeJobRequestOutputGroupProcessConfigImageWatermarksOverwriteParamsTimeline& obj) { 
      DARABONBA_PTR_TO_JSON(Duration, duration_);
      DARABONBA_PTR_TO_JSON(Start, start_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitTranscodeJobRequestOutputGroupProcessConfigImageWatermarksOverwriteParamsTimeline& obj) { 
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
      DARABONBA_PTR_FROM_JSON(Start, start_);
    };
    SubmitTranscodeJobRequestOutputGroupProcessConfigImageWatermarksOverwriteParamsTimeline() = default ;
    SubmitTranscodeJobRequestOutputGroupProcessConfigImageWatermarksOverwriteParamsTimeline(const SubmitTranscodeJobRequestOutputGroupProcessConfigImageWatermarksOverwriteParamsTimeline &) = default ;
    SubmitTranscodeJobRequestOutputGroupProcessConfigImageWatermarksOverwriteParamsTimeline(SubmitTranscodeJobRequestOutputGroupProcessConfigImageWatermarksOverwriteParamsTimeline &&) = default ;
    SubmitTranscodeJobRequestOutputGroupProcessConfigImageWatermarksOverwriteParamsTimeline(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitTranscodeJobRequestOutputGroupProcessConfigImageWatermarksOverwriteParamsTimeline() = default ;
    SubmitTranscodeJobRequestOutputGroupProcessConfigImageWatermarksOverwriteParamsTimeline& operator=(const SubmitTranscodeJobRequestOutputGroupProcessConfigImageWatermarksOverwriteParamsTimeline &) = default ;
    SubmitTranscodeJobRequestOutputGroupProcessConfigImageWatermarksOverwriteParamsTimeline& operator=(SubmitTranscodeJobRequestOutputGroupProcessConfigImageWatermarksOverwriteParamsTimeline &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->duration_ == nullptr
        && return this->start_ == nullptr; };
    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline string duration() const { DARABONBA_PTR_GET_DEFAULT(duration_, "") };
    inline SubmitTranscodeJobRequestOutputGroupProcessConfigImageWatermarksOverwriteParamsTimeline& setDuration(string duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // start Field Functions 
    bool hasStart() const { return this->start_ != nullptr;};
    void deleteStart() { this->start_ = nullptr;};
    inline string start() const { DARABONBA_PTR_GET_DEFAULT(start_, "") };
    inline SubmitTranscodeJobRequestOutputGroupProcessConfigImageWatermarksOverwriteParamsTimeline& setStart(string start) { DARABONBA_PTR_SET_VALUE(start_, start) };


  protected:
    // The time range in which the watermark is displayed.
    // 
    // *   Valid values: integers and ToEND.
    // *   Default value: ToEND.
    std::shared_ptr<string> duration_ = nullptr;
    // The beginning of the time range in which the watermark is displayed.
    // 
    // *   Unit: seconds.
    // *   Value values: integers.
    // *   Default value: 0.
    std::shared_ptr<string> start_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
