// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDAUTHRESOURCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDAUTHRESOURCEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class AddAuthResourceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddAuthResourceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_TO_JSON(AuthId, authId_);
      DARABONBA_PTR_TO_JSON(AuthResourceHeaderList, authResourceHeaderList_);
      DARABONBA_PTR_TO_JSON(DomainId, domainId_);
      DARABONBA_PTR_TO_JSON(GatewayUniqueId, gatewayUniqueId_);
      DARABONBA_PTR_TO_JSON(IgnoreCase, ignoreCase_);
      DARABONBA_PTR_TO_JSON(MatchType, matchType_);
      DARABONBA_PTR_TO_JSON(Path, path_);
    };
    friend void from_json(const Darabonba::Json& j, AddAuthResourceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_FROM_JSON(AuthId, authId_);
      DARABONBA_PTR_FROM_JSON(AuthResourceHeaderList, authResourceHeaderList_);
      DARABONBA_PTR_FROM_JSON(DomainId, domainId_);
      DARABONBA_PTR_FROM_JSON(GatewayUniqueId, gatewayUniqueId_);
      DARABONBA_PTR_FROM_JSON(IgnoreCase, ignoreCase_);
      DARABONBA_PTR_FROM_JSON(MatchType, matchType_);
      DARABONBA_PTR_FROM_JSON(Path, path_);
    };
    AddAuthResourceRequest() = default ;
    AddAuthResourceRequest(const AddAuthResourceRequest &) = default ;
    AddAuthResourceRequest(AddAuthResourceRequest &&) = default ;
    AddAuthResourceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddAuthResourceRequest() = default ;
    AddAuthResourceRequest& operator=(const AddAuthResourceRequest &) = default ;
    AddAuthResourceRequest& operator=(AddAuthResourceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AuthResourceHeaderList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AuthResourceHeaderList& obj) { 
        DARABONBA_PTR_TO_JSON(HeaderKey, headerKey_);
        DARABONBA_PTR_TO_JSON(HeaderMethod, headerMethod_);
        DARABONBA_PTR_TO_JSON(HeaderValue, headerValue_);
      };
      friend void from_json(const Darabonba::Json& j, AuthResourceHeaderList& obj) { 
        DARABONBA_PTR_FROM_JSON(HeaderKey, headerKey_);
        DARABONBA_PTR_FROM_JSON(HeaderMethod, headerMethod_);
        DARABONBA_PTR_FROM_JSON(HeaderValue, headerValue_);
      };
      AuthResourceHeaderList() = default ;
      AuthResourceHeaderList(const AuthResourceHeaderList &) = default ;
      AuthResourceHeaderList(AuthResourceHeaderList &&) = default ;
      AuthResourceHeaderList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AuthResourceHeaderList() = default ;
      AuthResourceHeaderList& operator=(const AuthResourceHeaderList &) = default ;
      AuthResourceHeaderList& operator=(AuthResourceHeaderList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->headerKey_ == nullptr
        && this->headerMethod_ == nullptr && this->headerValue_ == nullptr; };
      // headerKey Field Functions 
      bool hasHeaderKey() const { return this->headerKey_ != nullptr;};
      void deleteHeaderKey() { this->headerKey_ = nullptr;};
      inline string getHeaderKey() const { DARABONBA_PTR_GET_DEFAULT(headerKey_, "") };
      inline AuthResourceHeaderList& setHeaderKey(string headerKey) { DARABONBA_PTR_SET_VALUE(headerKey_, headerKey) };


      // headerMethod Field Functions 
      bool hasHeaderMethod() const { return this->headerMethod_ != nullptr;};
      void deleteHeaderMethod() { this->headerMethod_ = nullptr;};
      inline string getHeaderMethod() const { DARABONBA_PTR_GET_DEFAULT(headerMethod_, "") };
      inline AuthResourceHeaderList& setHeaderMethod(string headerMethod) { DARABONBA_PTR_SET_VALUE(headerMethod_, headerMethod) };


      // headerValue Field Functions 
      bool hasHeaderValue() const { return this->headerValue_ != nullptr;};
      void deleteHeaderValue() { this->headerValue_ = nullptr;};
      inline string getHeaderValue() const { DARABONBA_PTR_GET_DEFAULT(headerValue_, "") };
      inline AuthResourceHeaderList& setHeaderValue(string headerValue) { DARABONBA_PTR_SET_VALUE(headerValue_, headerValue) };


    protected:
      // The parameter of the HTTP header.
      shared_ptr<string> headerKey_ {};
      // The header matching mode.
      // 
      // Valid values:
      // 
      // *   SUFFIX
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      // 
      // *   EXIST
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      // 
      // *   PREFIX
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      // 
      // *   EQUAL
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      // 
      // *   EXCLUDE
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      // 
      // *   NOT_EQUAL
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      // 
      // *   NOT_EXIST
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      // 
      // *   REGREX
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      // 
      // *   INCLUDE
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      shared_ptr<string> headerMethod_ {};
      // The parameter value of the HTTP header.
      shared_ptr<string> headerValue_ {};
    };

    virtual bool empty() const override { return this->acceptLanguage_ == nullptr
        && this->authId_ == nullptr && this->authResourceHeaderList_ == nullptr && this->domainId_ == nullptr && this->gatewayUniqueId_ == nullptr && this->ignoreCase_ == nullptr
        && this->matchType_ == nullptr && this->path_ == nullptr; };
    // acceptLanguage Field Functions 
    bool hasAcceptLanguage() const { return this->acceptLanguage_ != nullptr;};
    void deleteAcceptLanguage() { this->acceptLanguage_ = nullptr;};
    inline string getAcceptLanguage() const { DARABONBA_PTR_GET_DEFAULT(acceptLanguage_, "") };
    inline AddAuthResourceRequest& setAcceptLanguage(string acceptLanguage) { DARABONBA_PTR_SET_VALUE(acceptLanguage_, acceptLanguage) };


    // authId Field Functions 
    bool hasAuthId() const { return this->authId_ != nullptr;};
    void deleteAuthId() { this->authId_ = nullptr;};
    inline int64_t getAuthId() const { DARABONBA_PTR_GET_DEFAULT(authId_, 0L) };
    inline AddAuthResourceRequest& setAuthId(int64_t authId) { DARABONBA_PTR_SET_VALUE(authId_, authId) };


    // authResourceHeaderList Field Functions 
    bool hasAuthResourceHeaderList() const { return this->authResourceHeaderList_ != nullptr;};
    void deleteAuthResourceHeaderList() { this->authResourceHeaderList_ = nullptr;};
    inline const vector<AddAuthResourceRequest::AuthResourceHeaderList> & getAuthResourceHeaderList() const { DARABONBA_PTR_GET_CONST(authResourceHeaderList_, vector<AddAuthResourceRequest::AuthResourceHeaderList>) };
    inline vector<AddAuthResourceRequest::AuthResourceHeaderList> getAuthResourceHeaderList() { DARABONBA_PTR_GET(authResourceHeaderList_, vector<AddAuthResourceRequest::AuthResourceHeaderList>) };
    inline AddAuthResourceRequest& setAuthResourceHeaderList(const vector<AddAuthResourceRequest::AuthResourceHeaderList> & authResourceHeaderList) { DARABONBA_PTR_SET_VALUE(authResourceHeaderList_, authResourceHeaderList) };
    inline AddAuthResourceRequest& setAuthResourceHeaderList(vector<AddAuthResourceRequest::AuthResourceHeaderList> && authResourceHeaderList) { DARABONBA_PTR_SET_RVALUE(authResourceHeaderList_, authResourceHeaderList) };


    // domainId Field Functions 
    bool hasDomainId() const { return this->domainId_ != nullptr;};
    void deleteDomainId() { this->domainId_ = nullptr;};
    inline int64_t getDomainId() const { DARABONBA_PTR_GET_DEFAULT(domainId_, 0L) };
    inline AddAuthResourceRequest& setDomainId(int64_t domainId) { DARABONBA_PTR_SET_VALUE(domainId_, domainId) };


    // gatewayUniqueId Field Functions 
    bool hasGatewayUniqueId() const { return this->gatewayUniqueId_ != nullptr;};
    void deleteGatewayUniqueId() { this->gatewayUniqueId_ = nullptr;};
    inline string getGatewayUniqueId() const { DARABONBA_PTR_GET_DEFAULT(gatewayUniqueId_, "") };
    inline AddAuthResourceRequest& setGatewayUniqueId(string gatewayUniqueId) { DARABONBA_PTR_SET_VALUE(gatewayUniqueId_, gatewayUniqueId) };


    // ignoreCase Field Functions 
    bool hasIgnoreCase() const { return this->ignoreCase_ != nullptr;};
    void deleteIgnoreCase() { this->ignoreCase_ = nullptr;};
    inline bool getIgnoreCase() const { DARABONBA_PTR_GET_DEFAULT(ignoreCase_, false) };
    inline AddAuthResourceRequest& setIgnoreCase(bool ignoreCase) { DARABONBA_PTR_SET_VALUE(ignoreCase_, ignoreCase) };


    // matchType Field Functions 
    bool hasMatchType() const { return this->matchType_ != nullptr;};
    void deleteMatchType() { this->matchType_ = nullptr;};
    inline string getMatchType() const { DARABONBA_PTR_GET_DEFAULT(matchType_, "") };
    inline AddAuthResourceRequest& setMatchType(string matchType) { DARABONBA_PTR_SET_VALUE(matchType_, matchType) };


    // path Field Functions 
    bool hasPath() const { return this->path_ != nullptr;};
    void deletePath() { this->path_ = nullptr;};
    inline string getPath() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
    inline AddAuthResourceRequest& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


  protected:
    // The language of the response. Valid values:
    // 
    // *   zh: Chinese
    // *   en: English
    shared_ptr<string> acceptLanguage_ {};
    // The ID of the authorization record.
    shared_ptr<int64_t> authId_ {};
    // The authentication resource headers.
    shared_ptr<vector<AddAuthResourceRequest::AuthResourceHeaderList>> authResourceHeaderList_ {};
    // The domain ID.
    shared_ptr<int64_t> domainId_ {};
    // The unique ID of the gateway.
    shared_ptr<string> gatewayUniqueId_ {};
    // Specifies whether the matching is not case-sensitive. Default value: true.
    shared_ptr<bool> ignoreCase_ {};
    // The matching type. Valid values:
    // 
    // *   EQUAL
    // *   PRE
    // *   ERGULAR
    shared_ptr<string> matchType_ {};
    // The path.
    shared_ptr<string> path_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
