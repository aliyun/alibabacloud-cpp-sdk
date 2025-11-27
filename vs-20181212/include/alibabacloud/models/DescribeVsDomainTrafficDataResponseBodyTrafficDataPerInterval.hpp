// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVSDOMAINTRAFFICDATARESPONSEBODYTRAFFICDATAPERINTERVAL_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVSDOMAINTRAFFICDATARESPONSEBODYTRAFFICDATAPERINTERVAL_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeVsDomainTrafficDataResponseBodyTrafficDataPerIntervalDataModule.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class DescribeVsDomainTrafficDataResponseBodyTrafficDataPerInterval : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVsDomainTrafficDataResponseBodyTrafficDataPerInterval& obj) { 
      DARABONBA_PTR_TO_JSON(DataModule, dataModule_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVsDomainTrafficDataResponseBodyTrafficDataPerInterval& obj) { 
      DARABONBA_PTR_FROM_JSON(DataModule, dataModule_);
    };
    DescribeVsDomainTrafficDataResponseBodyTrafficDataPerInterval() = default ;
    DescribeVsDomainTrafficDataResponseBodyTrafficDataPerInterval(const DescribeVsDomainTrafficDataResponseBodyTrafficDataPerInterval &) = default ;
    DescribeVsDomainTrafficDataResponseBodyTrafficDataPerInterval(DescribeVsDomainTrafficDataResponseBodyTrafficDataPerInterval &&) = default ;
    DescribeVsDomainTrafficDataResponseBodyTrafficDataPerInterval(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVsDomainTrafficDataResponseBodyTrafficDataPerInterval() = default ;
    DescribeVsDomainTrafficDataResponseBodyTrafficDataPerInterval& operator=(const DescribeVsDomainTrafficDataResponseBodyTrafficDataPerInterval &) = default ;
    DescribeVsDomainTrafficDataResponseBodyTrafficDataPerInterval& operator=(DescribeVsDomainTrafficDataResponseBodyTrafficDataPerInterval &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dataModule_ == nullptr; };
    // dataModule Field Functions 
    bool hasDataModule() const { return this->dataModule_ != nullptr;};
    void deleteDataModule() { this->dataModule_ = nullptr;};
    inline const vector<Models::DescribeVsDomainTrafficDataResponseBodyTrafficDataPerIntervalDataModule> & dataModule() const { DARABONBA_PTR_GET_CONST(dataModule_, vector<Models::DescribeVsDomainTrafficDataResponseBodyTrafficDataPerIntervalDataModule>) };
    inline vector<Models::DescribeVsDomainTrafficDataResponseBodyTrafficDataPerIntervalDataModule> dataModule() { DARABONBA_PTR_GET(dataModule_, vector<Models::DescribeVsDomainTrafficDataResponseBodyTrafficDataPerIntervalDataModule>) };
    inline DescribeVsDomainTrafficDataResponseBodyTrafficDataPerInterval& setDataModule(const vector<Models::DescribeVsDomainTrafficDataResponseBodyTrafficDataPerIntervalDataModule> & dataModule) { DARABONBA_PTR_SET_VALUE(dataModule_, dataModule) };
    inline DescribeVsDomainTrafficDataResponseBodyTrafficDataPerInterval& setDataModule(vector<Models::DescribeVsDomainTrafficDataResponseBodyTrafficDataPerIntervalDataModule> && dataModule) { DARABONBA_PTR_SET_RVALUE(dataModule_, dataModule) };


  protected:
    std::shared_ptr<vector<Models::DescribeVsDomainTrafficDataResponseBodyTrafficDataPerIntervalDataModule>> dataModule_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
