// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INVALIDATEAPPROVALRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_INVALIDATEAPPROVALRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class InvalidateApprovalResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InvalidateApprovalResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ApprovalId, approvalId_);
      DARABONBA_PTR_TO_JSON(EffectStatus, effectStatus_);
      DARABONBA_PTR_TO_JSON(ReportType, reportType_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, InvalidateApprovalResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ApprovalId, approvalId_);
      DARABONBA_PTR_FROM_JSON(EffectStatus, effectStatus_);
      DARABONBA_PTR_FROM_JSON(ReportType, reportType_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    InvalidateApprovalResponseBody() = default ;
    InvalidateApprovalResponseBody(const InvalidateApprovalResponseBody &) = default ;
    InvalidateApprovalResponseBody(InvalidateApprovalResponseBody &&) = default ;
    InvalidateApprovalResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InvalidateApprovalResponseBody() = default ;
    InvalidateApprovalResponseBody& operator=(const InvalidateApprovalResponseBody &) = default ;
    InvalidateApprovalResponseBody& operator=(InvalidateApprovalResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->approvalId_ == nullptr
        && this->effectStatus_ == nullptr && this->reportType_ == nullptr && this->requestId_ == nullptr; };
    // approvalId Field Functions 
    bool hasApprovalId() const { return this->approvalId_ != nullptr;};
    void deleteApprovalId() { this->approvalId_ = nullptr;};
    inline string getApprovalId() const { DARABONBA_PTR_GET_DEFAULT(approvalId_, "") };
    inline InvalidateApprovalResponseBody& setApprovalId(string approvalId) { DARABONBA_PTR_SET_VALUE(approvalId_, approvalId) };


    // effectStatus Field Functions 
    bool hasEffectStatus() const { return this->effectStatus_ != nullptr;};
    void deleteEffectStatus() { this->effectStatus_ = nullptr;};
    inline string getEffectStatus() const { DARABONBA_PTR_GET_DEFAULT(effectStatus_, "") };
    inline InvalidateApprovalResponseBody& setEffectStatus(string effectStatus) { DARABONBA_PTR_SET_VALUE(effectStatus_, effectStatus) };


    // reportType Field Functions 
    bool hasReportType() const { return this->reportType_ != nullptr;};
    void deleteReportType() { this->reportType_ = nullptr;};
    inline string getReportType() const { DARABONBA_PTR_GET_DEFAULT(reportType_, "") };
    inline InvalidateApprovalResponseBody& setReportType(string reportType) { DARABONBA_PTR_SET_VALUE(reportType_, reportType) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline InvalidateApprovalResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the invalidated approval instance.
    shared_ptr<string> approvalId_ {};
    // The effective status of the approval. When the invalidation succeeds, the value is fixed as Expired, which indicates that the approval has been invalidated.
    shared_ptr<string> effectStatus_ {};
    // The approval type. Valid values:
    // * ApprovalReport: approval.
    // * BackendReport: backend approval.
    shared_ptr<string> reportType_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
