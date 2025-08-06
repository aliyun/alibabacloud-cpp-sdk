// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESNAPSHOTMONITORDATARESPONSEBODYMONITORDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESNAPSHOTMONITORDATARESPONSEBODYMONITORDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeSnapshotMonitorDataResponseBodyMonitorDataDataPoint.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeSnapshotMonitorDataResponseBodyMonitorData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSnapshotMonitorDataResponseBodyMonitorData& obj) { 
      DARABONBA_PTR_TO_JSON(DataPoint, dataPoint_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSnapshotMonitorDataResponseBodyMonitorData& obj) { 
      DARABONBA_PTR_FROM_JSON(DataPoint, dataPoint_);
    };
    DescribeSnapshotMonitorDataResponseBodyMonitorData() = default ;
    DescribeSnapshotMonitorDataResponseBodyMonitorData(const DescribeSnapshotMonitorDataResponseBodyMonitorData &) = default ;
    DescribeSnapshotMonitorDataResponseBodyMonitorData(DescribeSnapshotMonitorDataResponseBodyMonitorData &&) = default ;
    DescribeSnapshotMonitorDataResponseBodyMonitorData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSnapshotMonitorDataResponseBodyMonitorData() = default ;
    DescribeSnapshotMonitorDataResponseBodyMonitorData& operator=(const DescribeSnapshotMonitorDataResponseBodyMonitorData &) = default ;
    DescribeSnapshotMonitorDataResponseBodyMonitorData& operator=(DescribeSnapshotMonitorDataResponseBodyMonitorData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dataPoint_ != nullptr; };
    // dataPoint Field Functions 
    bool hasDataPoint() const { return this->dataPoint_ != nullptr;};
    void deleteDataPoint() { this->dataPoint_ = nullptr;};
    inline const vector<Models::DescribeSnapshotMonitorDataResponseBodyMonitorDataDataPoint> & dataPoint() const { DARABONBA_PTR_GET_CONST(dataPoint_, vector<Models::DescribeSnapshotMonitorDataResponseBodyMonitorDataDataPoint>) };
    inline vector<Models::DescribeSnapshotMonitorDataResponseBodyMonitorDataDataPoint> dataPoint() { DARABONBA_PTR_GET(dataPoint_, vector<Models::DescribeSnapshotMonitorDataResponseBodyMonitorDataDataPoint>) };
    inline DescribeSnapshotMonitorDataResponseBodyMonitorData& setDataPoint(const vector<Models::DescribeSnapshotMonitorDataResponseBodyMonitorDataDataPoint> & dataPoint) { DARABONBA_PTR_SET_VALUE(dataPoint_, dataPoint) };
    inline DescribeSnapshotMonitorDataResponseBodyMonitorData& setDataPoint(vector<Models::DescribeSnapshotMonitorDataResponseBodyMonitorDataDataPoint> && dataPoint) { DARABONBA_PTR_SET_RVALUE(dataPoint_, dataPoint) };


  protected:
    std::shared_ptr<vector<Models::DescribeSnapshotMonitorDataResponseBodyMonitorDataDataPoint>> dataPoint_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
