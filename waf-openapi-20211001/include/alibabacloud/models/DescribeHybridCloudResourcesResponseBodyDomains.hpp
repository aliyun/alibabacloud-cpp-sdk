// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHYBRIDCLOUDRESOURCESRESPONSEBODYDOMAINS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHYBRIDCLOUDRESOURCESRESPONSEBODYDOMAINS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeHybridCloudResourcesResponseBodyDomainsListen.hpp>
#include <alibabacloud/models/DescribeHybridCloudResourcesResponseBodyDomainsRedirect.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeHybridCloudResourcesResponseBodyDomains : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHybridCloudResourcesResponseBodyDomains& obj) { 
      DARABONBA_PTR_TO_JSON(Cname, cname_);
      DARABONBA_PTR_TO_JSON(Domain, domain_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Listen, listen_);
      DARABONBA_PTR_TO_JSON(Redirect, redirect_);
      DARABONBA_PTR_TO_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Uid, uid_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHybridCloudResourcesResponseBodyDomains& obj) { 
      DARABONBA_PTR_FROM_JSON(Cname, cname_);
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Listen, listen_);
      DARABONBA_PTR_FROM_JSON(Redirect, redirect_);
      DARABONBA_PTR_FROM_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Uid, uid_);
    };
    DescribeHybridCloudResourcesResponseBodyDomains() = default ;
    DescribeHybridCloudResourcesResponseBodyDomains(const DescribeHybridCloudResourcesResponseBodyDomains &) = default ;
    DescribeHybridCloudResourcesResponseBodyDomains(DescribeHybridCloudResourcesResponseBodyDomains &&) = default ;
    DescribeHybridCloudResourcesResponseBodyDomains(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHybridCloudResourcesResponseBodyDomains() = default ;
    DescribeHybridCloudResourcesResponseBodyDomains& operator=(const DescribeHybridCloudResourcesResponseBodyDomains &) = default ;
    DescribeHybridCloudResourcesResponseBodyDomains& operator=(DescribeHybridCloudResourcesResponseBodyDomains &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cname_ != nullptr
        && this->domain_ != nullptr && this->id_ != nullptr && this->listen_ != nullptr && this->redirect_ != nullptr && this->resourceManagerResourceGroupId_ != nullptr
        && this->status_ != nullptr && this->uid_ != nullptr; };
    // cname Field Functions 
    bool hasCname() const { return this->cname_ != nullptr;};
    void deleteCname() { this->cname_ = nullptr;};
    inline string cname() const { DARABONBA_PTR_GET_DEFAULT(cname_, "") };
    inline DescribeHybridCloudResourcesResponseBodyDomains& setCname(string cname) { DARABONBA_PTR_SET_VALUE(cname_, cname) };


    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string domain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline DescribeHybridCloudResourcesResponseBodyDomains& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline DescribeHybridCloudResourcesResponseBodyDomains& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // listen Field Functions 
    bool hasListen() const { return this->listen_ != nullptr;};
    void deleteListen() { this->listen_ = nullptr;};
    inline const Models::DescribeHybridCloudResourcesResponseBodyDomainsListen & listen() const { DARABONBA_PTR_GET_CONST(listen_, Models::DescribeHybridCloudResourcesResponseBodyDomainsListen) };
    inline Models::DescribeHybridCloudResourcesResponseBodyDomainsListen listen() { DARABONBA_PTR_GET(listen_, Models::DescribeHybridCloudResourcesResponseBodyDomainsListen) };
    inline DescribeHybridCloudResourcesResponseBodyDomains& setListen(const Models::DescribeHybridCloudResourcesResponseBodyDomainsListen & listen) { DARABONBA_PTR_SET_VALUE(listen_, listen) };
    inline DescribeHybridCloudResourcesResponseBodyDomains& setListen(Models::DescribeHybridCloudResourcesResponseBodyDomainsListen && listen) { DARABONBA_PTR_SET_RVALUE(listen_, listen) };


    // redirect Field Functions 
    bool hasRedirect() const { return this->redirect_ != nullptr;};
    void deleteRedirect() { this->redirect_ = nullptr;};
    inline const Models::DescribeHybridCloudResourcesResponseBodyDomainsRedirect & redirect() const { DARABONBA_PTR_GET_CONST(redirect_, Models::DescribeHybridCloudResourcesResponseBodyDomainsRedirect) };
    inline Models::DescribeHybridCloudResourcesResponseBodyDomainsRedirect redirect() { DARABONBA_PTR_GET(redirect_, Models::DescribeHybridCloudResourcesResponseBodyDomainsRedirect) };
    inline DescribeHybridCloudResourcesResponseBodyDomains& setRedirect(const Models::DescribeHybridCloudResourcesResponseBodyDomainsRedirect & redirect) { DARABONBA_PTR_SET_VALUE(redirect_, redirect) };
    inline DescribeHybridCloudResourcesResponseBodyDomains& setRedirect(Models::DescribeHybridCloudResourcesResponseBodyDomainsRedirect && redirect) { DARABONBA_PTR_SET_RVALUE(redirect_, redirect) };


    // resourceManagerResourceGroupId Field Functions 
    bool hasResourceManagerResourceGroupId() const { return this->resourceManagerResourceGroupId_ != nullptr;};
    void deleteResourceManagerResourceGroupId() { this->resourceManagerResourceGroupId_ = nullptr;};
    inline string resourceManagerResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceManagerResourceGroupId_, "") };
    inline DescribeHybridCloudResourcesResponseBodyDomains& setResourceManagerResourceGroupId(string resourceManagerResourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceManagerResourceGroupId_, resourceManagerResourceGroupId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline DescribeHybridCloudResourcesResponseBodyDomains& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // uid Field Functions 
    bool hasUid() const { return this->uid_ != nullptr;};
    void deleteUid() { this->uid_ = nullptr;};
    inline string uid() const { DARABONBA_PTR_GET_DEFAULT(uid_, "") };
    inline DescribeHybridCloudResourcesResponseBodyDomains& setUid(string uid) { DARABONBA_PTR_SET_VALUE(uid_, uid) };


  protected:
    // The CNAME assigned by WAF.
    // 
    // >  This parameter is returned only if the value of **CnameEnabled** is true.
    std::shared_ptr<string> cname_ = nullptr;
    // The domain name.
    std::shared_ptr<string> domain_ = nullptr;
    // The access ID.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The listeners.
    std::shared_ptr<Models::DescribeHybridCloudResourcesResponseBodyDomainsListen> listen_ = nullptr;
    // The configurations of the forwarding rule.
    std::shared_ptr<Models::DescribeHybridCloudResourcesResponseBodyDomainsRedirect> redirect_ = nullptr;
    // The ID of the Alibaba Cloud resource group.
    std::shared_ptr<string> resourceManagerResourceGroupId_ = nullptr;
    // The status of the domain name. Valid values:
    // 
    // *   **1:** The domain name is in a normal state.
    // *   **2:** The domain name is being created.
    // *   **3:** The domain name is being modified.
    // *   **4:** The domain name is being released.
    // *   **5:** WAF no longer forwards the traffic of the domain name.
    std::shared_ptr<int32_t> status_ = nullptr;
    // The user ID.
    std::shared_ptr<string> uid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
