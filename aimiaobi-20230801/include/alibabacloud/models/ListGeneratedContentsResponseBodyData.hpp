// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTGENERATEDCONTENTSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTGENERATEDCONTENTSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListGeneratedContentsResponseBodyDataFileAttr.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class ListGeneratedContentsResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListGeneratedContentsResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(ContentDomain, contentDomain_);
      DARABONBA_PTR_TO_JSON(ContentText, contentText_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(CreateUser, createUser_);
      DARABONBA_PTR_TO_JSON(DeviceId, deviceId_);
      DARABONBA_PTR_TO_JSON(FileAttr, fileAttr_);
      DARABONBA_PTR_TO_JSON(FileKey, fileKey_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(KeywordList, keywordList_);
      DARABONBA_PTR_TO_JSON(Keywords, keywords_);
      DARABONBA_PTR_TO_JSON(Prompt, prompt_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(Title, title_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_TO_JSON(UpdateUser, updateUser_);
      DARABONBA_PTR_TO_JSON(Uuid, uuid_);
    };
    friend void from_json(const Darabonba::Json& j, ListGeneratedContentsResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(ContentDomain, contentDomain_);
      DARABONBA_PTR_FROM_JSON(ContentText, contentText_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(CreateUser, createUser_);
      DARABONBA_PTR_FROM_JSON(DeviceId, deviceId_);
      DARABONBA_PTR_FROM_JSON(FileAttr, fileAttr_);
      DARABONBA_PTR_FROM_JSON(FileKey, fileKey_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(KeywordList, keywordList_);
      DARABONBA_PTR_FROM_JSON(Keywords, keywords_);
      DARABONBA_PTR_FROM_JSON(Prompt, prompt_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_FROM_JSON(UpdateUser, updateUser_);
      DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
    };
    ListGeneratedContentsResponseBodyData() = default ;
    ListGeneratedContentsResponseBodyData(const ListGeneratedContentsResponseBodyData &) = default ;
    ListGeneratedContentsResponseBodyData(ListGeneratedContentsResponseBodyData &&) = default ;
    ListGeneratedContentsResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListGeneratedContentsResponseBodyData() = default ;
    ListGeneratedContentsResponseBodyData& operator=(const ListGeneratedContentsResponseBodyData &) = default ;
    ListGeneratedContentsResponseBodyData& operator=(ListGeneratedContentsResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->content_ == nullptr
        && return this->contentDomain_ == nullptr && return this->contentText_ == nullptr && return this->createTime_ == nullptr && return this->createUser_ == nullptr && return this->deviceId_ == nullptr
        && return this->fileAttr_ == nullptr && return this->fileKey_ == nullptr && return this->id_ == nullptr && return this->keywordList_ == nullptr && return this->keywords_ == nullptr
        && return this->prompt_ == nullptr && return this->taskId_ == nullptr && return this->title_ == nullptr && return this->updateTime_ == nullptr && return this->updateUser_ == nullptr
        && return this->uuid_ == nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline ListGeneratedContentsResponseBodyData& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // contentDomain Field Functions 
    bool hasContentDomain() const { return this->contentDomain_ != nullptr;};
    void deleteContentDomain() { this->contentDomain_ = nullptr;};
    inline string contentDomain() const { DARABONBA_PTR_GET_DEFAULT(contentDomain_, "") };
    inline ListGeneratedContentsResponseBodyData& setContentDomain(string contentDomain) { DARABONBA_PTR_SET_VALUE(contentDomain_, contentDomain) };


    // contentText Field Functions 
    bool hasContentText() const { return this->contentText_ != nullptr;};
    void deleteContentText() { this->contentText_ = nullptr;};
    inline string contentText() const { DARABONBA_PTR_GET_DEFAULT(contentText_, "") };
    inline ListGeneratedContentsResponseBodyData& setContentText(string contentText) { DARABONBA_PTR_SET_VALUE(contentText_, contentText) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListGeneratedContentsResponseBodyData& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // createUser Field Functions 
    bool hasCreateUser() const { return this->createUser_ != nullptr;};
    void deleteCreateUser() { this->createUser_ = nullptr;};
    inline string createUser() const { DARABONBA_PTR_GET_DEFAULT(createUser_, "") };
    inline ListGeneratedContentsResponseBodyData& setCreateUser(string createUser) { DARABONBA_PTR_SET_VALUE(createUser_, createUser) };


    // deviceId Field Functions 
    bool hasDeviceId() const { return this->deviceId_ != nullptr;};
    void deleteDeviceId() { this->deviceId_ = nullptr;};
    inline string deviceId() const { DARABONBA_PTR_GET_DEFAULT(deviceId_, "") };
    inline ListGeneratedContentsResponseBodyData& setDeviceId(string deviceId) { DARABONBA_PTR_SET_VALUE(deviceId_, deviceId) };


    // fileAttr Field Functions 
    bool hasFileAttr() const { return this->fileAttr_ != nullptr;};
    void deleteFileAttr() { this->fileAttr_ = nullptr;};
    inline const Models::ListGeneratedContentsResponseBodyDataFileAttr & fileAttr() const { DARABONBA_PTR_GET_CONST(fileAttr_, Models::ListGeneratedContentsResponseBodyDataFileAttr) };
    inline Models::ListGeneratedContentsResponseBodyDataFileAttr fileAttr() { DARABONBA_PTR_GET(fileAttr_, Models::ListGeneratedContentsResponseBodyDataFileAttr) };
    inline ListGeneratedContentsResponseBodyData& setFileAttr(const Models::ListGeneratedContentsResponseBodyDataFileAttr & fileAttr) { DARABONBA_PTR_SET_VALUE(fileAttr_, fileAttr) };
    inline ListGeneratedContentsResponseBodyData& setFileAttr(Models::ListGeneratedContentsResponseBodyDataFileAttr && fileAttr) { DARABONBA_PTR_SET_RVALUE(fileAttr_, fileAttr) };


    // fileKey Field Functions 
    bool hasFileKey() const { return this->fileKey_ != nullptr;};
    void deleteFileKey() { this->fileKey_ = nullptr;};
    inline string fileKey() const { DARABONBA_PTR_GET_DEFAULT(fileKey_, "") };
    inline ListGeneratedContentsResponseBodyData& setFileKey(string fileKey) { DARABONBA_PTR_SET_VALUE(fileKey_, fileKey) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline ListGeneratedContentsResponseBodyData& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // keywordList Field Functions 
    bool hasKeywordList() const { return this->keywordList_ != nullptr;};
    void deleteKeywordList() { this->keywordList_ = nullptr;};
    inline const vector<string> & keywordList() const { DARABONBA_PTR_GET_CONST(keywordList_, vector<string>) };
    inline vector<string> keywordList() { DARABONBA_PTR_GET(keywordList_, vector<string>) };
    inline ListGeneratedContentsResponseBodyData& setKeywordList(const vector<string> & keywordList) { DARABONBA_PTR_SET_VALUE(keywordList_, keywordList) };
    inline ListGeneratedContentsResponseBodyData& setKeywordList(vector<string> && keywordList) { DARABONBA_PTR_SET_RVALUE(keywordList_, keywordList) };


    // keywords Field Functions 
    bool hasKeywords() const { return this->keywords_ != nullptr;};
    void deleteKeywords() { this->keywords_ = nullptr;};
    inline string keywords() const { DARABONBA_PTR_GET_DEFAULT(keywords_, "") };
    inline ListGeneratedContentsResponseBodyData& setKeywords(string keywords) { DARABONBA_PTR_SET_VALUE(keywords_, keywords) };


    // prompt Field Functions 
    bool hasPrompt() const { return this->prompt_ != nullptr;};
    void deletePrompt() { this->prompt_ = nullptr;};
    inline string prompt() const { DARABONBA_PTR_GET_DEFAULT(prompt_, "") };
    inline ListGeneratedContentsResponseBodyData& setPrompt(string prompt) { DARABONBA_PTR_SET_VALUE(prompt_, prompt) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline ListGeneratedContentsResponseBodyData& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline ListGeneratedContentsResponseBodyData& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline ListGeneratedContentsResponseBodyData& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    // updateUser Field Functions 
    bool hasUpdateUser() const { return this->updateUser_ != nullptr;};
    void deleteUpdateUser() { this->updateUser_ = nullptr;};
    inline string updateUser() const { DARABONBA_PTR_GET_DEFAULT(updateUser_, "") };
    inline ListGeneratedContentsResponseBodyData& setUpdateUser(string updateUser) { DARABONBA_PTR_SET_VALUE(updateUser_, updateUser) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string uuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline ListGeneratedContentsResponseBodyData& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


  protected:
    std::shared_ptr<string> content_ = nullptr;
    std::shared_ptr<string> contentDomain_ = nullptr;
    std::shared_ptr<string> contentText_ = nullptr;
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<string> createUser_ = nullptr;
    std::shared_ptr<string> deviceId_ = nullptr;
    std::shared_ptr<Models::ListGeneratedContentsResponseBodyDataFileAttr> fileAttr_ = nullptr;
    std::shared_ptr<string> fileKey_ = nullptr;
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<vector<string>> keywordList_ = nullptr;
    std::shared_ptr<string> keywords_ = nullptr;
    std::shared_ptr<string> prompt_ = nullptr;
    std::shared_ptr<string> taskId_ = nullptr;
    std::shared_ptr<string> title_ = nullptr;
    std::shared_ptr<string> updateTime_ = nullptr;
    std::shared_ptr<string> updateUser_ = nullptr;
    std::shared_ptr<string> uuid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
