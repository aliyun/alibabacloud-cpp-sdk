// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHATITEM_HPP_
#define ALIBABACLOUD_MODELS_CHATITEM_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ChatRefDocItem.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EnergyExpertExternal20220923
{
namespace Models
{
  class ChatItem : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ChatItem& obj) { 
      DARABONBA_PTR_TO_JSON(answer, answer_);
      DARABONBA_PTR_TO_JSON(createTime, createTime_);
      DARABONBA_PTR_TO_JSON(folderId, folderId_);
      DARABONBA_PTR_TO_JSON(folderName, folderName_);
      DARABONBA_PTR_TO_JSON(question, question_);
      DARABONBA_PTR_TO_JSON(refDocList, refDocList_);
    };
    friend void from_json(const Darabonba::Json& j, ChatItem& obj) { 
      DARABONBA_PTR_FROM_JSON(answer, answer_);
      DARABONBA_PTR_FROM_JSON(createTime, createTime_);
      DARABONBA_PTR_FROM_JSON(folderId, folderId_);
      DARABONBA_PTR_FROM_JSON(folderName, folderName_);
      DARABONBA_PTR_FROM_JSON(question, question_);
      DARABONBA_PTR_FROM_JSON(refDocList, refDocList_);
    };
    ChatItem() = default ;
    ChatItem(const ChatItem &) = default ;
    ChatItem(ChatItem &&) = default ;
    ChatItem(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ChatItem() = default ;
    ChatItem& operator=(const ChatItem &) = default ;
    ChatItem& operator=(ChatItem &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->answer_ == nullptr
        && return this->createTime_ == nullptr && return this->folderId_ == nullptr && return this->folderName_ == nullptr && return this->question_ == nullptr && return this->refDocList_ == nullptr; };
    // answer Field Functions 
    bool hasAnswer() const { return this->answer_ != nullptr;};
    void deleteAnswer() { this->answer_ = nullptr;};
    inline string answer() const { DARABONBA_PTR_GET_DEFAULT(answer_, "") };
    inline ChatItem& setAnswer(string answer) { DARABONBA_PTR_SET_VALUE(answer_, answer) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline ChatItem& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // folderId Field Functions 
    bool hasFolderId() const { return this->folderId_ != nullptr;};
    void deleteFolderId() { this->folderId_ = nullptr;};
    inline string folderId() const { DARABONBA_PTR_GET_DEFAULT(folderId_, "") };
    inline ChatItem& setFolderId(string folderId) { DARABONBA_PTR_SET_VALUE(folderId_, folderId) };


    // folderName Field Functions 
    bool hasFolderName() const { return this->folderName_ != nullptr;};
    void deleteFolderName() { this->folderName_ = nullptr;};
    inline string folderName() const { DARABONBA_PTR_GET_DEFAULT(folderName_, "") };
    inline ChatItem& setFolderName(string folderName) { DARABONBA_PTR_SET_VALUE(folderName_, folderName) };


    // question Field Functions 
    bool hasQuestion() const { return this->question_ != nullptr;};
    void deleteQuestion() { this->question_ = nullptr;};
    inline string question() const { DARABONBA_PTR_GET_DEFAULT(question_, "") };
    inline ChatItem& setQuestion(string question) { DARABONBA_PTR_SET_VALUE(question_, question) };


    // refDocList Field Functions 
    bool hasRefDocList() const { return this->refDocList_ != nullptr;};
    void deleteRefDocList() { this->refDocList_ = nullptr;};
    inline const vector<ChatRefDocItem> & refDocList() const { DARABONBA_PTR_GET_CONST(refDocList_, vector<ChatRefDocItem>) };
    inline vector<ChatRefDocItem> refDocList() { DARABONBA_PTR_GET(refDocList_, vector<ChatRefDocItem>) };
    inline ChatItem& setRefDocList(const vector<ChatRefDocItem> & refDocList) { DARABONBA_PTR_SET_VALUE(refDocList_, refDocList) };
    inline ChatItem& setRefDocList(vector<ChatRefDocItem> && refDocList) { DARABONBA_PTR_SET_RVALUE(refDocList_, refDocList) };


  protected:
    std::shared_ptr<string> answer_ = nullptr;
    std::shared_ptr<int64_t> createTime_ = nullptr;
    std::shared_ptr<string> folderId_ = nullptr;
    std::shared_ptr<string> folderName_ = nullptr;
    std::shared_ptr<string> question_ = nullptr;
    std::shared_ptr<vector<ChatRefDocItem>> refDocList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EnergyExpertExternal20220923
#endif
