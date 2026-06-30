// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPOLARCLAWSKILLDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPOLARCLAWSKILLDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribePolarClawSkillDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePolarClawSkillDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(LatestVersion, latestVersion_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Owner, owner_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Skill, skill_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePolarClawSkillDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(LatestVersion, latestVersion_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Owner, owner_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Skill, skill_);
    };
    DescribePolarClawSkillDetailResponseBody() = default ;
    DescribePolarClawSkillDetailResponseBody(const DescribePolarClawSkillDetailResponseBody &) = default ;
    DescribePolarClawSkillDetailResponseBody(DescribePolarClawSkillDetailResponseBody &&) = default ;
    DescribePolarClawSkillDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePolarClawSkillDetailResponseBody() = default ;
    DescribePolarClawSkillDetailResponseBody& operator=(const DescribePolarClawSkillDetailResponseBody &) = default ;
    DescribePolarClawSkillDetailResponseBody& operator=(DescribePolarClawSkillDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Skill : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Skill& obj) { 
        DARABONBA_PTR_TO_JSON(CreatedAt, createdAt_);
        DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
        DARABONBA_PTR_TO_JSON(Slug, slug_);
        DARABONBA_PTR_TO_JSON(Stats, stats_);
        DARABONBA_PTR_TO_JSON(Summary, summary_);
        DARABONBA_ANY_TO_JSON(Tags, tags_);
        DARABONBA_PTR_TO_JSON(UpdatedAt, updatedAt_);
      };
      friend void from_json(const Darabonba::Json& j, Skill& obj) { 
        DARABONBA_PTR_FROM_JSON(CreatedAt, createdAt_);
        DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
        DARABONBA_PTR_FROM_JSON(Slug, slug_);
        DARABONBA_PTR_FROM_JSON(Stats, stats_);
        DARABONBA_PTR_FROM_JSON(Summary, summary_);
        DARABONBA_ANY_FROM_JSON(Tags, tags_);
        DARABONBA_PTR_FROM_JSON(UpdatedAt, updatedAt_);
      };
      Skill() = default ;
      Skill(const Skill &) = default ;
      Skill(Skill &&) = default ;
      Skill(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Skill() = default ;
      Skill& operator=(const Skill &) = default ;
      Skill& operator=(Skill &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Stats : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Stats& obj) { 
          DARABONBA_PTR_TO_JSON(Comments, comments_);
          DARABONBA_PTR_TO_JSON(Downloads, downloads_);
          DARABONBA_PTR_TO_JSON(InstallsAllTime, installsAllTime_);
          DARABONBA_PTR_TO_JSON(InstallsCurrent, installsCurrent_);
          DARABONBA_PTR_TO_JSON(Stars, stars_);
          DARABONBA_PTR_TO_JSON(Versions, versions_);
        };
        friend void from_json(const Darabonba::Json& j, Stats& obj) { 
          DARABONBA_PTR_FROM_JSON(Comments, comments_);
          DARABONBA_PTR_FROM_JSON(Downloads, downloads_);
          DARABONBA_PTR_FROM_JSON(InstallsAllTime, installsAllTime_);
          DARABONBA_PTR_FROM_JSON(InstallsCurrent, installsCurrent_);
          DARABONBA_PTR_FROM_JSON(Stars, stars_);
          DARABONBA_PTR_FROM_JSON(Versions, versions_);
        };
        Stats() = default ;
        Stats(const Stats &) = default ;
        Stats(Stats &&) = default ;
        Stats(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Stats() = default ;
        Stats& operator=(const Stats &) = default ;
        Stats& operator=(Stats &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->comments_ == nullptr
        && this->downloads_ == nullptr && this->installsAllTime_ == nullptr && this->installsCurrent_ == nullptr && this->stars_ == nullptr && this->versions_ == nullptr; };
        // comments Field Functions 
        bool hasComments() const { return this->comments_ != nullptr;};
        void deleteComments() { this->comments_ = nullptr;};
        inline int64_t getComments() const { DARABONBA_PTR_GET_DEFAULT(comments_, 0L) };
        inline Stats& setComments(int64_t comments) { DARABONBA_PTR_SET_VALUE(comments_, comments) };


        // downloads Field Functions 
        bool hasDownloads() const { return this->downloads_ != nullptr;};
        void deleteDownloads() { this->downloads_ = nullptr;};
        inline int64_t getDownloads() const { DARABONBA_PTR_GET_DEFAULT(downloads_, 0L) };
        inline Stats& setDownloads(int64_t downloads) { DARABONBA_PTR_SET_VALUE(downloads_, downloads) };


        // installsAllTime Field Functions 
        bool hasInstallsAllTime() const { return this->installsAllTime_ != nullptr;};
        void deleteInstallsAllTime() { this->installsAllTime_ = nullptr;};
        inline int64_t getInstallsAllTime() const { DARABONBA_PTR_GET_DEFAULT(installsAllTime_, 0L) };
        inline Stats& setInstallsAllTime(int64_t installsAllTime) { DARABONBA_PTR_SET_VALUE(installsAllTime_, installsAllTime) };


        // installsCurrent Field Functions 
        bool hasInstallsCurrent() const { return this->installsCurrent_ != nullptr;};
        void deleteInstallsCurrent() { this->installsCurrent_ = nullptr;};
        inline int64_t getInstallsCurrent() const { DARABONBA_PTR_GET_DEFAULT(installsCurrent_, 0L) };
        inline Stats& setInstallsCurrent(int64_t installsCurrent) { DARABONBA_PTR_SET_VALUE(installsCurrent_, installsCurrent) };


        // stars Field Functions 
        bool hasStars() const { return this->stars_ != nullptr;};
        void deleteStars() { this->stars_ = nullptr;};
        inline int64_t getStars() const { DARABONBA_PTR_GET_DEFAULT(stars_, 0L) };
        inline Stats& setStars(int64_t stars) { DARABONBA_PTR_SET_VALUE(stars_, stars) };


        // versions Field Functions 
        bool hasVersions() const { return this->versions_ != nullptr;};
        void deleteVersions() { this->versions_ = nullptr;};
        inline int64_t getVersions() const { DARABONBA_PTR_GET_DEFAULT(versions_, 0L) };
        inline Stats& setVersions(int64_t versions) { DARABONBA_PTR_SET_VALUE(versions_, versions) };


      protected:
        // The number of comments.
        shared_ptr<int64_t> comments_ {};
        // The number of downloads.
        shared_ptr<int64_t> downloads_ {};
        // The total number of installations of all time.
        shared_ptr<int64_t> installsAllTime_ {};
        // The current number of installations.
        shared_ptr<int64_t> installsCurrent_ {};
        // The number of stars.
        shared_ptr<int64_t> stars_ {};
        // The number of versions.
        shared_ptr<int64_t> versions_ {};
      };

      virtual bool empty() const override { return this->createdAt_ == nullptr
        && this->displayName_ == nullptr && this->slug_ == nullptr && this->stats_ == nullptr && this->summary_ == nullptr && this->tags_ == nullptr
        && this->updatedAt_ == nullptr; };
      // createdAt Field Functions 
      bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
      void deleteCreatedAt() { this->createdAt_ = nullptr;};
      inline int64_t getCreatedAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, 0L) };
      inline Skill& setCreatedAt(int64_t createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


      // displayName Field Functions 
      bool hasDisplayName() const { return this->displayName_ != nullptr;};
      void deleteDisplayName() { this->displayName_ = nullptr;};
      inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
      inline Skill& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


      // slug Field Functions 
      bool hasSlug() const { return this->slug_ != nullptr;};
      void deleteSlug() { this->slug_ = nullptr;};
      inline string getSlug() const { DARABONBA_PTR_GET_DEFAULT(slug_, "") };
      inline Skill& setSlug(string slug) { DARABONBA_PTR_SET_VALUE(slug_, slug) };


      // stats Field Functions 
      bool hasStats() const { return this->stats_ != nullptr;};
      void deleteStats() { this->stats_ = nullptr;};
      inline const Skill::Stats & getStats() const { DARABONBA_PTR_GET_CONST(stats_, Skill::Stats) };
      inline Skill::Stats getStats() { DARABONBA_PTR_GET(stats_, Skill::Stats) };
      inline Skill& setStats(const Skill::Stats & stats) { DARABONBA_PTR_SET_VALUE(stats_, stats) };
      inline Skill& setStats(Skill::Stats && stats) { DARABONBA_PTR_SET_RVALUE(stats_, stats) };


      // summary Field Functions 
      bool hasSummary() const { return this->summary_ != nullptr;};
      void deleteSummary() { this->summary_ = nullptr;};
      inline string getSummary() const { DARABONBA_PTR_GET_DEFAULT(summary_, "") };
      inline Skill& setSummary(string summary) { DARABONBA_PTR_SET_VALUE(summary_, summary) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline       const Darabonba::Json & getTags() const { DARABONBA_GET(tags_) };
      Darabonba::Json & getTags() { DARABONBA_GET(tags_) };
      inline Skill& setTags(const Darabonba::Json & tags) { DARABONBA_SET_VALUE(tags_, tags) };
      inline Skill& setTags(Darabonba::Json && tags) { DARABONBA_SET_RVALUE(tags_, tags) };


      // updatedAt Field Functions 
      bool hasUpdatedAt() const { return this->updatedAt_ != nullptr;};
      void deleteUpdatedAt() { this->updatedAt_ = nullptr;};
      inline int64_t getUpdatedAt() const { DARABONBA_PTR_GET_DEFAULT(updatedAt_, 0L) };
      inline Skill& setUpdatedAt(int64_t updatedAt) { DARABONBA_PTR_SET_VALUE(updatedAt_, updatedAt) };


    protected:
      // The first publish timestamp in Unix milliseconds.
      shared_ptr<int64_t> createdAt_ {};
      // The display name.
      shared_ptr<string> displayName_ {};
      // The Skill identifier.
      shared_ptr<string> slug_ {};
      // The statistics information.
      shared_ptr<Skill::Stats> stats_ {};
      // The brief description.
      shared_ptr<string> summary_ {};
      // The tag key-value pairs.
      Darabonba::Json tags_ {};
      // The last update timestamp in Unix milliseconds.
      shared_ptr<int64_t> updatedAt_ {};
    };

    class Owner : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Owner& obj) { 
        DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
        DARABONBA_PTR_TO_JSON(Handle, handle_);
        DARABONBA_PTR_TO_JSON(Image, image_);
        DARABONBA_PTR_TO_JSON(UserId, userId_);
      };
      friend void from_json(const Darabonba::Json& j, Owner& obj) { 
        DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
        DARABONBA_PTR_FROM_JSON(Handle, handle_);
        DARABONBA_PTR_FROM_JSON(Image, image_);
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
      virtual bool empty() const override { return this->displayName_ == nullptr
        && this->handle_ == nullptr && this->image_ == nullptr && this->userId_ == nullptr; };
      // displayName Field Functions 
      bool hasDisplayName() const { return this->displayName_ != nullptr;};
      void deleteDisplayName() { this->displayName_ = nullptr;};
      inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
      inline Owner& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


      // handle Field Functions 
      bool hasHandle() const { return this->handle_ != nullptr;};
      void deleteHandle() { this->handle_ = nullptr;};
      inline string getHandle() const { DARABONBA_PTR_GET_DEFAULT(handle_, "") };
      inline Owner& setHandle(string handle) { DARABONBA_PTR_SET_VALUE(handle_, handle) };


      // image Field Functions 
      bool hasImage() const { return this->image_ != nullptr;};
      void deleteImage() { this->image_ = nullptr;};
      inline string getImage() const { DARABONBA_PTR_GET_DEFAULT(image_, "") };
      inline Owner& setImage(string image) { DARABONBA_PTR_SET_VALUE(image_, image) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
      inline Owner& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    protected:
      // The display name of the author.
      shared_ptr<string> displayName_ {};
      // The account identifier of the author.
      shared_ptr<string> handle_ {};
      // The profile picture URL.
      shared_ptr<string> image_ {};
      // The user ID of the author.
      shared_ptr<string> userId_ {};
    };

    class LatestVersion : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const LatestVersion& obj) { 
        DARABONBA_PTR_TO_JSON(Changelog, changelog_);
        DARABONBA_PTR_TO_JSON(CreatedAt, createdAt_);
        DARABONBA_PTR_TO_JSON(Version, version_);
      };
      friend void from_json(const Darabonba::Json& j, LatestVersion& obj) { 
        DARABONBA_PTR_FROM_JSON(Changelog, changelog_);
        DARABONBA_PTR_FROM_JSON(CreatedAt, createdAt_);
        DARABONBA_PTR_FROM_JSON(Version, version_);
      };
      LatestVersion() = default ;
      LatestVersion(const LatestVersion &) = default ;
      LatestVersion(LatestVersion &&) = default ;
      LatestVersion(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~LatestVersion() = default ;
      LatestVersion& operator=(const LatestVersion &) = default ;
      LatestVersion& operator=(LatestVersion &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->changelog_ == nullptr
        && this->createdAt_ == nullptr && this->version_ == nullptr; };
      // changelog Field Functions 
      bool hasChangelog() const { return this->changelog_ != nullptr;};
      void deleteChangelog() { this->changelog_ = nullptr;};
      inline string getChangelog() const { DARABONBA_PTR_GET_DEFAULT(changelog_, "") };
      inline LatestVersion& setChangelog(string changelog) { DARABONBA_PTR_SET_VALUE(changelog_, changelog) };


      // createdAt Field Functions 
      bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
      void deleteCreatedAt() { this->createdAt_ = nullptr;};
      inline int64_t getCreatedAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, 0L) };
      inline LatestVersion& setCreatedAt(int64_t createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


      // version Field Functions 
      bool hasVersion() const { return this->version_ != nullptr;};
      void deleteVersion() { this->version_ = nullptr;};
      inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
      inline LatestVersion& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    protected:
      // The version changelog.
      shared_ptr<string> changelog_ {};
      // The version publish timestamp in Unix milliseconds.
      shared_ptr<int64_t> createdAt_ {};
      // The version number.
      shared_ptr<string> version_ {};
    };

    virtual bool empty() const override { return this->applicationId_ == nullptr
        && this->code_ == nullptr && this->latestVersion_ == nullptr && this->message_ == nullptr && this->owner_ == nullptr && this->requestId_ == nullptr
        && this->skill_ == nullptr; };
    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string getApplicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline DescribePolarClawSkillDetailResponseBody& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline DescribePolarClawSkillDetailResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // latestVersion Field Functions 
    bool hasLatestVersion() const { return this->latestVersion_ != nullptr;};
    void deleteLatestVersion() { this->latestVersion_ = nullptr;};
    inline const DescribePolarClawSkillDetailResponseBody::LatestVersion & getLatestVersion() const { DARABONBA_PTR_GET_CONST(latestVersion_, DescribePolarClawSkillDetailResponseBody::LatestVersion) };
    inline DescribePolarClawSkillDetailResponseBody::LatestVersion getLatestVersion() { DARABONBA_PTR_GET(latestVersion_, DescribePolarClawSkillDetailResponseBody::LatestVersion) };
    inline DescribePolarClawSkillDetailResponseBody& setLatestVersion(const DescribePolarClawSkillDetailResponseBody::LatestVersion & latestVersion) { DARABONBA_PTR_SET_VALUE(latestVersion_, latestVersion) };
    inline DescribePolarClawSkillDetailResponseBody& setLatestVersion(DescribePolarClawSkillDetailResponseBody::LatestVersion && latestVersion) { DARABONBA_PTR_SET_RVALUE(latestVersion_, latestVersion) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribePolarClawSkillDetailResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // owner Field Functions 
    bool hasOwner() const { return this->owner_ != nullptr;};
    void deleteOwner() { this->owner_ = nullptr;};
    inline const DescribePolarClawSkillDetailResponseBody::Owner & getOwner() const { DARABONBA_PTR_GET_CONST(owner_, DescribePolarClawSkillDetailResponseBody::Owner) };
    inline DescribePolarClawSkillDetailResponseBody::Owner getOwner() { DARABONBA_PTR_GET(owner_, DescribePolarClawSkillDetailResponseBody::Owner) };
    inline DescribePolarClawSkillDetailResponseBody& setOwner(const DescribePolarClawSkillDetailResponseBody::Owner & owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };
    inline DescribePolarClawSkillDetailResponseBody& setOwner(DescribePolarClawSkillDetailResponseBody::Owner && owner) { DARABONBA_PTR_SET_RVALUE(owner_, owner) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribePolarClawSkillDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // skill Field Functions 
    bool hasSkill() const { return this->skill_ != nullptr;};
    void deleteSkill() { this->skill_ = nullptr;};
    inline const DescribePolarClawSkillDetailResponseBody::Skill & getSkill() const { DARABONBA_PTR_GET_CONST(skill_, DescribePolarClawSkillDetailResponseBody::Skill) };
    inline DescribePolarClawSkillDetailResponseBody::Skill getSkill() { DARABONBA_PTR_GET(skill_, DescribePolarClawSkillDetailResponseBody::Skill) };
    inline DescribePolarClawSkillDetailResponseBody& setSkill(const DescribePolarClawSkillDetailResponseBody::Skill & skill) { DARABONBA_PTR_SET_VALUE(skill_, skill) };
    inline DescribePolarClawSkillDetailResponseBody& setSkill(DescribePolarClawSkillDetailResponseBody::Skill && skill) { DARABONBA_PTR_SET_RVALUE(skill_, skill) };


  protected:
    // The application ID.
    shared_ptr<string> applicationId_ {};
    // The response status code.
    shared_ptr<int32_t> code_ {};
    // The latest version information.
    shared_ptr<DescribePolarClawSkillDetailResponseBody::LatestVersion> latestVersion_ {};
    // The response message.
    shared_ptr<string> message_ {};
    // The Skill author information.
    shared_ptr<DescribePolarClawSkillDetailResponseBody::Owner> owner_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    // The core information of the Skill.
    shared_ptr<DescribePolarClawSkillDetailResponseBody::Skill> skill_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
