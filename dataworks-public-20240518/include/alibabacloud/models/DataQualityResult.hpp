// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DATAQUALITYRESULT_HPP_
#define ALIBABACLOUD_MODELS_DATAQUALITYRESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DataQualityResultDetails.hpp>
#include <alibabacloud/models/DataQualityResultRule.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class DataQualityResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DataQualityResult& obj) { 
      DARABONBA_PTR_TO_JSON(Details, details_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Rule, rule_);
      DARABONBA_PTR_TO_JSON(Sample, sample_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TaskInstanceId, taskInstanceId_);
    };
    friend void from_json(const Darabonba::Json& j, DataQualityResult& obj) { 
      DARABONBA_PTR_FROM_JSON(Details, details_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Rule, rule_);
      DARABONBA_PTR_FROM_JSON(Sample, sample_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TaskInstanceId, taskInstanceId_);
    };
    DataQualityResult() = default ;
    DataQualityResult(const DataQualityResult &) = default ;
    DataQualityResult(DataQualityResult &&) = default ;
    DataQualityResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DataQualityResult() = default ;
    DataQualityResult& operator=(const DataQualityResult &) = default ;
    DataQualityResult& operator=(DataQualityResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->details_ == nullptr
        && return this->id_ == nullptr && return this->rule_ == nullptr && return this->sample_ == nullptr && return this->status_ == nullptr && return this->taskInstanceId_ == nullptr; };
    // details Field Functions 
    bool hasDetails() const { return this->details_ != nullptr;};
    void deleteDetails() { this->details_ = nullptr;};
    inline const vector<DataQualityResultDetails> & details() const { DARABONBA_PTR_GET_CONST(details_, vector<DataQualityResultDetails>) };
    inline vector<DataQualityResultDetails> details() { DARABONBA_PTR_GET(details_, vector<DataQualityResultDetails>) };
    inline DataQualityResult& setDetails(const vector<DataQualityResultDetails> & details) { DARABONBA_PTR_SET_VALUE(details_, details) };
    inline DataQualityResult& setDetails(vector<DataQualityResultDetails> && details) { DARABONBA_PTR_SET_RVALUE(details_, details) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline DataQualityResult& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // rule Field Functions 
    bool hasRule() const { return this->rule_ != nullptr;};
    void deleteRule() { this->rule_ = nullptr;};
    inline const DataQualityResultRule & rule() const { DARABONBA_PTR_GET_CONST(rule_, DataQualityResultRule) };
    inline DataQualityResultRule rule() { DARABONBA_PTR_GET(rule_, DataQualityResultRule) };
    inline DataQualityResult& setRule(const DataQualityResultRule & rule) { DARABONBA_PTR_SET_VALUE(rule_, rule) };
    inline DataQualityResult& setRule(DataQualityResultRule && rule) { DARABONBA_PTR_SET_RVALUE(rule_, rule) };


    // sample Field Functions 
    bool hasSample() const { return this->sample_ != nullptr;};
    void deleteSample() { this->sample_ = nullptr;};
    inline string sample() const { DARABONBA_PTR_GET_DEFAULT(sample_, "") };
    inline DataQualityResult& setSample(string sample) { DARABONBA_PTR_SET_VALUE(sample_, sample) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DataQualityResult& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // taskInstanceId Field Functions 
    bool hasTaskInstanceId() const { return this->taskInstanceId_ != nullptr;};
    void deleteTaskInstanceId() { this->taskInstanceId_ = nullptr;};
    inline int64_t taskInstanceId() const { DARABONBA_PTR_GET_DEFAULT(taskInstanceId_, 0L) };
    inline DataQualityResult& setTaskInstanceId(int64_t taskInstanceId) { DARABONBA_PTR_SET_VALUE(taskInstanceId_, taskInstanceId) };


  protected:
    std::shared_ptr<vector<DataQualityResultDetails>> details_ = nullptr;
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<DataQualityResultRule> rule_ = nullptr;
    std::shared_ptr<string> sample_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<int64_t> taskInstanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
