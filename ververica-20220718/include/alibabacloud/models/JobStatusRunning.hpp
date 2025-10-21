// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_JOBSTATUSRUNNING_HPP_
#define ALIBABACLOUD_MODELS_JOBSTATUSRUNNING_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ververica20220718
{
namespace Models
{
  class JobStatusRunning : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const JobStatusRunning& obj) { 
      DARABONBA_PTR_TO_JSON(observedFlinkJobRestarts, observedFlinkJobRestarts_);
      DARABONBA_PTR_TO_JSON(observedFlinkJobStatus, observedFlinkJobStatus_);
    };
    friend void from_json(const Darabonba::Json& j, JobStatusRunning& obj) { 
      DARABONBA_PTR_FROM_JSON(observedFlinkJobRestarts, observedFlinkJobRestarts_);
      DARABONBA_PTR_FROM_JSON(observedFlinkJobStatus, observedFlinkJobStatus_);
    };
    JobStatusRunning() = default ;
    JobStatusRunning(const JobStatusRunning &) = default ;
    JobStatusRunning(JobStatusRunning &&) = default ;
    JobStatusRunning(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~JobStatusRunning() = default ;
    JobStatusRunning& operator=(const JobStatusRunning &) = default ;
    JobStatusRunning& operator=(JobStatusRunning &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->observedFlinkJobRestarts_ == nullptr
        && return this->observedFlinkJobStatus_ == nullptr; };
    // observedFlinkJobRestarts Field Functions 
    bool hasObservedFlinkJobRestarts() const { return this->observedFlinkJobRestarts_ != nullptr;};
    void deleteObservedFlinkJobRestarts() { this->observedFlinkJobRestarts_ = nullptr;};
    inline int64_t observedFlinkJobRestarts() const { DARABONBA_PTR_GET_DEFAULT(observedFlinkJobRestarts_, 0L) };
    inline JobStatusRunning& setObservedFlinkJobRestarts(int64_t observedFlinkJobRestarts) { DARABONBA_PTR_SET_VALUE(observedFlinkJobRestarts_, observedFlinkJobRestarts) };


    // observedFlinkJobStatus Field Functions 
    bool hasObservedFlinkJobStatus() const { return this->observedFlinkJobStatus_ != nullptr;};
    void deleteObservedFlinkJobStatus() { this->observedFlinkJobStatus_ = nullptr;};
    inline string observedFlinkJobStatus() const { DARABONBA_PTR_GET_DEFAULT(observedFlinkJobStatus_, "") };
    inline JobStatusRunning& setObservedFlinkJobStatus(string observedFlinkJobStatus) { DARABONBA_PTR_SET_VALUE(observedFlinkJobStatus_, observedFlinkJobStatus) };


  protected:
    std::shared_ptr<int64_t> observedFlinkJobRestarts_ = nullptr;
    std::shared_ptr<string> observedFlinkJobStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ververica20220718
#endif
