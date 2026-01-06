// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STATISTICSLISTBYTYPEREPORTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_STATISTICSLISTBYTYPEREPORTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class StatisticsListByTypeReportRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StatisticsListByTypeReportRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Offset, offset_);
      DARABONBA_PTR_TO_JSON(ReportId, reportId_);
      DARABONBA_PTR_TO_JSON(Size, size_);
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContext_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, StatisticsListByTypeReportRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Offset, offset_);
      DARABONBA_PTR_FROM_JSON(ReportId, reportId_);
      DARABONBA_PTR_FROM_JSON(Size, size_);
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContext_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    StatisticsListByTypeReportRequest() = default ;
    StatisticsListByTypeReportRequest(const StatisticsListByTypeReportRequest &) = default ;
    StatisticsListByTypeReportRequest(StatisticsListByTypeReportRequest &&) = default ;
    StatisticsListByTypeReportRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StatisticsListByTypeReportRequest() = default ;
    StatisticsListByTypeReportRequest& operator=(const StatisticsListByTypeReportRequest &) = default ;
    StatisticsListByTypeReportRequest& operator=(StatisticsListByTypeReportRequest &&) = default ;
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

    virtual bool empty() const override { return this->offset_ == nullptr
        && this->reportId_ == nullptr && this->size_ == nullptr && this->tenantContext_ == nullptr && this->type_ == nullptr; };
    // offset Field Functions 
    bool hasOffset() const { return this->offset_ != nullptr;};
    void deleteOffset() { this->offset_ = nullptr;};
    inline int64_t getOffset() const { DARABONBA_PTR_GET_DEFAULT(offset_, 0L) };
    inline StatisticsListByTypeReportRequest& setOffset(int64_t offset) { DARABONBA_PTR_SET_VALUE(offset_, offset) };


    // reportId Field Functions 
    bool hasReportId() const { return this->reportId_ != nullptr;};
    void deleteReportId() { this->reportId_ = nullptr;};
    inline string getReportId() const { DARABONBA_PTR_GET_DEFAULT(reportId_, "") };
    inline StatisticsListByTypeReportRequest& setReportId(string reportId) { DARABONBA_PTR_SET_VALUE(reportId_, reportId) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int64_t getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, 0L) };
    inline StatisticsListByTypeReportRequest& setSize(int64_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


    // tenantContext Field Functions 
    bool hasTenantContext() const { return this->tenantContext_ != nullptr;};
    void deleteTenantContext() { this->tenantContext_ = nullptr;};
    inline const StatisticsListByTypeReportRequest::TenantContext & getTenantContext() const { DARABONBA_PTR_GET_CONST(tenantContext_, StatisticsListByTypeReportRequest::TenantContext) };
    inline StatisticsListByTypeReportRequest::TenantContext getTenantContext() { DARABONBA_PTR_GET(tenantContext_, StatisticsListByTypeReportRequest::TenantContext) };
    inline StatisticsListByTypeReportRequest& setTenantContext(const StatisticsListByTypeReportRequest::TenantContext & tenantContext) { DARABONBA_PTR_SET_VALUE(tenantContext_, tenantContext) };
    inline StatisticsListByTypeReportRequest& setTenantContext(StatisticsListByTypeReportRequest::TenantContext && tenantContext) { DARABONBA_PTR_SET_RVALUE(tenantContext_, tenantContext) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline int64_t getType() const { DARABONBA_PTR_GET_DEFAULT(type_, 0L) };
    inline StatisticsListByTypeReportRequest& setType(int64_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // This parameter is required.
    shared_ptr<int64_t> offset_ {};
    // This parameter is required.
    shared_ptr<string> reportId_ {};
    // This parameter is required.
    shared_ptr<int64_t> size_ {};
    shared_ptr<StatisticsListByTypeReportRequest::TenantContext> tenantContext_ {};
    // This parameter is required.
    shared_ptr<int64_t> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
