// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SYNCDINGTYPEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SYNCDINGTYPEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class SyncDingTypeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SyncDingTypeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DingType, dingType_);
      DARABONBA_PTR_TO_JSON(IsDimission, isDimission_);
      DARABONBA_PTR_TO_JSON(Source, source_);
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContext_);
      DARABONBA_PTR_TO_JSON(WorkNo, workNo_);
    };
    friend void from_json(const Darabonba::Json& j, SyncDingTypeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DingType, dingType_);
      DARABONBA_PTR_FROM_JSON(IsDimission, isDimission_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContext_);
      DARABONBA_PTR_FROM_JSON(WorkNo, workNo_);
    };
    SyncDingTypeRequest() = default ;
    SyncDingTypeRequest(const SyncDingTypeRequest &) = default ;
    SyncDingTypeRequest(SyncDingTypeRequest &&) = default ;
    SyncDingTypeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SyncDingTypeRequest() = default ;
    SyncDingTypeRequest& operator=(const SyncDingTypeRequest &) = default ;
    SyncDingTypeRequest& operator=(SyncDingTypeRequest &&) = default ;
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

    virtual bool empty() const override { return this->dingType_ == nullptr
        && this->isDimission_ == nullptr && this->source_ == nullptr && this->tenantContext_ == nullptr && this->workNo_ == nullptr; };
    // dingType Field Functions 
    bool hasDingType() const { return this->dingType_ != nullptr;};
    void deleteDingType() { this->dingType_ = nullptr;};
    inline string getDingType() const { DARABONBA_PTR_GET_DEFAULT(dingType_, "") };
    inline SyncDingTypeRequest& setDingType(string dingType) { DARABONBA_PTR_SET_VALUE(dingType_, dingType) };


    // isDimission Field Functions 
    bool hasIsDimission() const { return this->isDimission_ != nullptr;};
    void deleteIsDimission() { this->isDimission_ = nullptr;};
    inline string getIsDimission() const { DARABONBA_PTR_GET_DEFAULT(isDimission_, "") };
    inline SyncDingTypeRequest& setIsDimission(string isDimission) { DARABONBA_PTR_SET_VALUE(isDimission_, isDimission) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline SyncDingTypeRequest& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // tenantContext Field Functions 
    bool hasTenantContext() const { return this->tenantContext_ != nullptr;};
    void deleteTenantContext() { this->tenantContext_ = nullptr;};
    inline const SyncDingTypeRequest::TenantContext & getTenantContext() const { DARABONBA_PTR_GET_CONST(tenantContext_, SyncDingTypeRequest::TenantContext) };
    inline SyncDingTypeRequest::TenantContext getTenantContext() { DARABONBA_PTR_GET(tenantContext_, SyncDingTypeRequest::TenantContext) };
    inline SyncDingTypeRequest& setTenantContext(const SyncDingTypeRequest::TenantContext & tenantContext) { DARABONBA_PTR_SET_VALUE(tenantContext_, tenantContext) };
    inline SyncDingTypeRequest& setTenantContext(SyncDingTypeRequest::TenantContext && tenantContext) { DARABONBA_PTR_SET_RVALUE(tenantContext_, tenantContext) };


    // workNo Field Functions 
    bool hasWorkNo() const { return this->workNo_ != nullptr;};
    void deleteWorkNo() { this->workNo_ = nullptr;};
    inline string getWorkNo() const { DARABONBA_PTR_GET_DEFAULT(workNo_, "") };
    inline SyncDingTypeRequest& setWorkNo(string workNo) { DARABONBA_PTR_SET_VALUE(workNo_, workNo) };


  protected:
    // This parameter is required.
    shared_ptr<string> dingType_ {};
    shared_ptr<string> isDimission_ {};
    // This parameter is required.
    shared_ptr<string> source_ {};
    shared_ptr<SyncDingTypeRequest::TenantContext> tenantContext_ {};
    // This parameter is required.
    shared_ptr<string> workNo_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
