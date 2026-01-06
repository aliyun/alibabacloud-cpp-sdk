// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTREPORTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTREPORTREQUEST_HPP_
#include <darabonba/Core.hpp>
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
    class TenantContext : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TenantContext& obj) { 
        DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
      };
      friend void from_json(const Darabonba::Json& j, TenantContext& obj) { 
        DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
      };
      TenantContext() = default ;
      TenantContext(const TenantContext &) = default ;
      TenantContext(TenantContext &&) = default ;
      TenantContext(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TenantContext() = default ;
      TenantContext& operator=(const TenantContext &) = default ;
      TenantContext& operator=(TenantContext &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->tenantId_ == nullptr; };
      // tenantId Field Functions 
      bool hasTenantId() const { return this->tenantId_ != nullptr;};
      void deleteTenantId() { this->tenantId_ = nullptr;};
      inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
      inline TenantContext& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    protected:
      shared_ptr<string> tenantId_ {};
    };

    virtual bool empty() const override { return this->cursor_ == nullptr
        && this->endTime_ == nullptr && this->modifiedEndTime_ == nullptr && this->modifiedStartTime_ == nullptr && this->size_ == nullptr && this->startTime_ == nullptr
        && this->templateName_ == nullptr && this->tenantContext_ == nullptr; };
    // cursor Field Functions 
    bool hasCursor() const { return this->cursor_ != nullptr;};
    void deleteCursor() { this->cursor_ = nullptr;};
    inline int64_t getCursor() const { DARABONBA_PTR_GET_DEFAULT(cursor_, 0L) };
    inline ListReportRequest& setCursor(int64_t cursor) { DARABONBA_PTR_SET_VALUE(cursor_, cursor) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline ListReportRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // modifiedEndTime Field Functions 
    bool hasModifiedEndTime() const { return this->modifiedEndTime_ != nullptr;};
    void deleteModifiedEndTime() { this->modifiedEndTime_ = nullptr;};
    inline int64_t getModifiedEndTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedEndTime_, 0L) };
    inline ListReportRequest& setModifiedEndTime(int64_t modifiedEndTime) { DARABONBA_PTR_SET_VALUE(modifiedEndTime_, modifiedEndTime) };


    // modifiedStartTime Field Functions 
    bool hasModifiedStartTime() const { return this->modifiedStartTime_ != nullptr;};
    void deleteModifiedStartTime() { this->modifiedStartTime_ = nullptr;};
    inline int64_t getModifiedStartTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedStartTime_, 0L) };
    inline ListReportRequest& setModifiedStartTime(int64_t modifiedStartTime) { DARABONBA_PTR_SET_VALUE(modifiedStartTime_, modifiedStartTime) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int64_t getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, 0L) };
    inline ListReportRequest& setSize(int64_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline ListReportRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // templateName Field Functions 
    bool hasTemplateName() const { return this->templateName_ != nullptr;};
    void deleteTemplateName() { this->templateName_ = nullptr;};
    inline string getTemplateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
    inline ListReportRequest& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


    // tenantContext Field Functions 
    bool hasTenantContext() const { return this->tenantContext_ != nullptr;};
    void deleteTenantContext() { this->tenantContext_ = nullptr;};
    inline const ListReportRequest::TenantContext & getTenantContext() const { DARABONBA_PTR_GET_CONST(tenantContext_, ListReportRequest::TenantContext) };
    inline ListReportRequest::TenantContext getTenantContext() { DARABONBA_PTR_GET(tenantContext_, ListReportRequest::TenantContext) };
    inline ListReportRequest& setTenantContext(const ListReportRequest::TenantContext & tenantContext) { DARABONBA_PTR_SET_VALUE(tenantContext_, tenantContext) };
    inline ListReportRequest& setTenantContext(ListReportRequest::TenantContext && tenantContext) { DARABONBA_PTR_SET_RVALUE(tenantContext_, tenantContext) };


  protected:
    // This parameter is required.
    shared_ptr<int64_t> cursor_ {};
    // This parameter is required.
    shared_ptr<int64_t> endTime_ {};
    shared_ptr<int64_t> modifiedEndTime_ {};
    shared_ptr<int64_t> modifiedStartTime_ {};
    // This parameter is required.
    shared_ptr<int64_t> size_ {};
    // This parameter is required.
    shared_ptr<int64_t> startTime_ {};
    shared_ptr<string> templateName_ {};
    shared_ptr<ListReportRequest::TenantContext> tenantContext_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
