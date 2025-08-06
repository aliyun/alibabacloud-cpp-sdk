// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SYNCDINGTYPEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SYNCDINGTYPEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SyncDingTypeRequestTenantContext.hpp>
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
    virtual bool empty() const override { this->dingType_ != nullptr
        && this->isDimission_ != nullptr && this->source_ != nullptr && this->tenantContext_ != nullptr && this->workNo_ != nullptr; };
    // dingType Field Functions 
    bool hasDingType() const { return this->dingType_ != nullptr;};
    void deleteDingType() { this->dingType_ = nullptr;};
    inline string dingType() const { DARABONBA_PTR_GET_DEFAULT(dingType_, "") };
    inline SyncDingTypeRequest& setDingType(string dingType) { DARABONBA_PTR_SET_VALUE(dingType_, dingType) };


    // isDimission Field Functions 
    bool hasIsDimission() const { return this->isDimission_ != nullptr;};
    void deleteIsDimission() { this->isDimission_ = nullptr;};
    inline string isDimission() const { DARABONBA_PTR_GET_DEFAULT(isDimission_, "") };
    inline SyncDingTypeRequest& setIsDimission(string isDimission) { DARABONBA_PTR_SET_VALUE(isDimission_, isDimission) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string source() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline SyncDingTypeRequest& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // tenantContext Field Functions 
    bool hasTenantContext() const { return this->tenantContext_ != nullptr;};
    void deleteTenantContext() { this->tenantContext_ = nullptr;};
    inline const SyncDingTypeRequestTenantContext & tenantContext() const { DARABONBA_PTR_GET_CONST(tenantContext_, SyncDingTypeRequestTenantContext) };
    inline SyncDingTypeRequestTenantContext tenantContext() { DARABONBA_PTR_GET(tenantContext_, SyncDingTypeRequestTenantContext) };
    inline SyncDingTypeRequest& setTenantContext(const SyncDingTypeRequestTenantContext & tenantContext) { DARABONBA_PTR_SET_VALUE(tenantContext_, tenantContext) };
    inline SyncDingTypeRequest& setTenantContext(SyncDingTypeRequestTenantContext && tenantContext) { DARABONBA_PTR_SET_RVALUE(tenantContext_, tenantContext) };


    // workNo Field Functions 
    bool hasWorkNo() const { return this->workNo_ != nullptr;};
    void deleteWorkNo() { this->workNo_ = nullptr;};
    inline string workNo() const { DARABONBA_PTR_GET_DEFAULT(workNo_, "") };
    inline SyncDingTypeRequest& setWorkNo(string workNo) { DARABONBA_PTR_SET_VALUE(workNo_, workNo) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> dingType_ = nullptr;
    std::shared_ptr<string> isDimission_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> source_ = nullptr;
    std::shared_ptr<SyncDingTypeRequestTenantContext> tenantContext_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> workNo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
