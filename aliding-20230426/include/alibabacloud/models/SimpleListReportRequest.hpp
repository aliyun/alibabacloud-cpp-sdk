// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SIMPLELISTREPORTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SIMPLELISTREPORTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SimpleListReportRequestTenantContext.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class SimpleListReportRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SimpleListReportRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Cursor, cursor_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Size, size_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(TemplateName, templateName_);
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContext_);
    };
    friend void from_json(const Darabonba::Json& j, SimpleListReportRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Cursor, cursor_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Size, size_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(TemplateName, templateName_);
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContext_);
    };
    SimpleListReportRequest() = default ;
    SimpleListReportRequest(const SimpleListReportRequest &) = default ;
    SimpleListReportRequest(SimpleListReportRequest &&) = default ;
    SimpleListReportRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SimpleListReportRequest() = default ;
    SimpleListReportRequest& operator=(const SimpleListReportRequest &) = default ;
    SimpleListReportRequest& operator=(SimpleListReportRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cursor_ != nullptr
        && this->endTime_ != nullptr && this->size_ != nullptr && this->startTime_ != nullptr && this->templateName_ != nullptr && this->tenantContext_ != nullptr; };
    // cursor Field Functions 
    bool hasCursor() const { return this->cursor_ != nullptr;};
    void deleteCursor() { this->cursor_ = nullptr;};
    inline int64_t cursor() const { DARABONBA_PTR_GET_DEFAULT(cursor_, 0L) };
    inline SimpleListReportRequest& setCursor(int64_t cursor) { DARABONBA_PTR_SET_VALUE(cursor_, cursor) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline SimpleListReportRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int64_t size() const { DARABONBA_PTR_GET_DEFAULT(size_, 0L) };
    inline SimpleListReportRequest& setSize(int64_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline SimpleListReportRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // templateName Field Functions 
    bool hasTemplateName() const { return this->templateName_ != nullptr;};
    void deleteTemplateName() { this->templateName_ = nullptr;};
    inline string templateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
    inline SimpleListReportRequest& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


    // tenantContext Field Functions 
    bool hasTenantContext() const { return this->tenantContext_ != nullptr;};
    void deleteTenantContext() { this->tenantContext_ = nullptr;};
    inline const SimpleListReportRequestTenantContext & tenantContext() const { DARABONBA_PTR_GET_CONST(tenantContext_, SimpleListReportRequestTenantContext) };
    inline SimpleListReportRequestTenantContext tenantContext() { DARABONBA_PTR_GET(tenantContext_, SimpleListReportRequestTenantContext) };
    inline SimpleListReportRequest& setTenantContext(const SimpleListReportRequestTenantContext & tenantContext) { DARABONBA_PTR_SET_VALUE(tenantContext_, tenantContext) };
    inline SimpleListReportRequest& setTenantContext(SimpleListReportRequestTenantContext && tenantContext) { DARABONBA_PTR_SET_RVALUE(tenantContext_, tenantContext) };


  protected:
    // This parameter is required.
    std::shared_ptr<int64_t> cursor_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> endTime_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> size_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> startTime_ = nullptr;
    std::shared_ptr<string> templateName_ = nullptr;
    std::shared_ptr<SimpleListReportRequestTenantContext> tenantContext_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
