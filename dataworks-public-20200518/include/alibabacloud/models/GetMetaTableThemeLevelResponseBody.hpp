// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMETATABLETHEMELEVELRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETMETATABLETHEMELEVELRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class GetMetaTableThemeLevelResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMetaTableThemeLevelResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Entity, entity_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetMetaTableThemeLevelResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Entity, entity_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetMetaTableThemeLevelResponseBody() = default ;
    GetMetaTableThemeLevelResponseBody(const GetMetaTableThemeLevelResponseBody &) = default ;
    GetMetaTableThemeLevelResponseBody(GetMetaTableThemeLevelResponseBody &&) = default ;
    GetMetaTableThemeLevelResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMetaTableThemeLevelResponseBody() = default ;
    GetMetaTableThemeLevelResponseBody& operator=(const GetMetaTableThemeLevelResponseBody &) = default ;
    GetMetaTableThemeLevelResponseBody& operator=(GetMetaTableThemeLevelResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Entity : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Entity& obj) { 
        DARABONBA_PTR_TO_JSON(Level, level_);
        DARABONBA_PTR_TO_JSON(Theme, theme_);
      };
      friend void from_json(const Darabonba::Json& j, Entity& obj) { 
        DARABONBA_PTR_FROM_JSON(Level, level_);
        DARABONBA_PTR_FROM_JSON(Theme, theme_);
      };
      Entity() = default ;
      Entity(const Entity &) = default ;
      Entity(Entity &&) = default ;
      Entity(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Entity() = default ;
      Entity& operator=(const Entity &) = default ;
      Entity& operator=(Entity &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Theme : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Theme& obj) { 
          DARABONBA_PTR_TO_JSON(Level, level_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(ParentId, parentId_);
          DARABONBA_PTR_TO_JSON(ThemeId, themeId_);
        };
        friend void from_json(const Darabonba::Json& j, Theme& obj) { 
          DARABONBA_PTR_FROM_JSON(Level, level_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(ParentId, parentId_);
          DARABONBA_PTR_FROM_JSON(ThemeId, themeId_);
        };
        Theme() = default ;
        Theme(const Theme &) = default ;
        Theme(Theme &&) = default ;
        Theme(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Theme() = default ;
        Theme& operator=(const Theme &) = default ;
        Theme& operator=(Theme &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->level_ == nullptr
        && this->name_ == nullptr && this->parentId_ == nullptr && this->themeId_ == nullptr; };
        // level Field Functions 
        bool hasLevel() const { return this->level_ != nullptr;};
        void deleteLevel() { this->level_ = nullptr;};
        inline int32_t getLevel() const { DARABONBA_PTR_GET_DEFAULT(level_, 0) };
        inline Theme& setLevel(int32_t level) { DARABONBA_PTR_SET_VALUE(level_, level) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Theme& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // parentId Field Functions 
        bool hasParentId() const { return this->parentId_ != nullptr;};
        void deleteParentId() { this->parentId_ = nullptr;};
        inline int64_t getParentId() const { DARABONBA_PTR_GET_DEFAULT(parentId_, 0L) };
        inline Theme& setParentId(int64_t parentId) { DARABONBA_PTR_SET_VALUE(parentId_, parentId) };


        // themeId Field Functions 
        bool hasThemeId() const { return this->themeId_ != nullptr;};
        void deleteThemeId() { this->themeId_ = nullptr;};
        inline int64_t getThemeId() const { DARABONBA_PTR_GET_DEFAULT(themeId_, 0L) };
        inline Theme& setThemeId(int64_t themeId) { DARABONBA_PTR_SET_VALUE(themeId_, themeId) };


      protected:
        // The level of the theme. Valid values:
        // 
        // *   1
        // *   2
        shared_ptr<int32_t> level_ {};
        // The name of the theme.
        shared_ptr<string> name_ {};
        // The ID of the parent theme.
        shared_ptr<int64_t> parentId_ {};
        // The ID of the theme.
        shared_ptr<int64_t> themeId_ {};
      };

      class Level : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Level& obj) { 
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(LevelId, levelId_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Type, type_);
        };
        friend void from_json(const Darabonba::Json& j, Level& obj) { 
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(LevelId, levelId_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
        };
        Level() = default ;
        Level(const Level &) = default ;
        Level(Level &&) = default ;
        Level(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Level() = default ;
        Level& operator=(const Level &) = default ;
        Level& operator=(Level &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->description_ == nullptr
        && this->levelId_ == nullptr && this->name_ == nullptr && this->type_ == nullptr; };
        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline Level& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // levelId Field Functions 
        bool hasLevelId() const { return this->levelId_ != nullptr;};
        void deleteLevelId() { this->levelId_ = nullptr;};
        inline int64_t getLevelId() const { DARABONBA_PTR_GET_DEFAULT(levelId_, 0L) };
        inline Level& setLevelId(int64_t levelId) { DARABONBA_PTR_SET_VALUE(levelId_, levelId) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Level& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline int32_t getType() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
        inline Level& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        // The description of the level.
        shared_ptr<string> description_ {};
        // The ID of the level.
        shared_ptr<int64_t> levelId_ {};
        // The name of the level.
        shared_ptr<string> name_ {};
        // The type of the level. Valid values:
        // 
        // *   1: indicates the logical level.
        // *   2: indicates the physical level.
        shared_ptr<int32_t> type_ {};
      };

      virtual bool empty() const override { return this->level_ == nullptr
        && this->theme_ == nullptr; };
      // level Field Functions 
      bool hasLevel() const { return this->level_ != nullptr;};
      void deleteLevel() { this->level_ = nullptr;};
      inline const vector<Entity::Level> & getLevel() const { DARABONBA_PTR_GET_CONST(level_, vector<Entity::Level>) };
      inline vector<Entity::Level> getLevel() { DARABONBA_PTR_GET(level_, vector<Entity::Level>) };
      inline Entity& setLevel(const vector<Entity::Level> & level) { DARABONBA_PTR_SET_VALUE(level_, level) };
      inline Entity& setLevel(vector<Entity::Level> && level) { DARABONBA_PTR_SET_RVALUE(level_, level) };


      // theme Field Functions 
      bool hasTheme() const { return this->theme_ != nullptr;};
      void deleteTheme() { this->theme_ = nullptr;};
      inline const vector<Entity::Theme> & getTheme() const { DARABONBA_PTR_GET_CONST(theme_, vector<Entity::Theme>) };
      inline vector<Entity::Theme> getTheme() { DARABONBA_PTR_GET(theme_, vector<Entity::Theme>) };
      inline Entity& setTheme(const vector<Entity::Theme> & theme) { DARABONBA_PTR_SET_VALUE(theme_, theme) };
      inline Entity& setTheme(vector<Entity::Theme> && theme) { DARABONBA_PTR_SET_RVALUE(theme_, theme) };


    protected:
      // The information about the levels of the metatable.
      shared_ptr<vector<Entity::Level>> level_ {};
      // The information about the themes of the metatable.
      shared_ptr<vector<Entity::Theme>> theme_ {};
    };

    virtual bool empty() const override { return this->entity_ == nullptr
        && this->errorCode_ == nullptr && this->errorMessage_ == nullptr && this->httpStatusCode_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // entity Field Functions 
    bool hasEntity() const { return this->entity_ != nullptr;};
    void deleteEntity() { this->entity_ = nullptr;};
    inline const GetMetaTableThemeLevelResponseBody::Entity & getEntity() const { DARABONBA_PTR_GET_CONST(entity_, GetMetaTableThemeLevelResponseBody::Entity) };
    inline GetMetaTableThemeLevelResponseBody::Entity getEntity() { DARABONBA_PTR_GET(entity_, GetMetaTableThemeLevelResponseBody::Entity) };
    inline GetMetaTableThemeLevelResponseBody& setEntity(const GetMetaTableThemeLevelResponseBody::Entity & entity) { DARABONBA_PTR_SET_VALUE(entity_, entity) };
    inline GetMetaTableThemeLevelResponseBody& setEntity(GetMetaTableThemeLevelResponseBody::Entity && entity) { DARABONBA_PTR_SET_RVALUE(entity_, entity) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline GetMetaTableThemeLevelResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline GetMetaTableThemeLevelResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetMetaTableThemeLevelResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetMetaTableThemeLevelResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetMetaTableThemeLevelResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The returned data.
    shared_ptr<GetMetaTableThemeLevelResponseBody::Entity> entity_ {};
    // The error code.
    shared_ptr<string> errorCode_ {};
    // The error message.
    shared_ptr<string> errorMessage_ {};
    // The HTTP status code.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The request ID. You can troubleshoot issues based on the ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
