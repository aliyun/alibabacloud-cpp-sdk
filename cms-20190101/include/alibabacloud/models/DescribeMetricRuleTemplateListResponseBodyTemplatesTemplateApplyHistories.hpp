// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMETRICRULETEMPLATELISTRESPONSEBODYTEMPLATESTEMPLATEAPPLYHISTORIES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMETRICRULETEMPLATELISTRESPONSEBODYTEMPLATESTEMPLATEAPPLYHISTORIES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeMetricRuleTemplateListResponseBodyTemplatesTemplateApplyHistoriesApplyHistory.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeMetricRuleTemplateListResponseBodyTemplatesTemplateApplyHistories : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMetricRuleTemplateListResponseBodyTemplatesTemplateApplyHistories& obj) { 
      DARABONBA_PTR_TO_JSON(ApplyHistory, applyHistory_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMetricRuleTemplateListResponseBodyTemplatesTemplateApplyHistories& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplyHistory, applyHistory_);
    };
    DescribeMetricRuleTemplateListResponseBodyTemplatesTemplateApplyHistories() = default ;
    DescribeMetricRuleTemplateListResponseBodyTemplatesTemplateApplyHistories(const DescribeMetricRuleTemplateListResponseBodyTemplatesTemplateApplyHistories &) = default ;
    DescribeMetricRuleTemplateListResponseBodyTemplatesTemplateApplyHistories(DescribeMetricRuleTemplateListResponseBodyTemplatesTemplateApplyHistories &&) = default ;
    DescribeMetricRuleTemplateListResponseBodyTemplatesTemplateApplyHistories(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMetricRuleTemplateListResponseBodyTemplatesTemplateApplyHistories() = default ;
    DescribeMetricRuleTemplateListResponseBodyTemplatesTemplateApplyHistories& operator=(const DescribeMetricRuleTemplateListResponseBodyTemplatesTemplateApplyHistories &) = default ;
    DescribeMetricRuleTemplateListResponseBodyTemplatesTemplateApplyHistories& operator=(DescribeMetricRuleTemplateListResponseBodyTemplatesTemplateApplyHistories &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->applyHistory_ != nullptr; };
    // applyHistory Field Functions 
    bool hasApplyHistory() const { return this->applyHistory_ != nullptr;};
    void deleteApplyHistory() { this->applyHistory_ = nullptr;};
    inline const vector<Models::DescribeMetricRuleTemplateListResponseBodyTemplatesTemplateApplyHistoriesApplyHistory> & applyHistory() const { DARABONBA_PTR_GET_CONST(applyHistory_, vector<Models::DescribeMetricRuleTemplateListResponseBodyTemplatesTemplateApplyHistoriesApplyHistory>) };
    inline vector<Models::DescribeMetricRuleTemplateListResponseBodyTemplatesTemplateApplyHistoriesApplyHistory> applyHistory() { DARABONBA_PTR_GET(applyHistory_, vector<Models::DescribeMetricRuleTemplateListResponseBodyTemplatesTemplateApplyHistoriesApplyHistory>) };
    inline DescribeMetricRuleTemplateListResponseBodyTemplatesTemplateApplyHistories& setApplyHistory(const vector<Models::DescribeMetricRuleTemplateListResponseBodyTemplatesTemplateApplyHistoriesApplyHistory> & applyHistory) { DARABONBA_PTR_SET_VALUE(applyHistory_, applyHistory) };
    inline DescribeMetricRuleTemplateListResponseBodyTemplatesTemplateApplyHistories& setApplyHistory(vector<Models::DescribeMetricRuleTemplateListResponseBodyTemplatesTemplateApplyHistoriesApplyHistory> && applyHistory) { DARABONBA_PTR_SET_RVALUE(applyHistory_, applyHistory) };


  protected:
    std::shared_ptr<vector<Models::DescribeMetricRuleTemplateListResponseBodyTemplatesTemplateApplyHistoriesApplyHistory>> applyHistory_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
