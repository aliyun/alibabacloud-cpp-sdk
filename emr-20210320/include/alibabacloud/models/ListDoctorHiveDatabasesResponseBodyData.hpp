// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDOCTORHIVEDATABASESRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTDOCTORHIVEDATABASESRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListDoctorHiveDatabasesResponseBodyDataAnalysis.hpp>
#include <vector>
#include <alibabacloud/models/ListDoctorHiveDatabasesResponseBodyDataFormats.hpp>
#include <alibabacloud/models/ListDoctorHiveDatabasesResponseBodyDataMetrics.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class ListDoctorHiveDatabasesResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDoctorHiveDatabasesResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Analysis, analysis_);
      DARABONBA_PTR_TO_JSON(DatabaseName, databaseName_);
      DARABONBA_PTR_TO_JSON(Formats, formats_);
      DARABONBA_PTR_TO_JSON(Metrics, metrics_);
    };
    friend void from_json(const Darabonba::Json& j, ListDoctorHiveDatabasesResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Analysis, analysis_);
      DARABONBA_PTR_FROM_JSON(DatabaseName, databaseName_);
      DARABONBA_PTR_FROM_JSON(Formats, formats_);
      DARABONBA_PTR_FROM_JSON(Metrics, metrics_);
    };
    ListDoctorHiveDatabasesResponseBodyData() = default ;
    ListDoctorHiveDatabasesResponseBodyData(const ListDoctorHiveDatabasesResponseBodyData &) = default ;
    ListDoctorHiveDatabasesResponseBodyData(ListDoctorHiveDatabasesResponseBodyData &&) = default ;
    ListDoctorHiveDatabasesResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDoctorHiveDatabasesResponseBodyData() = default ;
    ListDoctorHiveDatabasesResponseBodyData& operator=(const ListDoctorHiveDatabasesResponseBodyData &) = default ;
    ListDoctorHiveDatabasesResponseBodyData& operator=(ListDoctorHiveDatabasesResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->analysis_ == nullptr
        && return this->databaseName_ == nullptr && return this->formats_ == nullptr && return this->metrics_ == nullptr; };
    // analysis Field Functions 
    bool hasAnalysis() const { return this->analysis_ != nullptr;};
    void deleteAnalysis() { this->analysis_ = nullptr;};
    inline const Models::ListDoctorHiveDatabasesResponseBodyDataAnalysis & analysis() const { DARABONBA_PTR_GET_CONST(analysis_, Models::ListDoctorHiveDatabasesResponseBodyDataAnalysis) };
    inline Models::ListDoctorHiveDatabasesResponseBodyDataAnalysis analysis() { DARABONBA_PTR_GET(analysis_, Models::ListDoctorHiveDatabasesResponseBodyDataAnalysis) };
    inline ListDoctorHiveDatabasesResponseBodyData& setAnalysis(const Models::ListDoctorHiveDatabasesResponseBodyDataAnalysis & analysis) { DARABONBA_PTR_SET_VALUE(analysis_, analysis) };
    inline ListDoctorHiveDatabasesResponseBodyData& setAnalysis(Models::ListDoctorHiveDatabasesResponseBodyDataAnalysis && analysis) { DARABONBA_PTR_SET_RVALUE(analysis_, analysis) };


    // databaseName Field Functions 
    bool hasDatabaseName() const { return this->databaseName_ != nullptr;};
    void deleteDatabaseName() { this->databaseName_ = nullptr;};
    inline string databaseName() const { DARABONBA_PTR_GET_DEFAULT(databaseName_, "") };
    inline ListDoctorHiveDatabasesResponseBodyData& setDatabaseName(string databaseName) { DARABONBA_PTR_SET_VALUE(databaseName_, databaseName) };


    // formats Field Functions 
    bool hasFormats() const { return this->formats_ != nullptr;};
    void deleteFormats() { this->formats_ = nullptr;};
    inline const vector<Models::ListDoctorHiveDatabasesResponseBodyDataFormats> & formats() const { DARABONBA_PTR_GET_CONST(formats_, vector<Models::ListDoctorHiveDatabasesResponseBodyDataFormats>) };
    inline vector<Models::ListDoctorHiveDatabasesResponseBodyDataFormats> formats() { DARABONBA_PTR_GET(formats_, vector<Models::ListDoctorHiveDatabasesResponseBodyDataFormats>) };
    inline ListDoctorHiveDatabasesResponseBodyData& setFormats(const vector<Models::ListDoctorHiveDatabasesResponseBodyDataFormats> & formats) { DARABONBA_PTR_SET_VALUE(formats_, formats) };
    inline ListDoctorHiveDatabasesResponseBodyData& setFormats(vector<Models::ListDoctorHiveDatabasesResponseBodyDataFormats> && formats) { DARABONBA_PTR_SET_RVALUE(formats_, formats) };


    // metrics Field Functions 
    bool hasMetrics() const { return this->metrics_ != nullptr;};
    void deleteMetrics() { this->metrics_ = nullptr;};
    inline const Models::ListDoctorHiveDatabasesResponseBodyDataMetrics & metrics() const { DARABONBA_PTR_GET_CONST(metrics_, Models::ListDoctorHiveDatabasesResponseBodyDataMetrics) };
    inline Models::ListDoctorHiveDatabasesResponseBodyDataMetrics metrics() { DARABONBA_PTR_GET(metrics_, Models::ListDoctorHiveDatabasesResponseBodyDataMetrics) };
    inline ListDoctorHiveDatabasesResponseBodyData& setMetrics(const Models::ListDoctorHiveDatabasesResponseBodyDataMetrics & metrics) { DARABONBA_PTR_SET_VALUE(metrics_, metrics) };
    inline ListDoctorHiveDatabasesResponseBodyData& setMetrics(Models::ListDoctorHiveDatabasesResponseBodyDataMetrics && metrics) { DARABONBA_PTR_SET_RVALUE(metrics_, metrics) };


  protected:
    // The analysis results.
    std::shared_ptr<Models::ListDoctorHiveDatabasesResponseBodyDataAnalysis> analysis_ = nullptr;
    // The database name.
    std::shared_ptr<string> databaseName_ = nullptr;
    // The information from the perspective of storage formats.
    std::shared_ptr<vector<Models::ListDoctorHiveDatabasesResponseBodyDataFormats>> formats_ = nullptr;
    // The metric information.
    std::shared_ptr<Models::ListDoctorHiveDatabasesResponseBodyDataMetrics> metrics_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
