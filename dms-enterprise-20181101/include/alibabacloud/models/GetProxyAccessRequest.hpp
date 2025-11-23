// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPROXYACCESSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETPROXYACCESSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class GetProxyAccessRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetProxyAccessRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ProxyAccessId, proxyAccessId_);
      DARABONBA_PTR_TO_JSON(Tid, tid_);
    };
    friend void from_json(const Darabonba::Json& j, GetProxyAccessRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ProxyAccessId, proxyAccessId_);
      DARABONBA_PTR_FROM_JSON(Tid, tid_);
    };
    GetProxyAccessRequest() = default ;
    GetProxyAccessRequest(const GetProxyAccessRequest &) = default ;
    GetProxyAccessRequest(GetProxyAccessRequest &&) = default ;
    GetProxyAccessRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetProxyAccessRequest() = default ;
    GetProxyAccessRequest& operator=(const GetProxyAccessRequest &) = default ;
    GetProxyAccessRequest& operator=(GetProxyAccessRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->proxyAccessId_ == nullptr
        && return this->tid_ == nullptr; };
    // proxyAccessId Field Functions 
    bool hasProxyAccessId() const { return this->proxyAccessId_ != nullptr;};
    void deleteProxyAccessId() { this->proxyAccessId_ = nullptr;};
    inline int64_t proxyAccessId() const { DARABONBA_PTR_GET_DEFAULT(proxyAccessId_, 0L) };
    inline GetProxyAccessRequest& setProxyAccessId(int64_t proxyAccessId) { DARABONBA_PTR_SET_VALUE(proxyAccessId_, proxyAccessId) };


    // tid Field Functions 
    bool hasTid() const { return this->tid_ != nullptr;};
    void deleteTid() { this->tid_ = nullptr;};
    inline int64_t tid() const { DARABONBA_PTR_GET_DEFAULT(tid_, 0L) };
    inline GetProxyAccessRequest& setTid(int64_t tid) { DARABONBA_PTR_SET_VALUE(tid_, tid) };


  protected:
    // The ID that Data Management (DMS) generates after the user is authorized to enable the secure access proxy feature for an instance. The ID is unique in DMS. You can call the [ListProxyAccesses](https://help.aliyun.com/document_detail/295386.html) operation to query the ID.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> proxyAccessId_ = nullptr;
    // The ID of the tenant. You can call the [GetUserActiveTenant](https://help.aliyun.com/document_detail/198073.html) or [ListUserTenants](https://help.aliyun.com/document_detail/198074.html) operation to query the tenant ID.
    std::shared_ptr<int64_t> tid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
