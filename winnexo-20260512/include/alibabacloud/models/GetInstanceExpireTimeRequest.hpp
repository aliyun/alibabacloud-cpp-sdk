// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINSTANCEEXPIRETIMEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETINSTANCEEXPIRETIMEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class GetInstanceExpireTimeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInstanceExpireTimeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
    };
    friend void from_json(const Darabonba::Json& j, GetInstanceExpireTimeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
    };
    GetInstanceExpireTimeRequest() = default ;
    GetInstanceExpireTimeRequest(const GetInstanceExpireTimeRequest &) = default ;
    GetInstanceExpireTimeRequest(GetInstanceExpireTimeRequest &&) = default ;
    GetInstanceExpireTimeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInstanceExpireTimeRequest() = default ;
    GetInstanceExpireTimeRequest& operator=(const GetInstanceExpireTimeRequest &) = default ;
    GetInstanceExpireTimeRequest& operator=(GetInstanceExpireTimeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->tenantId_ == nullptr; };
    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline GetInstanceExpireTimeRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


  protected:
    // 租户ID，公共参数；winnexo-cli 通过 --tenant-id 显式传入
    shared_ptr<string> tenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
