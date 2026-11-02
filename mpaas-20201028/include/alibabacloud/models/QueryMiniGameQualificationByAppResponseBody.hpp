// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYMINIGAMEQUALIFICATIONBYAPPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYMINIGAMEQUALIFICATIONBYAPPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20201028
{
namespace Models
{
  class QueryMiniGameQualificationByAppResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryMiniGameQualificationByAppResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResultMsg, resultMsg_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, QueryMiniGameQualificationByAppResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResultMsg, resultMsg_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    QueryMiniGameQualificationByAppResponseBody() = default ;
    QueryMiniGameQualificationByAppResponseBody(const QueryMiniGameQualificationByAppResponseBody &) = default ;
    QueryMiniGameQualificationByAppResponseBody(QueryMiniGameQualificationByAppResponseBody &&) = default ;
    QueryMiniGameQualificationByAppResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryMiniGameQualificationByAppResponseBody() = default ;
    QueryMiniGameQualificationByAppResponseBody& operator=(const QueryMiniGameQualificationByAppResponseBody &) = default ;
    QueryMiniGameQualificationByAppResponseBody& operator=(QueryMiniGameQualificationByAppResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Content : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Content& obj) { 
        DARABONBA_PTR_TO_JSON(BusinessLicenseName, businessLicenseName_);
        DARABONBA_PTR_TO_JSON(BusinessLicenseUrl, businessLicenseUrl_);
        DARABONBA_PTR_TO_JSON(CopyrightAuthorizationFiles, copyrightAuthorizationFiles_);
        DARABONBA_PTR_TO_JSON(CopyrightFileName, copyrightFileName_);
        DARABONBA_PTR_TO_JSON(CopyrightRegistrationNumber, copyrightRegistrationNumber_);
        DARABONBA_PTR_TO_JSON(CopyrightUrl, copyrightUrl_);
        DARABONBA_PTR_TO_JSON(Developer, developer_);
        DARABONBA_PTR_TO_JSON(GameType, gameType_);
        DARABONBA_PTR_TO_JSON(GameVersionId, gameVersionId_);
        DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_TO_JSON(IcpFileName, icpFileName_);
        DARABONBA_PTR_TO_JSON(IcpUrl, icpUrl_);
        DARABONBA_PTR_TO_JSON(IdCode, idCode_);
        DARABONBA_PTR_TO_JSON(IpAuthorizationFiles, ipAuthorizationFiles_);
        DARABONBA_PTR_TO_JSON(MiniProgramCode, miniProgramCode_);
        DARABONBA_PTR_TO_JSON(MiniProgramId, miniProgramId_);
        DARABONBA_PTR_TO_JSON(OnlineGamePubReFileName, onlineGamePubReFileName_);
        DARABONBA_PTR_TO_JSON(OnlineGamePubReUrl, onlineGamePubReUrl_);
        DARABONBA_PTR_TO_JSON(PrivacyPolicyUrl, privacyPolicyUrl_);
        DARABONBA_PTR_TO_JSON(Publisher, publisher_);
        DARABONBA_PTR_TO_JSON(ReviewStatus, reviewStatus_);
      };
      friend void from_json(const Darabonba::Json& j, Content& obj) { 
        DARABONBA_PTR_FROM_JSON(BusinessLicenseName, businessLicenseName_);
        DARABONBA_PTR_FROM_JSON(BusinessLicenseUrl, businessLicenseUrl_);
        DARABONBA_PTR_FROM_JSON(CopyrightAuthorizationFiles, copyrightAuthorizationFiles_);
        DARABONBA_PTR_FROM_JSON(CopyrightFileName, copyrightFileName_);
        DARABONBA_PTR_FROM_JSON(CopyrightRegistrationNumber, copyrightRegistrationNumber_);
        DARABONBA_PTR_FROM_JSON(CopyrightUrl, copyrightUrl_);
        DARABONBA_PTR_FROM_JSON(Developer, developer_);
        DARABONBA_PTR_FROM_JSON(GameType, gameType_);
        DARABONBA_PTR_FROM_JSON(GameVersionId, gameVersionId_);
        DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_FROM_JSON(IcpFileName, icpFileName_);
        DARABONBA_PTR_FROM_JSON(IcpUrl, icpUrl_);
        DARABONBA_PTR_FROM_JSON(IdCode, idCode_);
        DARABONBA_PTR_FROM_JSON(IpAuthorizationFiles, ipAuthorizationFiles_);
        DARABONBA_PTR_FROM_JSON(MiniProgramCode, miniProgramCode_);
        DARABONBA_PTR_FROM_JSON(MiniProgramId, miniProgramId_);
        DARABONBA_PTR_FROM_JSON(OnlineGamePubReFileName, onlineGamePubReFileName_);
        DARABONBA_PTR_FROM_JSON(OnlineGamePubReUrl, onlineGamePubReUrl_);
        DARABONBA_PTR_FROM_JSON(PrivacyPolicyUrl, privacyPolicyUrl_);
        DARABONBA_PTR_FROM_JSON(Publisher, publisher_);
        DARABONBA_PTR_FROM_JSON(ReviewStatus, reviewStatus_);
      };
      Content() = default ;
      Content(const Content &) = default ;
      Content(Content &&) = default ;
      Content(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Content() = default ;
      Content& operator=(const Content &) = default ;
      Content& operator=(Content &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class IpAuthorizationFiles : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const IpAuthorizationFiles& obj) { 
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Url, url_);
        };
        friend void from_json(const Darabonba::Json& j, IpAuthorizationFiles& obj) { 
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Url, url_);
        };
        IpAuthorizationFiles() = default ;
        IpAuthorizationFiles(const IpAuthorizationFiles &) = default ;
        IpAuthorizationFiles(IpAuthorizationFiles &&) = default ;
        IpAuthorizationFiles(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~IpAuthorizationFiles() = default ;
        IpAuthorizationFiles& operator=(const IpAuthorizationFiles &) = default ;
        IpAuthorizationFiles& operator=(IpAuthorizationFiles &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->name_ == nullptr
        && this->url_ == nullptr; };
        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline IpAuthorizationFiles& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // url Field Functions 
        bool hasUrl() const { return this->url_ != nullptr;};
        void deleteUrl() { this->url_ = nullptr;};
        inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
        inline IpAuthorizationFiles& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


      protected:
        shared_ptr<string> name_ {};
        shared_ptr<string> url_ {};
      };

      class CopyrightAuthorizationFiles : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CopyrightAuthorizationFiles& obj) { 
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Url, url_);
        };
        friend void from_json(const Darabonba::Json& j, CopyrightAuthorizationFiles& obj) { 
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Url, url_);
        };
        CopyrightAuthorizationFiles() = default ;
        CopyrightAuthorizationFiles(const CopyrightAuthorizationFiles &) = default ;
        CopyrightAuthorizationFiles(CopyrightAuthorizationFiles &&) = default ;
        CopyrightAuthorizationFiles(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~CopyrightAuthorizationFiles() = default ;
        CopyrightAuthorizationFiles& operator=(const CopyrightAuthorizationFiles &) = default ;
        CopyrightAuthorizationFiles& operator=(CopyrightAuthorizationFiles &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->name_ == nullptr
        && this->url_ == nullptr; };
        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline CopyrightAuthorizationFiles& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // url Field Functions 
        bool hasUrl() const { return this->url_ != nullptr;};
        void deleteUrl() { this->url_ = nullptr;};
        inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
        inline CopyrightAuthorizationFiles& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


      protected:
        shared_ptr<string> name_ {};
        shared_ptr<string> url_ {};
      };

      virtual bool empty() const override { return this->businessLicenseName_ == nullptr
        && this->businessLicenseUrl_ == nullptr && this->copyrightAuthorizationFiles_ == nullptr && this->copyrightFileName_ == nullptr && this->copyrightRegistrationNumber_ == nullptr && this->copyrightUrl_ == nullptr
        && this->developer_ == nullptr && this->gameType_ == nullptr && this->gameVersionId_ == nullptr && this->gmtModified_ == nullptr && this->icpFileName_ == nullptr
        && this->icpUrl_ == nullptr && this->idCode_ == nullptr && this->ipAuthorizationFiles_ == nullptr && this->miniProgramCode_ == nullptr && this->miniProgramId_ == nullptr
        && this->onlineGamePubReFileName_ == nullptr && this->onlineGamePubReUrl_ == nullptr && this->privacyPolicyUrl_ == nullptr && this->publisher_ == nullptr && this->reviewStatus_ == nullptr; };
      // businessLicenseName Field Functions 
      bool hasBusinessLicenseName() const { return this->businessLicenseName_ != nullptr;};
      void deleteBusinessLicenseName() { this->businessLicenseName_ = nullptr;};
      inline string getBusinessLicenseName() const { DARABONBA_PTR_GET_DEFAULT(businessLicenseName_, "") };
      inline Content& setBusinessLicenseName(string businessLicenseName) { DARABONBA_PTR_SET_VALUE(businessLicenseName_, businessLicenseName) };


      // businessLicenseUrl Field Functions 
      bool hasBusinessLicenseUrl() const { return this->businessLicenseUrl_ != nullptr;};
      void deleteBusinessLicenseUrl() { this->businessLicenseUrl_ = nullptr;};
      inline string getBusinessLicenseUrl() const { DARABONBA_PTR_GET_DEFAULT(businessLicenseUrl_, "") };
      inline Content& setBusinessLicenseUrl(string businessLicenseUrl) { DARABONBA_PTR_SET_VALUE(businessLicenseUrl_, businessLicenseUrl) };


      // copyrightAuthorizationFiles Field Functions 
      bool hasCopyrightAuthorizationFiles() const { return this->copyrightAuthorizationFiles_ != nullptr;};
      void deleteCopyrightAuthorizationFiles() { this->copyrightAuthorizationFiles_ = nullptr;};
      inline const vector<Content::CopyrightAuthorizationFiles> & getCopyrightAuthorizationFiles() const { DARABONBA_PTR_GET_CONST(copyrightAuthorizationFiles_, vector<Content::CopyrightAuthorizationFiles>) };
      inline vector<Content::CopyrightAuthorizationFiles> getCopyrightAuthorizationFiles() { DARABONBA_PTR_GET(copyrightAuthorizationFiles_, vector<Content::CopyrightAuthorizationFiles>) };
      inline Content& setCopyrightAuthorizationFiles(const vector<Content::CopyrightAuthorizationFiles> & copyrightAuthorizationFiles) { DARABONBA_PTR_SET_VALUE(copyrightAuthorizationFiles_, copyrightAuthorizationFiles) };
      inline Content& setCopyrightAuthorizationFiles(vector<Content::CopyrightAuthorizationFiles> && copyrightAuthorizationFiles) { DARABONBA_PTR_SET_RVALUE(copyrightAuthorizationFiles_, copyrightAuthorizationFiles) };


      // copyrightFileName Field Functions 
      bool hasCopyrightFileName() const { return this->copyrightFileName_ != nullptr;};
      void deleteCopyrightFileName() { this->copyrightFileName_ = nullptr;};
      inline string getCopyrightFileName() const { DARABONBA_PTR_GET_DEFAULT(copyrightFileName_, "") };
      inline Content& setCopyrightFileName(string copyrightFileName) { DARABONBA_PTR_SET_VALUE(copyrightFileName_, copyrightFileName) };


      // copyrightRegistrationNumber Field Functions 
      bool hasCopyrightRegistrationNumber() const { return this->copyrightRegistrationNumber_ != nullptr;};
      void deleteCopyrightRegistrationNumber() { this->copyrightRegistrationNumber_ = nullptr;};
      inline string getCopyrightRegistrationNumber() const { DARABONBA_PTR_GET_DEFAULT(copyrightRegistrationNumber_, "") };
      inline Content& setCopyrightRegistrationNumber(string copyrightRegistrationNumber) { DARABONBA_PTR_SET_VALUE(copyrightRegistrationNumber_, copyrightRegistrationNumber) };


      // copyrightUrl Field Functions 
      bool hasCopyrightUrl() const { return this->copyrightUrl_ != nullptr;};
      void deleteCopyrightUrl() { this->copyrightUrl_ = nullptr;};
      inline string getCopyrightUrl() const { DARABONBA_PTR_GET_DEFAULT(copyrightUrl_, "") };
      inline Content& setCopyrightUrl(string copyrightUrl) { DARABONBA_PTR_SET_VALUE(copyrightUrl_, copyrightUrl) };


      // developer Field Functions 
      bool hasDeveloper() const { return this->developer_ != nullptr;};
      void deleteDeveloper() { this->developer_ = nullptr;};
      inline string getDeveloper() const { DARABONBA_PTR_GET_DEFAULT(developer_, "") };
      inline Content& setDeveloper(string developer) { DARABONBA_PTR_SET_VALUE(developer_, developer) };


      // gameType Field Functions 
      bool hasGameType() const { return this->gameType_ != nullptr;};
      void deleteGameType() { this->gameType_ = nullptr;};
      inline string getGameType() const { DARABONBA_PTR_GET_DEFAULT(gameType_, "") };
      inline Content& setGameType(string gameType) { DARABONBA_PTR_SET_VALUE(gameType_, gameType) };


      // gameVersionId Field Functions 
      bool hasGameVersionId() const { return this->gameVersionId_ != nullptr;};
      void deleteGameVersionId() { this->gameVersionId_ = nullptr;};
      inline string getGameVersionId() const { DARABONBA_PTR_GET_DEFAULT(gameVersionId_, "") };
      inline Content& setGameVersionId(string gameVersionId) { DARABONBA_PTR_SET_VALUE(gameVersionId_, gameVersionId) };


      // gmtModified Field Functions 
      bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
      void deleteGmtModified() { this->gmtModified_ = nullptr;};
      inline int64_t getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, 0L) };
      inline Content& setGmtModified(int64_t gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


      // icpFileName Field Functions 
      bool hasIcpFileName() const { return this->icpFileName_ != nullptr;};
      void deleteIcpFileName() { this->icpFileName_ = nullptr;};
      inline string getIcpFileName() const { DARABONBA_PTR_GET_DEFAULT(icpFileName_, "") };
      inline Content& setIcpFileName(string icpFileName) { DARABONBA_PTR_SET_VALUE(icpFileName_, icpFileName) };


      // icpUrl Field Functions 
      bool hasIcpUrl() const { return this->icpUrl_ != nullptr;};
      void deleteIcpUrl() { this->icpUrl_ = nullptr;};
      inline string getIcpUrl() const { DARABONBA_PTR_GET_DEFAULT(icpUrl_, "") };
      inline Content& setIcpUrl(string icpUrl) { DARABONBA_PTR_SET_VALUE(icpUrl_, icpUrl) };


      // idCode Field Functions 
      bool hasIdCode() const { return this->idCode_ != nullptr;};
      void deleteIdCode() { this->idCode_ = nullptr;};
      inline string getIdCode() const { DARABONBA_PTR_GET_DEFAULT(idCode_, "") };
      inline Content& setIdCode(string idCode) { DARABONBA_PTR_SET_VALUE(idCode_, idCode) };


      // ipAuthorizationFiles Field Functions 
      bool hasIpAuthorizationFiles() const { return this->ipAuthorizationFiles_ != nullptr;};
      void deleteIpAuthorizationFiles() { this->ipAuthorizationFiles_ = nullptr;};
      inline const vector<Content::IpAuthorizationFiles> & getIpAuthorizationFiles() const { DARABONBA_PTR_GET_CONST(ipAuthorizationFiles_, vector<Content::IpAuthorizationFiles>) };
      inline vector<Content::IpAuthorizationFiles> getIpAuthorizationFiles() { DARABONBA_PTR_GET(ipAuthorizationFiles_, vector<Content::IpAuthorizationFiles>) };
      inline Content& setIpAuthorizationFiles(const vector<Content::IpAuthorizationFiles> & ipAuthorizationFiles) { DARABONBA_PTR_SET_VALUE(ipAuthorizationFiles_, ipAuthorizationFiles) };
      inline Content& setIpAuthorizationFiles(vector<Content::IpAuthorizationFiles> && ipAuthorizationFiles) { DARABONBA_PTR_SET_RVALUE(ipAuthorizationFiles_, ipAuthorizationFiles) };


      // miniProgramCode Field Functions 
      bool hasMiniProgramCode() const { return this->miniProgramCode_ != nullptr;};
      void deleteMiniProgramCode() { this->miniProgramCode_ = nullptr;};
      inline string getMiniProgramCode() const { DARABONBA_PTR_GET_DEFAULT(miniProgramCode_, "") };
      inline Content& setMiniProgramCode(string miniProgramCode) { DARABONBA_PTR_SET_VALUE(miniProgramCode_, miniProgramCode) };


      // miniProgramId Field Functions 
      bool hasMiniProgramId() const { return this->miniProgramId_ != nullptr;};
      void deleteMiniProgramId() { this->miniProgramId_ = nullptr;};
      inline int64_t getMiniProgramId() const { DARABONBA_PTR_GET_DEFAULT(miniProgramId_, 0L) };
      inline Content& setMiniProgramId(int64_t miniProgramId) { DARABONBA_PTR_SET_VALUE(miniProgramId_, miniProgramId) };


      // onlineGamePubReFileName Field Functions 
      bool hasOnlineGamePubReFileName() const { return this->onlineGamePubReFileName_ != nullptr;};
      void deleteOnlineGamePubReFileName() { this->onlineGamePubReFileName_ = nullptr;};
      inline string getOnlineGamePubReFileName() const { DARABONBA_PTR_GET_DEFAULT(onlineGamePubReFileName_, "") };
      inline Content& setOnlineGamePubReFileName(string onlineGamePubReFileName) { DARABONBA_PTR_SET_VALUE(onlineGamePubReFileName_, onlineGamePubReFileName) };


      // onlineGamePubReUrl Field Functions 
      bool hasOnlineGamePubReUrl() const { return this->onlineGamePubReUrl_ != nullptr;};
      void deleteOnlineGamePubReUrl() { this->onlineGamePubReUrl_ = nullptr;};
      inline string getOnlineGamePubReUrl() const { DARABONBA_PTR_GET_DEFAULT(onlineGamePubReUrl_, "") };
      inline Content& setOnlineGamePubReUrl(string onlineGamePubReUrl) { DARABONBA_PTR_SET_VALUE(onlineGamePubReUrl_, onlineGamePubReUrl) };


      // privacyPolicyUrl Field Functions 
      bool hasPrivacyPolicyUrl() const { return this->privacyPolicyUrl_ != nullptr;};
      void deletePrivacyPolicyUrl() { this->privacyPolicyUrl_ = nullptr;};
      inline string getPrivacyPolicyUrl() const { DARABONBA_PTR_GET_DEFAULT(privacyPolicyUrl_, "") };
      inline Content& setPrivacyPolicyUrl(string privacyPolicyUrl) { DARABONBA_PTR_SET_VALUE(privacyPolicyUrl_, privacyPolicyUrl) };


      // publisher Field Functions 
      bool hasPublisher() const { return this->publisher_ != nullptr;};
      void deletePublisher() { this->publisher_ = nullptr;};
      inline string getPublisher() const { DARABONBA_PTR_GET_DEFAULT(publisher_, "") };
      inline Content& setPublisher(string publisher) { DARABONBA_PTR_SET_VALUE(publisher_, publisher) };


      // reviewStatus Field Functions 
      bool hasReviewStatus() const { return this->reviewStatus_ != nullptr;};
      void deleteReviewStatus() { this->reviewStatus_ = nullptr;};
      inline string getReviewStatus() const { DARABONBA_PTR_GET_DEFAULT(reviewStatus_, "") };
      inline Content& setReviewStatus(string reviewStatus) { DARABONBA_PTR_SET_VALUE(reviewStatus_, reviewStatus) };


    protected:
      shared_ptr<string> businessLicenseName_ {};
      shared_ptr<string> businessLicenseUrl_ {};
      shared_ptr<vector<Content::CopyrightAuthorizationFiles>> copyrightAuthorizationFiles_ {};
      shared_ptr<string> copyrightFileName_ {};
      shared_ptr<string> copyrightRegistrationNumber_ {};
      shared_ptr<string> copyrightUrl_ {};
      shared_ptr<string> developer_ {};
      shared_ptr<string> gameType_ {};
      shared_ptr<string> gameVersionId_ {};
      shared_ptr<int64_t> gmtModified_ {};
      shared_ptr<string> icpFileName_ {};
      shared_ptr<string> icpUrl_ {};
      shared_ptr<string> idCode_ {};
      shared_ptr<vector<Content::IpAuthorizationFiles>> ipAuthorizationFiles_ {};
      shared_ptr<string> miniProgramCode_ {};
      shared_ptr<int64_t> miniProgramId_ {};
      shared_ptr<string> onlineGamePubReFileName_ {};
      shared_ptr<string> onlineGamePubReUrl_ {};
      shared_ptr<string> privacyPolicyUrl_ {};
      shared_ptr<string> publisher_ {};
      shared_ptr<string> reviewStatus_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->content_ == nullptr && this->errorCode_ == nullptr && this->requestId_ == nullptr && this->resultMsg_ == nullptr && this->success_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline QueryMiniGameQualificationByAppResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline const vector<QueryMiniGameQualificationByAppResponseBody::Content> & getContent() const { DARABONBA_PTR_GET_CONST(content_, vector<QueryMiniGameQualificationByAppResponseBody::Content>) };
    inline vector<QueryMiniGameQualificationByAppResponseBody::Content> getContent() { DARABONBA_PTR_GET(content_, vector<QueryMiniGameQualificationByAppResponseBody::Content>) };
    inline QueryMiniGameQualificationByAppResponseBody& setContent(const vector<QueryMiniGameQualificationByAppResponseBody::Content> & content) { DARABONBA_PTR_SET_VALUE(content_, content) };
    inline QueryMiniGameQualificationByAppResponseBody& setContent(vector<QueryMiniGameQualificationByAppResponseBody::Content> && content) { DARABONBA_PTR_SET_RVALUE(content_, content) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline QueryMiniGameQualificationByAppResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryMiniGameQualificationByAppResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultMsg Field Functions 
    bool hasResultMsg() const { return this->resultMsg_ != nullptr;};
    void deleteResultMsg() { this->resultMsg_ = nullptr;};
    inline string getResultMsg() const { DARABONBA_PTR_GET_DEFAULT(resultMsg_, "") };
    inline QueryMiniGameQualificationByAppResponseBody& setResultMsg(string resultMsg) { DARABONBA_PTR_SET_VALUE(resultMsg_, resultMsg) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QueryMiniGameQualificationByAppResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> accessDeniedDetail_ {};
    shared_ptr<vector<QueryMiniGameQualificationByAppResponseBody::Content>> content_ {};
    shared_ptr<string> errorCode_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> resultMsg_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif
