// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITENTERPRISEVOCANALYSISTASKREQUESTCONTENTTAGS_HPP_
#define ALIBABACLOUD_MODELS_SUBMITENTERPRISEVOCANALYSISTASKREQUESTCONTENTTAGS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class SubmitEnterpriseVocAnalysisTaskRequestContentTags : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitEnterpriseVocAnalysisTaskRequestContentTags& obj) { 
      DARABONBA_PTR_TO_JSON(TagDefinePrompt, tagDefinePrompt_);
      DARABONBA_PTR_TO_JSON(TagName, tagName_);
      DARABONBA_PTR_TO_JSON(TagTaskType, tagTaskType_);
      DARABONBA_PTR_TO_JSON(TagValueDefinePrompt, tagValueDefinePrompt_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitEnterpriseVocAnalysisTaskRequestContentTags& obj) { 
      DARABONBA_PTR_FROM_JSON(TagDefinePrompt, tagDefinePrompt_);
      DARABONBA_PTR_FROM_JSON(TagName, tagName_);
      DARABONBA_PTR_FROM_JSON(TagTaskType, tagTaskType_);
      DARABONBA_PTR_FROM_JSON(TagValueDefinePrompt, tagValueDefinePrompt_);
    };
    SubmitEnterpriseVocAnalysisTaskRequestContentTags() = default ;
    SubmitEnterpriseVocAnalysisTaskRequestContentTags(const SubmitEnterpriseVocAnalysisTaskRequestContentTags &) = default ;
    SubmitEnterpriseVocAnalysisTaskRequestContentTags(SubmitEnterpriseVocAnalysisTaskRequestContentTags &&) = default ;
    SubmitEnterpriseVocAnalysisTaskRequestContentTags(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitEnterpriseVocAnalysisTaskRequestContentTags() = default ;
    SubmitEnterpriseVocAnalysisTaskRequestContentTags& operator=(const SubmitEnterpriseVocAnalysisTaskRequestContentTags &) = default ;
    SubmitEnterpriseVocAnalysisTaskRequestContentTags& operator=(SubmitEnterpriseVocAnalysisTaskRequestContentTags &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->tagDefinePrompt_ == nullptr
        && return this->tagName_ == nullptr && return this->tagTaskType_ == nullptr && return this->tagValueDefinePrompt_ == nullptr; };
    // tagDefinePrompt Field Functions 
    bool hasTagDefinePrompt() const { return this->tagDefinePrompt_ != nullptr;};
    void deleteTagDefinePrompt() { this->tagDefinePrompt_ = nullptr;};
    inline string tagDefinePrompt() const { DARABONBA_PTR_GET_DEFAULT(tagDefinePrompt_, "") };
    inline SubmitEnterpriseVocAnalysisTaskRequestContentTags& setTagDefinePrompt(string tagDefinePrompt) { DARABONBA_PTR_SET_VALUE(tagDefinePrompt_, tagDefinePrompt) };


    // tagName Field Functions 
    bool hasTagName() const { return this->tagName_ != nullptr;};
    void deleteTagName() { this->tagName_ = nullptr;};
    inline string tagName() const { DARABONBA_PTR_GET_DEFAULT(tagName_, "") };
    inline SubmitEnterpriseVocAnalysisTaskRequestContentTags& setTagName(string tagName) { DARABONBA_PTR_SET_VALUE(tagName_, tagName) };


    // tagTaskType Field Functions 
    bool hasTagTaskType() const { return this->tagTaskType_ != nullptr;};
    void deleteTagTaskType() { this->tagTaskType_ = nullptr;};
    inline string tagTaskType() const { DARABONBA_PTR_GET_DEFAULT(tagTaskType_, "") };
    inline SubmitEnterpriseVocAnalysisTaskRequestContentTags& setTagTaskType(string tagTaskType) { DARABONBA_PTR_SET_VALUE(tagTaskType_, tagTaskType) };


    // tagValueDefinePrompt Field Functions 
    bool hasTagValueDefinePrompt() const { return this->tagValueDefinePrompt_ != nullptr;};
    void deleteTagValueDefinePrompt() { this->tagValueDefinePrompt_ = nullptr;};
    inline string tagValueDefinePrompt() const { DARABONBA_PTR_GET_DEFAULT(tagValueDefinePrompt_, "") };
    inline SubmitEnterpriseVocAnalysisTaskRequestContentTags& setTagValueDefinePrompt(string tagValueDefinePrompt) { DARABONBA_PTR_SET_VALUE(tagValueDefinePrompt_, tagValueDefinePrompt) };


  protected:
    std::shared_ptr<string> tagDefinePrompt_ = nullptr;
    std::shared_ptr<string> tagName_ = nullptr;
    std::shared_ptr<string> tagTaskType_ = nullptr;
    std::shared_ptr<string> tagValueDefinePrompt_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
