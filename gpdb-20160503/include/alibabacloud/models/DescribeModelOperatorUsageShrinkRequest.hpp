// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMODELOPERATORUSAGESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMODELOPERATORUSAGESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class DescribeModelOperatorUsageShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeModelOperatorUsageShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApiKeyIds, apiKeyIdsShrink_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(GroupBy, groupBy_);
      DARABONBA_PTR_TO_JSON(Keys, keysShrink_);
      DARABONBA_PTR_TO_JSON(ModelNames, modelNamesShrink_);
      DARABONBA_PTR_TO_JSON(Period, period_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeModelOperatorUsageShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiKeyIds, apiKeyIdsShrink_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(GroupBy, groupBy_);
      DARABONBA_PTR_FROM_JSON(Keys, keysShrink_);
      DARABONBA_PTR_FROM_JSON(ModelNames, modelNamesShrink_);
      DARABONBA_PTR_FROM_JSON(Period, period_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeModelOperatorUsageShrinkRequest() = default ;
    DescribeModelOperatorUsageShrinkRequest(const DescribeModelOperatorUsageShrinkRequest &) = default ;
    DescribeModelOperatorUsageShrinkRequest(DescribeModelOperatorUsageShrinkRequest &&) = default ;
    DescribeModelOperatorUsageShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeModelOperatorUsageShrinkRequest() = default ;
    DescribeModelOperatorUsageShrinkRequest& operator=(const DescribeModelOperatorUsageShrinkRequest &) = default ;
    DescribeModelOperatorUsageShrinkRequest& operator=(DescribeModelOperatorUsageShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiKeyIdsShrink_ == nullptr
        && this->endTime_ == nullptr && this->groupBy_ == nullptr && this->keysShrink_ == nullptr && this->modelNamesShrink_ == nullptr && this->period_ == nullptr
        && this->startTime_ == nullptr; };
    // apiKeyIdsShrink Field Functions 
    bool hasApiKeyIdsShrink() const { return this->apiKeyIdsShrink_ != nullptr;};
    void deleteApiKeyIdsShrink() { this->apiKeyIdsShrink_ = nullptr;};
    inline string getApiKeyIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(apiKeyIdsShrink_, "") };
    inline DescribeModelOperatorUsageShrinkRequest& setApiKeyIdsShrink(string apiKeyIdsShrink) { DARABONBA_PTR_SET_VALUE(apiKeyIdsShrink_, apiKeyIdsShrink) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeModelOperatorUsageShrinkRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // groupBy Field Functions 
    bool hasGroupBy() const { return this->groupBy_ != nullptr;};
    void deleteGroupBy() { this->groupBy_ = nullptr;};
    inline string getGroupBy() const { DARABONBA_PTR_GET_DEFAULT(groupBy_, "") };
    inline DescribeModelOperatorUsageShrinkRequest& setGroupBy(string groupBy) { DARABONBA_PTR_SET_VALUE(groupBy_, groupBy) };


    // keysShrink Field Functions 
    bool hasKeysShrink() const { return this->keysShrink_ != nullptr;};
    void deleteKeysShrink() { this->keysShrink_ = nullptr;};
    inline string getKeysShrink() const { DARABONBA_PTR_GET_DEFAULT(keysShrink_, "") };
    inline DescribeModelOperatorUsageShrinkRequest& setKeysShrink(string keysShrink) { DARABONBA_PTR_SET_VALUE(keysShrink_, keysShrink) };


    // modelNamesShrink Field Functions 
    bool hasModelNamesShrink() const { return this->modelNamesShrink_ != nullptr;};
    void deleteModelNamesShrink() { this->modelNamesShrink_ = nullptr;};
    inline string getModelNamesShrink() const { DARABONBA_PTR_GET_DEFAULT(modelNamesShrink_, "") };
    inline DescribeModelOperatorUsageShrinkRequest& setModelNamesShrink(string modelNamesShrink) { DARABONBA_PTR_SET_VALUE(modelNamesShrink_, modelNamesShrink) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline int32_t getPeriod() const { DARABONBA_PTR_GET_DEFAULT(period_, 0) };
    inline DescribeModelOperatorUsageShrinkRequest& setPeriod(int32_t period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeModelOperatorUsageShrinkRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    shared_ptr<string> apiKeyIdsShrink_ {};
    shared_ptr<string> endTime_ {};
    shared_ptr<string> groupBy_ {};
    shared_ptr<string> keysShrink_ {};
    shared_ptr<string> modelNamesShrink_ {};
    shared_ptr<int32_t> period_ {};
    shared_ptr<string> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
