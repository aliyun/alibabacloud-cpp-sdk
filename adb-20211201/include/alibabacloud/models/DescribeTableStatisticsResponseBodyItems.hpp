// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETABLESTATISTICSRESPONSEBODYITEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETABLESTATISTICSRESPONSEBODYITEMS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeTableStatisticsResponseBodyItemsTableStatisticRecords.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeTableStatisticsResponseBodyItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTableStatisticsResponseBodyItems& obj) { 
      DARABONBA_PTR_TO_JSON(TableStatisticRecords, tableStatisticRecords_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTableStatisticsResponseBodyItems& obj) { 
      DARABONBA_PTR_FROM_JSON(TableStatisticRecords, tableStatisticRecords_);
    };
    DescribeTableStatisticsResponseBodyItems() = default ;
    DescribeTableStatisticsResponseBodyItems(const DescribeTableStatisticsResponseBodyItems &) = default ;
    DescribeTableStatisticsResponseBodyItems(DescribeTableStatisticsResponseBodyItems &&) = default ;
    DescribeTableStatisticsResponseBodyItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTableStatisticsResponseBodyItems() = default ;
    DescribeTableStatisticsResponseBodyItems& operator=(const DescribeTableStatisticsResponseBodyItems &) = default ;
    DescribeTableStatisticsResponseBodyItems& operator=(DescribeTableStatisticsResponseBodyItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->tableStatisticRecords_ != nullptr; };
    // tableStatisticRecords Field Functions 
    bool hasTableStatisticRecords() const { return this->tableStatisticRecords_ != nullptr;};
    void deleteTableStatisticRecords() { this->tableStatisticRecords_ = nullptr;};
    inline const vector<Models::DescribeTableStatisticsResponseBodyItemsTableStatisticRecords> & tableStatisticRecords() const { DARABONBA_PTR_GET_CONST(tableStatisticRecords_, vector<Models::DescribeTableStatisticsResponseBodyItemsTableStatisticRecords>) };
    inline vector<Models::DescribeTableStatisticsResponseBodyItemsTableStatisticRecords> tableStatisticRecords() { DARABONBA_PTR_GET(tableStatisticRecords_, vector<Models::DescribeTableStatisticsResponseBodyItemsTableStatisticRecords>) };
    inline DescribeTableStatisticsResponseBodyItems& setTableStatisticRecords(const vector<Models::DescribeTableStatisticsResponseBodyItemsTableStatisticRecords> & tableStatisticRecords) { DARABONBA_PTR_SET_VALUE(tableStatisticRecords_, tableStatisticRecords) };
    inline DescribeTableStatisticsResponseBodyItems& setTableStatisticRecords(vector<Models::DescribeTableStatisticsResponseBodyItemsTableStatisticRecords> && tableStatisticRecords) { DARABONBA_PTR_SET_RVALUE(tableStatisticRecords_, tableStatisticRecords) };


  protected:
    std::shared_ptr<vector<Models::DescribeTableStatisticsResponseBodyItemsTableStatisticRecords>> tableStatisticRecords_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
