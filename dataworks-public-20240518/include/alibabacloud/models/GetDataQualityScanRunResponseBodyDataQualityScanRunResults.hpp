// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATAQUALITYSCANRUNRESPONSEBODYDATAQUALITYSCANRUNRESULTS_HPP_
#define ALIBABACLOUD_MODELS_GETDATAQUALITYSCANRUNRESPONSEBODYDATAQUALITYSCANRUNRESULTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetDataQualityScanRunResponseBodyDataQualityScanRunResultsDetails.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class GetDataQualityScanRunResponseBodyDataQualityScanRunResults : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDataQualityScanRunResponseBodyDataQualityScanRunResults& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Details, details_);
      DARABONBA_PTR_TO_JSON(Rule, rule_);
      DARABONBA_PTR_TO_JSON(Sample, sample_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, GetDataQualityScanRunResponseBodyDataQualityScanRunResults& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Details, details_);
      DARABONBA_PTR_FROM_JSON(Rule, rule_);
      DARABONBA_PTR_FROM_JSON(Sample, sample_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    GetDataQualityScanRunResponseBodyDataQualityScanRunResults() = default ;
    GetDataQualityScanRunResponseBodyDataQualityScanRunResults(const GetDataQualityScanRunResponseBodyDataQualityScanRunResults &) = default ;
    GetDataQualityScanRunResponseBodyDataQualityScanRunResults(GetDataQualityScanRunResponseBodyDataQualityScanRunResults &&) = default ;
    GetDataQualityScanRunResponseBodyDataQualityScanRunResults(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDataQualityScanRunResponseBodyDataQualityScanRunResults() = default ;
    GetDataQualityScanRunResponseBodyDataQualityScanRunResults& operator=(const GetDataQualityScanRunResponseBodyDataQualityScanRunResults &) = default ;
    GetDataQualityScanRunResponseBodyDataQualityScanRunResults& operator=(GetDataQualityScanRunResponseBodyDataQualityScanRunResults &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->createTime_ != nullptr
        && this->details_ != nullptr && this->rule_ != nullptr && this->sample_ != nullptr && this->status_ != nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline GetDataQualityScanRunResponseBodyDataQualityScanRunResults& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // details Field Functions 
    bool hasDetails() const { return this->details_ != nullptr;};
    void deleteDetails() { this->details_ = nullptr;};
    inline const vector<Models::GetDataQualityScanRunResponseBodyDataQualityScanRunResultsDetails> & details() const { DARABONBA_PTR_GET_CONST(details_, vector<Models::GetDataQualityScanRunResponseBodyDataQualityScanRunResultsDetails>) };
    inline vector<Models::GetDataQualityScanRunResponseBodyDataQualityScanRunResultsDetails> details() { DARABONBA_PTR_GET(details_, vector<Models::GetDataQualityScanRunResponseBodyDataQualityScanRunResultsDetails>) };
    inline GetDataQualityScanRunResponseBodyDataQualityScanRunResults& setDetails(const vector<Models::GetDataQualityScanRunResponseBodyDataQualityScanRunResultsDetails> & details) { DARABONBA_PTR_SET_VALUE(details_, details) };
    inline GetDataQualityScanRunResponseBodyDataQualityScanRunResults& setDetails(vector<Models::GetDataQualityScanRunResponseBodyDataQualityScanRunResultsDetails> && details) { DARABONBA_PTR_SET_RVALUE(details_, details) };


    // rule Field Functions 
    bool hasRule() const { return this->rule_ != nullptr;};
    void deleteRule() { this->rule_ = nullptr;};
    inline string rule() const { DARABONBA_PTR_GET_DEFAULT(rule_, "") };
    inline GetDataQualityScanRunResponseBodyDataQualityScanRunResults& setRule(string rule) { DARABONBA_PTR_SET_VALUE(rule_, rule) };


    // sample Field Functions 
    bool hasSample() const { return this->sample_ != nullptr;};
    void deleteSample() { this->sample_ = nullptr;};
    inline string sample() const { DARABONBA_PTR_GET_DEFAULT(sample_, "") };
    inline GetDataQualityScanRunResponseBodyDataQualityScanRunResults& setSample(string sample) { DARABONBA_PTR_SET_VALUE(sample_, sample) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetDataQualityScanRunResponseBodyDataQualityScanRunResults& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The time when the validation result is generated.
    std::shared_ptr<int64_t> createTime_ = nullptr;
    // The information about the data quality check.
    std::shared_ptr<vector<Models::GetDataQualityScanRunResponseBodyDataQualityScanRunResultsDetails>> details_ = nullptr;
    // The snapshot of the rule Spec at the start of the validation.
    std::shared_ptr<string> rule_ = nullptr;
    // The sample value used in the validation.
    std::shared_ptr<string> sample_ = nullptr;
    // The validation result status.
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
