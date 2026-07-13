// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEATIREGISTRANTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEATIREGISTRANTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeAtiRegistrantRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAtiRegistrantRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(RegistrantId, registrantId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAtiRegistrantRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(RegistrantId, registrantId_);
    };
    DescribeAtiRegistrantRequest() = default ;
    DescribeAtiRegistrantRequest(const DescribeAtiRegistrantRequest &) = default ;
    DescribeAtiRegistrantRequest(DescribeAtiRegistrantRequest &&) = default ;
    DescribeAtiRegistrantRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAtiRegistrantRequest() = default ;
    DescribeAtiRegistrantRequest& operator=(const DescribeAtiRegistrantRequest &) = default ;
    DescribeAtiRegistrantRequest& operator=(DescribeAtiRegistrantRequest &&) = default ;
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
    inline DescribeAtiRegistrantRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // registrantId Field Functions 
    bool hasRegistrantId() const { return this->registrantId_ != nullptr;};
    void deleteRegistrantId() { this->registrantId_ = nullptr;};
    inline string getRegistrantId() const { DARABONBA_PTR_GET_DEFAULT(registrantId_, "") };
    inline DescribeAtiRegistrantRequest& setRegistrantId(string registrantId) { DARABONBA_PTR_SET_VALUE(registrantId_, registrantId) };


  protected:
    // Ensures the idempotence of the request. Generate a parameter value from your client to ensure uniqueness across different requests. ClientToken supports only ASCII characters and cannot exceed 64 characters in length.
    // 
    // > If you do not specify this parameter, the system automatically uses the RequestId of the API request as the ClientToken. The RequestId may be different for each API request.
    shared_ptr<string> clientToken_ {};
    // The ID of the real-name verified registrant.
    // 
    // This parameter is required.
    shared_ptr<string> registrantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
