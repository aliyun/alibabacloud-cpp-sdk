// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRELEASEVERSIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTRELEASEVERSIONSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class ListReleaseVersionsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListReleaseVersionsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterType, clusterType_);
      DARABONBA_PTR_TO_JSON(IaasType, iaasType_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, ListReleaseVersionsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterType, clusterType_);
      DARABONBA_PTR_FROM_JSON(IaasType, iaasType_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    ListReleaseVersionsRequest() = default ;
    ListReleaseVersionsRequest(const ListReleaseVersionsRequest &) = default ;
    ListReleaseVersionsRequest(ListReleaseVersionsRequest &&) = default ;
    ListReleaseVersionsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListReleaseVersionsRequest() = default ;
    ListReleaseVersionsRequest& operator=(const ListReleaseVersionsRequest &) = default ;
    ListReleaseVersionsRequest& operator=(ListReleaseVersionsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clusterType_ != nullptr
        && this->iaasType_ != nullptr && this->regionId_ != nullptr; };
    // clusterType Field Functions 
    bool hasClusterType() const { return this->clusterType_ != nullptr;};
    void deleteClusterType() { this->clusterType_ = nullptr;};
    inline string clusterType() const { DARABONBA_PTR_GET_DEFAULT(clusterType_, "") };
    inline ListReleaseVersionsRequest& setClusterType(string clusterType) { DARABONBA_PTR_SET_VALUE(clusterType_, clusterType) };


    // iaasType Field Functions 
    bool hasIaasType() const { return this->iaasType_ != nullptr;};
    void deleteIaasType() { this->iaasType_ = nullptr;};
    inline string iaasType() const { DARABONBA_PTR_GET_DEFAULT(iaasType_, "") };
    inline ListReleaseVersionsRequest& setIaasType(string iaasType) { DARABONBA_PTR_SET_VALUE(iaasType_, iaasType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListReleaseVersionsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The type of the cluster.
    // 
    // This parameter is required.
    std::shared_ptr<string> clusterType_ = nullptr;
    // The type of the IaaS resource.
    std::shared_ptr<string> iaasType_ = nullptr;
    // The region ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
