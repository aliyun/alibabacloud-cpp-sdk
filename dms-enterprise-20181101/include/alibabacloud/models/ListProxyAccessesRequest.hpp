// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPROXYACCESSESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTPROXYACCESSESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ListProxyAccessesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListProxyAccessesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ProxyId, proxyId_);
      DARABONBA_PTR_TO_JSON(Tid, tid_);
    };
    friend void from_json(const Darabonba::Json& j, ListProxyAccessesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ProxyId, proxyId_);
      DARABONBA_PTR_FROM_JSON(Tid, tid_);
    };
    ListProxyAccessesRequest() = default ;
    ListProxyAccessesRequest(const ListProxyAccessesRequest &) = default ;
    ListProxyAccessesRequest(ListProxyAccessesRequest &&) = default ;
    ListProxyAccessesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListProxyAccessesRequest() = default ;
    ListProxyAccessesRequest& operator=(const ListProxyAccessesRequest &) = default ;
    ListProxyAccessesRequest& operator=(ListProxyAccessesRequest &&) = default ;
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
    inline ListProxyAccessesRequest& setProxyId(int64_t proxyId) { DARABONBA_PTR_SET_VALUE(proxyId_, proxyId) };


    // tid Field Functions 
    bool hasTid() const { return this->tid_ != nullptr;};
    void deleteTid() { this->tid_ = nullptr;};
    inline int64_t getTid() const { DARABONBA_PTR_GET_DEFAULT(tid_, 0L) };
    inline ListProxyAccessesRequest& setTid(int64_t tid) { DARABONBA_PTR_SET_VALUE(tid_, tid) };


  protected:
    // The ID of the secure access proxy. 
    // 
    // >  You can call the [ListProxies](https://www.alibabacloud.com/help/en/data-management-service/latest/listproxies) operation to query the ID of the secure access proxy.
    // 
    // This parameter is required.
    shared_ptr<int64_t> proxyId_ {};
    // The ID of the tenant. 
    // 
    // >  You can call the [GetUserActiveTenant](https://www.alibabacloud.com/help/en/data-management-service/latest/getuseractivetenant) operation to query the ID of the tenant.
    shared_ptr<int64_t> tid_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
