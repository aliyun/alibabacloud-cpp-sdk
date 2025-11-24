// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSERVICEACCOUNTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSERVICEACCOUNTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListServiceAccountsResponseBodyServiceAccounts.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicemesh20200111
{
namespace Models
{
  class ListServiceAccountsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListServiceAccountsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ServiceAccounts, serviceAccounts_);
    };
    friend void from_json(const Darabonba::Json& j, ListServiceAccountsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ServiceAccounts, serviceAccounts_);
    };
    ListServiceAccountsResponseBody() = default ;
    ListServiceAccountsResponseBody(const ListServiceAccountsResponseBody &) = default ;
    ListServiceAccountsResponseBody(ListServiceAccountsResponseBody &&) = default ;
    ListServiceAccountsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListServiceAccountsResponseBody() = default ;
    ListServiceAccountsResponseBody& operator=(const ListServiceAccountsResponseBody &) = default ;
    ListServiceAccountsResponseBody& operator=(ListServiceAccountsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->serviceAccounts_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListServiceAccountsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // serviceAccounts Field Functions 
    bool hasServiceAccounts() const { return this->serviceAccounts_ != nullptr;};
    void deleteServiceAccounts() { this->serviceAccounts_ = nullptr;};
    inline const vector<ListServiceAccountsResponseBodyServiceAccounts> & serviceAccounts() const { DARABONBA_PTR_GET_CONST(serviceAccounts_, vector<ListServiceAccountsResponseBodyServiceAccounts>) };
    inline vector<ListServiceAccountsResponseBodyServiceAccounts> serviceAccounts() { DARABONBA_PTR_GET(serviceAccounts_, vector<ListServiceAccountsResponseBodyServiceAccounts>) };
    inline ListServiceAccountsResponseBody& setServiceAccounts(const vector<ListServiceAccountsResponseBodyServiceAccounts> & serviceAccounts) { DARABONBA_PTR_SET_VALUE(serviceAccounts_, serviceAccounts) };
    inline ListServiceAccountsResponseBody& setServiceAccounts(vector<ListServiceAccountsResponseBodyServiceAccounts> && serviceAccounts) { DARABONBA_PTR_SET_RVALUE(serviceAccounts_, serviceAccounts) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The list of service accounts.
    std::shared_ptr<vector<ListServiceAccountsResponseBodyServiceAccounts>> serviceAccounts_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicemesh20200111
#endif
