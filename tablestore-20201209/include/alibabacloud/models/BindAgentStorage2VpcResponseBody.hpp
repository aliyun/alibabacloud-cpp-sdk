// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BINDAGENTSTORAGE2VPCRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_BINDAGENTSTORAGE2VPCRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Tablestore20201209
{
namespace Models
{
  class BindAgentStorage2VpcResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BindAgentStorage2VpcResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Domain, domain_);
      DARABONBA_PTR_TO_JSON(Endpoint, endpoint_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, BindAgentStorage2VpcResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
      DARABONBA_PTR_FROM_JSON(Endpoint, endpoint_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    BindAgentStorage2VpcResponseBody() = default ;
    BindAgentStorage2VpcResponseBody(const BindAgentStorage2VpcResponseBody &) = default ;
    BindAgentStorage2VpcResponseBody(BindAgentStorage2VpcResponseBody &&) = default ;
    BindAgentStorage2VpcResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BindAgentStorage2VpcResponseBody() = default ;
    BindAgentStorage2VpcResponseBody& operator=(const BindAgentStorage2VpcResponseBody &) = default ;
    BindAgentStorage2VpcResponseBody& operator=(BindAgentStorage2VpcResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domain_ == nullptr
        && this->endpoint_ == nullptr && this->requestId_ == nullptr; };
    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string getDomain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline BindAgentStorage2VpcResponseBody& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // endpoint Field Functions 
    bool hasEndpoint() const { return this->endpoint_ != nullptr;};
    void deleteEndpoint() { this->endpoint_ = nullptr;};
    inline string getEndpoint() const { DARABONBA_PTR_GET_DEFAULT(endpoint_, "") };
    inline BindAgentStorage2VpcResponseBody& setEndpoint(string endpoint) { DARABONBA_PTR_SET_VALUE(endpoint_, endpoint) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline BindAgentStorage2VpcResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The domain name.
    shared_ptr<string> domain_ {};
    // The endpoint of the instance.
    shared_ptr<string> endpoint_ {};
    // The request ID, which can be used to troubleshoot and locate issues.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Tablestore20201209
#endif
