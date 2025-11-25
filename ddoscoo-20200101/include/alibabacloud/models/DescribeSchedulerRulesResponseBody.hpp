// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESCHEDULERRULESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESCHEDULERRULESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeSchedulerRulesResponseBodySchedulerRules.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeSchedulerRulesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSchedulerRulesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SchedulerRules, schedulerRules_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSchedulerRulesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SchedulerRules, schedulerRules_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeSchedulerRulesResponseBody() = default ;
    DescribeSchedulerRulesResponseBody(const DescribeSchedulerRulesResponseBody &) = default ;
    DescribeSchedulerRulesResponseBody(DescribeSchedulerRulesResponseBody &&) = default ;
    DescribeSchedulerRulesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSchedulerRulesResponseBody() = default ;
    DescribeSchedulerRulesResponseBody& operator=(const DescribeSchedulerRulesResponseBody &) = default ;
    DescribeSchedulerRulesResponseBody& operator=(DescribeSchedulerRulesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->schedulerRules_ == nullptr && return this->totalCount_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSchedulerRulesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // schedulerRules Field Functions 
    bool hasSchedulerRules() const { return this->schedulerRules_ != nullptr;};
    void deleteSchedulerRules() { this->schedulerRules_ = nullptr;};
    inline const vector<DescribeSchedulerRulesResponseBodySchedulerRules> & schedulerRules() const { DARABONBA_PTR_GET_CONST(schedulerRules_, vector<DescribeSchedulerRulesResponseBodySchedulerRules>) };
    inline vector<DescribeSchedulerRulesResponseBodySchedulerRules> schedulerRules() { DARABONBA_PTR_GET(schedulerRules_, vector<DescribeSchedulerRulesResponseBodySchedulerRules>) };
    inline DescribeSchedulerRulesResponseBody& setSchedulerRules(const vector<DescribeSchedulerRulesResponseBodySchedulerRules> & schedulerRules) { DARABONBA_PTR_SET_VALUE(schedulerRules_, schedulerRules) };
    inline DescribeSchedulerRulesResponseBody& setSchedulerRules(vector<DescribeSchedulerRulesResponseBodySchedulerRules> && schedulerRules) { DARABONBA_PTR_SET_RVALUE(schedulerRules_, schedulerRules) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline string totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, "") };
    inline DescribeSchedulerRulesResponseBody& setTotalCount(string totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<vector<DescribeSchedulerRulesResponseBodySchedulerRules>> schedulerRules_ = nullptr;
    std::shared_ptr<string> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
