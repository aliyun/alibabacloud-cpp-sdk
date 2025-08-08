// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PIPELINESTATUS_HPP_
#define ALIBABACLOUD_MODELS_PIPELINESTATUS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devs20230714
{
namespace Models
{
  class PipelineStatus : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PipelineStatus& obj) { 
      DARABONBA_PTR_TO_JSON(latestExecError, latestExecError_);
      DARABONBA_PTR_TO_JSON(phase, phase_);
    };
    friend void from_json(const Darabonba::Json& j, PipelineStatus& obj) { 
      DARABONBA_PTR_FROM_JSON(latestExecError, latestExecError_);
      DARABONBA_PTR_FROM_JSON(phase, phase_);
    };
    PipelineStatus() = default ;
    PipelineStatus(const PipelineStatus &) = default ;
    PipelineStatus(PipelineStatus &&) = default ;
    PipelineStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PipelineStatus() = default ;
    PipelineStatus& operator=(const PipelineStatus &) = default ;
    PipelineStatus& operator=(PipelineStatus &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->latestExecError_ != nullptr
        && this->phase_ != nullptr; };
    // latestExecError Field Functions 
    bool hasLatestExecError() const { return this->latestExecError_ != nullptr;};
    void deleteLatestExecError() { this->latestExecError_ = nullptr;};
    inline const TaskExecError & latestExecError() const { DARABONBA_PTR_GET_CONST(latestExecError_, TaskExecError) };
    inline TaskExecError latestExecError() { DARABONBA_PTR_GET(latestExecError_, TaskExecError) };
    inline PipelineStatus& setLatestExecError(const TaskExecError & latestExecError) { DARABONBA_PTR_SET_VALUE(latestExecError_, latestExecError) };
    inline PipelineStatus& setLatestExecError(TaskExecError && latestExecError) { DARABONBA_PTR_SET_RVALUE(latestExecError_, latestExecError) };


    // phase Field Functions 
    bool hasPhase() const { return this->phase_ != nullptr;};
    void deletePhase() { this->phase_ = nullptr;};
    inline string phase() const { DARABONBA_PTR_GET_DEFAULT(phase_, "") };
    inline PipelineStatus& setPhase(string phase) { DARABONBA_PTR_SET_VALUE(phase_, phase) };


  protected:
    std::shared_ptr<TaskExecError> latestExecError_ = nullptr;
    std::shared_ptr<string> phase_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devs20230714
#endif
