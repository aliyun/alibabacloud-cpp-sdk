// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEFILEMODERATIONRESULTRESPONSEBODYDATAPAGESUMMARYTEXTSUMMARY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEFILEMODERATIONRESULTRESPONSEBODYDATAPAGESUMMARYTEXTSUMMARY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeFileModerationResultResponseBodyDataPageSummaryTextSummaryTextLabels.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220302
{
namespace Models
{
  class DescribeFileModerationResultResponseBodyDataPageSummaryTextSummary : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeFileModerationResultResponseBodyDataPageSummaryTextSummary& obj) { 
      DARABONBA_PTR_TO_JSON(RiskLevel, riskLevel_);
      DARABONBA_PTR_TO_JSON(TextLabels, textLabels_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeFileModerationResultResponseBodyDataPageSummaryTextSummary& obj) { 
      DARABONBA_PTR_FROM_JSON(RiskLevel, riskLevel_);
      DARABONBA_PTR_FROM_JSON(TextLabels, textLabels_);
    };
    DescribeFileModerationResultResponseBodyDataPageSummaryTextSummary() = default ;
    DescribeFileModerationResultResponseBodyDataPageSummaryTextSummary(const DescribeFileModerationResultResponseBodyDataPageSummaryTextSummary &) = default ;
    DescribeFileModerationResultResponseBodyDataPageSummaryTextSummary(DescribeFileModerationResultResponseBodyDataPageSummaryTextSummary &&) = default ;
    DescribeFileModerationResultResponseBodyDataPageSummaryTextSummary(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeFileModerationResultResponseBodyDataPageSummaryTextSummary() = default ;
    DescribeFileModerationResultResponseBodyDataPageSummaryTextSummary& operator=(const DescribeFileModerationResultResponseBodyDataPageSummaryTextSummary &) = default ;
    DescribeFileModerationResultResponseBodyDataPageSummaryTextSummary& operator=(DescribeFileModerationResultResponseBodyDataPageSummaryTextSummary &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->riskLevel_ == nullptr
        && return this->textLabels_ == nullptr; };
    // riskLevel Field Functions 
    bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
    void deleteRiskLevel() { this->riskLevel_ = nullptr;};
    inline string riskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, "") };
    inline DescribeFileModerationResultResponseBodyDataPageSummaryTextSummary& setRiskLevel(string riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


    // textLabels Field Functions 
    bool hasTextLabels() const { return this->textLabels_ != nullptr;};
    void deleteTextLabels() { this->textLabels_ = nullptr;};
    inline const vector<Models::DescribeFileModerationResultResponseBodyDataPageSummaryTextSummaryTextLabels> & textLabels() const { DARABONBA_PTR_GET_CONST(textLabels_, vector<Models::DescribeFileModerationResultResponseBodyDataPageSummaryTextSummaryTextLabels>) };
    inline vector<Models::DescribeFileModerationResultResponseBodyDataPageSummaryTextSummaryTextLabels> textLabels() { DARABONBA_PTR_GET(textLabels_, vector<Models::DescribeFileModerationResultResponseBodyDataPageSummaryTextSummaryTextLabels>) };
    inline DescribeFileModerationResultResponseBodyDataPageSummaryTextSummary& setTextLabels(const vector<Models::DescribeFileModerationResultResponseBodyDataPageSummaryTextSummaryTextLabels> & textLabels) { DARABONBA_PTR_SET_VALUE(textLabels_, textLabels) };
    inline DescribeFileModerationResultResponseBodyDataPageSummaryTextSummary& setTextLabels(vector<Models::DescribeFileModerationResultResponseBodyDataPageSummaryTextSummaryTextLabels> && textLabels) { DARABONBA_PTR_SET_RVALUE(textLabels_, textLabels) };


  protected:
    // Risk Level
    std::shared_ptr<string> riskLevel_ = nullptr;
    // Text Label
    std::shared_ptr<vector<Models::DescribeFileModerationResultResponseBodyDataPageSummaryTextSummaryTextLabels>> textLabels_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220302
#endif
