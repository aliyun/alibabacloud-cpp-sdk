// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEDGEMACHINEACTIVEPROCESSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEDGEMACHINEACTIVEPROCESSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class DescribeEdgeMachineActiveProcessResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEdgeMachineActiveProcessResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(logs, logs_);
      DARABONBA_PTR_TO_JSON(progress, progress_);
      DARABONBA_PTR_TO_JSON(request_id, requestId_);
      DARABONBA_PTR_TO_JSON(state, state_);
      DARABONBA_PTR_TO_JSON(step, step_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEdgeMachineActiveProcessResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(logs, logs_);
      DARABONBA_PTR_FROM_JSON(progress, progress_);
      DARABONBA_PTR_FROM_JSON(request_id, requestId_);
      DARABONBA_PTR_FROM_JSON(state, state_);
      DARABONBA_PTR_FROM_JSON(step, step_);
    };
    DescribeEdgeMachineActiveProcessResponseBody() = default ;
    DescribeEdgeMachineActiveProcessResponseBody(const DescribeEdgeMachineActiveProcessResponseBody &) = default ;
    DescribeEdgeMachineActiveProcessResponseBody(DescribeEdgeMachineActiveProcessResponseBody &&) = default ;
    DescribeEdgeMachineActiveProcessResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEdgeMachineActiveProcessResponseBody() = default ;
    DescribeEdgeMachineActiveProcessResponseBody& operator=(const DescribeEdgeMachineActiveProcessResponseBody &) = default ;
    DescribeEdgeMachineActiveProcessResponseBody& operator=(DescribeEdgeMachineActiveProcessResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->logs_ != nullptr
        && this->progress_ != nullptr && this->requestId_ != nullptr && this->state_ != nullptr && this->step_ != nullptr; };
    // logs Field Functions 
    bool hasLogs() const { return this->logs_ != nullptr;};
    void deleteLogs() { this->logs_ = nullptr;};
    inline string logs() const { DARABONBA_PTR_GET_DEFAULT(logs_, "") };
    inline DescribeEdgeMachineActiveProcessResponseBody& setLogs(string logs) { DARABONBA_PTR_SET_VALUE(logs_, logs) };


    // progress Field Functions 
    bool hasProgress() const { return this->progress_ != nullptr;};
    void deleteProgress() { this->progress_ = nullptr;};
    inline int64_t progress() const { DARABONBA_PTR_GET_DEFAULT(progress_, 0L) };
    inline DescribeEdgeMachineActiveProcessResponseBody& setProgress(int64_t progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeEdgeMachineActiveProcessResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string state() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline DescribeEdgeMachineActiveProcessResponseBody& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    // step Field Functions 
    bool hasStep() const { return this->step_ != nullptr;};
    void deleteStep() { this->step_ = nullptr;};
    inline string step() const { DARABONBA_PTR_GET_DEFAULT(step_, "") };
    inline DescribeEdgeMachineActiveProcessResponseBody& setStep(string step) { DARABONBA_PTR_SET_VALUE(step_, step) };


  protected:
    // The activation progress list.
    std::shared_ptr<string> logs_ = nullptr;
    // The activation progress.
    std::shared_ptr<int64_t> progress_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The activation status.
    std::shared_ptr<string> state_ = nullptr;
    // The activation step.
    std::shared_ptr<string> step_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
