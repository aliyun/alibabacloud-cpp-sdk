// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDOCTORHBASETABLESRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTDOCTORHBASETABLESRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListDoctorHBaseTablesResponseBodyDataAnalysis.hpp>
#include <alibabacloud/models/ListDoctorHBaseTablesResponseBodyDataMetrics.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class ListDoctorHBaseTablesResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDoctorHBaseTablesResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Analysis, analysis_);
      DARABONBA_PTR_TO_JSON(Metrics, metrics_);
      DARABONBA_PTR_TO_JSON(TableName, tableName_);
    };
    friend void from_json(const Darabonba::Json& j, ListDoctorHBaseTablesResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Analysis, analysis_);
      DARABONBA_PTR_FROM_JSON(Metrics, metrics_);
      DARABONBA_PTR_FROM_JSON(TableName, tableName_);
    };
    ListDoctorHBaseTablesResponseBodyData() = default ;
    ListDoctorHBaseTablesResponseBodyData(const ListDoctorHBaseTablesResponseBodyData &) = default ;
    ListDoctorHBaseTablesResponseBodyData(ListDoctorHBaseTablesResponseBodyData &&) = default ;
    ListDoctorHBaseTablesResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDoctorHBaseTablesResponseBodyData() = default ;
    ListDoctorHBaseTablesResponseBodyData& operator=(const ListDoctorHBaseTablesResponseBodyData &) = default ;
    ListDoctorHBaseTablesResponseBodyData& operator=(ListDoctorHBaseTablesResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->analysis_ != nullptr
        && this->metrics_ != nullptr && this->tableName_ != nullptr; };
    // analysis Field Functions 
    bool hasAnalysis() const { return this->analysis_ != nullptr;};
    void deleteAnalysis() { this->analysis_ = nullptr;};
    inline const Models::ListDoctorHBaseTablesResponseBodyDataAnalysis & analysis() const { DARABONBA_PTR_GET_CONST(analysis_, Models::ListDoctorHBaseTablesResponseBodyDataAnalysis) };
    inline Models::ListDoctorHBaseTablesResponseBodyDataAnalysis analysis() { DARABONBA_PTR_GET(analysis_, Models::ListDoctorHBaseTablesResponseBodyDataAnalysis) };
    inline ListDoctorHBaseTablesResponseBodyData& setAnalysis(const Models::ListDoctorHBaseTablesResponseBodyDataAnalysis & analysis) { DARABONBA_PTR_SET_VALUE(analysis_, analysis) };
    inline ListDoctorHBaseTablesResponseBodyData& setAnalysis(Models::ListDoctorHBaseTablesResponseBodyDataAnalysis && analysis) { DARABONBA_PTR_SET_RVALUE(analysis_, analysis) };


    // metrics Field Functions 
    bool hasMetrics() const { return this->metrics_ != nullptr;};
    void deleteMetrics() { this->metrics_ = nullptr;};
    inline const Models::ListDoctorHBaseTablesResponseBodyDataMetrics & metrics() const { DARABONBA_PTR_GET_CONST(metrics_, Models::ListDoctorHBaseTablesResponseBodyDataMetrics) };
    inline Models::ListDoctorHBaseTablesResponseBodyDataMetrics metrics() { DARABONBA_PTR_GET(metrics_, Models::ListDoctorHBaseTablesResponseBodyDataMetrics) };
    inline ListDoctorHBaseTablesResponseBodyData& setMetrics(const Models::ListDoctorHBaseTablesResponseBodyDataMetrics & metrics) { DARABONBA_PTR_SET_VALUE(metrics_, metrics) };
    inline ListDoctorHBaseTablesResponseBodyData& setMetrics(Models::ListDoctorHBaseTablesResponseBodyDataMetrics && metrics) { DARABONBA_PTR_SET_RVALUE(metrics_, metrics) };


    // tableName Field Functions 
    bool hasTableName() const { return this->tableName_ != nullptr;};
    void deleteTableName() { this->tableName_ = nullptr;};
    inline string tableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
    inline ListDoctorHBaseTablesResponseBodyData& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


  protected:
    // The diagnosis result.
    std::shared_ptr<Models::ListDoctorHBaseTablesResponseBodyDataAnalysis> analysis_ = nullptr;
    // The metric information.
    std::shared_ptr<Models::ListDoctorHBaseTablesResponseBodyDataMetrics> metrics_ = nullptr;
    // The name of the table.
    std::shared_ptr<string> tableName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
