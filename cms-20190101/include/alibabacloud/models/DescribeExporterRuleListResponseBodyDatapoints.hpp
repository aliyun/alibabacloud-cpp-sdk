// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEXPORTERRULELISTRESPONSEBODYDATAPOINTS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEXPORTERRULELISTRESPONSEBODYDATAPOINTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeExporterRuleListResponseBodyDatapointsDatapoint.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeExporterRuleListResponseBodyDatapoints : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeExporterRuleListResponseBodyDatapoints& obj) { 
      DARABONBA_PTR_TO_JSON(Datapoint, datapoint_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeExporterRuleListResponseBodyDatapoints& obj) { 
      DARABONBA_PTR_FROM_JSON(Datapoint, datapoint_);
    };
    DescribeExporterRuleListResponseBodyDatapoints() = default ;
    DescribeExporterRuleListResponseBodyDatapoints(const DescribeExporterRuleListResponseBodyDatapoints &) = default ;
    DescribeExporterRuleListResponseBodyDatapoints(DescribeExporterRuleListResponseBodyDatapoints &&) = default ;
    DescribeExporterRuleListResponseBodyDatapoints(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeExporterRuleListResponseBodyDatapoints() = default ;
    DescribeExporterRuleListResponseBodyDatapoints& operator=(const DescribeExporterRuleListResponseBodyDatapoints &) = default ;
    DescribeExporterRuleListResponseBodyDatapoints& operator=(DescribeExporterRuleListResponseBodyDatapoints &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->datapoint_ != nullptr; };
    // datapoint Field Functions 
    bool hasDatapoint() const { return this->datapoint_ != nullptr;};
    void deleteDatapoint() { this->datapoint_ = nullptr;};
    inline const vector<Models::DescribeExporterRuleListResponseBodyDatapointsDatapoint> & datapoint() const { DARABONBA_PTR_GET_CONST(datapoint_, vector<Models::DescribeExporterRuleListResponseBodyDatapointsDatapoint>) };
    inline vector<Models::DescribeExporterRuleListResponseBodyDatapointsDatapoint> datapoint() { DARABONBA_PTR_GET(datapoint_, vector<Models::DescribeExporterRuleListResponseBodyDatapointsDatapoint>) };
    inline DescribeExporterRuleListResponseBodyDatapoints& setDatapoint(const vector<Models::DescribeExporterRuleListResponseBodyDatapointsDatapoint> & datapoint) { DARABONBA_PTR_SET_VALUE(datapoint_, datapoint) };
    inline DescribeExporterRuleListResponseBodyDatapoints& setDatapoint(vector<Models::DescribeExporterRuleListResponseBodyDatapointsDatapoint> && datapoint) { DARABONBA_PTR_SET_RVALUE(datapoint_, datapoint) };


  protected:
    std::shared_ptr<vector<Models::DescribeExporterRuleListResponseBodyDatapointsDatapoint>> datapoint_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
