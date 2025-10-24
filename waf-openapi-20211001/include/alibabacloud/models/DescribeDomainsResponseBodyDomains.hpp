// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINSRESPONSEBODYDOMAINS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINSRESPONSEBODYDOMAINS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeDomainsResponseBodyDomainsBackeds.hpp>
#include <alibabacloud/models/DescribeDomainsResponseBodyDomainsListenPorts.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeDomainsResponseBodyDomains : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainsResponseBodyDomains& obj) { 
      DARABONBA_PTR_TO_JSON(Backeds, backeds_);
      DARABONBA_PTR_TO_JSON(Cname, cname_);
      DARABONBA_PTR_TO_JSON(Domain, domain_);
      DARABONBA_PTR_TO_JSON(DomainId, domainId_);
      DARABONBA_PTR_TO_JSON(ListenPorts, listenPorts_);
      DARABONBA_PTR_TO_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainsResponseBodyDomains& obj) { 
      DARABONBA_PTR_FROM_JSON(Backeds, backeds_);
      DARABONBA_PTR_FROM_JSON(Cname, cname_);
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
      DARABONBA_PTR_FROM_JSON(DomainId, domainId_);
      DARABONBA_PTR_FROM_JSON(ListenPorts, listenPorts_);
      DARABONBA_PTR_FROM_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeDomainsResponseBodyDomains() = default ;
    DescribeDomainsResponseBodyDomains(const DescribeDomainsResponseBodyDomains &) = default ;
    DescribeDomainsResponseBodyDomains(DescribeDomainsResponseBodyDomains &&) = default ;
    DescribeDomainsResponseBodyDomains(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainsResponseBodyDomains() = default ;
    DescribeDomainsResponseBodyDomains& operator=(const DescribeDomainsResponseBodyDomains &) = default ;
    DescribeDomainsResponseBodyDomains& operator=(DescribeDomainsResponseBodyDomains &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->backeds_ == nullptr
        && return this->cname_ == nullptr && return this->domain_ == nullptr && return this->domainId_ == nullptr && return this->listenPorts_ == nullptr && return this->resourceManagerResourceGroupId_ == nullptr
        && return this->status_ == nullptr; };
    // backeds Field Functions 
    bool hasBackeds() const { return this->backeds_ != nullptr;};
    void deleteBackeds() { this->backeds_ = nullptr;};
    inline const Models::DescribeDomainsResponseBodyDomainsBackeds & backeds() const { DARABONBA_PTR_GET_CONST(backeds_, Models::DescribeDomainsResponseBodyDomainsBackeds) };
    inline Models::DescribeDomainsResponseBodyDomainsBackeds backeds() { DARABONBA_PTR_GET(backeds_, Models::DescribeDomainsResponseBodyDomainsBackeds) };
    inline DescribeDomainsResponseBodyDomains& setBackeds(const Models::DescribeDomainsResponseBodyDomainsBackeds & backeds) { DARABONBA_PTR_SET_VALUE(backeds_, backeds) };
    inline DescribeDomainsResponseBodyDomains& setBackeds(Models::DescribeDomainsResponseBodyDomainsBackeds && backeds) { DARABONBA_PTR_SET_RVALUE(backeds_, backeds) };


    // cname Field Functions 
    bool hasCname() const { return this->cname_ != nullptr;};
    void deleteCname() { this->cname_ = nullptr;};
    inline string cname() const { DARABONBA_PTR_GET_DEFAULT(cname_, "") };
    inline DescribeDomainsResponseBodyDomains& setCname(string cname) { DARABONBA_PTR_SET_VALUE(cname_, cname) };


    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string domain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline DescribeDomainsResponseBodyDomains& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // domainId Field Functions 
    bool hasDomainId() const { return this->domainId_ != nullptr;};
    void deleteDomainId() { this->domainId_ = nullptr;};
    inline string domainId() const { DARABONBA_PTR_GET_DEFAULT(domainId_, "") };
    inline DescribeDomainsResponseBodyDomains& setDomainId(string domainId) { DARABONBA_PTR_SET_VALUE(domainId_, domainId) };


    // listenPorts Field Functions 
    bool hasListenPorts() const { return this->listenPorts_ != nullptr;};
    void deleteListenPorts() { this->listenPorts_ = nullptr;};
    inline const Models::DescribeDomainsResponseBodyDomainsListenPorts & listenPorts() const { DARABONBA_PTR_GET_CONST(listenPorts_, Models::DescribeDomainsResponseBodyDomainsListenPorts) };
    inline Models::DescribeDomainsResponseBodyDomainsListenPorts listenPorts() { DARABONBA_PTR_GET(listenPorts_, Models::DescribeDomainsResponseBodyDomainsListenPorts) };
    inline DescribeDomainsResponseBodyDomains& setListenPorts(const Models::DescribeDomainsResponseBodyDomainsListenPorts & listenPorts) { DARABONBA_PTR_SET_VALUE(listenPorts_, listenPorts) };
    inline DescribeDomainsResponseBodyDomains& setListenPorts(Models::DescribeDomainsResponseBodyDomainsListenPorts && listenPorts) { DARABONBA_PTR_SET_RVALUE(listenPorts_, listenPorts) };


    // resourceManagerResourceGroupId Field Functions 
    bool hasResourceManagerResourceGroupId() const { return this->resourceManagerResourceGroupId_ != nullptr;};
    void deleteResourceManagerResourceGroupId() { this->resourceManagerResourceGroupId_ = nullptr;};
    inline string resourceManagerResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceManagerResourceGroupId_, "") };
    inline DescribeDomainsResponseBodyDomains& setResourceManagerResourceGroupId(string resourceManagerResourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceManagerResourceGroupId_, resourceManagerResourceGroupId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline DescribeDomainsResponseBodyDomains& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The back-to-origin settings.
    std::shared_ptr<Models::DescribeDomainsResponseBodyDomainsBackeds> backeds_ = nullptr;
    // The CNAME assigned by WAF to the domain name.
    std::shared_ptr<string> cname_ = nullptr;
    // The domain name that is added to WAF in CNAME record mode.
    std::shared_ptr<string> domain_ = nullptr;
    std::shared_ptr<string> domainId_ = nullptr;
    // The configurations of the listeners.
    std::shared_ptr<Models::DescribeDomainsResponseBodyDomainsListenPorts> listenPorts_ = nullptr;
    // The ID of the resource group.
    std::shared_ptr<string> resourceManagerResourceGroupId_ = nullptr;
    // The status of the domain name. Valid values:
    // 
    // *   **1:** The domain name is in a normal state.
    // *   **2:** The domain name is being created.
    // *   **3:** The domain name is being modified.
    // *   **4:** The domain name is being released.
    // *   **5:** WAF no longer forwards traffic that is sent to the domain name.
    std::shared_ptr<int32_t> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
