// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATAQUALITYRESULTSRESPONSEBODYPAGINGINFODATAQUALITYRESULTS_HPP_
#define ALIBABACLOUD_MODELS_LISTDATAQUALITYRESULTSRESPONSEBODYPAGINGINFODATAQUALITYRESULTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListDataQualityResultsResponseBodyPagingInfoDataQualityResultsDetails.hpp>
#include <alibabacloud/models/ListDataQualityResultsResponseBodyPagingInfoDataQualityResultsRule.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListDataQualityResultsResponseBodyPagingInfoDataQualityResults : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataQualityResultsResponseBodyPagingInfoDataQualityResults& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Details, details_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Rule, rule_);
      DARABONBA_PTR_TO_JSON(Sample, sample_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TaskInstanceId, taskInstanceId_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataQualityResultsResponseBodyPagingInfoDataQualityResults& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Details, details_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Rule, rule_);
      DARABONBA_PTR_FROM_JSON(Sample, sample_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TaskInstanceId, taskInstanceId_);
    };
    ListDataQualityResultsResponseBodyPagingInfoDataQualityResults() = default ;
    ListDataQualityResultsResponseBodyPagingInfoDataQualityResults(const ListDataQualityResultsResponseBodyPagingInfoDataQualityResults &) = default ;
    ListDataQualityResultsResponseBodyPagingInfoDataQualityResults(ListDataQualityResultsResponseBodyPagingInfoDataQualityResults &&) = default ;
    ListDataQualityResultsResponseBodyPagingInfoDataQualityResults(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataQualityResultsResponseBodyPagingInfoDataQualityResults() = default ;
    ListDataQualityResultsResponseBodyPagingInfoDataQualityResults& operator=(const ListDataQualityResultsResponseBodyPagingInfoDataQualityResults &) = default ;
    ListDataQualityResultsResponseBodyPagingInfoDataQualityResults& operator=(ListDataQualityResultsResponseBodyPagingInfoDataQualityResults &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createTime_ == nullptr
        && return this->details_ == nullptr && return this->id_ == nullptr && return this->rule_ == nullptr && return this->sample_ == nullptr && return this->status_ == nullptr
        && return this->taskInstanceId_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline ListDataQualityResultsResponseBodyPagingInfoDataQualityResults& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // details Field Functions 
    bool hasDetails() const { return this->details_ != nullptr;};
    void deleteDetails() { this->details_ = nullptr;};
    inline const vector<Models::ListDataQualityResultsResponseBodyPagingInfoDataQualityResultsDetails> & details() const { DARABONBA_PTR_GET_CONST(details_, vector<Models::ListDataQualityResultsResponseBodyPagingInfoDataQualityResultsDetails>) };
    inline vector<Models::ListDataQualityResultsResponseBodyPagingInfoDataQualityResultsDetails> details() { DARABONBA_PTR_GET(details_, vector<Models::ListDataQualityResultsResponseBodyPagingInfoDataQualityResultsDetails>) };
    inline ListDataQualityResultsResponseBodyPagingInfoDataQualityResults& setDetails(const vector<Models::ListDataQualityResultsResponseBodyPagingInfoDataQualityResultsDetails> & details) { DARABONBA_PTR_SET_VALUE(details_, details) };
    inline ListDataQualityResultsResponseBodyPagingInfoDataQualityResults& setDetails(vector<Models::ListDataQualityResultsResponseBodyPagingInfoDataQualityResultsDetails> && details) { DARABONBA_PTR_SET_RVALUE(details_, details) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline ListDataQualityResultsResponseBodyPagingInfoDataQualityResults& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // rule Field Functions 
    bool hasRule() const { return this->rule_ != nullptr;};
    void deleteRule() { this->rule_ = nullptr;};
    inline const Models::ListDataQualityResultsResponseBodyPagingInfoDataQualityResultsRule & rule() const { DARABONBA_PTR_GET_CONST(rule_, Models::ListDataQualityResultsResponseBodyPagingInfoDataQualityResultsRule) };
    inline Models::ListDataQualityResultsResponseBodyPagingInfoDataQualityResultsRule rule() { DARABONBA_PTR_GET(rule_, Models::ListDataQualityResultsResponseBodyPagingInfoDataQualityResultsRule) };
    inline ListDataQualityResultsResponseBodyPagingInfoDataQualityResults& setRule(const Models::ListDataQualityResultsResponseBodyPagingInfoDataQualityResultsRule & rule) { DARABONBA_PTR_SET_VALUE(rule_, rule) };
    inline ListDataQualityResultsResponseBodyPagingInfoDataQualityResults& setRule(Models::ListDataQualityResultsResponseBodyPagingInfoDataQualityResultsRule && rule) { DARABONBA_PTR_SET_RVALUE(rule_, rule) };


    // sample Field Functions 
    bool hasSample() const { return this->sample_ != nullptr;};
    void deleteSample() { this->sample_ = nullptr;};
    inline string sample() const { DARABONBA_PTR_GET_DEFAULT(sample_, "") };
    inline ListDataQualityResultsResponseBodyPagingInfoDataQualityResults& setSample(string sample) { DARABONBA_PTR_SET_VALUE(sample_, sample) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListDataQualityResultsResponseBodyPagingInfoDataQualityResults& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // taskInstanceId Field Functions 
    bool hasTaskInstanceId() const { return this->taskInstanceId_ != nullptr;};
    void deleteTaskInstanceId() { this->taskInstanceId_ = nullptr;};
    inline int64_t taskInstanceId() const { DARABONBA_PTR_GET_DEFAULT(taskInstanceId_, 0L) };
    inline ListDataQualityResultsResponseBodyPagingInfoDataQualityResults& setTaskInstanceId(int64_t taskInstanceId) { DARABONBA_PTR_SET_VALUE(taskInstanceId_, taskInstanceId) };


  protected:
    // The time when the data quality check result was generated.
    std::shared_ptr<int64_t> createTime_ = nullptr;
    // The information about the data quality check.
    std::shared_ptr<vector<Models::ListDataQualityResultsResponseBodyPagingInfoDataQualityResultsDetails>> details_ = nullptr;
    // The ID of the check result.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The snapshot of the rule configuration when the check starts.
    std::shared_ptr<Models::ListDataQualityResultsResponseBodyPagingInfoDataQualityResultsRule> rule_ = nullptr;
    // The sample values used for the check.
    std::shared_ptr<string> sample_ = nullptr;
    // The status of the check result. Valid values:
    // 
    // *   Running
    // *   Error
    // *   Passed
    // *   Warned
    // *   Critical
    std::shared_ptr<string> status_ = nullptr;
    // The ID of the instance generated by the check.
    std::shared_ptr<int64_t> taskInstanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
