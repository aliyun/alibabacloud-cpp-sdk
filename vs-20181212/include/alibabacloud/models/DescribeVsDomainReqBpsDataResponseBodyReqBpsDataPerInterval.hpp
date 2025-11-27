// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVSDOMAINREQBPSDATARESPONSEBODYREQBPSDATAPERINTERVAL_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVSDOMAINREQBPSDATARESPONSEBODYREQBPSDATAPERINTERVAL_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeVsDomainReqBpsDataResponseBodyReqBpsDataPerIntervalDataModule.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class DescribeVsDomainReqBpsDataResponseBodyReqBpsDataPerInterval : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVsDomainReqBpsDataResponseBodyReqBpsDataPerInterval& obj) { 
      DARABONBA_PTR_TO_JSON(DataModule, dataModule_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVsDomainReqBpsDataResponseBodyReqBpsDataPerInterval& obj) { 
      DARABONBA_PTR_FROM_JSON(DataModule, dataModule_);
    };
    DescribeVsDomainReqBpsDataResponseBodyReqBpsDataPerInterval() = default ;
    DescribeVsDomainReqBpsDataResponseBodyReqBpsDataPerInterval(const DescribeVsDomainReqBpsDataResponseBodyReqBpsDataPerInterval &) = default ;
    DescribeVsDomainReqBpsDataResponseBodyReqBpsDataPerInterval(DescribeVsDomainReqBpsDataResponseBodyReqBpsDataPerInterval &&) = default ;
    DescribeVsDomainReqBpsDataResponseBodyReqBpsDataPerInterval(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVsDomainReqBpsDataResponseBodyReqBpsDataPerInterval() = default ;
    DescribeVsDomainReqBpsDataResponseBodyReqBpsDataPerInterval& operator=(const DescribeVsDomainReqBpsDataResponseBodyReqBpsDataPerInterval &) = default ;
    DescribeVsDomainReqBpsDataResponseBodyReqBpsDataPerInterval& operator=(DescribeVsDomainReqBpsDataResponseBodyReqBpsDataPerInterval &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dataModule_ == nullptr; };
    // dataModule Field Functions 
    bool hasDataModule() const { return this->dataModule_ != nullptr;};
    void deleteDataModule() { this->dataModule_ = nullptr;};
    inline const vector<Models::DescribeVsDomainReqBpsDataResponseBodyReqBpsDataPerIntervalDataModule> & dataModule() const { DARABONBA_PTR_GET_CONST(dataModule_, vector<Models::DescribeVsDomainReqBpsDataResponseBodyReqBpsDataPerIntervalDataModule>) };
    inline vector<Models::DescribeVsDomainReqBpsDataResponseBodyReqBpsDataPerIntervalDataModule> dataModule() { DARABONBA_PTR_GET(dataModule_, vector<Models::DescribeVsDomainReqBpsDataResponseBodyReqBpsDataPerIntervalDataModule>) };
    inline DescribeVsDomainReqBpsDataResponseBodyReqBpsDataPerInterval& setDataModule(const vector<Models::DescribeVsDomainReqBpsDataResponseBodyReqBpsDataPerIntervalDataModule> & dataModule) { DARABONBA_PTR_SET_VALUE(dataModule_, dataModule) };
    inline DescribeVsDomainReqBpsDataResponseBodyReqBpsDataPerInterval& setDataModule(vector<Models::DescribeVsDomainReqBpsDataResponseBodyReqBpsDataPerIntervalDataModule> && dataModule) { DARABONBA_PTR_SET_RVALUE(dataModule_, dataModule) };


  protected:
    std::shared_ptr<vector<Models::DescribeVsDomainReqBpsDataResponseBodyReqBpsDataPerIntervalDataModule>> dataModule_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
