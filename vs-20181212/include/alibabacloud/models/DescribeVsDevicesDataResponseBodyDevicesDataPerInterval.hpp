// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVSDEVICESDATARESPONSEBODYDEVICESDATAPERINTERVAL_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVSDEVICESDATARESPONSEBODYDEVICESDATAPERINTERVAL_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeVsDevicesDataResponseBodyDevicesDataPerIntervalDataModule.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class DescribeVsDevicesDataResponseBodyDevicesDataPerInterval : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVsDevicesDataResponseBodyDevicesDataPerInterval& obj) { 
      DARABONBA_PTR_TO_JSON(DataModule, dataModule_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVsDevicesDataResponseBodyDevicesDataPerInterval& obj) { 
      DARABONBA_PTR_FROM_JSON(DataModule, dataModule_);
    };
    DescribeVsDevicesDataResponseBodyDevicesDataPerInterval() = default ;
    DescribeVsDevicesDataResponseBodyDevicesDataPerInterval(const DescribeVsDevicesDataResponseBodyDevicesDataPerInterval &) = default ;
    DescribeVsDevicesDataResponseBodyDevicesDataPerInterval(DescribeVsDevicesDataResponseBodyDevicesDataPerInterval &&) = default ;
    DescribeVsDevicesDataResponseBodyDevicesDataPerInterval(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVsDevicesDataResponseBodyDevicesDataPerInterval() = default ;
    DescribeVsDevicesDataResponseBodyDevicesDataPerInterval& operator=(const DescribeVsDevicesDataResponseBodyDevicesDataPerInterval &) = default ;
    DescribeVsDevicesDataResponseBodyDevicesDataPerInterval& operator=(DescribeVsDevicesDataResponseBodyDevicesDataPerInterval &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dataModule_ == nullptr; };
    // dataModule Field Functions 
    bool hasDataModule() const { return this->dataModule_ != nullptr;};
    void deleteDataModule() { this->dataModule_ = nullptr;};
    inline const vector<Models::DescribeVsDevicesDataResponseBodyDevicesDataPerIntervalDataModule> & dataModule() const { DARABONBA_PTR_GET_CONST(dataModule_, vector<Models::DescribeVsDevicesDataResponseBodyDevicesDataPerIntervalDataModule>) };
    inline vector<Models::DescribeVsDevicesDataResponseBodyDevicesDataPerIntervalDataModule> dataModule() { DARABONBA_PTR_GET(dataModule_, vector<Models::DescribeVsDevicesDataResponseBodyDevicesDataPerIntervalDataModule>) };
    inline DescribeVsDevicesDataResponseBodyDevicesDataPerInterval& setDataModule(const vector<Models::DescribeVsDevicesDataResponseBodyDevicesDataPerIntervalDataModule> & dataModule) { DARABONBA_PTR_SET_VALUE(dataModule_, dataModule) };
    inline DescribeVsDevicesDataResponseBodyDevicesDataPerInterval& setDataModule(vector<Models::DescribeVsDevicesDataResponseBodyDevicesDataPerIntervalDataModule> && dataModule) { DARABONBA_PTR_SET_RVALUE(dataModule_, dataModule) };


  protected:
    std::shared_ptr<vector<Models::DescribeVsDevicesDataResponseBodyDevicesDataPerIntervalDataModule>> dataModule_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
