// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DEACTIVATEZONESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DEACTIVATEZONESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class DeactivateZonesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeactivateZonesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
      DARABONBA_PTR_TO_JSON(clientToken, clientToken_);
    };
    friend void from_json(const Darabonba::Json& j, DeactivateZonesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
      DARABONBA_PTR_FROM_JSON(clientToken, clientToken_);
    };
    DeactivateZonesRequest() = default ;
    DeactivateZonesRequest(const DeactivateZonesRequest &) = default ;
    DeactivateZonesRequest(DeactivateZonesRequest &&) = default ;
    DeactivateZonesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeactivateZonesRequest() = default ;
    DeactivateZonesRequest& operator=(const DeactivateZonesRequest &) = default ;
    DeactivateZonesRequest& operator=(DeactivateZonesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->body_ == nullptr
        && this->clientToken_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline string getBody() const { DARABONBA_PTR_GET_DEFAULT(body_, "") };
    inline DeactivateZonesRequest& setBody(string body) { DARABONBA_PTR_SET_VALUE(body_, body) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline DeactivateZonesRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


  protected:
    shared_ptr<string> body_ {};
    // Used to ensure idempotency of the request. The client generates this parameter value and must guarantee its uniqueness across different requests, with a maximum length of 64 ASCII characters.
    shared_ptr<string> clientToken_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
