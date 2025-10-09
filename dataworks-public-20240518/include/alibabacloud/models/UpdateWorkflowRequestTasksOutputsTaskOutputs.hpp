// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEWORKFLOWREQUESTTASKSOUTPUTSTASKOUTPUTS_HPP_
#define ALIBABACLOUD_MODELS_UPDATEWORKFLOWREQUESTTASKSOUTPUTSTASKOUTPUTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class UpdateWorkflowRequestTasksOutputsTaskOutputs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateWorkflowRequestTasksOutputsTaskOutputs& obj) { 
      DARABONBA_PTR_TO_JSON(Output, output_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateWorkflowRequestTasksOutputsTaskOutputs& obj) { 
      DARABONBA_PTR_FROM_JSON(Output, output_);
    };
    UpdateWorkflowRequestTasksOutputsTaskOutputs() = default ;
    UpdateWorkflowRequestTasksOutputsTaskOutputs(const UpdateWorkflowRequestTasksOutputsTaskOutputs &) = default ;
    UpdateWorkflowRequestTasksOutputsTaskOutputs(UpdateWorkflowRequestTasksOutputsTaskOutputs &&) = default ;
    UpdateWorkflowRequestTasksOutputsTaskOutputs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateWorkflowRequestTasksOutputsTaskOutputs() = default ;
    UpdateWorkflowRequestTasksOutputsTaskOutputs& operator=(const UpdateWorkflowRequestTasksOutputsTaskOutputs &) = default ;
    UpdateWorkflowRequestTasksOutputsTaskOutputs& operator=(UpdateWorkflowRequestTasksOutputsTaskOutputs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->output_ != nullptr; };
    // output Field Functions 
    bool hasOutput() const { return this->output_ != nullptr;};
    void deleteOutput() { this->output_ = nullptr;};
    inline string output() const { DARABONBA_PTR_GET_DEFAULT(output_, "") };
    inline UpdateWorkflowRequestTasksOutputsTaskOutputs& setOutput(string output) { DARABONBA_PTR_SET_VALUE(output_, output) };


  protected:
    // The identifier of the output.
    std::shared_ptr<string> output_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
