// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SAVESINGLETASKFORRESERVEDROPLISTDOMAINREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SAVESINGLETASKFORRESERVEDROPLISTDOMAINREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180129
{
namespace Models
{
  class SaveSingleTaskForReserveDropListDomainRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SaveSingleTaskForReserveDropListDomainRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ContactTemplateId, contactTemplateId_);
      DARABONBA_PTR_TO_JSON(Dns1, dns1_);
      DARABONBA_PTR_TO_JSON(Dns2, dns2_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
    };
    friend void from_json(const Darabonba::Json& j, SaveSingleTaskForReserveDropListDomainRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ContactTemplateId, contactTemplateId_);
      DARABONBA_PTR_FROM_JSON(Dns1, dns1_);
      DARABONBA_PTR_FROM_JSON(Dns2, dns2_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
    };
    SaveSingleTaskForReserveDropListDomainRequest() = default ;
    SaveSingleTaskForReserveDropListDomainRequest(const SaveSingleTaskForReserveDropListDomainRequest &) = default ;
    SaveSingleTaskForReserveDropListDomainRequest(SaveSingleTaskForReserveDropListDomainRequest &&) = default ;
    SaveSingleTaskForReserveDropListDomainRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SaveSingleTaskForReserveDropListDomainRequest() = default ;
    SaveSingleTaskForReserveDropListDomainRequest& operator=(const SaveSingleTaskForReserveDropListDomainRequest &) = default ;
    SaveSingleTaskForReserveDropListDomainRequest& operator=(SaveSingleTaskForReserveDropListDomainRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->contactTemplateId_ == nullptr
        && this->dns1_ == nullptr && this->dns2_ == nullptr && this->domainName_ == nullptr; };
    // contactTemplateId Field Functions 
    bool hasContactTemplateId() const { return this->contactTemplateId_ != nullptr;};
    void deleteContactTemplateId() { this->contactTemplateId_ = nullptr;};
    inline string getContactTemplateId() const { DARABONBA_PTR_GET_DEFAULT(contactTemplateId_, "") };
    inline SaveSingleTaskForReserveDropListDomainRequest& setContactTemplateId(string contactTemplateId) { DARABONBA_PTR_SET_VALUE(contactTemplateId_, contactTemplateId) };


    // dns1 Field Functions 
    bool hasDns1() const { return this->dns1_ != nullptr;};
    void deleteDns1() { this->dns1_ = nullptr;};
    inline string getDns1() const { DARABONBA_PTR_GET_DEFAULT(dns1_, "") };
    inline SaveSingleTaskForReserveDropListDomainRequest& setDns1(string dns1) { DARABONBA_PTR_SET_VALUE(dns1_, dns1) };


    // dns2 Field Functions 
    bool hasDns2() const { return this->dns2_ != nullptr;};
    void deleteDns2() { this->dns2_ = nullptr;};
    inline string getDns2() const { DARABONBA_PTR_GET_DEFAULT(dns2_, "") };
    inline SaveSingleTaskForReserveDropListDomainRequest& setDns2(string dns2) { DARABONBA_PTR_SET_VALUE(dns2_, dns2) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline SaveSingleTaskForReserveDropListDomainRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


  protected:
    // This parameter is required.
    shared_ptr<string> contactTemplateId_ {};
    shared_ptr<string> dns1_ {};
    shared_ptr<string> dns2_ {};
    // This parameter is required.
    shared_ptr<string> domainName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180129
#endif
