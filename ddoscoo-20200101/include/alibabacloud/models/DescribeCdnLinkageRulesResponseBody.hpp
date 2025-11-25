// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECDNLINKAGERULESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECDNLINKAGERULESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeCdnLinkageRulesResponseBodySchedulerRules.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeCdnLinkageRulesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCdnLinkageRulesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SchedulerRules, schedulerRules_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCdnLinkageRulesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SchedulerRules, schedulerRules_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeCdnLinkageRulesResponseBody() = default ;
    DescribeCdnLinkageRulesResponseBody(const DescribeCdnLinkageRulesResponseBody &) = default ;
    DescribeCdnLinkageRulesResponseBody(DescribeCdnLinkageRulesResponseBody &&) = default ;
    DescribeCdnLinkageRulesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCdnLinkageRulesResponseBody() = default ;
    DescribeCdnLinkageRulesResponseBody& operator=(const DescribeCdnLinkageRulesResponseBody &) = default ;
    DescribeCdnLinkageRulesResponseBody& operator=(DescribeCdnLinkageRulesResponseBody &&) = default ;
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
    inline DescribeCdnLinkageRulesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // schedulerRules Field Functions 
    bool hasSchedulerRules() const { return this->schedulerRules_ != nullptr;};
    void deleteSchedulerRules() { this->schedulerRules_ = nullptr;};
    inline const vector<DescribeCdnLinkageRulesResponseBodySchedulerRules> & schedulerRules() const { DARABONBA_PTR_GET_CONST(schedulerRules_, vector<DescribeCdnLinkageRulesResponseBodySchedulerRules>) };
    inline vector<DescribeCdnLinkageRulesResponseBodySchedulerRules> schedulerRules() { DARABONBA_PTR_GET(schedulerRules_, vector<DescribeCdnLinkageRulesResponseBodySchedulerRules>) };
    inline DescribeCdnLinkageRulesResponseBody& setSchedulerRules(const vector<DescribeCdnLinkageRulesResponseBodySchedulerRules> & schedulerRules) { DARABONBA_PTR_SET_VALUE(schedulerRules_, schedulerRules) };
    inline DescribeCdnLinkageRulesResponseBody& setSchedulerRules(vector<DescribeCdnLinkageRulesResponseBodySchedulerRules> && schedulerRules) { DARABONBA_PTR_SET_RVALUE(schedulerRules_, schedulerRules) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline string totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, "") };
    inline DescribeCdnLinkageRulesResponseBody& setTotalCount(string totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<vector<DescribeCdnLinkageRulesResponseBodySchedulerRules>> schedulerRules_ = nullptr;
    std::shared_ptr<string> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
