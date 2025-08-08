// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPROXYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETPROXYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class GetProxyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetProxyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ProxyId, proxyId_);
      DARABONBA_PTR_TO_JSON(Tid, tid_);
    };
    friend void from_json(const Darabonba::Json& j, GetProxyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ProxyId, proxyId_);
      DARABONBA_PTR_FROM_JSON(Tid, tid_);
    };
    GetProxyRequest() = default ;
    GetProxyRequest(const GetProxyRequest &) = default ;
    GetProxyRequest(GetProxyRequest &&) = default ;
    GetProxyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetProxyRequest() = default ;
    GetProxyRequest& operator=(const GetProxyRequest &) = default ;
    GetProxyRequest& operator=(GetProxyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->proxyId_ != nullptr
        && this->tid_ != nullptr; };
    // proxyId Field Functions 
    bool hasProxyId() const { return this->proxyId_ != nullptr;};
    void deleteProxyId() { this->proxyId_ = nullptr;};
    inline int64_t proxyId() const { DARABONBA_PTR_GET_DEFAULT(proxyId_, 0L) };
    inline GetProxyRequest& setProxyId(int64_t proxyId) { DARABONBA_PTR_SET_VALUE(proxyId_, proxyId) };


    // tid Field Functions 
    bool hasTid() const { return this->tid_ != nullptr;};
    void deleteTid() { this->tid_ = nullptr;};
    inline int64_t tid() const { DARABONBA_PTR_GET_DEFAULT(tid_, 0L) };
    inline GetProxyRequest& setTid(int64_t tid) { DARABONBA_PTR_SET_VALUE(tid_, tid) };


  protected:
    // The ID of the secure access proxy. You can call the [ListProxies](https://help.aliyun.com/document_detail/295371.html) operation to query the ID of the secure access proxy.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> proxyId_ = nullptr;
    // The ID of the tenant. You can call the [GetUserActiveTenant](https://help.aliyun.com/document_detail/198073.html) operation to obtain the tenant ID.
    std::shared_ptr<int64_t> tid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
