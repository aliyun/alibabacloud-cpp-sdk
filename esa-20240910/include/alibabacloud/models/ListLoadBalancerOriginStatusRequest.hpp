// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLOADBALANCERORIGINSTATUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTLOADBALANCERORIGINSTATUSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class ListLoadBalancerOriginStatusRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListLoadBalancerOriginStatusRequest& obj) { 
      DARABONBA_PTR_TO_JSON(LoadBalancerIds, loadBalancerIds_);
      DARABONBA_PTR_TO_JSON(PoolType, poolType_);
      DARABONBA_PTR_TO_JSON(SiteId, siteId_);
    };
    friend void from_json(const Darabonba::Json& j, ListLoadBalancerOriginStatusRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(LoadBalancerIds, loadBalancerIds_);
      DARABONBA_PTR_FROM_JSON(PoolType, poolType_);
      DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
    };
    ListLoadBalancerOriginStatusRequest() = default ;
    ListLoadBalancerOriginStatusRequest(const ListLoadBalancerOriginStatusRequest &) = default ;
    ListLoadBalancerOriginStatusRequest(ListLoadBalancerOriginStatusRequest &&) = default ;
    ListLoadBalancerOriginStatusRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListLoadBalancerOriginStatusRequest() = default ;
    ListLoadBalancerOriginStatusRequest& operator=(const ListLoadBalancerOriginStatusRequest &) = default ;
    ListLoadBalancerOriginStatusRequest& operator=(ListLoadBalancerOriginStatusRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->loadBalancerIds_ == nullptr
        && this->poolType_ == nullptr && this->siteId_ == nullptr; };
    // loadBalancerIds Field Functions 
    bool hasLoadBalancerIds() const { return this->loadBalancerIds_ != nullptr;};
    void deleteLoadBalancerIds() { this->loadBalancerIds_ = nullptr;};
    inline string getLoadBalancerIds() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerIds_, "") };
    inline ListLoadBalancerOriginStatusRequest& setLoadBalancerIds(string loadBalancerIds) { DARABONBA_PTR_SET_VALUE(loadBalancerIds_, loadBalancerIds) };


    // poolType Field Functions 
    bool hasPoolType() const { return this->poolType_ != nullptr;};
    void deletePoolType() { this->poolType_ = nullptr;};
    inline string getPoolType() const { DARABONBA_PTR_GET_DEFAULT(poolType_, "") };
    inline ListLoadBalancerOriginStatusRequest& setPoolType(string poolType) { DARABONBA_PTR_SET_VALUE(poolType_, poolType) };


    // siteId Field Functions 
    bool hasSiteId() const { return this->siteId_ != nullptr;};
    void deleteSiteId() { this->siteId_ = nullptr;};
    inline int64_t getSiteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, 0L) };
    inline ListLoadBalancerOriginStatusRequest& setSiteId(int64_t siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


  protected:
    // This parameter is required.
    shared_ptr<string> loadBalancerIds_ {};
    shared_ptr<string> poolType_ {};
    // This parameter is required.
    shared_ptr<int64_t> siteId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
