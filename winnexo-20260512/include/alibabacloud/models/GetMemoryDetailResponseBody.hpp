// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMEMORYDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETMEMORYDETAILRESPONSEBODY_HPP_
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
  class GetMemoryDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMemoryDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(groups, groups_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(profile, profile_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetMemoryDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(groups, groups_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(profile, profile_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    GetMemoryDetailResponseBody() = default ;
    GetMemoryDetailResponseBody(const GetMemoryDetailResponseBody &) = default ;
    GetMemoryDetailResponseBody(GetMemoryDetailResponseBody &&) = default ;
    GetMemoryDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMemoryDetailResponseBody() = default ;
    GetMemoryDetailResponseBody& operator=(const GetMemoryDetailResponseBody &) = default ;
    GetMemoryDetailResponseBody& operator=(GetMemoryDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Profile : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Profile& obj) { 
        DARABONBA_PTR_TO_JSON(content, content_);
        DARABONBA_PTR_TO_JSON(exists, exists_);
        DARABONBA_PTR_TO_JSON(gmtModified, gmtModified_);
      };
      friend void from_json(const Darabonba::Json& j, Profile& obj) { 
        DARABONBA_PTR_FROM_JSON(content, content_);
        DARABONBA_PTR_FROM_JSON(exists, exists_);
        DARABONBA_PTR_FROM_JSON(gmtModified, gmtModified_);
      };
      Profile() = default ;
      Profile(const Profile &) = default ;
      Profile(Profile &&) = default ;
      Profile(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Profile() = default ;
      Profile& operator=(const Profile &) = default ;
      Profile& operator=(Profile &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->content_ == nullptr
        && this->exists_ == nullptr && this->gmtModified_ == nullptr; };
      // content Field Functions 
      bool hasContent() const { return this->content_ != nullptr;};
      void deleteContent() { this->content_ = nullptr;};
      inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
      inline Profile& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


      // exists Field Functions 
      bool hasExists() const { return this->exists_ != nullptr;};
      void deleteExists() { this->exists_ = nullptr;};
      inline bool getExists() const { DARABONBA_PTR_GET_DEFAULT(exists_, false) };
      inline Profile& setExists(bool exists) { DARABONBA_PTR_SET_VALUE(exists_, exists) };


      // gmtModified Field Functions 
      bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
      void deleteGmtModified() { this->gmtModified_ = nullptr;};
      inline int64_t getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, 0L) };
      inline Profile& setGmtModified(int64_t gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    protected:
      // 手动记忆的完整正文；未保存过时为空字符串
      shared_ptr<string> content_ {};
      // profile.md 是否存在；未保存过时为 false
      shared_ptr<bool> exists_ {};
      // profile.md 最近修改时间，Unix 秒级时间戳；文件不存在或无法取得元数据时为 null
      shared_ptr<int64_t> gmtModified_ {};
    };

    class Groups : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Groups& obj) { 
        DARABONBA_PTR_TO_JSON(gmtModified, gmtModified_);
        DARABONBA_PTR_TO_JSON(items, items_);
        DARABONBA_PTR_TO_JSON(type, type_);
      };
      friend void from_json(const Darabonba::Json& j, Groups& obj) { 
        DARABONBA_PTR_FROM_JSON(gmtModified, gmtModified_);
        DARABONBA_PTR_FROM_JSON(items, items_);
        DARABONBA_PTR_FROM_JSON(type, type_);
      };
      Groups() = default ;
      Groups(const Groups &) = default ;
      Groups(Groups &&) = default ;
      Groups(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Groups() = default ;
      Groups& operator=(const Groups &) = default ;
      Groups& operator=(Groups &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Items : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Items& obj) { 
          DARABONBA_PTR_TO_JSON(content, content_);
          DARABONBA_PTR_TO_JSON(description, description_);
          DARABONBA_PTR_TO_JSON(id, id_);
          DARABONBA_PTR_TO_JSON(title, title_);
        };
        friend void from_json(const Darabonba::Json& j, Items& obj) { 
          DARABONBA_PTR_FROM_JSON(content, content_);
          DARABONBA_PTR_FROM_JSON(description, description_);
          DARABONBA_PTR_FROM_JSON(id, id_);
          DARABONBA_PTR_FROM_JSON(title, title_);
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
        virtual bool empty() const override { return this->content_ == nullptr
        && this->description_ == nullptr && this->id_ == nullptr && this->title_ == nullptr; };
        // content Field Functions 
        bool hasContent() const { return this->content_ != nullptr;};
        void deleteContent() { this->content_ = nullptr;};
        inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
        inline Items& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline Items& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline Items& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // title Field Functions 
        bool hasTitle() const { return this->title_ != nullptr;};
        void deleteTitle() { this->title_ = nullptr;};
        inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
        inline Items& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


      protected:
        // 自动记忆正文，不包含 YAML frontmatter
        shared_ptr<string> content_ {};
        // 自动记忆的附加描述；没有时为空字符串
        shared_ptr<string> description_ {};
        // 自动记忆条目的唯一标识，为相对 OSS 路径
        shared_ptr<string> id_ {};
        // 自动记忆标题，来自文件元数据或文件名
        shared_ptr<string> title_ {};
      };

      virtual bool empty() const override { return this->gmtModified_ == nullptr
        && this->items_ == nullptr && this->type_ == nullptr; };
      // gmtModified Field Functions 
      bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
      void deleteGmtModified() { this->gmtModified_ = nullptr;};
      inline int64_t getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, 0L) };
      inline Groups& setGmtModified(int64_t gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


      // items Field Functions 
      bool hasItems() const { return this->items_ != nullptr;};
      void deleteItems() { this->items_ = nullptr;};
      inline const vector<Groups::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<Groups::Items>) };
      inline vector<Groups::Items> getItems() { DARABONBA_PTR_GET(items_, vector<Groups::Items>) };
      inline Groups& setItems(const vector<Groups::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
      inline Groups& setItems(vector<Groups::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Groups& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // 该分组最近修改时间，Unix 秒级时间戳；无文件时为 null
      shared_ptr<int64_t> gmtModified_ {};
      // 该类型下的自动记忆条目列表；没有条目时为空数组
      shared_ptr<vector<Groups::Items>> items_ {};
      // 自动记忆类型：user、feedback、reference 或 project
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->groups_ == nullptr && this->message_ == nullptr && this->profile_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetMemoryDetailResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // groups Field Functions 
    bool hasGroups() const { return this->groups_ != nullptr;};
    void deleteGroups() { this->groups_ = nullptr;};
    inline const vector<GetMemoryDetailResponseBody::Groups> & getGroups() const { DARABONBA_PTR_GET_CONST(groups_, vector<GetMemoryDetailResponseBody::Groups>) };
    inline vector<GetMemoryDetailResponseBody::Groups> getGroups() { DARABONBA_PTR_GET(groups_, vector<GetMemoryDetailResponseBody::Groups>) };
    inline GetMemoryDetailResponseBody& setGroups(const vector<GetMemoryDetailResponseBody::Groups> & groups) { DARABONBA_PTR_SET_VALUE(groups_, groups) };
    inline GetMemoryDetailResponseBody& setGroups(vector<GetMemoryDetailResponseBody::Groups> && groups) { DARABONBA_PTR_SET_RVALUE(groups_, groups) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetMemoryDetailResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // profile Field Functions 
    bool hasProfile() const { return this->profile_ != nullptr;};
    void deleteProfile() { this->profile_ = nullptr;};
    inline const GetMemoryDetailResponseBody::Profile & getProfile() const { DARABONBA_PTR_GET_CONST(profile_, GetMemoryDetailResponseBody::Profile) };
    inline GetMemoryDetailResponseBody::Profile getProfile() { DARABONBA_PTR_GET(profile_, GetMemoryDetailResponseBody::Profile) };
    inline GetMemoryDetailResponseBody& setProfile(const GetMemoryDetailResponseBody::Profile & profile) { DARABONBA_PTR_SET_VALUE(profile_, profile) };
    inline GetMemoryDetailResponseBody& setProfile(GetMemoryDetailResponseBody::Profile && profile) { DARABONBA_PTR_SET_RVALUE(profile_, profile) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetMemoryDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // 业务状态码；成功为 200，失败时为对应错误码
    shared_ptr<string> code_ {};
    // 自动拾取记忆的分组列表；无自动记忆时为空数组
    shared_ptr<vector<GetMemoryDetailResponseBody::Groups>> groups_ {};
    // 错误描述；成功时为空字符串，失败时返回具体原因
    shared_ptr<string> message_ {};
    // 手动添加的记忆，来自 profile.md；包含完整内容、存在状态和修改时间
    shared_ptr<GetMemoryDetailResponseBody::Profile> profile_ {};
    // 请求追踪 ID，用于定位本次调用
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
