// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_COLUMNSTATISTICSOBJCOLUMNSTATISTICSDATA_HPP_
#define ALIBABACLOUD_MODELS_COLUMNSTATISTICSOBJCOLUMNSTATISTICSDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataLake20200710
{
namespace Models
{
  class ColumnStatisticsObjColumnStatisticsData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ColumnStatisticsObjColumnStatisticsData& obj) { 
      DARABONBA_PTR_TO_JSON(StatisticsData, statisticsData_);
      DARABONBA_PTR_TO_JSON(StatisticsType, statisticsType_);
    };
    friend void from_json(const Darabonba::Json& j, ColumnStatisticsObjColumnStatisticsData& obj) { 
      DARABONBA_PTR_FROM_JSON(StatisticsData, statisticsData_);
      DARABONBA_PTR_FROM_JSON(StatisticsType, statisticsType_);
    };
    ColumnStatisticsObjColumnStatisticsData() = default ;
    ColumnStatisticsObjColumnStatisticsData(const ColumnStatisticsObjColumnStatisticsData &) = default ;
    ColumnStatisticsObjColumnStatisticsData(ColumnStatisticsObjColumnStatisticsData &&) = default ;
    ColumnStatisticsObjColumnStatisticsData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ColumnStatisticsObjColumnStatisticsData() = default ;
    ColumnStatisticsObjColumnStatisticsData& operator=(const ColumnStatisticsObjColumnStatisticsData &) = default ;
    ColumnStatisticsObjColumnStatisticsData& operator=(ColumnStatisticsObjColumnStatisticsData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->statisticsData_ == nullptr
        && return this->statisticsType_ == nullptr; };
    // statisticsData Field Functions 
    bool hasStatisticsData() const { return this->statisticsData_ != nullptr;};
    void deleteStatisticsData() { this->statisticsData_ = nullptr;};
    inline string statisticsData() const { DARABONBA_PTR_GET_DEFAULT(statisticsData_, "") };
    inline ColumnStatisticsObjColumnStatisticsData& setStatisticsData(string statisticsData) { DARABONBA_PTR_SET_VALUE(statisticsData_, statisticsData) };


    // statisticsType Field Functions 
    bool hasStatisticsType() const { return this->statisticsType_ != nullptr;};
    void deleteStatisticsType() { this->statisticsType_ = nullptr;};
    inline string statisticsType() const { DARABONBA_PTR_GET_DEFAULT(statisticsType_, "") };
    inline ColumnStatisticsObjColumnStatisticsData& setStatisticsType(string statisticsType) { DARABONBA_PTR_SET_VALUE(statisticsType_, statisticsType) };


  protected:
    std::shared_ptr<string> statisticsData_ = nullptr;
    std::shared_ptr<string> statisticsType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataLake20200710
#endif
