// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RLFLOWSANKEYEXIT_HPP_
#define ALIBABACLOUD_MODELS_RLFLOWSANKEYEXIT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDlc20201203
{
namespace Models
{
  class RLFlowSankeyExit : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RLFlowSankeyExit& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(From, from_);
      DARABONBA_PTR_TO_JSON(FromIdx, fromIdx_);
      DARABONBA_PTR_TO_JSON(Label, label_);
    };
    friend void from_json(const Darabonba::Json& j, RLFlowSankeyExit& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(From, from_);
      DARABONBA_PTR_FROM_JSON(FromIdx, fromIdx_);
      DARABONBA_PTR_FROM_JSON(Label, label_);
    };
    RLFlowSankeyExit() = default ;
    RLFlowSankeyExit(const RLFlowSankeyExit &) = default ;
    RLFlowSankeyExit(RLFlowSankeyExit &&) = default ;
    RLFlowSankeyExit(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RLFlowSankeyExit() = default ;
    RLFlowSankeyExit& operator=(const RLFlowSankeyExit &) = default ;
    RLFlowSankeyExit& operator=(RLFlowSankeyExit &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->count_ == nullptr
        && this->from_ == nullptr && this->fromIdx_ == nullptr && this->label_ == nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline RLFlowSankeyExit& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // from Field Functions 
    bool hasFrom() const { return this->from_ != nullptr;};
    void deleteFrom() { this->from_ = nullptr;};
    inline string getFrom() const { DARABONBA_PTR_GET_DEFAULT(from_, "") };
    inline RLFlowSankeyExit& setFrom(string from) { DARABONBA_PTR_SET_VALUE(from_, from) };


    // fromIdx Field Functions 
    bool hasFromIdx() const { return this->fromIdx_ != nullptr;};
    void deleteFromIdx() { this->fromIdx_ = nullptr;};
    inline int32_t getFromIdx() const { DARABONBA_PTR_GET_DEFAULT(fromIdx_, 0) };
    inline RLFlowSankeyExit& setFromIdx(int32_t fromIdx) { DARABONBA_PTR_SET_VALUE(fromIdx_, fromIdx) };


    // label Field Functions 
    bool hasLabel() const { return this->label_ != nullptr;};
    void deleteLabel() { this->label_ = nullptr;};
    inline string getLabel() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
    inline RLFlowSankeyExit& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


  protected:
    // The number of trajectories on the outflow edge.
    shared_ptr<int32_t> count_ {};
    // The key of the outflow source column.
    shared_ptr<string> from_ {};
    // The index of the outflow source column (0-based).
    shared_ptr<int32_t> fromIdx_ {};
    // The Chinese name of the outflow destination. Valid values vary by the column where the outflow is located: 在途·未下发 / 在途·生成中 / 在途·待采样 / 在途·待训练.
    shared_ptr<string> label_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDlc20201203
#endif
