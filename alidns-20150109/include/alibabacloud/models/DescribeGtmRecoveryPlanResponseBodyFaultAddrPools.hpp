// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEGTMRECOVERYPLANRESPONSEBODYFAULTADDRPOOLS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEGTMRECOVERYPLANRESPONSEBODYFAULTADDRPOOLS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeGtmRecoveryPlanResponseBodyFaultAddrPoolsFaultAddrPool.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeGtmRecoveryPlanResponseBodyFaultAddrPools : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeGtmRecoveryPlanResponseBodyFaultAddrPools& obj) { 
      DARABONBA_PTR_TO_JSON(FaultAddrPool, faultAddrPool_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeGtmRecoveryPlanResponseBodyFaultAddrPools& obj) { 
      DARABONBA_PTR_FROM_JSON(FaultAddrPool, faultAddrPool_);
    };
    DescribeGtmRecoveryPlanResponseBodyFaultAddrPools() = default ;
    DescribeGtmRecoveryPlanResponseBodyFaultAddrPools(const DescribeGtmRecoveryPlanResponseBodyFaultAddrPools &) = default ;
    DescribeGtmRecoveryPlanResponseBodyFaultAddrPools(DescribeGtmRecoveryPlanResponseBodyFaultAddrPools &&) = default ;
    DescribeGtmRecoveryPlanResponseBodyFaultAddrPools(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeGtmRecoveryPlanResponseBodyFaultAddrPools() = default ;
    DescribeGtmRecoveryPlanResponseBodyFaultAddrPools& operator=(const DescribeGtmRecoveryPlanResponseBodyFaultAddrPools &) = default ;
    DescribeGtmRecoveryPlanResponseBodyFaultAddrPools& operator=(DescribeGtmRecoveryPlanResponseBodyFaultAddrPools &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->faultAddrPool_ == nullptr; };
    // faultAddrPool Field Functions 
    bool hasFaultAddrPool() const { return this->faultAddrPool_ != nullptr;};
    void deleteFaultAddrPool() { this->faultAddrPool_ = nullptr;};
    inline const vector<Models::DescribeGtmRecoveryPlanResponseBodyFaultAddrPoolsFaultAddrPool> & faultAddrPool() const { DARABONBA_PTR_GET_CONST(faultAddrPool_, vector<Models::DescribeGtmRecoveryPlanResponseBodyFaultAddrPoolsFaultAddrPool>) };
    inline vector<Models::DescribeGtmRecoveryPlanResponseBodyFaultAddrPoolsFaultAddrPool> faultAddrPool() { DARABONBA_PTR_GET(faultAddrPool_, vector<Models::DescribeGtmRecoveryPlanResponseBodyFaultAddrPoolsFaultAddrPool>) };
    inline DescribeGtmRecoveryPlanResponseBodyFaultAddrPools& setFaultAddrPool(const vector<Models::DescribeGtmRecoveryPlanResponseBodyFaultAddrPoolsFaultAddrPool> & faultAddrPool) { DARABONBA_PTR_SET_VALUE(faultAddrPool_, faultAddrPool) };
    inline DescribeGtmRecoveryPlanResponseBodyFaultAddrPools& setFaultAddrPool(vector<Models::DescribeGtmRecoveryPlanResponseBodyFaultAddrPoolsFaultAddrPool> && faultAddrPool) { DARABONBA_PTR_SET_RVALUE(faultAddrPool_, faultAddrPool) };


  protected:
    std::shared_ptr<vector<Models::DescribeGtmRecoveryPlanResponseBodyFaultAddrPoolsFaultAddrPool>> faultAddrPool_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
