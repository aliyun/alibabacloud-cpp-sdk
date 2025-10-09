// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATAQUALITYSCANRUNRESPONSEBODYDATAQUALITYSCANRUN_HPP_
#define ALIBABACLOUD_MODELS_GETDATAQUALITYSCANRUNRESPONSEBODYDATAQUALITYSCANRUN_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetDataQualityScanRunResponseBodyDataQualityScanRunParameters.hpp>
#include <alibabacloud/models/GetDataQualityScanRunResponseBodyDataQualityScanRunResults.hpp>
#include <alibabacloud/models/GetDataQualityScanRunResponseBodyDataQualityScanRunScan.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class GetDataQualityScanRunResponseBodyDataQualityScanRun : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDataQualityScanRunResponseBodyDataQualityScanRun& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(FinishTime, finishTime_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Parameters, parameters_);
      DARABONBA_PTR_TO_JSON(Results, results_);
      DARABONBA_PTR_TO_JSON(Scan, scan_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, GetDataQualityScanRunResponseBodyDataQualityScanRun& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(FinishTime, finishTime_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Parameters, parameters_);
      DARABONBA_PTR_FROM_JSON(Results, results_);
      DARABONBA_PTR_FROM_JSON(Scan, scan_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    GetDataQualityScanRunResponseBodyDataQualityScanRun() = default ;
    GetDataQualityScanRunResponseBodyDataQualityScanRun(const GetDataQualityScanRunResponseBodyDataQualityScanRun &) = default ;
    GetDataQualityScanRunResponseBodyDataQualityScanRun(GetDataQualityScanRunResponseBodyDataQualityScanRun &&) = default ;
    GetDataQualityScanRunResponseBodyDataQualityScanRun(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDataQualityScanRunResponseBodyDataQualityScanRun() = default ;
    GetDataQualityScanRunResponseBodyDataQualityScanRun& operator=(const GetDataQualityScanRunResponseBodyDataQualityScanRun &) = default ;
    GetDataQualityScanRunResponseBodyDataQualityScanRun& operator=(GetDataQualityScanRunResponseBodyDataQualityScanRun &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->createTime_ != nullptr
        && this->finishTime_ != nullptr && this->id_ != nullptr && this->parameters_ != nullptr && this->results_ != nullptr && this->scan_ != nullptr
        && this->status_ != nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline GetDataQualityScanRunResponseBodyDataQualityScanRun& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // finishTime Field Functions 
    bool hasFinishTime() const { return this->finishTime_ != nullptr;};
    void deleteFinishTime() { this->finishTime_ = nullptr;};
    inline int64_t finishTime() const { DARABONBA_PTR_GET_DEFAULT(finishTime_, 0L) };
    inline GetDataQualityScanRunResponseBodyDataQualityScanRun& setFinishTime(int64_t finishTime) { DARABONBA_PTR_SET_VALUE(finishTime_, finishTime) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline GetDataQualityScanRunResponseBodyDataQualityScanRun& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // parameters Field Functions 
    bool hasParameters() const { return this->parameters_ != nullptr;};
    void deleteParameters() { this->parameters_ = nullptr;};
    inline const vector<Models::GetDataQualityScanRunResponseBodyDataQualityScanRunParameters> & parameters() const { DARABONBA_PTR_GET_CONST(parameters_, vector<Models::GetDataQualityScanRunResponseBodyDataQualityScanRunParameters>) };
    inline vector<Models::GetDataQualityScanRunResponseBodyDataQualityScanRunParameters> parameters() { DARABONBA_PTR_GET(parameters_, vector<Models::GetDataQualityScanRunResponseBodyDataQualityScanRunParameters>) };
    inline GetDataQualityScanRunResponseBodyDataQualityScanRun& setParameters(const vector<Models::GetDataQualityScanRunResponseBodyDataQualityScanRunParameters> & parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };
    inline GetDataQualityScanRunResponseBodyDataQualityScanRun& setParameters(vector<Models::GetDataQualityScanRunResponseBodyDataQualityScanRunParameters> && parameters) { DARABONBA_PTR_SET_RVALUE(parameters_, parameters) };


    // results Field Functions 
    bool hasResults() const { return this->results_ != nullptr;};
    void deleteResults() { this->results_ = nullptr;};
    inline const vector<Models::GetDataQualityScanRunResponseBodyDataQualityScanRunResults> & results() const { DARABONBA_PTR_GET_CONST(results_, vector<Models::GetDataQualityScanRunResponseBodyDataQualityScanRunResults>) };
    inline vector<Models::GetDataQualityScanRunResponseBodyDataQualityScanRunResults> results() { DARABONBA_PTR_GET(results_, vector<Models::GetDataQualityScanRunResponseBodyDataQualityScanRunResults>) };
    inline GetDataQualityScanRunResponseBodyDataQualityScanRun& setResults(const vector<Models::GetDataQualityScanRunResponseBodyDataQualityScanRunResults> & results) { DARABONBA_PTR_SET_VALUE(results_, results) };
    inline GetDataQualityScanRunResponseBodyDataQualityScanRun& setResults(vector<Models::GetDataQualityScanRunResponseBodyDataQualityScanRunResults> && results) { DARABONBA_PTR_SET_RVALUE(results_, results) };


    // scan Field Functions 
    bool hasScan() const { return this->scan_ != nullptr;};
    void deleteScan() { this->scan_ = nullptr;};
    inline const Models::GetDataQualityScanRunResponseBodyDataQualityScanRunScan & scan() const { DARABONBA_PTR_GET_CONST(scan_, Models::GetDataQualityScanRunResponseBodyDataQualityScanRunScan) };
    inline Models::GetDataQualityScanRunResponseBodyDataQualityScanRunScan scan() { DARABONBA_PTR_GET(scan_, Models::GetDataQualityScanRunResponseBodyDataQualityScanRunScan) };
    inline GetDataQualityScanRunResponseBodyDataQualityScanRun& setScan(const Models::GetDataQualityScanRunResponseBodyDataQualityScanRunScan & scan) { DARABONBA_PTR_SET_VALUE(scan_, scan) };
    inline GetDataQualityScanRunResponseBodyDataQualityScanRun& setScan(Models::GetDataQualityScanRunResponseBodyDataQualityScanRunScan && scan) { DARABONBA_PTR_SET_RVALUE(scan_, scan) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetDataQualityScanRunResponseBodyDataQualityScanRun& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The time when the data quality monitor starts running.
    std::shared_ptr<int64_t> createTime_ = nullptr;
    // The time when the data quality monitor stops.
    std::shared_ptr<int64_t> finishTime_ = nullptr;
    // The running record ID.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The parameter settings used during the actual running.
    std::shared_ptr<vector<Models::GetDataQualityScanRunResponseBodyDataQualityScanRunParameters>> parameters_ = nullptr;
    // The validation results of each rule.
    std::shared_ptr<vector<Models::GetDataQualityScanRunResponseBodyDataQualityScanRunResults>> results_ = nullptr;
    // The snapshot of the data quality monitor configuration at the start of the validation.
    std::shared_ptr<Models::GetDataQualityScanRunResponseBodyDataQualityScanRunScan> scan_ = nullptr;
    // The current running status.
    // 
    // *   Pass
    // *   Running
    // *   Error
    // *   Warn
    // *   Fail
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
