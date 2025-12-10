// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_COLUMNSTATISTICS_HPP_
#define ALIBABACLOUD_MODELS_COLUMNSTATISTICS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ColumnStatisticsDesc.hpp>
#include <vector>
#include <alibabacloud/models/ColumnStatisticsObj.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataLake20200710
{
namespace Models
{
  class ColumnStatistics : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ColumnStatistics& obj) { 
      DARABONBA_PTR_TO_JSON(ColumnStatisticsDesc, columnStatisticsDesc_);
      DARABONBA_PTR_TO_JSON(ColumnStatisticsObjList, columnStatisticsObjList_);
      DARABONBA_PTR_TO_JSON(Engine, engine_);
      DARABONBA_PTR_TO_JSON(IsStatsCompliant, isStatsCompliant_);
    };
    friend void from_json(const Darabonba::Json& j, ColumnStatistics& obj) { 
      DARABONBA_PTR_FROM_JSON(ColumnStatisticsDesc, columnStatisticsDesc_);
      DARABONBA_PTR_FROM_JSON(ColumnStatisticsObjList, columnStatisticsObjList_);
      DARABONBA_PTR_FROM_JSON(Engine, engine_);
      DARABONBA_PTR_FROM_JSON(IsStatsCompliant, isStatsCompliant_);
    };
    ColumnStatistics() = default ;
    ColumnStatistics(const ColumnStatistics &) = default ;
    ColumnStatistics(ColumnStatistics &&) = default ;
    ColumnStatistics(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ColumnStatistics() = default ;
    ColumnStatistics& operator=(const ColumnStatistics &) = default ;
    ColumnStatistics& operator=(ColumnStatistics &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->columnStatisticsDesc_ == nullptr
        && return this->columnStatisticsObjList_ == nullptr && return this->engine_ == nullptr && return this->isStatsCompliant_ == nullptr; };
    // columnStatisticsDesc Field Functions 
    bool hasColumnStatisticsDesc() const { return this->columnStatisticsDesc_ != nullptr;};
    void deleteColumnStatisticsDesc() { this->columnStatisticsDesc_ = nullptr;};
    inline const ColumnStatisticsDesc & columnStatisticsDesc() const { DARABONBA_PTR_GET_CONST(columnStatisticsDesc_, ColumnStatisticsDesc) };
    inline ColumnStatisticsDesc columnStatisticsDesc() { DARABONBA_PTR_GET(columnStatisticsDesc_, ColumnStatisticsDesc) };
    inline ColumnStatistics& setColumnStatisticsDesc(const ColumnStatisticsDesc & columnStatisticsDesc) { DARABONBA_PTR_SET_VALUE(columnStatisticsDesc_, columnStatisticsDesc) };
    inline ColumnStatistics& setColumnStatisticsDesc(ColumnStatisticsDesc && columnStatisticsDesc) { DARABONBA_PTR_SET_RVALUE(columnStatisticsDesc_, columnStatisticsDesc) };


    // columnStatisticsObjList Field Functions 
    bool hasColumnStatisticsObjList() const { return this->columnStatisticsObjList_ != nullptr;};
    void deleteColumnStatisticsObjList() { this->columnStatisticsObjList_ = nullptr;};
    inline const vector<ColumnStatisticsObj> & columnStatisticsObjList() const { DARABONBA_PTR_GET_CONST(columnStatisticsObjList_, vector<ColumnStatisticsObj>) };
    inline vector<ColumnStatisticsObj> columnStatisticsObjList() { DARABONBA_PTR_GET(columnStatisticsObjList_, vector<ColumnStatisticsObj>) };
    inline ColumnStatistics& setColumnStatisticsObjList(const vector<ColumnStatisticsObj> & columnStatisticsObjList) { DARABONBA_PTR_SET_VALUE(columnStatisticsObjList_, columnStatisticsObjList) };
    inline ColumnStatistics& setColumnStatisticsObjList(vector<ColumnStatisticsObj> && columnStatisticsObjList) { DARABONBA_PTR_SET_RVALUE(columnStatisticsObjList_, columnStatisticsObjList) };


    // engine Field Functions 
    bool hasEngine() const { return this->engine_ != nullptr;};
    void deleteEngine() { this->engine_ = nullptr;};
    inline string engine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
    inline ColumnStatistics& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


    // isStatsCompliant Field Functions 
    bool hasIsStatsCompliant() const { return this->isStatsCompliant_ != nullptr;};
    void deleteIsStatsCompliant() { this->isStatsCompliant_ = nullptr;};
    inline bool isStatsCompliant() const { DARABONBA_PTR_GET_DEFAULT(isStatsCompliant_, false) };
    inline ColumnStatistics& setIsStatsCompliant(bool isStatsCompliant) { DARABONBA_PTR_SET_VALUE(isStatsCompliant_, isStatsCompliant) };


  protected:
    std::shared_ptr<ColumnStatisticsDesc> columnStatisticsDesc_ = nullptr;
    std::shared_ptr<vector<ColumnStatisticsObj>> columnStatisticsObjList_ = nullptr;
    std::shared_ptr<string> engine_ = nullptr;
    std::shared_ptr<bool> isStatsCompliant_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataLake20200710
#endif
