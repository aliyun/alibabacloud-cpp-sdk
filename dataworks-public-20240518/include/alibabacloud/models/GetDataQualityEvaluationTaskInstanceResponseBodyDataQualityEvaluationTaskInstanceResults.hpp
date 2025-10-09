// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATAQUALITYEVALUATIONTASKINSTANCERESPONSEBODYDATAQUALITYEVALUATIONTASKINSTANCERESULTS_HPP_
#define ALIBABACLOUD_MODELS_GETDATAQUALITYEVALUATIONTASKINSTANCERESPONSEBODYDATAQUALITYEVALUATIONTASKINSTANCERESULTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetDataQualityEvaluationTaskInstanceResponseBodyDataQualityEvaluationTaskInstanceResultsDetails.hpp>
#include <alibabacloud/models/GetDataQualityEvaluationTaskInstanceResponseBodyDataQualityEvaluationTaskInstanceResultsRule.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class GetDataQualityEvaluationTaskInstanceResponseBodyDataQualityEvaluationTaskInstanceResults : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDataQualityEvaluationTaskInstanceResponseBodyDataQualityEvaluationTaskInstanceResults& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Details, details_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Rule, rule_);
      DARABONBA_PTR_TO_JSON(Sample, sample_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TaskInstanceId, taskInstanceId_);
    };
    friend void from_json(const Darabonba::Json& j, GetDataQualityEvaluationTaskInstanceResponseBodyDataQualityEvaluationTaskInstanceResults& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Details, details_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Rule, rule_);
      DARABONBA_PTR_FROM_JSON(Sample, sample_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TaskInstanceId, taskInstanceId_);
    };
    GetDataQualityEvaluationTaskInstanceResponseBodyDataQualityEvaluationTaskInstanceResults() = default ;
    GetDataQualityEvaluationTaskInstanceResponseBodyDataQualityEvaluationTaskInstanceResults(const GetDataQualityEvaluationTaskInstanceResponseBodyDataQualityEvaluationTaskInstanceResults &) = default ;
    GetDataQualityEvaluationTaskInstanceResponseBodyDataQualityEvaluationTaskInstanceResults(GetDataQualityEvaluationTaskInstanceResponseBodyDataQualityEvaluationTaskInstanceResults &&) = default ;
    GetDataQualityEvaluationTaskInstanceResponseBodyDataQualityEvaluationTaskInstanceResults(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDataQualityEvaluationTaskInstanceResponseBodyDataQualityEvaluationTaskInstanceResults() = default ;
    GetDataQualityEvaluationTaskInstanceResponseBodyDataQualityEvaluationTaskInstanceResults& operator=(const GetDataQualityEvaluationTaskInstanceResponseBodyDataQualityEvaluationTaskInstanceResults &) = default ;
    GetDataQualityEvaluationTaskInstanceResponseBodyDataQualityEvaluationTaskInstanceResults& operator=(GetDataQualityEvaluationTaskInstanceResponseBodyDataQualityEvaluationTaskInstanceResults &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->createTime_ != nullptr
        && this->details_ != nullptr && this->id_ != nullptr && this->rule_ != nullptr && this->sample_ != nullptr && this->status_ != nullptr
        && this->taskInstanceId_ != nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline GetDataQualityEvaluationTaskInstanceResponseBodyDataQualityEvaluationTaskInstanceResults& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // details Field Functions 
    bool hasDetails() const { return this->details_ != nullptr;};
    void deleteDetails() { this->details_ = nullptr;};
    inline const vector<Models::GetDataQualityEvaluationTaskInstanceResponseBodyDataQualityEvaluationTaskInstanceResultsDetails> & details() const { DARABONBA_PTR_GET_CONST(details_, vector<Models::GetDataQualityEvaluationTaskInstanceResponseBodyDataQualityEvaluationTaskInstanceResultsDetails>) };
    inline vector<Models::GetDataQualityEvaluationTaskInstanceResponseBodyDataQualityEvaluationTaskInstanceResultsDetails> details() { DARABONBA_PTR_GET(details_, vector<Models::GetDataQualityEvaluationTaskInstanceResponseBodyDataQualityEvaluationTaskInstanceResultsDetails>) };
    inline GetDataQualityEvaluationTaskInstanceResponseBodyDataQualityEvaluationTaskInstanceResults& setDetails(const vector<Models::GetDataQualityEvaluationTaskInstanceResponseBodyDataQualityEvaluationTaskInstanceResultsDetails> & details) { DARABONBA_PTR_SET_VALUE(details_, details) };
    inline GetDataQualityEvaluationTaskInstanceResponseBodyDataQualityEvaluationTaskInstanceResults& setDetails(vector<Models::GetDataQualityEvaluationTaskInstanceResponseBodyDataQualityEvaluationTaskInstanceResultsDetails> && details) { DARABONBA_PTR_SET_RVALUE(details_, details) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline GetDataQualityEvaluationTaskInstanceResponseBodyDataQualityEvaluationTaskInstanceResults& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // rule Field Functions 
    bool hasRule() const { return this->rule_ != nullptr;};
    void deleteRule() { this->rule_ = nullptr;};
    inline const Models::GetDataQualityEvaluationTaskInstanceResponseBodyDataQualityEvaluationTaskInstanceResultsRule & rule() const { DARABONBA_PTR_GET_CONST(rule_, Models::GetDataQualityEvaluationTaskInstanceResponseBodyDataQualityEvaluationTaskInstanceResultsRule) };
    inline Models::GetDataQualityEvaluationTaskInstanceResponseBodyDataQualityEvaluationTaskInstanceResultsRule rule() { DARABONBA_PTR_GET(rule_, Models::GetDataQualityEvaluationTaskInstanceResponseBodyDataQualityEvaluationTaskInstanceResultsRule) };
    inline GetDataQualityEvaluationTaskInstanceResponseBodyDataQualityEvaluationTaskInstanceResults& setRule(const Models::GetDataQualityEvaluationTaskInstanceResponseBodyDataQualityEvaluationTaskInstanceResultsRule & rule) { DARABONBA_PTR_SET_VALUE(rule_, rule) };
    inline GetDataQualityEvaluationTaskInstanceResponseBodyDataQualityEvaluationTaskInstanceResults& setRule(Models::GetDataQualityEvaluationTaskInstanceResponseBodyDataQualityEvaluationTaskInstanceResultsRule && rule) { DARABONBA_PTR_SET_RVALUE(rule_, rule) };


    // sample Field Functions 
    bool hasSample() const { return this->sample_ != nullptr;};
    void deleteSample() { this->sample_ = nullptr;};
    inline string sample() const { DARABONBA_PTR_GET_DEFAULT(sample_, "") };
    inline GetDataQualityEvaluationTaskInstanceResponseBodyDataQualityEvaluationTaskInstanceResults& setSample(string sample) { DARABONBA_PTR_SET_VALUE(sample_, sample) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetDataQualityEvaluationTaskInstanceResponseBodyDataQualityEvaluationTaskInstanceResults& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // taskInstanceId Field Functions 
    bool hasTaskInstanceId() const { return this->taskInstanceId_ != nullptr;};
    void deleteTaskInstanceId() { this->taskInstanceId_ = nullptr;};
    inline int64_t taskInstanceId() const { DARABONBA_PTR_GET_DEFAULT(taskInstanceId_, 0L) };
    inline GetDataQualityEvaluationTaskInstanceResponseBodyDataQualityEvaluationTaskInstanceResults& setTaskInstanceId(int64_t taskInstanceId) { DARABONBA_PTR_SET_VALUE(taskInstanceId_, taskInstanceId) };


  protected:
    std::shared_ptr<int64_t> createTime_ = nullptr;
    std::shared_ptr<vector<Models::GetDataQualityEvaluationTaskInstanceResponseBodyDataQualityEvaluationTaskInstanceResultsDetails>> details_ = nullptr;
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<Models::GetDataQualityEvaluationTaskInstanceResponseBodyDataQualityEvaluationTaskInstanceResultsRule> rule_ = nullptr;
    std::shared_ptr<string> sample_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<int64_t> taskInstanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
