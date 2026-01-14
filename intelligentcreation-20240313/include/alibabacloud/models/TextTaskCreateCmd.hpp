// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TEXTTASKCREATECMD_HPP_
#define ALIBABACLOUD_MODELS_TEXTTASKCREATECMD_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ReferenceTag.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IntelligentCreation20240313
{
namespace Models
{
  class TextTaskCreateCmd : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TextTaskCreateCmd& obj) { 
      DARABONBA_PTR_TO_JSON(agentId, agentId_);
      DARABONBA_PTR_TO_JSON(contentRequirement, contentRequirement_);
      DARABONBA_PTR_TO_JSON(idempotentId, idempotentId_);
      DARABONBA_PTR_TO_JSON(industry, industry_);
      DARABONBA_PTR_TO_JSON(introduction, introduction_);
      DARABONBA_PTR_TO_JSON(number, number_);
      DARABONBA_PTR_TO_JSON(point, point_);
      DARABONBA_PTR_TO_JSON(referenceTag, referenceTag_);
      DARABONBA_PTR_TO_JSON(relatedRagIds, relatedRagIds_);
      DARABONBA_PTR_TO_JSON(streamApi, streamApi_);
      DARABONBA_PTR_TO_JSON(style, style_);
      DARABONBA_PTR_TO_JSON(target, target_);
      DARABONBA_PTR_TO_JSON(textModeType, textModeType_);
      DARABONBA_PTR_TO_JSON(theme, theme_);
      DARABONBA_PTR_TO_JSON(themes, themes_);
    };
    friend void from_json(const Darabonba::Json& j, TextTaskCreateCmd& obj) { 
      DARABONBA_PTR_FROM_JSON(agentId, agentId_);
      DARABONBA_PTR_FROM_JSON(contentRequirement, contentRequirement_);
      DARABONBA_PTR_FROM_JSON(idempotentId, idempotentId_);
      DARABONBA_PTR_FROM_JSON(industry, industry_);
      DARABONBA_PTR_FROM_JSON(introduction, introduction_);
      DARABONBA_PTR_FROM_JSON(number, number_);
      DARABONBA_PTR_FROM_JSON(point, point_);
      DARABONBA_PTR_FROM_JSON(referenceTag, referenceTag_);
      DARABONBA_PTR_FROM_JSON(relatedRagIds, relatedRagIds_);
      DARABONBA_PTR_FROM_JSON(streamApi, streamApi_);
      DARABONBA_PTR_FROM_JSON(style, style_);
      DARABONBA_PTR_FROM_JSON(target, target_);
      DARABONBA_PTR_FROM_JSON(textModeType, textModeType_);
      DARABONBA_PTR_FROM_JSON(theme, theme_);
      DARABONBA_PTR_FROM_JSON(themes, themes_);
    };
    TextTaskCreateCmd() = default ;
    TextTaskCreateCmd(const TextTaskCreateCmd &) = default ;
    TextTaskCreateCmd(TextTaskCreateCmd &&) = default ;
    TextTaskCreateCmd(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TextTaskCreateCmd() = default ;
    TextTaskCreateCmd& operator=(const TextTaskCreateCmd &) = default ;
    TextTaskCreateCmd& operator=(TextTaskCreateCmd &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentId_ == nullptr
        && this->contentRequirement_ == nullptr && this->idempotentId_ == nullptr && this->industry_ == nullptr && this->introduction_ == nullptr && this->number_ == nullptr
        && this->point_ == nullptr && this->referenceTag_ == nullptr && this->relatedRagIds_ == nullptr && this->streamApi_ == nullptr && this->style_ == nullptr
        && this->target_ == nullptr && this->textModeType_ == nullptr && this->theme_ == nullptr && this->themes_ == nullptr; };
    // agentId Field Functions 
    bool hasAgentId() const { return this->agentId_ != nullptr;};
    void deleteAgentId() { this->agentId_ = nullptr;};
    inline string getAgentId() const { DARABONBA_PTR_GET_DEFAULT(agentId_, "") };
    inline TextTaskCreateCmd& setAgentId(string agentId) { DARABONBA_PTR_SET_VALUE(agentId_, agentId) };


    // contentRequirement Field Functions 
    bool hasContentRequirement() const { return this->contentRequirement_ != nullptr;};
    void deleteContentRequirement() { this->contentRequirement_ = nullptr;};
    inline string getContentRequirement() const { DARABONBA_PTR_GET_DEFAULT(contentRequirement_, "") };
    inline TextTaskCreateCmd& setContentRequirement(string contentRequirement) { DARABONBA_PTR_SET_VALUE(contentRequirement_, contentRequirement) };


    // idempotentId Field Functions 
    bool hasIdempotentId() const { return this->idempotentId_ != nullptr;};
    void deleteIdempotentId() { this->idempotentId_ = nullptr;};
    inline string getIdempotentId() const { DARABONBA_PTR_GET_DEFAULT(idempotentId_, "") };
    inline TextTaskCreateCmd& setIdempotentId(string idempotentId) { DARABONBA_PTR_SET_VALUE(idempotentId_, idempotentId) };


    // industry Field Functions 
    bool hasIndustry() const { return this->industry_ != nullptr;};
    void deleteIndustry() { this->industry_ = nullptr;};
    inline string getIndustry() const { DARABONBA_PTR_GET_DEFAULT(industry_, "") };
    inline TextTaskCreateCmd& setIndustry(string industry) { DARABONBA_PTR_SET_VALUE(industry_, industry) };


    // introduction Field Functions 
    bool hasIntroduction() const { return this->introduction_ != nullptr;};
    void deleteIntroduction() { this->introduction_ = nullptr;};
    inline string getIntroduction() const { DARABONBA_PTR_GET_DEFAULT(introduction_, "") };
    inline TextTaskCreateCmd& setIntroduction(string introduction) { DARABONBA_PTR_SET_VALUE(introduction_, introduction) };


    // number Field Functions 
    bool hasNumber() const { return this->number_ != nullptr;};
    void deleteNumber() { this->number_ = nullptr;};
    inline int32_t getNumber() const { DARABONBA_PTR_GET_DEFAULT(number_, 0) };
    inline TextTaskCreateCmd& setNumber(int32_t number) { DARABONBA_PTR_SET_VALUE(number_, number) };


    // point Field Functions 
    bool hasPoint() const { return this->point_ != nullptr;};
    void deletePoint() { this->point_ = nullptr;};
    inline string getPoint() const { DARABONBA_PTR_GET_DEFAULT(point_, "") };
    inline TextTaskCreateCmd& setPoint(string point) { DARABONBA_PTR_SET_VALUE(point_, point) };


    // referenceTag Field Functions 
    bool hasReferenceTag() const { return this->referenceTag_ != nullptr;};
    void deleteReferenceTag() { this->referenceTag_ = nullptr;};
    inline const ReferenceTag & getReferenceTag() const { DARABONBA_PTR_GET_CONST(referenceTag_, ReferenceTag) };
    inline ReferenceTag getReferenceTag() { DARABONBA_PTR_GET(referenceTag_, ReferenceTag) };
    inline TextTaskCreateCmd& setReferenceTag(const ReferenceTag & referenceTag) { DARABONBA_PTR_SET_VALUE(referenceTag_, referenceTag) };
    inline TextTaskCreateCmd& setReferenceTag(ReferenceTag && referenceTag) { DARABONBA_PTR_SET_RVALUE(referenceTag_, referenceTag) };


    // relatedRagIds Field Functions 
    bool hasRelatedRagIds() const { return this->relatedRagIds_ != nullptr;};
    void deleteRelatedRagIds() { this->relatedRagIds_ = nullptr;};
    inline const vector<int64_t> & getRelatedRagIds() const { DARABONBA_PTR_GET_CONST(relatedRagIds_, vector<int64_t>) };
    inline vector<int64_t> getRelatedRagIds() { DARABONBA_PTR_GET(relatedRagIds_, vector<int64_t>) };
    inline TextTaskCreateCmd& setRelatedRagIds(const vector<int64_t> & relatedRagIds) { DARABONBA_PTR_SET_VALUE(relatedRagIds_, relatedRagIds) };
    inline TextTaskCreateCmd& setRelatedRagIds(vector<int64_t> && relatedRagIds) { DARABONBA_PTR_SET_RVALUE(relatedRagIds_, relatedRagIds) };


    // streamApi Field Functions 
    bool hasStreamApi() const { return this->streamApi_ != nullptr;};
    void deleteStreamApi() { this->streamApi_ = nullptr;};
    inline bool getStreamApi() const { DARABONBA_PTR_GET_DEFAULT(streamApi_, false) };
    inline TextTaskCreateCmd& setStreamApi(bool streamApi) { DARABONBA_PTR_SET_VALUE(streamApi_, streamApi) };


    // style Field Functions 
    bool hasStyle() const { return this->style_ != nullptr;};
    void deleteStyle() { this->style_ = nullptr;};
    inline string getStyle() const { DARABONBA_PTR_GET_DEFAULT(style_, "") };
    inline TextTaskCreateCmd& setStyle(string style) { DARABONBA_PTR_SET_VALUE(style_, style) };


    // target Field Functions 
    bool hasTarget() const { return this->target_ != nullptr;};
    void deleteTarget() { this->target_ = nullptr;};
    inline string getTarget() const { DARABONBA_PTR_GET_DEFAULT(target_, "") };
    inline TextTaskCreateCmd& setTarget(string target) { DARABONBA_PTR_SET_VALUE(target_, target) };


    // textModeType Field Functions 
    bool hasTextModeType() const { return this->textModeType_ != nullptr;};
    void deleteTextModeType() { this->textModeType_ = nullptr;};
    inline string getTextModeType() const { DARABONBA_PTR_GET_DEFAULT(textModeType_, "") };
    inline TextTaskCreateCmd& setTextModeType(string textModeType) { DARABONBA_PTR_SET_VALUE(textModeType_, textModeType) };


    // theme Field Functions 
    bool hasTheme() const { return this->theme_ != nullptr;};
    void deleteTheme() { this->theme_ = nullptr;};
    inline string getTheme() const { DARABONBA_PTR_GET_DEFAULT(theme_, "") };
    inline TextTaskCreateCmd& setTheme(string theme) { DARABONBA_PTR_SET_VALUE(theme_, theme) };


    // themes Field Functions 
    bool hasThemes() const { return this->themes_ != nullptr;};
    void deleteThemes() { this->themes_ = nullptr;};
    inline const vector<string> & getThemes() const { DARABONBA_PTR_GET_CONST(themes_, vector<string>) };
    inline vector<string> getThemes() { DARABONBA_PTR_GET(themes_, vector<string>) };
    inline TextTaskCreateCmd& setThemes(const vector<string> & themes) { DARABONBA_PTR_SET_VALUE(themes_, themes) };
    inline TextTaskCreateCmd& setThemes(vector<string> && themes) { DARABONBA_PTR_SET_RVALUE(themes_, themes) };


  protected:
    shared_ptr<string> agentId_ {};
    shared_ptr<string> contentRequirement_ {};
    shared_ptr<string> idempotentId_ {};
    shared_ptr<string> industry_ {};
    shared_ptr<string> introduction_ {};
    // This parameter is required.
    shared_ptr<int32_t> number_ {};
    shared_ptr<string> point_ {};
    shared_ptr<ReferenceTag> referenceTag_ {};
    shared_ptr<vector<int64_t>> relatedRagIds_ {};
    shared_ptr<bool> streamApi_ {};
    // This parameter is required.
    shared_ptr<string> style_ {};
    shared_ptr<string> target_ {};
    // This parameter is required.
    shared_ptr<string> textModeType_ {};
    shared_ptr<string> theme_ {};
    shared_ptr<vector<string>> themes_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IntelligentCreation20240313
#endif
