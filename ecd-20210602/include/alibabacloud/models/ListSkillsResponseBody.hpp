// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSKILLSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSKILLSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20210602
{
namespace Models
{
  class ListSkillsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSkillsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Skills, skills_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListSkillsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Skills, skills_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
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
    class Skills : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Skills& obj) { 
        DARABONBA_PTR_TO_JSON(ApiKey, apiKey_);
        DARABONBA_PTR_TO_JSON(Author, author_);
        DARABONBA_PTR_TO_JSON(DefaultVersion, defaultVersion_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
        DARABONBA_PTR_TO_JSON(Enable, enable_);
        DARABONBA_PTR_TO_JSON(EnvVars, envVars_);
        DARABONBA_PTR_TO_JSON(GmtCreated, gmtCreated_);
        DARABONBA_PTR_TO_JSON(SkillIconUrl, skillIconUrl_);
        DARABONBA_PTR_TO_JSON(SkillId, skillId_);
        DARABONBA_PTR_TO_JSON(SkillName, skillName_);
        DARABONBA_PTR_TO_JSON(SkillVersions, skillVersions_);
        DARABONBA_PTR_TO_JSON(Slug, slug_);
        DARABONBA_PTR_TO_JSON(SourceMarket, sourceMarket_);
        DARABONBA_PTR_TO_JSON(SourceMarketName, sourceMarketName_);
        DARABONBA_PTR_TO_JSON(SupplierType, supplierType_);
      };
      friend void from_json(const Darabonba::Json& j, Skills& obj) { 
        DARABONBA_PTR_FROM_JSON(ApiKey, apiKey_);
        DARABONBA_PTR_FROM_JSON(Author, author_);
        DARABONBA_PTR_FROM_JSON(DefaultVersion, defaultVersion_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
        DARABONBA_PTR_FROM_JSON(Enable, enable_);
        DARABONBA_PTR_FROM_JSON(EnvVars, envVars_);
        DARABONBA_PTR_FROM_JSON(GmtCreated, gmtCreated_);
        DARABONBA_PTR_FROM_JSON(SkillIconUrl, skillIconUrl_);
        DARABONBA_PTR_FROM_JSON(SkillId, skillId_);
        DARABONBA_PTR_FROM_JSON(SkillName, skillName_);
        DARABONBA_PTR_FROM_JSON(SkillVersions, skillVersions_);
        DARABONBA_PTR_FROM_JSON(Slug, slug_);
        DARABONBA_PTR_FROM_JSON(SourceMarket, sourceMarket_);
        DARABONBA_PTR_FROM_JSON(SourceMarketName, sourceMarketName_);
        DARABONBA_PTR_FROM_JSON(SupplierType, supplierType_);
      };
      Skills() = default ;
      Skills(const Skills &) = default ;
      Skills(Skills &&) = default ;
      Skills(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Skills() = default ;
      Skills& operator=(const Skills &) = default ;
      Skills& operator=(Skills &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class SkillVersions : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SkillVersions& obj) { 
          DARABONBA_PTR_TO_JSON(ChangeLog, changeLog_);
          DARABONBA_PTR_TO_JSON(CreatedAt, createdAt_);
          DARABONBA_PTR_TO_JSON(PublishStatus, publishStatus_);
          DARABONBA_PTR_TO_JSON(SecurityScanFailReason, securityScanFailReason_);
          DARABONBA_PTR_TO_JSON(SecurityScanScore, securityScanScore_);
          DARABONBA_PTR_TO_JSON(SecurityScanStatus, securityScanStatus_);
          DARABONBA_PTR_TO_JSON(Version, version_);
        };
        friend void from_json(const Darabonba::Json& j, SkillVersions& obj) { 
          DARABONBA_PTR_FROM_JSON(ChangeLog, changeLog_);
          DARABONBA_PTR_FROM_JSON(CreatedAt, createdAt_);
          DARABONBA_PTR_FROM_JSON(PublishStatus, publishStatus_);
          DARABONBA_PTR_FROM_JSON(SecurityScanFailReason, securityScanFailReason_);
          DARABONBA_PTR_FROM_JSON(SecurityScanScore, securityScanScore_);
          DARABONBA_PTR_FROM_JSON(SecurityScanStatus, securityScanStatus_);
          DARABONBA_PTR_FROM_JSON(Version, version_);
        };
        SkillVersions() = default ;
        SkillVersions(const SkillVersions &) = default ;
        SkillVersions(SkillVersions &&) = default ;
        SkillVersions(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SkillVersions() = default ;
        SkillVersions& operator=(const SkillVersions &) = default ;
        SkillVersions& operator=(SkillVersions &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->changeLog_ == nullptr
        && this->createdAt_ == nullptr && this->publishStatus_ == nullptr && this->securityScanFailReason_ == nullptr && this->securityScanScore_ == nullptr && this->securityScanStatus_ == nullptr
        && this->version_ == nullptr; };
        // changeLog Field Functions 
        bool hasChangeLog() const { return this->changeLog_ != nullptr;};
        void deleteChangeLog() { this->changeLog_ = nullptr;};
        inline string getChangeLog() const { DARABONBA_PTR_GET_DEFAULT(changeLog_, "") };
        inline SkillVersions& setChangeLog(string changeLog) { DARABONBA_PTR_SET_VALUE(changeLog_, changeLog) };


        // createdAt Field Functions 
        bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
        void deleteCreatedAt() { this->createdAt_ = nullptr;};
        inline int64_t getCreatedAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, 0L) };
        inline SkillVersions& setCreatedAt(int64_t createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


        // publishStatus Field Functions 
        bool hasPublishStatus() const { return this->publishStatus_ != nullptr;};
        void deletePublishStatus() { this->publishStatus_ = nullptr;};
        inline string getPublishStatus() const { DARABONBA_PTR_GET_DEFAULT(publishStatus_, "") };
        inline SkillVersions& setPublishStatus(string publishStatus) { DARABONBA_PTR_SET_VALUE(publishStatus_, publishStatus) };


        // securityScanFailReason Field Functions 
        bool hasSecurityScanFailReason() const { return this->securityScanFailReason_ != nullptr;};
        void deleteSecurityScanFailReason() { this->securityScanFailReason_ = nullptr;};
        inline string getSecurityScanFailReason() const { DARABONBA_PTR_GET_DEFAULT(securityScanFailReason_, "") };
        inline SkillVersions& setSecurityScanFailReason(string securityScanFailReason) { DARABONBA_PTR_SET_VALUE(securityScanFailReason_, securityScanFailReason) };


        // securityScanScore Field Functions 
        bool hasSecurityScanScore() const { return this->securityScanScore_ != nullptr;};
        void deleteSecurityScanScore() { this->securityScanScore_ = nullptr;};
        inline int32_t getSecurityScanScore() const { DARABONBA_PTR_GET_DEFAULT(securityScanScore_, 0) };
        inline SkillVersions& setSecurityScanScore(int32_t securityScanScore) { DARABONBA_PTR_SET_VALUE(securityScanScore_, securityScanScore) };


        // securityScanStatus Field Functions 
        bool hasSecurityScanStatus() const { return this->securityScanStatus_ != nullptr;};
        void deleteSecurityScanStatus() { this->securityScanStatus_ = nullptr;};
        inline string getSecurityScanStatus() const { DARABONBA_PTR_GET_DEFAULT(securityScanStatus_, "") };
        inline SkillVersions& setSecurityScanStatus(string securityScanStatus) { DARABONBA_PTR_SET_VALUE(securityScanStatus_, securityScanStatus) };


        // version Field Functions 
        bool hasVersion() const { return this->version_ != nullptr;};
        void deleteVersion() { this->version_ = nullptr;};
        inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
        inline SkillVersions& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


      protected:
        shared_ptr<string> changeLog_ {};
        shared_ptr<int64_t> createdAt_ {};
        shared_ptr<string> publishStatus_ {};
        shared_ptr<string> securityScanFailReason_ {};
        shared_ptr<int32_t> securityScanScore_ {};
        shared_ptr<string> securityScanStatus_ {};
        shared_ptr<string> version_ {};
      };

      virtual bool empty() const override { return this->apiKey_ == nullptr
        && this->author_ == nullptr && this->defaultVersion_ == nullptr && this->description_ == nullptr && this->displayName_ == nullptr && this->enable_ == nullptr
        && this->envVars_ == nullptr && this->gmtCreated_ == nullptr && this->skillIconUrl_ == nullptr && this->skillId_ == nullptr && this->skillName_ == nullptr
        && this->skillVersions_ == nullptr && this->slug_ == nullptr && this->sourceMarket_ == nullptr && this->sourceMarketName_ == nullptr && this->supplierType_ == nullptr; };
      // apiKey Field Functions 
      bool hasApiKey() const { return this->apiKey_ != nullptr;};
      void deleteApiKey() { this->apiKey_ = nullptr;};
      inline string getApiKey() const { DARABONBA_PTR_GET_DEFAULT(apiKey_, "") };
      inline Skills& setApiKey(string apiKey) { DARABONBA_PTR_SET_VALUE(apiKey_, apiKey) };


      // author Field Functions 
      bool hasAuthor() const { return this->author_ != nullptr;};
      void deleteAuthor() { this->author_ = nullptr;};
      inline string getAuthor() const { DARABONBA_PTR_GET_DEFAULT(author_, "") };
      inline Skills& setAuthor(string author) { DARABONBA_PTR_SET_VALUE(author_, author) };


      // defaultVersion Field Functions 
      bool hasDefaultVersion() const { return this->defaultVersion_ != nullptr;};
      void deleteDefaultVersion() { this->defaultVersion_ = nullptr;};
      inline string getDefaultVersion() const { DARABONBA_PTR_GET_DEFAULT(defaultVersion_, "") };
      inline Skills& setDefaultVersion(string defaultVersion) { DARABONBA_PTR_SET_VALUE(defaultVersion_, defaultVersion) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Skills& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // displayName Field Functions 
      bool hasDisplayName() const { return this->displayName_ != nullptr;};
      void deleteDisplayName() { this->displayName_ = nullptr;};
      inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
      inline Skills& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


      // enable Field Functions 
      bool hasEnable() const { return this->enable_ != nullptr;};
      void deleteEnable() { this->enable_ = nullptr;};
      inline bool getEnable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
      inline Skills& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


      // envVars Field Functions 
      bool hasEnvVars() const { return this->envVars_ != nullptr;};
      void deleteEnvVars() { this->envVars_ = nullptr;};
      inline const map<string, string> & getEnvVars() const { DARABONBA_PTR_GET_CONST(envVars_, map<string, string>) };
      inline map<string, string> getEnvVars() { DARABONBA_PTR_GET(envVars_, map<string, string>) };
      inline Skills& setEnvVars(const map<string, string> & envVars) { DARABONBA_PTR_SET_VALUE(envVars_, envVars) };
      inline Skills& setEnvVars(map<string, string> && envVars) { DARABONBA_PTR_SET_RVALUE(envVars_, envVars) };


      // gmtCreated Field Functions 
      bool hasGmtCreated() const { return this->gmtCreated_ != nullptr;};
      void deleteGmtCreated() { this->gmtCreated_ = nullptr;};
      inline string getGmtCreated() const { DARABONBA_PTR_GET_DEFAULT(gmtCreated_, "") };
      inline Skills& setGmtCreated(string gmtCreated) { DARABONBA_PTR_SET_VALUE(gmtCreated_, gmtCreated) };


      // skillIconUrl Field Functions 
      bool hasSkillIconUrl() const { return this->skillIconUrl_ != nullptr;};
      void deleteSkillIconUrl() { this->skillIconUrl_ = nullptr;};
      inline string getSkillIconUrl() const { DARABONBA_PTR_GET_DEFAULT(skillIconUrl_, "") };
      inline Skills& setSkillIconUrl(string skillIconUrl) { DARABONBA_PTR_SET_VALUE(skillIconUrl_, skillIconUrl) };


      // skillId Field Functions 
      bool hasSkillId() const { return this->skillId_ != nullptr;};
      void deleteSkillId() { this->skillId_ = nullptr;};
      inline string getSkillId() const { DARABONBA_PTR_GET_DEFAULT(skillId_, "") };
      inline Skills& setSkillId(string skillId) { DARABONBA_PTR_SET_VALUE(skillId_, skillId) };


      // skillName Field Functions 
      bool hasSkillName() const { return this->skillName_ != nullptr;};
      void deleteSkillName() { this->skillName_ = nullptr;};
      inline string getSkillName() const { DARABONBA_PTR_GET_DEFAULT(skillName_, "") };
      inline Skills& setSkillName(string skillName) { DARABONBA_PTR_SET_VALUE(skillName_, skillName) };


      // skillVersions Field Functions 
      bool hasSkillVersions() const { return this->skillVersions_ != nullptr;};
      void deleteSkillVersions() { this->skillVersions_ = nullptr;};
      inline const vector<Skills::SkillVersions> & getSkillVersions() const { DARABONBA_PTR_GET_CONST(skillVersions_, vector<Skills::SkillVersions>) };
      inline vector<Skills::SkillVersions> getSkillVersions() { DARABONBA_PTR_GET(skillVersions_, vector<Skills::SkillVersions>) };
      inline Skills& setSkillVersions(const vector<Skills::SkillVersions> & skillVersions) { DARABONBA_PTR_SET_VALUE(skillVersions_, skillVersions) };
      inline Skills& setSkillVersions(vector<Skills::SkillVersions> && skillVersions) { DARABONBA_PTR_SET_RVALUE(skillVersions_, skillVersions) };


      // slug Field Functions 
      bool hasSlug() const { return this->slug_ != nullptr;};
      void deleteSlug() { this->slug_ = nullptr;};
      inline string getSlug() const { DARABONBA_PTR_GET_DEFAULT(slug_, "") };
      inline Skills& setSlug(string slug) { DARABONBA_PTR_SET_VALUE(slug_, slug) };


      // sourceMarket Field Functions 
      bool hasSourceMarket() const { return this->sourceMarket_ != nullptr;};
      void deleteSourceMarket() { this->sourceMarket_ = nullptr;};
      inline string getSourceMarket() const { DARABONBA_PTR_GET_DEFAULT(sourceMarket_, "") };
      inline Skills& setSourceMarket(string sourceMarket) { DARABONBA_PTR_SET_VALUE(sourceMarket_, sourceMarket) };


      // sourceMarketName Field Functions 
      bool hasSourceMarketName() const { return this->sourceMarketName_ != nullptr;};
      void deleteSourceMarketName() { this->sourceMarketName_ = nullptr;};
      inline string getSourceMarketName() const { DARABONBA_PTR_GET_DEFAULT(sourceMarketName_, "") };
      inline Skills& setSourceMarketName(string sourceMarketName) { DARABONBA_PTR_SET_VALUE(sourceMarketName_, sourceMarketName) };


      // supplierType Field Functions 
      bool hasSupplierType() const { return this->supplierType_ != nullptr;};
      void deleteSupplierType() { this->supplierType_ = nullptr;};
      inline string getSupplierType() const { DARABONBA_PTR_GET_DEFAULT(supplierType_, "") };
      inline Skills& setSupplierType(string supplierType) { DARABONBA_PTR_SET_VALUE(supplierType_, supplierType) };


    protected:
      // The API key of the skill.
      shared_ptr<string> apiKey_ {};
      // The author.
      shared_ptr<string> author_ {};
      // The currently effective version number. If no version is effective, an empty value is returned.
      shared_ptr<string> defaultVersion_ {};
      // The description of the skill.
      shared_ptr<string> description_ {};
      // The display name.
      shared_ptr<string> displayName_ {};
      // Indicates whether the skill is enabled.
      shared_ptr<bool> enable_ {};
      // The environment variables.
      shared_ptr<map<string, string>> envVars_ {};
      // The creation time.
      shared_ptr<string> gmtCreated_ {};
      // The URL of the skill icon.
      shared_ptr<string> skillIconUrl_ {};
      // The unique identifier of the skill.
      shared_ptr<string> skillId_ {};
      // The name in the SKILL.md file.
      shared_ptr<string> skillName_ {};
      shared_ptr<vector<Skills::SkillVersions>> skillVersions_ {};
      // The slug identifier of the skill. This value is user-defined and unique within the tenant.
      shared_ptr<string> slug_ {};
      // The source marketplace code.
      shared_ptr<string> sourceMarket_ {};
      // The source marketplace name.
      shared_ptr<string> sourceMarketName_ {};
      // The supply type.
      shared_ptr<string> supplierType_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->skills_ == nullptr && this->totalCount_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListSkillsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // skills Field Functions 
    bool hasSkills() const { return this->skills_ != nullptr;};
    void deleteSkills() { this->skills_ = nullptr;};
    inline const vector<ListSkillsResponseBody::Skills> & getSkills() const { DARABONBA_PTR_GET_CONST(skills_, vector<ListSkillsResponseBody::Skills>) };
    inline vector<ListSkillsResponseBody::Skills> getSkills() { DARABONBA_PTR_GET(skills_, vector<ListSkillsResponseBody::Skills>) };
    inline ListSkillsResponseBody& setSkills(const vector<ListSkillsResponseBody::Skills> & skills) { DARABONBA_PTR_SET_VALUE(skills_, skills) };
    inline ListSkillsResponseBody& setSkills(vector<ListSkillsResponseBody::Skills> && skills) { DARABONBA_PTR_SET_RVALUE(skills_, skills) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListSkillsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The list of skill details.
    shared_ptr<vector<ListSkillsResponseBody::Skills>> skills_ {};
    // The total number of query results.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20210602
#endif
