// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETRANSITROUTERMULTICASTDOMAINRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATETRANSITROUTERMULTICASTDOMAINRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class CreateTransitRouterMulticastDomainResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTransitRouterMulticastDomainResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TransitRouterMulticastDomainId, transitRouterMulticastDomainId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTransitRouterMulticastDomainResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TransitRouterMulticastDomainId, transitRouterMulticastDomainId_);
    };
    CreateTransitRouterMulticastDomainResponseBody() = default ;
    CreateTransitRouterMulticastDomainResponseBody(const CreateTransitRouterMulticastDomainResponseBody &) = default ;
    CreateTransitRouterMulticastDomainResponseBody(CreateTransitRouterMulticastDomainResponseBody &&) = default ;
    CreateTransitRouterMulticastDomainResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTransitRouterMulticastDomainResponseBody() = default ;
    CreateTransitRouterMulticastDomainResponseBody& operator=(const CreateTransitRouterMulticastDomainResponseBody &) = default ;
    CreateTransitRouterMulticastDomainResponseBody& operator=(CreateTransitRouterMulticastDomainResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->transitRouterMulticastDomainId_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateTransitRouterMulticastDomainResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // transitRouterMulticastDomainId Field Functions 
    bool hasTransitRouterMulticastDomainId() const { return this->transitRouterMulticastDomainId_ != nullptr;};
    void deleteTransitRouterMulticastDomainId() { this->transitRouterMulticastDomainId_ = nullptr;};
    inline string transitRouterMulticastDomainId() const { DARABONBA_PTR_GET_DEFAULT(transitRouterMulticastDomainId_, "") };
    inline CreateTransitRouterMulticastDomainResponseBody& setTransitRouterMulticastDomainId(string transitRouterMulticastDomainId) { DARABONBA_PTR_SET_VALUE(transitRouterMulticastDomainId_, transitRouterMulticastDomainId) };


  protected:
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The ID of the multicast domain.
    std::shared_ptr<string> transitRouterMulticastDomainId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
