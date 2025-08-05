// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESQLLOGCOUNTRESPONSEBODYITEMSSERIES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESQLLOGCOUNTRESPONSEBODYITEMSSERIES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeSQLLogCountResponseBodyItemsSeriesValues.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class DescribeSQLLogCountResponseBodyItemsSeries : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSQLLogCountResponseBodyItemsSeries& obj) { 
      DARABONBA_PTR_TO_JSON(Values, values_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSQLLogCountResponseBodyItemsSeries& obj) { 
      DARABONBA_PTR_FROM_JSON(Values, values_);
    };
    DescribeSQLLogCountResponseBodyItemsSeries() = default ;
    DescribeSQLLogCountResponseBodyItemsSeries(const DescribeSQLLogCountResponseBodyItemsSeries &) = default ;
    DescribeSQLLogCountResponseBodyItemsSeries(DescribeSQLLogCountResponseBodyItemsSeries &&) = default ;
    DescribeSQLLogCountResponseBodyItemsSeries(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSQLLogCountResponseBodyItemsSeries() = default ;
    DescribeSQLLogCountResponseBodyItemsSeries& operator=(const DescribeSQLLogCountResponseBodyItemsSeries &) = default ;
    DescribeSQLLogCountResponseBodyItemsSeries& operator=(DescribeSQLLogCountResponseBodyItemsSeries &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->values_ != nullptr; };
    // values Field Functions 
    bool hasValues() const { return this->values_ != nullptr;};
    void deleteValues() { this->values_ = nullptr;};
    inline const vector<Models::DescribeSQLLogCountResponseBodyItemsSeriesValues> & values() const { DARABONBA_PTR_GET_CONST(values_, vector<Models::DescribeSQLLogCountResponseBodyItemsSeriesValues>) };
    inline vector<Models::DescribeSQLLogCountResponseBodyItemsSeriesValues> values() { DARABONBA_PTR_GET(values_, vector<Models::DescribeSQLLogCountResponseBodyItemsSeriesValues>) };
    inline DescribeSQLLogCountResponseBodyItemsSeries& setValues(const vector<Models::DescribeSQLLogCountResponseBodyItemsSeriesValues> & values) { DARABONBA_PTR_SET_VALUE(values_, values) };
    inline DescribeSQLLogCountResponseBodyItemsSeries& setValues(vector<Models::DescribeSQLLogCountResponseBodyItemsSeriesValues> && values) { DARABONBA_PTR_SET_RVALUE(values_, values) };


  protected:
    // Details of the audit logs.
    std::shared_ptr<vector<Models::DescribeSQLLogCountResponseBodyItemsSeriesValues>> values_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
