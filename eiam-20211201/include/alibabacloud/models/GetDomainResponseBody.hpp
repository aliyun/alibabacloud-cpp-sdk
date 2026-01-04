// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDOMAINRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDOMAINRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class GetDomainResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDomainResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Domain, domain_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetDomainResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetDomainResponseBody() = default ;
    GetDomainResponseBody(const GetDomainResponseBody &) = default ;
    GetDomainResponseBody(GetDomainResponseBody &&) = default ;
    GetDomainResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDomainResponseBody() = default ;
    GetDomainResponseBody& operator=(const GetDomainResponseBody &) = default ;
    GetDomainResponseBody& operator=(GetDomainResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Domain : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Domain& obj) { 
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
      friend void from_json(const Darabonba::Json& j, Domain& obj) { 
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
      Domain() = default ;
      Domain(const Domain &) = default ;
      Domain(Domain &&) = default ;
      Domain(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Domain() = default ;
      Domain& operator=(const Domain &) = default ;
      Domain& operator=(Domain &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Filing : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Filing& obj) { 
          DARABONBA_PTR_TO_JSON(IcpNumber, icpNumber_);
        };
        friend void from_json(const Darabonba::Json& j, Filing& obj) { 
          DARABONBA_PTR_FROM_JSON(IcpNumber, icpNumber_);
        };
        Filing() = default ;
        Filing(const Filing &) = default ;
        Filing(Filing &&) = default ;
        Filing(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Filing() = default ;
        Filing& operator=(const Filing &) = default ;
        Filing& operator=(Filing &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->icpNumber_ == nullptr; };
        // icpNumber Field Functions 
        bool hasIcpNumber() const { return this->icpNumber_ != nullptr;};
        void deleteIcpNumber() { this->icpNumber_ = nullptr;};
        inline string getIcpNumber() const { DARABONBA_PTR_GET_DEFAULT(icpNumber_, "") };
        inline Filing& setIcpNumber(string icpNumber) { DARABONBA_PTR_SET_VALUE(icpNumber_, icpNumber) };


      protected:
        // <notice>The ICP filing number is only applicable for services in the China region.  For non-China regions, no validation or display of this record number will be performed.</notice>
        // The ICP filing number associated with the domain name, with a maximum length of 64 characters.
        shared_ptr<string> icpNumber_ {};
      };

      virtual bool empty() const override { return this->brandId_ == nullptr
        && this->createTime_ == nullptr && this->defaultDomain_ == nullptr && this->domain_ == nullptr && this->domainId_ == nullptr && this->domainType_ == nullptr
        && this->filing_ == nullptr && this->instanceId_ == nullptr && this->lockMode_ == nullptr && this->updateTime_ == nullptr; };
      // brandId Field Functions 
      bool hasBrandId() const { return this->brandId_ != nullptr;};
      void deleteBrandId() { this->brandId_ = nullptr;};
      inline string getBrandId() const { DARABONBA_PTR_GET_DEFAULT(brandId_, "") };
      inline Domain& setBrandId(string brandId) { DARABONBA_PTR_SET_VALUE(brandId_, brandId) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
      inline Domain& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // defaultDomain Field Functions 
      bool hasDefaultDomain() const { return this->defaultDomain_ != nullptr;};
      void deleteDefaultDomain() { this->defaultDomain_ = nullptr;};
      inline bool getDefaultDomain() const { DARABONBA_PTR_GET_DEFAULT(defaultDomain_, false) };
      inline Domain& setDefaultDomain(bool defaultDomain) { DARABONBA_PTR_SET_VALUE(defaultDomain_, defaultDomain) };


      // domain Field Functions 
      bool hasDomain() const { return this->domain_ != nullptr;};
      void deleteDomain() { this->domain_ = nullptr;};
      inline string getDomain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
      inline Domain& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


      // domainId Field Functions 
      bool hasDomainId() const { return this->domainId_ != nullptr;};
      void deleteDomainId() { this->domainId_ = nullptr;};
      inline string getDomainId() const { DARABONBA_PTR_GET_DEFAULT(domainId_, "") };
      inline Domain& setDomainId(string domainId) { DARABONBA_PTR_SET_VALUE(domainId_, domainId) };


      // domainType Field Functions 
      bool hasDomainType() const { return this->domainType_ != nullptr;};
      void deleteDomainType() { this->domainType_ = nullptr;};
      inline string getDomainType() const { DARABONBA_PTR_GET_DEFAULT(domainType_, "") };
      inline Domain& setDomainType(string domainType) { DARABONBA_PTR_SET_VALUE(domainType_, domainType) };


      // filing Field Functions 
      bool hasFiling() const { return this->filing_ != nullptr;};
      void deleteFiling() { this->filing_ = nullptr;};
      inline const Domain::Filing & getFiling() const { DARABONBA_PTR_GET_CONST(filing_, Domain::Filing) };
      inline Domain::Filing getFiling() { DARABONBA_PTR_GET(filing_, Domain::Filing) };
      inline Domain& setFiling(const Domain::Filing & filing) { DARABONBA_PTR_SET_VALUE(filing_, filing) };
      inline Domain& setFiling(Domain::Filing && filing) { DARABONBA_PTR_SET_RVALUE(filing_, filing) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline Domain& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // lockMode Field Functions 
      bool hasLockMode() const { return this->lockMode_ != nullptr;};
      void deleteLockMode() { this->lockMode_ = nullptr;};
      inline string getLockMode() const { DARABONBA_PTR_GET_DEFAULT(lockMode_, "") };
      inline Domain& setLockMode(string lockMode) { DARABONBA_PTR_SET_VALUE(lockMode_, lockMode) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline int64_t getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
      inline Domain& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    protected:
      shared_ptr<string> brandId_ {};
      // The start time when the change order was created.
      shared_ptr<int64_t> createTime_ {};
      // Whether it is the default domain.
      shared_ptr<bool> defaultDomain_ {};
      // The domain.
      shared_ptr<string> domain_ {};
      // Domain ID.
      shared_ptr<string> domainId_ {};
      // The type of the domain name. Valid values:
      // 
      // *   **system_init**: Initialize domain
      // *   **user_custom**: user custom domain
      shared_ptr<string> domainType_ {};
      // Domain registration information.
      shared_ptr<Domain::Filing> filing_ {};
      // The instance ID.
      shared_ptr<string> instanceId_ {};
      // The lock status of the instance. Valid values:
      // 
      // *   **Unlock**: The instance is normal.
      // *   **lockByLicense**: Not available due to license restrictions.
      shared_ptr<string> lockMode_ {};
      // The time when the service was updated.
      shared_ptr<int64_t> updateTime_ {};
    };

    virtual bool empty() const override { return this->domain_ == nullptr
        && this->requestId_ == nullptr; };
    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline const GetDomainResponseBody::Domain & getDomain() const { DARABONBA_PTR_GET_CONST(domain_, GetDomainResponseBody::Domain) };
    inline GetDomainResponseBody::Domain getDomain() { DARABONBA_PTR_GET(domain_, GetDomainResponseBody::Domain) };
    inline GetDomainResponseBody& setDomain(const GetDomainResponseBody::Domain & domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };
    inline GetDomainResponseBody& setDomain(GetDomainResponseBody::Domain && domain) { DARABONBA_PTR_SET_RVALUE(domain_, domain) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDomainResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The domain name.
    shared_ptr<GetDomainResponseBody::Domain> domain_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
