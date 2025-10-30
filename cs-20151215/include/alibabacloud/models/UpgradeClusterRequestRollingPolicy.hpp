// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPGRADECLUSTERREQUESTROLLINGPOLICY_HPP_
#define ALIBABACLOUD_MODELS_UPGRADECLUSTERREQUESTROLLINGPOLICY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class UpgradeClusterRequestRollingPolicy : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpgradeClusterRequestRollingPolicy& obj) { 
      DARABONBA_PTR_TO_JSON(max_parallelism, maxParallelism_);
    };
    friend void from_json(const Darabonba::Json& j, UpgradeClusterRequestRollingPolicy& obj) { 
      DARABONBA_PTR_FROM_JSON(max_parallelism, maxParallelism_);
    };
    UpgradeClusterRequestRollingPolicy() = default ;
    UpgradeClusterRequestRollingPolicy(const UpgradeClusterRequestRollingPolicy &) = default ;
    UpgradeClusterRequestRollingPolicy(UpgradeClusterRequestRollingPolicy &&) = default ;
    UpgradeClusterRequestRollingPolicy(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpgradeClusterRequestRollingPolicy() = default ;
    UpgradeClusterRequestRollingPolicy& operator=(const UpgradeClusterRequestRollingPolicy &) = default ;
    UpgradeClusterRequestRollingPolicy& operator=(UpgradeClusterRequestRollingPolicy &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->maxParallelism_ == nullptr; };
    // maxParallelism Field Functions 
    bool hasMaxParallelism() const { return this->maxParallelism_ != nullptr;};
    void deleteMaxParallelism() { this->maxParallelism_ = nullptr;};
    inline int32_t maxParallelism() const { DARABONBA_PTR_GET_DEFAULT(maxParallelism_, 0) };
    inline UpgradeClusterRequestRollingPolicy& setMaxParallelism(int32_t maxParallelism) { DARABONBA_PTR_SET_VALUE(maxParallelism_, maxParallelism) };


  protected:
    // The maximum number of nodes concurrently upgraded per batch.
    std::shared_ptr<int32_t> maxParallelism_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
