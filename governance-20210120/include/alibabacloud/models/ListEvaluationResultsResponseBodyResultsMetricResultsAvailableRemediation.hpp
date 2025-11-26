// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEVALUATIONRESULTSRESPONSEBODYRESULTSMETRICRESULTSAVAILABLEREMEDIATION_HPP_
#define ALIBABACLOUD_MODELS_LISTEVALUATIONRESULTSRESPONSEBODYRESULTSMETRICRESULTSAVAILABLEREMEDIATION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Governance20210120
{
namespace Models
{
  class ListEvaluationResultsResponseBodyResultsMetricResultsAvailableRemediation : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEvaluationResultsResponseBodyResultsMetricResultsAvailableRemediation& obj) { 
      DARABONBA_PTR_TO_JSON(RemediationTemplateId, remediationTemplateId_);
    };
    friend void from_json(const Darabonba::Json& j, ListEvaluationResultsResponseBodyResultsMetricResultsAvailableRemediation& obj) { 
      DARABONBA_PTR_FROM_JSON(RemediationTemplateId, remediationTemplateId_);
    };
    ListEvaluationResultsResponseBodyResultsMetricResultsAvailableRemediation() = default ;
    ListEvaluationResultsResponseBodyResultsMetricResultsAvailableRemediation(const ListEvaluationResultsResponseBodyResultsMetricResultsAvailableRemediation &) = default ;
    ListEvaluationResultsResponseBodyResultsMetricResultsAvailableRemediation(ListEvaluationResultsResponseBodyResultsMetricResultsAvailableRemediation &&) = default ;
    ListEvaluationResultsResponseBodyResultsMetricResultsAvailableRemediation(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEvaluationResultsResponseBodyResultsMetricResultsAvailableRemediation() = default ;
    ListEvaluationResultsResponseBodyResultsMetricResultsAvailableRemediation& operator=(const ListEvaluationResultsResponseBodyResultsMetricResultsAvailableRemediation &) = default ;
    ListEvaluationResultsResponseBodyResultsMetricResultsAvailableRemediation& operator=(ListEvaluationResultsResponseBodyResultsMetricResultsAvailableRemediation &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->remediationTemplateId_ == nullptr; };
    // remediationTemplateId Field Functions 
    bool hasRemediationTemplateId() const { return this->remediationTemplateId_ != nullptr;};
    void deleteRemediationTemplateId() { this->remediationTemplateId_ = nullptr;};
    inline string remediationTemplateId() const { DARABONBA_PTR_GET_DEFAULT(remediationTemplateId_, "") };
    inline ListEvaluationResultsResponseBodyResultsMetricResultsAvailableRemediation& setRemediationTemplateId(string remediationTemplateId) { DARABONBA_PTR_SET_VALUE(remediationTemplateId_, remediationTemplateId) };


  protected:
    std::shared_ptr<string> remediationTemplateId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Governance20210120
#endif
