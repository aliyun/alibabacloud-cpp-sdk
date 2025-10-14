// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RECEIVERLISTREPORTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RECEIVERLISTREPORTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ReceiverListReportRequestTenantContext.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class ReceiverListReportRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ReceiverListReportRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Offset, offset_);
      DARABONBA_PTR_TO_JSON(ReportId, reportId_);
      DARABONBA_PTR_TO_JSON(Size, size_);
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContext_);
    };
    friend void from_json(const Darabonba::Json& j, ReceiverListReportRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Offset, offset_);
      DARABONBA_PTR_FROM_JSON(ReportId, reportId_);
      DARABONBA_PTR_FROM_JSON(Size, size_);
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContext_);
    };
    ReceiverListReportRequest() = default ;
    ReceiverListReportRequest(const ReceiverListReportRequest &) = default ;
    ReceiverListReportRequest(ReceiverListReportRequest &&) = default ;
    ReceiverListReportRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ReceiverListReportRequest() = default ;
    ReceiverListReportRequest& operator=(const ReceiverListReportRequest &) = default ;
    ReceiverListReportRequest& operator=(ReceiverListReportRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->offset_ == nullptr
        && return this->reportId_ == nullptr && return this->size_ == nullptr && return this->tenantContext_ == nullptr; };
    // offset Field Functions 
    bool hasOffset() const { return this->offset_ != nullptr;};
    void deleteOffset() { this->offset_ = nullptr;};
    inline int64_t offset() const { DARABONBA_PTR_GET_DEFAULT(offset_, 0L) };
    inline ReceiverListReportRequest& setOffset(int64_t offset) { DARABONBA_PTR_SET_VALUE(offset_, offset) };


    // reportId Field Functions 
    bool hasReportId() const { return this->reportId_ != nullptr;};
    void deleteReportId() { this->reportId_ = nullptr;};
    inline string reportId() const { DARABONBA_PTR_GET_DEFAULT(reportId_, "") };
    inline ReceiverListReportRequest& setReportId(string reportId) { DARABONBA_PTR_SET_VALUE(reportId_, reportId) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int64_t size() const { DARABONBA_PTR_GET_DEFAULT(size_, 0L) };
    inline ReceiverListReportRequest& setSize(int64_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


    // tenantContext Field Functions 
    bool hasTenantContext() const { return this->tenantContext_ != nullptr;};
    void deleteTenantContext() { this->tenantContext_ = nullptr;};
    inline const ReceiverListReportRequestTenantContext & tenantContext() const { DARABONBA_PTR_GET_CONST(tenantContext_, ReceiverListReportRequestTenantContext) };
    inline ReceiverListReportRequestTenantContext tenantContext() { DARABONBA_PTR_GET(tenantContext_, ReceiverListReportRequestTenantContext) };
    inline ReceiverListReportRequest& setTenantContext(const ReceiverListReportRequestTenantContext & tenantContext) { DARABONBA_PTR_SET_VALUE(tenantContext_, tenantContext) };
    inline ReceiverListReportRequest& setTenantContext(ReceiverListReportRequestTenantContext && tenantContext) { DARABONBA_PTR_SET_RVALUE(tenantContext_, tenantContext) };


  protected:
    // This parameter is required.
    std::shared_ptr<int64_t> offset_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> reportId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> size_ = nullptr;
    std::shared_ptr<ReceiverListReportRequestTenantContext> tenantContext_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
