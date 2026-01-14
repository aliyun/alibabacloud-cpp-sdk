// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYDASHBOARDNL2SQLRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYDASHBOARDNL2SQLRESPONSEBODY_HPP_
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
  class QueryDashboardNl2sqlResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryDashboardNl2sqlResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, QueryDashboardNl2sqlResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    QueryDashboardNl2sqlResponseBody() = default ;
    QueryDashboardNl2sqlResponseBody(const QueryDashboardNl2sqlResponseBody &) = default ;
    QueryDashboardNl2sqlResponseBody(QueryDashboardNl2sqlResponseBody &&) = default ;
    QueryDashboardNl2sqlResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryDashboardNl2sqlResponseBody() = default ;
    QueryDashboardNl2sqlResponseBody& operator=(const QueryDashboardNl2sqlResponseBody &) = default ;
    QueryDashboardNl2sqlResponseBody& operator=(QueryDashboardNl2sqlResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(Authorities, authorities_);
        DARABONBA_PTR_TO_JSON(DashboardName, dashboardName_);
        DARABONBA_PTR_TO_JSON(DashboardNl2sqlId, dashboardNl2sqlId_);
        DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(Authorities, authorities_);
        DARABONBA_PTR_FROM_JSON(DashboardName, dashboardName_);
        DARABONBA_PTR_FROM_JSON(DashboardNl2sqlId, dashboardNl2sqlId_);
        DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
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
        && this->dashboardName_ == nullptr && this->dashboardNl2sqlId_ == nullptr && this->ownerId_ == nullptr; };
      // authorities Field Functions 
      bool hasAuthorities() const { return this->authorities_ != nullptr;};
      void deleteAuthorities() { this->authorities_ = nullptr;};
      inline const vector<string> & getAuthorities() const { DARABONBA_PTR_GET_CONST(authorities_, vector<string>) };
      inline vector<string> getAuthorities() { DARABONBA_PTR_GET(authorities_, vector<string>) };
      inline Result& setAuthorities(const vector<string> & authorities) { DARABONBA_PTR_SET_VALUE(authorities_, authorities) };
      inline Result& setAuthorities(vector<string> && authorities) { DARABONBA_PTR_SET_RVALUE(authorities_, authorities) };


      // dashboardName Field Functions 
      bool hasDashboardName() const { return this->dashboardName_ != nullptr;};
      void deleteDashboardName() { this->dashboardName_ = nullptr;};
      inline string getDashboardName() const { DARABONBA_PTR_GET_DEFAULT(dashboardName_, "") };
      inline Result& setDashboardName(string dashboardName) { DARABONBA_PTR_SET_VALUE(dashboardName_, dashboardName) };


      // dashboardNl2sqlId Field Functions 
      bool hasDashboardNl2sqlId() const { return this->dashboardNl2sqlId_ != nullptr;};
      void deleteDashboardNl2sqlId() { this->dashboardNl2sqlId_ = nullptr;};
      inline string getDashboardNl2sqlId() const { DARABONBA_PTR_GET_DEFAULT(dashboardNl2sqlId_, "") };
      inline Result& setDashboardNl2sqlId(string dashboardNl2sqlId) { DARABONBA_PTR_SET_VALUE(dashboardNl2sqlId_, dashboardNl2sqlId) };


      // ownerId Field Functions 
      bool hasOwnerId() const { return this->ownerId_ != nullptr;};
      void deleteOwnerId() { this->ownerId_ = nullptr;};
      inline string getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, "") };
      inline Result& setOwnerId(string ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    protected:
      // If this parameter has a value and includes "READ", it indicates that the user has read permission for the dashboard question resource.
      shared_ptr<vector<string>> authorities_ {};
      // Dashboard name
      shared_ptr<string> dashboardName_ {};
      // Dashboard question resource ID
      shared_ptr<string> dashboardNl2sqlId_ {};
      // UserID of the dashboard creator
      shared_ptr<string> ownerId_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->result_ == nullptr && this->success_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryDashboardNl2sqlResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const vector<QueryDashboardNl2sqlResponseBody::Result> & getResult() const { DARABONBA_PTR_GET_CONST(result_, vector<QueryDashboardNl2sqlResponseBody::Result>) };
    inline vector<QueryDashboardNl2sqlResponseBody::Result> getResult() { DARABONBA_PTR_GET(result_, vector<QueryDashboardNl2sqlResponseBody::Result>) };
    inline QueryDashboardNl2sqlResponseBody& setResult(const vector<QueryDashboardNl2sqlResponseBody::Result> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline QueryDashboardNl2sqlResponseBody& setResult(vector<QueryDashboardNl2sqlResponseBody::Result> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QueryDashboardNl2sqlResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // Request ID.
    shared_ptr<string> requestId_ {};
    // Result of the API execution. Possible values:
    // 
    // - true: Request succeeded
    // - false: Request failed
    shared_ptr<vector<QueryDashboardNl2sqlResponseBody::Result>> result_ {};
    // Indicates whether the request was successful. Possible values: 
    // 
    // - true: Request succeeded
    // - false: Request failed
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
