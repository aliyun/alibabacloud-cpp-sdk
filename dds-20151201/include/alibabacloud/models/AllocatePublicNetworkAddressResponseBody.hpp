// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ALLOCATEPUBLICNETWORKADDRESSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ALLOCATEPUBLICNETWORKADDRESSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dds20151201
{
namespace Models
{
  class AllocatePublicNetworkAddressResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AllocatePublicNetworkAddressResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, AllocatePublicNetworkAddressResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    AllocatePublicNetworkAddressResponseBody() = default ;
    AllocatePublicNetworkAddressResponseBody(const AllocatePublicNetworkAddressResponseBody &) = default ;
    AllocatePublicNetworkAddressResponseBody(AllocatePublicNetworkAddressResponseBody &&) = default ;
    AllocatePublicNetworkAddressResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AllocatePublicNetworkAddressResponseBody() = default ;
    AllocatePublicNetworkAddressResponseBody& operator=(const AllocatePublicNetworkAddressResponseBody &) = default ;
    AllocatePublicNetworkAddressResponseBody& operator=(AllocatePublicNetworkAddressResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline AllocatePublicNetworkAddressResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dds20151201
#endif
