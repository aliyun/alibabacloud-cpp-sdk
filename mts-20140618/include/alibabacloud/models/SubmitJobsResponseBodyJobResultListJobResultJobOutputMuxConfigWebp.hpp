// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITJOBSRESPONSEBODYJOBRESULTLISTJOBRESULTJOBOUTPUTMUXCONFIGWEBP_HPP_
#define ALIBABACLOUD_MODELS_SUBMITJOBSRESPONSEBODYJOBRESULTLISTJOBRESULTJOBOUTPUTMUXCONFIGWEBP_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class SubmitJobsResponseBodyJobResultListJobResultJobOutputMuxConfigWebp : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitJobsResponseBodyJobResultListJobResultJobOutputMuxConfigWebp& obj) { 
      DARABONBA_PTR_TO_JSON(Loop, loop_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitJobsResponseBodyJobResultListJobResultJobOutputMuxConfigWebp& obj) { 
      DARABONBA_PTR_FROM_JSON(Loop, loop_);
    };
    SubmitJobsResponseBodyJobResultListJobResultJobOutputMuxConfigWebp() = default ;
    SubmitJobsResponseBodyJobResultListJobResultJobOutputMuxConfigWebp(const SubmitJobsResponseBodyJobResultListJobResultJobOutputMuxConfigWebp &) = default ;
    SubmitJobsResponseBodyJobResultListJobResultJobOutputMuxConfigWebp(SubmitJobsResponseBodyJobResultListJobResultJobOutputMuxConfigWebp &&) = default ;
    SubmitJobsResponseBodyJobResultListJobResultJobOutputMuxConfigWebp(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitJobsResponseBodyJobResultListJobResultJobOutputMuxConfigWebp() = default ;
    SubmitJobsResponseBodyJobResultListJobResultJobOutputMuxConfigWebp& operator=(const SubmitJobsResponseBodyJobResultListJobResultJobOutputMuxConfigWebp &) = default ;
    SubmitJobsResponseBodyJobResultListJobResultJobOutputMuxConfigWebp& operator=(SubmitJobsResponseBodyJobResultListJobResultJobOutputMuxConfigWebp &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->loop_ == nullptr; };
    // loop Field Functions 
    bool hasLoop() const { return this->loop_ != nullptr;};
    void deleteLoop() { this->loop_ = nullptr;};
    inline string loop() const { DARABONBA_PTR_GET_DEFAULT(loop_, "") };
    inline SubmitJobsResponseBodyJobResultListJobResultJobOutputMuxConfigWebp& setLoop(string loop) { DARABONBA_PTR_SET_VALUE(loop_, loop) };


  protected:
    // The loop count.
    std::shared_ptr<string> loop_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
