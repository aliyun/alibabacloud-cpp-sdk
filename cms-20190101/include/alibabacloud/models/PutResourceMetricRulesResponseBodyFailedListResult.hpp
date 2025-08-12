// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUTRESOURCEMETRICRULESRESPONSEBODYFAILEDLISTRESULT_HPP_
#define ALIBABACLOUD_MODELS_PUTRESOURCEMETRICRULESRESPONSEBODYFAILEDLISTRESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/PutResourceMetricRulesResponseBodyFailedListResultTarget.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class PutResourceMetricRulesResponseBodyFailedListResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PutResourceMetricRulesResponseBodyFailedListResult& obj) { 
      DARABONBA_PTR_TO_JSON(Target, target_);
    };
    friend void from_json(const Darabonba::Json& j, PutResourceMetricRulesResponseBodyFailedListResult& obj) { 
      DARABONBA_PTR_FROM_JSON(Target, target_);
    };
    PutResourceMetricRulesResponseBodyFailedListResult() = default ;
    PutResourceMetricRulesResponseBodyFailedListResult(const PutResourceMetricRulesResponseBodyFailedListResult &) = default ;
    PutResourceMetricRulesResponseBodyFailedListResult(PutResourceMetricRulesResponseBodyFailedListResult &&) = default ;
    PutResourceMetricRulesResponseBodyFailedListResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PutResourceMetricRulesResponseBodyFailedListResult() = default ;
    PutResourceMetricRulesResponseBodyFailedListResult& operator=(const PutResourceMetricRulesResponseBodyFailedListResult &) = default ;
    PutResourceMetricRulesResponseBodyFailedListResult& operator=(PutResourceMetricRulesResponseBodyFailedListResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->target_ != nullptr; };
    // target Field Functions 
    bool hasTarget() const { return this->target_ != nullptr;};
    void deleteTarget() { this->target_ = nullptr;};
    inline const vector<Models::PutResourceMetricRulesResponseBodyFailedListResultTarget> & target() const { DARABONBA_PTR_GET_CONST(target_, vector<Models::PutResourceMetricRulesResponseBodyFailedListResultTarget>) };
    inline vector<Models::PutResourceMetricRulesResponseBodyFailedListResultTarget> target() { DARABONBA_PTR_GET(target_, vector<Models::PutResourceMetricRulesResponseBodyFailedListResultTarget>) };
    inline PutResourceMetricRulesResponseBodyFailedListResult& setTarget(const vector<Models::PutResourceMetricRulesResponseBodyFailedListResultTarget> & target) { DARABONBA_PTR_SET_VALUE(target_, target) };
    inline PutResourceMetricRulesResponseBodyFailedListResult& setTarget(vector<Models::PutResourceMetricRulesResponseBodyFailedListResultTarget> && target) { DARABONBA_PTR_SET_RVALUE(target_, target) };


  protected:
    std::shared_ptr<vector<Models::PutResourceMetricRulesResponseBodyFailedListResultTarget>> target_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
