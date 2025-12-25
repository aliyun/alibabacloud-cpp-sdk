// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETWORKFLOWEXECUTIONDAGRESPONSEBODYDATAEDGES_HPP_
#define ALIBABACLOUD_MODELS_GETWORKFLOWEXECUTIONDAGRESPONSEBODYDATAEDGES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SchedulerX320240624
{
namespace Models
{
  class GetWorkflowExecutionDAGResponseBodyDataEdges : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetWorkflowExecutionDAGResponseBodyDataEdges& obj) { 
      DARABONBA_PTR_TO_JSON(Source, source_);
      DARABONBA_PTR_TO_JSON(Target, target_);
    };
    friend void from_json(const Darabonba::Json& j, GetWorkflowExecutionDAGResponseBodyDataEdges& obj) { 
      DARABONBA_PTR_FROM_JSON(Source, source_);
      DARABONBA_PTR_FROM_JSON(Target, target_);
    };
    GetWorkflowExecutionDAGResponseBodyDataEdges() = default ;
    GetWorkflowExecutionDAGResponseBodyDataEdges(const GetWorkflowExecutionDAGResponseBodyDataEdges &) = default ;
    GetWorkflowExecutionDAGResponseBodyDataEdges(GetWorkflowExecutionDAGResponseBodyDataEdges &&) = default ;
    GetWorkflowExecutionDAGResponseBodyDataEdges(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetWorkflowExecutionDAGResponseBodyDataEdges() = default ;
    GetWorkflowExecutionDAGResponseBodyDataEdges& operator=(const GetWorkflowExecutionDAGResponseBodyDataEdges &) = default ;
    GetWorkflowExecutionDAGResponseBodyDataEdges& operator=(GetWorkflowExecutionDAGResponseBodyDataEdges &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->source_ == nullptr
        && return this->target_ == nullptr; };
    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string source() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline GetWorkflowExecutionDAGResponseBodyDataEdges& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // target Field Functions 
    bool hasTarget() const { return this->target_ != nullptr;};
    void deleteTarget() { this->target_ = nullptr;};
    inline string target() const { DARABONBA_PTR_GET_DEFAULT(target_, "") };
    inline GetWorkflowExecutionDAGResponseBodyDataEdges& setTarget(string target) { DARABONBA_PTR_SET_VALUE(target_, target) };


  protected:
    std::shared_ptr<string> source_ = nullptr;
    std::shared_ptr<string> target_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SchedulerX320240624
#endif
