// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STACKDETAILRESULT_HPP_
#define ALIBABACLOUD_MODELS_STACKDETAILRESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/StackInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class StackDetailResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StackDetailResult& obj) { 
      DARABONBA_PTR_TO_JSON(stacks, stacks_);
    };
    friend void from_json(const Darabonba::Json& j, StackDetailResult& obj) { 
      DARABONBA_PTR_FROM_JSON(stacks, stacks_);
    };
    StackDetailResult() = default ;
    StackDetailResult(const StackDetailResult &) = default ;
    StackDetailResult(StackDetailResult &&) = default ;
    StackDetailResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StackDetailResult() = default ;
    StackDetailResult& operator=(const StackDetailResult &) = default ;
    StackDetailResult& operator=(StackDetailResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->stacks_ == nullptr; };
    // stacks Field Functions 
    bool hasStacks() const { return this->stacks_ != nullptr;};
    void deleteStacks() { this->stacks_ = nullptr;};
    inline const vector<StackInfo> & getStacks() const { DARABONBA_PTR_GET_CONST(stacks_, vector<StackInfo>) };
    inline vector<StackInfo> getStacks() { DARABONBA_PTR_GET(stacks_, vector<StackInfo>) };
    inline StackDetailResult& setStacks(const vector<StackInfo> & stacks) { DARABONBA_PTR_SET_VALUE(stacks_, stacks) };
    inline StackDetailResult& setStacks(vector<StackInfo> && stacks) { DARABONBA_PTR_SET_RVALUE(stacks_, stacks) };


  protected:
    shared_ptr<vector<StackInfo>> stacks_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
