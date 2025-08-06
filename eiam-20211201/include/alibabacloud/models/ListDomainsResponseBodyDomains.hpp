// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDOMAINSRESPONSEBODYDOMAINS_HPP_
#define ALIBABACLOUD_MODELS_LISTDOMAINSRESPONSEBODYDOMAINS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListDomainsResponseBodyDomainsFiling.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class ListDomainsResponseBodyDomains : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDomainsResponseBodyDomains& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(DefaultDomain, defaultDomain_);
      DARABONBA_PTR_TO_JSON(Domain, domain_);
      DARABONBA_PTR_TO_JSON(DomainId, domainId_);
      DARABONBA_PTR_TO_JSON(DomainType, domainType_);
      DARABONBA_PTR_TO_JSON(Filing, filing_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(LockMode, lockMode_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, ListDomainsResponseBodyDomains& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(DefaultDomain, defaultDomain_);
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
      DARABONBA_PTR_FROM_JSON(DomainId, domainId_);
      DARABONBA_PTR_FROM_JSON(DomainType, domainType_);
      DARABONBA_PTR_FROM_JSON(Filing, filing_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(LockMode, lockMode_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
    };
    ListDomainsResponseBodyDomains() = default ;
    ListDomainsResponseBodyDomains(const ListDomainsResponseBodyDomains &) = default ;
    ListDomainsResponseBodyDomains(ListDomainsResponseBodyDomains &&) = default ;
    ListDomainsResponseBodyDomains(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDomainsResponseBodyDomains() = default ;
    ListDomainsResponseBodyDomains& operator=(const ListDomainsResponseBodyDomains &) = default ;
    ListDomainsResponseBodyDomains& operator=(ListDomainsResponseBodyDomains &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->createTime_ != nullptr
        && this->defaultDomain_ != nullptr && this->domain_ != nullptr && this->domainId_ != nullptr && this->domainType_ != nullptr && this->filing_ != nullptr
        && this->instanceId_ != nullptr && this->lockMode_ != nullptr && this->updateTime_ != nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline ListDomainsResponseBodyDomains& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // defaultDomain Field Functions 
    bool hasDefaultDomain() const { return this->defaultDomain_ != nullptr;};
    void deleteDefaultDomain() { this->defaultDomain_ = nullptr;};
    inline bool defaultDomain() const { DARABONBA_PTR_GET_DEFAULT(defaultDomain_, false) };
    inline ListDomainsResponseBodyDomains& setDefaultDomain(bool defaultDomain) { DARABONBA_PTR_SET_VALUE(defaultDomain_, defaultDomain) };


    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string domain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline ListDomainsResponseBodyDomains& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // domainId Field Functions 
    bool hasDomainId() const { return this->domainId_ != nullptr;};
    void deleteDomainId() { this->domainId_ = nullptr;};
    inline string domainId() const { DARABONBA_PTR_GET_DEFAULT(domainId_, "") };
    inline ListDomainsResponseBodyDomains& setDomainId(string domainId) { DARABONBA_PTR_SET_VALUE(domainId_, domainId) };


    // domainType Field Functions 
    bool hasDomainType() const { return this->domainType_ != nullptr;};
    void deleteDomainType() { this->domainType_ = nullptr;};
    inline string domainType() const { DARABONBA_PTR_GET_DEFAULT(domainType_, "") };
    inline ListDomainsResponseBodyDomains& setDomainType(string domainType) { DARABONBA_PTR_SET_VALUE(domainType_, domainType) };


    // filing Field Functions 
    bool hasFiling() const { return this->filing_ != nullptr;};
    void deleteFiling() { this->filing_ = nullptr;};
    inline const Models::ListDomainsResponseBodyDomainsFiling & filing() const { DARABONBA_PTR_GET_CONST(filing_, Models::ListDomainsResponseBodyDomainsFiling) };
    inline Models::ListDomainsResponseBodyDomainsFiling filing() { DARABONBA_PTR_GET(filing_, Models::ListDomainsResponseBodyDomainsFiling) };
    inline ListDomainsResponseBodyDomains& setFiling(const Models::ListDomainsResponseBodyDomainsFiling & filing) { DARABONBA_PTR_SET_VALUE(filing_, filing) };
    inline ListDomainsResponseBodyDomains& setFiling(Models::ListDomainsResponseBodyDomainsFiling && filing) { DARABONBA_PTR_SET_RVALUE(filing_, filing) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListDomainsResponseBodyDomains& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // lockMode Field Functions 
    bool hasLockMode() const { return this->lockMode_ != nullptr;};
    void deleteLockMode() { this->lockMode_ = nullptr;};
    inline string lockMode() const { DARABONBA_PTR_GET_DEFAULT(lockMode_, "") };
    inline ListDomainsResponseBodyDomains& setLockMode(string lockMode) { DARABONBA_PTR_SET_VALUE(lockMode_, lockMode) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline int64_t updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
    inline ListDomainsResponseBodyDomains& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    // The time when the domain name was created. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    std::shared_ptr<int64_t> createTime_ = nullptr;
    // Indicates whether the domain name is the default domain.
    std::shared_ptr<bool> defaultDomain_ = nullptr;
    // The domain.
    std::shared_ptr<string> domain_ = nullptr;
    // The domain ID.
    std::shared_ptr<string> domainId_ = nullptr;
    // The type of the domain name. Valid values:
    // 
    // *   system_init: an initial domain name.
    // *   user_custom: a custom domain name.
    std::shared_ptr<string> domainType_ = nullptr;
    // The information about the Internet content provider (ICP) filing of the domain name.
    std::shared_ptr<Models::ListDomainsResponseBodyDomainsFiling> filing_ = nullptr;
    // The instance ID.
    std::shared_ptr<string> instanceId_ = nullptr;
    // Indicates whether the domain name is locked. Valid values:
    // 
    // *   unlock
    // *   lockByLicense
    std::shared_ptr<string> lockMode_ = nullptr;
    // The time when the domain name was last updated. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    std::shared_ptr<int64_t> updateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
