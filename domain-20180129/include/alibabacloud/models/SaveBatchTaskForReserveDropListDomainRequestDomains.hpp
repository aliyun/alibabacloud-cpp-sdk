// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SAVEBATCHTASKFORRESERVEDROPLISTDOMAINREQUESTDOMAINS_HPP_
#define ALIBABACLOUD_MODELS_SAVEBATCHTASKFORRESERVEDROPLISTDOMAINREQUESTDOMAINS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180129
{
namespace Models
{
  class SaveBatchTaskForReserveDropListDomainRequestDomains : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SaveBatchTaskForReserveDropListDomainRequestDomains& obj) { 
      DARABONBA_PTR_TO_JSON(Dns1, dns1_);
      DARABONBA_PTR_TO_JSON(Dns2, dns2_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
    };
    friend void from_json(const Darabonba::Json& j, SaveBatchTaskForReserveDropListDomainRequestDomains& obj) { 
      DARABONBA_PTR_FROM_JSON(Dns1, dns1_);
      DARABONBA_PTR_FROM_JSON(Dns2, dns2_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
    };
    SaveBatchTaskForReserveDropListDomainRequestDomains() = default ;
    SaveBatchTaskForReserveDropListDomainRequestDomains(const SaveBatchTaskForReserveDropListDomainRequestDomains &) = default ;
    SaveBatchTaskForReserveDropListDomainRequestDomains(SaveBatchTaskForReserveDropListDomainRequestDomains &&) = default ;
    SaveBatchTaskForReserveDropListDomainRequestDomains(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SaveBatchTaskForReserveDropListDomainRequestDomains() = default ;
    SaveBatchTaskForReserveDropListDomainRequestDomains& operator=(const SaveBatchTaskForReserveDropListDomainRequestDomains &) = default ;
    SaveBatchTaskForReserveDropListDomainRequestDomains& operator=(SaveBatchTaskForReserveDropListDomainRequestDomains &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dns1_ == nullptr
        && return this->dns2_ == nullptr && return this->domainName_ == nullptr; };
    // dns1 Field Functions 
    bool hasDns1() const { return this->dns1_ != nullptr;};
    void deleteDns1() { this->dns1_ = nullptr;};
    inline string dns1() const { DARABONBA_PTR_GET_DEFAULT(dns1_, "") };
    inline SaveBatchTaskForReserveDropListDomainRequestDomains& setDns1(string dns1) { DARABONBA_PTR_SET_VALUE(dns1_, dns1) };


    // dns2 Field Functions 
    bool hasDns2() const { return this->dns2_ != nullptr;};
    void deleteDns2() { this->dns2_ = nullptr;};
    inline string dns2() const { DARABONBA_PTR_GET_DEFAULT(dns2_, "") };
    inline SaveBatchTaskForReserveDropListDomainRequestDomains& setDns2(string dns2) { DARABONBA_PTR_SET_VALUE(dns2_, dns2) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline SaveBatchTaskForReserveDropListDomainRequestDomains& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


  protected:
    std::shared_ptr<string> dns1_ = nullptr;
    std::shared_ptr<string> dns2_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> domainName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180129
#endif
