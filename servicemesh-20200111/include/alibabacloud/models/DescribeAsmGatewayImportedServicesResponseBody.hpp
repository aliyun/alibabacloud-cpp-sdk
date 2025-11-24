// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEASMGATEWAYIMPORTEDSERVICESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEASMGATEWAYIMPORTEDSERVICESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeASMGatewayImportedServicesResponseBodyImportedServices.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicemesh20200111
{
namespace Models
{
  class DescribeASMGatewayImportedServicesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeASMGatewayImportedServicesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ImportedServices, importedServices_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeASMGatewayImportedServicesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ImportedServices, importedServices_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeASMGatewayImportedServicesResponseBody() = default ;
    DescribeASMGatewayImportedServicesResponseBody(const DescribeASMGatewayImportedServicesResponseBody &) = default ;
    DescribeASMGatewayImportedServicesResponseBody(DescribeASMGatewayImportedServicesResponseBody &&) = default ;
    DescribeASMGatewayImportedServicesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeASMGatewayImportedServicesResponseBody() = default ;
    DescribeASMGatewayImportedServicesResponseBody& operator=(const DescribeASMGatewayImportedServicesResponseBody &) = default ;
    DescribeASMGatewayImportedServicesResponseBody& operator=(DescribeASMGatewayImportedServicesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->importedServices_ == nullptr
        && return this->requestId_ == nullptr; };
    // importedServices Field Functions 
    bool hasImportedServices() const { return this->importedServices_ != nullptr;};
    void deleteImportedServices() { this->importedServices_ = nullptr;};
    inline const vector<DescribeASMGatewayImportedServicesResponseBodyImportedServices> & importedServices() const { DARABONBA_PTR_GET_CONST(importedServices_, vector<DescribeASMGatewayImportedServicesResponseBodyImportedServices>) };
    inline vector<DescribeASMGatewayImportedServicesResponseBodyImportedServices> importedServices() { DARABONBA_PTR_GET(importedServices_, vector<DescribeASMGatewayImportedServicesResponseBodyImportedServices>) };
    inline DescribeASMGatewayImportedServicesResponseBody& setImportedServices(const vector<DescribeASMGatewayImportedServicesResponseBodyImportedServices> & importedServices) { DARABONBA_PTR_SET_VALUE(importedServices_, importedServices) };
    inline DescribeASMGatewayImportedServicesResponseBody& setImportedServices(vector<DescribeASMGatewayImportedServicesResponseBodyImportedServices> && importedServices) { DARABONBA_PTR_SET_RVALUE(importedServices_, importedServices) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeASMGatewayImportedServicesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The list of the imported services.
    std::shared_ptr<vector<DescribeASMGatewayImportedServicesResponseBodyImportedServices>> importedServices_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicemesh20200111
#endif
