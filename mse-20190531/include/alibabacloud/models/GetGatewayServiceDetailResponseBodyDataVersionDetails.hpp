// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETGATEWAYSERVICEDETAILRESPONSEBODYDATAVERSIONDETAILS_HPP_
#define ALIBABACLOUD_MODELS_GETGATEWAYSERVICEDETAILRESPONSEBODYDATAVERSIONDETAILS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetGatewayServiceDetailResponseBodyDataVersionDetailsServiceVersion.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class GetGatewayServiceDetailResponseBodyDataVersionDetails : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetGatewayServiceDetailResponseBodyDataVersionDetails& obj) { 
      DARABONBA_PTR_TO_JSON(EndpointNum, endpointNum_);
      DARABONBA_PTR_TO_JSON(EndpointNumPercent, endpointNumPercent_);
      DARABONBA_PTR_TO_JSON(ServiceVersion, serviceVersion_);
    };
    friend void from_json(const Darabonba::Json& j, GetGatewayServiceDetailResponseBodyDataVersionDetails& obj) { 
      DARABONBA_PTR_FROM_JSON(EndpointNum, endpointNum_);
      DARABONBA_PTR_FROM_JSON(EndpointNumPercent, endpointNumPercent_);
      DARABONBA_PTR_FROM_JSON(ServiceVersion, serviceVersion_);
    };
    GetGatewayServiceDetailResponseBodyDataVersionDetails() = default ;
    GetGatewayServiceDetailResponseBodyDataVersionDetails(const GetGatewayServiceDetailResponseBodyDataVersionDetails &) = default ;
    GetGatewayServiceDetailResponseBodyDataVersionDetails(GetGatewayServiceDetailResponseBodyDataVersionDetails &&) = default ;
    GetGatewayServiceDetailResponseBodyDataVersionDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetGatewayServiceDetailResponseBodyDataVersionDetails() = default ;
    GetGatewayServiceDetailResponseBodyDataVersionDetails& operator=(const GetGatewayServiceDetailResponseBodyDataVersionDetails &) = default ;
    GetGatewayServiceDetailResponseBodyDataVersionDetails& operator=(GetGatewayServiceDetailResponseBodyDataVersionDetails &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endpointNum_ == nullptr
        && return this->endpointNumPercent_ == nullptr && return this->serviceVersion_ == nullptr; };
    // endpointNum Field Functions 
    bool hasEndpointNum() const { return this->endpointNum_ != nullptr;};
    void deleteEndpointNum() { this->endpointNum_ = nullptr;};
    inline int32_t endpointNum() const { DARABONBA_PTR_GET_DEFAULT(endpointNum_, 0) };
    inline GetGatewayServiceDetailResponseBodyDataVersionDetails& setEndpointNum(int32_t endpointNum) { DARABONBA_PTR_SET_VALUE(endpointNum_, endpointNum) };


    // endpointNumPercent Field Functions 
    bool hasEndpointNumPercent() const { return this->endpointNumPercent_ != nullptr;};
    void deleteEndpointNumPercent() { this->endpointNumPercent_ = nullptr;};
    inline string endpointNumPercent() const { DARABONBA_PTR_GET_DEFAULT(endpointNumPercent_, "") };
    inline GetGatewayServiceDetailResponseBodyDataVersionDetails& setEndpointNumPercent(string endpointNumPercent) { DARABONBA_PTR_SET_VALUE(endpointNumPercent_, endpointNumPercent) };


    // serviceVersion Field Functions 
    bool hasServiceVersion() const { return this->serviceVersion_ != nullptr;};
    void deleteServiceVersion() { this->serviceVersion_ = nullptr;};
    inline const Models::GetGatewayServiceDetailResponseBodyDataVersionDetailsServiceVersion & serviceVersion() const { DARABONBA_PTR_GET_CONST(serviceVersion_, Models::GetGatewayServiceDetailResponseBodyDataVersionDetailsServiceVersion) };
    inline Models::GetGatewayServiceDetailResponseBodyDataVersionDetailsServiceVersion serviceVersion() { DARABONBA_PTR_GET(serviceVersion_, Models::GetGatewayServiceDetailResponseBodyDataVersionDetailsServiceVersion) };
    inline GetGatewayServiceDetailResponseBodyDataVersionDetails& setServiceVersion(const Models::GetGatewayServiceDetailResponseBodyDataVersionDetailsServiceVersion & serviceVersion) { DARABONBA_PTR_SET_VALUE(serviceVersion_, serviceVersion) };
    inline GetGatewayServiceDetailResponseBodyDataVersionDetails& setServiceVersion(Models::GetGatewayServiceDetailResponseBodyDataVersionDetailsServiceVersion && serviceVersion) { DARABONBA_PTR_SET_RVALUE(serviceVersion_, serviceVersion) };


  protected:
    // The number of instances.
    std::shared_ptr<int32_t> endpointNum_ = nullptr;
    // The percentage of instances.
    std::shared_ptr<string> endpointNumPercent_ = nullptr;
    // The service version.
    std::shared_ptr<Models::GetGatewayServiceDetailResponseBodyDataVersionDetailsServiceVersion> serviceVersion_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
