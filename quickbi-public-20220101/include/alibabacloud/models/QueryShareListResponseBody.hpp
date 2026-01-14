// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYSHARELISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYSHARELISTRESPONSEBODY_HPP_
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
  class QueryShareListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryShareListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, QueryShareListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    QueryShareListResponseBody() = default ;
    QueryShareListResponseBody(const QueryShareListResponseBody &) = default ;
    QueryShareListResponseBody(QueryShareListResponseBody &&) = default ;
    QueryShareListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryShareListResponseBody() = default ;
    QueryShareListResponseBody& operator=(const QueryShareListResponseBody &) = default ;
    QueryShareListResponseBody& operator=(QueryShareListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(AuthPoint, authPoint_);
        DARABONBA_PTR_TO_JSON(ExpireDate, expireDate_);
        DARABONBA_PTR_TO_JSON(ReportId, reportId_);
        DARABONBA_PTR_TO_JSON(ShareId, shareId_);
        DARABONBA_PTR_TO_JSON(ShareToId, shareToId_);
        DARABONBA_PTR_TO_JSON(ShareToName, shareToName_);
        DARABONBA_PTR_TO_JSON(ShareToType, shareToType_);
        DARABONBA_PTR_TO_JSON(ShareType, shareType_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(AuthPoint, authPoint_);
        DARABONBA_PTR_FROM_JSON(ExpireDate, expireDate_);
        DARABONBA_PTR_FROM_JSON(ReportId, reportId_);
        DARABONBA_PTR_FROM_JSON(ShareId, shareId_);
        DARABONBA_PTR_FROM_JSON(ShareToId, shareToId_);
        DARABONBA_PTR_FROM_JSON(ShareToName, shareToName_);
        DARABONBA_PTR_FROM_JSON(ShareToType, shareToType_);
        DARABONBA_PTR_FROM_JSON(ShareType, shareType_);
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
      virtual bool empty() const override { return this->authPoint_ == nullptr
        && this->expireDate_ == nullptr && this->reportId_ == nullptr && this->shareId_ == nullptr && this->shareToId_ == nullptr && this->shareToName_ == nullptr
        && this->shareToType_ == nullptr && this->shareType_ == nullptr; };
      // authPoint Field Functions 
      bool hasAuthPoint() const { return this->authPoint_ != nullptr;};
      void deleteAuthPoint() { this->authPoint_ = nullptr;};
      inline int32_t getAuthPoint() const { DARABONBA_PTR_GET_DEFAULT(authPoint_, 0) };
      inline Result& setAuthPoint(int32_t authPoint) { DARABONBA_PTR_SET_VALUE(authPoint_, authPoint) };


      // expireDate Field Functions 
      bool hasExpireDate() const { return this->expireDate_ != nullptr;};
      void deleteExpireDate() { this->expireDate_ = nullptr;};
      inline int64_t getExpireDate() const { DARABONBA_PTR_GET_DEFAULT(expireDate_, 0L) };
      inline Result& setExpireDate(int64_t expireDate) { DARABONBA_PTR_SET_VALUE(expireDate_, expireDate) };


      // reportId Field Functions 
      bool hasReportId() const { return this->reportId_ != nullptr;};
      void deleteReportId() { this->reportId_ = nullptr;};
      inline string getReportId() const { DARABONBA_PTR_GET_DEFAULT(reportId_, "") };
      inline Result& setReportId(string reportId) { DARABONBA_PTR_SET_VALUE(reportId_, reportId) };


      // shareId Field Functions 
      bool hasShareId() const { return this->shareId_ != nullptr;};
      void deleteShareId() { this->shareId_ = nullptr;};
      inline string getShareId() const { DARABONBA_PTR_GET_DEFAULT(shareId_, "") };
      inline Result& setShareId(string shareId) { DARABONBA_PTR_SET_VALUE(shareId_, shareId) };


      // shareToId Field Functions 
      bool hasShareToId() const { return this->shareToId_ != nullptr;};
      void deleteShareToId() { this->shareToId_ = nullptr;};
      inline string getShareToId() const { DARABONBA_PTR_GET_DEFAULT(shareToId_, "") };
      inline Result& setShareToId(string shareToId) { DARABONBA_PTR_SET_VALUE(shareToId_, shareToId) };


      // shareToName Field Functions 
      bool hasShareToName() const { return this->shareToName_ != nullptr;};
      void deleteShareToName() { this->shareToName_ = nullptr;};
      inline string getShareToName() const { DARABONBA_PTR_GET_DEFAULT(shareToName_, "") };
      inline Result& setShareToName(string shareToName) { DARABONBA_PTR_SET_VALUE(shareToName_, shareToName) };


      // shareToType Field Functions 
      bool hasShareToType() const { return this->shareToType_ != nullptr;};
      void deleteShareToType() { this->shareToType_ = nullptr;};
      inline int32_t getShareToType() const { DARABONBA_PTR_GET_DEFAULT(shareToType_, 0) };
      inline Result& setShareToType(int32_t shareToType) { DARABONBA_PTR_SET_VALUE(shareToType_, shareToType) };


      // shareType Field Functions 
      bool hasShareType() const { return this->shareType_ != nullptr;};
      void deleteShareType() { this->shareType_ = nullptr;};
      inline string getShareType() const { DARABONBA_PTR_GET_DEFAULT(shareType_, "") };
      inline Result& setShareType(string shareType) { DARABONBA_PTR_SET_VALUE(shareType_, shareType) };


    protected:
      // Sharing permissions. Possible values:
      // 
      // - 1: View only
      // - 3: View and export
      shared_ptr<int32_t> authPoint_ {};
      // The timestamp in milliseconds indicating the expiration time of the authorization.
      shared_ptr<int64_t> expireDate_ {};
      // The ID of the work.
      shared_ptr<string> reportId_ {};
      // The ID of the sharing configuration.
      shared_ptr<string> shareId_ {};
      // The ID of the sharing target, which could be a user ID or a group ID in Quick BI.
      // 
      // - When ShareToType=2 (all members within an organization), ShareToId is the organization ID.
      shared_ptr<string> shareToId_ {};
      // The name of the sharing target.
      shared_ptr<string> shareToName_ {};
      // The type of sharing. Possible values:
      // 
      // - 0: User
      // - 1: Group
      // - 2: Organization
      // - 3: Space
      shared_ptr<int32_t> shareToType_ {};
      // The type of the shared work. The value range includes: 
      // - dataProduct: Data Portal 
      // - dashboard: Dashboard 
      // - report: Spreadsheet 
      // - dashboardOfflineQuery: Self-service Data Extraction 
      // - ANALYSIS: Ad-hoc Analysis 
      // - DATAFORM: Data Entry 
      // - SCREEN: Data Visualization Screen
      shared_ptr<string> shareType_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->result_ == nullptr && this->success_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryShareListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const vector<QueryShareListResponseBody::Result> & getResult() const { DARABONBA_PTR_GET_CONST(result_, vector<QueryShareListResponseBody::Result>) };
    inline vector<QueryShareListResponseBody::Result> getResult() { DARABONBA_PTR_GET(result_, vector<QueryShareListResponseBody::Result>) };
    inline QueryShareListResponseBody& setResult(const vector<QueryShareListResponseBody::Result> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline QueryShareListResponseBody& setResult(vector<QueryShareListResponseBody::Result> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QueryShareListResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Returns the list of objects to which the work has been shared.
    shared_ptr<vector<QueryShareListResponseBody::Result>> result_ {};
    // Indicates whether the request was successful. Possible values:
    // 
    // - true: The request was successful.
    // - false: The request failed.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
