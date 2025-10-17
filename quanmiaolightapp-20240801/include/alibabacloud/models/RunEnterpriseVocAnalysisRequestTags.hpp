// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNENTERPRISEVOCANALYSISREQUESTTAGS_HPP_
#define ALIBABACLOUD_MODELS_RUNENTERPRISEVOCANALYSISREQUESTTAGS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuanMiaoLightApp20240801
{
namespace Models
{
  class RunEnterpriseVocAnalysisRequestTags : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunEnterpriseVocAnalysisRequestTags& obj) { 
      DARABONBA_PTR_TO_JSON(tagDefinePrompt, tagDefinePrompt_);
      DARABONBA_PTR_TO_JSON(tagName, tagName_);
    };
    friend void from_json(const Darabonba::Json& j, RunEnterpriseVocAnalysisRequestTags& obj) { 
      DARABONBA_PTR_FROM_JSON(tagDefinePrompt, tagDefinePrompt_);
      DARABONBA_PTR_FROM_JSON(tagName, tagName_);
    };
    RunEnterpriseVocAnalysisRequestTags() = default ;
    RunEnterpriseVocAnalysisRequestTags(const RunEnterpriseVocAnalysisRequestTags &) = default ;
    RunEnterpriseVocAnalysisRequestTags(RunEnterpriseVocAnalysisRequestTags &&) = default ;
    RunEnterpriseVocAnalysisRequestTags(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunEnterpriseVocAnalysisRequestTags() = default ;
    RunEnterpriseVocAnalysisRequestTags& operator=(const RunEnterpriseVocAnalysisRequestTags &) = default ;
    RunEnterpriseVocAnalysisRequestTags& operator=(RunEnterpriseVocAnalysisRequestTags &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->tagDefinePrompt_ == nullptr
        && return this->tagName_ == nullptr; };
    // tagDefinePrompt Field Functions 
    bool hasTagDefinePrompt() const { return this->tagDefinePrompt_ != nullptr;};
    void deleteTagDefinePrompt() { this->tagDefinePrompt_ = nullptr;};
    inline string tagDefinePrompt() const { DARABONBA_PTR_GET_DEFAULT(tagDefinePrompt_, "") };
    inline RunEnterpriseVocAnalysisRequestTags& setTagDefinePrompt(string tagDefinePrompt) { DARABONBA_PTR_SET_VALUE(tagDefinePrompt_, tagDefinePrompt) };


    // tagName Field Functions 
    bool hasTagName() const { return this->tagName_ != nullptr;};
    void deleteTagName() { this->tagName_ = nullptr;};
    inline string tagName() const { DARABONBA_PTR_GET_DEFAULT(tagName_, "") };
    inline RunEnterpriseVocAnalysisRequestTags& setTagName(string tagName) { DARABONBA_PTR_SET_VALUE(tagName_, tagName) };


  protected:
    // 标签定义提示词
    std::shared_ptr<string> tagDefinePrompt_ = nullptr;
    // 标签名称
    std::shared_ptr<string> tagName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuanMiaoLightApp20240801
#endif
