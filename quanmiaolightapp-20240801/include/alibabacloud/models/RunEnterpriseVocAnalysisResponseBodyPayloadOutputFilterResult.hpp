// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNENTERPRISEVOCANALYSISRESPONSEBODYPAYLOADOUTPUTFILTERRESULT_HPP_
#define ALIBABACLOUD_MODELS_RUNENTERPRISEVOCANALYSISRESPONSEBODYPAYLOADOUTPUTFILTERRESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/RunEnterpriseVocAnalysisResponseBodyPayloadOutputFilterResultFilterResults.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuanMiaoLightApp20240801
{
namespace Models
{
  class RunEnterpriseVocAnalysisResponseBodyPayloadOutputFilterResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunEnterpriseVocAnalysisResponseBodyPayloadOutputFilterResult& obj) { 
      DARABONBA_PTR_TO_JSON(filterResults, filterResults_);
    };
    friend void from_json(const Darabonba::Json& j, RunEnterpriseVocAnalysisResponseBodyPayloadOutputFilterResult& obj) { 
      DARABONBA_PTR_FROM_JSON(filterResults, filterResults_);
    };
    RunEnterpriseVocAnalysisResponseBodyPayloadOutputFilterResult() = default ;
    RunEnterpriseVocAnalysisResponseBodyPayloadOutputFilterResult(const RunEnterpriseVocAnalysisResponseBodyPayloadOutputFilterResult &) = default ;
    RunEnterpriseVocAnalysisResponseBodyPayloadOutputFilterResult(RunEnterpriseVocAnalysisResponseBodyPayloadOutputFilterResult &&) = default ;
    RunEnterpriseVocAnalysisResponseBodyPayloadOutputFilterResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunEnterpriseVocAnalysisResponseBodyPayloadOutputFilterResult() = default ;
    RunEnterpriseVocAnalysisResponseBodyPayloadOutputFilterResult& operator=(const RunEnterpriseVocAnalysisResponseBodyPayloadOutputFilterResult &) = default ;
    RunEnterpriseVocAnalysisResponseBodyPayloadOutputFilterResult& operator=(RunEnterpriseVocAnalysisResponseBodyPayloadOutputFilterResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->filterResults_ != nullptr; };
    // filterResults Field Functions 
    bool hasFilterResults() const { return this->filterResults_ != nullptr;};
    void deleteFilterResults() { this->filterResults_ = nullptr;};
    inline const vector<Models::RunEnterpriseVocAnalysisResponseBodyPayloadOutputFilterResultFilterResults> & filterResults() const { DARABONBA_PTR_GET_CONST(filterResults_, vector<Models::RunEnterpriseVocAnalysisResponseBodyPayloadOutputFilterResultFilterResults>) };
    inline vector<Models::RunEnterpriseVocAnalysisResponseBodyPayloadOutputFilterResultFilterResults> filterResults() { DARABONBA_PTR_GET(filterResults_, vector<Models::RunEnterpriseVocAnalysisResponseBodyPayloadOutputFilterResultFilterResults>) };
    inline RunEnterpriseVocAnalysisResponseBodyPayloadOutputFilterResult& setFilterResults(const vector<Models::RunEnterpriseVocAnalysisResponseBodyPayloadOutputFilterResultFilterResults> & filterResults) { DARABONBA_PTR_SET_VALUE(filterResults_, filterResults) };
    inline RunEnterpriseVocAnalysisResponseBodyPayloadOutputFilterResult& setFilterResults(vector<Models::RunEnterpriseVocAnalysisResponseBodyPayloadOutputFilterResultFilterResults> && filterResults) { DARABONBA_PTR_SET_RVALUE(filterResults_, filterResults) };


  protected:
    std::shared_ptr<vector<Models::RunEnterpriseVocAnalysisResponseBodyPayloadOutputFilterResultFilterResults>> filterResults_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuanMiaoLightApp20240801
#endif
