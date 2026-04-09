// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEDOMAINREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEDOMAINREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Httpdns20160201
{
namespace Models
{
  class DeleteDomainRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteDomainRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccountId, accountId_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteDomainRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
    };
    DeleteDomainRequest() = default ;
    DeleteDomainRequest(const DeleteDomainRequest &) = default ;
    DeleteDomainRequest(DeleteDomainRequest &&) = default ;
    DeleteDomainRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteDomainRequest() = default ;
    DeleteDomainRequest& operator=(const DeleteDomainRequest &) = default ;
    DeleteDomainRequest& operator=(DeleteDomainRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountId_ == nullptr
        && this->domainName_ == nullptr; };
    // accountId Field Functions 
    bool hasAccountId() const { return this->accountId_ != nullptr;};
    void deleteAccountId() { this->accountId_ = nullptr;};
    inline string getAccountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
    inline DeleteDomainRequest& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DeleteDomainRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


  protected:
    shared_ptr<string> accountId_ {};
    // This parameter is required.
    shared_ptr<string> domainName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Httpdns20160201
#endif
