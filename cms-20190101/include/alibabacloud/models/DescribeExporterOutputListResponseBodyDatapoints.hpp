// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEXPORTEROUTPUTLISTRESPONSEBODYDATAPOINTS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEXPORTEROUTPUTLISTRESPONSEBODYDATAPOINTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeExporterOutputListResponseBodyDatapointsDatapoint.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeExporterOutputListResponseBodyDatapoints : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeExporterOutputListResponseBodyDatapoints& obj) { 
      DARABONBA_PTR_TO_JSON(Datapoint, datapoint_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeExporterOutputListResponseBodyDatapoints& obj) { 
      DARABONBA_PTR_FROM_JSON(Datapoint, datapoint_);
    };
    DescribeExporterOutputListResponseBodyDatapoints() = default ;
    DescribeExporterOutputListResponseBodyDatapoints(const DescribeExporterOutputListResponseBodyDatapoints &) = default ;
    DescribeExporterOutputListResponseBodyDatapoints(DescribeExporterOutputListResponseBodyDatapoints &&) = default ;
    DescribeExporterOutputListResponseBodyDatapoints(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeExporterOutputListResponseBodyDatapoints() = default ;
    DescribeExporterOutputListResponseBodyDatapoints& operator=(const DescribeExporterOutputListResponseBodyDatapoints &) = default ;
    DescribeExporterOutputListResponseBodyDatapoints& operator=(DescribeExporterOutputListResponseBodyDatapoints &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->datapoint_ == nullptr; };
    // datapoint Field Functions 
    bool hasDatapoint() const { return this->datapoint_ != nullptr;};
    void deleteDatapoint() { this->datapoint_ = nullptr;};
    inline const vector<Models::DescribeExporterOutputListResponseBodyDatapointsDatapoint> & datapoint() const { DARABONBA_PTR_GET_CONST(datapoint_, vector<Models::DescribeExporterOutputListResponseBodyDatapointsDatapoint>) };
    inline vector<Models::DescribeExporterOutputListResponseBodyDatapointsDatapoint> datapoint() { DARABONBA_PTR_GET(datapoint_, vector<Models::DescribeExporterOutputListResponseBodyDatapointsDatapoint>) };
    inline DescribeExporterOutputListResponseBodyDatapoints& setDatapoint(const vector<Models::DescribeExporterOutputListResponseBodyDatapointsDatapoint> & datapoint) { DARABONBA_PTR_SET_VALUE(datapoint_, datapoint) };
    inline DescribeExporterOutputListResponseBodyDatapoints& setDatapoint(vector<Models::DescribeExporterOutputListResponseBodyDatapointsDatapoint> && datapoint) { DARABONBA_PTR_SET_RVALUE(datapoint_, datapoint) };


  protected:
    std::shared_ptr<vector<Models::DescribeExporterOutputListResponseBodyDatapointsDatapoint>> datapoint_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
