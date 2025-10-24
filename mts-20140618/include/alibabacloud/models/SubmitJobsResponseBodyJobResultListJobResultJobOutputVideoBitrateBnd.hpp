// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITJOBSRESPONSEBODYJOBRESULTLISTJOBRESULTJOBOUTPUTVIDEOBITRATEBND_HPP_
#define ALIBABACLOUD_MODELS_SUBMITJOBSRESPONSEBODYJOBRESULTLISTJOBRESULTJOBOUTPUTVIDEOBITRATEBND_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class SubmitJobsResponseBodyJobResultListJobResultJobOutputVideoBitrateBnd : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitJobsResponseBodyJobResultListJobResultJobOutputVideoBitrateBnd& obj) { 
      DARABONBA_PTR_TO_JSON(Max, max_);
      DARABONBA_PTR_TO_JSON(Min, min_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitJobsResponseBodyJobResultListJobResultJobOutputVideoBitrateBnd& obj) { 
      DARABONBA_PTR_FROM_JSON(Max, max_);
      DARABONBA_PTR_FROM_JSON(Min, min_);
    };
    SubmitJobsResponseBodyJobResultListJobResultJobOutputVideoBitrateBnd() = default ;
    SubmitJobsResponseBodyJobResultListJobResultJobOutputVideoBitrateBnd(const SubmitJobsResponseBodyJobResultListJobResultJobOutputVideoBitrateBnd &) = default ;
    SubmitJobsResponseBodyJobResultListJobResultJobOutputVideoBitrateBnd(SubmitJobsResponseBodyJobResultListJobResultJobOutputVideoBitrateBnd &&) = default ;
    SubmitJobsResponseBodyJobResultListJobResultJobOutputVideoBitrateBnd(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitJobsResponseBodyJobResultListJobResultJobOutputVideoBitrateBnd() = default ;
    SubmitJobsResponseBodyJobResultListJobResultJobOutputVideoBitrateBnd& operator=(const SubmitJobsResponseBodyJobResultListJobResultJobOutputVideoBitrateBnd &) = default ;
    SubmitJobsResponseBodyJobResultListJobResultJobOutputVideoBitrateBnd& operator=(SubmitJobsResponseBodyJobResultListJobResultJobOutputVideoBitrateBnd &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->max_ == nullptr
        && return this->min_ == nullptr; };
    // max Field Functions 
    bool hasMax() const { return this->max_ != nullptr;};
    void deleteMax() { this->max_ = nullptr;};
    inline string max() const { DARABONBA_PTR_GET_DEFAULT(max_, "") };
    inline SubmitJobsResponseBodyJobResultListJobResultJobOutputVideoBitrateBnd& setMax(string max) { DARABONBA_PTR_SET_VALUE(max_, max) };


    // min Field Functions 
    bool hasMin() const { return this->min_ != nullptr;};
    void deleteMin() { this->min_ = nullptr;};
    inline string min() const { DARABONBA_PTR_GET_DEFAULT(min_, "") };
    inline SubmitJobsResponseBodyJobResultListJobResultJobOutputVideoBitrateBnd& setMin(string min) { DARABONBA_PTR_SET_VALUE(min_, min) };


  protected:
    // The upper limit of the total bitrate. Unit: Kbit/s.
    std::shared_ptr<string> max_ = nullptr;
    // The lower limit of the total bitrate. Unit: Kbit/s.
    std::shared_ptr<string> min_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
