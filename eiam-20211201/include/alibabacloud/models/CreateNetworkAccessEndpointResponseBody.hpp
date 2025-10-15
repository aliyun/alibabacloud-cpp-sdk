// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATENETWORKACCESSENDPOINTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATENETWORKACCESSENDPOINTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class CreateNetworkAccessEndpointResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateNetworkAccessEndpointResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NetworkAccessEndpointId, networkAccessEndpointId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateNetworkAccessEndpointResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NetworkAccessEndpointId, networkAccessEndpointId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateNetworkAccessEndpointResponseBody() = default ;
    CreateNetworkAccessEndpointResponseBody(const CreateNetworkAccessEndpointResponseBody &) = default ;
    CreateNetworkAccessEndpointResponseBody(CreateNetworkAccessEndpointResponseBody &&) = default ;
    CreateNetworkAccessEndpointResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateNetworkAccessEndpointResponseBody() = default ;
    CreateNetworkAccessEndpointResponseBody& operator=(const CreateNetworkAccessEndpointResponseBody &) = default ;
    CreateNetworkAccessEndpointResponseBody& operator=(CreateNetworkAccessEndpointResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->networkAccessEndpointId_ == nullptr
        && return this->requestId_ == nullptr; };
    // networkAccessEndpointId Field Functions 
    bool hasNetworkAccessEndpointId() const { return this->networkAccessEndpointId_ != nullptr;};
    void deleteNetworkAccessEndpointId() { this->networkAccessEndpointId_ = nullptr;};
    inline string networkAccessEndpointId() const { DARABONBA_PTR_GET_DEFAULT(networkAccessEndpointId_, "") };
    inline CreateNetworkAccessEndpointResponseBody& setNetworkAccessEndpointId(string networkAccessEndpointId) { DARABONBA_PTR_SET_VALUE(networkAccessEndpointId_, networkAccessEndpointId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateNetworkAccessEndpointResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The unique identifier of the network access endpoint.
    std::shared_ptr<string> networkAccessEndpointId_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
