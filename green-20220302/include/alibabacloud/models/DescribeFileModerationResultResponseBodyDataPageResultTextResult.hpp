// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEFILEMODERATIONRESULTRESPONSEBODYDATAPAGERESULTTEXTRESULT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEFILEMODERATIONRESULTRESPONSEBODYDATAPAGERESULTTEXTRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220302
{
namespace Models
{
  class DescribeFileModerationResultResponseBodyDataPageResultTextResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeFileModerationResultResponseBodyDataPageResultTextResult& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Descriptions, descriptions_);
      DARABONBA_PTR_TO_JSON(Labels, labels_);
      DARABONBA_PTR_TO_JSON(RiskLevel, riskLevel_);
      DARABONBA_PTR_TO_JSON(RiskTips, riskTips_);
      DARABONBA_PTR_TO_JSON(RiskWords, riskWords_);
      DARABONBA_PTR_TO_JSON(Service, service_);
      DARABONBA_PTR_TO_JSON(Text, text_);
      DARABONBA_PTR_TO_JSON(TextSegment, textSegment_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeFileModerationResultResponseBodyDataPageResultTextResult& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Descriptions, descriptions_);
      DARABONBA_PTR_FROM_JSON(Labels, labels_);
      DARABONBA_PTR_FROM_JSON(RiskLevel, riskLevel_);
      DARABONBA_PTR_FROM_JSON(RiskTips, riskTips_);
      DARABONBA_PTR_FROM_JSON(RiskWords, riskWords_);
      DARABONBA_PTR_FROM_JSON(Service, service_);
      DARABONBA_PTR_FROM_JSON(Text, text_);
      DARABONBA_PTR_FROM_JSON(TextSegment, textSegment_);
    };
    DescribeFileModerationResultResponseBodyDataPageResultTextResult() = default ;
    DescribeFileModerationResultResponseBodyDataPageResultTextResult(const DescribeFileModerationResultResponseBodyDataPageResultTextResult &) = default ;
    DescribeFileModerationResultResponseBodyDataPageResultTextResult(DescribeFileModerationResultResponseBodyDataPageResultTextResult &&) = default ;
    DescribeFileModerationResultResponseBodyDataPageResultTextResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeFileModerationResultResponseBodyDataPageResultTextResult() = default ;
    DescribeFileModerationResultResponseBodyDataPageResultTextResult& operator=(const DescribeFileModerationResultResponseBodyDataPageResultTextResult &) = default ;
    DescribeFileModerationResultResponseBodyDataPageResultTextResult& operator=(DescribeFileModerationResultResponseBodyDataPageResultTextResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && return this->descriptions_ == nullptr && return this->labels_ == nullptr && return this->riskLevel_ == nullptr && return this->riskTips_ == nullptr && return this->riskWords_ == nullptr
        && return this->service_ == nullptr && return this->text_ == nullptr && return this->textSegment_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeFileModerationResultResponseBodyDataPageResultTextResult& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // descriptions Field Functions 
    bool hasDescriptions() const { return this->descriptions_ != nullptr;};
    void deleteDescriptions() { this->descriptions_ = nullptr;};
    inline string descriptions() const { DARABONBA_PTR_GET_DEFAULT(descriptions_, "") };
    inline DescribeFileModerationResultResponseBodyDataPageResultTextResult& setDescriptions(string descriptions) { DARABONBA_PTR_SET_VALUE(descriptions_, descriptions) };


    // labels Field Functions 
    bool hasLabels() const { return this->labels_ != nullptr;};
    void deleteLabels() { this->labels_ = nullptr;};
    inline string labels() const { DARABONBA_PTR_GET_DEFAULT(labels_, "") };
    inline DescribeFileModerationResultResponseBodyDataPageResultTextResult& setLabels(string labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };


    // riskLevel Field Functions 
    bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
    void deleteRiskLevel() { this->riskLevel_ = nullptr;};
    inline string riskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, "") };
    inline DescribeFileModerationResultResponseBodyDataPageResultTextResult& setRiskLevel(string riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


    // riskTips Field Functions 
    bool hasRiskTips() const { return this->riskTips_ != nullptr;};
    void deleteRiskTips() { this->riskTips_ = nullptr;};
    inline string riskTips() const { DARABONBA_PTR_GET_DEFAULT(riskTips_, "") };
    inline DescribeFileModerationResultResponseBodyDataPageResultTextResult& setRiskTips(string riskTips) { DARABONBA_PTR_SET_VALUE(riskTips_, riskTips) };


    // riskWords Field Functions 
    bool hasRiskWords() const { return this->riskWords_ != nullptr;};
    void deleteRiskWords() { this->riskWords_ = nullptr;};
    inline string riskWords() const { DARABONBA_PTR_GET_DEFAULT(riskWords_, "") };
    inline DescribeFileModerationResultResponseBodyDataPageResultTextResult& setRiskWords(string riskWords) { DARABONBA_PTR_SET_VALUE(riskWords_, riskWords) };


    // service Field Functions 
    bool hasService() const { return this->service_ != nullptr;};
    void deleteService() { this->service_ = nullptr;};
    inline string service() const { DARABONBA_PTR_GET_DEFAULT(service_, "") };
    inline DescribeFileModerationResultResponseBodyDataPageResultTextResult& setService(string service) { DARABONBA_PTR_SET_VALUE(service_, service) };


    // text Field Functions 
    bool hasText() const { return this->text_ != nullptr;};
    void deleteText() { this->text_ = nullptr;};
    inline string text() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
    inline DescribeFileModerationResultResponseBodyDataPageResultTextResult& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


    // textSegment Field Functions 
    bool hasTextSegment() const { return this->textSegment_ != nullptr;};
    void deleteTextSegment() { this->textSegment_ = nullptr;};
    inline string textSegment() const { DARABONBA_PTR_GET_DEFAULT(textSegment_, "") };
    inline DescribeFileModerationResultResponseBodyDataPageResultTextResult& setTextSegment(string textSegment) { DARABONBA_PTR_SET_VALUE(textSegment_, textSegment) };


  protected:
    // The description.
    std::shared_ptr<string> description_ = nullptr;
    // The description of the labels.
    std::shared_ptr<string> descriptions_ = nullptr;
    // The details of the labels.
    std::shared_ptr<string> labels_ = nullptr;
    // Risk Level
    std::shared_ptr<string> riskLevel_ = nullptr;
    // The risk details that are hit.
    std::shared_ptr<string> riskTips_ = nullptr;
    // The risk words that are hit.
    std::shared_ptr<string> riskWords_ = nullptr;
    // The moderation service.
    std::shared_ptr<string> service_ = nullptr;
    // The text content.
    std::shared_ptr<string> text_ = nullptr;
    // The text segmentation information.
    std::shared_ptr<string> textSegment_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220302
#endif
