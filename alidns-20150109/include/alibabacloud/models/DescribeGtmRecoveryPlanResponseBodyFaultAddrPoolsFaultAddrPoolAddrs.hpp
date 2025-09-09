// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEGTMRECOVERYPLANRESPONSEBODYFAULTADDRPOOLSFAULTADDRPOOLADDRS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEGTMRECOVERYPLANRESPONSEBODYFAULTADDRPOOLSFAULTADDRPOOLADDRS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeGtmRecoveryPlanResponseBodyFaultAddrPoolsFaultAddrPoolAddrsAddr.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeGtmRecoveryPlanResponseBodyFaultAddrPoolsFaultAddrPoolAddrs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeGtmRecoveryPlanResponseBodyFaultAddrPoolsFaultAddrPoolAddrs& obj) { 
      DARABONBA_PTR_TO_JSON(Addr, addr_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeGtmRecoveryPlanResponseBodyFaultAddrPoolsFaultAddrPoolAddrs& obj) { 
      DARABONBA_PTR_FROM_JSON(Addr, addr_);
    };
    DescribeGtmRecoveryPlanResponseBodyFaultAddrPoolsFaultAddrPoolAddrs() = default ;
    DescribeGtmRecoveryPlanResponseBodyFaultAddrPoolsFaultAddrPoolAddrs(const DescribeGtmRecoveryPlanResponseBodyFaultAddrPoolsFaultAddrPoolAddrs &) = default ;
    DescribeGtmRecoveryPlanResponseBodyFaultAddrPoolsFaultAddrPoolAddrs(DescribeGtmRecoveryPlanResponseBodyFaultAddrPoolsFaultAddrPoolAddrs &&) = default ;
    DescribeGtmRecoveryPlanResponseBodyFaultAddrPoolsFaultAddrPoolAddrs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeGtmRecoveryPlanResponseBodyFaultAddrPoolsFaultAddrPoolAddrs() = default ;
    DescribeGtmRecoveryPlanResponseBodyFaultAddrPoolsFaultAddrPoolAddrs& operator=(const DescribeGtmRecoveryPlanResponseBodyFaultAddrPoolsFaultAddrPoolAddrs &) = default ;
    DescribeGtmRecoveryPlanResponseBodyFaultAddrPoolsFaultAddrPoolAddrs& operator=(DescribeGtmRecoveryPlanResponseBodyFaultAddrPoolsFaultAddrPoolAddrs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->addr_ != nullptr; };
    // addr Field Functions 
    bool hasAddr() const { return this->addr_ != nullptr;};
    void deleteAddr() { this->addr_ = nullptr;};
    inline const vector<Models::DescribeGtmRecoveryPlanResponseBodyFaultAddrPoolsFaultAddrPoolAddrsAddr> & addr() const { DARABONBA_PTR_GET_CONST(addr_, vector<Models::DescribeGtmRecoveryPlanResponseBodyFaultAddrPoolsFaultAddrPoolAddrsAddr>) };
    inline vector<Models::DescribeGtmRecoveryPlanResponseBodyFaultAddrPoolsFaultAddrPoolAddrsAddr> addr() { DARABONBA_PTR_GET(addr_, vector<Models::DescribeGtmRecoveryPlanResponseBodyFaultAddrPoolsFaultAddrPoolAddrsAddr>) };
    inline DescribeGtmRecoveryPlanResponseBodyFaultAddrPoolsFaultAddrPoolAddrs& setAddr(const vector<Models::DescribeGtmRecoveryPlanResponseBodyFaultAddrPoolsFaultAddrPoolAddrsAddr> & addr) { DARABONBA_PTR_SET_VALUE(addr_, addr) };
    inline DescribeGtmRecoveryPlanResponseBodyFaultAddrPoolsFaultAddrPoolAddrs& setAddr(vector<Models::DescribeGtmRecoveryPlanResponseBodyFaultAddrPoolsFaultAddrPoolAddrsAddr> && addr) { DARABONBA_PTR_SET_RVALUE(addr_, addr) };


  protected:
    std::shared_ptr<vector<Models::DescribeGtmRecoveryPlanResponseBodyFaultAddrPoolsFaultAddrPoolAddrsAddr>> addr_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
