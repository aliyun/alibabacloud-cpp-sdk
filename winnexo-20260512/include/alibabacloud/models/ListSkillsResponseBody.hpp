// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSKILLSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSKILLSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class ListSkillsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSkillsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(items, items_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(page, page_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(total, total_);
    };
    friend void from_json(const Darabonba::Json& j, ListSkillsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(items, items_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(page, page_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(total, total_);
    };
    ListSkillsResponseBody() = default ;
    ListSkillsResponseBody(const ListSkillsResponseBody &) = default ;
    ListSkillsResponseBody(ListSkillsResponseBody &&) = default ;
    ListSkillsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSkillsResponseBody() = default ;
    ListSkillsResponseBody& operator=(const ListSkillsResponseBody &) = default ;
    ListSkillsResponseBody& operator=(ListSkillsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(createdTime, createdTime_);
        DARABONBA_PTR_TO_JSON(description, description_);
        DARABONBA_PTR_TO_JSON(executeMode, executeMode_);
        DARABONBA_PTR_TO_JSON(globalAccess, globalAccess_);
        DARABONBA_PTR_TO_JSON(hasDraftChanges, hasDraftChanges_);
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(skillCode, skillCode_);
        DARABONBA_PTR_TO_JSON(skillHubDefinitionId, skillHubDefinitionId_);
        DARABONBA_PTR_TO_JSON(sourceType, sourceType_);
        DARABONBA_PTR_TO_JSON(status, status_);
        DARABONBA_PTR_TO_JSON(tags, tags_);
        DARABONBA_PTR_TO_JSON(updatedTime, updatedTime_);
        DARABONBA_PTR_TO_JSON(versionNumber, versionNumber_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(createdTime, createdTime_);
        DARABONBA_PTR_FROM_JSON(description, description_);
        DARABONBA_PTR_FROM_JSON(executeMode, executeMode_);
        DARABONBA_PTR_FROM_JSON(globalAccess, globalAccess_);
        DARABONBA_PTR_FROM_JSON(hasDraftChanges, hasDraftChanges_);
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(skillCode, skillCode_);
        DARABONBA_PTR_FROM_JSON(skillHubDefinitionId, skillHubDefinitionId_);
        DARABONBA_PTR_FROM_JSON(sourceType, sourceType_);
        DARABONBA_PTR_FROM_JSON(status, status_);
        DARABONBA_PTR_FROM_JSON(tags, tags_);
        DARABONBA_PTR_FROM_JSON(updatedTime, updatedTime_);
        DARABONBA_PTR_FROM_JSON(versionNumber, versionNumber_);
      };
      Items() = default ;
      Items(const Items &) = default ;
      Items(Items &&) = default ;
      Items(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Items() = default ;
      Items& operator=(const Items &) = default ;
      Items& operator=(Items &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->createdTime_ == nullptr
        && this->description_ == nullptr && this->executeMode_ == nullptr && this->globalAccess_ == nullptr && this->hasDraftChanges_ == nullptr && this->name_ == nullptr
        && this->skillCode_ == nullptr && this->skillHubDefinitionId_ == nullptr && this->sourceType_ == nullptr && this->status_ == nullptr && this->tags_ == nullptr
        && this->updatedTime_ == nullptr && this->versionNumber_ == nullptr; };
      // createdTime Field Functions 
      bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
      void deleteCreatedTime() { this->createdTime_ = nullptr;};
      inline string getCreatedTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, "") };
      inline Items& setCreatedTime(string createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Items& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // executeMode Field Functions 
      bool hasExecuteMode() const { return this->executeMode_ != nullptr;};
      void deleteExecuteMode() { this->executeMode_ = nullptr;};
      inline string getExecuteMode() const { DARABONBA_PTR_GET_DEFAULT(executeMode_, "") };
      inline Items& setExecuteMode(string executeMode) { DARABONBA_PTR_SET_VALUE(executeMode_, executeMode) };


      // globalAccess Field Functions 
      bool hasGlobalAccess() const { return this->globalAccess_ != nullptr;};
      void deleteGlobalAccess() { this->globalAccess_ = nullptr;};
      inline bool getGlobalAccess() const { DARABONBA_PTR_GET_DEFAULT(globalAccess_, false) };
      inline Items& setGlobalAccess(bool globalAccess) { DARABONBA_PTR_SET_VALUE(globalAccess_, globalAccess) };


      // hasDraftChanges Field Functions 
      bool hasHasDraftChanges() const { return this->hasDraftChanges_ != nullptr;};
      void deleteHasDraftChanges() { this->hasDraftChanges_ = nullptr;};
      inline bool getHasDraftChanges() const { DARABONBA_PTR_GET_DEFAULT(hasDraftChanges_, false) };
      inline Items& setHasDraftChanges(bool hasDraftChanges) { DARABONBA_PTR_SET_VALUE(hasDraftChanges_, hasDraftChanges) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Items& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // skillCode Field Functions 
      bool hasSkillCode() const { return this->skillCode_ != nullptr;};
      void deleteSkillCode() { this->skillCode_ = nullptr;};
      inline string getSkillCode() const { DARABONBA_PTR_GET_DEFAULT(skillCode_, "") };
      inline Items& setSkillCode(string skillCode) { DARABONBA_PTR_SET_VALUE(skillCode_, skillCode) };


      // skillHubDefinitionId Field Functions 
      bool hasSkillHubDefinitionId() const { return this->skillHubDefinitionId_ != nullptr;};
      void deleteSkillHubDefinitionId() { this->skillHubDefinitionId_ = nullptr;};
      inline int64_t getSkillHubDefinitionId() const { DARABONBA_PTR_GET_DEFAULT(skillHubDefinitionId_, 0L) };
      inline Items& setSkillHubDefinitionId(int64_t skillHubDefinitionId) { DARABONBA_PTR_SET_VALUE(skillHubDefinitionId_, skillHubDefinitionId) };


      // sourceType Field Functions 
      bool hasSourceType() const { return this->sourceType_ != nullptr;};
      void deleteSourceType() { this->sourceType_ = nullptr;};
      inline string getSourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
      inline Items& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Items& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline const vector<string> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<string>) };
      inline vector<string> getTags() { DARABONBA_PTR_GET(tags_, vector<string>) };
      inline Items& setTags(const vector<string> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
      inline Items& setTags(vector<string> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


      // updatedTime Field Functions 
      bool hasUpdatedTime() const { return this->updatedTime_ != nullptr;};
      void deleteUpdatedTime() { this->updatedTime_ = nullptr;};
      inline string getUpdatedTime() const { DARABONBA_PTR_GET_DEFAULT(updatedTime_, "") };
      inline Items& setUpdatedTime(string updatedTime) { DARABONBA_PTR_SET_VALUE(updatedTime_, updatedTime) };


      // versionNumber Field Functions 
      bool hasVersionNumber() const { return this->versionNumber_ != nullptr;};
      void deleteVersionNumber() { this->versionNumber_ = nullptr;};
      inline string getVersionNumber() const { DARABONBA_PTR_GET_DEFAULT(versionNumber_, "") };
      inline Items& setVersionNumber(string versionNumber) { DARABONBA_PTR_SET_VALUE(versionNumber_, versionNumber) };


    protected:
      // 创建时间，ISO8601 格式
      shared_ptr<string> createdTime_ {};
      // 技能描述（已 i18n 解析）
      shared_ptr<string> description_ {};
      // 执行模式：CODE_AGENT / SYSTEM 等
      shared_ptr<string> executeMode_ {};
      // 是否全局可访问
      shared_ptr<bool> globalAccess_ {};
      // 是否存在未发布的草稿修改
      shared_ptr<bool> hasDraftChanges_ {};
      // 技能名称（已 i18n 解析）
      shared_ptr<string> name_ {};
      // 技能编码（全局唯一）
      shared_ptr<string> skillCode_ {};
      // 技能定义 ID
      shared_ptr<int64_t> skillHubDefinitionId_ {};
      // 来源类型：BUILTIN / CUSTOM
      shared_ptr<string> sourceType_ {};
      // 技能状态：ACTIVE / DRAFT
      shared_ptr<string> status_ {};
      // 标签列表（已 i18n 解析）
      shared_ptr<vector<string>> tags_ {};
      // 修改时间，ISO8601 格式
      shared_ptr<string> updatedTime_ {};
      // 版本号
      shared_ptr<string> versionNumber_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->items_ == nullptr && this->message_ == nullptr && this->page_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr
        && this->total_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListSkillsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<ListSkillsResponseBody::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<ListSkillsResponseBody::Items>) };
    inline vector<ListSkillsResponseBody::Items> getItems() { DARABONBA_PTR_GET(items_, vector<ListSkillsResponseBody::Items>) };
    inline ListSkillsResponseBody& setItems(const vector<ListSkillsResponseBody::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline ListSkillsResponseBody& setItems(vector<ListSkillsResponseBody::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListSkillsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // page Field Functions 
    bool hasPage() const { return this->page_ != nullptr;};
    void deletePage() { this->page_ = nullptr;};
    inline int32_t getPage() const { DARABONBA_PTR_GET_DEFAULT(page_, 0) };
    inline ListSkillsResponseBody& setPage(int32_t page) { DARABONBA_PTR_SET_VALUE(page_, page) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListSkillsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListSkillsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int64_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
    inline ListSkillsResponseBody& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // 业务状态码：成功为 200，失败为后端错误码（ERR.* / InvalidParameter.*）
    shared_ptr<string> code_ {};
    // 技能列表
    shared_ptr<vector<ListSkillsResponseBody::Items>> items_ {};
    // 错误描述，成功时为空
    shared_ptr<string> message_ {};
    // 当前页码
    shared_ptr<int32_t> page_ {};
    // 每页数量
    shared_ptr<int32_t> pageSize_ {};
    // 请求追踪 ID
    shared_ptr<string> requestId_ {};
    // 符合条件的技能总数
    shared_ptr<int64_t> total_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
