// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEPRIVATEDNSENDPOINTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DELETEPRIVATEDNSENDPOINTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DeletePrivateDnsEndpointResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeletePrivateDnsEndpointResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DeletePrivateDnsEndpointResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DeletePrivateDnsEndpointResponseBody() = default ;
    DeletePrivateDnsEndpointResponseBody(const DeletePrivateDnsEndpointResponseBody &) = default ;
    DeletePrivateDnsEndpointResponseBody(DeletePrivateDnsEndpointResponseBody &&) = default ;
    DeletePrivateDnsEndpointResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeletePrivateDnsEndpointResponseBody() = default ;
    DeletePrivateDnsEndpointResponseBody& operator=(const DeletePrivateDnsEndpointResponseBody &) = default ;
    DeletePrivateDnsEndpointResponseBody& operator=(DeletePrivateDnsEndpointResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DeletePrivateDnsEndpointResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
