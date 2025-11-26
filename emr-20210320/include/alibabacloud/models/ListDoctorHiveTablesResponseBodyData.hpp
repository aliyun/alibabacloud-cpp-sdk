// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDOCTORHIVETABLESRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTDOCTORHIVETABLESRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListDoctorHiveTablesResponseBodyDataAnalysis.hpp>
#include <vector>
#include <alibabacloud/models/ListDoctorHiveTablesResponseBodyDataFormats.hpp>
#include <alibabacloud/models/ListDoctorHiveTablesResponseBodyDataMetrics.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class ListDoctorHiveTablesResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDoctorHiveTablesResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Analysis, analysis_);
      DARABONBA_PTR_TO_JSON(Formats, formats_);
      DARABONBA_PTR_TO_JSON(Metrics, metrics_);
      DARABONBA_PTR_TO_JSON(Owner, owner_);
      DARABONBA_PTR_TO_JSON(TableName, tableName_);
    };
    friend void from_json(const Darabonba::Json& j, ListDoctorHiveTablesResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Analysis, analysis_);
      DARABONBA_PTR_FROM_JSON(Formats, formats_);
      DARABONBA_PTR_FROM_JSON(Metrics, metrics_);
      DARABONBA_PTR_FROM_JSON(Owner, owner_);
      DARABONBA_PTR_FROM_JSON(TableName, tableName_);
    };
    ListDoctorHiveTablesResponseBodyData() = default ;
    ListDoctorHiveTablesResponseBodyData(const ListDoctorHiveTablesResponseBodyData &) = default ;
    ListDoctorHiveTablesResponseBodyData(ListDoctorHiveTablesResponseBodyData &&) = default ;
    ListDoctorHiveTablesResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDoctorHiveTablesResponseBodyData() = default ;
    ListDoctorHiveTablesResponseBodyData& operator=(const ListDoctorHiveTablesResponseBodyData &) = default ;
    ListDoctorHiveTablesResponseBodyData& operator=(ListDoctorHiveTablesResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->analysis_ == nullptr
        && return this->formats_ == nullptr && return this->metrics_ == nullptr && return this->owner_ == nullptr && return this->tableName_ == nullptr; };
    // analysis Field Functions 
    bool hasAnalysis() const { return this->analysis_ != nullptr;};
    void deleteAnalysis() { this->analysis_ = nullptr;};
    inline const Models::ListDoctorHiveTablesResponseBodyDataAnalysis & analysis() const { DARABONBA_PTR_GET_CONST(analysis_, Models::ListDoctorHiveTablesResponseBodyDataAnalysis) };
    inline Models::ListDoctorHiveTablesResponseBodyDataAnalysis analysis() { DARABONBA_PTR_GET(analysis_, Models::ListDoctorHiveTablesResponseBodyDataAnalysis) };
    inline ListDoctorHiveTablesResponseBodyData& setAnalysis(const Models::ListDoctorHiveTablesResponseBodyDataAnalysis & analysis) { DARABONBA_PTR_SET_VALUE(analysis_, analysis) };
    inline ListDoctorHiveTablesResponseBodyData& setAnalysis(Models::ListDoctorHiveTablesResponseBodyDataAnalysis && analysis) { DARABONBA_PTR_SET_RVALUE(analysis_, analysis) };


    // formats Field Functions 
    bool hasFormats() const { return this->formats_ != nullptr;};
    void deleteFormats() { this->formats_ = nullptr;};
    inline const vector<Models::ListDoctorHiveTablesResponseBodyDataFormats> & formats() const { DARABONBA_PTR_GET_CONST(formats_, vector<Models::ListDoctorHiveTablesResponseBodyDataFormats>) };
    inline vector<Models::ListDoctorHiveTablesResponseBodyDataFormats> formats() { DARABONBA_PTR_GET(formats_, vector<Models::ListDoctorHiveTablesResponseBodyDataFormats>) };
    inline ListDoctorHiveTablesResponseBodyData& setFormats(const vector<Models::ListDoctorHiveTablesResponseBodyDataFormats> & formats) { DARABONBA_PTR_SET_VALUE(formats_, formats) };
    inline ListDoctorHiveTablesResponseBodyData& setFormats(vector<Models::ListDoctorHiveTablesResponseBodyDataFormats> && formats) { DARABONBA_PTR_SET_RVALUE(formats_, formats) };


    // metrics Field Functions 
    bool hasMetrics() const { return this->metrics_ != nullptr;};
    void deleteMetrics() { this->metrics_ = nullptr;};
    inline const Models::ListDoctorHiveTablesResponseBodyDataMetrics & metrics() const { DARABONBA_PTR_GET_CONST(metrics_, Models::ListDoctorHiveTablesResponseBodyDataMetrics) };
    inline Models::ListDoctorHiveTablesResponseBodyDataMetrics metrics() { DARABONBA_PTR_GET(metrics_, Models::ListDoctorHiveTablesResponseBodyDataMetrics) };
    inline ListDoctorHiveTablesResponseBodyData& setMetrics(const Models::ListDoctorHiveTablesResponseBodyDataMetrics & metrics) { DARABONBA_PTR_SET_VALUE(metrics_, metrics) };
    inline ListDoctorHiveTablesResponseBodyData& setMetrics(Models::ListDoctorHiveTablesResponseBodyDataMetrics && metrics) { DARABONBA_PTR_SET_RVALUE(metrics_, metrics) };


    // owner Field Functions 
    bool hasOwner() const { return this->owner_ != nullptr;};
    void deleteOwner() { this->owner_ = nullptr;};
    inline string owner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
    inline ListDoctorHiveTablesResponseBodyData& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


    // tableName Field Functions 
    bool hasTableName() const { return this->tableName_ != nullptr;};
    void deleteTableName() { this->tableName_ = nullptr;};
    inline string tableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
    inline ListDoctorHiveTablesResponseBodyData& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


  protected:
    // The analysis results.
    std::shared_ptr<Models::ListDoctorHiveTablesResponseBodyDataAnalysis> analysis_ = nullptr;
    // The table format information.
    std::shared_ptr<vector<Models::ListDoctorHiveTablesResponseBodyDataFormats>> formats_ = nullptr;
    // The metric information.
    std::shared_ptr<Models::ListDoctorHiveTablesResponseBodyDataMetrics> metrics_ = nullptr;
    // The owner.
    std::shared_ptr<string> owner_ = nullptr;
    // The table name. The table name must follow the naming rule in Hive. A name in the {Database name.Table name} format uniquely identifies a table.
    std::shared_ptr<string> tableName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
