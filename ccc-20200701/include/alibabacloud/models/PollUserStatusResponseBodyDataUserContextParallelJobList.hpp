// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_POLLUSERSTATUSRESPONSEBODYDATAUSERCONTEXTPARALLELJOBLIST_HPP_
#define ALIBABACLOUD_MODELS_POLLUSERSTATUSRESPONSEBODYDATAUSERCONTEXTPARALLELJOBLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class PollUserStatusResponseBodyDataUserContextParallelJobList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PollUserStatusResponseBodyDataUserContextParallelJobList& obj) { 
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Timestamp, timestamp_);
    };
    friend void from_json(const Darabonba::Json& j, PollUserStatusResponseBodyDataUserContextParallelJobList& obj) { 
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Timestamp, timestamp_);
    };
    PollUserStatusResponseBodyDataUserContextParallelJobList() = default ;
    PollUserStatusResponseBodyDataUserContextParallelJobList(const PollUserStatusResponseBodyDataUserContextParallelJobList &) = default ;
    PollUserStatusResponseBodyDataUserContextParallelJobList(PollUserStatusResponseBodyDataUserContextParallelJobList &&) = default ;
    PollUserStatusResponseBodyDataUserContextParallelJobList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PollUserStatusResponseBodyDataUserContextParallelJobList() = default ;
    PollUserStatusResponseBodyDataUserContextParallelJobList& operator=(const PollUserStatusResponseBodyDataUserContextParallelJobList &) = default ;
    PollUserStatusResponseBodyDataUserContextParallelJobList& operator=(PollUserStatusResponseBodyDataUserContextParallelJobList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->jobId_ == nullptr
        && return this->status_ == nullptr && return this->timestamp_ == nullptr; };
    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline PollUserStatusResponseBodyDataUserContextParallelJobList& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline PollUserStatusResponseBodyDataUserContextParallelJobList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // timestamp Field Functions 
    bool hasTimestamp() const { return this->timestamp_ != nullptr;};
    void deleteTimestamp() { this->timestamp_ = nullptr;};
    inline int64_t timestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, 0L) };
    inline PollUserStatusResponseBodyDataUserContextParallelJobList& setTimestamp(int64_t timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


  protected:
    std::shared_ptr<string> jobId_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<int64_t> timestamp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
