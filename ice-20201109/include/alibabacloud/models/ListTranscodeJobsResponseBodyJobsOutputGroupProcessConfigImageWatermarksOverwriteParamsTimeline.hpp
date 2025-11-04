// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTRANSCODEJOBSRESPONSEBODYJOBSOUTPUTGROUPPROCESSCONFIGIMAGEWATERMARKSOVERWRITEPARAMSTIMELINE_HPP_
#define ALIBABACLOUD_MODELS_LISTTRANSCODEJOBSRESPONSEBODYJOBSOUTPUTGROUPPROCESSCONFIGIMAGEWATERMARKSOVERWRITEPARAMSTIMELINE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigImageWatermarksOverwriteParamsTimeline : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigImageWatermarksOverwriteParamsTimeline& obj) { 
      DARABONBA_PTR_TO_JSON(Duration, duration_);
      DARABONBA_PTR_TO_JSON(Start, start_);
    };
    friend void from_json(const Darabonba::Json& j, ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigImageWatermarksOverwriteParamsTimeline& obj) { 
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
      DARABONBA_PTR_FROM_JSON(Start, start_);
    };
    ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigImageWatermarksOverwriteParamsTimeline() = default ;
    ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigImageWatermarksOverwriteParamsTimeline(const ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigImageWatermarksOverwriteParamsTimeline &) = default ;
    ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigImageWatermarksOverwriteParamsTimeline(ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigImageWatermarksOverwriteParamsTimeline &&) = default ;
    ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigImageWatermarksOverwriteParamsTimeline(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigImageWatermarksOverwriteParamsTimeline() = default ;
    ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigImageWatermarksOverwriteParamsTimeline& operator=(const ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigImageWatermarksOverwriteParamsTimeline &) = default ;
    ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigImageWatermarksOverwriteParamsTimeline& operator=(ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigImageWatermarksOverwriteParamsTimeline &&) = default ;
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
    inline ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigImageWatermarksOverwriteParamsTimeline& setDuration(string duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // start Field Functions 
    bool hasStart() const { return this->start_ != nullptr;};
    void deleteStart() { this->start_ = nullptr;};
    inline string start() const { DARABONBA_PTR_GET_DEFAULT(start_, "") };
    inline ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigImageWatermarksOverwriteParamsTimeline& setStart(string start) { DARABONBA_PTR_SET_VALUE(start_, start) };


  protected:
    // The duration of the stream. Valid values: the number of seconds or "ToEND".
    std::shared_ptr<string> duration_ = nullptr;
    // The beginning of the time range for which data was queried.
    std::shared_ptr<string> start_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
