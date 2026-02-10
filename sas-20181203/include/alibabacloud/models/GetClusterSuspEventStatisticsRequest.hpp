// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCLUSTERSUSPEVENTSTATISTICSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETCLUSTERSUSPEVENTSTATISTICSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetClusterSuspEventStatisticsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetClusterSuspEventStatisticsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(From, from_);
    };
    friend void from_json(const Darabonba::Json& j, GetClusterSuspEventStatisticsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(From, from_);
    };
    GetClusterSuspEventStatisticsRequest() = default ;
    GetClusterSuspEventStatisticsRequest(const GetClusterSuspEventStatisticsRequest &) = default ;
    GetClusterSuspEventStatisticsRequest(GetClusterSuspEventStatisticsRequest &&) = default ;
    GetClusterSuspEventStatisticsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetClusterSuspEventStatisticsRequest() = default ;
    GetClusterSuspEventStatisticsRequest& operator=(const GetClusterSuspEventStatisticsRequest &) = default ;
    GetClusterSuspEventStatisticsRequest& operator=(GetClusterSuspEventStatisticsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterId_ == nullptr
        && this->from_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline GetClusterSuspEventStatisticsRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // from Field Functions 
    bool hasFrom() const { return this->from_ != nullptr;};
    void deleteFrom() { this->from_ = nullptr;};
    inline string getFrom() const { DARABONBA_PTR_GET_DEFAULT(from_, "") };
    inline GetClusterSuspEventStatisticsRequest& setFrom(string from) { DARABONBA_PTR_SET_VALUE(from_, from) };


  protected:
    // The ID of the container cluster.
    // 
    // >  You can call the [DescribeGroupedContainerInstances](~~DescribeGroupedContainerInstances~~) operation to query the IDs of container clusters.
    shared_ptr<string> clusterId_ {};
    // The ID of the request source. Set the value to sas.
    shared_ptr<string> from_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
