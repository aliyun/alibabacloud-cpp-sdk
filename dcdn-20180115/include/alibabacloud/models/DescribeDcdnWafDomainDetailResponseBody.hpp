// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNWAFDOMAINDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNWAFDOMAINDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnWafDomainDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnWafDomainDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Domain, domain_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnWafDomainDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDcdnWafDomainDetailResponseBody() = default ;
    DescribeDcdnWafDomainDetailResponseBody(const DescribeDcdnWafDomainDetailResponseBody &) = default ;
    DescribeDcdnWafDomainDetailResponseBody(DescribeDcdnWafDomainDetailResponseBody &&) = default ;
    DescribeDcdnWafDomainDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnWafDomainDetailResponseBody() = default ;
    DescribeDcdnWafDomainDetailResponseBody& operator=(const DescribeDcdnWafDomainDetailResponseBody &) = default ;
    DescribeDcdnWafDomainDetailResponseBody& operator=(DescribeDcdnWafDomainDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Domain : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Domain& obj) { 
        DARABONBA_PTR_TO_JSON(DefenseScenes, defenseScenes_);
        DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      };
      friend void from_json(const Darabonba::Json& j, Domain& obj) { 
        DARABONBA_PTR_FROM_JSON(DefenseScenes, defenseScenes_);
        DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
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
      class DefenseScenes : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DefenseScenes& obj) { 
          DARABONBA_PTR_TO_JSON(DefenseScene, defenseScene_);
          DARABONBA_PTR_TO_JSON(PolicyId, policyId_);
          DARABONBA_PTR_TO_JSON(PolicyIds, policyIds_);
        };
        friend void from_json(const Darabonba::Json& j, DefenseScenes& obj) { 
          DARABONBA_PTR_FROM_JSON(DefenseScene, defenseScene_);
          DARABONBA_PTR_FROM_JSON(PolicyId, policyId_);
          DARABONBA_PTR_FROM_JSON(PolicyIds, policyIds_);
        };
        DefenseScenes() = default ;
        DefenseScenes(const DefenseScenes &) = default ;
        DefenseScenes(DefenseScenes &&) = default ;
        DefenseScenes(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DefenseScenes() = default ;
        DefenseScenes& operator=(const DefenseScenes &) = default ;
        DefenseScenes& operator=(DefenseScenes &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->defenseScene_ == nullptr
        && this->policyId_ == nullptr && this->policyIds_ == nullptr; };
        // defenseScene Field Functions 
        bool hasDefenseScene() const { return this->defenseScene_ != nullptr;};
        void deleteDefenseScene() { this->defenseScene_ = nullptr;};
        inline string getDefenseScene() const { DARABONBA_PTR_GET_DEFAULT(defenseScene_, "") };
        inline DefenseScenes& setDefenseScene(string defenseScene) { DARABONBA_PTR_SET_VALUE(defenseScene_, defenseScene) };


        // policyId Field Functions 
        bool hasPolicyId() const { return this->policyId_ != nullptr;};
        void deletePolicyId() { this->policyId_ = nullptr;};
        inline int64_t getPolicyId() const { DARABONBA_PTR_GET_DEFAULT(policyId_, 0L) };
        inline DefenseScenes& setPolicyId(int64_t policyId) { DARABONBA_PTR_SET_VALUE(policyId_, policyId) };


        // policyIds Field Functions 
        bool hasPolicyIds() const { return this->policyIds_ != nullptr;};
        void deletePolicyIds() { this->policyIds_ = nullptr;};
        inline string getPolicyIds() const { DARABONBA_PTR_GET_DEFAULT(policyIds_, "") };
        inline DefenseScenes& setPolicyIds(string policyIds) { DARABONBA_PTR_SET_VALUE(policyIds_, policyIds) };


      protected:
        // The type of the protection policy. Valid values:
        // 
        // *   waf_group: basic web protection
        // *   custom_acl: custom protection
        // *   whitelist: whitelist
        shared_ptr<string> defenseScene_ {};
        // The ID of the protection policy.
        shared_ptr<int64_t> policyId_ {};
        // The IDs of the protection policy.
        shared_ptr<string> policyIds_ {};
      };

      virtual bool empty() const override { return this->defenseScenes_ == nullptr
        && this->domainName_ == nullptr; };
      // defenseScenes Field Functions 
      bool hasDefenseScenes() const { return this->defenseScenes_ != nullptr;};
      void deleteDefenseScenes() { this->defenseScenes_ = nullptr;};
      inline const vector<Domain::DefenseScenes> & getDefenseScenes() const { DARABONBA_PTR_GET_CONST(defenseScenes_, vector<Domain::DefenseScenes>) };
      inline vector<Domain::DefenseScenes> getDefenseScenes() { DARABONBA_PTR_GET(defenseScenes_, vector<Domain::DefenseScenes>) };
      inline Domain& setDefenseScenes(const vector<Domain::DefenseScenes> & defenseScenes) { DARABONBA_PTR_SET_VALUE(defenseScenes_, defenseScenes) };
      inline Domain& setDefenseScenes(vector<Domain::DefenseScenes> && defenseScenes) { DARABONBA_PTR_SET_RVALUE(defenseScenes_, defenseScenes) };


      // domainName Field Functions 
      bool hasDomainName() const { return this->domainName_ != nullptr;};
      void deleteDomainName() { this->domainName_ = nullptr;};
      inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
      inline Domain& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    protected:
      // The types of the protection policies.
      shared_ptr<vector<Domain::DefenseScenes>> defenseScenes_ {};
      // The accelerated domain name.
      shared_ptr<string> domainName_ {};
    };

    virtual bool empty() const override { return this->domain_ == nullptr
        && this->requestId_ == nullptr; };
    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline const DescribeDcdnWafDomainDetailResponseBody::Domain & getDomain() const { DARABONBA_PTR_GET_CONST(domain_, DescribeDcdnWafDomainDetailResponseBody::Domain) };
    inline DescribeDcdnWafDomainDetailResponseBody::Domain getDomain() { DARABONBA_PTR_GET(domain_, DescribeDcdnWafDomainDetailResponseBody::Domain) };
    inline DescribeDcdnWafDomainDetailResponseBody& setDomain(const DescribeDcdnWafDomainDetailResponseBody::Domain & domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };
    inline DescribeDcdnWafDomainDetailResponseBody& setDomain(DescribeDcdnWafDomainDetailResponseBody::Domain && domain) { DARABONBA_PTR_SET_RVALUE(domain_, domain) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDcdnWafDomainDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the accelerated domain name.
    shared_ptr<DescribeDcdnWafDomainDetailResponseBody::Domain> domain_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
