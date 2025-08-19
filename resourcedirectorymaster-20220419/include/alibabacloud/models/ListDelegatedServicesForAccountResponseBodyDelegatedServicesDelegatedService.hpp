// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDELEGATEDSERVICESFORACCOUNTRESPONSEBODYDELEGATEDSERVICESDELEGATEDSERVICE_HPP_
#define ALIBABACLOUD_MODELS_LISTDELEGATEDSERVICESFORACCOUNTRESPONSEBODYDELEGATEDSERVICESDELEGATEDSERVICE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceDirectoryMaster20220419
{
namespace Models
{
  class ListDelegatedServicesForAccountResponseBodyDelegatedServicesDelegatedService : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDelegatedServicesForAccountResponseBodyDelegatedServicesDelegatedService& obj) { 
      DARABONBA_PTR_TO_JSON(DelegationEnabledTime, delegationEnabledTime_);
      DARABONBA_PTR_TO_JSON(ServicePrincipal, servicePrincipal_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ListDelegatedServicesForAccountResponseBodyDelegatedServicesDelegatedService& obj) { 
      DARABONBA_PTR_FROM_JSON(DelegationEnabledTime, delegationEnabledTime_);
      DARABONBA_PTR_FROM_JSON(ServicePrincipal, servicePrincipal_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    ListDelegatedServicesForAccountResponseBodyDelegatedServicesDelegatedService() = default ;
    ListDelegatedServicesForAccountResponseBodyDelegatedServicesDelegatedService(const ListDelegatedServicesForAccountResponseBodyDelegatedServicesDelegatedService &) = default ;
    ListDelegatedServicesForAccountResponseBodyDelegatedServicesDelegatedService(ListDelegatedServicesForAccountResponseBodyDelegatedServicesDelegatedService &&) = default ;
    ListDelegatedServicesForAccountResponseBodyDelegatedServicesDelegatedService(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDelegatedServicesForAccountResponseBodyDelegatedServicesDelegatedService() = default ;
    ListDelegatedServicesForAccountResponseBodyDelegatedServicesDelegatedService& operator=(const ListDelegatedServicesForAccountResponseBodyDelegatedServicesDelegatedService &) = default ;
    ListDelegatedServicesForAccountResponseBodyDelegatedServicesDelegatedService& operator=(ListDelegatedServicesForAccountResponseBodyDelegatedServicesDelegatedService &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->delegationEnabledTime_ != nullptr
        && this->servicePrincipal_ != nullptr && this->status_ != nullptr; };
    // delegationEnabledTime Field Functions 
    bool hasDelegationEnabledTime() const { return this->delegationEnabledTime_ != nullptr;};
    void deleteDelegationEnabledTime() { this->delegationEnabledTime_ = nullptr;};
    inline string delegationEnabledTime() const { DARABONBA_PTR_GET_DEFAULT(delegationEnabledTime_, "") };
    inline ListDelegatedServicesForAccountResponseBodyDelegatedServicesDelegatedService& setDelegationEnabledTime(string delegationEnabledTime) { DARABONBA_PTR_SET_VALUE(delegationEnabledTime_, delegationEnabledTime) };


    // servicePrincipal Field Functions 
    bool hasServicePrincipal() const { return this->servicePrincipal_ != nullptr;};
    void deleteServicePrincipal() { this->servicePrincipal_ = nullptr;};
    inline string servicePrincipal() const { DARABONBA_PTR_GET_DEFAULT(servicePrincipal_, "") };
    inline ListDelegatedServicesForAccountResponseBodyDelegatedServicesDelegatedService& setServicePrincipal(string servicePrincipal) { DARABONBA_PTR_SET_VALUE(servicePrincipal_, servicePrincipal) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListDelegatedServicesForAccountResponseBodyDelegatedServicesDelegatedService& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The time when the member was specified as a delegated administrator account.
    std::shared_ptr<string> delegationEnabledTime_ = nullptr;
    // The identifier of the trusted service.
    std::shared_ptr<string> servicePrincipal_ = nullptr;
    // The status of the trusted service. Valid values:
    // 
    // *   ENABLED: enabled
    // *   DISABLED: disabled
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceDirectoryMaster20220419
#endif
