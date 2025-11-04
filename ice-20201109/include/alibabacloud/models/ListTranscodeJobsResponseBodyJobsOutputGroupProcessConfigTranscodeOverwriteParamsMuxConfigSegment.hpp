// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTRANSCODEJOBSRESPONSEBODYJOBSOUTPUTGROUPPROCESSCONFIGTRANSCODEOVERWRITEPARAMSMUXCONFIGSEGMENT_HPP_
#define ALIBABACLOUD_MODELS_LISTTRANSCODEJOBSRESPONSEBODYJOBSOUTPUTGROUPPROCESSCONFIGTRANSCODEOVERWRITEPARAMSMUXCONFIGSEGMENT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigTranscodeOverwriteParamsMuxConfigSegment : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigTranscodeOverwriteParamsMuxConfigSegment& obj) { 
      DARABONBA_PTR_TO_JSON(Duration, duration_);
      DARABONBA_PTR_TO_JSON(ForceSegTime, forceSegTime_);
    };
    friend void from_json(const Darabonba::Json& j, ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigTranscodeOverwriteParamsMuxConfigSegment& obj) { 
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
      DARABONBA_PTR_FROM_JSON(ForceSegTime, forceSegTime_);
    };
    ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigTranscodeOverwriteParamsMuxConfigSegment() = default ;
    ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigTranscodeOverwriteParamsMuxConfigSegment(const ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigTranscodeOverwriteParamsMuxConfigSegment &) = default ;
    ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigTranscodeOverwriteParamsMuxConfigSegment(ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigTranscodeOverwriteParamsMuxConfigSegment &&) = default ;
    ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigTranscodeOverwriteParamsMuxConfigSegment(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigTranscodeOverwriteParamsMuxConfigSegment() = default ;
    ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigTranscodeOverwriteParamsMuxConfigSegment& operator=(const ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigTranscodeOverwriteParamsMuxConfigSegment &) = default ;
    ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigTranscodeOverwriteParamsMuxConfigSegment& operator=(ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigTranscodeOverwriteParamsMuxConfigSegment &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->duration_ == nullptr
        && return this->forceSegTime_ == nullptr; };
    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline string duration() const { DARABONBA_PTR_GET_DEFAULT(duration_, "") };
    inline ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigTranscodeOverwriteParamsMuxConfigSegment& setDuration(string duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // forceSegTime Field Functions 
    bool hasForceSegTime() const { return this->forceSegTime_ != nullptr;};
    void deleteForceSegTime() { this->forceSegTime_ = nullptr;};
    inline string forceSegTime() const { DARABONBA_PTR_GET_DEFAULT(forceSegTime_, "") };
    inline ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigTranscodeOverwriteParamsMuxConfigSegment& setForceSegTime(string forceSegTime) { DARABONBA_PTR_SET_VALUE(forceSegTime_, forceSegTime) };


  protected:
    // The segment length.
    std::shared_ptr<string> duration_ = nullptr;
    // The forced segmentation point in time.
    std::shared_ptr<string> forceSegTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
