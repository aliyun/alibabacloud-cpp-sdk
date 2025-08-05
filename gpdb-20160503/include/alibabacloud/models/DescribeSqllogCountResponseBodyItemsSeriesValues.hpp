// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESQLLOGCOUNTRESPONSEBODYITEMSSERIESVALUES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESQLLOGCOUNTRESPONSEBODYITEMSSERIESVALUES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class DescribeSQLLogCountResponseBodyItemsSeriesValues : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSQLLogCountResponseBodyItemsSeriesValues& obj) { 
      DARABONBA_PTR_TO_JSON(Point, point_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSQLLogCountResponseBodyItemsSeriesValues& obj) { 
      DARABONBA_PTR_FROM_JSON(Point, point_);
    };
    DescribeSQLLogCountResponseBodyItemsSeriesValues() = default ;
    DescribeSQLLogCountResponseBodyItemsSeriesValues(const DescribeSQLLogCountResponseBodyItemsSeriesValues &) = default ;
    DescribeSQLLogCountResponseBodyItemsSeriesValues(DescribeSQLLogCountResponseBodyItemsSeriesValues &&) = default ;
    DescribeSQLLogCountResponseBodyItemsSeriesValues(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSQLLogCountResponseBodyItemsSeriesValues() = default ;
    DescribeSQLLogCountResponseBodyItemsSeriesValues& operator=(const DescribeSQLLogCountResponseBodyItemsSeriesValues &) = default ;
    DescribeSQLLogCountResponseBodyItemsSeriesValues& operator=(DescribeSQLLogCountResponseBodyItemsSeriesValues &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->point_ != nullptr; };
    // point Field Functions 
    bool hasPoint() const { return this->point_ != nullptr;};
    void deletePoint() { this->point_ = nullptr;};
    inline const vector<string> & point() const { DARABONBA_PTR_GET_CONST(point_, vector<string>) };
    inline vector<string> point() { DARABONBA_PTR_GET(point_, vector<string>) };
    inline DescribeSQLLogCountResponseBodyItemsSeriesValues& setPoint(const vector<string> & point) { DARABONBA_PTR_SET_VALUE(point_, point) };
    inline DescribeSQLLogCountResponseBodyItemsSeriesValues& setPoint(vector<string> && point) { DARABONBA_PTR_SET_RVALUE(point_, point) };


  protected:
    // The time when the audit logs were generated and the number of the audit logs.
    std::shared_ptr<vector<string>> point_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
