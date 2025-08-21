// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVSDOMAINREQTRAFFICDATARESPONSEBODYREQTRAFFICDATAPERINTERVAL_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVSDOMAINREQTRAFFICDATARESPONSEBODYREQTRAFFICDATAPERINTERVAL_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeVsDomainReqTrafficDataResponseBodyReqTrafficDataPerIntervalDataModule.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class DescribeVsDomainReqTrafficDataResponseBodyReqTrafficDataPerInterval : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVsDomainReqTrafficDataResponseBodyReqTrafficDataPerInterval& obj) { 
      DARABONBA_PTR_TO_JSON(DataModule, dataModule_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVsDomainReqTrafficDataResponseBodyReqTrafficDataPerInterval& obj) { 
      DARABONBA_PTR_FROM_JSON(DataModule, dataModule_);
    };
    DescribeVsDomainReqTrafficDataResponseBodyReqTrafficDataPerInterval() = default ;
    DescribeVsDomainReqTrafficDataResponseBodyReqTrafficDataPerInterval(const DescribeVsDomainReqTrafficDataResponseBodyReqTrafficDataPerInterval &) = default ;
    DescribeVsDomainReqTrafficDataResponseBodyReqTrafficDataPerInterval(DescribeVsDomainReqTrafficDataResponseBodyReqTrafficDataPerInterval &&) = default ;
    DescribeVsDomainReqTrafficDataResponseBodyReqTrafficDataPerInterval(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVsDomainReqTrafficDataResponseBodyReqTrafficDataPerInterval() = default ;
    DescribeVsDomainReqTrafficDataResponseBodyReqTrafficDataPerInterval& operator=(const DescribeVsDomainReqTrafficDataResponseBodyReqTrafficDataPerInterval &) = default ;
    DescribeVsDomainReqTrafficDataResponseBodyReqTrafficDataPerInterval& operator=(DescribeVsDomainReqTrafficDataResponseBodyReqTrafficDataPerInterval &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dataModule_ != nullptr; };
    // dataModule Field Functions 
    bool hasDataModule() const { return this->dataModule_ != nullptr;};
    void deleteDataModule() { this->dataModule_ = nullptr;};
    inline const vector<Models::DescribeVsDomainReqTrafficDataResponseBodyReqTrafficDataPerIntervalDataModule> & dataModule() const { DARABONBA_PTR_GET_CONST(dataModule_, vector<Models::DescribeVsDomainReqTrafficDataResponseBodyReqTrafficDataPerIntervalDataModule>) };
    inline vector<Models::DescribeVsDomainReqTrafficDataResponseBodyReqTrafficDataPerIntervalDataModule> dataModule() { DARABONBA_PTR_GET(dataModule_, vector<Models::DescribeVsDomainReqTrafficDataResponseBodyReqTrafficDataPerIntervalDataModule>) };
    inline DescribeVsDomainReqTrafficDataResponseBodyReqTrafficDataPerInterval& setDataModule(const vector<Models::DescribeVsDomainReqTrafficDataResponseBodyReqTrafficDataPerIntervalDataModule> & dataModule) { DARABONBA_PTR_SET_VALUE(dataModule_, dataModule) };
    inline DescribeVsDomainReqTrafficDataResponseBodyReqTrafficDataPerInterval& setDataModule(vector<Models::DescribeVsDomainReqTrafficDataResponseBodyReqTrafficDataPerIntervalDataModule> && dataModule) { DARABONBA_PTR_SET_RVALUE(dataModule_, dataModule) };


  protected:
    std::shared_ptr<vector<Models::DescribeVsDomainReqTrafficDataResponseBodyReqTrafficDataPerIntervalDataModule>> dataModule_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
