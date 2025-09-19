// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCLUSTERCHECKITEMWARNINGSTATISTICSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETCLUSTERCHECKITEMWARNINGSTATISTICSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetClusterCheckItemWarningStatisticsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetClusterCheckItemWarningStatisticsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(Uuid, uuid_);
    };
    friend void from_json(const Darabonba::Json& j, GetClusterCheckItemWarningStatisticsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
    };
    GetClusterCheckItemWarningStatisticsRequest() = default ;
    GetClusterCheckItemWarningStatisticsRequest(const GetClusterCheckItemWarningStatisticsRequest &) = default ;
    GetClusterCheckItemWarningStatisticsRequest(GetClusterCheckItemWarningStatisticsRequest &&) = default ;
    GetClusterCheckItemWarningStatisticsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetClusterCheckItemWarningStatisticsRequest() = default ;
    GetClusterCheckItemWarningStatisticsRequest& operator=(const GetClusterCheckItemWarningStatisticsRequest &) = default ;
    GetClusterCheckItemWarningStatisticsRequest& operator=(GetClusterCheckItemWarningStatisticsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clusterId_ != nullptr
        && this->uuid_ != nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline GetClusterCheckItemWarningStatisticsRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string uuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline GetClusterCheckItemWarningStatisticsRequest& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


  protected:
    // The ID of the container cluster.
    // 
    // >  You can call the [DescribeGroupedContainerInstances](https://help.aliyun.com/document_detail/182997.html) operation to query the IDs of container clusters.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The server UUID.
    // 
    // >  You can call the [DescribeCloudCenterInstances](~~DescribeCloudCenterInstances~~) operation to query the server UUID.
    std::shared_ptr<string> uuid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
