// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSTACKDRIFTDETECTIONSTATUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETSTACKDRIFTDETECTIONSTATUSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ROS20190910
{
namespace Models
{
  class GetStackDriftDetectionStatusRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetStackDriftDetectionStatusRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DriftDetectionId, driftDetectionId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, GetStackDriftDetectionStatusRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DriftDetectionId, driftDetectionId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    GetStackDriftDetectionStatusRequest() = default ;
    GetStackDriftDetectionStatusRequest(const GetStackDriftDetectionStatusRequest &) = default ;
    GetStackDriftDetectionStatusRequest(GetStackDriftDetectionStatusRequest &&) = default ;
    GetStackDriftDetectionStatusRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetStackDriftDetectionStatusRequest() = default ;
    GetStackDriftDetectionStatusRequest& operator=(const GetStackDriftDetectionStatusRequest &) = default ;
    GetStackDriftDetectionStatusRequest& operator=(GetStackDriftDetectionStatusRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->driftDetectionId_ != nullptr
        && this->regionId_ != nullptr; };
    // driftDetectionId Field Functions 
    bool hasDriftDetectionId() const { return this->driftDetectionId_ != nullptr;};
    void deleteDriftDetectionId() { this->driftDetectionId_ = nullptr;};
    inline string driftDetectionId() const { DARABONBA_PTR_GET_DEFAULT(driftDetectionId_, "") };
    inline GetStackDriftDetectionStatusRequest& setDriftDetectionId(string driftDetectionId) { DARABONBA_PTR_SET_VALUE(driftDetectionId_, driftDetectionId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetStackDriftDetectionStatusRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The ID of the drift detection operation.
    // 
    // You can call the [ListStackResourceDrifts](https://help.aliyun.com/document_detail/155098.html) operation to obtain the ID of the drift detection operation.
    // 
    // This parameter is required.
    std::shared_ptr<string> driftDetectionId_ = nullptr;
    // The region ID of the stack to be detected for drift.
    // 
    // You can call the [DescribeRegions](https://help.aliyun.com/document_detail/131035.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif
