// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDOMAINRESPONSEBODYDOMAIN_HPP_
#define ALIBABACLOUD_MODELS_GETDOMAINRESPONSEBODYDOMAIN_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetDomainResponseBodyDomainFiling.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class GetDomainResponseBodyDomain : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDomainResponseBodyDomain& obj) { 
      DARABONBA_PTR_TO_JSON(BrandId, brandId_);
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
    friend void from_json(const Darabonba::Json& j, GetDomainResponseBodyDomain& obj) { 
      DARABONBA_PTR_FROM_JSON(BrandId, brandId_);
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
    GetDomainResponseBodyDomain() = default ;
    GetDomainResponseBodyDomain(const GetDomainResponseBodyDomain &) = default ;
    GetDomainResponseBodyDomain(GetDomainResponseBodyDomain &&) = default ;
    GetDomainResponseBodyDomain(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDomainResponseBodyDomain() = default ;
    GetDomainResponseBodyDomain& operator=(const GetDomainResponseBodyDomain &) = default ;
    GetDomainResponseBodyDomain& operator=(GetDomainResponseBodyDomain &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->brandId_ == nullptr
        && return this->createTime_ == nullptr && return this->defaultDomain_ == nullptr && return this->domain_ == nullptr && return this->domainId_ == nullptr && return this->domainType_ == nullptr
        && return this->filing_ == nullptr && return this->instanceId_ == nullptr && return this->lockMode_ == nullptr && return this->updateTime_ == nullptr; };
    // brandId Field Functions 
    bool hasBrandId() const { return this->brandId_ != nullptr;};
    void deleteBrandId() { this->brandId_ = nullptr;};
    inline string brandId() const { DARABONBA_PTR_GET_DEFAULT(brandId_, "") };
    inline GetDomainResponseBodyDomain& setBrandId(string brandId) { DARABONBA_PTR_SET_VALUE(brandId_, brandId) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline GetDomainResponseBodyDomain& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // defaultDomain Field Functions 
    bool hasDefaultDomain() const { return this->defaultDomain_ != nullptr;};
    void deleteDefaultDomain() { this->defaultDomain_ = nullptr;};
    inline bool defaultDomain() const { DARABONBA_PTR_GET_DEFAULT(defaultDomain_, false) };
    inline GetDomainResponseBodyDomain& setDefaultDomain(bool defaultDomain) { DARABONBA_PTR_SET_VALUE(defaultDomain_, defaultDomain) };


    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string domain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline GetDomainResponseBodyDomain& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // domainId Field Functions 
    bool hasDomainId() const { return this->domainId_ != nullptr;};
    void deleteDomainId() { this->domainId_ = nullptr;};
    inline string domainId() const { DARABONBA_PTR_GET_DEFAULT(domainId_, "") };
    inline GetDomainResponseBodyDomain& setDomainId(string domainId) { DARABONBA_PTR_SET_VALUE(domainId_, domainId) };


    // domainType Field Functions 
    bool hasDomainType() const { return this->domainType_ != nullptr;};
    void deleteDomainType() { this->domainType_ = nullptr;};
    inline string domainType() const { DARABONBA_PTR_GET_DEFAULT(domainType_, "") };
    inline GetDomainResponseBodyDomain& setDomainType(string domainType) { DARABONBA_PTR_SET_VALUE(domainType_, domainType) };


    // filing Field Functions 
    bool hasFiling() const { return this->filing_ != nullptr;};
    void deleteFiling() { this->filing_ = nullptr;};
    inline const Models::GetDomainResponseBodyDomainFiling & filing() const { DARABONBA_PTR_GET_CONST(filing_, Models::GetDomainResponseBodyDomainFiling) };
    inline Models::GetDomainResponseBodyDomainFiling filing() { DARABONBA_PTR_GET(filing_, Models::GetDomainResponseBodyDomainFiling) };
    inline GetDomainResponseBodyDomain& setFiling(const Models::GetDomainResponseBodyDomainFiling & filing) { DARABONBA_PTR_SET_VALUE(filing_, filing) };
    inline GetDomainResponseBodyDomain& setFiling(Models::GetDomainResponseBodyDomainFiling && filing) { DARABONBA_PTR_SET_RVALUE(filing_, filing) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetDomainResponseBodyDomain& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // lockMode Field Functions 
    bool hasLockMode() const { return this->lockMode_ != nullptr;};
    void deleteLockMode() { this->lockMode_ = nullptr;};
    inline string lockMode() const { DARABONBA_PTR_GET_DEFAULT(lockMode_, "") };
    inline GetDomainResponseBodyDomain& setLockMode(string lockMode) { DARABONBA_PTR_SET_VALUE(lockMode_, lockMode) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline int64_t updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
    inline GetDomainResponseBodyDomain& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    std::shared_ptr<string> brandId_ = nullptr;
    // The start time when the change order was created.
    std::shared_ptr<int64_t> createTime_ = nullptr;
    // Whether it is the default domain.
    std::shared_ptr<bool> defaultDomain_ = nullptr;
    // The domain.
    std::shared_ptr<string> domain_ = nullptr;
    // Domain ID.
    std::shared_ptr<string> domainId_ = nullptr;
    // The type of the domain name. Valid values:
    // 
    // *   **system_init**: Initialize domain
    // *   **user_custom**: user custom domain
    std::shared_ptr<string> domainType_ = nullptr;
    // Domain registration information.
    std::shared_ptr<Models::GetDomainResponseBodyDomainFiling> filing_ = nullptr;
    // The instance ID.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The lock status of the instance. Valid values:
    // 
    // *   **Unlock**: The instance is normal.
    // *   **lockByLicense**: Not available due to license restrictions.
    std::shared_ptr<string> lockMode_ = nullptr;
    // The time when the service was updated.
    std::shared_ptr<int64_t> updateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
