// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITJOBSRESPONSEBODYJOBRESULTLISTJOBRESULTJOBOUTPUTCLIP_HPP_
#define ALIBABACLOUD_MODELS_SUBMITJOBSRESPONSEBODYJOBRESULTLISTJOBRESULTJOBOUTPUTCLIP_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SubmitJobsResponseBodyJobResultListJobResultJobOutputClipTimeSpan.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class SubmitJobsResponseBodyJobResultListJobResultJobOutputClip : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitJobsResponseBodyJobResultListJobResultJobOutputClip& obj) { 
      DARABONBA_PTR_TO_JSON(TimeSpan, timeSpan_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitJobsResponseBodyJobResultListJobResultJobOutputClip& obj) { 
      DARABONBA_PTR_FROM_JSON(TimeSpan, timeSpan_);
    };
    SubmitJobsResponseBodyJobResultListJobResultJobOutputClip() = default ;
    SubmitJobsResponseBodyJobResultListJobResultJobOutputClip(const SubmitJobsResponseBodyJobResultListJobResultJobOutputClip &) = default ;
    SubmitJobsResponseBodyJobResultListJobResultJobOutputClip(SubmitJobsResponseBodyJobResultListJobResultJobOutputClip &&) = default ;
    SubmitJobsResponseBodyJobResultListJobResultJobOutputClip(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitJobsResponseBodyJobResultListJobResultJobOutputClip() = default ;
    SubmitJobsResponseBodyJobResultListJobResultJobOutputClip& operator=(const SubmitJobsResponseBodyJobResultListJobResultJobOutputClip &) = default ;
    SubmitJobsResponseBodyJobResultListJobResultJobOutputClip& operator=(SubmitJobsResponseBodyJobResultListJobResultJobOutputClip &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->timeSpan_ == nullptr; };
    // timeSpan Field Functions 
    bool hasTimeSpan() const { return this->timeSpan_ != nullptr;};
    void deleteTimeSpan() { this->timeSpan_ = nullptr;};
    inline const Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputClipTimeSpan & timeSpan() const { DARABONBA_PTR_GET_CONST(timeSpan_, Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputClipTimeSpan) };
    inline Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputClipTimeSpan timeSpan() { DARABONBA_PTR_GET(timeSpan_, Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputClipTimeSpan) };
    inline SubmitJobsResponseBodyJobResultListJobResultJobOutputClip& setTimeSpan(const Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputClipTimeSpan & timeSpan) { DARABONBA_PTR_SET_VALUE(timeSpan_, timeSpan) };
    inline SubmitJobsResponseBodyJobResultListJobResultJobOutputClip& setTimeSpan(Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputClipTimeSpan && timeSpan) { DARABONBA_PTR_SET_RVALUE(timeSpan_, timeSpan) };


  protected:
    // The time span of the clip.
    std::shared_ptr<Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputClipTimeSpan> timeSpan_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
