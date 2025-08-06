// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SYNCDINGTYPESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SYNCDINGTYPESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class SyncDingTypeShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SyncDingTypeShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DingType, dingType_);
      DARABONBA_PTR_TO_JSON(IsDimission, isDimission_);
      DARABONBA_PTR_TO_JSON(Source, source_);
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContextShrink_);
      DARABONBA_PTR_TO_JSON(WorkNo, workNo_);
    };
    friend void from_json(const Darabonba::Json& j, SyncDingTypeShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DingType, dingType_);
      DARABONBA_PTR_FROM_JSON(IsDimission, isDimission_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContextShrink_);
      DARABONBA_PTR_FROM_JSON(WorkNo, workNo_);
    };
    SyncDingTypeShrinkRequest() = default ;
    SyncDingTypeShrinkRequest(const SyncDingTypeShrinkRequest &) = default ;
    SyncDingTypeShrinkRequest(SyncDingTypeShrinkRequest &&) = default ;
    SyncDingTypeShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SyncDingTypeShrinkRequest() = default ;
    SyncDingTypeShrinkRequest& operator=(const SyncDingTypeShrinkRequest &) = default ;
    SyncDingTypeShrinkRequest& operator=(SyncDingTypeShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dingType_ != nullptr
        && this->isDimission_ != nullptr && this->source_ != nullptr && this->tenantContextShrink_ != nullptr && this->workNo_ != nullptr; };
    // dingType Field Functions 
    bool hasDingType() const { return this->dingType_ != nullptr;};
    void deleteDingType() { this->dingType_ = nullptr;};
    inline string dingType() const { DARABONBA_PTR_GET_DEFAULT(dingType_, "") };
    inline SyncDingTypeShrinkRequest& setDingType(string dingType) { DARABONBA_PTR_SET_VALUE(dingType_, dingType) };


    // isDimission Field Functions 
    bool hasIsDimission() const { return this->isDimission_ != nullptr;};
    void deleteIsDimission() { this->isDimission_ = nullptr;};
    inline string isDimission() const { DARABONBA_PTR_GET_DEFAULT(isDimission_, "") };
    inline SyncDingTypeShrinkRequest& setIsDimission(string isDimission) { DARABONBA_PTR_SET_VALUE(isDimission_, isDimission) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string source() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline SyncDingTypeShrinkRequest& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // tenantContextShrink Field Functions 
    bool hasTenantContextShrink() const { return this->tenantContextShrink_ != nullptr;};
    void deleteTenantContextShrink() { this->tenantContextShrink_ = nullptr;};
    inline string tenantContextShrink() const { DARABONBA_PTR_GET_DEFAULT(tenantContextShrink_, "") };
    inline SyncDingTypeShrinkRequest& setTenantContextShrink(string tenantContextShrink) { DARABONBA_PTR_SET_VALUE(tenantContextShrink_, tenantContextShrink) };


    // workNo Field Functions 
    bool hasWorkNo() const { return this->workNo_ != nullptr;};
    void deleteWorkNo() { this->workNo_ = nullptr;};
    inline string workNo() const { DARABONBA_PTR_GET_DEFAULT(workNo_, "") };
    inline SyncDingTypeShrinkRequest& setWorkNo(string workNo) { DARABONBA_PTR_SET_VALUE(workNo_, workNo) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> dingType_ = nullptr;
    std::shared_ptr<string> isDimission_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> source_ = nullptr;
    std::shared_ptr<string> tenantContextShrink_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> workNo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
