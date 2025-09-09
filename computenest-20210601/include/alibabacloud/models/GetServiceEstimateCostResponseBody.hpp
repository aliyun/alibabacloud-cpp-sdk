// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSERVICEESTIMATECOSTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSERVICEESTIMATECOSTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/CommodityValue.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNest20210601
{
namespace Models
{
  class GetServiceEstimateCostResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetServiceEstimateCostResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Commodity, commodity_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_ANY_TO_JSON(Resources, resources_);
    };
    friend void from_json(const Darabonba::Json& j, GetServiceEstimateCostResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Commodity, commodity_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_ANY_FROM_JSON(Resources, resources_);
    };
    GetServiceEstimateCostResponseBody() = default ;
    GetServiceEstimateCostResponseBody(const GetServiceEstimateCostResponseBody &) = default ;
    GetServiceEstimateCostResponseBody(GetServiceEstimateCostResponseBody &&) = default ;
    GetServiceEstimateCostResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetServiceEstimateCostResponseBody() = default ;
    GetServiceEstimateCostResponseBody& operator=(const GetServiceEstimateCostResponseBody &) = default ;
    GetServiceEstimateCostResponseBody& operator=(GetServiceEstimateCostResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->commodity_ != nullptr
        && this->requestId_ != nullptr && this->resources_ != nullptr; };
    // commodity Field Functions 
    bool hasCommodity() const { return this->commodity_ != nullptr;};
    void deleteCommodity() { this->commodity_ = nullptr;};
    inline const map<string, CommodityValue> & commodity() const { DARABONBA_PTR_GET_CONST(commodity_, map<string, CommodityValue>) };
    inline map<string, CommodityValue> commodity() { DARABONBA_PTR_GET(commodity_, map<string, CommodityValue>) };
    inline GetServiceEstimateCostResponseBody& setCommodity(const map<string, CommodityValue> & commodity) { DARABONBA_PTR_SET_VALUE(commodity_, commodity) };
    inline GetServiceEstimateCostResponseBody& setCommodity(map<string, CommodityValue> && commodity) { DARABONBA_PTR_SET_RVALUE(commodity_, commodity) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetServiceEstimateCostResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resources Field Functions 
    bool hasResources() const { return this->resources_ != nullptr;};
    void deleteResources() { this->resources_ = nullptr;};
    inline     const Darabonba::Json & resources() const { DARABONBA_GET(resources_) };
    Darabonba::Json & resources() { DARABONBA_GET(resources_) };
    inline GetServiceEstimateCostResponseBody& setResources(const Darabonba::Json & resources) { DARABONBA_SET_VALUE(resources_, resources) };
    inline GetServiceEstimateCostResponseBody& setResources(Darabonba::Json & resources) { DARABONBA_SET_RVALUE(resources_, resources) };


  protected:
    // Alibaba Cloud Marketplace purchase order information.
    std::shared_ptr<map<string, CommodityValue>> commodity_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The resources.
    Darabonba::Json resources_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNest20210601
#endif
