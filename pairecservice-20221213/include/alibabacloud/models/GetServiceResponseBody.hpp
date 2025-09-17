// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSERVICERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSERVICERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetServiceResponseBodyLatestProdReleaseOrder.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiRecService20221213
{
namespace Models
{
  class GetServiceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetServiceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EngineConfigId, engineConfigId_);
      DARABONBA_PTR_TO_JSON(GmtReleasedTime, gmtReleasedTime_);
      DARABONBA_PTR_TO_JSON(ImageAuth, imageAuth_);
      DARABONBA_PTR_TO_JSON(ImageName, imageName_);
      DARABONBA_PTR_TO_JSON(LatestProdReleaseOrder, latestProdReleaseOrder_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ServiceConfig, serviceConfig_);
      DARABONBA_PTR_TO_JSON(ServiceResourceUri, serviceResourceUri_);
    };
    friend void from_json(const Darabonba::Json& j, GetServiceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EngineConfigId, engineConfigId_);
      DARABONBA_PTR_FROM_JSON(GmtReleasedTime, gmtReleasedTime_);
      DARABONBA_PTR_FROM_JSON(ImageAuth, imageAuth_);
      DARABONBA_PTR_FROM_JSON(ImageName, imageName_);
      DARABONBA_PTR_FROM_JSON(LatestProdReleaseOrder, latestProdReleaseOrder_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ServiceConfig, serviceConfig_);
      DARABONBA_PTR_FROM_JSON(ServiceResourceUri, serviceResourceUri_);
    };
    GetServiceResponseBody() = default ;
    GetServiceResponseBody(const GetServiceResponseBody &) = default ;
    GetServiceResponseBody(GetServiceResponseBody &&) = default ;
    GetServiceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetServiceResponseBody() = default ;
    GetServiceResponseBody& operator=(const GetServiceResponseBody &) = default ;
    GetServiceResponseBody& operator=(GetServiceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->description_ != nullptr
        && this->engineConfigId_ != nullptr && this->gmtReleasedTime_ != nullptr && this->imageAuth_ != nullptr && this->imageName_ != nullptr && this->latestProdReleaseOrder_ != nullptr
        && this->name_ != nullptr && this->region_ != nullptr && this->requestId_ != nullptr && this->serviceConfig_ != nullptr && this->serviceResourceUri_ != nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetServiceResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // engineConfigId Field Functions 
    bool hasEngineConfigId() const { return this->engineConfigId_ != nullptr;};
    void deleteEngineConfigId() { this->engineConfigId_ = nullptr;};
    inline string engineConfigId() const { DARABONBA_PTR_GET_DEFAULT(engineConfigId_, "") };
    inline GetServiceResponseBody& setEngineConfigId(string engineConfigId) { DARABONBA_PTR_SET_VALUE(engineConfigId_, engineConfigId) };


    // gmtReleasedTime Field Functions 
    bool hasGmtReleasedTime() const { return this->gmtReleasedTime_ != nullptr;};
    void deleteGmtReleasedTime() { this->gmtReleasedTime_ = nullptr;};
    inline string gmtReleasedTime() const { DARABONBA_PTR_GET_DEFAULT(gmtReleasedTime_, "") };
    inline GetServiceResponseBody& setGmtReleasedTime(string gmtReleasedTime) { DARABONBA_PTR_SET_VALUE(gmtReleasedTime_, gmtReleasedTime) };


    // imageAuth Field Functions 
    bool hasImageAuth() const { return this->imageAuth_ != nullptr;};
    void deleteImageAuth() { this->imageAuth_ = nullptr;};
    inline string imageAuth() const { DARABONBA_PTR_GET_DEFAULT(imageAuth_, "") };
    inline GetServiceResponseBody& setImageAuth(string imageAuth) { DARABONBA_PTR_SET_VALUE(imageAuth_, imageAuth) };


    // imageName Field Functions 
    bool hasImageName() const { return this->imageName_ != nullptr;};
    void deleteImageName() { this->imageName_ = nullptr;};
    inline string imageName() const { DARABONBA_PTR_GET_DEFAULT(imageName_, "") };
    inline GetServiceResponseBody& setImageName(string imageName) { DARABONBA_PTR_SET_VALUE(imageName_, imageName) };


    // latestProdReleaseOrder Field Functions 
    bool hasLatestProdReleaseOrder() const { return this->latestProdReleaseOrder_ != nullptr;};
    void deleteLatestProdReleaseOrder() { this->latestProdReleaseOrder_ = nullptr;};
    inline const GetServiceResponseBodyLatestProdReleaseOrder & latestProdReleaseOrder() const { DARABONBA_PTR_GET_CONST(latestProdReleaseOrder_, GetServiceResponseBodyLatestProdReleaseOrder) };
    inline GetServiceResponseBodyLatestProdReleaseOrder latestProdReleaseOrder() { DARABONBA_PTR_GET(latestProdReleaseOrder_, GetServiceResponseBodyLatestProdReleaseOrder) };
    inline GetServiceResponseBody& setLatestProdReleaseOrder(const GetServiceResponseBodyLatestProdReleaseOrder & latestProdReleaseOrder) { DARABONBA_PTR_SET_VALUE(latestProdReleaseOrder_, latestProdReleaseOrder) };
    inline GetServiceResponseBody& setLatestProdReleaseOrder(GetServiceResponseBodyLatestProdReleaseOrder && latestProdReleaseOrder) { DARABONBA_PTR_SET_RVALUE(latestProdReleaseOrder_, latestProdReleaseOrder) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetServiceResponseBody& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline GetServiceResponseBody& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetServiceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // serviceConfig Field Functions 
    bool hasServiceConfig() const { return this->serviceConfig_ != nullptr;};
    void deleteServiceConfig() { this->serviceConfig_ = nullptr;};
    inline string serviceConfig() const { DARABONBA_PTR_GET_DEFAULT(serviceConfig_, "") };
    inline GetServiceResponseBody& setServiceConfig(string serviceConfig) { DARABONBA_PTR_SET_VALUE(serviceConfig_, serviceConfig) };


    // serviceResourceUri Field Functions 
    bool hasServiceResourceUri() const { return this->serviceResourceUri_ != nullptr;};
    void deleteServiceResourceUri() { this->serviceResourceUri_ = nullptr;};
    inline string serviceResourceUri() const { DARABONBA_PTR_GET_DEFAULT(serviceResourceUri_, "") };
    inline GetServiceResponseBody& setServiceResourceUri(string serviceResourceUri) { DARABONBA_PTR_SET_VALUE(serviceResourceUri_, serviceResourceUri) };


  protected:
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> engineConfigId_ = nullptr;
    std::shared_ptr<string> gmtReleasedTime_ = nullptr;
    std::shared_ptr<string> imageAuth_ = nullptr;
    std::shared_ptr<string> imageName_ = nullptr;
    std::shared_ptr<GetServiceResponseBodyLatestProdReleaseOrder> latestProdReleaseOrder_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> region_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> serviceConfig_ = nullptr;
    std::shared_ptr<string> serviceResourceUri_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif
