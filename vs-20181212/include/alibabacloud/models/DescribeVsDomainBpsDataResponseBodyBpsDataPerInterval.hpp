// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVSDOMAINBPSDATARESPONSEBODYBPSDATAPERINTERVAL_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVSDOMAINBPSDATARESPONSEBODYBPSDATAPERINTERVAL_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeVsDomainBpsDataResponseBodyBpsDataPerIntervalDataModule.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class DescribeVsDomainBpsDataResponseBodyBpsDataPerInterval : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVsDomainBpsDataResponseBodyBpsDataPerInterval& obj) { 
      DARABONBA_PTR_TO_JSON(DataModule, dataModule_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVsDomainBpsDataResponseBodyBpsDataPerInterval& obj) { 
      DARABONBA_PTR_FROM_JSON(DataModule, dataModule_);
    };
    DescribeVsDomainBpsDataResponseBodyBpsDataPerInterval() = default ;
    DescribeVsDomainBpsDataResponseBodyBpsDataPerInterval(const DescribeVsDomainBpsDataResponseBodyBpsDataPerInterval &) = default ;
    DescribeVsDomainBpsDataResponseBodyBpsDataPerInterval(DescribeVsDomainBpsDataResponseBodyBpsDataPerInterval &&) = default ;
    DescribeVsDomainBpsDataResponseBodyBpsDataPerInterval(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVsDomainBpsDataResponseBodyBpsDataPerInterval() = default ;
    DescribeVsDomainBpsDataResponseBodyBpsDataPerInterval& operator=(const DescribeVsDomainBpsDataResponseBodyBpsDataPerInterval &) = default ;
    DescribeVsDomainBpsDataResponseBodyBpsDataPerInterval& operator=(DescribeVsDomainBpsDataResponseBodyBpsDataPerInterval &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dataModule_ != nullptr; };
    // dataModule Field Functions 
    bool hasDataModule() const { return this->dataModule_ != nullptr;};
    void deleteDataModule() { this->dataModule_ = nullptr;};
    inline const vector<Models::DescribeVsDomainBpsDataResponseBodyBpsDataPerIntervalDataModule> & dataModule() const { DARABONBA_PTR_GET_CONST(dataModule_, vector<Models::DescribeVsDomainBpsDataResponseBodyBpsDataPerIntervalDataModule>) };
    inline vector<Models::DescribeVsDomainBpsDataResponseBodyBpsDataPerIntervalDataModule> dataModule() { DARABONBA_PTR_GET(dataModule_, vector<Models::DescribeVsDomainBpsDataResponseBodyBpsDataPerIntervalDataModule>) };
    inline DescribeVsDomainBpsDataResponseBodyBpsDataPerInterval& setDataModule(const vector<Models::DescribeVsDomainBpsDataResponseBodyBpsDataPerIntervalDataModule> & dataModule) { DARABONBA_PTR_SET_VALUE(dataModule_, dataModule) };
    inline DescribeVsDomainBpsDataResponseBodyBpsDataPerInterval& setDataModule(vector<Models::DescribeVsDomainBpsDataResponseBodyBpsDataPerIntervalDataModule> && dataModule) { DARABONBA_PTR_SET_RVALUE(dataModule_, dataModule) };


  protected:
    std::shared_ptr<vector<Models::DescribeVsDomainBpsDataResponseBodyBpsDataPerIntervalDataModule>> dataModule_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
