// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDELEGATEDSERVICESFORACCOUNTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDELEGATEDSERVICESFORACCOUNTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListDelegatedServicesForAccountResponseBodyDelegatedServices.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceDirectoryMaster20220419
{
namespace Models
{
  class ListDelegatedServicesForAccountResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDelegatedServicesForAccountResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DelegatedServices, delegatedServices_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListDelegatedServicesForAccountResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DelegatedServices, delegatedServices_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListDelegatedServicesForAccountResponseBody() = default ;
    ListDelegatedServicesForAccountResponseBody(const ListDelegatedServicesForAccountResponseBody &) = default ;
    ListDelegatedServicesForAccountResponseBody(ListDelegatedServicesForAccountResponseBody &&) = default ;
    ListDelegatedServicesForAccountResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDelegatedServicesForAccountResponseBody() = default ;
    ListDelegatedServicesForAccountResponseBody& operator=(const ListDelegatedServicesForAccountResponseBody &) = default ;
    ListDelegatedServicesForAccountResponseBody& operator=(ListDelegatedServicesForAccountResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->delegatedServices_ == nullptr
        && return this->requestId_ == nullptr; };
    // delegatedServices Field Functions 
    bool hasDelegatedServices() const { return this->delegatedServices_ != nullptr;};
    void deleteDelegatedServices() { this->delegatedServices_ = nullptr;};
    inline const ListDelegatedServicesForAccountResponseBodyDelegatedServices & delegatedServices() const { DARABONBA_PTR_GET_CONST(delegatedServices_, ListDelegatedServicesForAccountResponseBodyDelegatedServices) };
    inline ListDelegatedServicesForAccountResponseBodyDelegatedServices delegatedServices() { DARABONBA_PTR_GET(delegatedServices_, ListDelegatedServicesForAccountResponseBodyDelegatedServices) };
    inline ListDelegatedServicesForAccountResponseBody& setDelegatedServices(const ListDelegatedServicesForAccountResponseBodyDelegatedServices & delegatedServices) { DARABONBA_PTR_SET_VALUE(delegatedServices_, delegatedServices) };
    inline ListDelegatedServicesForAccountResponseBody& setDelegatedServices(ListDelegatedServicesForAccountResponseBodyDelegatedServices && delegatedServices) { DARABONBA_PTR_SET_RVALUE(delegatedServices_, delegatedServices) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDelegatedServicesForAccountResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the trusted services.
    // 
    // > If the value of this parameter is empty, the member is not specified as a delegated administrator account.
    std::shared_ptr<ListDelegatedServicesForAccountResponseBodyDelegatedServices> delegatedServices_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceDirectoryMaster20220419
#endif
