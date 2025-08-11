// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYSHARELISTRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_QUERYSHARELISTRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class QueryShareListResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryShareListResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(AuthPoint, authPoint_);
      DARABONBA_PTR_TO_JSON(ExpireDate, expireDate_);
      DARABONBA_PTR_TO_JSON(ReportId, reportId_);
      DARABONBA_PTR_TO_JSON(ShareId, shareId_);
      DARABONBA_PTR_TO_JSON(ShareToId, shareToId_);
      DARABONBA_PTR_TO_JSON(ShareToName, shareToName_);
      DARABONBA_PTR_TO_JSON(ShareToType, shareToType_);
      DARABONBA_PTR_TO_JSON(ShareType, shareType_);
    };
    friend void from_json(const Darabonba::Json& j, QueryShareListResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthPoint, authPoint_);
      DARABONBA_PTR_FROM_JSON(ExpireDate, expireDate_);
      DARABONBA_PTR_FROM_JSON(ReportId, reportId_);
      DARABONBA_PTR_FROM_JSON(ShareId, shareId_);
      DARABONBA_PTR_FROM_JSON(ShareToId, shareToId_);
      DARABONBA_PTR_FROM_JSON(ShareToName, shareToName_);
      DARABONBA_PTR_FROM_JSON(ShareToType, shareToType_);
      DARABONBA_PTR_FROM_JSON(ShareType, shareType_);
    };
    QueryShareListResponseBodyResult() = default ;
    QueryShareListResponseBodyResult(const QueryShareListResponseBodyResult &) = default ;
    QueryShareListResponseBodyResult(QueryShareListResponseBodyResult &&) = default ;
    QueryShareListResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryShareListResponseBodyResult() = default ;
    QueryShareListResponseBodyResult& operator=(const QueryShareListResponseBodyResult &) = default ;
    QueryShareListResponseBodyResult& operator=(QueryShareListResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->authPoint_ != nullptr
        && this->expireDate_ != nullptr && this->reportId_ != nullptr && this->shareId_ != nullptr && this->shareToId_ != nullptr && this->shareToName_ != nullptr
        && this->shareToType_ != nullptr && this->shareType_ != nullptr; };
    // authPoint Field Functions 
    bool hasAuthPoint() const { return this->authPoint_ != nullptr;};
    void deleteAuthPoint() { this->authPoint_ = nullptr;};
    inline int32_t authPoint() const { DARABONBA_PTR_GET_DEFAULT(authPoint_, 0) };
    inline QueryShareListResponseBodyResult& setAuthPoint(int32_t authPoint) { DARABONBA_PTR_SET_VALUE(authPoint_, authPoint) };


    // expireDate Field Functions 
    bool hasExpireDate() const { return this->expireDate_ != nullptr;};
    void deleteExpireDate() { this->expireDate_ = nullptr;};
    inline int64_t expireDate() const { DARABONBA_PTR_GET_DEFAULT(expireDate_, 0L) };
    inline QueryShareListResponseBodyResult& setExpireDate(int64_t expireDate) { DARABONBA_PTR_SET_VALUE(expireDate_, expireDate) };


    // reportId Field Functions 
    bool hasReportId() const { return this->reportId_ != nullptr;};
    void deleteReportId() { this->reportId_ = nullptr;};
    inline string reportId() const { DARABONBA_PTR_GET_DEFAULT(reportId_, "") };
    inline QueryShareListResponseBodyResult& setReportId(string reportId) { DARABONBA_PTR_SET_VALUE(reportId_, reportId) };


    // shareId Field Functions 
    bool hasShareId() const { return this->shareId_ != nullptr;};
    void deleteShareId() { this->shareId_ = nullptr;};
    inline string shareId() const { DARABONBA_PTR_GET_DEFAULT(shareId_, "") };
    inline QueryShareListResponseBodyResult& setShareId(string shareId) { DARABONBA_PTR_SET_VALUE(shareId_, shareId) };


    // shareToId Field Functions 
    bool hasShareToId() const { return this->shareToId_ != nullptr;};
    void deleteShareToId() { this->shareToId_ = nullptr;};
    inline string shareToId() const { DARABONBA_PTR_GET_DEFAULT(shareToId_, "") };
    inline QueryShareListResponseBodyResult& setShareToId(string shareToId) { DARABONBA_PTR_SET_VALUE(shareToId_, shareToId) };


    // shareToName Field Functions 
    bool hasShareToName() const { return this->shareToName_ != nullptr;};
    void deleteShareToName() { this->shareToName_ = nullptr;};
    inline string shareToName() const { DARABONBA_PTR_GET_DEFAULT(shareToName_, "") };
    inline QueryShareListResponseBodyResult& setShareToName(string shareToName) { DARABONBA_PTR_SET_VALUE(shareToName_, shareToName) };


    // shareToType Field Functions 
    bool hasShareToType() const { return this->shareToType_ != nullptr;};
    void deleteShareToType() { this->shareToType_ = nullptr;};
    inline int32_t shareToType() const { DARABONBA_PTR_GET_DEFAULT(shareToType_, 0) };
    inline QueryShareListResponseBodyResult& setShareToType(int32_t shareToType) { DARABONBA_PTR_SET_VALUE(shareToType_, shareToType) };


    // shareType Field Functions 
    bool hasShareType() const { return this->shareType_ != nullptr;};
    void deleteShareType() { this->shareType_ = nullptr;};
    inline string shareType() const { DARABONBA_PTR_GET_DEFAULT(shareType_, "") };
    inline QueryShareListResponseBodyResult& setShareType(string shareType) { DARABONBA_PTR_SET_VALUE(shareType_, shareType) };


  protected:
    // Sharing permissions. Possible values:
    // 
    // - 1: View only
    // - 3: View and export
    std::shared_ptr<int32_t> authPoint_ = nullptr;
    // The timestamp in milliseconds indicating the expiration time of the authorization.
    std::shared_ptr<int64_t> expireDate_ = nullptr;
    // The ID of the work.
    std::shared_ptr<string> reportId_ = nullptr;
    // The ID of the sharing configuration.
    std::shared_ptr<string> shareId_ = nullptr;
    // The ID of the sharing target, which could be a user ID or a group ID in Quick BI.
    // 
    // - When ShareToType=2 (all members within an organization), ShareToId is the organization ID.
    std::shared_ptr<string> shareToId_ = nullptr;
    // The name of the sharing target.
    std::shared_ptr<string> shareToName_ = nullptr;
    // The type of sharing. Possible values:
    // 
    // - 0: User
    // - 1: Group
    // - 2: Organization
    // - 3: Space
    std::shared_ptr<int32_t> shareToType_ = nullptr;
    // The type of the shared work. The value range includes: 
    // - dataProduct: Data Portal 
    // - dashboard: Dashboard 
    // - report: Spreadsheet 
    // - dashboardOfflineQuery: Self-service Data Extraction 
    // - ANALYSIS: Ad-hoc Analysis 
    // - DATAFORM: Data Entry 
    // - SCREEN: Data Visualization Screen
    std::shared_ptr<string> shareType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
