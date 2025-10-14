// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMINEWORKSPACESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETMINEWORKSPACESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GetMineWorkspaceShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMineWorkspaceShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Request, requestShrink_);
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContextShrink_);
    };
    friend void from_json(const Darabonba::Json& j, GetMineWorkspaceShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Request, requestShrink_);
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContextShrink_);
    };
    GetMineWorkspaceShrinkRequest() = default ;
    GetMineWorkspaceShrinkRequest(const GetMineWorkspaceShrinkRequest &) = default ;
    GetMineWorkspaceShrinkRequest(GetMineWorkspaceShrinkRequest &&) = default ;
    GetMineWorkspaceShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMineWorkspaceShrinkRequest() = default ;
    GetMineWorkspaceShrinkRequest& operator=(const GetMineWorkspaceShrinkRequest &) = default ;
    GetMineWorkspaceShrinkRequest& operator=(GetMineWorkspaceShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestShrink_ == nullptr
        && return this->tenantContextShrink_ == nullptr; };
    // requestShrink Field Functions 
    bool hasRequestShrink() const { return this->requestShrink_ != nullptr;};
    void deleteRequestShrink() { this->requestShrink_ = nullptr;};
    inline string requestShrink() const { DARABONBA_PTR_GET_DEFAULT(requestShrink_, "") };
    inline GetMineWorkspaceShrinkRequest& setRequestShrink(string requestShrink) { DARABONBA_PTR_SET_VALUE(requestShrink_, requestShrink) };


    // tenantContextShrink Field Functions 
    bool hasTenantContextShrink() const { return this->tenantContextShrink_ != nullptr;};
    void deleteTenantContextShrink() { this->tenantContextShrink_ = nullptr;};
    inline string tenantContextShrink() const { DARABONBA_PTR_GET_DEFAULT(tenantContextShrink_, "") };
    inline GetMineWorkspaceShrinkRequest& setTenantContextShrink(string tenantContextShrink) { DARABONBA_PTR_SET_VALUE(tenantContextShrink_, tenantContextShrink) };


  protected:
    std::shared_ptr<string> requestShrink_ = nullptr;
    std::shared_ptr<string> tenantContextShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
