// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLOADBALANCERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETLOADBALANCERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class GetLoadBalancerRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetLoadBalancerRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(SiteId, siteId_);
    };
    friend void from_json(const Darabonba::Json& j, GetLoadBalancerRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
    };
    GetLoadBalancerRequest() = default ;
    GetLoadBalancerRequest(const GetLoadBalancerRequest &) = default ;
    GetLoadBalancerRequest(GetLoadBalancerRequest &&) = default ;
    GetLoadBalancerRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetLoadBalancerRequest() = default ;
    GetLoadBalancerRequest& operator=(const GetLoadBalancerRequest &) = default ;
    GetLoadBalancerRequest& operator=(GetLoadBalancerRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->id_ != nullptr
        && this->siteId_ != nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline GetLoadBalancerRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // siteId Field Functions 
    bool hasSiteId() const { return this->siteId_ != nullptr;};
    void deleteSiteId() { this->siteId_ = nullptr;};
    inline int64_t siteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, 0L) };
    inline GetLoadBalancerRequest& setSiteId(int64_t siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


  protected:
    // The ID of the load balancer, used to uniquely identify the load balancer to be queried. This ID is returned directly when the load balancer is created, or it can be obtained through the [ListLoadBalancers](https://help.aliyun.com/document_detail/2868897.html) interface for querying all load balancers under a site.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The site ID, which can be obtained by calling the [ListSites](~~ListSites~~) interface.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> siteId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
