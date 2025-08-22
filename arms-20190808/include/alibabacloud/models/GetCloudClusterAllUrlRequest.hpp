// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCLOUDCLUSTERALLURLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETCLOUDCLUSTERALLURLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class GetCloudClusterAllUrlRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCloudClusterAllUrlRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, GetCloudClusterAllUrlRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    GetCloudClusterAllUrlRequest() = default ;
    GetCloudClusterAllUrlRequest(const GetCloudClusterAllUrlRequest &) = default ;
    GetCloudClusterAllUrlRequest(GetCloudClusterAllUrlRequest &&) = default ;
    GetCloudClusterAllUrlRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCloudClusterAllUrlRequest() = default ;
    GetCloudClusterAllUrlRequest& operator=(const GetCloudClusterAllUrlRequest &) = default ;
    GetCloudClusterAllUrlRequest& operator=(GetCloudClusterAllUrlRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clusterId_ != nullptr
        && this->regionId_ != nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline GetCloudClusterAllUrlRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetCloudClusterAllUrlRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The ID of the CloudMonitor instance.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
