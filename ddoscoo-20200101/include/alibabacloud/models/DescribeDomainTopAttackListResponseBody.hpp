// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINTOPATTACKLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINTOPATTACKLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeDomainTopAttackListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainTopAttackListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AttackList, attackList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainTopAttackListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AttackList, attackList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDomainTopAttackListResponseBody() = default ;
    DescribeDomainTopAttackListResponseBody(const DescribeDomainTopAttackListResponseBody &) = default ;
    DescribeDomainTopAttackListResponseBody(DescribeDomainTopAttackListResponseBody &&) = default ;
    DescribeDomainTopAttackListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainTopAttackListResponseBody() = default ;
    DescribeDomainTopAttackListResponseBody& operator=(const DescribeDomainTopAttackListResponseBody &) = default ;
    DescribeDomainTopAttackListResponseBody& operator=(DescribeDomainTopAttackListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AttackList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AttackList& obj) { 
        DARABONBA_PTR_TO_JSON(Attack, attack_);
        DARABONBA_PTR_TO_JSON(Count, count_);
        DARABONBA_PTR_TO_JSON(Domain, domain_);
      };
      friend void from_json(const Darabonba::Json& j, AttackList& obj) { 
        DARABONBA_PTR_FROM_JSON(Attack, attack_);
        DARABONBA_PTR_FROM_JSON(Count, count_);
        DARABONBA_PTR_FROM_JSON(Domain, domain_);
      };
      AttackList() = default ;
      AttackList(const AttackList &) = default ;
      AttackList(AttackList &&) = default ;
      AttackList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AttackList() = default ;
      AttackList& operator=(const AttackList &) = default ;
      AttackList& operator=(AttackList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->attack_ == nullptr
        && this->count_ == nullptr && this->domain_ == nullptr; };
      // attack Field Functions 
      bool hasAttack() const { return this->attack_ != nullptr;};
      void deleteAttack() { this->attack_ = nullptr;};
      inline int64_t getAttack() const { DARABONBA_PTR_GET_DEFAULT(attack_, 0L) };
      inline AttackList& setAttack(int64_t attack) { DARABONBA_PTR_SET_VALUE(attack_, attack) };


      // count Field Functions 
      bool hasCount() const { return this->count_ != nullptr;};
      void deleteCount() { this->count_ = nullptr;};
      inline int64_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
      inline AttackList& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


      // domain Field Functions 
      bool hasDomain() const { return this->domain_ != nullptr;};
      void deleteDomain() { this->domain_ = nullptr;};
      inline string getDomain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
      inline AttackList& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    protected:
      // The attack QPS. Unit: QPS
      shared_ptr<int64_t> attack_ {};
      // The number of all QPS, which includes normal and attack QPS. Unit: QPS.
      shared_ptr<int64_t> count_ {};
      // The domain name of the website.
      shared_ptr<string> domain_ {};
    };

    virtual bool empty() const override { return this->attackList_ == nullptr
        && this->requestId_ == nullptr; };
    // attackList Field Functions 
    bool hasAttackList() const { return this->attackList_ != nullptr;};
    void deleteAttackList() { this->attackList_ = nullptr;};
    inline const vector<DescribeDomainTopAttackListResponseBody::AttackList> & getAttackList() const { DARABONBA_PTR_GET_CONST(attackList_, vector<DescribeDomainTopAttackListResponseBody::AttackList>) };
    inline vector<DescribeDomainTopAttackListResponseBody::AttackList> getAttackList() { DARABONBA_PTR_GET(attackList_, vector<DescribeDomainTopAttackListResponseBody::AttackList>) };
    inline DescribeDomainTopAttackListResponseBody& setAttackList(const vector<DescribeDomainTopAttackListResponseBody::AttackList> & attackList) { DARABONBA_PTR_SET_VALUE(attackList_, attackList) };
    inline DescribeDomainTopAttackListResponseBody& setAttackList(vector<DescribeDomainTopAttackListResponseBody::AttackList> && attackList) { DARABONBA_PTR_SET_RVALUE(attackList_, attackList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDomainTopAttackListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The peak QPS of the website.
    shared_ptr<vector<DescribeDomainTopAttackListResponseBody::AttackList>> attackList_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
