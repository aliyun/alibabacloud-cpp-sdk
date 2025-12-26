// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FLOWRUNNODERUNINFOS_HPP_
#define ALIBABACLOUD_MODELS_FLOWRUNNODERUNINFOS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PAILangStudio20240710
{
namespace Models
{
  class FlowRunNodeRunInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FlowRunNodeRunInfos& obj) { 
      DARABONBA_PTR_TO_JSON(Duration, duration_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(Inputs, inputs_);
      DARABONBA_PTR_TO_JSON(NodeName, nodeName_);
      DARABONBA_PTR_TO_JSON(Output, output_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Stdout, stdout_);
    };
    friend void from_json(const Darabonba::Json& j, FlowRunNodeRunInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(Inputs, inputs_);
      DARABONBA_PTR_FROM_JSON(NodeName, nodeName_);
      DARABONBA_PTR_FROM_JSON(Output, output_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Stdout, stdout_);
    };
    FlowRunNodeRunInfos() = default ;
    FlowRunNodeRunInfos(const FlowRunNodeRunInfos &) = default ;
    FlowRunNodeRunInfos(FlowRunNodeRunInfos &&) = default ;
    FlowRunNodeRunInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FlowRunNodeRunInfos() = default ;
    FlowRunNodeRunInfos& operator=(const FlowRunNodeRunInfos &) = default ;
    FlowRunNodeRunInfos& operator=(FlowRunNodeRunInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->duration_ == nullptr
        && return this->errorMessage_ == nullptr && return this->inputs_ == nullptr && return this->nodeName_ == nullptr && return this->output_ == nullptr && return this->status_ == nullptr
        && return this->stdout_ == nullptr; };
    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline string duration() const { DARABONBA_PTR_GET_DEFAULT(duration_, "") };
    inline FlowRunNodeRunInfos& setDuration(string duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline FlowRunNodeRunInfos& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // inputs Field Functions 
    bool hasInputs() const { return this->inputs_ != nullptr;};
    void deleteInputs() { this->inputs_ = nullptr;};
    inline string inputs() const { DARABONBA_PTR_GET_DEFAULT(inputs_, "") };
    inline FlowRunNodeRunInfos& setInputs(string inputs) { DARABONBA_PTR_SET_VALUE(inputs_, inputs) };


    // nodeName Field Functions 
    bool hasNodeName() const { return this->nodeName_ != nullptr;};
    void deleteNodeName() { this->nodeName_ = nullptr;};
    inline string nodeName() const { DARABONBA_PTR_GET_DEFAULT(nodeName_, "") };
    inline FlowRunNodeRunInfos& setNodeName(string nodeName) { DARABONBA_PTR_SET_VALUE(nodeName_, nodeName) };


    // output Field Functions 
    bool hasOutput() const { return this->output_ != nullptr;};
    void deleteOutput() { this->output_ = nullptr;};
    inline string output() const { DARABONBA_PTR_GET_DEFAULT(output_, "") };
    inline FlowRunNodeRunInfos& setOutput(string output) { DARABONBA_PTR_SET_VALUE(output_, output) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline FlowRunNodeRunInfos& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // stdout Field Functions 
    bool hasStdout() const { return this->stdout_ != nullptr;};
    void deleteStdout() { this->stdout_ = nullptr;};
    inline string stdout() const { DARABONBA_PTR_GET_DEFAULT(stdout_, "") };
    inline FlowRunNodeRunInfos& setStdout(string stdout) { DARABONBA_PTR_SET_VALUE(stdout_, stdout) };


  protected:
    // 耗时
    std::shared_ptr<string> duration_ = nullptr;
    // 错误信息
    std::shared_ptr<string> errorMessage_ = nullptr;
    // 输入
    std::shared_ptr<string> inputs_ = nullptr;
    // 节点名称
    std::shared_ptr<string> nodeName_ = nullptr;
    // 输出
    std::shared_ptr<string> output_ = nullptr;
    // 节点状态
    std::shared_ptr<string> status_ = nullptr;
    // 日志信息
    std::shared_ptr<string> stdout_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PAILangStudio20240710
#endif
