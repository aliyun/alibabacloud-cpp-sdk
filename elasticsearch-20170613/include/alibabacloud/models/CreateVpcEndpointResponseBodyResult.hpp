// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEVPCENDPOINTRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_CREATEVPCENDPOINTRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class CreateVpcEndpointResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateVpcEndpointResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(endpointDomain, endpointDomain_);
      DARABONBA_PTR_TO_JSON(endpointId, endpointId_);
      DARABONBA_PTR_TO_JSON(endpointName, endpointName_);
      DARABONBA_PTR_TO_JSON(serviceId, serviceId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateVpcEndpointResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(endpointDomain, endpointDomain_);
      DARABONBA_PTR_FROM_JSON(endpointId, endpointId_);
      DARABONBA_PTR_FROM_JSON(endpointName, endpointName_);
      DARABONBA_PTR_FROM_JSON(serviceId, serviceId_);
    };
    CreateVpcEndpointResponseBodyResult() = default ;
    CreateVpcEndpointResponseBodyResult(const CreateVpcEndpointResponseBodyResult &) = default ;
    CreateVpcEndpointResponseBodyResult(CreateVpcEndpointResponseBodyResult &&) = default ;
    CreateVpcEndpointResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateVpcEndpointResponseBodyResult() = default ;
    CreateVpcEndpointResponseBodyResult& operator=(const CreateVpcEndpointResponseBodyResult &) = default ;
    CreateVpcEndpointResponseBodyResult& operator=(CreateVpcEndpointResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->endpointDomain_ != nullptr
        && this->endpointId_ != nullptr && this->endpointName_ != nullptr && this->serviceId_ != nullptr; };
    // endpointDomain Field Functions 
    bool hasEndpointDomain() const { return this->endpointDomain_ != nullptr;};
    void deleteEndpointDomain() { this->endpointDomain_ = nullptr;};
    inline string endpointDomain() const { DARABONBA_PTR_GET_DEFAULT(endpointDomain_, "") };
    inline CreateVpcEndpointResponseBodyResult& setEndpointDomain(string endpointDomain) { DARABONBA_PTR_SET_VALUE(endpointDomain_, endpointDomain) };


    // endpointId Field Functions 
    bool hasEndpointId() const { return this->endpointId_ != nullptr;};
    void deleteEndpointId() { this->endpointId_ = nullptr;};
    inline string endpointId() const { DARABONBA_PTR_GET_DEFAULT(endpointId_, "") };
    inline CreateVpcEndpointResponseBodyResult& setEndpointId(string endpointId) { DARABONBA_PTR_SET_VALUE(endpointId_, endpointId) };


    // endpointName Field Functions 
    bool hasEndpointName() const { return this->endpointName_ != nullptr;};
    void deleteEndpointName() { this->endpointName_ = nullptr;};
    inline string endpointName() const { DARABONBA_PTR_GET_DEFAULT(endpointName_, "") };
    inline CreateVpcEndpointResponseBodyResult& setEndpointName(string endpointName) { DARABONBA_PTR_SET_VALUE(endpointName_, endpointName) };


    // serviceId Field Functions 
    bool hasServiceId() const { return this->serviceId_ != nullptr;};
    void deleteServiceId() { this->serviceId_ = nullptr;};
    inline string serviceId() const { DARABONBA_PTR_GET_DEFAULT(serviceId_, "") };
    inline CreateVpcEndpointResponseBodyResult& setServiceId(string serviceId) { DARABONBA_PTR_SET_VALUE(serviceId_, serviceId) };


  protected:
    std::shared_ptr<string> endpointDomain_ = nullptr;
    std::shared_ptr<string> endpointId_ = nullptr;
    std::shared_ptr<string> endpointName_ = nullptr;
    // The name of the service VPC-side endpoint.
    std::shared_ptr<string> serviceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
