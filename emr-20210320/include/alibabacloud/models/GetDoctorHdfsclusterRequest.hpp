// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDOCTORHDFSCLUSTERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETDOCTORHDFSCLUSTERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class GetDoctorHDFSClusterRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDoctorHDFSClusterRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(DateTime, dateTime_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, GetDoctorHDFSClusterRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(DateTime, dateTime_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    GetDoctorHDFSClusterRequest() = default ;
    GetDoctorHDFSClusterRequest(const GetDoctorHDFSClusterRequest &) = default ;
    GetDoctorHDFSClusterRequest(GetDoctorHDFSClusterRequest &&) = default ;
    GetDoctorHDFSClusterRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDoctorHDFSClusterRequest() = default ;
    GetDoctorHDFSClusterRequest& operator=(const GetDoctorHDFSClusterRequest &) = default ;
    GetDoctorHDFSClusterRequest& operator=(GetDoctorHDFSClusterRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clusterId_ != nullptr
        && this->dateTime_ != nullptr && this->regionId_ != nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline GetDoctorHDFSClusterRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // dateTime Field Functions 
    bool hasDateTime() const { return this->dateTime_ != nullptr;};
    void deleteDateTime() { this->dateTime_ = nullptr;};
    inline string dateTime() const { DARABONBA_PTR_GET_DEFAULT(dateTime_, "") };
    inline GetDoctorHDFSClusterRequest& setDateTime(string dateTime) { DARABONBA_PTR_SET_VALUE(dateTime_, dateTime) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetDoctorHDFSClusterRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The cluster ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> clusterId_ = nullptr;
    // Specify the date in the ISO 8601 standard. For example, 2023-01-01 represents January 1, 2023.
    // 
    // This parameter is required.
    std::shared_ptr<string> dateTime_ = nullptr;
    // The region ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
