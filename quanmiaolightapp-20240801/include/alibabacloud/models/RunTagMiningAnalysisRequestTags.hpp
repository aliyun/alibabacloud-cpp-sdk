// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNTAGMININGANALYSISREQUESTTAGS_HPP_
#define ALIBABACLOUD_MODELS_RUNTAGMININGANALYSISREQUESTTAGS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuanMiaoLightApp20240801
{
namespace Models
{
  class RunTagMiningAnalysisRequestTags : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunTagMiningAnalysisRequestTags& obj) { 
      DARABONBA_PTR_TO_JSON(tagDefinePrompt, tagDefinePrompt_);
      DARABONBA_PTR_TO_JSON(tagName, tagName_);
    };
    friend void from_json(const Darabonba::Json& j, RunTagMiningAnalysisRequestTags& obj) { 
      DARABONBA_PTR_FROM_JSON(tagDefinePrompt, tagDefinePrompt_);
      DARABONBA_PTR_FROM_JSON(tagName, tagName_);
    };
    RunTagMiningAnalysisRequestTags() = default ;
    RunTagMiningAnalysisRequestTags(const RunTagMiningAnalysisRequestTags &) = default ;
    RunTagMiningAnalysisRequestTags(RunTagMiningAnalysisRequestTags &&) = default ;
    RunTagMiningAnalysisRequestTags(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunTagMiningAnalysisRequestTags() = default ;
    RunTagMiningAnalysisRequestTags& operator=(const RunTagMiningAnalysisRequestTags &) = default ;
    RunTagMiningAnalysisRequestTags& operator=(RunTagMiningAnalysisRequestTags &&) = default ;
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
    inline RunTagMiningAnalysisRequestTags& setTagDefinePrompt(string tagDefinePrompt) { DARABONBA_PTR_SET_VALUE(tagDefinePrompt_, tagDefinePrompt) };


    // tagName Field Functions 
    bool hasTagName() const { return this->tagName_ != nullptr;};
    void deleteTagName() { this->tagName_ = nullptr;};
    inline string tagName() const { DARABONBA_PTR_GET_DEFAULT(tagName_, "") };
    inline RunTagMiningAnalysisRequestTags& setTagName(string tagName) { DARABONBA_PTR_SET_VALUE(tagName_, tagName) };


  protected:
    std::shared_ptr<string> tagDefinePrompt_ = nullptr;
    std::shared_ptr<string> tagName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuanMiaoLightApp20240801
#endif
