// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATENETWORKDOMAINRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATENETWORKDOMAINRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class CreateNetworkDomainResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateNetworkDomainResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NetworkDomainId, networkDomainId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateNetworkDomainResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NetworkDomainId, networkDomainId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateNetworkDomainResponseBody() = default ;
    CreateNetworkDomainResponseBody(const CreateNetworkDomainResponseBody &) = default ;
    CreateNetworkDomainResponseBody(CreateNetworkDomainResponseBody &&) = default ;
    CreateNetworkDomainResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateNetworkDomainResponseBody() = default ;
    CreateNetworkDomainResponseBody& operator=(const CreateNetworkDomainResponseBody &) = default ;
    CreateNetworkDomainResponseBody& operator=(CreateNetworkDomainResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->networkDomainId_ == nullptr
        && this->requestId_ == nullptr; };
    // networkDomainId Field Functions 
    bool hasNetworkDomainId() const { return this->networkDomainId_ != nullptr;};
    void deleteNetworkDomainId() { this->networkDomainId_ = nullptr;};
    inline string getNetworkDomainId() const { DARABONBA_PTR_GET_DEFAULT(networkDomainId_, "") };
    inline CreateNetworkDomainResponseBody& setNetworkDomainId(string networkDomainId) { DARABONBA_PTR_SET_VALUE(networkDomainId_, networkDomainId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateNetworkDomainResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the network domain.
    shared_ptr<string> networkDomainId_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
