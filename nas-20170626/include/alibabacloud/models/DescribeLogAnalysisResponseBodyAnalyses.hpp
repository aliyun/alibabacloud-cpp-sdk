// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELOGANALYSISRESPONSEBODYANALYSES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELOGANALYSISRESPONSEBODYANALYSES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeLogAnalysisResponseBodyAnalysesAnalysis.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace NAS20170626
{
namespace Models
{
  class DescribeLogAnalysisResponseBodyAnalyses : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLogAnalysisResponseBodyAnalyses& obj) { 
      DARABONBA_PTR_TO_JSON(Analysis, analysis_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLogAnalysisResponseBodyAnalyses& obj) { 
      DARABONBA_PTR_FROM_JSON(Analysis, analysis_);
    };
    DescribeLogAnalysisResponseBodyAnalyses() = default ;
    DescribeLogAnalysisResponseBodyAnalyses(const DescribeLogAnalysisResponseBodyAnalyses &) = default ;
    DescribeLogAnalysisResponseBodyAnalyses(DescribeLogAnalysisResponseBodyAnalyses &&) = default ;
    DescribeLogAnalysisResponseBodyAnalyses(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLogAnalysisResponseBodyAnalyses() = default ;
    DescribeLogAnalysisResponseBodyAnalyses& operator=(const DescribeLogAnalysisResponseBodyAnalyses &) = default ;
    DescribeLogAnalysisResponseBodyAnalyses& operator=(DescribeLogAnalysisResponseBodyAnalyses &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->analysis_ == nullptr; };
    // analysis Field Functions 
    bool hasAnalysis() const { return this->analysis_ != nullptr;};
    void deleteAnalysis() { this->analysis_ = nullptr;};
    inline const vector<Models::DescribeLogAnalysisResponseBodyAnalysesAnalysis> & analysis() const { DARABONBA_PTR_GET_CONST(analysis_, vector<Models::DescribeLogAnalysisResponseBodyAnalysesAnalysis>) };
    inline vector<Models::DescribeLogAnalysisResponseBodyAnalysesAnalysis> analysis() { DARABONBA_PTR_GET(analysis_, vector<Models::DescribeLogAnalysisResponseBodyAnalysesAnalysis>) };
    inline DescribeLogAnalysisResponseBodyAnalyses& setAnalysis(const vector<Models::DescribeLogAnalysisResponseBodyAnalysesAnalysis> & analysis) { DARABONBA_PTR_SET_VALUE(analysis_, analysis) };
    inline DescribeLogAnalysisResponseBodyAnalyses& setAnalysis(vector<Models::DescribeLogAnalysisResponseBodyAnalysesAnalysis> && analysis) { DARABONBA_PTR_SET_RVALUE(analysis_, analysis) };


  protected:
    std::shared_ptr<vector<Models::DescribeLogAnalysisResponseBodyAnalysesAnalysis>> analysis_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
