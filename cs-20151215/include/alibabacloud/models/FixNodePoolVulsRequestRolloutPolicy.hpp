// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FIXNODEPOOLVULSREQUESTROLLOUTPOLICY_HPP_
#define ALIBABACLOUD_MODELS_FIXNODEPOOLVULSREQUESTROLLOUTPOLICY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class FixNodePoolVulsRequestRolloutPolicy : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FixNodePoolVulsRequestRolloutPolicy& obj) { 
      DARABONBA_PTR_TO_JSON(max_parallelism, maxParallelism_);
    };
    friend void from_json(const Darabonba::Json& j, FixNodePoolVulsRequestRolloutPolicy& obj) { 
      DARABONBA_PTR_FROM_JSON(max_parallelism, maxParallelism_);
    };
    FixNodePoolVulsRequestRolloutPolicy() = default ;
    FixNodePoolVulsRequestRolloutPolicy(const FixNodePoolVulsRequestRolloutPolicy &) = default ;
    FixNodePoolVulsRequestRolloutPolicy(FixNodePoolVulsRequestRolloutPolicy &&) = default ;
    FixNodePoolVulsRequestRolloutPolicy(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FixNodePoolVulsRequestRolloutPolicy() = default ;
    FixNodePoolVulsRequestRolloutPolicy& operator=(const FixNodePoolVulsRequestRolloutPolicy &) = default ;
    FixNodePoolVulsRequestRolloutPolicy& operator=(FixNodePoolVulsRequestRolloutPolicy &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->maxParallelism_ != nullptr; };
    // maxParallelism Field Functions 
    bool hasMaxParallelism() const { return this->maxParallelism_ != nullptr;};
    void deleteMaxParallelism() { this->maxParallelism_ = nullptr;};
    inline int64_t maxParallelism() const { DARABONBA_PTR_GET_DEFAULT(maxParallelism_, 0L) };
    inline FixNodePoolVulsRequestRolloutPolicy& setMaxParallelism(int64_t maxParallelism) { DARABONBA_PTR_SET_VALUE(maxParallelism_, maxParallelism) };


  protected:
    // The maximum concurrency for batch patching. Minimum value: 1. The maximum value equals the number of nodes in the node pool.
    std::shared_ptr<int64_t> maxParallelism_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
