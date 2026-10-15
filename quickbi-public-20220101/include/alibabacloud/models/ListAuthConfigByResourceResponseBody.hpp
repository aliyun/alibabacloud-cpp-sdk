// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAUTHCONFIGBYRESOURCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAUTHCONFIGBYRESOURCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class ListAuthConfigByResourceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAuthConfigByResourceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListAuthConfigByResourceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListAuthConfigByResourceResponseBody() = default ;
    ListAuthConfigByResourceResponseBody(const ListAuthConfigByResourceResponseBody &) = default ;
    ListAuthConfigByResourceResponseBody(ListAuthConfigByResourceResponseBody &&) = default ;
    ListAuthConfigByResourceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAuthConfigByResourceResponseBody() = default ;
    ListAuthConfigByResourceResponseBody& operator=(const ListAuthConfigByResourceResponseBody &) = default ;
    ListAuthConfigByResourceResponseBody& operator=(ListAuthConfigByResourceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(Authorities, authorities_);
        DARABONBA_PTR_TO_JSON(AuthorizedId, authorizedId_);
        DARABONBA_PTR_TO_JSON(AuthorizedName, authorizedName_);
        DARABONBA_PTR_TO_JSON(ExpireDate, expireDate_);
        DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
        DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
        DARABONBA_PTR_TO_JSON(Scope, scope_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(Authorities, authorities_);
        DARABONBA_PTR_FROM_JSON(AuthorizedId, authorizedId_);
        DARABONBA_PTR_FROM_JSON(AuthorizedName, authorizedName_);
        DARABONBA_PTR_FROM_JSON(ExpireDate, expireDate_);
        DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
        DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
        DARABONBA_PTR_FROM_JSON(Scope, scope_);
      };
      Result() = default ;
      Result(const Result &) = default ;
      Result(Result &&) = default ;
      Result(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Result() = default ;
      Result& operator=(const Result &) = default ;
      Result& operator=(Result &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->authorities_ == nullptr
        && this->authorizedId_ == nullptr && this->authorizedName_ == nullptr && this->expireDate_ == nullptr && this->gmtCreate_ == nullptr && this->resourceId_ == nullptr
        && this->resourceType_ == nullptr && this->scope_ == nullptr; };
      // authorities Field Functions 
      bool hasAuthorities() const { return this->authorities_ != nullptr;};
      void deleteAuthorities() { this->authorities_ = nullptr;};
      inline const vector<string> & getAuthorities() const { DARABONBA_PTR_GET_CONST(authorities_, vector<string>) };
      inline vector<string> getAuthorities() { DARABONBA_PTR_GET(authorities_, vector<string>) };
      inline Result& setAuthorities(const vector<string> & authorities) { DARABONBA_PTR_SET_VALUE(authorities_, authorities) };
      inline Result& setAuthorities(vector<string> && authorities) { DARABONBA_PTR_SET_RVALUE(authorities_, authorities) };


      // authorizedId Field Functions 
      bool hasAuthorizedId() const { return this->authorizedId_ != nullptr;};
      void deleteAuthorizedId() { this->authorizedId_ = nullptr;};
      inline string getAuthorizedId() const { DARABONBA_PTR_GET_DEFAULT(authorizedId_, "") };
      inline Result& setAuthorizedId(string authorizedId) { DARABONBA_PTR_SET_VALUE(authorizedId_, authorizedId) };


      // authorizedName Field Functions 
      bool hasAuthorizedName() const { return this->authorizedName_ != nullptr;};
      void deleteAuthorizedName() { this->authorizedName_ = nullptr;};
      inline string getAuthorizedName() const { DARABONBA_PTR_GET_DEFAULT(authorizedName_, "") };
      inline Result& setAuthorizedName(string authorizedName) { DARABONBA_PTR_SET_VALUE(authorizedName_, authorizedName) };


      // expireDate Field Functions 
      bool hasExpireDate() const { return this->expireDate_ != nullptr;};
      void deleteExpireDate() { this->expireDate_ = nullptr;};
      inline string getExpireDate() const { DARABONBA_PTR_GET_DEFAULT(expireDate_, "") };
      inline Result& setExpireDate(string expireDate) { DARABONBA_PTR_SET_VALUE(expireDate_, expireDate) };


      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
      inline Result& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


      // resourceId Field Functions 
      bool hasResourceId() const { return this->resourceId_ != nullptr;};
      void deleteResourceId() { this->resourceId_ = nullptr;};
      inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
      inline Result& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


      // resourceType Field Functions 
      bool hasResourceType() const { return this->resourceType_ != nullptr;};
      void deleteResourceType() { this->resourceType_ = nullptr;};
      inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
      inline Result& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


      // scope Field Functions 
      bool hasScope() const { return this->scope_ != nullptr;};
      void deleteScope() { this->scope_ = nullptr;};
      inline int32_t getScope() const { DARABONBA_PTR_GET_DEFAULT(scope_, 0) };
      inline Result& setScope(int32_t scope) { DARABONBA_PTR_SET_VALUE(scope_, scope) };


    protected:
      // The array of permissions granted.
      shared_ptr<vector<string>> authorities_ {};
      // The ID of the authorized user.
      shared_ptr<string> authorizedId_ {};
      // The name of the authorized user.
      shared_ptr<string> authorizedName_ {};
      // The expiration time. This value is a UNIX timestamp in milliseconds.
      shared_ptr<string> expireDate_ {};
      // The time when the permission record was created, in the yyyy-MM-dd mm:hh:ss format.
      shared_ptr<string> gmtCreate_ {};
      // The resource ID.
      shared_ptr<string> resourceId_ {};
      // The resource type. Valid values:
      // 
      // - dashboard: dashboard
      // - screen: data screen
      // - report: electron
      // - ANALYSIS: ad hoc analysis
      // - dashboardOfflineQuery: self-service data retrieval
      // - dataForm: data form
      // - cube: dataset
      // - datasource: data source
      shared_ptr<string> resourceType_ {};
      // The authorization scope. Valid values:
      // 
      // - 0: user
      // - 1: user group
      // - 2: organization
      // - 3: workspace
      shared_ptr<int32_t> scope_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->result_ == nullptr && this->success_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAuthConfigByResourceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const vector<ListAuthConfigByResourceResponseBody::Result> & getResult() const { DARABONBA_PTR_GET_CONST(result_, vector<ListAuthConfigByResourceResponseBody::Result>) };
    inline vector<ListAuthConfigByResourceResponseBody::Result> getResult() { DARABONBA_PTR_GET(result_, vector<ListAuthConfigByResourceResponseBody::Result>) };
    inline ListAuthConfigByResourceResponseBody& setResult(const vector<ListAuthConfigByResourceResponseBody::Result> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline ListAuthConfigByResourceResponseBody& setResult(vector<ListAuthConfigByResourceResponseBody::Result> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListAuthConfigByResourceResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The collection of authorization details.
    shared_ptr<vector<ListAuthConfigByResourceResponseBody::Result>> result_ {};
    // Indicates whether the request was successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
