// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TEXT_HPP_
#define ALIBABACLOUD_MODELS_TEXT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IntelligentCreation20240313
{
namespace Models
{
  class Text : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Text& obj) { 
      DARABONBA_PTR_TO_JSON(agentId, agentId_);
      DARABONBA_PTR_TO_JSON(agentName, agentName_);
      DARABONBA_PTR_TO_JSON(desc, desc_);
      DARABONBA_PTR_TO_JSON(errMsg, errMsg_);
      DARABONBA_PTR_TO_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(gmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(illustrationTaskIdList, illustrationTaskIdList_);
      DARABONBA_PTR_TO_JSON(publishStatus, publishStatus_);
      DARABONBA_PTR_TO_JSON(textContent, textContent_);
      DARABONBA_PTR_TO_JSON(textId, textId_);
      DARABONBA_PTR_TO_JSON(textIllustrationTag, textIllustrationTag_);
      DARABONBA_PTR_TO_JSON(textModeType, textModeType_);
      DARABONBA_PTR_TO_JSON(textStatus, textStatus_);
      DARABONBA_PTR_TO_JSON(textStyleType, textStyleType_);
      DARABONBA_PTR_TO_JSON(textTaskId, textTaskId_);
      DARABONBA_PTR_TO_JSON(textThemes, textThemes_);
      DARABONBA_PTR_TO_JSON(title, title_);
      DARABONBA_PTR_TO_JSON(userNameCreate, userNameCreate_);
      DARABONBA_PTR_TO_JSON(userNameModified, userNameModified_);
    };
    friend void from_json(const Darabonba::Json& j, Text& obj) { 
      DARABONBA_PTR_FROM_JSON(agentId, agentId_);
      DARABONBA_PTR_FROM_JSON(agentName, agentName_);
      DARABONBA_PTR_FROM_JSON(desc, desc_);
      DARABONBA_PTR_FROM_JSON(errMsg, errMsg_);
      DARABONBA_PTR_FROM_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(gmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(illustrationTaskIdList, illustrationTaskIdList_);
      DARABONBA_PTR_FROM_JSON(publishStatus, publishStatus_);
      DARABONBA_PTR_FROM_JSON(textContent, textContent_);
      DARABONBA_PTR_FROM_JSON(textId, textId_);
      DARABONBA_PTR_FROM_JSON(textIllustrationTag, textIllustrationTag_);
      DARABONBA_PTR_FROM_JSON(textModeType, textModeType_);
      DARABONBA_PTR_FROM_JSON(textStatus, textStatus_);
      DARABONBA_PTR_FROM_JSON(textStyleType, textStyleType_);
      DARABONBA_PTR_FROM_JSON(textTaskId, textTaskId_);
      DARABONBA_PTR_FROM_JSON(textThemes, textThemes_);
      DARABONBA_PTR_FROM_JSON(title, title_);
      DARABONBA_PTR_FROM_JSON(userNameCreate, userNameCreate_);
      DARABONBA_PTR_FROM_JSON(userNameModified, userNameModified_);
    };
    Text() = default ;
    Text(const Text &) = default ;
    Text(Text &&) = default ;
    Text(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Text() = default ;
    Text& operator=(const Text &) = default ;
    Text& operator=(Text &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentId_ == nullptr
        && return this->agentName_ == nullptr && return this->desc_ == nullptr && return this->errMsg_ == nullptr && return this->gmtCreate_ == nullptr && return this->gmtModified_ == nullptr
        && return this->illustrationTaskIdList_ == nullptr && return this->publishStatus_ == nullptr && return this->textContent_ == nullptr && return this->textId_ == nullptr && return this->textIllustrationTag_ == nullptr
        && return this->textModeType_ == nullptr && return this->textStatus_ == nullptr && return this->textStyleType_ == nullptr && return this->textTaskId_ == nullptr && return this->textThemes_ == nullptr
        && return this->title_ == nullptr && return this->userNameCreate_ == nullptr && return this->userNameModified_ == nullptr; };
    // agentId Field Functions 
    bool hasAgentId() const { return this->agentId_ != nullptr;};
    void deleteAgentId() { this->agentId_ = nullptr;};
    inline string agentId() const { DARABONBA_PTR_GET_DEFAULT(agentId_, "") };
    inline Text& setAgentId(string agentId) { DARABONBA_PTR_SET_VALUE(agentId_, agentId) };


    // agentName Field Functions 
    bool hasAgentName() const { return this->agentName_ != nullptr;};
    void deleteAgentName() { this->agentName_ = nullptr;};
    inline string agentName() const { DARABONBA_PTR_GET_DEFAULT(agentName_, "") };
    inline Text& setAgentName(string agentName) { DARABONBA_PTR_SET_VALUE(agentName_, agentName) };


    // desc Field Functions 
    bool hasDesc() const { return this->desc_ != nullptr;};
    void deleteDesc() { this->desc_ = nullptr;};
    inline string desc() const { DARABONBA_PTR_GET_DEFAULT(desc_, "") };
    inline Text& setDesc(string desc) { DARABONBA_PTR_SET_VALUE(desc_, desc) };


    // errMsg Field Functions 
    bool hasErrMsg() const { return this->errMsg_ != nullptr;};
    void deleteErrMsg() { this->errMsg_ = nullptr;};
    inline string errMsg() const { DARABONBA_PTR_GET_DEFAULT(errMsg_, "") };
    inline Text& setErrMsg(string errMsg) { DARABONBA_PTR_SET_VALUE(errMsg_, errMsg) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline Text& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline Text& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // illustrationTaskIdList Field Functions 
    bool hasIllustrationTaskIdList() const { return this->illustrationTaskIdList_ != nullptr;};
    void deleteIllustrationTaskIdList() { this->illustrationTaskIdList_ = nullptr;};
    inline const vector<int64_t> & illustrationTaskIdList() const { DARABONBA_PTR_GET_CONST(illustrationTaskIdList_, vector<int64_t>) };
    inline vector<int64_t> illustrationTaskIdList() { DARABONBA_PTR_GET(illustrationTaskIdList_, vector<int64_t>) };
    inline Text& setIllustrationTaskIdList(const vector<int64_t> & illustrationTaskIdList) { DARABONBA_PTR_SET_VALUE(illustrationTaskIdList_, illustrationTaskIdList) };
    inline Text& setIllustrationTaskIdList(vector<int64_t> && illustrationTaskIdList) { DARABONBA_PTR_SET_RVALUE(illustrationTaskIdList_, illustrationTaskIdList) };


    // publishStatus Field Functions 
    bool hasPublishStatus() const { return this->publishStatus_ != nullptr;};
    void deletePublishStatus() { this->publishStatus_ = nullptr;};
    inline string publishStatus() const { DARABONBA_PTR_GET_DEFAULT(publishStatus_, "") };
    inline Text& setPublishStatus(string publishStatus) { DARABONBA_PTR_SET_VALUE(publishStatus_, publishStatus) };


    // textContent Field Functions 
    bool hasTextContent() const { return this->textContent_ != nullptr;};
    void deleteTextContent() { this->textContent_ = nullptr;};
    inline string textContent() const { DARABONBA_PTR_GET_DEFAULT(textContent_, "") };
    inline Text& setTextContent(string textContent) { DARABONBA_PTR_SET_VALUE(textContent_, textContent) };


    // textId Field Functions 
    bool hasTextId() const { return this->textId_ != nullptr;};
    void deleteTextId() { this->textId_ = nullptr;};
    inline int64_t textId() const { DARABONBA_PTR_GET_DEFAULT(textId_, 0L) };
    inline Text& setTextId(int64_t textId) { DARABONBA_PTR_SET_VALUE(textId_, textId) };


    // textIllustrationTag Field Functions 
    bool hasTextIllustrationTag() const { return this->textIllustrationTag_ != nullptr;};
    void deleteTextIllustrationTag() { this->textIllustrationTag_ = nullptr;};
    inline bool textIllustrationTag() const { DARABONBA_PTR_GET_DEFAULT(textIllustrationTag_, false) };
    inline Text& setTextIllustrationTag(bool textIllustrationTag) { DARABONBA_PTR_SET_VALUE(textIllustrationTag_, textIllustrationTag) };


    // textModeType Field Functions 
    bool hasTextModeType() const { return this->textModeType_ != nullptr;};
    void deleteTextModeType() { this->textModeType_ = nullptr;};
    inline string textModeType() const { DARABONBA_PTR_GET_DEFAULT(textModeType_, "") };
    inline Text& setTextModeType(string textModeType) { DARABONBA_PTR_SET_VALUE(textModeType_, textModeType) };


    // textStatus Field Functions 
    bool hasTextStatus() const { return this->textStatus_ != nullptr;};
    void deleteTextStatus() { this->textStatus_ = nullptr;};
    inline string textStatus() const { DARABONBA_PTR_GET_DEFAULT(textStatus_, "") };
    inline Text& setTextStatus(string textStatus) { DARABONBA_PTR_SET_VALUE(textStatus_, textStatus) };


    // textStyleType Field Functions 
    bool hasTextStyleType() const { return this->textStyleType_ != nullptr;};
    void deleteTextStyleType() { this->textStyleType_ = nullptr;};
    inline string textStyleType() const { DARABONBA_PTR_GET_DEFAULT(textStyleType_, "") };
    inline Text& setTextStyleType(string textStyleType) { DARABONBA_PTR_SET_VALUE(textStyleType_, textStyleType) };


    // textTaskId Field Functions 
    bool hasTextTaskId() const { return this->textTaskId_ != nullptr;};
    void deleteTextTaskId() { this->textTaskId_ = nullptr;};
    inline int64_t textTaskId() const { DARABONBA_PTR_GET_DEFAULT(textTaskId_, 0L) };
    inline Text& setTextTaskId(int64_t textTaskId) { DARABONBA_PTR_SET_VALUE(textTaskId_, textTaskId) };


    // textThemes Field Functions 
    bool hasTextThemes() const { return this->textThemes_ != nullptr;};
    void deleteTextThemes() { this->textThemes_ = nullptr;};
    inline const vector<string> & textThemes() const { DARABONBA_PTR_GET_CONST(textThemes_, vector<string>) };
    inline vector<string> textThemes() { DARABONBA_PTR_GET(textThemes_, vector<string>) };
    inline Text& setTextThemes(const vector<string> & textThemes) { DARABONBA_PTR_SET_VALUE(textThemes_, textThemes) };
    inline Text& setTextThemes(vector<string> && textThemes) { DARABONBA_PTR_SET_RVALUE(textThemes_, textThemes) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline Text& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // userNameCreate Field Functions 
    bool hasUserNameCreate() const { return this->userNameCreate_ != nullptr;};
    void deleteUserNameCreate() { this->userNameCreate_ = nullptr;};
    inline string userNameCreate() const { DARABONBA_PTR_GET_DEFAULT(userNameCreate_, "") };
    inline Text& setUserNameCreate(string userNameCreate) { DARABONBA_PTR_SET_VALUE(userNameCreate_, userNameCreate) };


    // userNameModified Field Functions 
    bool hasUserNameModified() const { return this->userNameModified_ != nullptr;};
    void deleteUserNameModified() { this->userNameModified_ = nullptr;};
    inline string userNameModified() const { DARABONBA_PTR_GET_DEFAULT(userNameModified_, "") };
    inline Text& setUserNameModified(string userNameModified) { DARABONBA_PTR_SET_VALUE(userNameModified_, userNameModified) };


  protected:
    std::shared_ptr<string> agentId_ = nullptr;
    std::shared_ptr<string> agentName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> desc_ = nullptr;
    std::shared_ptr<string> errMsg_ = nullptr;
    std::shared_ptr<string> gmtCreate_ = nullptr;
    std::shared_ptr<string> gmtModified_ = nullptr;
    std::shared_ptr<vector<int64_t>> illustrationTaskIdList_ = nullptr;
    std::shared_ptr<string> publishStatus_ = nullptr;
    std::shared_ptr<string> textContent_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> textId_ = nullptr;
    std::shared_ptr<bool> textIllustrationTag_ = nullptr;
    std::shared_ptr<string> textModeType_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> textStatus_ = nullptr;
    std::shared_ptr<string> textStyleType_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> textTaskId_ = nullptr;
    std::shared_ptr<vector<string>> textThemes_ = nullptr;
    std::shared_ptr<string> title_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> userNameCreate_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> userNameModified_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IntelligentCreation20240313
#endif
