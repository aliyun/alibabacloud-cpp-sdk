// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITJOBSRESPONSEBODYJOBRESULTLISTJOBRESULTJOBOUTPUTCLIPTIMESPAN_HPP_
#define ALIBABACLOUD_MODELS_SUBMITJOBSRESPONSEBODYJOBRESULTLISTJOBRESULTJOBOUTPUTCLIPTIMESPAN_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class SubmitJobsResponseBodyJobResultListJobResultJobOutputClipTimeSpan : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitJobsResponseBodyJobResultListJobResultJobOutputClipTimeSpan& obj) { 
      DARABONBA_PTR_TO_JSON(Duration, duration_);
      DARABONBA_PTR_TO_JSON(Seek, seek_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitJobsResponseBodyJobResultListJobResultJobOutputClipTimeSpan& obj) { 
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
      DARABONBA_PTR_FROM_JSON(Seek, seek_);
    };
    SubmitJobsResponseBodyJobResultListJobResultJobOutputClipTimeSpan() = default ;
    SubmitJobsResponseBodyJobResultListJobResultJobOutputClipTimeSpan(const SubmitJobsResponseBodyJobResultListJobResultJobOutputClipTimeSpan &) = default ;
    SubmitJobsResponseBodyJobResultListJobResultJobOutputClipTimeSpan(SubmitJobsResponseBodyJobResultListJobResultJobOutputClipTimeSpan &&) = default ;
    SubmitJobsResponseBodyJobResultListJobResultJobOutputClipTimeSpan(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitJobsResponseBodyJobResultListJobResultJobOutputClipTimeSpan() = default ;
    SubmitJobsResponseBodyJobResultListJobResultJobOutputClipTimeSpan& operator=(const SubmitJobsResponseBodyJobResultListJobResultJobOutputClipTimeSpan &) = default ;
    SubmitJobsResponseBodyJobResultListJobResultJobOutputClipTimeSpan& operator=(SubmitJobsResponseBodyJobResultListJobResultJobOutputClipTimeSpan &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->duration_ == nullptr
        && return this->seek_ == nullptr; };
    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline string duration() const { DARABONBA_PTR_GET_DEFAULT(duration_, "") };
    inline SubmitJobsResponseBodyJobResultListJobResultJobOutputClipTimeSpan& setDuration(string duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // seek Field Functions 
    bool hasSeek() const { return this->seek_ != nullptr;};
    void deleteSeek() { this->seek_ = nullptr;};
    inline string seek() const { DARABONBA_PTR_GET_DEFAULT(seek_, "") };
    inline SubmitJobsResponseBodyJobResultListJobResultJobOutputClipTimeSpan& setSeek(string seek) { DARABONBA_PTR_SET_VALUE(seek_, seek) };


  protected:
    // The duration of the clip.
    // 
    // *   Format: `hh:mm:ss[.SSS]` or `sssss[.SSS]`.
    // *   Valid values: `[00:00:00.000,23:59:59.999]` or `[0.000,86399.999]`.
    std::shared_ptr<string> duration_ = nullptr;
    // The start time.
    // 
    // *   Format: `hh:mm:ss[.SSS]` or `sssss[.SSS]`.
    // *   Valid values: `[00:00:00.000,23:59:59.999]` or `[0.000,86399.999]`.
    std::shared_ptr<string> seek_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
