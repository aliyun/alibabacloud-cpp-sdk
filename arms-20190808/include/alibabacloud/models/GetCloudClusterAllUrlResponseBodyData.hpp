// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCLOUDCLUSTERALLURLRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETCLOUDCLUSTERALLURLRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetCloudClusterAllUrlResponseBodyDataRemoteUrl.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class GetCloudClusterAllUrlResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCloudClusterAllUrlResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(RemoteUrl, remoteUrl_);
    };
    friend void from_json(const Darabonba::Json& j, GetCloudClusterAllUrlResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(RemoteUrl, remoteUrl_);
    };
    GetCloudClusterAllUrlResponseBodyData() = default ;
    GetCloudClusterAllUrlResponseBodyData(const GetCloudClusterAllUrlResponseBodyData &) = default ;
    GetCloudClusterAllUrlResponseBodyData(GetCloudClusterAllUrlResponseBodyData &&) = default ;
    GetCloudClusterAllUrlResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCloudClusterAllUrlResponseBodyData() = default ;
    GetCloudClusterAllUrlResponseBodyData& operator=(const GetCloudClusterAllUrlResponseBodyData &) = default ;
    GetCloudClusterAllUrlResponseBodyData& operator=(GetCloudClusterAllUrlResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->productCode_ != nullptr
        && this->region_ != nullptr && this->remoteUrl_ != nullptr; };
    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string productCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline GetCloudClusterAllUrlResponseBodyData& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline GetCloudClusterAllUrlResponseBodyData& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // remoteUrl Field Functions 
    bool hasRemoteUrl() const { return this->remoteUrl_ != nullptr;};
    void deleteRemoteUrl() { this->remoteUrl_ = nullptr;};
    inline const Models::GetCloudClusterAllUrlResponseBodyDataRemoteUrl & remoteUrl() const { DARABONBA_PTR_GET_CONST(remoteUrl_, Models::GetCloudClusterAllUrlResponseBodyDataRemoteUrl) };
    inline Models::GetCloudClusterAllUrlResponseBodyDataRemoteUrl remoteUrl() { DARABONBA_PTR_GET(remoteUrl_, Models::GetCloudClusterAllUrlResponseBodyDataRemoteUrl) };
    inline GetCloudClusterAllUrlResponseBodyData& setRemoteUrl(const Models::GetCloudClusterAllUrlResponseBodyDataRemoteUrl & remoteUrl) { DARABONBA_PTR_SET_VALUE(remoteUrl_, remoteUrl) };
    inline GetCloudClusterAllUrlResponseBodyData& setRemoteUrl(Models::GetCloudClusterAllUrlResponseBodyDataRemoteUrl && remoteUrl) { DARABONBA_PTR_SET_RVALUE(remoteUrl_, remoteUrl) };


  protected:
    // The identifier of the cloud service.
    std::shared_ptr<string> productCode_ = nullptr;
    // The region ID.
    std::shared_ptr<string> region_ = nullptr;
    // The URLs for remote read and write. The value is a JSON string.
    std::shared_ptr<Models::GetCloudClusterAllUrlResponseBodyDataRemoteUrl> remoteUrl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
