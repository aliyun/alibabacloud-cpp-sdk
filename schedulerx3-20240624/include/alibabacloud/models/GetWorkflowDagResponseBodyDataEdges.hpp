// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETWORKFLOWDAGRESPONSEBODYDATAEDGES_HPP_
#define ALIBABACLOUD_MODELS_GETWORKFLOWDAGRESPONSEBODYDATAEDGES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SchedulerX320240624
{
namespace Models
{
  class GetWorkflowDAGResponseBodyDataEdges : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetWorkflowDAGResponseBodyDataEdges& obj) { 
      DARABONBA_PTR_TO_JSON(Source, source_);
      DARABONBA_PTR_TO_JSON(Target, target_);
    };
    friend void from_json(const Darabonba::Json& j, GetWorkflowDAGResponseBodyDataEdges& obj) { 
      DARABONBA_PTR_FROM_JSON(Source, source_);
      DARABONBA_PTR_FROM_JSON(Target, target_);
    };
    GetWorkflowDAGResponseBodyDataEdges() = default ;
    GetWorkflowDAGResponseBodyDataEdges(const GetWorkflowDAGResponseBodyDataEdges &) = default ;
    GetWorkflowDAGResponseBodyDataEdges(GetWorkflowDAGResponseBodyDataEdges &&) = default ;
    GetWorkflowDAGResponseBodyDataEdges(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetWorkflowDAGResponseBodyDataEdges() = default ;
    GetWorkflowDAGResponseBodyDataEdges& operator=(const GetWorkflowDAGResponseBodyDataEdges &) = default ;
    GetWorkflowDAGResponseBodyDataEdges& operator=(GetWorkflowDAGResponseBodyDataEdges &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->source_ == nullptr
        && return this->target_ == nullptr; };
    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline int64_t source() const { DARABONBA_PTR_GET_DEFAULT(source_, 0L) };
    inline GetWorkflowDAGResponseBodyDataEdges& setSource(int64_t source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // target Field Functions 
    bool hasTarget() const { return this->target_ != nullptr;};
    void deleteTarget() { this->target_ = nullptr;};
    inline int64_t target() const { DARABONBA_PTR_GET_DEFAULT(target_, 0L) };
    inline GetWorkflowDAGResponseBodyDataEdges& setTarget(int64_t target) { DARABONBA_PTR_SET_VALUE(target_, target) };


  protected:
    std::shared_ptr<int64_t> source_ = nullptr;
    std::shared_ptr<int64_t> target_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SchedulerX320240624
#endif
