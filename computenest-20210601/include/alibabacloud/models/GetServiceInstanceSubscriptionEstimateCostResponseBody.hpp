// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSERVICEINSTANCESUBSCRIPTIONESTIMATECOSTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSERVICEINSTANCESUBSCRIPTIONESTIMATECOSTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetServiceInstanceSubscriptionEstimateCostResponseBodyResourcePrices.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNest20210601
{
namespace Models
{
  class GetServiceInstanceSubscriptionEstimateCostResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetServiceInstanceSubscriptionEstimateCostResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourcePrices, resourcePrices_);
    };
    friend void from_json(const Darabonba::Json& j, GetServiceInstanceSubscriptionEstimateCostResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourcePrices, resourcePrices_);
    };
    GetServiceInstanceSubscriptionEstimateCostResponseBody() = default ;
    GetServiceInstanceSubscriptionEstimateCostResponseBody(const GetServiceInstanceSubscriptionEstimateCostResponseBody &) = default ;
    GetServiceInstanceSubscriptionEstimateCostResponseBody(GetServiceInstanceSubscriptionEstimateCostResponseBody &&) = default ;
    GetServiceInstanceSubscriptionEstimateCostResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetServiceInstanceSubscriptionEstimateCostResponseBody() = default ;
    GetServiceInstanceSubscriptionEstimateCostResponseBody& operator=(const GetServiceInstanceSubscriptionEstimateCostResponseBody &) = default ;
    GetServiceInstanceSubscriptionEstimateCostResponseBody& operator=(GetServiceInstanceSubscriptionEstimateCostResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->resourcePrices_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetServiceInstanceSubscriptionEstimateCostResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourcePrices Field Functions 
    bool hasResourcePrices() const { return this->resourcePrices_ != nullptr;};
    void deleteResourcePrices() { this->resourcePrices_ = nullptr;};
    inline const vector<GetServiceInstanceSubscriptionEstimateCostResponseBodyResourcePrices> & resourcePrices() const { DARABONBA_PTR_GET_CONST(resourcePrices_, vector<GetServiceInstanceSubscriptionEstimateCostResponseBodyResourcePrices>) };
    inline vector<GetServiceInstanceSubscriptionEstimateCostResponseBodyResourcePrices> resourcePrices() { DARABONBA_PTR_GET(resourcePrices_, vector<GetServiceInstanceSubscriptionEstimateCostResponseBodyResourcePrices>) };
    inline GetServiceInstanceSubscriptionEstimateCostResponseBody& setResourcePrices(const vector<GetServiceInstanceSubscriptionEstimateCostResponseBodyResourcePrices> & resourcePrices) { DARABONBA_PTR_SET_VALUE(resourcePrices_, resourcePrices) };
    inline GetServiceInstanceSubscriptionEstimateCostResponseBody& setResourcePrices(vector<GetServiceInstanceSubscriptionEstimateCostResponseBodyResourcePrices> && resourcePrices) { DARABONBA_PTR_SET_RVALUE(resourcePrices_, resourcePrices) };


  protected:
    // Request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // List of resource price information.
    std::shared_ptr<vector<GetServiceInstanceSubscriptionEstimateCostResponseBodyResourcePrices>> resourcePrices_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNest20210601
#endif
