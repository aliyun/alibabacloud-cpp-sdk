// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESERVICEMESHDETAILRESPONSEBODYSERVICEMESHSPECMESHCONFIGLOCALITYLB_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESERVICEMESHDETAILRESPONSEBODYSERVICEMESHSPECMESHCONFIGLOCALITYLB_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicemesh20200111
{
namespace Models
{
  class DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigLocalityLB : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigLocalityLB& obj) { 
      DARABONBA_ANY_TO_JSON(Distribute, distribute_);
      DARABONBA_PTR_TO_JSON(Enabled, enabled_);
      DARABONBA_ANY_TO_JSON(Failover, failover_);
      DARABONBA_ANY_TO_JSON(FailoverPriority, failoverPriority_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigLocalityLB& obj) { 
      DARABONBA_ANY_FROM_JSON(Distribute, distribute_);
      DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
      DARABONBA_ANY_FROM_JSON(Failover, failover_);
      DARABONBA_ANY_FROM_JSON(FailoverPriority, failoverPriority_);
    };
    DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigLocalityLB() = default ;
    DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigLocalityLB(const DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigLocalityLB &) = default ;
    DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigLocalityLB(DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigLocalityLB &&) = default ;
    DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigLocalityLB(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigLocalityLB() = default ;
    DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigLocalityLB& operator=(const DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigLocalityLB &) = default ;
    DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigLocalityLB& operator=(DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigLocalityLB &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->distribute_ == nullptr
        && return this->enabled_ == nullptr && return this->failover_ == nullptr && return this->failoverPriority_ == nullptr; };
    // distribute Field Functions 
    bool hasDistribute() const { return this->distribute_ != nullptr;};
    void deleteDistribute() { this->distribute_ = nullptr;};
    inline     const Darabonba::Json & distribute() const { DARABONBA_GET(distribute_) };
    Darabonba::Json & distribute() { DARABONBA_GET(distribute_) };
    inline DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigLocalityLB& setDistribute(const Darabonba::Json & distribute) { DARABONBA_SET_VALUE(distribute_, distribute) };
    inline DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigLocalityLB& setDistribute(Darabonba::Json & distribute) { DARABONBA_SET_RVALUE(distribute_, distribute) };


    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline bool enabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
    inline DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigLocalityLB& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    // failover Field Functions 
    bool hasFailover() const { return this->failover_ != nullptr;};
    void deleteFailover() { this->failover_ = nullptr;};
    inline     const Darabonba::Json & failover() const { DARABONBA_GET(failover_) };
    Darabonba::Json & failover() { DARABONBA_GET(failover_) };
    inline DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigLocalityLB& setFailover(const Darabonba::Json & failover) { DARABONBA_SET_VALUE(failover_, failover) };
    inline DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigLocalityLB& setFailover(Darabonba::Json & failover) { DARABONBA_SET_RVALUE(failover_, failover) };


    // failoverPriority Field Functions 
    bool hasFailoverPriority() const { return this->failoverPriority_ != nullptr;};
    void deleteFailoverPriority() { this->failoverPriority_ = nullptr;};
    inline     const Darabonba::Json & failoverPriority() const { DARABONBA_GET(failoverPriority_) };
    Darabonba::Json & failoverPriority() { DARABONBA_GET(failoverPriority_) };
    inline DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigLocalityLB& setFailoverPriority(const Darabonba::Json & failoverPriority) { DARABONBA_SET_VALUE(failoverPriority_, failoverPriority) };
    inline DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigLocalityLB& setFailoverPriority(Darabonba::Json & failoverPriority) { DARABONBA_SET_RVALUE(failoverPriority_, failoverPriority) };


  protected:
    // The configurations of cross-region traffic distribution.
    // 
    // >  Either `Failover` or Distribute can be set. If you set `Distribute`, you cannot set Failover.
    Darabonba::Json distribute_ = nullptr;
    // Indicates whether cross-region load balancing is enabled. Valid values:
    // 
    // *   `true`
    // *   `false`
    std::shared_ptr<bool> enabled_ = nullptr;
    // The configurations of cross-region failover.
    // 
    // >  Either Failover or `Distribute` can be set. If you set `Failover`, you cannot set `Distribute`.
    Darabonba::Json failover_ = nullptr;
    Darabonba::Json failoverPriority_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicemesh20200111
#endif
