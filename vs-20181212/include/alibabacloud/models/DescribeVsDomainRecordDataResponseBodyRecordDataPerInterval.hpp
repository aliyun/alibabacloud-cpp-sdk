// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVSDOMAINRECORDDATARESPONSEBODYRECORDDATAPERINTERVAL_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVSDOMAINRECORDDATARESPONSEBODYRECORDDATAPERINTERVAL_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeVsDomainRecordDataResponseBodyRecordDataPerIntervalDataModule.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class DescribeVsDomainRecordDataResponseBodyRecordDataPerInterval : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVsDomainRecordDataResponseBodyRecordDataPerInterval& obj) { 
      DARABONBA_PTR_TO_JSON(DataModule, dataModule_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVsDomainRecordDataResponseBodyRecordDataPerInterval& obj) { 
      DARABONBA_PTR_FROM_JSON(DataModule, dataModule_);
    };
    DescribeVsDomainRecordDataResponseBodyRecordDataPerInterval() = default ;
    DescribeVsDomainRecordDataResponseBodyRecordDataPerInterval(const DescribeVsDomainRecordDataResponseBodyRecordDataPerInterval &) = default ;
    DescribeVsDomainRecordDataResponseBodyRecordDataPerInterval(DescribeVsDomainRecordDataResponseBodyRecordDataPerInterval &&) = default ;
    DescribeVsDomainRecordDataResponseBodyRecordDataPerInterval(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVsDomainRecordDataResponseBodyRecordDataPerInterval() = default ;
    DescribeVsDomainRecordDataResponseBodyRecordDataPerInterval& operator=(const DescribeVsDomainRecordDataResponseBodyRecordDataPerInterval &) = default ;
    DescribeVsDomainRecordDataResponseBodyRecordDataPerInterval& operator=(DescribeVsDomainRecordDataResponseBodyRecordDataPerInterval &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dataModule_ != nullptr; };
    // dataModule Field Functions 
    bool hasDataModule() const { return this->dataModule_ != nullptr;};
    void deleteDataModule() { this->dataModule_ = nullptr;};
    inline const vector<Models::DescribeVsDomainRecordDataResponseBodyRecordDataPerIntervalDataModule> & dataModule() const { DARABONBA_PTR_GET_CONST(dataModule_, vector<Models::DescribeVsDomainRecordDataResponseBodyRecordDataPerIntervalDataModule>) };
    inline vector<Models::DescribeVsDomainRecordDataResponseBodyRecordDataPerIntervalDataModule> dataModule() { DARABONBA_PTR_GET(dataModule_, vector<Models::DescribeVsDomainRecordDataResponseBodyRecordDataPerIntervalDataModule>) };
    inline DescribeVsDomainRecordDataResponseBodyRecordDataPerInterval& setDataModule(const vector<Models::DescribeVsDomainRecordDataResponseBodyRecordDataPerIntervalDataModule> & dataModule) { DARABONBA_PTR_SET_VALUE(dataModule_, dataModule) };
    inline DescribeVsDomainRecordDataResponseBodyRecordDataPerInterval& setDataModule(vector<Models::DescribeVsDomainRecordDataResponseBodyRecordDataPerIntervalDataModule> && dataModule) { DARABONBA_PTR_SET_RVALUE(dataModule_, dataModule) };


  protected:
    std::shared_ptr<vector<Models::DescribeVsDomainRecordDataResponseBodyRecordDataPerIntervalDataModule>> dataModule_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
