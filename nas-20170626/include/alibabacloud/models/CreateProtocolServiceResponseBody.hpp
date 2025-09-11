// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPROTOCOLSERVICERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEPROTOCOLSERVICERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace NAS20170626
{
namespace Models
{
  class CreateProtocolServiceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateProtocolServiceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ProtocolServiceId, protocolServiceId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateProtocolServiceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ProtocolServiceId, protocolServiceId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateProtocolServiceResponseBody() = default ;
    CreateProtocolServiceResponseBody(const CreateProtocolServiceResponseBody &) = default ;
    CreateProtocolServiceResponseBody(CreateProtocolServiceResponseBody &&) = default ;
    CreateProtocolServiceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateProtocolServiceResponseBody() = default ;
    CreateProtocolServiceResponseBody& operator=(const CreateProtocolServiceResponseBody &) = default ;
    CreateProtocolServiceResponseBody& operator=(CreateProtocolServiceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->protocolServiceId_ != nullptr
        && this->requestId_ != nullptr; };
    // protocolServiceId Field Functions 
    bool hasProtocolServiceId() const { return this->protocolServiceId_ != nullptr;};
    void deleteProtocolServiceId() { this->protocolServiceId_ = nullptr;};
    inline string protocolServiceId() const { DARABONBA_PTR_GET_DEFAULT(protocolServiceId_, "") };
    inline CreateProtocolServiceResponseBody& setProtocolServiceId(string protocolServiceId) { DARABONBA_PTR_SET_VALUE(protocolServiceId_, protocolServiceId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateProtocolServiceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the protocol service.
    std::shared_ptr<string> protocolServiceId_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
