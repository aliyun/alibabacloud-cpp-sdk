// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEVALUATIONRESULTSRESPONSEBODYRESULTSMETRICRESULTSACCOUNTSUMMARY_HPP_
#define ALIBABACLOUD_MODELS_LISTEVALUATIONRESULTSRESPONSEBODYRESULTSMETRICRESULTSACCOUNTSUMMARY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Governance20210120
{
namespace Models
{
  class ListEvaluationResultsResponseBodyResultsMetricResultsAccountSummary : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEvaluationResultsResponseBodyResultsMetricResultsAccountSummary& obj) { 
      DARABONBA_PTR_TO_JSON(NonCompliant, nonCompliant_);
    };
    friend void from_json(const Darabonba::Json& j, ListEvaluationResultsResponseBodyResultsMetricResultsAccountSummary& obj) { 
      DARABONBA_PTR_FROM_JSON(NonCompliant, nonCompliant_);
    };
    ListEvaluationResultsResponseBodyResultsMetricResultsAccountSummary() = default ;
    ListEvaluationResultsResponseBodyResultsMetricResultsAccountSummary(const ListEvaluationResultsResponseBodyResultsMetricResultsAccountSummary &) = default ;
    ListEvaluationResultsResponseBodyResultsMetricResultsAccountSummary(ListEvaluationResultsResponseBodyResultsMetricResultsAccountSummary &&) = default ;
    ListEvaluationResultsResponseBodyResultsMetricResultsAccountSummary(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEvaluationResultsResponseBodyResultsMetricResultsAccountSummary() = default ;
    ListEvaluationResultsResponseBodyResultsMetricResultsAccountSummary& operator=(const ListEvaluationResultsResponseBodyResultsMetricResultsAccountSummary &) = default ;
    ListEvaluationResultsResponseBodyResultsMetricResultsAccountSummary& operator=(ListEvaluationResultsResponseBodyResultsMetricResultsAccountSummary &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->nonCompliant_ == nullptr; };
    // nonCompliant Field Functions 
    bool hasNonCompliant() const { return this->nonCompliant_ != nullptr;};
    void deleteNonCompliant() { this->nonCompliant_ = nullptr;};
    inline int32_t nonCompliant() const { DARABONBA_PTR_GET_DEFAULT(nonCompliant_, 0) };
    inline ListEvaluationResultsResponseBodyResultsMetricResultsAccountSummary& setNonCompliant(int32_t nonCompliant) { DARABONBA_PTR_SET_VALUE(nonCompliant_, nonCompliant) };


  protected:
    std::shared_ptr<int32_t> nonCompliant_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Governance20210120
#endif
