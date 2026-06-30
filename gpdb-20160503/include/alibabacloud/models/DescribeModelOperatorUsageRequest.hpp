// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMODELOPERATORUSAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMODELOPERATORUSAGEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class DescribeModelOperatorUsageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeModelOperatorUsageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApiKeyIds, apiKeyIds_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(GroupBy, groupBy_);
      DARABONBA_PTR_TO_JSON(Keys, keys_);
      DARABONBA_PTR_TO_JSON(ModelNames, modelNames_);
      DARABONBA_PTR_TO_JSON(Period, period_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeModelOperatorUsageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiKeyIds, apiKeyIds_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(GroupBy, groupBy_);
      DARABONBA_PTR_FROM_JSON(Keys, keys_);
      DARABONBA_PTR_FROM_JSON(ModelNames, modelNames_);
      DARABONBA_PTR_FROM_JSON(Period, period_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeModelOperatorUsageRequest() = default ;
    DescribeModelOperatorUsageRequest(const DescribeModelOperatorUsageRequest &) = default ;
    DescribeModelOperatorUsageRequest(DescribeModelOperatorUsageRequest &&) = default ;
    DescribeModelOperatorUsageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeModelOperatorUsageRequest() = default ;
    DescribeModelOperatorUsageRequest& operator=(const DescribeModelOperatorUsageRequest &) = default ;
    DescribeModelOperatorUsageRequest& operator=(DescribeModelOperatorUsageRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiKeyIds_ == nullptr
        && this->endTime_ == nullptr && this->groupBy_ == nullptr && this->keys_ == nullptr && this->modelNames_ == nullptr && this->period_ == nullptr
        && this->startTime_ == nullptr; };
    // apiKeyIds Field Functions 
    bool hasApiKeyIds() const { return this->apiKeyIds_ != nullptr;};
    void deleteApiKeyIds() { this->apiKeyIds_ = nullptr;};
    inline const vector<int32_t> & getApiKeyIds() const { DARABONBA_PTR_GET_CONST(apiKeyIds_, vector<int32_t>) };
    inline vector<int32_t> getApiKeyIds() { DARABONBA_PTR_GET(apiKeyIds_, vector<int32_t>) };
    inline DescribeModelOperatorUsageRequest& setApiKeyIds(const vector<int32_t> & apiKeyIds) { DARABONBA_PTR_SET_VALUE(apiKeyIds_, apiKeyIds) };
    inline DescribeModelOperatorUsageRequest& setApiKeyIds(vector<int32_t> && apiKeyIds) { DARABONBA_PTR_SET_RVALUE(apiKeyIds_, apiKeyIds) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeModelOperatorUsageRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // groupBy Field Functions 
    bool hasGroupBy() const { return this->groupBy_ != nullptr;};
    void deleteGroupBy() { this->groupBy_ = nullptr;};
    inline string getGroupBy() const { DARABONBA_PTR_GET_DEFAULT(groupBy_, "") };
    inline DescribeModelOperatorUsageRequest& setGroupBy(string groupBy) { DARABONBA_PTR_SET_VALUE(groupBy_, groupBy) };


    // keys Field Functions 
    bool hasKeys() const { return this->keys_ != nullptr;};
    void deleteKeys() { this->keys_ = nullptr;};
    inline const vector<string> & getKeys() const { DARABONBA_PTR_GET_CONST(keys_, vector<string>) };
    inline vector<string> getKeys() { DARABONBA_PTR_GET(keys_, vector<string>) };
    inline DescribeModelOperatorUsageRequest& setKeys(const vector<string> & keys) { DARABONBA_PTR_SET_VALUE(keys_, keys) };
    inline DescribeModelOperatorUsageRequest& setKeys(vector<string> && keys) { DARABONBA_PTR_SET_RVALUE(keys_, keys) };


    // modelNames Field Functions 
    bool hasModelNames() const { return this->modelNames_ != nullptr;};
    void deleteModelNames() { this->modelNames_ = nullptr;};
    inline const vector<string> & getModelNames() const { DARABONBA_PTR_GET_CONST(modelNames_, vector<string>) };
    inline vector<string> getModelNames() { DARABONBA_PTR_GET(modelNames_, vector<string>) };
    inline DescribeModelOperatorUsageRequest& setModelNames(const vector<string> & modelNames) { DARABONBA_PTR_SET_VALUE(modelNames_, modelNames) };
    inline DescribeModelOperatorUsageRequest& setModelNames(vector<string> && modelNames) { DARABONBA_PTR_SET_RVALUE(modelNames_, modelNames) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline int32_t getPeriod() const { DARABONBA_PTR_GET_DEFAULT(period_, 0) };
    inline DescribeModelOperatorUsageRequest& setPeriod(int32_t period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeModelOperatorUsageRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    shared_ptr<vector<int32_t>> apiKeyIds_ {};
    shared_ptr<string> endTime_ {};
    shared_ptr<string> groupBy_ {};
    shared_ptr<vector<string>> keys_ {};
    shared_ptr<vector<string>> modelNames_ {};
    shared_ptr<int32_t> period_ {};
    shared_ptr<string> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
