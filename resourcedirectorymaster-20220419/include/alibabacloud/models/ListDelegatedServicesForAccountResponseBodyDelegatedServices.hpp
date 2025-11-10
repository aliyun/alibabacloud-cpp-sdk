// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDELEGATEDSERVICESFORACCOUNTRESPONSEBODYDELEGATEDSERVICES_HPP_
#define ALIBABACLOUD_MODELS_LISTDELEGATEDSERVICESFORACCOUNTRESPONSEBODYDELEGATEDSERVICES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListDelegatedServicesForAccountResponseBodyDelegatedServicesDelegatedService.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceDirectoryMaster20220419
{
namespace Models
{
  class ListDelegatedServicesForAccountResponseBodyDelegatedServices : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDelegatedServicesForAccountResponseBodyDelegatedServices& obj) { 
      DARABONBA_PTR_TO_JSON(DelegatedService, delegatedService_);
    };
    friend void from_json(const Darabonba::Json& j, ListDelegatedServicesForAccountResponseBodyDelegatedServices& obj) { 
      DARABONBA_PTR_FROM_JSON(DelegatedService, delegatedService_);
    };
    ListDelegatedServicesForAccountResponseBodyDelegatedServices() = default ;
    ListDelegatedServicesForAccountResponseBodyDelegatedServices(const ListDelegatedServicesForAccountResponseBodyDelegatedServices &) = default ;
    ListDelegatedServicesForAccountResponseBodyDelegatedServices(ListDelegatedServicesForAccountResponseBodyDelegatedServices &&) = default ;
    ListDelegatedServicesForAccountResponseBodyDelegatedServices(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDelegatedServicesForAccountResponseBodyDelegatedServices() = default ;
    ListDelegatedServicesForAccountResponseBodyDelegatedServices& operator=(const ListDelegatedServicesForAccountResponseBodyDelegatedServices &) = default ;
    ListDelegatedServicesForAccountResponseBodyDelegatedServices& operator=(ListDelegatedServicesForAccountResponseBodyDelegatedServices &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->delegatedService_ == nullptr; };
    // delegatedService Field Functions 
    bool hasDelegatedService() const { return this->delegatedService_ != nullptr;};
    void deleteDelegatedService() { this->delegatedService_ = nullptr;};
    inline const vector<Models::ListDelegatedServicesForAccountResponseBodyDelegatedServicesDelegatedService> & delegatedService() const { DARABONBA_PTR_GET_CONST(delegatedService_, vector<Models::ListDelegatedServicesForAccountResponseBodyDelegatedServicesDelegatedService>) };
    inline vector<Models::ListDelegatedServicesForAccountResponseBodyDelegatedServicesDelegatedService> delegatedService() { DARABONBA_PTR_GET(delegatedService_, vector<Models::ListDelegatedServicesForAccountResponseBodyDelegatedServicesDelegatedService>) };
    inline ListDelegatedServicesForAccountResponseBodyDelegatedServices& setDelegatedService(const vector<Models::ListDelegatedServicesForAccountResponseBodyDelegatedServicesDelegatedService> & delegatedService) { DARABONBA_PTR_SET_VALUE(delegatedService_, delegatedService) };
    inline ListDelegatedServicesForAccountResponseBodyDelegatedServices& setDelegatedService(vector<Models::ListDelegatedServicesForAccountResponseBodyDelegatedServicesDelegatedService> && delegatedService) { DARABONBA_PTR_SET_RVALUE(delegatedService_, delegatedService) };


  protected:
    std::shared_ptr<vector<Models::ListDelegatedServicesForAccountResponseBodyDelegatedServicesDelegatedService>> delegatedService_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceDirectoryMaster20220419
#endif
