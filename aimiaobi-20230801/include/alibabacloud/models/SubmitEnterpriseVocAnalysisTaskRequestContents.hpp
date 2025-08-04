// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITENTERPRISEVOCANALYSISTASKREQUESTCONTENTS_HPP_
#define ALIBABACLOUD_MODELS_SUBMITENTERPRISEVOCANALYSISTASKREQUESTCONTENTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class SubmitEnterpriseVocAnalysisTaskRequestContents : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitEnterpriseVocAnalysisTaskRequestContents& obj) { 
      DARABONBA_PTR_TO_JSON(ExtraInfo, extraInfo_);
      DARABONBA_PTR_TO_JSON(Text, text_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitEnterpriseVocAnalysisTaskRequestContents& obj) { 
      DARABONBA_PTR_FROM_JSON(ExtraInfo, extraInfo_);
      DARABONBA_PTR_FROM_JSON(Text, text_);
    };
    SubmitEnterpriseVocAnalysisTaskRequestContents() = default ;
    SubmitEnterpriseVocAnalysisTaskRequestContents(const SubmitEnterpriseVocAnalysisTaskRequestContents &) = default ;
    SubmitEnterpriseVocAnalysisTaskRequestContents(SubmitEnterpriseVocAnalysisTaskRequestContents &&) = default ;
    SubmitEnterpriseVocAnalysisTaskRequestContents(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitEnterpriseVocAnalysisTaskRequestContents() = default ;
    SubmitEnterpriseVocAnalysisTaskRequestContents& operator=(const SubmitEnterpriseVocAnalysisTaskRequestContents &) = default ;
    SubmitEnterpriseVocAnalysisTaskRequestContents& operator=(SubmitEnterpriseVocAnalysisTaskRequestContents &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->extraInfo_ != nullptr
        && this->text_ != nullptr; };
    // extraInfo Field Functions 
    bool hasExtraInfo() const { return this->extraInfo_ != nullptr;};
    void deleteExtraInfo() { this->extraInfo_ = nullptr;};
    inline string extraInfo() const { DARABONBA_PTR_GET_DEFAULT(extraInfo_, "") };
    inline SubmitEnterpriseVocAnalysisTaskRequestContents& setExtraInfo(string extraInfo) { DARABONBA_PTR_SET_VALUE(extraInfo_, extraInfo) };


    // text Field Functions 
    bool hasText() const { return this->text_ != nullptr;};
    void deleteText() { this->text_ = nullptr;};
    inline string text() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
    inline SubmitEnterpriseVocAnalysisTaskRequestContents& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


  protected:
    std::shared_ptr<string> extraInfo_ = nullptr;
    std::shared_ptr<string> text_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
