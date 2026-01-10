// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEPROXYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEPROXYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class DeleteProxyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteProxyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ProxyId, proxyId_);
      DARABONBA_PTR_TO_JSON(Tid, tid_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteProxyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ProxyId, proxyId_);
      DARABONBA_PTR_FROM_JSON(Tid, tid_);
    };
    DeleteProxyRequest() = default ;
    DeleteProxyRequest(const DeleteProxyRequest &) = default ;
    DeleteProxyRequest(DeleteProxyRequest &&) = default ;
    DeleteProxyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteProxyRequest() = default ;
    DeleteProxyRequest& operator=(const DeleteProxyRequest &) = default ;
    DeleteProxyRequest& operator=(DeleteProxyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->proxyId_ == nullptr
        && this->tid_ == nullptr; };
    // proxyId Field Functions 
    bool hasProxyId() const { return this->proxyId_ != nullptr;};
    void deleteProxyId() { this->proxyId_ = nullptr;};
    inline int64_t getProxyId() const { DARABONBA_PTR_GET_DEFAULT(proxyId_, 0L) };
    inline DeleteProxyRequest& setProxyId(int64_t proxyId) { DARABONBA_PTR_SET_VALUE(proxyId_, proxyId) };


    // tid Field Functions 
    bool hasTid() const { return this->tid_ != nullptr;};
    void deleteTid() { this->tid_ = nullptr;};
    inline int64_t getTid() const { DARABONBA_PTR_GET_DEFAULT(tid_, 0L) };
    inline DeleteProxyRequest& setTid(int64_t tid) { DARABONBA_PTR_SET_VALUE(tid_, tid) };


  protected:
    // The ID of the security protection agent. You can call the [ListProxies](https://www.alibabacloud.com/help/en/data-management-service/latest/listproxies) or [GetProxy](https://www.alibabacloud.com/help/en/data-management-service/latest/getproxy) operation to obtain this parameter.
    // 
    // This parameter is required.
    shared_ptr<int64_t> proxyId_ {};
    // The ID of the tenant. You can call the [GetUserActiveTenant](https://www.alibabacloud.com/help/en/data-management-service/latest/getuseractivetenant) or [ListUserTenants](https://www.alibabacloud.com/help/en/data-management-service/latest/listusertenants) operation to obtain this parameter.
    shared_ptr<int64_t> tid_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
