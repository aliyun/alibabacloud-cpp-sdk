// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTEMPLATELISTBYUSERIDSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETTEMPLATELISTBYUSERIDSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GetTemplateListByUserIdShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTemplateListByUserIdShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Offset, offset_);
      DARABONBA_PTR_TO_JSON(Size, size_);
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContextShrink_);
    };
    friend void from_json(const Darabonba::Json& j, GetTemplateListByUserIdShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Offset, offset_);
      DARABONBA_PTR_FROM_JSON(Size, size_);
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContextShrink_);
    };
    GetTemplateListByUserIdShrinkRequest() = default ;
    GetTemplateListByUserIdShrinkRequest(const GetTemplateListByUserIdShrinkRequest &) = default ;
    GetTemplateListByUserIdShrinkRequest(GetTemplateListByUserIdShrinkRequest &&) = default ;
    GetTemplateListByUserIdShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTemplateListByUserIdShrinkRequest() = default ;
    GetTemplateListByUserIdShrinkRequest& operator=(const GetTemplateListByUserIdShrinkRequest &) = default ;
    GetTemplateListByUserIdShrinkRequest& operator=(GetTemplateListByUserIdShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->offset_ == nullptr
        && this->size_ == nullptr && this->tenantContextShrink_ == nullptr; };
    // offset Field Functions 
    bool hasOffset() const { return this->offset_ != nullptr;};
    void deleteOffset() { this->offset_ = nullptr;};
    inline int64_t getOffset() const { DARABONBA_PTR_GET_DEFAULT(offset_, 0L) };
    inline GetTemplateListByUserIdShrinkRequest& setOffset(int64_t offset) { DARABONBA_PTR_SET_VALUE(offset_, offset) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int64_t getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, 0L) };
    inline GetTemplateListByUserIdShrinkRequest& setSize(int64_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


    // tenantContextShrink Field Functions 
    bool hasTenantContextShrink() const { return this->tenantContextShrink_ != nullptr;};
    void deleteTenantContextShrink() { this->tenantContextShrink_ = nullptr;};
    inline string getTenantContextShrink() const { DARABONBA_PTR_GET_DEFAULT(tenantContextShrink_, "") };
    inline GetTemplateListByUserIdShrinkRequest& setTenantContextShrink(string tenantContextShrink) { DARABONBA_PTR_SET_VALUE(tenantContextShrink_, tenantContextShrink) };


  protected:
    // This parameter is required.
    shared_ptr<int64_t> offset_ {};
    // This parameter is required.
    shared_ptr<int64_t> size_ {};
    shared_ptr<string> tenantContextShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
