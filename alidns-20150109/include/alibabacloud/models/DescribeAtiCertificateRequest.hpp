// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEATICERTIFICATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEATICERTIFICATEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeAtiCertificateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAtiCertificateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentCertificateId, agentCertificateId_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAtiCertificateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentCertificateId, agentCertificateId_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
    };
    DescribeAtiCertificateRequest() = default ;
    DescribeAtiCertificateRequest(const DescribeAtiCertificateRequest &) = default ;
    DescribeAtiCertificateRequest(DescribeAtiCertificateRequest &&) = default ;
    DescribeAtiCertificateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAtiCertificateRequest() = default ;
    DescribeAtiCertificateRequest& operator=(const DescribeAtiCertificateRequest &) = default ;
    DescribeAtiCertificateRequest& operator=(DescribeAtiCertificateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentCertificateId_ == nullptr
        && this->clientToken_ == nullptr; };
    // agentCertificateId Field Functions 
    bool hasAgentCertificateId() const { return this->agentCertificateId_ != nullptr;};
    void deleteAgentCertificateId() { this->agentCertificateId_ = nullptr;};
    inline string getAgentCertificateId() const { DARABONBA_PTR_GET_DEFAULT(agentCertificateId_, "") };
    inline DescribeAtiCertificateRequest& setAgentCertificateId(string agentCertificateId) { DARABONBA_PTR_SET_VALUE(agentCertificateId_, agentCertificateId) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline DescribeAtiCertificateRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


  protected:
    // The ID of the certificate to query. Call the ListAtiCertificates operation to query the target certificate information and obtain the ID from the response.
    shared_ptr<string> agentCertificateId_ {};
    // The client token that is used to ensure the idempotence of the request.
    // 
    // Generate a parameter value from your client to ensure that the value is unique among different requests. ClientToken supports only ASCII characters.
    // 
    // > If you do not specify this parameter, the system uses the **RequestId** of the API request as the **ClientToken**. The **RequestId** of each API request is different.
    shared_ptr<string> clientToken_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
