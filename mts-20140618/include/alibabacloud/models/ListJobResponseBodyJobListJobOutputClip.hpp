// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTJOBRESPONSEBODYJOBLISTJOBOUTPUTCLIP_HPP_
#define ALIBABACLOUD_MODELS_LISTJOBRESPONSEBODYJOBLISTJOBOUTPUTCLIP_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListJobResponseBodyJobListJobOutputClipTimeSpan.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class ListJobResponseBodyJobListJobOutputClip : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListJobResponseBodyJobListJobOutputClip& obj) { 
      DARABONBA_PTR_TO_JSON(TimeSpan, timeSpan_);
    };
    friend void from_json(const Darabonba::Json& j, ListJobResponseBodyJobListJobOutputClip& obj) { 
      DARABONBA_PTR_FROM_JSON(TimeSpan, timeSpan_);
    };
    ListJobResponseBodyJobListJobOutputClip() = default ;
    ListJobResponseBodyJobListJobOutputClip(const ListJobResponseBodyJobListJobOutputClip &) = default ;
    ListJobResponseBodyJobListJobOutputClip(ListJobResponseBodyJobListJobOutputClip &&) = default ;
    ListJobResponseBodyJobListJobOutputClip(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListJobResponseBodyJobListJobOutputClip() = default ;
    ListJobResponseBodyJobListJobOutputClip& operator=(const ListJobResponseBodyJobListJobOutputClip &) = default ;
    ListJobResponseBodyJobListJobOutputClip& operator=(ListJobResponseBodyJobListJobOutputClip &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->timeSpan_ == nullptr; };
    // timeSpan Field Functions 
    bool hasTimeSpan() const { return this->timeSpan_ != nullptr;};
    void deleteTimeSpan() { this->timeSpan_ = nullptr;};
    inline const Models::ListJobResponseBodyJobListJobOutputClipTimeSpan & timeSpan() const { DARABONBA_PTR_GET_CONST(timeSpan_, Models::ListJobResponseBodyJobListJobOutputClipTimeSpan) };
    inline Models::ListJobResponseBodyJobListJobOutputClipTimeSpan timeSpan() { DARABONBA_PTR_GET(timeSpan_, Models::ListJobResponseBodyJobListJobOutputClipTimeSpan) };
    inline ListJobResponseBodyJobListJobOutputClip& setTimeSpan(const Models::ListJobResponseBodyJobListJobOutputClipTimeSpan & timeSpan) { DARABONBA_PTR_SET_VALUE(timeSpan_, timeSpan) };
    inline ListJobResponseBodyJobListJobOutputClip& setTimeSpan(Models::ListJobResponseBodyJobListJobOutputClipTimeSpan && timeSpan) { DARABONBA_PTR_SET_RVALUE(timeSpan_, timeSpan) };


  protected:
    // The time span of the clip.
    std::shared_ptr<Models::ListJobResponseBodyJobListJobOutputClipTimeSpan> timeSpan_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
