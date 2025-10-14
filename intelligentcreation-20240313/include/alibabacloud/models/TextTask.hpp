// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TEXTTASK_HPP_
#define ALIBABACLOUD_MODELS_TEXTTASK_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ReferenceTag.hpp>
#include <vector>
#include <alibabacloud/models/Text.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IntelligentCreation20240313
{
namespace Models
{
  class TextTask : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TextTask& obj) { 
      DARABONBA_PTR_TO_JSON(agentId, agentId_);
      DARABONBA_PTR_TO_JSON(agentName, agentName_);
      DARABONBA_PTR_TO_JSON(contentRequirement, contentRequirement_);
      DARABONBA_PTR_TO_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(gmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(introduction, introduction_);
      DARABONBA_PTR_TO_JSON(nums, nums_);
      DARABONBA_PTR_TO_JSON(point, point_);
      DARABONBA_PTR_TO_JSON(referenceTag, referenceTag_);
      DARABONBA_PTR_TO_JSON(relatedRagIds, relatedRagIds_);
      DARABONBA_PTR_TO_JSON(style, style_);
      DARABONBA_PTR_TO_JSON(target, target_);
      DARABONBA_PTR_TO_JSON(textIds, textIds_);
      DARABONBA_PTR_TO_JSON(textModeType, textModeType_);
      DARABONBA_PTR_TO_JSON(textTaskId, textTaskId_);
      DARABONBA_PTR_TO_JSON(textTaskStatus, textTaskStatus_);
      DARABONBA_PTR_TO_JSON(texts, texts_);
      DARABONBA_PTR_TO_JSON(theme, theme_);
      DARABONBA_PTR_TO_JSON(themeDesc, themeDesc_);
    };
    friend void from_json(const Darabonba::Json& j, TextTask& obj) { 
      DARABONBA_PTR_FROM_JSON(agentId, agentId_);
      DARABONBA_PTR_FROM_JSON(agentName, agentName_);
      DARABONBA_PTR_FROM_JSON(contentRequirement, contentRequirement_);
      DARABONBA_PTR_FROM_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(gmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(introduction, introduction_);
      DARABONBA_PTR_FROM_JSON(nums, nums_);
      DARABONBA_PTR_FROM_JSON(point, point_);
      DARABONBA_PTR_FROM_JSON(referenceTag, referenceTag_);
      DARABONBA_PTR_FROM_JSON(relatedRagIds, relatedRagIds_);
      DARABONBA_PTR_FROM_JSON(style, style_);
      DARABONBA_PTR_FROM_JSON(target, target_);
      DARABONBA_PTR_FROM_JSON(textIds, textIds_);
      DARABONBA_PTR_FROM_JSON(textModeType, textModeType_);
      DARABONBA_PTR_FROM_JSON(textTaskId, textTaskId_);
      DARABONBA_PTR_FROM_JSON(textTaskStatus, textTaskStatus_);
      DARABONBA_PTR_FROM_JSON(texts, texts_);
      DARABONBA_PTR_FROM_JSON(theme, theme_);
      DARABONBA_PTR_FROM_JSON(themeDesc, themeDesc_);
    };
    TextTask() = default ;
    TextTask(const TextTask &) = default ;
    TextTask(TextTask &&) = default ;
    TextTask(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TextTask() = default ;
    TextTask& operator=(const TextTask &) = default ;
    TextTask& operator=(TextTask &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentId_ == nullptr
        && return this->agentName_ == nullptr && return this->contentRequirement_ == nullptr && return this->gmtCreate_ == nullptr && return this->gmtModified_ == nullptr && return this->introduction_ == nullptr
        && return this->nums_ == nullptr && return this->point_ == nullptr && return this->referenceTag_ == nullptr && return this->relatedRagIds_ == nullptr && return this->style_ == nullptr
        && return this->target_ == nullptr && return this->textIds_ == nullptr && return this->textModeType_ == nullptr && return this->textTaskId_ == nullptr && return this->textTaskStatus_ == nullptr
        && return this->texts_ == nullptr && return this->theme_ == nullptr && return this->themeDesc_ == nullptr; };
    // agentId Field Functions 
    bool hasAgentId() const { return this->agentId_ != nullptr;};
    void deleteAgentId() { this->agentId_ = nullptr;};
    inline string agentId() const { DARABONBA_PTR_GET_DEFAULT(agentId_, "") };
    inline TextTask& setAgentId(string agentId) { DARABONBA_PTR_SET_VALUE(agentId_, agentId) };


    // agentName Field Functions 
    bool hasAgentName() const { return this->agentName_ != nullptr;};
    void deleteAgentName() { this->agentName_ = nullptr;};
    inline string agentName() const { DARABONBA_PTR_GET_DEFAULT(agentName_, "") };
    inline TextTask& setAgentName(string agentName) { DARABONBA_PTR_SET_VALUE(agentName_, agentName) };


    // contentRequirement Field Functions 
    bool hasContentRequirement() const { return this->contentRequirement_ != nullptr;};
    void deleteContentRequirement() { this->contentRequirement_ = nullptr;};
    inline string contentRequirement() const { DARABONBA_PTR_GET_DEFAULT(contentRequirement_, "") };
    inline TextTask& setContentRequirement(string contentRequirement) { DARABONBA_PTR_SET_VALUE(contentRequirement_, contentRequirement) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline TextTask& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline TextTask& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // introduction Field Functions 
    bool hasIntroduction() const { return this->introduction_ != nullptr;};
    void deleteIntroduction() { this->introduction_ = nullptr;};
    inline string introduction() const { DARABONBA_PTR_GET_DEFAULT(introduction_, "") };
    inline TextTask& setIntroduction(string introduction) { DARABONBA_PTR_SET_VALUE(introduction_, introduction) };


    // nums Field Functions 
    bool hasNums() const { return this->nums_ != nullptr;};
    void deleteNums() { this->nums_ = nullptr;};
    inline int32_t nums() const { DARABONBA_PTR_GET_DEFAULT(nums_, 0) };
    inline TextTask& setNums(int32_t nums) { DARABONBA_PTR_SET_VALUE(nums_, nums) };


    // point Field Functions 
    bool hasPoint() const { return this->point_ != nullptr;};
    void deletePoint() { this->point_ = nullptr;};
    inline string point() const { DARABONBA_PTR_GET_DEFAULT(point_, "") };
    inline TextTask& setPoint(string point) { DARABONBA_PTR_SET_VALUE(point_, point) };


    // referenceTag Field Functions 
    bool hasReferenceTag() const { return this->referenceTag_ != nullptr;};
    void deleteReferenceTag() { this->referenceTag_ = nullptr;};
    inline const ReferenceTag & referenceTag() const { DARABONBA_PTR_GET_CONST(referenceTag_, ReferenceTag) };
    inline ReferenceTag referenceTag() { DARABONBA_PTR_GET(referenceTag_, ReferenceTag) };
    inline TextTask& setReferenceTag(const ReferenceTag & referenceTag) { DARABONBA_PTR_SET_VALUE(referenceTag_, referenceTag) };
    inline TextTask& setReferenceTag(ReferenceTag && referenceTag) { DARABONBA_PTR_SET_RVALUE(referenceTag_, referenceTag) };


    // relatedRagIds Field Functions 
    bool hasRelatedRagIds() const { return this->relatedRagIds_ != nullptr;};
    void deleteRelatedRagIds() { this->relatedRagIds_ = nullptr;};
    inline const vector<int64_t> & relatedRagIds() const { DARABONBA_PTR_GET_CONST(relatedRagIds_, vector<int64_t>) };
    inline vector<int64_t> relatedRagIds() { DARABONBA_PTR_GET(relatedRagIds_, vector<int64_t>) };
    inline TextTask& setRelatedRagIds(const vector<int64_t> & relatedRagIds) { DARABONBA_PTR_SET_VALUE(relatedRagIds_, relatedRagIds) };
    inline TextTask& setRelatedRagIds(vector<int64_t> && relatedRagIds) { DARABONBA_PTR_SET_RVALUE(relatedRagIds_, relatedRagIds) };


    // style Field Functions 
    bool hasStyle() const { return this->style_ != nullptr;};
    void deleteStyle() { this->style_ = nullptr;};
    inline string style() const { DARABONBA_PTR_GET_DEFAULT(style_, "") };
    inline TextTask& setStyle(string style) { DARABONBA_PTR_SET_VALUE(style_, style) };


    // target Field Functions 
    bool hasTarget() const { return this->target_ != nullptr;};
    void deleteTarget() { this->target_ = nullptr;};
    inline string target() const { DARABONBA_PTR_GET_DEFAULT(target_, "") };
    inline TextTask& setTarget(string target) { DARABONBA_PTR_SET_VALUE(target_, target) };


    // textIds Field Functions 
    bool hasTextIds() const { return this->textIds_ != nullptr;};
    void deleteTextIds() { this->textIds_ = nullptr;};
    inline const vector<int64_t> & textIds() const { DARABONBA_PTR_GET_CONST(textIds_, vector<int64_t>) };
    inline vector<int64_t> textIds() { DARABONBA_PTR_GET(textIds_, vector<int64_t>) };
    inline TextTask& setTextIds(const vector<int64_t> & textIds) { DARABONBA_PTR_SET_VALUE(textIds_, textIds) };
    inline TextTask& setTextIds(vector<int64_t> && textIds) { DARABONBA_PTR_SET_RVALUE(textIds_, textIds) };


    // textModeType Field Functions 
    bool hasTextModeType() const { return this->textModeType_ != nullptr;};
    void deleteTextModeType() { this->textModeType_ = nullptr;};
    inline string textModeType() const { DARABONBA_PTR_GET_DEFAULT(textModeType_, "") };
    inline TextTask& setTextModeType(string textModeType) { DARABONBA_PTR_SET_VALUE(textModeType_, textModeType) };


    // textTaskId Field Functions 
    bool hasTextTaskId() const { return this->textTaskId_ != nullptr;};
    void deleteTextTaskId() { this->textTaskId_ = nullptr;};
    inline int64_t textTaskId() const { DARABONBA_PTR_GET_DEFAULT(textTaskId_, 0L) };
    inline TextTask& setTextTaskId(int64_t textTaskId) { DARABONBA_PTR_SET_VALUE(textTaskId_, textTaskId) };


    // textTaskStatus Field Functions 
    bool hasTextTaskStatus() const { return this->textTaskStatus_ != nullptr;};
    void deleteTextTaskStatus() { this->textTaskStatus_ = nullptr;};
    inline string textTaskStatus() const { DARABONBA_PTR_GET_DEFAULT(textTaskStatus_, "") };
    inline TextTask& setTextTaskStatus(string textTaskStatus) { DARABONBA_PTR_SET_VALUE(textTaskStatus_, textTaskStatus) };


    // texts Field Functions 
    bool hasTexts() const { return this->texts_ != nullptr;};
    void deleteTexts() { this->texts_ = nullptr;};
    inline const vector<Text> & texts() const { DARABONBA_PTR_GET_CONST(texts_, vector<Text>) };
    inline vector<Text> texts() { DARABONBA_PTR_GET(texts_, vector<Text>) };
    inline TextTask& setTexts(const vector<Text> & texts) { DARABONBA_PTR_SET_VALUE(texts_, texts) };
    inline TextTask& setTexts(vector<Text> && texts) { DARABONBA_PTR_SET_RVALUE(texts_, texts) };


    // theme Field Functions 
    bool hasTheme() const { return this->theme_ != nullptr;};
    void deleteTheme() { this->theme_ = nullptr;};
    inline string theme() const { DARABONBA_PTR_GET_DEFAULT(theme_, "") };
    inline TextTask& setTheme(string theme) { DARABONBA_PTR_SET_VALUE(theme_, theme) };


    // themeDesc Field Functions 
    bool hasThemeDesc() const { return this->themeDesc_ != nullptr;};
    void deleteThemeDesc() { this->themeDesc_ = nullptr;};
    inline string themeDesc() const { DARABONBA_PTR_GET_DEFAULT(themeDesc_, "") };
    inline TextTask& setThemeDesc(string themeDesc) { DARABONBA_PTR_SET_VALUE(themeDesc_, themeDesc) };


  protected:
    std::shared_ptr<string> agentId_ = nullptr;
    std::shared_ptr<string> agentName_ = nullptr;
    std::shared_ptr<string> contentRequirement_ = nullptr;
    std::shared_ptr<string> gmtCreate_ = nullptr;
    std::shared_ptr<string> gmtModified_ = nullptr;
    std::shared_ptr<string> introduction_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> nums_ = nullptr;
    std::shared_ptr<string> point_ = nullptr;
    std::shared_ptr<ReferenceTag> referenceTag_ = nullptr;
    std::shared_ptr<vector<int64_t>> relatedRagIds_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> style_ = nullptr;
    std::shared_ptr<string> target_ = nullptr;
    std::shared_ptr<vector<int64_t>> textIds_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> textModeType_ = nullptr;
    std::shared_ptr<int64_t> textTaskId_ = nullptr;
    std::shared_ptr<string> textTaskStatus_ = nullptr;
    std::shared_ptr<vector<Text>> texts_ = nullptr;
    std::shared_ptr<string> theme_ = nullptr;
    std::shared_ptr<string> themeDesc_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IntelligentCreation20240313
#endif
