// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNPIPELINEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RUNPIPELINEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentLoop20260520
{
namespace Models
{
  class RunPipelineRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunPipelineRequest& obj) { 
      DARABONBA_PTR_TO_JSON(fromTime, fromTime_);
      DARABONBA_PTR_TO_JSON(output, output_);
      DARABONBA_PTR_TO_JSON(toTime, toTime_);
    };
    friend void from_json(const Darabonba::Json& j, RunPipelineRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(fromTime, fromTime_);
      DARABONBA_PTR_FROM_JSON(output, output_);
      DARABONBA_PTR_FROM_JSON(toTime, toTime_);
    };
    RunPipelineRequest() = default ;
    RunPipelineRequest(const RunPipelineRequest &) = default ;
    RunPipelineRequest(RunPipelineRequest &&) = default ;
    RunPipelineRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunPipelineRequest() = default ;
    RunPipelineRequest& operator=(const RunPipelineRequest &) = default ;
    RunPipelineRequest& operator=(RunPipelineRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Output : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Output& obj) { 
        DARABONBA_PTR_TO_JSON(dataset, dataset_);
        DARABONBA_PTR_TO_JSON(inline, inline_);
      };
      friend void from_json(const Darabonba::Json& j, Output& obj) { 
        DARABONBA_PTR_FROM_JSON(dataset, dataset_);
        DARABONBA_PTR_FROM_JSON(inline, inline_);
      };
      Output() = default ;
      Output(const Output &) = default ;
      Output(Output &&) = default ;
      Output(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Output() = default ;
      Output& operator=(const Output &) = default ;
      Output& operator=(Output &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->dataset_ == nullptr
        && this->inline_ == nullptr; };
      // dataset Field Functions 
      bool hasDataset() const { return this->dataset_ != nullptr;};
      void deleteDataset() { this->dataset_ = nullptr;};
      inline bool getDataset() const { DARABONBA_PTR_GET_DEFAULT(dataset_, false) };
      inline Output& setDataset(bool dataset) { DARABONBA_PTR_SET_VALUE(dataset_, dataset) };


      // inline Field Functions 
      bool hasInline() const { return this->inline_ != nullptr;};
      void deleteInline() { this->inline_ = nullptr;};
      inline bool getInline() const { DARABONBA_PTR_GET_DEFAULT(inline_, false) };
      inline Output& setInline(bool _inline) { DARABONBA_PTR_SET_VALUE(inline_, _inline) };


    protected:
      shared_ptr<bool> dataset_ {};
      shared_ptr<bool> inline_ {};
    };

    virtual bool empty() const override { return this->fromTime_ == nullptr
        && this->output_ == nullptr && this->toTime_ == nullptr; };
    // fromTime Field Functions 
    bool hasFromTime() const { return this->fromTime_ != nullptr;};
    void deleteFromTime() { this->fromTime_ = nullptr;};
    inline int64_t getFromTime() const { DARABONBA_PTR_GET_DEFAULT(fromTime_, 0L) };
    inline RunPipelineRequest& setFromTime(int64_t fromTime) { DARABONBA_PTR_SET_VALUE(fromTime_, fromTime) };


    // output Field Functions 
    bool hasOutput() const { return this->output_ != nullptr;};
    void deleteOutput() { this->output_ = nullptr;};
    inline const RunPipelineRequest::Output & getOutput() const { DARABONBA_PTR_GET_CONST(output_, RunPipelineRequest::Output) };
    inline RunPipelineRequest::Output getOutput() { DARABONBA_PTR_GET(output_, RunPipelineRequest::Output) };
    inline RunPipelineRequest& setOutput(const RunPipelineRequest::Output & output) { DARABONBA_PTR_SET_VALUE(output_, output) };
    inline RunPipelineRequest& setOutput(RunPipelineRequest::Output && output) { DARABONBA_PTR_SET_RVALUE(output_, output) };


    // toTime Field Functions 
    bool hasToTime() const { return this->toTime_ != nullptr;};
    void deleteToTime() { this->toTime_ = nullptr;};
    inline int64_t getToTime() const { DARABONBA_PTR_GET_DEFAULT(toTime_, 0L) };
    inline RunPipelineRequest& setToTime(int64_t toTime) { DARABONBA_PTR_SET_VALUE(toTime_, toTime) };


  protected:
    shared_ptr<int64_t> fromTime_ {};
    shared_ptr<RunPipelineRequest::Output> output_ {};
    shared_ptr<int64_t> toTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentLoop20260520
#endif
