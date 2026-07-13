// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEATIREGISTRANTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEATIREGISTRANTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DeleteAtiRegistrantRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteAtiRegistrantRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(RegistrantId, registrantId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteAtiRegistrantRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(RegistrantId, registrantId_);
    };
    DeleteAtiRegistrantRequest() = default ;
    DeleteAtiRegistrantRequest(const DeleteAtiRegistrantRequest &) = default ;
    DeleteAtiRegistrantRequest(DeleteAtiRegistrantRequest &&) = default ;
    DeleteAtiRegistrantRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteAtiRegistrantRequest() = default ;
    DeleteAtiRegistrantRequest& operator=(const DeleteAtiRegistrantRequest &) = default ;
    DeleteAtiRegistrantRequest& operator=(DeleteAtiRegistrantRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->registrantId_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline DeleteAtiRegistrantRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // registrantId Field Functions 
    bool hasRegistrantId() const { return this->registrantId_ != nullptr;};
    void deleteRegistrantId() { this->registrantId_ = nullptr;};
    inline string getRegistrantId() const { DARABONBA_PTR_GET_DEFAULT(registrantId_, "") };
    inline DeleteAtiRegistrantRequest& setRegistrantId(string registrantId) { DARABONBA_PTR_SET_VALUE(registrantId_, registrantId) };


  protected:
    // The client token that is used to ensure the idempotency of the request.
    // 
    // Generate a parameter value from your client to ensure that the value is unique among different requests. ClientToken supports only ASCII characters.
    // 
    // > If you do not specify this parameter, the system automatically uses the **RequestId** of the API request as the **ClientToken**. The **RequestId** of each API request is different.
    shared_ptr<string> clientToken_ {};
    // The ID of the verified registrant.
    shared_ptr<string> registrantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
