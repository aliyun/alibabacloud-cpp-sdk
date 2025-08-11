// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CANCELREPORTSHAREREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CANCELREPORTSHAREREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class CancelReportShareRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CancelReportShareRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ReportId, reportId_);
      DARABONBA_PTR_TO_JSON(ShareToIds, shareToIds_);
      DARABONBA_PTR_TO_JSON(ShareToType, shareToType_);
    };
    friend void from_json(const Darabonba::Json& j, CancelReportShareRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ReportId, reportId_);
      DARABONBA_PTR_FROM_JSON(ShareToIds, shareToIds_);
      DARABONBA_PTR_FROM_JSON(ShareToType, shareToType_);
    };
    CancelReportShareRequest() = default ;
    CancelReportShareRequest(const CancelReportShareRequest &) = default ;
    CancelReportShareRequest(CancelReportShareRequest &&) = default ;
    CancelReportShareRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CancelReportShareRequest() = default ;
    CancelReportShareRequest& operator=(const CancelReportShareRequest &) = default ;
    CancelReportShareRequest& operator=(CancelReportShareRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->reportId_ != nullptr
        && this->shareToIds_ != nullptr && this->shareToType_ != nullptr; };
    // reportId Field Functions 
    bool hasReportId() const { return this->reportId_ != nullptr;};
    void deleteReportId() { this->reportId_ = nullptr;};
    inline string reportId() const { DARABONBA_PTR_GET_DEFAULT(reportId_, "") };
    inline CancelReportShareRequest& setReportId(string reportId) { DARABONBA_PTR_SET_VALUE(reportId_, reportId) };


    // shareToIds Field Functions 
    bool hasShareToIds() const { return this->shareToIds_ != nullptr;};
    void deleteShareToIds() { this->shareToIds_ = nullptr;};
    inline string shareToIds() const { DARABONBA_PTR_GET_DEFAULT(shareToIds_, "") };
    inline CancelReportShareRequest& setShareToIds(string shareToIds) { DARABONBA_PTR_SET_VALUE(shareToIds_, shareToIds) };


    // shareToType Field Functions 
    bool hasShareToType() const { return this->shareToType_ != nullptr;};
    void deleteShareToType() { this->shareToType_ = nullptr;};
    inline int32_t shareToType() const { DARABONBA_PTR_GET_DEFAULT(shareToType_, 0) };
    inline CancelReportShareRequest& setShareToType(int32_t shareToType) { DARABONBA_PTR_SET_VALUE(shareToType_, shareToType) };


  protected:
    // The ID of the work. The works here include BI portal, dashboards, spreadsheets, and self-service access.
    // 
    // This parameter is required.
    std::shared_ptr<string> reportId_ = nullptr;
    // The ID of the person to be shared, which may be the user ID of the Quick BI or the user group ID.
    // 
    // *   If ShareToType is 0 (user), ShareTo is the user ID.
    // *   When ShareToType is set to 1 (user group), ShareTo is the user group ID.
    // *   When ShareToType=2 (organization), ShareTo is the ID of the organization.
    // 
    // This parameter is required.
    std::shared_ptr<string> shareToIds_ = nullptr;
    // The deletion method. Valid values:
    // 
    // *   0: Delete by user
    // *   1: Delete by user group
    // *   2: Delete by organization
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> shareToType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
