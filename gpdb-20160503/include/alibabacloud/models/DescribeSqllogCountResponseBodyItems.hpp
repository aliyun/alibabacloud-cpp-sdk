// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESQLLOGCOUNTRESPONSEBODYITEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESQLLOGCOUNTRESPONSEBODYITEMS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeSQLLogCountResponseBodyItemsSeries.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class DescribeSQLLogCountResponseBodyItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSQLLogCountResponseBodyItems& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Series, series_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSQLLogCountResponseBodyItems& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Series, series_);
    };
    DescribeSQLLogCountResponseBodyItems() = default ;
    DescribeSQLLogCountResponseBodyItems(const DescribeSQLLogCountResponseBodyItems &) = default ;
    DescribeSQLLogCountResponseBodyItems(DescribeSQLLogCountResponseBodyItems &&) = default ;
    DescribeSQLLogCountResponseBodyItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSQLLogCountResponseBodyItems() = default ;
    DescribeSQLLogCountResponseBodyItems& operator=(const DescribeSQLLogCountResponseBodyItems &) = default ;
    DescribeSQLLogCountResponseBodyItems& operator=(DescribeSQLLogCountResponseBodyItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->name_ != nullptr
        && this->series_ != nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeSQLLogCountResponseBodyItems& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // series Field Functions 
    bool hasSeries() const { return this->series_ != nullptr;};
    void deleteSeries() { this->series_ = nullptr;};
    inline const vector<Models::DescribeSQLLogCountResponseBodyItemsSeries> & series() const { DARABONBA_PTR_GET_CONST(series_, vector<Models::DescribeSQLLogCountResponseBodyItemsSeries>) };
    inline vector<Models::DescribeSQLLogCountResponseBodyItemsSeries> series() { DARABONBA_PTR_GET(series_, vector<Models::DescribeSQLLogCountResponseBodyItemsSeries>) };
    inline DescribeSQLLogCountResponseBodyItems& setSeries(const vector<Models::DescribeSQLLogCountResponseBodyItemsSeries> & series) { DARABONBA_PTR_SET_VALUE(series_, series) };
    inline DescribeSQLLogCountResponseBodyItems& setSeries(vector<Models::DescribeSQLLogCountResponseBodyItemsSeries> && series) { DARABONBA_PTR_SET_RVALUE(series_, series) };


  protected:
    // The name of the table.
    std::shared_ptr<string> name_ = nullptr;
    // Details of the audit logs.
    std::shared_ptr<vector<Models::DescribeSQLLogCountResponseBodyItemsSeries>> series_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
