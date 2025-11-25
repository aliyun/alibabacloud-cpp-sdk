// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINTOPATTACKLISTRESPONSEBODYATTACKLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINTOPATTACKLISTRESPONSEBODYATTACKLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeDomainTopAttackListResponseBodyAttackList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainTopAttackListResponseBodyAttackList& obj) { 
      DARABONBA_PTR_TO_JSON(Attack, attack_);
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(Domain, domain_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainTopAttackListResponseBodyAttackList& obj) { 
      DARABONBA_PTR_FROM_JSON(Attack, attack_);
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
    };
    DescribeDomainTopAttackListResponseBodyAttackList() = default ;
    DescribeDomainTopAttackListResponseBodyAttackList(const DescribeDomainTopAttackListResponseBodyAttackList &) = default ;
    DescribeDomainTopAttackListResponseBodyAttackList(DescribeDomainTopAttackListResponseBodyAttackList &&) = default ;
    DescribeDomainTopAttackListResponseBodyAttackList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainTopAttackListResponseBodyAttackList() = default ;
    DescribeDomainTopAttackListResponseBodyAttackList& operator=(const DescribeDomainTopAttackListResponseBodyAttackList &) = default ;
    DescribeDomainTopAttackListResponseBodyAttackList& operator=(DescribeDomainTopAttackListResponseBodyAttackList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->attack_ == nullptr
        && return this->count_ == nullptr && return this->domain_ == nullptr; };
    // attack Field Functions 
    bool hasAttack() const { return this->attack_ != nullptr;};
    void deleteAttack() { this->attack_ = nullptr;};
    inline int64_t attack() const { DARABONBA_PTR_GET_DEFAULT(attack_, 0L) };
    inline DescribeDomainTopAttackListResponseBodyAttackList& setAttack(int64_t attack) { DARABONBA_PTR_SET_VALUE(attack_, attack) };


    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int64_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
    inline DescribeDomainTopAttackListResponseBodyAttackList& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string domain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline DescribeDomainTopAttackListResponseBodyAttackList& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


  protected:
    // The attack QPS. Unit: QPS
    std::shared_ptr<int64_t> attack_ = nullptr;
    // The number of all QPS, which includes normal and attack QPS. Unit: QPS.
    std::shared_ptr<int64_t> count_ = nullptr;
    // The domain name of the website.
    std::shared_ptr<string> domain_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
