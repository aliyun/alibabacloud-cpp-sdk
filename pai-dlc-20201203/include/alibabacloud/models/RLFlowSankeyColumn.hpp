// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RLFLOWSANKEYCOLUMN_HPP_
#define ALIBABACLOUD_MODELS_RLFLOWSANKEYCOLUMN_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDlc20201203
{
namespace Models
{
  class RLFlowSankeyColumn : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RLFlowSankeyColumn& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(Label, label_);
    };
    friend void from_json(const Darabonba::Json& j, RLFlowSankeyColumn& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(Label, label_);
    };
    RLFlowSankeyColumn() = default ;
    RLFlowSankeyColumn(const RLFlowSankeyColumn &) = default ;
    RLFlowSankeyColumn(RLFlowSankeyColumn &&) = default ;
    RLFlowSankeyColumn(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RLFlowSankeyColumn() = default ;
    RLFlowSankeyColumn& operator=(const RLFlowSankeyColumn &) = default ;
    RLFlowSankeyColumn& operator=(RLFlowSankeyColumn &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->count_ == nullptr
        && this->key_ == nullptr && this->label_ == nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline RLFlowSankeyColumn& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline RLFlowSankeyColumn& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // label Field Functions 
    bool hasLabel() const { return this->label_ != nullptr;};
    void deleteLabel() { this->label_ = nullptr;};
    inline string getLabel() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
    inline RLFlowSankeyColumn& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


  protected:
    // The number of trajectories in the column. The value is monotonized: reaching a later stage implies having passed through all preceding stages.
    shared_ptr<int32_t> count_ {};
    // The column identifier. Valid values: gen, run, rollout, sampled, and trained.
    shared_ptr<string> key_ {};
    // The Chinese name of the column. Valid values: 轨迹生成, Agent 启动, Rollout 完成, 采样入批, and 完成训练.
    shared_ptr<string> label_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDlc20201203
#endif
