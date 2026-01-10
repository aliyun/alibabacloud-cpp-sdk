// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEPROXYACCESSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEPROXYACCESSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class DeleteProxyAccessRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteProxyAccessRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ProxyAccessId, proxyAccessId_);
      DARABONBA_PTR_TO_JSON(Tid, tid_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteProxyAccessRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ProxyAccessId, proxyAccessId_);
      DARABONBA_PTR_FROM_JSON(Tid, tid_);
    };
    DeleteProxyAccessRequest() = default ;
    DeleteProxyAccessRequest(const DeleteProxyAccessRequest &) = default ;
    DeleteProxyAccessRequest(DeleteProxyAccessRequest &&) = default ;
    DeleteProxyAccessRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteProxyAccessRequest() = default ;
    DeleteProxyAccessRequest& operator=(const DeleteProxyAccessRequest &) = default ;
    DeleteProxyAccessRequest& operator=(DeleteProxyAccessRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->proxyAccessId_ == nullptr
        && this->tid_ == nullptr; };
    // proxyAccessId Field Functions 
    bool hasProxyAccessId() const { return this->proxyAccessId_ != nullptr;};
    void deleteProxyAccessId() { this->proxyAccessId_ = nullptr;};
    inline int64_t getProxyAccessId() const { DARABONBA_PTR_GET_DEFAULT(proxyAccessId_, 0L) };
    inline DeleteProxyAccessRequest& setProxyAccessId(int64_t proxyAccessId) { DARABONBA_PTR_SET_VALUE(proxyAccessId_, proxyAccessId) };


    // tid Field Functions 
    bool hasTid() const { return this->tid_ != nullptr;};
    void deleteTid() { this->tid_ = nullptr;};
    inline int64_t getTid() const { DARABONBA_PTR_GET_DEFAULT(tid_, 0L) };
    inline DeleteProxyAccessRequest& setTid(int64_t tid) { DARABONBA_PTR_SET_VALUE(tid_, tid) };


  protected:
    // The ID of the security protection authorization. After the security protection agent authorizes the target user, the system automatically generates a security protection authorization ID. The ID is globally unique. You can call the [ListProxyAccesses](https://www.alibabacloud.com/help/en/data-management-service/latest/listproxyaccesses) operation to obtain this parameter.
    // 
    // This parameter is required.
    shared_ptr<int64_t> proxyAccessId_ {};
    // The ID of the tenant. You can call the [GetUserActiveTenant](https://www.alibabacloud.com/help/en/data-management-service/latest/getuseractivetenant) or [ListUserTenants](https://www.alibabacloud.com/help/en/data-management-service/latest/listusertenants) operation to obtain this parameter.
    shared_ptr<int64_t> tid_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
