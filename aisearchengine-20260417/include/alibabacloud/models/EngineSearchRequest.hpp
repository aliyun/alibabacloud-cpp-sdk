// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ENGINESEARCHREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ENGINESEARCHREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiSearchEngine20260417
{
namespace Models
{
  class EngineSearchRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EngineSearchRequest& obj) { 
      DARABONBA_PTR_TO_JSON(appId, appId_);
      DARABONBA_PTR_TO_JSON(grey, grey_);
      DARABONBA_PTR_TO_JSON(query, query_);
      DARABONBA_PTR_TO_JSON(sessionId, sessionId_);
      DARABONBA_PTR_TO_JSON(user, user_);
    };
    friend void from_json(const Darabonba::Json& j, EngineSearchRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(appId, appId_);
      DARABONBA_PTR_FROM_JSON(grey, grey_);
      DARABONBA_PTR_FROM_JSON(query, query_);
      DARABONBA_PTR_FROM_JSON(sessionId, sessionId_);
      DARABONBA_PTR_FROM_JSON(user, user_);
    };
    EngineSearchRequest() = default ;
    EngineSearchRequest(const EngineSearchRequest &) = default ;
    EngineSearchRequest(EngineSearchRequest &&) = default ;
    EngineSearchRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EngineSearchRequest() = default ;
    EngineSearchRequest& operator=(const EngineSearchRequest &) = default ;
    EngineSearchRequest& operator=(EngineSearchRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class User : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const User& obj) { 
        DARABONBA_PTR_TO_JSON(userId, userId_);
      };
      friend void from_json(const Darabonba::Json& j, User& obj) { 
        DARABONBA_PTR_FROM_JSON(userId, userId_);
      };
      User() = default ;
      User(const User &) = default ;
      User(User &&) = default ;
      User(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~User() = default ;
      User& operator=(const User &) = default ;
      User& operator=(User &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->userId_ == nullptr; };
      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
      inline User& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    protected:
      // The unique ID of the user.
      shared_ptr<string> userId_ {};
    };

    class Query : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Query& obj) { 
        DARABONBA_PTR_TO_JSON(excludeIds, excludeIds_);
        DARABONBA_PTR_TO_JSON(imageUrls, imageUrls_);
        DARABONBA_PTR_TO_JSON(pageNo, pageNo_);
        DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(texts, texts_);
      };
      friend void from_json(const Darabonba::Json& j, Query& obj) { 
        DARABONBA_PTR_FROM_JSON(excludeIds, excludeIds_);
        DARABONBA_PTR_FROM_JSON(imageUrls, imageUrls_);
        DARABONBA_PTR_FROM_JSON(pageNo, pageNo_);
        DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(texts, texts_);
      };
      Query() = default ;
      Query(const Query &) = default ;
      Query(Query &&) = default ;
      Query(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Query() = default ;
      Query& operator=(const Query &) = default ;
      Query& operator=(Query &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->excludeIds_ == nullptr
        && this->imageUrls_ == nullptr && this->pageNo_ == nullptr && this->pageSize_ == nullptr && this->texts_ == nullptr; };
      // excludeIds Field Functions 
      bool hasExcludeIds() const { return this->excludeIds_ != nullptr;};
      void deleteExcludeIds() { this->excludeIds_ = nullptr;};
      inline const vector<string> & getExcludeIds() const { DARABONBA_PTR_GET_CONST(excludeIds_, vector<string>) };
      inline vector<string> getExcludeIds() { DARABONBA_PTR_GET(excludeIds_, vector<string>) };
      inline Query& setExcludeIds(const vector<string> & excludeIds) { DARABONBA_PTR_SET_VALUE(excludeIds_, excludeIds) };
      inline Query& setExcludeIds(vector<string> && excludeIds) { DARABONBA_PTR_SET_RVALUE(excludeIds_, excludeIds) };


      // imageUrls Field Functions 
      bool hasImageUrls() const { return this->imageUrls_ != nullptr;};
      void deleteImageUrls() { this->imageUrls_ = nullptr;};
      inline const vector<string> & getImageUrls() const { DARABONBA_PTR_GET_CONST(imageUrls_, vector<string>) };
      inline vector<string> getImageUrls() { DARABONBA_PTR_GET(imageUrls_, vector<string>) };
      inline Query& setImageUrls(const vector<string> & imageUrls) { DARABONBA_PTR_SET_VALUE(imageUrls_, imageUrls) };
      inline Query& setImageUrls(vector<string> && imageUrls) { DARABONBA_PTR_SET_RVALUE(imageUrls_, imageUrls) };


      // pageNo Field Functions 
      bool hasPageNo() const { return this->pageNo_ != nullptr;};
      void deletePageNo() { this->pageNo_ = nullptr;};
      inline int32_t getPageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0) };
      inline Query& setPageNo(int32_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline Query& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // texts Field Functions 
      bool hasTexts() const { return this->texts_ != nullptr;};
      void deleteTexts() { this->texts_ = nullptr;};
      inline const vector<string> & getTexts() const { DARABONBA_PTR_GET_CONST(texts_, vector<string>) };
      inline vector<string> getTexts() { DARABONBA_PTR_GET(texts_, vector<string>) };
      inline Query& setTexts(const vector<string> & texts) { DARABONBA_PTR_SET_VALUE(texts_, texts) };
      inline Query& setTexts(vector<string> && texts) { DARABONBA_PTR_SET_RVALUE(texts_, texts) };


    protected:
      // The list of primary key IDs to exclude.<br>• Purpose: filters out previously viewed history records.
      shared_ptr<vector<string>> excludeIds_ {};
      // The image query list.<br>• Only one image URL is supported. The maximum size of a single image is 10 MB. Supported formats: JPG, PNG, WEBP, and JPEG.
      shared_ptr<vector<string>> imageUrls_ {};
      // The page number, starting from 1.<br>• Default value: `1`.
      shared_ptr<int32_t> pageNo_ {};
      // The number of results returned per page.
      shared_ptr<int32_t> pageSize_ {};
      // The text query list.<br>• Only one text string is supported. The maximum length is 256 characters.
      shared_ptr<vector<string>> texts_ {};
    };

    virtual bool empty() const override { return this->appId_ == nullptr
        && this->grey_ == nullptr && this->query_ == nullptr && this->sessionId_ == nullptr && this->user_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline EngineSearchRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // grey Field Functions 
    bool hasGrey() const { return this->grey_ != nullptr;};
    void deleteGrey() { this->grey_ = nullptr;};
    inline bool getGrey() const { DARABONBA_PTR_GET_DEFAULT(grey_, false) };
    inline EngineSearchRequest& setGrey(bool grey) { DARABONBA_PTR_SET_VALUE(grey_, grey) };


    // query Field Functions 
    bool hasQuery() const { return this->query_ != nullptr;};
    void deleteQuery() { this->query_ = nullptr;};
    inline const EngineSearchRequest::Query & getQuery() const { DARABONBA_PTR_GET_CONST(query_, EngineSearchRequest::Query) };
    inline EngineSearchRequest::Query getQuery() { DARABONBA_PTR_GET(query_, EngineSearchRequest::Query) };
    inline EngineSearchRequest& setQuery(const EngineSearchRequest::Query & query) { DARABONBA_PTR_SET_VALUE(query_, query) };
    inline EngineSearchRequest& setQuery(EngineSearchRequest::Query && query) { DARABONBA_PTR_SET_RVALUE(query_, query) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string getSessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline EngineSearchRequest& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    // user Field Functions 
    bool hasUser() const { return this->user_ != nullptr;};
    void deleteUser() { this->user_ = nullptr;};
    inline const EngineSearchRequest::User & getUser() const { DARABONBA_PTR_GET_CONST(user_, EngineSearchRequest::User) };
    inline EngineSearchRequest::User getUser() { DARABONBA_PTR_GET(user_, EngineSearchRequest::User) };
    inline EngineSearchRequest& setUser(const EngineSearchRequest::User & user) { DARABONBA_PTR_SET_VALUE(user_, user) };
    inline EngineSearchRequest& setUser(EngineSearchRequest::User && user) { DARABONBA_PTR_SET_RVALUE(user_, user) };


  protected:
    // The unique ID of the application.
    // 
    // This parameter is required.
    shared_ptr<string> appId_ {};
    // Specifies whether to access the draft version.
    shared_ptr<bool> grey_ {};
    // The query condition object.
    // 
    // This parameter is required.
    shared_ptr<EngineSearchRequest::Query> query_ {};
    // This parameter does not need to be specified.
    shared_ptr<string> sessionId_ {};
    // The user information object, used for subsequent user-perspective analysis.
    shared_ptr<EngineSearchRequest::User> user_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiSearchEngine20260417
#endif
