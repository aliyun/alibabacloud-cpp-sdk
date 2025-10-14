// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTREPORTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTREPORTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListReportRequestTenantContext.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class ListReportRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListReportRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Cursor, cursor_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(ModifiedEndTime, modifiedEndTime_);
      DARABONBA_PTR_TO_JSON(ModifiedStartTime, modifiedStartTime_);
      DARABONBA_PTR_TO_JSON(Size, size_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(TemplateName, templateName_);
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContext_);
    };
    friend void from_json(const Darabonba::Json& j, ListReportRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Cursor, cursor_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(ModifiedEndTime, modifiedEndTime_);
      DARABONBA_PTR_FROM_JSON(ModifiedStartTime, modifiedStartTime_);
      DARABONBA_PTR_FROM_JSON(Size, size_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(TemplateName, templateName_);
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContext_);
    };
    ListReportRequest() = default ;
    ListReportRequest(const ListReportRequest &) = default ;
    ListReportRequest(ListReportRequest &&) = default ;
    ListReportRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListReportRequest() = default ;
    ListReportRequest& operator=(const ListReportRequest &) = default ;
    ListReportRequest& operator=(ListReportRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cursor_ == nullptr
        && return this->endTime_ == nullptr && return this->modifiedEndTime_ == nullptr && return this->modifiedStartTime_ == nullptr && return this->size_ == nullptr && return this->startTime_ == nullptr
        && return this->templateName_ == nullptr && return this->tenantContext_ == nullptr; };
    // cursor Field Functions 
    bool hasCursor() const { return this->cursor_ != nullptr;};
    void deleteCursor() { this->cursor_ = nullptr;};
    inline int64_t cursor() const { DARABONBA_PTR_GET_DEFAULT(cursor_, 0L) };
    inline ListReportRequest& setCursor(int64_t cursor) { DARABONBA_PTR_SET_VALUE(cursor_, cursor) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline ListReportRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // modifiedEndTime Field Functions 
    bool hasModifiedEndTime() const { return this->modifiedEndTime_ != nullptr;};
    void deleteModifiedEndTime() { this->modifiedEndTime_ = nullptr;};
    inline int64_t modifiedEndTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedEndTime_, 0L) };
    inline ListReportRequest& setModifiedEndTime(int64_t modifiedEndTime) { DARABONBA_PTR_SET_VALUE(modifiedEndTime_, modifiedEndTime) };


    // modifiedStartTime Field Functions 
    bool hasModifiedStartTime() const { return this->modifiedStartTime_ != nullptr;};
    void deleteModifiedStartTime() { this->modifiedStartTime_ = nullptr;};
    inline int64_t modifiedStartTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedStartTime_, 0L) };
    inline ListReportRequest& setModifiedStartTime(int64_t modifiedStartTime) { DARABONBA_PTR_SET_VALUE(modifiedStartTime_, modifiedStartTime) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int64_t size() const { DARABONBA_PTR_GET_DEFAULT(size_, 0L) };
    inline ListReportRequest& setSize(int64_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline ListReportRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // templateName Field Functions 
    bool hasTemplateName() const { return this->templateName_ != nullptr;};
    void deleteTemplateName() { this->templateName_ = nullptr;};
    inline string templateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
    inline ListReportRequest& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


    // tenantContext Field Functions 
    bool hasTenantContext() const { return this->tenantContext_ != nullptr;};
    void deleteTenantContext() { this->tenantContext_ = nullptr;};
    inline const ListReportRequestTenantContext & tenantContext() const { DARABONBA_PTR_GET_CONST(tenantContext_, ListReportRequestTenantContext) };
    inline ListReportRequestTenantContext tenantContext() { DARABONBA_PTR_GET(tenantContext_, ListReportRequestTenantContext) };
    inline ListReportRequest& setTenantContext(const ListReportRequestTenantContext & tenantContext) { DARABONBA_PTR_SET_VALUE(tenantContext_, tenantContext) };
    inline ListReportRequest& setTenantContext(ListReportRequestTenantContext && tenantContext) { DARABONBA_PTR_SET_RVALUE(tenantContext_, tenantContext) };


  protected:
    // This parameter is required.
    std::shared_ptr<int64_t> cursor_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> endTime_ = nullptr;
    std::shared_ptr<int64_t> modifiedEndTime_ = nullptr;
    std::shared_ptr<int64_t> modifiedStartTime_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> size_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> startTime_ = nullptr;
    std::shared_ptr<string> templateName_ = nullptr;
    std::shared_ptr<ListReportRequestTenantContext> tenantContext_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
