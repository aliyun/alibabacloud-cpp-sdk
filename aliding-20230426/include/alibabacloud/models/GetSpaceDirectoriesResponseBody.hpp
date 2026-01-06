// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSPACEDIRECTORIESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSPACEDIRECTORIESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GetSpaceDirectoriesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSpaceDirectoriesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(children, children_);
      DARABONBA_PTR_TO_JSON(hasMore, hasMore_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetSpaceDirectoriesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(children, children_);
      DARABONBA_PTR_FROM_JSON(hasMore, hasMore_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    GetSpaceDirectoriesResponseBody() = default ;
    GetSpaceDirectoriesResponseBody(const GetSpaceDirectoriesResponseBody &) = default ;
    GetSpaceDirectoriesResponseBody(GetSpaceDirectoriesResponseBody &&) = default ;
    GetSpaceDirectoriesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSpaceDirectoriesResponseBody() = default ;
    GetSpaceDirectoriesResponseBody& operator=(const GetSpaceDirectoriesResponseBody &) = default ;
    GetSpaceDirectoriesResponseBody& operator=(GetSpaceDirectoriesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Children : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Children& obj) { 
        DARABONBA_PTR_TO_JSON(ContentType, contentType_);
        DARABONBA_PTR_TO_JSON(CreatedTime, createdTime_);
        DARABONBA_PTR_TO_JSON(Creator, creator_);
        DARABONBA_PTR_TO_JSON(DentryId, dentryId_);
        DARABONBA_PTR_TO_JSON(DentryType, dentryType_);
        DARABONBA_PTR_TO_JSON(DentryUuid, dentryUuid_);
        DARABONBA_PTR_TO_JSON(DocKey, docKey_);
        DARABONBA_PTR_TO_JSON(Extension, extension_);
        DARABONBA_PTR_TO_JSON(HasChildren, hasChildren_);
        DARABONBA_PTR_TO_JSON(LinkSourceInfo, linkSourceInfo_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Path, path_);
        DARABONBA_PTR_TO_JSON(Space, space_);
        DARABONBA_PTR_TO_JSON(SpaceId, spaceId_);
        DARABONBA_PTR_TO_JSON(StatisticalInfo, statisticalInfo_);
        DARABONBA_PTR_TO_JSON(UpdatedTime, updatedTime_);
        DARABONBA_PTR_TO_JSON(Updater, updater_);
        DARABONBA_PTR_TO_JSON(Url, url_);
        DARABONBA_PTR_TO_JSON(VisitorInfo, visitorInfo_);
      };
      friend void from_json(const Darabonba::Json& j, Children& obj) { 
        DARABONBA_PTR_FROM_JSON(ContentType, contentType_);
        DARABONBA_PTR_FROM_JSON(CreatedTime, createdTime_);
        DARABONBA_PTR_FROM_JSON(Creator, creator_);
        DARABONBA_PTR_FROM_JSON(DentryId, dentryId_);
        DARABONBA_PTR_FROM_JSON(DentryType, dentryType_);
        DARABONBA_PTR_FROM_JSON(DentryUuid, dentryUuid_);
        DARABONBA_PTR_FROM_JSON(DocKey, docKey_);
        DARABONBA_PTR_FROM_JSON(Extension, extension_);
        DARABONBA_PTR_FROM_JSON(HasChildren, hasChildren_);
        DARABONBA_PTR_FROM_JSON(LinkSourceInfo, linkSourceInfo_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Path, path_);
        DARABONBA_PTR_FROM_JSON(Space, space_);
        DARABONBA_PTR_FROM_JSON(SpaceId, spaceId_);
        DARABONBA_PTR_FROM_JSON(StatisticalInfo, statisticalInfo_);
        DARABONBA_PTR_FROM_JSON(UpdatedTime, updatedTime_);
        DARABONBA_PTR_FROM_JSON(Updater, updater_);
        DARABONBA_PTR_FROM_JSON(Url, url_);
        DARABONBA_PTR_FROM_JSON(VisitorInfo, visitorInfo_);
      };
      Children() = default ;
      Children(const Children &) = default ;
      Children(Children &&) = default ;
      Children(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Children() = default ;
      Children& operator=(const Children &) = default ;
      Children& operator=(Children &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class VisitorInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const VisitorInfo& obj) { 
          DARABONBA_PTR_TO_JSON(DentryActions, dentryActions_);
          DARABONBA_PTR_TO_JSON(RoleCode, roleCode_);
          DARABONBA_PTR_TO_JSON(SpaceActions, spaceActions_);
        };
        friend void from_json(const Darabonba::Json& j, VisitorInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(DentryActions, dentryActions_);
          DARABONBA_PTR_FROM_JSON(RoleCode, roleCode_);
          DARABONBA_PTR_FROM_JSON(SpaceActions, spaceActions_);
        };
        VisitorInfo() = default ;
        VisitorInfo(const VisitorInfo &) = default ;
        VisitorInfo(VisitorInfo &&) = default ;
        VisitorInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~VisitorInfo() = default ;
        VisitorInfo& operator=(const VisitorInfo &) = default ;
        VisitorInfo& operator=(VisitorInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->dentryActions_ == nullptr
        && this->roleCode_ == nullptr && this->spaceActions_ == nullptr; };
        // dentryActions Field Functions 
        bool hasDentryActions() const { return this->dentryActions_ != nullptr;};
        void deleteDentryActions() { this->dentryActions_ = nullptr;};
        inline const vector<string> & getDentryActions() const { DARABONBA_PTR_GET_CONST(dentryActions_, vector<string>) };
        inline vector<string> getDentryActions() { DARABONBA_PTR_GET(dentryActions_, vector<string>) };
        inline VisitorInfo& setDentryActions(const vector<string> & dentryActions) { DARABONBA_PTR_SET_VALUE(dentryActions_, dentryActions) };
        inline VisitorInfo& setDentryActions(vector<string> && dentryActions) { DARABONBA_PTR_SET_RVALUE(dentryActions_, dentryActions) };


        // roleCode Field Functions 
        bool hasRoleCode() const { return this->roleCode_ != nullptr;};
        void deleteRoleCode() { this->roleCode_ = nullptr;};
        inline string getRoleCode() const { DARABONBA_PTR_GET_DEFAULT(roleCode_, "") };
        inline VisitorInfo& setRoleCode(string roleCode) { DARABONBA_PTR_SET_VALUE(roleCode_, roleCode) };


        // spaceActions Field Functions 
        bool hasSpaceActions() const { return this->spaceActions_ != nullptr;};
        void deleteSpaceActions() { this->spaceActions_ = nullptr;};
        inline const vector<string> & getSpaceActions() const { DARABONBA_PTR_GET_CONST(spaceActions_, vector<string>) };
        inline vector<string> getSpaceActions() { DARABONBA_PTR_GET(spaceActions_, vector<string>) };
        inline VisitorInfo& setSpaceActions(const vector<string> & spaceActions) { DARABONBA_PTR_SET_VALUE(spaceActions_, spaceActions) };
        inline VisitorInfo& setSpaceActions(vector<string> && spaceActions) { DARABONBA_PTR_SET_RVALUE(spaceActions_, spaceActions) };


      protected:
        shared_ptr<vector<string>> dentryActions_ {};
        shared_ptr<string> roleCode_ {};
        shared_ptr<vector<string>> spaceActions_ {};
      };

      class Updater : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Updater& obj) { 
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(UserId, userId_);
        };
        friend void from_json(const Darabonba::Json& j, Updater& obj) { 
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(UserId, userId_);
        };
        Updater() = default ;
        Updater(const Updater &) = default ;
        Updater(Updater &&) = default ;
        Updater(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Updater() = default ;
        Updater& operator=(const Updater &) = default ;
        Updater& operator=(Updater &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->name_ == nullptr
        && this->userId_ == nullptr; };
        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Updater& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // userId Field Functions 
        bool hasUserId() const { return this->userId_ != nullptr;};
        void deleteUserId() { this->userId_ = nullptr;};
        inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
        inline Updater& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


      protected:
        shared_ptr<string> name_ {};
        shared_ptr<string> userId_ {};
      };

      class StatisticalInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const StatisticalInfo& obj) { 
          DARABONBA_PTR_TO_JSON(WordCount, wordCount_);
        };
        friend void from_json(const Darabonba::Json& j, StatisticalInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(WordCount, wordCount_);
        };
        StatisticalInfo() = default ;
        StatisticalInfo(const StatisticalInfo &) = default ;
        StatisticalInfo(StatisticalInfo &&) = default ;
        StatisticalInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~StatisticalInfo() = default ;
        StatisticalInfo& operator=(const StatisticalInfo &) = default ;
        StatisticalInfo& operator=(StatisticalInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->wordCount_ == nullptr; };
        // wordCount Field Functions 
        bool hasWordCount() const { return this->wordCount_ != nullptr;};
        void deleteWordCount() { this->wordCount_ = nullptr;};
        inline int64_t getWordCount() const { DARABONBA_PTR_GET_DEFAULT(wordCount_, 0L) };
        inline StatisticalInfo& setWordCount(int64_t wordCount) { DARABONBA_PTR_SET_VALUE(wordCount_, wordCount) };


      protected:
        // WordCount
        shared_ptr<int64_t> wordCount_ {};
      };

      class Space : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Space& obj) { 
          DARABONBA_PTR_TO_JSON(Cover, cover_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(HdIconVO, hdIconVO_);
          DARABONBA_PTR_TO_JSON(IconVO, iconVO_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Owner, owner_);
          DARABONBA_PTR_TO_JSON(RecentList, recentList_);
          DARABONBA_PTR_TO_JSON(Type, type_);
          DARABONBA_PTR_TO_JSON(Url, url_);
          DARABONBA_PTR_TO_JSON(VisitorInfo, visitorInfo_);
        };
        friend void from_json(const Darabonba::Json& j, Space& obj) { 
          DARABONBA_PTR_FROM_JSON(Cover, cover_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(HdIconVO, hdIconVO_);
          DARABONBA_PTR_FROM_JSON(IconVO, iconVO_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Owner, owner_);
          DARABONBA_PTR_FROM_JSON(RecentList, recentList_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
          DARABONBA_PTR_FROM_JSON(Url, url_);
          DARABONBA_PTR_FROM_JSON(VisitorInfo, visitorInfo_);
        };
        Space() = default ;
        Space(const Space &) = default ;
        Space(Space &&) = default ;
        Space(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Space() = default ;
        Space& operator=(const Space &) = default ;
        Space& operator=(Space &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class VisitorInfo : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const VisitorInfo& obj) { 
            DARABONBA_PTR_TO_JSON(DentryActions, dentryActions_);
            DARABONBA_PTR_TO_JSON(RoleCode, roleCode_);
            DARABONBA_PTR_TO_JSON(SpaceActions, spaceActions_);
          };
          friend void from_json(const Darabonba::Json& j, VisitorInfo& obj) { 
            DARABONBA_PTR_FROM_JSON(DentryActions, dentryActions_);
            DARABONBA_PTR_FROM_JSON(RoleCode, roleCode_);
            DARABONBA_PTR_FROM_JSON(SpaceActions, spaceActions_);
          };
          VisitorInfo() = default ;
          VisitorInfo(const VisitorInfo &) = default ;
          VisitorInfo(VisitorInfo &&) = default ;
          VisitorInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~VisitorInfo() = default ;
          VisitorInfo& operator=(const VisitorInfo &) = default ;
          VisitorInfo& operator=(VisitorInfo &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->dentryActions_ == nullptr
        && this->roleCode_ == nullptr && this->spaceActions_ == nullptr; };
          // dentryActions Field Functions 
          bool hasDentryActions() const { return this->dentryActions_ != nullptr;};
          void deleteDentryActions() { this->dentryActions_ = nullptr;};
          inline const vector<string> & getDentryActions() const { DARABONBA_PTR_GET_CONST(dentryActions_, vector<string>) };
          inline vector<string> getDentryActions() { DARABONBA_PTR_GET(dentryActions_, vector<string>) };
          inline VisitorInfo& setDentryActions(const vector<string> & dentryActions) { DARABONBA_PTR_SET_VALUE(dentryActions_, dentryActions) };
          inline VisitorInfo& setDentryActions(vector<string> && dentryActions) { DARABONBA_PTR_SET_RVALUE(dentryActions_, dentryActions) };


          // roleCode Field Functions 
          bool hasRoleCode() const { return this->roleCode_ != nullptr;};
          void deleteRoleCode() { this->roleCode_ = nullptr;};
          inline string getRoleCode() const { DARABONBA_PTR_GET_DEFAULT(roleCode_, "") };
          inline VisitorInfo& setRoleCode(string roleCode) { DARABONBA_PTR_SET_VALUE(roleCode_, roleCode) };


          // spaceActions Field Functions 
          bool hasSpaceActions() const { return this->spaceActions_ != nullptr;};
          void deleteSpaceActions() { this->spaceActions_ = nullptr;};
          inline const vector<string> & getSpaceActions() const { DARABONBA_PTR_GET_CONST(spaceActions_, vector<string>) };
          inline vector<string> getSpaceActions() { DARABONBA_PTR_GET(spaceActions_, vector<string>) };
          inline VisitorInfo& setSpaceActions(const vector<string> & spaceActions) { DARABONBA_PTR_SET_VALUE(spaceActions_, spaceActions) };
          inline VisitorInfo& setSpaceActions(vector<string> && spaceActions) { DARABONBA_PTR_SET_RVALUE(spaceActions_, spaceActions) };


        protected:
          shared_ptr<vector<string>> dentryActions_ {};
          shared_ptr<string> roleCode_ {};
          shared_ptr<vector<string>> spaceActions_ {};
        };

        class Owner : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Owner& obj) { 
            DARABONBA_PTR_TO_JSON(Name, name_);
            DARABONBA_PTR_TO_JSON(UserId, userId_);
          };
          friend void from_json(const Darabonba::Json& j, Owner& obj) { 
            DARABONBA_PTR_FROM_JSON(Name, name_);
            DARABONBA_PTR_FROM_JSON(UserId, userId_);
          };
          Owner() = default ;
          Owner(const Owner &) = default ;
          Owner(Owner &&) = default ;
          Owner(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Owner() = default ;
          Owner& operator=(const Owner &) = default ;
          Owner& operator=(Owner &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->name_ == nullptr
        && this->userId_ == nullptr; };
          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline Owner& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // userId Field Functions 
          bool hasUserId() const { return this->userId_ != nullptr;};
          void deleteUserId() { this->userId_ = nullptr;};
          inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
          inline Owner& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


        protected:
          shared_ptr<string> name_ {};
          shared_ptr<string> userId_ {};
        };

        class IconVO : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const IconVO& obj) { 
            DARABONBA_PTR_TO_JSON(Icon, icon_);
            DARABONBA_PTR_TO_JSON(Type, type_);
          };
          friend void from_json(const Darabonba::Json& j, IconVO& obj) { 
            DARABONBA_PTR_FROM_JSON(Icon, icon_);
            DARABONBA_PTR_FROM_JSON(Type, type_);
          };
          IconVO() = default ;
          IconVO(const IconVO &) = default ;
          IconVO(IconVO &&) = default ;
          IconVO(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~IconVO() = default ;
          IconVO& operator=(const IconVO &) = default ;
          IconVO& operator=(IconVO &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->icon_ == nullptr
        && this->type_ == nullptr; };
          // icon Field Functions 
          bool hasIcon() const { return this->icon_ != nullptr;};
          void deleteIcon() { this->icon_ = nullptr;};
          inline string getIcon() const { DARABONBA_PTR_GET_DEFAULT(icon_, "") };
          inline IconVO& setIcon(string icon) { DARABONBA_PTR_SET_VALUE(icon_, icon) };


          // type Field Functions 
          bool hasType() const { return this->type_ != nullptr;};
          void deleteType() { this->type_ = nullptr;};
          inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
          inline IconVO& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        protected:
          shared_ptr<string> icon_ {};
          shared_ptr<string> type_ {};
        };

        class HdIconVO : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const HdIconVO& obj) { 
            DARABONBA_PTR_TO_JSON(Icon, icon_);
            DARABONBA_PTR_TO_JSON(Type, type_);
          };
          friend void from_json(const Darabonba::Json& j, HdIconVO& obj) { 
            DARABONBA_PTR_FROM_JSON(Icon, icon_);
            DARABONBA_PTR_FROM_JSON(Type, type_);
          };
          HdIconVO() = default ;
          HdIconVO(const HdIconVO &) = default ;
          HdIconVO(HdIconVO &&) = default ;
          HdIconVO(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~HdIconVO() = default ;
          HdIconVO& operator=(const HdIconVO &) = default ;
          HdIconVO& operator=(HdIconVO &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->icon_ == nullptr
        && this->type_ == nullptr; };
          // icon Field Functions 
          bool hasIcon() const { return this->icon_ != nullptr;};
          void deleteIcon() { this->icon_ = nullptr;};
          inline string getIcon() const { DARABONBA_PTR_GET_DEFAULT(icon_, "") };
          inline HdIconVO& setIcon(string icon) { DARABONBA_PTR_SET_VALUE(icon_, icon) };


          // type Field Functions 
          bool hasType() const { return this->type_ != nullptr;};
          void deleteType() { this->type_ = nullptr;};
          inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
          inline HdIconVO& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        protected:
          shared_ptr<string> icon_ {};
          shared_ptr<string> type_ {};
        };

        virtual bool empty() const override { return this->cover_ == nullptr
        && this->description_ == nullptr && this->hdIconVO_ == nullptr && this->iconVO_ == nullptr && this->id_ == nullptr && this->name_ == nullptr
        && this->owner_ == nullptr && this->recentList_ == nullptr && this->type_ == nullptr && this->url_ == nullptr && this->visitorInfo_ == nullptr; };
        // cover Field Functions 
        bool hasCover() const { return this->cover_ != nullptr;};
        void deleteCover() { this->cover_ = nullptr;};
        inline string getCover() const { DARABONBA_PTR_GET_DEFAULT(cover_, "") };
        inline Space& setCover(string cover) { DARABONBA_PTR_SET_VALUE(cover_, cover) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline Space& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // hdIconVO Field Functions 
        bool hasHdIconVO() const { return this->hdIconVO_ != nullptr;};
        void deleteHdIconVO() { this->hdIconVO_ = nullptr;};
        inline const Space::HdIconVO & getHdIconVO() const { DARABONBA_PTR_GET_CONST(hdIconVO_, Space::HdIconVO) };
        inline Space::HdIconVO getHdIconVO() { DARABONBA_PTR_GET(hdIconVO_, Space::HdIconVO) };
        inline Space& setHdIconVO(const Space::HdIconVO & hdIconVO) { DARABONBA_PTR_SET_VALUE(hdIconVO_, hdIconVO) };
        inline Space& setHdIconVO(Space::HdIconVO && hdIconVO) { DARABONBA_PTR_SET_RVALUE(hdIconVO_, hdIconVO) };


        // iconVO Field Functions 
        bool hasIconVO() const { return this->iconVO_ != nullptr;};
        void deleteIconVO() { this->iconVO_ = nullptr;};
        inline const Space::IconVO & getIconVO() const { DARABONBA_PTR_GET_CONST(iconVO_, Space::IconVO) };
        inline Space::IconVO getIconVO() { DARABONBA_PTR_GET(iconVO_, Space::IconVO) };
        inline Space& setIconVO(const Space::IconVO & iconVO) { DARABONBA_PTR_SET_VALUE(iconVO_, iconVO) };
        inline Space& setIconVO(Space::IconVO && iconVO) { DARABONBA_PTR_SET_RVALUE(iconVO_, iconVO) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline Space& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Space& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // owner Field Functions 
        bool hasOwner() const { return this->owner_ != nullptr;};
        void deleteOwner() { this->owner_ = nullptr;};
        inline const Space::Owner & getOwner() const { DARABONBA_PTR_GET_CONST(owner_, Space::Owner) };
        inline Space::Owner getOwner() { DARABONBA_PTR_GET(owner_, Space::Owner) };
        inline Space& setOwner(const Space::Owner & owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };
        inline Space& setOwner(Space::Owner && owner) { DARABONBA_PTR_SET_RVALUE(owner_, owner) };


        // recentList Field Functions 
        bool hasRecentList() const { return this->recentList_ != nullptr;};
        void deleteRecentList() { this->recentList_ = nullptr;};
        inline const vector<Darabonba::Json> & getRecentList() const { DARABONBA_PTR_GET_CONST(recentList_, vector<Darabonba::Json>) };
        inline vector<Darabonba::Json> getRecentList() { DARABONBA_PTR_GET(recentList_, vector<Darabonba::Json>) };
        inline Space& setRecentList(const vector<Darabonba::Json> & recentList) { DARABONBA_PTR_SET_VALUE(recentList_, recentList) };
        inline Space& setRecentList(vector<Darabonba::Json> && recentList) { DARABONBA_PTR_SET_RVALUE(recentList_, recentList) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline int32_t getType() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
        inline Space& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        // url Field Functions 
        bool hasUrl() const { return this->url_ != nullptr;};
        void deleteUrl() { this->url_ = nullptr;};
        inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
        inline Space& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


        // visitorInfo Field Functions 
        bool hasVisitorInfo() const { return this->visitorInfo_ != nullptr;};
        void deleteVisitorInfo() { this->visitorInfo_ = nullptr;};
        inline const Space::VisitorInfo & getVisitorInfo() const { DARABONBA_PTR_GET_CONST(visitorInfo_, Space::VisitorInfo) };
        inline Space::VisitorInfo getVisitorInfo() { DARABONBA_PTR_GET(visitorInfo_, Space::VisitorInfo) };
        inline Space& setVisitorInfo(const Space::VisitorInfo & visitorInfo) { DARABONBA_PTR_SET_VALUE(visitorInfo_, visitorInfo) };
        inline Space& setVisitorInfo(Space::VisitorInfo && visitorInfo) { DARABONBA_PTR_SET_RVALUE(visitorInfo_, visitorInfo) };


      protected:
        shared_ptr<string> cover_ {};
        shared_ptr<string> description_ {};
        shared_ptr<Space::HdIconVO> hdIconVO_ {};
        shared_ptr<Space::IconVO> iconVO_ {};
        shared_ptr<string> id_ {};
        shared_ptr<string> name_ {};
        shared_ptr<Space::Owner> owner_ {};
        shared_ptr<vector<Darabonba::Json>> recentList_ {};
        shared_ptr<int32_t> type_ {};
        shared_ptr<string> url_ {};
        shared_ptr<Space::VisitorInfo> visitorInfo_ {};
      };

      class LinkSourceInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const LinkSourceInfo& obj) { 
          DARABONBA_PTR_TO_JSON(Extension, extension_);
          DARABONBA_PTR_TO_JSON(IconUrl, iconUrl_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(LinkType, linkType_);
          DARABONBA_PTR_TO_JSON(SpaceId, spaceId_);
        };
        friend void from_json(const Darabonba::Json& j, LinkSourceInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(Extension, extension_);
          DARABONBA_PTR_FROM_JSON(IconUrl, iconUrl_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(LinkType, linkType_);
          DARABONBA_PTR_FROM_JSON(SpaceId, spaceId_);
        };
        LinkSourceInfo() = default ;
        LinkSourceInfo(const LinkSourceInfo &) = default ;
        LinkSourceInfo(LinkSourceInfo &&) = default ;
        LinkSourceInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~LinkSourceInfo() = default ;
        LinkSourceInfo& operator=(const LinkSourceInfo &) = default ;
        LinkSourceInfo& operator=(LinkSourceInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class IconUrl : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const IconUrl& obj) { 
            DARABONBA_PTR_TO_JSON(Line, line_);
            DARABONBA_PTR_TO_JSON(Small, small_);
          };
          friend void from_json(const Darabonba::Json& j, IconUrl& obj) { 
            DARABONBA_PTR_FROM_JSON(Line, line_);
            DARABONBA_PTR_FROM_JSON(Small, small_);
          };
          IconUrl() = default ;
          IconUrl(const IconUrl &) = default ;
          IconUrl(IconUrl &&) = default ;
          IconUrl(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~IconUrl() = default ;
          IconUrl& operator=(const IconUrl &) = default ;
          IconUrl& operator=(IconUrl &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->line_ == nullptr
        && this->small_ == nullptr; };
          // line Field Functions 
          bool hasLine() const { return this->line_ != nullptr;};
          void deleteLine() { this->line_ = nullptr;};
          inline string getLine() const { DARABONBA_PTR_GET_DEFAULT(line_, "") };
          inline IconUrl& setLine(string line) { DARABONBA_PTR_SET_VALUE(line_, line) };


          // small Field Functions 
          bool hasSmall() const { return this->small_ != nullptr;};
          void deleteSmall() { this->small_ = nullptr;};
          inline string getSmall() const { DARABONBA_PTR_GET_DEFAULT(small_, "") };
          inline IconUrl& setSmall(string small) { DARABONBA_PTR_SET_VALUE(small_, small) };


        protected:
          shared_ptr<string> line_ {};
          shared_ptr<string> small_ {};
        };

        virtual bool empty() const override { return this->extension_ == nullptr
        && this->iconUrl_ == nullptr && this->id_ == nullptr && this->linkType_ == nullptr && this->spaceId_ == nullptr; };
        // extension Field Functions 
        bool hasExtension() const { return this->extension_ != nullptr;};
        void deleteExtension() { this->extension_ = nullptr;};
        inline string getExtension() const { DARABONBA_PTR_GET_DEFAULT(extension_, "") };
        inline LinkSourceInfo& setExtension(string extension) { DARABONBA_PTR_SET_VALUE(extension_, extension) };


        // iconUrl Field Functions 
        bool hasIconUrl() const { return this->iconUrl_ != nullptr;};
        void deleteIconUrl() { this->iconUrl_ = nullptr;};
        inline const LinkSourceInfo::IconUrl & getIconUrl() const { DARABONBA_PTR_GET_CONST(iconUrl_, LinkSourceInfo::IconUrl) };
        inline LinkSourceInfo::IconUrl getIconUrl() { DARABONBA_PTR_GET(iconUrl_, LinkSourceInfo::IconUrl) };
        inline LinkSourceInfo& setIconUrl(const LinkSourceInfo::IconUrl & iconUrl) { DARABONBA_PTR_SET_VALUE(iconUrl_, iconUrl) };
        inline LinkSourceInfo& setIconUrl(LinkSourceInfo::IconUrl && iconUrl) { DARABONBA_PTR_SET_RVALUE(iconUrl_, iconUrl) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline LinkSourceInfo& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // linkType Field Functions 
        bool hasLinkType() const { return this->linkType_ != nullptr;};
        void deleteLinkType() { this->linkType_ = nullptr;};
        inline int64_t getLinkType() const { DARABONBA_PTR_GET_DEFAULT(linkType_, 0L) };
        inline LinkSourceInfo& setLinkType(int64_t linkType) { DARABONBA_PTR_SET_VALUE(linkType_, linkType) };


        // spaceId Field Functions 
        bool hasSpaceId() const { return this->spaceId_ != nullptr;};
        void deleteSpaceId() { this->spaceId_ = nullptr;};
        inline string getSpaceId() const { DARABONBA_PTR_GET_DEFAULT(spaceId_, "") };
        inline LinkSourceInfo& setSpaceId(string spaceId) { DARABONBA_PTR_SET_VALUE(spaceId_, spaceId) };


      protected:
        shared_ptr<string> extension_ {};
        shared_ptr<LinkSourceInfo::IconUrl> iconUrl_ {};
        shared_ptr<string> id_ {};
        shared_ptr<int64_t> linkType_ {};
        shared_ptr<string> spaceId_ {};
      };

      class Creator : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Creator& obj) { 
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(UserId, userId_);
        };
        friend void from_json(const Darabonba::Json& j, Creator& obj) { 
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(UserId, userId_);
        };
        Creator() = default ;
        Creator(const Creator &) = default ;
        Creator(Creator &&) = default ;
        Creator(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Creator() = default ;
        Creator& operator=(const Creator &) = default ;
        Creator& operator=(Creator &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->name_ == nullptr
        && this->userId_ == nullptr; };
        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Creator& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // userId Field Functions 
        bool hasUserId() const { return this->userId_ != nullptr;};
        void deleteUserId() { this->userId_ = nullptr;};
        inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
        inline Creator& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


      protected:
        shared_ptr<string> name_ {};
        shared_ptr<string> userId_ {};
      };

      virtual bool empty() const override { return this->contentType_ == nullptr
        && this->createdTime_ == nullptr && this->creator_ == nullptr && this->dentryId_ == nullptr && this->dentryType_ == nullptr && this->dentryUuid_ == nullptr
        && this->docKey_ == nullptr && this->extension_ == nullptr && this->hasChildren_ == nullptr && this->linkSourceInfo_ == nullptr && this->name_ == nullptr
        && this->path_ == nullptr && this->space_ == nullptr && this->spaceId_ == nullptr && this->statisticalInfo_ == nullptr && this->updatedTime_ == nullptr
        && this->updater_ == nullptr && this->url_ == nullptr && this->visitorInfo_ == nullptr; };
      // contentType Field Functions 
      bool hasContentType() const { return this->contentType_ != nullptr;};
      void deleteContentType() { this->contentType_ = nullptr;};
      inline string getContentType() const { DARABONBA_PTR_GET_DEFAULT(contentType_, "") };
      inline Children& setContentType(string contentType) { DARABONBA_PTR_SET_VALUE(contentType_, contentType) };


      // createdTime Field Functions 
      bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
      void deleteCreatedTime() { this->createdTime_ = nullptr;};
      inline int64_t getCreatedTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, 0L) };
      inline Children& setCreatedTime(int64_t createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


      // creator Field Functions 
      bool hasCreator() const { return this->creator_ != nullptr;};
      void deleteCreator() { this->creator_ = nullptr;};
      inline const Children::Creator & getCreator() const { DARABONBA_PTR_GET_CONST(creator_, Children::Creator) };
      inline Children::Creator getCreator() { DARABONBA_PTR_GET(creator_, Children::Creator) };
      inline Children& setCreator(const Children::Creator & creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };
      inline Children& setCreator(Children::Creator && creator) { DARABONBA_PTR_SET_RVALUE(creator_, creator) };


      // dentryId Field Functions 
      bool hasDentryId() const { return this->dentryId_ != nullptr;};
      void deleteDentryId() { this->dentryId_ = nullptr;};
      inline string getDentryId() const { DARABONBA_PTR_GET_DEFAULT(dentryId_, "") };
      inline Children& setDentryId(string dentryId) { DARABONBA_PTR_SET_VALUE(dentryId_, dentryId) };


      // dentryType Field Functions 
      bool hasDentryType() const { return this->dentryType_ != nullptr;};
      void deleteDentryType() { this->dentryType_ = nullptr;};
      inline string getDentryType() const { DARABONBA_PTR_GET_DEFAULT(dentryType_, "") };
      inline Children& setDentryType(string dentryType) { DARABONBA_PTR_SET_VALUE(dentryType_, dentryType) };


      // dentryUuid Field Functions 
      bool hasDentryUuid() const { return this->dentryUuid_ != nullptr;};
      void deleteDentryUuid() { this->dentryUuid_ = nullptr;};
      inline string getDentryUuid() const { DARABONBA_PTR_GET_DEFAULT(dentryUuid_, "") };
      inline Children& setDentryUuid(string dentryUuid) { DARABONBA_PTR_SET_VALUE(dentryUuid_, dentryUuid) };


      // docKey Field Functions 
      bool hasDocKey() const { return this->docKey_ != nullptr;};
      void deleteDocKey() { this->docKey_ = nullptr;};
      inline string getDocKey() const { DARABONBA_PTR_GET_DEFAULT(docKey_, "") };
      inline Children& setDocKey(string docKey) { DARABONBA_PTR_SET_VALUE(docKey_, docKey) };


      // extension Field Functions 
      bool hasExtension() const { return this->extension_ != nullptr;};
      void deleteExtension() { this->extension_ = nullptr;};
      inline string getExtension() const { DARABONBA_PTR_GET_DEFAULT(extension_, "") };
      inline Children& setExtension(string extension) { DARABONBA_PTR_SET_VALUE(extension_, extension) };


      // hasChildren Field Functions 
      bool hasHasChildren() const { return this->hasChildren_ != nullptr;};
      void deleteHasChildren() { this->hasChildren_ = nullptr;};
      inline bool getHasChildren() const { DARABONBA_PTR_GET_DEFAULT(hasChildren_, false) };
      inline Children& setHasChildren(bool hasChildren) { DARABONBA_PTR_SET_VALUE(hasChildren_, hasChildren) };


      // linkSourceInfo Field Functions 
      bool hasLinkSourceInfo() const { return this->linkSourceInfo_ != nullptr;};
      void deleteLinkSourceInfo() { this->linkSourceInfo_ = nullptr;};
      inline const Children::LinkSourceInfo & getLinkSourceInfo() const { DARABONBA_PTR_GET_CONST(linkSourceInfo_, Children::LinkSourceInfo) };
      inline Children::LinkSourceInfo getLinkSourceInfo() { DARABONBA_PTR_GET(linkSourceInfo_, Children::LinkSourceInfo) };
      inline Children& setLinkSourceInfo(const Children::LinkSourceInfo & linkSourceInfo) { DARABONBA_PTR_SET_VALUE(linkSourceInfo_, linkSourceInfo) };
      inline Children& setLinkSourceInfo(Children::LinkSourceInfo && linkSourceInfo) { DARABONBA_PTR_SET_RVALUE(linkSourceInfo_, linkSourceInfo) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Children& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // path Field Functions 
      bool hasPath() const { return this->path_ != nullptr;};
      void deletePath() { this->path_ = nullptr;};
      inline string getPath() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
      inline Children& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


      // space Field Functions 
      bool hasSpace() const { return this->space_ != nullptr;};
      void deleteSpace() { this->space_ = nullptr;};
      inline const Children::Space & getSpace() const { DARABONBA_PTR_GET_CONST(space_, Children::Space) };
      inline Children::Space getSpace() { DARABONBA_PTR_GET(space_, Children::Space) };
      inline Children& setSpace(const Children::Space & space) { DARABONBA_PTR_SET_VALUE(space_, space) };
      inline Children& setSpace(Children::Space && space) { DARABONBA_PTR_SET_RVALUE(space_, space) };


      // spaceId Field Functions 
      bool hasSpaceId() const { return this->spaceId_ != nullptr;};
      void deleteSpaceId() { this->spaceId_ = nullptr;};
      inline string getSpaceId() const { DARABONBA_PTR_GET_DEFAULT(spaceId_, "") };
      inline Children& setSpaceId(string spaceId) { DARABONBA_PTR_SET_VALUE(spaceId_, spaceId) };


      // statisticalInfo Field Functions 
      bool hasStatisticalInfo() const { return this->statisticalInfo_ != nullptr;};
      void deleteStatisticalInfo() { this->statisticalInfo_ = nullptr;};
      inline const Children::StatisticalInfo & getStatisticalInfo() const { DARABONBA_PTR_GET_CONST(statisticalInfo_, Children::StatisticalInfo) };
      inline Children::StatisticalInfo getStatisticalInfo() { DARABONBA_PTR_GET(statisticalInfo_, Children::StatisticalInfo) };
      inline Children& setStatisticalInfo(const Children::StatisticalInfo & statisticalInfo) { DARABONBA_PTR_SET_VALUE(statisticalInfo_, statisticalInfo) };
      inline Children& setStatisticalInfo(Children::StatisticalInfo && statisticalInfo) { DARABONBA_PTR_SET_RVALUE(statisticalInfo_, statisticalInfo) };


      // updatedTime Field Functions 
      bool hasUpdatedTime() const { return this->updatedTime_ != nullptr;};
      void deleteUpdatedTime() { this->updatedTime_ = nullptr;};
      inline int64_t getUpdatedTime() const { DARABONBA_PTR_GET_DEFAULT(updatedTime_, 0L) };
      inline Children& setUpdatedTime(int64_t updatedTime) { DARABONBA_PTR_SET_VALUE(updatedTime_, updatedTime) };


      // updater Field Functions 
      bool hasUpdater() const { return this->updater_ != nullptr;};
      void deleteUpdater() { this->updater_ = nullptr;};
      inline const Children::Updater & getUpdater() const { DARABONBA_PTR_GET_CONST(updater_, Children::Updater) };
      inline Children::Updater getUpdater() { DARABONBA_PTR_GET(updater_, Children::Updater) };
      inline Children& setUpdater(const Children::Updater & updater) { DARABONBA_PTR_SET_VALUE(updater_, updater) };
      inline Children& setUpdater(Children::Updater && updater) { DARABONBA_PTR_SET_RVALUE(updater_, updater) };


      // url Field Functions 
      bool hasUrl() const { return this->url_ != nullptr;};
      void deleteUrl() { this->url_ = nullptr;};
      inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
      inline Children& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


      // visitorInfo Field Functions 
      bool hasVisitorInfo() const { return this->visitorInfo_ != nullptr;};
      void deleteVisitorInfo() { this->visitorInfo_ = nullptr;};
      inline const Children::VisitorInfo & getVisitorInfo() const { DARABONBA_PTR_GET_CONST(visitorInfo_, Children::VisitorInfo) };
      inline Children::VisitorInfo getVisitorInfo() { DARABONBA_PTR_GET(visitorInfo_, Children::VisitorInfo) };
      inline Children& setVisitorInfo(const Children::VisitorInfo & visitorInfo) { DARABONBA_PTR_SET_VALUE(visitorInfo_, visitorInfo) };
      inline Children& setVisitorInfo(Children::VisitorInfo && visitorInfo) { DARABONBA_PTR_SET_RVALUE(visitorInfo_, visitorInfo) };


    protected:
      shared_ptr<string> contentType_ {};
      shared_ptr<int64_t> createdTime_ {};
      shared_ptr<Children::Creator> creator_ {};
      shared_ptr<string> dentryId_ {};
      shared_ptr<string> dentryType_ {};
      shared_ptr<string> dentryUuid_ {};
      shared_ptr<string> docKey_ {};
      shared_ptr<string> extension_ {};
      shared_ptr<bool> hasChildren_ {};
      shared_ptr<Children::LinkSourceInfo> linkSourceInfo_ {};
      shared_ptr<string> name_ {};
      shared_ptr<string> path_ {};
      shared_ptr<Children::Space> space_ {};
      shared_ptr<string> spaceId_ {};
      shared_ptr<Children::StatisticalInfo> statisticalInfo_ {};
      shared_ptr<int64_t> updatedTime_ {};
      shared_ptr<Children::Updater> updater_ {};
      shared_ptr<string> url_ {};
      shared_ptr<Children::VisitorInfo> visitorInfo_ {};
    };

    virtual bool empty() const override { return this->children_ == nullptr
        && this->hasMore_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr; };
    // children Field Functions 
    bool hasChildren() const { return this->children_ != nullptr;};
    void deleteChildren() { this->children_ = nullptr;};
    inline const vector<GetSpaceDirectoriesResponseBody::Children> & getChildren() const { DARABONBA_PTR_GET_CONST(children_, vector<GetSpaceDirectoriesResponseBody::Children>) };
    inline vector<GetSpaceDirectoriesResponseBody::Children> getChildren() { DARABONBA_PTR_GET(children_, vector<GetSpaceDirectoriesResponseBody::Children>) };
    inline GetSpaceDirectoriesResponseBody& setChildren(const vector<GetSpaceDirectoriesResponseBody::Children> & children) { DARABONBA_PTR_SET_VALUE(children_, children) };
    inline GetSpaceDirectoriesResponseBody& setChildren(vector<GetSpaceDirectoriesResponseBody::Children> && children) { DARABONBA_PTR_SET_RVALUE(children_, children) };


    // hasMore Field Functions 
    bool hasHasMore() const { return this->hasMore_ != nullptr;};
    void deleteHasMore() { this->hasMore_ = nullptr;};
    inline bool getHasMore() const { DARABONBA_PTR_GET_DEFAULT(hasMore_, false) };
    inline GetSpaceDirectoriesResponseBody& setHasMore(bool hasMore) { DARABONBA_PTR_SET_VALUE(hasMore_, hasMore) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline GetSpaceDirectoriesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetSpaceDirectoriesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<GetSpaceDirectoriesResponseBody::Children>> children_ {};
    shared_ptr<bool> hasMore_ {};
    shared_ptr<string> nextToken_ {};
    // requestId
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
