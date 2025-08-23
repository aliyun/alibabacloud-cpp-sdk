// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITENTERPRISEVOCANALYSISTASKREQUESTFILTERTAGS_HPP_
#define ALIBABACLOUD_MODELS_SUBMITENTERPRISEVOCANALYSISTASKREQUESTFILTERTAGS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuanMiaoLightApp20240801
{
namespace Models
{
  class SubmitEnterpriseVocAnalysisTaskRequestFilterTags : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitEnterpriseVocAnalysisTaskRequestFilterTags& obj) { 
      DARABONBA_PTR_TO_JSON(tagDefinePrompt, tagDefinePrompt_);
      DARABONBA_PTR_TO_JSON(tagName, tagName_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitEnterpriseVocAnalysisTaskRequestFilterTags& obj) { 
      DARABONBA_PTR_FROM_JSON(tagDefinePrompt, tagDefinePrompt_);
      DARABONBA_PTR_FROM_JSON(tagName, tagName_);
    };
    SubmitEnterpriseVocAnalysisTaskRequestFilterTags() = default ;
    SubmitEnterpriseVocAnalysisTaskRequestFilterTags(const SubmitEnterpriseVocAnalysisTaskRequestFilterTags &) = default ;
    SubmitEnterpriseVocAnalysisTaskRequestFilterTags(SubmitEnterpriseVocAnalysisTaskRequestFilterTags &&) = default ;
    SubmitEnterpriseVocAnalysisTaskRequestFilterTags(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitEnterpriseVocAnalysisTaskRequestFilterTags() = default ;
    SubmitEnterpriseVocAnalysisTaskRequestFilterTags& operator=(const SubmitEnterpriseVocAnalysisTaskRequestFilterTags &) = default ;
    SubmitEnterpriseVocAnalysisTaskRequestFilterTags& operator=(SubmitEnterpriseVocAnalysisTaskRequestFilterTags &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->tagDefinePrompt_ != nullptr
        && this->tagName_ != nullptr; };
    // tagDefinePrompt Field Functions 
    bool hasTagDefinePrompt() const { return this->tagDefinePrompt_ != nullptr;};
    void deleteTagDefinePrompt() { this->tagDefinePrompt_ = nullptr;};
    inline string tagDefinePrompt() const { DARABONBA_PTR_GET_DEFAULT(tagDefinePrompt_, "") };
    inline SubmitEnterpriseVocAnalysisTaskRequestFilterTags& setTagDefinePrompt(string tagDefinePrompt) { DARABONBA_PTR_SET_VALUE(tagDefinePrompt_, tagDefinePrompt) };


    // tagName Field Functions 
    bool hasTagName() const { return this->tagName_ != nullptr;};
    void deleteTagName() { this->tagName_ = nullptr;};
    inline string tagName() const { DARABONBA_PTR_GET_DEFAULT(tagName_, "") };
    inline SubmitEnterpriseVocAnalysisTaskRequestFilterTags& setTagName(string tagName) { DARABONBA_PTR_SET_VALUE(tagName_, tagName) };


  protected:
    std::shared_ptr<string> tagDefinePrompt_ = nullptr;
    std::shared_ptr<string> tagName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuanMiaoLightApp20240801
#endif
