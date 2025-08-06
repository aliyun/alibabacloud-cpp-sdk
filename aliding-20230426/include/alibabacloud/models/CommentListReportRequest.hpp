// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_COMMENTLISTREPORTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_COMMENTLISTREPORTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CommentListReportRequestTenantContext.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class CommentListReportRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CommentListReportRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Offset, offset_);
      DARABONBA_PTR_TO_JSON(ReportId, reportId_);
      DARABONBA_PTR_TO_JSON(Size, size_);
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContext_);
    };
    friend void from_json(const Darabonba::Json& j, CommentListReportRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Offset, offset_);
      DARABONBA_PTR_FROM_JSON(ReportId, reportId_);
      DARABONBA_PTR_FROM_JSON(Size, size_);
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContext_);
    };
    CommentListReportRequest() = default ;
    CommentListReportRequest(const CommentListReportRequest &) = default ;
    CommentListReportRequest(CommentListReportRequest &&) = default ;
    CommentListReportRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CommentListReportRequest() = default ;
    CommentListReportRequest& operator=(const CommentListReportRequest &) = default ;
    CommentListReportRequest& operator=(CommentListReportRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->offset_ != nullptr
        && this->reportId_ != nullptr && this->size_ != nullptr && this->tenantContext_ != nullptr; };
    // offset Field Functions 
    bool hasOffset() const { return this->offset_ != nullptr;};
    void deleteOffset() { this->offset_ = nullptr;};
    inline int64_t offset() const { DARABONBA_PTR_GET_DEFAULT(offset_, 0L) };
    inline CommentListReportRequest& setOffset(int64_t offset) { DARABONBA_PTR_SET_VALUE(offset_, offset) };


    // reportId Field Functions 
    bool hasReportId() const { return this->reportId_ != nullptr;};
    void deleteReportId() { this->reportId_ = nullptr;};
    inline string reportId() const { DARABONBA_PTR_GET_DEFAULT(reportId_, "") };
    inline CommentListReportRequest& setReportId(string reportId) { DARABONBA_PTR_SET_VALUE(reportId_, reportId) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int64_t size() const { DARABONBA_PTR_GET_DEFAULT(size_, 0L) };
    inline CommentListReportRequest& setSize(int64_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


    // tenantContext Field Functions 
    bool hasTenantContext() const { return this->tenantContext_ != nullptr;};
    void deleteTenantContext() { this->tenantContext_ = nullptr;};
    inline const CommentListReportRequestTenantContext & tenantContext() const { DARABONBA_PTR_GET_CONST(tenantContext_, CommentListReportRequestTenantContext) };
    inline CommentListReportRequestTenantContext tenantContext() { DARABONBA_PTR_GET(tenantContext_, CommentListReportRequestTenantContext) };
    inline CommentListReportRequest& setTenantContext(const CommentListReportRequestTenantContext & tenantContext) { DARABONBA_PTR_SET_VALUE(tenantContext_, tenantContext) };
    inline CommentListReportRequest& setTenantContext(CommentListReportRequestTenantContext && tenantContext) { DARABONBA_PTR_SET_RVALUE(tenantContext_, tenantContext) };


  protected:
    // This parameter is required.
    std::shared_ptr<int64_t> offset_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> reportId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> size_ = nullptr;
    std::shared_ptr<CommentListReportRequestTenantContext> tenantContext_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
