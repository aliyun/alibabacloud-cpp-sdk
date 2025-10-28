// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEFILEMODERATIONRESULTRESPONSEBODYDATAPAGESUMMARYIMAGESUMMARY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEFILEMODERATIONRESULTRESPONSEBODYDATAPAGESUMMARYIMAGESUMMARY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeFileModerationResultResponseBodyDataPageSummaryImageSummaryImageLabels.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220302
{
namespace Models
{
  class DescribeFileModerationResultResponseBodyDataPageSummaryImageSummary : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeFileModerationResultResponseBodyDataPageSummaryImageSummary& obj) { 
      DARABONBA_PTR_TO_JSON(ImageLabels, imageLabels_);
      DARABONBA_PTR_TO_JSON(RiskLevel, riskLevel_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeFileModerationResultResponseBodyDataPageSummaryImageSummary& obj) { 
      DARABONBA_PTR_FROM_JSON(ImageLabels, imageLabels_);
      DARABONBA_PTR_FROM_JSON(RiskLevel, riskLevel_);
    };
    DescribeFileModerationResultResponseBodyDataPageSummaryImageSummary() = default ;
    DescribeFileModerationResultResponseBodyDataPageSummaryImageSummary(const DescribeFileModerationResultResponseBodyDataPageSummaryImageSummary &) = default ;
    DescribeFileModerationResultResponseBodyDataPageSummaryImageSummary(DescribeFileModerationResultResponseBodyDataPageSummaryImageSummary &&) = default ;
    DescribeFileModerationResultResponseBodyDataPageSummaryImageSummary(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeFileModerationResultResponseBodyDataPageSummaryImageSummary() = default ;
    DescribeFileModerationResultResponseBodyDataPageSummaryImageSummary& operator=(const DescribeFileModerationResultResponseBodyDataPageSummaryImageSummary &) = default ;
    DescribeFileModerationResultResponseBodyDataPageSummaryImageSummary& operator=(DescribeFileModerationResultResponseBodyDataPageSummaryImageSummary &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->imageLabels_ == nullptr
        && return this->riskLevel_ == nullptr; };
    // imageLabels Field Functions 
    bool hasImageLabels() const { return this->imageLabels_ != nullptr;};
    void deleteImageLabels() { this->imageLabels_ = nullptr;};
    inline const vector<Models::DescribeFileModerationResultResponseBodyDataPageSummaryImageSummaryImageLabels> & imageLabels() const { DARABONBA_PTR_GET_CONST(imageLabels_, vector<Models::DescribeFileModerationResultResponseBodyDataPageSummaryImageSummaryImageLabels>) };
    inline vector<Models::DescribeFileModerationResultResponseBodyDataPageSummaryImageSummaryImageLabels> imageLabels() { DARABONBA_PTR_GET(imageLabels_, vector<Models::DescribeFileModerationResultResponseBodyDataPageSummaryImageSummaryImageLabels>) };
    inline DescribeFileModerationResultResponseBodyDataPageSummaryImageSummary& setImageLabels(const vector<Models::DescribeFileModerationResultResponseBodyDataPageSummaryImageSummaryImageLabels> & imageLabels) { DARABONBA_PTR_SET_VALUE(imageLabels_, imageLabels) };
    inline DescribeFileModerationResultResponseBodyDataPageSummaryImageSummary& setImageLabels(vector<Models::DescribeFileModerationResultResponseBodyDataPageSummaryImageSummaryImageLabels> && imageLabels) { DARABONBA_PTR_SET_RVALUE(imageLabels_, imageLabels) };


    // riskLevel Field Functions 
    bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
    void deleteRiskLevel() { this->riskLevel_ = nullptr;};
    inline string riskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, "") };
    inline DescribeFileModerationResultResponseBodyDataPageSummaryImageSummary& setRiskLevel(string riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


  protected:
    // Image Label
    std::shared_ptr<vector<Models::DescribeFileModerationResultResponseBodyDataPageSummaryImageSummaryImageLabels>> imageLabels_ = nullptr;
    // Risk Level
    std::shared_ptr<string> riskLevel_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220302
#endif
