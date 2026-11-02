// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYMINIGAMEINFOBYAPPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYMINIGAMEINFOBYAPPRESPONSEBODY_HPP_
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
  class QueryMiniGameInfoByAppResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryMiniGameInfoByAppResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResultMsg, resultMsg_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, QueryMiniGameInfoByAppResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResultMsg, resultMsg_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    QueryMiniGameInfoByAppResponseBody() = default ;
    QueryMiniGameInfoByAppResponseBody(const QueryMiniGameInfoByAppResponseBody &) = default ;
    QueryMiniGameInfoByAppResponseBody(QueryMiniGameInfoByAppResponseBody &&) = default ;
    QueryMiniGameInfoByAppResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryMiniGameInfoByAppResponseBody() = default ;
    QueryMiniGameInfoByAppResponseBody& operator=(const QueryMiniGameInfoByAppResponseBody &) = default ;
    QueryMiniGameInfoByAppResponseBody& operator=(QueryMiniGameInfoByAppResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Content : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Content& obj) { 
        DARABONBA_PTR_TO_JSON(GameEngine, gameEngine_);
        DARABONBA_PTR_TO_JSON(GameMaker, gameMaker_);
        DARABONBA_PTR_TO_JSON(GameTypeLevel1, gameTypeLevel1_);
        DARABONBA_PTR_TO_JSON(GameTypeLevel2, gameTypeLevel2_);
        DARABONBA_PTR_TO_JSON(GameTypeLevel3, gameTypeLevel3_);
        DARABONBA_PTR_TO_JSON(GameVersionId, gameVersionId_);
        DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_TO_JSON(Icon, icon_);
        DARABONBA_PTR_TO_JSON(Introduction, introduction_);
        DARABONBA_PTR_TO_JSON(MiniProgramCode, miniProgramCode_);
        DARABONBA_PTR_TO_JSON(MiniProgramId, miniProgramId_);
        DARABONBA_PTR_TO_JSON(MiniProgramName, miniProgramName_);
        DARABONBA_PTR_TO_JSON(Slogan, slogan_);
        DARABONBA_PTR_TO_JSON(UserProfileData, userProfileData_);
        DARABONBA_PTR_TO_JSON(Version, version_);
      };
      friend void from_json(const Darabonba::Json& j, Content& obj) { 
        DARABONBA_PTR_FROM_JSON(GameEngine, gameEngine_);
        DARABONBA_PTR_FROM_JSON(GameMaker, gameMaker_);
        DARABONBA_PTR_FROM_JSON(GameTypeLevel1, gameTypeLevel1_);
        DARABONBA_PTR_FROM_JSON(GameTypeLevel2, gameTypeLevel2_);
        DARABONBA_PTR_FROM_JSON(GameTypeLevel3, gameTypeLevel3_);
        DARABONBA_PTR_FROM_JSON(GameVersionId, gameVersionId_);
        DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_FROM_JSON(Icon, icon_);
        DARABONBA_PTR_FROM_JSON(Introduction, introduction_);
        DARABONBA_PTR_FROM_JSON(MiniProgramCode, miniProgramCode_);
        DARABONBA_PTR_FROM_JSON(MiniProgramId, miniProgramId_);
        DARABONBA_PTR_FROM_JSON(MiniProgramName, miniProgramName_);
        DARABONBA_PTR_FROM_JSON(Slogan, slogan_);
        DARABONBA_PTR_FROM_JSON(UserProfileData, userProfileData_);
        DARABONBA_PTR_FROM_JSON(Version, version_);
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
      class UserProfileData : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const UserProfileData& obj) { 
          DARABONBA_PTR_TO_JSON(ActiveRegionCodes, activeRegionCodes_);
          DARABONBA_PTR_TO_JSON(ActiveRegions, activeRegions_);
          DARABONBA_PTR_TO_JSON(AgeSegment, ageSegment_);
          DARABONBA_PTR_TO_JSON(AndroidActiveModels, androidActiveModels_);
          DARABONBA_PTR_TO_JSON(AndroidRatio, androidRatio_);
          DARABONBA_PTR_TO_JSON(FemaleRatio, femaleRatio_);
          DARABONBA_PTR_TO_JSON(HarmonyRatio, harmonyRatio_);
          DARABONBA_PTR_TO_JSON(IosActiveModels, iosActiveModels_);
          DARABONBA_PTR_TO_JSON(IosRatio, iosRatio_);
          DARABONBA_PTR_TO_JSON(MaleRatio, maleRatio_);
          DARABONBA_PTR_TO_JSON(ProfileRemark, profileRemark_);
        };
        friend void from_json(const Darabonba::Json& j, UserProfileData& obj) { 
          DARABONBA_PTR_FROM_JSON(ActiveRegionCodes, activeRegionCodes_);
          DARABONBA_PTR_FROM_JSON(ActiveRegions, activeRegions_);
          DARABONBA_PTR_FROM_JSON(AgeSegment, ageSegment_);
          DARABONBA_PTR_FROM_JSON(AndroidActiveModels, androidActiveModels_);
          DARABONBA_PTR_FROM_JSON(AndroidRatio, androidRatio_);
          DARABONBA_PTR_FROM_JSON(FemaleRatio, femaleRatio_);
          DARABONBA_PTR_FROM_JSON(HarmonyRatio, harmonyRatio_);
          DARABONBA_PTR_FROM_JSON(IosActiveModels, iosActiveModels_);
          DARABONBA_PTR_FROM_JSON(IosRatio, iosRatio_);
          DARABONBA_PTR_FROM_JSON(MaleRatio, maleRatio_);
          DARABONBA_PTR_FROM_JSON(ProfileRemark, profileRemark_);
        };
        UserProfileData() = default ;
        UserProfileData(const UserProfileData &) = default ;
        UserProfileData(UserProfileData &&) = default ;
        UserProfileData(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~UserProfileData() = default ;
        UserProfileData& operator=(const UserProfileData &) = default ;
        UserProfileData& operator=(UserProfileData &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->activeRegionCodes_ == nullptr
        && this->activeRegions_ == nullptr && this->ageSegment_ == nullptr && this->androidActiveModels_ == nullptr && this->androidRatio_ == nullptr && this->femaleRatio_ == nullptr
        && this->harmonyRatio_ == nullptr && this->iosActiveModels_ == nullptr && this->iosRatio_ == nullptr && this->maleRatio_ == nullptr && this->profileRemark_ == nullptr; };
        // activeRegionCodes Field Functions 
        bool hasActiveRegionCodes() const { return this->activeRegionCodes_ != nullptr;};
        void deleteActiveRegionCodes() { this->activeRegionCodes_ = nullptr;};
        inline string getActiveRegionCodes() const { DARABONBA_PTR_GET_DEFAULT(activeRegionCodes_, "") };
        inline UserProfileData& setActiveRegionCodes(string activeRegionCodes) { DARABONBA_PTR_SET_VALUE(activeRegionCodes_, activeRegionCodes) };


        // activeRegions Field Functions 
        bool hasActiveRegions() const { return this->activeRegions_ != nullptr;};
        void deleteActiveRegions() { this->activeRegions_ = nullptr;};
        inline string getActiveRegions() const { DARABONBA_PTR_GET_DEFAULT(activeRegions_, "") };
        inline UserProfileData& setActiveRegions(string activeRegions) { DARABONBA_PTR_SET_VALUE(activeRegions_, activeRegions) };


        // ageSegment Field Functions 
        bool hasAgeSegment() const { return this->ageSegment_ != nullptr;};
        void deleteAgeSegment() { this->ageSegment_ = nullptr;};
        inline string getAgeSegment() const { DARABONBA_PTR_GET_DEFAULT(ageSegment_, "") };
        inline UserProfileData& setAgeSegment(string ageSegment) { DARABONBA_PTR_SET_VALUE(ageSegment_, ageSegment) };


        // androidActiveModels Field Functions 
        bool hasAndroidActiveModels() const { return this->androidActiveModels_ != nullptr;};
        void deleteAndroidActiveModels() { this->androidActiveModels_ = nullptr;};
        inline string getAndroidActiveModels() const { DARABONBA_PTR_GET_DEFAULT(androidActiveModels_, "") };
        inline UserProfileData& setAndroidActiveModels(string androidActiveModels) { DARABONBA_PTR_SET_VALUE(androidActiveModels_, androidActiveModels) };


        // androidRatio Field Functions 
        bool hasAndroidRatio() const { return this->androidRatio_ != nullptr;};
        void deleteAndroidRatio() { this->androidRatio_ = nullptr;};
        inline int32_t getAndroidRatio() const { DARABONBA_PTR_GET_DEFAULT(androidRatio_, 0) };
        inline UserProfileData& setAndroidRatio(int32_t androidRatio) { DARABONBA_PTR_SET_VALUE(androidRatio_, androidRatio) };


        // femaleRatio Field Functions 
        bool hasFemaleRatio() const { return this->femaleRatio_ != nullptr;};
        void deleteFemaleRatio() { this->femaleRatio_ = nullptr;};
        inline int32_t getFemaleRatio() const { DARABONBA_PTR_GET_DEFAULT(femaleRatio_, 0) };
        inline UserProfileData& setFemaleRatio(int32_t femaleRatio) { DARABONBA_PTR_SET_VALUE(femaleRatio_, femaleRatio) };


        // harmonyRatio Field Functions 
        bool hasHarmonyRatio() const { return this->harmonyRatio_ != nullptr;};
        void deleteHarmonyRatio() { this->harmonyRatio_ = nullptr;};
        inline int32_t getHarmonyRatio() const { DARABONBA_PTR_GET_DEFAULT(harmonyRatio_, 0) };
        inline UserProfileData& setHarmonyRatio(int32_t harmonyRatio) { DARABONBA_PTR_SET_VALUE(harmonyRatio_, harmonyRatio) };


        // iosActiveModels Field Functions 
        bool hasIosActiveModels() const { return this->iosActiveModels_ != nullptr;};
        void deleteIosActiveModels() { this->iosActiveModels_ = nullptr;};
        inline string getIosActiveModels() const { DARABONBA_PTR_GET_DEFAULT(iosActiveModels_, "") };
        inline UserProfileData& setIosActiveModels(string iosActiveModels) { DARABONBA_PTR_SET_VALUE(iosActiveModels_, iosActiveModels) };


        // iosRatio Field Functions 
        bool hasIosRatio() const { return this->iosRatio_ != nullptr;};
        void deleteIosRatio() { this->iosRatio_ = nullptr;};
        inline int32_t getIosRatio() const { DARABONBA_PTR_GET_DEFAULT(iosRatio_, 0) };
        inline UserProfileData& setIosRatio(int32_t iosRatio) { DARABONBA_PTR_SET_VALUE(iosRatio_, iosRatio) };


        // maleRatio Field Functions 
        bool hasMaleRatio() const { return this->maleRatio_ != nullptr;};
        void deleteMaleRatio() { this->maleRatio_ = nullptr;};
        inline int32_t getMaleRatio() const { DARABONBA_PTR_GET_DEFAULT(maleRatio_, 0) };
        inline UserProfileData& setMaleRatio(int32_t maleRatio) { DARABONBA_PTR_SET_VALUE(maleRatio_, maleRatio) };


        // profileRemark Field Functions 
        bool hasProfileRemark() const { return this->profileRemark_ != nullptr;};
        void deleteProfileRemark() { this->profileRemark_ = nullptr;};
        inline string getProfileRemark() const { DARABONBA_PTR_GET_DEFAULT(profileRemark_, "") };
        inline UserProfileData& setProfileRemark(string profileRemark) { DARABONBA_PTR_SET_VALUE(profileRemark_, profileRemark) };


      protected:
        shared_ptr<string> activeRegionCodes_ {};
        shared_ptr<string> activeRegions_ {};
        shared_ptr<string> ageSegment_ {};
        shared_ptr<string> androidActiveModels_ {};
        shared_ptr<int32_t> androidRatio_ {};
        shared_ptr<int32_t> femaleRatio_ {};
        shared_ptr<int32_t> harmonyRatio_ {};
        shared_ptr<string> iosActiveModels_ {};
        shared_ptr<int32_t> iosRatio_ {};
        shared_ptr<int32_t> maleRatio_ {};
        shared_ptr<string> profileRemark_ {};
      };

      virtual bool empty() const override { return this->gameEngine_ == nullptr
        && this->gameMaker_ == nullptr && this->gameTypeLevel1_ == nullptr && this->gameTypeLevel2_ == nullptr && this->gameTypeLevel3_ == nullptr && this->gameVersionId_ == nullptr
        && this->gmtModified_ == nullptr && this->icon_ == nullptr && this->introduction_ == nullptr && this->miniProgramCode_ == nullptr && this->miniProgramId_ == nullptr
        && this->miniProgramName_ == nullptr && this->slogan_ == nullptr && this->userProfileData_ == nullptr && this->version_ == nullptr; };
      // gameEngine Field Functions 
      bool hasGameEngine() const { return this->gameEngine_ != nullptr;};
      void deleteGameEngine() { this->gameEngine_ = nullptr;};
      inline string getGameEngine() const { DARABONBA_PTR_GET_DEFAULT(gameEngine_, "") };
      inline Content& setGameEngine(string gameEngine) { DARABONBA_PTR_SET_VALUE(gameEngine_, gameEngine) };


      // gameMaker Field Functions 
      bool hasGameMaker() const { return this->gameMaker_ != nullptr;};
      void deleteGameMaker() { this->gameMaker_ = nullptr;};
      inline string getGameMaker() const { DARABONBA_PTR_GET_DEFAULT(gameMaker_, "") };
      inline Content& setGameMaker(string gameMaker) { DARABONBA_PTR_SET_VALUE(gameMaker_, gameMaker) };


      // gameTypeLevel1 Field Functions 
      bool hasGameTypeLevel1() const { return this->gameTypeLevel1_ != nullptr;};
      void deleteGameTypeLevel1() { this->gameTypeLevel1_ = nullptr;};
      inline string getGameTypeLevel1() const { DARABONBA_PTR_GET_DEFAULT(gameTypeLevel1_, "") };
      inline Content& setGameTypeLevel1(string gameTypeLevel1) { DARABONBA_PTR_SET_VALUE(gameTypeLevel1_, gameTypeLevel1) };


      // gameTypeLevel2 Field Functions 
      bool hasGameTypeLevel2() const { return this->gameTypeLevel2_ != nullptr;};
      void deleteGameTypeLevel2() { this->gameTypeLevel2_ = nullptr;};
      inline string getGameTypeLevel2() const { DARABONBA_PTR_GET_DEFAULT(gameTypeLevel2_, "") };
      inline Content& setGameTypeLevel2(string gameTypeLevel2) { DARABONBA_PTR_SET_VALUE(gameTypeLevel2_, gameTypeLevel2) };


      // gameTypeLevel3 Field Functions 
      bool hasGameTypeLevel3() const { return this->gameTypeLevel3_ != nullptr;};
      void deleteGameTypeLevel3() { this->gameTypeLevel3_ = nullptr;};
      inline string getGameTypeLevel3() const { DARABONBA_PTR_GET_DEFAULT(gameTypeLevel3_, "") };
      inline Content& setGameTypeLevel3(string gameTypeLevel3) { DARABONBA_PTR_SET_VALUE(gameTypeLevel3_, gameTypeLevel3) };


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


      // icon Field Functions 
      bool hasIcon() const { return this->icon_ != nullptr;};
      void deleteIcon() { this->icon_ = nullptr;};
      inline string getIcon() const { DARABONBA_PTR_GET_DEFAULT(icon_, "") };
      inline Content& setIcon(string icon) { DARABONBA_PTR_SET_VALUE(icon_, icon) };


      // introduction Field Functions 
      bool hasIntroduction() const { return this->introduction_ != nullptr;};
      void deleteIntroduction() { this->introduction_ = nullptr;};
      inline string getIntroduction() const { DARABONBA_PTR_GET_DEFAULT(introduction_, "") };
      inline Content& setIntroduction(string introduction) { DARABONBA_PTR_SET_VALUE(introduction_, introduction) };


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


      // miniProgramName Field Functions 
      bool hasMiniProgramName() const { return this->miniProgramName_ != nullptr;};
      void deleteMiniProgramName() { this->miniProgramName_ = nullptr;};
      inline string getMiniProgramName() const { DARABONBA_PTR_GET_DEFAULT(miniProgramName_, "") };
      inline Content& setMiniProgramName(string miniProgramName) { DARABONBA_PTR_SET_VALUE(miniProgramName_, miniProgramName) };


      // slogan Field Functions 
      bool hasSlogan() const { return this->slogan_ != nullptr;};
      void deleteSlogan() { this->slogan_ = nullptr;};
      inline string getSlogan() const { DARABONBA_PTR_GET_DEFAULT(slogan_, "") };
      inline Content& setSlogan(string slogan) { DARABONBA_PTR_SET_VALUE(slogan_, slogan) };


      // userProfileData Field Functions 
      bool hasUserProfileData() const { return this->userProfileData_ != nullptr;};
      void deleteUserProfileData() { this->userProfileData_ = nullptr;};
      inline const Content::UserProfileData & getUserProfileData() const { DARABONBA_PTR_GET_CONST(userProfileData_, Content::UserProfileData) };
      inline Content::UserProfileData getUserProfileData() { DARABONBA_PTR_GET(userProfileData_, Content::UserProfileData) };
      inline Content& setUserProfileData(const Content::UserProfileData & userProfileData) { DARABONBA_PTR_SET_VALUE(userProfileData_, userProfileData) };
      inline Content& setUserProfileData(Content::UserProfileData && userProfileData) { DARABONBA_PTR_SET_RVALUE(userProfileData_, userProfileData) };


      // version Field Functions 
      bool hasVersion() const { return this->version_ != nullptr;};
      void deleteVersion() { this->version_ = nullptr;};
      inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
      inline Content& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    protected:
      shared_ptr<string> gameEngine_ {};
      shared_ptr<string> gameMaker_ {};
      shared_ptr<string> gameTypeLevel1_ {};
      shared_ptr<string> gameTypeLevel2_ {};
      shared_ptr<string> gameTypeLevel3_ {};
      shared_ptr<string> gameVersionId_ {};
      shared_ptr<int64_t> gmtModified_ {};
      shared_ptr<string> icon_ {};
      shared_ptr<string> introduction_ {};
      shared_ptr<string> miniProgramCode_ {};
      shared_ptr<int64_t> miniProgramId_ {};
      shared_ptr<string> miniProgramName_ {};
      shared_ptr<string> slogan_ {};
      shared_ptr<Content::UserProfileData> userProfileData_ {};
      shared_ptr<string> version_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->content_ == nullptr && this->errorCode_ == nullptr && this->requestId_ == nullptr && this->resultMsg_ == nullptr && this->success_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline QueryMiniGameInfoByAppResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline const vector<QueryMiniGameInfoByAppResponseBody::Content> & getContent() const { DARABONBA_PTR_GET_CONST(content_, vector<QueryMiniGameInfoByAppResponseBody::Content>) };
    inline vector<QueryMiniGameInfoByAppResponseBody::Content> getContent() { DARABONBA_PTR_GET(content_, vector<QueryMiniGameInfoByAppResponseBody::Content>) };
    inline QueryMiniGameInfoByAppResponseBody& setContent(const vector<QueryMiniGameInfoByAppResponseBody::Content> & content) { DARABONBA_PTR_SET_VALUE(content_, content) };
    inline QueryMiniGameInfoByAppResponseBody& setContent(vector<QueryMiniGameInfoByAppResponseBody::Content> && content) { DARABONBA_PTR_SET_RVALUE(content_, content) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline QueryMiniGameInfoByAppResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryMiniGameInfoByAppResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultMsg Field Functions 
    bool hasResultMsg() const { return this->resultMsg_ != nullptr;};
    void deleteResultMsg() { this->resultMsg_ = nullptr;};
    inline string getResultMsg() const { DARABONBA_PTR_GET_DEFAULT(resultMsg_, "") };
    inline QueryMiniGameInfoByAppResponseBody& setResultMsg(string resultMsg) { DARABONBA_PTR_SET_VALUE(resultMsg_, resultMsg) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QueryMiniGameInfoByAppResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> accessDeniedDetail_ {};
    shared_ptr<vector<QueryMiniGameInfoByAppResponseBody::Content>> content_ {};
    shared_ptr<string> errorCode_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> resultMsg_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif
