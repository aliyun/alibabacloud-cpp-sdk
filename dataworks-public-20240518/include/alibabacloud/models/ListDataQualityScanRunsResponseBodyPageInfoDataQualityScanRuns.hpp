// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATAQUALITYSCANRUNSRESPONSEBODYPAGEINFODATAQUALITYSCANRUNS_HPP_
#define ALIBABACLOUD_MODELS_LISTDATAQUALITYSCANRUNSRESPONSEBODYPAGEINFODATAQUALITYSCANRUNS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListDataQualityScanRunsResponseBodyPageInfoDataQualityScanRunsParameters.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListDataQualityScanRunsResponseBodyPageInfoDataQualityScanRuns : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataQualityScanRunsResponseBodyPageInfoDataQualityScanRuns& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(FinishTime, finishTime_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Parameters, parameters_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataQualityScanRunsResponseBodyPageInfoDataQualityScanRuns& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(FinishTime, finishTime_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Parameters, parameters_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    ListDataQualityScanRunsResponseBodyPageInfoDataQualityScanRuns() = default ;
    ListDataQualityScanRunsResponseBodyPageInfoDataQualityScanRuns(const ListDataQualityScanRunsResponseBodyPageInfoDataQualityScanRuns &) = default ;
    ListDataQualityScanRunsResponseBodyPageInfoDataQualityScanRuns(ListDataQualityScanRunsResponseBodyPageInfoDataQualityScanRuns &&) = default ;
    ListDataQualityScanRunsResponseBodyPageInfoDataQualityScanRuns(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataQualityScanRunsResponseBodyPageInfoDataQualityScanRuns() = default ;
    ListDataQualityScanRunsResponseBodyPageInfoDataQualityScanRuns& operator=(const ListDataQualityScanRunsResponseBodyPageInfoDataQualityScanRuns &) = default ;
    ListDataQualityScanRunsResponseBodyPageInfoDataQualityScanRuns& operator=(ListDataQualityScanRunsResponseBodyPageInfoDataQualityScanRuns &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->createTime_ != nullptr
        && this->finishTime_ != nullptr && this->id_ != nullptr && this->parameters_ != nullptr && this->status_ != nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline ListDataQualityScanRunsResponseBodyPageInfoDataQualityScanRuns& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // finishTime Field Functions 
    bool hasFinishTime() const { return this->finishTime_ != nullptr;};
    void deleteFinishTime() { this->finishTime_ = nullptr;};
    inline int64_t finishTime() const { DARABONBA_PTR_GET_DEFAULT(finishTime_, 0L) };
    inline ListDataQualityScanRunsResponseBodyPageInfoDataQualityScanRuns& setFinishTime(int64_t finishTime) { DARABONBA_PTR_SET_VALUE(finishTime_, finishTime) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline ListDataQualityScanRunsResponseBodyPageInfoDataQualityScanRuns& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // parameters Field Functions 
    bool hasParameters() const { return this->parameters_ != nullptr;};
    void deleteParameters() { this->parameters_ = nullptr;};
    inline const vector<Models::ListDataQualityScanRunsResponseBodyPageInfoDataQualityScanRunsParameters> & parameters() const { DARABONBA_PTR_GET_CONST(parameters_, vector<Models::ListDataQualityScanRunsResponseBodyPageInfoDataQualityScanRunsParameters>) };
    inline vector<Models::ListDataQualityScanRunsResponseBodyPageInfoDataQualityScanRunsParameters> parameters() { DARABONBA_PTR_GET(parameters_, vector<Models::ListDataQualityScanRunsResponseBodyPageInfoDataQualityScanRunsParameters>) };
    inline ListDataQualityScanRunsResponseBodyPageInfoDataQualityScanRuns& setParameters(const vector<Models::ListDataQualityScanRunsResponseBodyPageInfoDataQualityScanRunsParameters> & parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };
    inline ListDataQualityScanRunsResponseBodyPageInfoDataQualityScanRuns& setParameters(vector<Models::ListDataQualityScanRunsResponseBodyPageInfoDataQualityScanRunsParameters> && parameters) { DARABONBA_PTR_SET_RVALUE(parameters_, parameters) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListDataQualityScanRunsResponseBodyPageInfoDataQualityScanRuns& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The time when the data quality monitor starts running.
    std::shared_ptr<int64_t> createTime_ = nullptr;
    // The time when the data quality monitor stops.
    std::shared_ptr<int64_t> finishTime_ = nullptr;
    // The ID of the data quality monitor running record.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The parameters configured for the instance.
    std::shared_ptr<vector<Models::ListDataQualityScanRunsResponseBodyPageInfoDataQualityScanRunsParameters>> parameters_ = nullptr;
    // The status of the instance.
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
