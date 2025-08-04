// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETGENERATEDCONTENTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETGENERATEDCONTENTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class GetGeneratedContentResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetGeneratedContentResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(ContentDomain, contentDomain_);
      DARABONBA_PTR_TO_JSON(ContentText, contentText_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(CreateUser, createUser_);
      DARABONBA_PTR_TO_JSON(DeviceId, deviceId_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(IgnoreContentAuditWords, ignoreContentAuditWords_);
      DARABONBA_PTR_TO_JSON(KeywordList, keywordList_);
      DARABONBA_PTR_TO_JSON(Keywords, keywords_);
      DARABONBA_PTR_TO_JSON(Prompt, prompt_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(Title, title_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_TO_JSON(UpdateUser, updateUser_);
      DARABONBA_PTR_TO_JSON(Uuid, uuid_);
    };
    friend void from_json(const Darabonba::Json& j, GetGeneratedContentResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(ContentDomain, contentDomain_);
      DARABONBA_PTR_FROM_JSON(ContentText, contentText_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(CreateUser, createUser_);
      DARABONBA_PTR_FROM_JSON(DeviceId, deviceId_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(IgnoreContentAuditWords, ignoreContentAuditWords_);
      DARABONBA_PTR_FROM_JSON(KeywordList, keywordList_);
      DARABONBA_PTR_FROM_JSON(Keywords, keywords_);
      DARABONBA_PTR_FROM_JSON(Prompt, prompt_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_FROM_JSON(UpdateUser, updateUser_);
      DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
    };
    GetGeneratedContentResponseBodyData() = default ;
    GetGeneratedContentResponseBodyData(const GetGeneratedContentResponseBodyData &) = default ;
    GetGeneratedContentResponseBodyData(GetGeneratedContentResponseBodyData &&) = default ;
    GetGeneratedContentResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetGeneratedContentResponseBodyData() = default ;
    GetGeneratedContentResponseBodyData& operator=(const GetGeneratedContentResponseBodyData &) = default ;
    GetGeneratedContentResponseBodyData& operator=(GetGeneratedContentResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->content_ != nullptr
        && this->contentDomain_ != nullptr && this->contentText_ != nullptr && this->createTime_ != nullptr && this->createUser_ != nullptr && this->deviceId_ != nullptr
        && this->id_ != nullptr && this->ignoreContentAuditWords_ != nullptr && this->keywordList_ != nullptr && this->keywords_ != nullptr && this->prompt_ != nullptr
        && this->taskId_ != nullptr && this->title_ != nullptr && this->updateTime_ != nullptr && this->updateUser_ != nullptr && this->uuid_ != nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline GetGeneratedContentResponseBodyData& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // contentDomain Field Functions 
    bool hasContentDomain() const { return this->contentDomain_ != nullptr;};
    void deleteContentDomain() { this->contentDomain_ = nullptr;};
    inline string contentDomain() const { DARABONBA_PTR_GET_DEFAULT(contentDomain_, "") };
    inline GetGeneratedContentResponseBodyData& setContentDomain(string contentDomain) { DARABONBA_PTR_SET_VALUE(contentDomain_, contentDomain) };


    // contentText Field Functions 
    bool hasContentText() const { return this->contentText_ != nullptr;};
    void deleteContentText() { this->contentText_ = nullptr;};
    inline string contentText() const { DARABONBA_PTR_GET_DEFAULT(contentText_, "") };
    inline GetGeneratedContentResponseBodyData& setContentText(string contentText) { DARABONBA_PTR_SET_VALUE(contentText_, contentText) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline GetGeneratedContentResponseBodyData& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // createUser Field Functions 
    bool hasCreateUser() const { return this->createUser_ != nullptr;};
    void deleteCreateUser() { this->createUser_ = nullptr;};
    inline string createUser() const { DARABONBA_PTR_GET_DEFAULT(createUser_, "") };
    inline GetGeneratedContentResponseBodyData& setCreateUser(string createUser) { DARABONBA_PTR_SET_VALUE(createUser_, createUser) };


    // deviceId Field Functions 
    bool hasDeviceId() const { return this->deviceId_ != nullptr;};
    void deleteDeviceId() { this->deviceId_ = nullptr;};
    inline string deviceId() const { DARABONBA_PTR_GET_DEFAULT(deviceId_, "") };
    inline GetGeneratedContentResponseBodyData& setDeviceId(string deviceId) { DARABONBA_PTR_SET_VALUE(deviceId_, deviceId) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline GetGeneratedContentResponseBodyData& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // ignoreContentAuditWords Field Functions 
    bool hasIgnoreContentAuditWords() const { return this->ignoreContentAuditWords_ != nullptr;};
    void deleteIgnoreContentAuditWords() { this->ignoreContentAuditWords_ = nullptr;};
    inline string ignoreContentAuditWords() const { DARABONBA_PTR_GET_DEFAULT(ignoreContentAuditWords_, "") };
    inline GetGeneratedContentResponseBodyData& setIgnoreContentAuditWords(string ignoreContentAuditWords) { DARABONBA_PTR_SET_VALUE(ignoreContentAuditWords_, ignoreContentAuditWords) };


    // keywordList Field Functions 
    bool hasKeywordList() const { return this->keywordList_ != nullptr;};
    void deleteKeywordList() { this->keywordList_ = nullptr;};
    inline const vector<string> & keywordList() const { DARABONBA_PTR_GET_CONST(keywordList_, vector<string>) };
    inline vector<string> keywordList() { DARABONBA_PTR_GET(keywordList_, vector<string>) };
    inline GetGeneratedContentResponseBodyData& setKeywordList(const vector<string> & keywordList) { DARABONBA_PTR_SET_VALUE(keywordList_, keywordList) };
    inline GetGeneratedContentResponseBodyData& setKeywordList(vector<string> && keywordList) { DARABONBA_PTR_SET_RVALUE(keywordList_, keywordList) };


    // keywords Field Functions 
    bool hasKeywords() const { return this->keywords_ != nullptr;};
    void deleteKeywords() { this->keywords_ = nullptr;};
    inline string keywords() const { DARABONBA_PTR_GET_DEFAULT(keywords_, "") };
    inline GetGeneratedContentResponseBodyData& setKeywords(string keywords) { DARABONBA_PTR_SET_VALUE(keywords_, keywords) };


    // prompt Field Functions 
    bool hasPrompt() const { return this->prompt_ != nullptr;};
    void deletePrompt() { this->prompt_ = nullptr;};
    inline string prompt() const { DARABONBA_PTR_GET_DEFAULT(prompt_, "") };
    inline GetGeneratedContentResponseBodyData& setPrompt(string prompt) { DARABONBA_PTR_SET_VALUE(prompt_, prompt) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline GetGeneratedContentResponseBodyData& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline GetGeneratedContentResponseBodyData& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline GetGeneratedContentResponseBodyData& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    // updateUser Field Functions 
    bool hasUpdateUser() const { return this->updateUser_ != nullptr;};
    void deleteUpdateUser() { this->updateUser_ = nullptr;};
    inline string updateUser() const { DARABONBA_PTR_GET_DEFAULT(updateUser_, "") };
    inline GetGeneratedContentResponseBodyData& setUpdateUser(string updateUser) { DARABONBA_PTR_SET_VALUE(updateUser_, updateUser) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string uuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline GetGeneratedContentResponseBodyData& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


  protected:
    std::shared_ptr<string> content_ = nullptr;
    std::shared_ptr<string> contentDomain_ = nullptr;
    std::shared_ptr<string> contentText_ = nullptr;
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<string> createUser_ = nullptr;
    std::shared_ptr<string> deviceId_ = nullptr;
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<string> ignoreContentAuditWords_ = nullptr;
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
