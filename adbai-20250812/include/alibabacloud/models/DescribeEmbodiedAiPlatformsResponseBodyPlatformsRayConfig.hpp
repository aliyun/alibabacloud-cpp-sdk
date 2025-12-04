// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEMBODIEDAIPLATFORMSRESPONSEBODYPLATFORMSRAYCONFIG_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEMBODIEDAIPLATFORMSRESPONSEBODYPLATFORMSRAYCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeEmbodiedAIPlatformsResponseBodyPlatformsRayConfigWorkerGroups.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ADBAI20250812
{
namespace Models
{
  class DescribeEmbodiedAIPlatformsResponseBodyPlatformsRayConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEmbodiedAIPlatformsResponseBodyPlatformsRayConfig& obj) { 
      DARABONBA_PTR_TO_JSON(Category, category_);
      DARABONBA_PTR_TO_JSON(HeadDiskCapacity, headDiskCapacity_);
      DARABONBA_PTR_TO_JSON(HeadSpec, headSpec_);
      DARABONBA_PTR_TO_JSON(HeadSpecType, headSpecType_);
      DARABONBA_PTR_TO_JSON(RayClusterAddress, rayClusterAddress_);
      DARABONBA_PTR_TO_JSON(RayDashboardAddress, rayDashboardAddress_);
      DARABONBA_PTR_TO_JSON(RayGrafanaAddress, rayGrafanaAddress_);
      DARABONBA_PTR_TO_JSON(WorkerGroups, workerGroups_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEmbodiedAIPlatformsResponseBodyPlatformsRayConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(Category, category_);
      DARABONBA_PTR_FROM_JSON(HeadDiskCapacity, headDiskCapacity_);
      DARABONBA_PTR_FROM_JSON(HeadSpec, headSpec_);
      DARABONBA_PTR_FROM_JSON(HeadSpecType, headSpecType_);
      DARABONBA_PTR_FROM_JSON(RayClusterAddress, rayClusterAddress_);
      DARABONBA_PTR_FROM_JSON(RayDashboardAddress, rayDashboardAddress_);
      DARABONBA_PTR_FROM_JSON(RayGrafanaAddress, rayGrafanaAddress_);
      DARABONBA_PTR_FROM_JSON(WorkerGroups, workerGroups_);
    };
    DescribeEmbodiedAIPlatformsResponseBodyPlatformsRayConfig() = default ;
    DescribeEmbodiedAIPlatformsResponseBodyPlatformsRayConfig(const DescribeEmbodiedAIPlatformsResponseBodyPlatformsRayConfig &) = default ;
    DescribeEmbodiedAIPlatformsResponseBodyPlatformsRayConfig(DescribeEmbodiedAIPlatformsResponseBodyPlatformsRayConfig &&) = default ;
    DescribeEmbodiedAIPlatformsResponseBodyPlatformsRayConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEmbodiedAIPlatformsResponseBodyPlatformsRayConfig() = default ;
    DescribeEmbodiedAIPlatformsResponseBodyPlatformsRayConfig& operator=(const DescribeEmbodiedAIPlatformsResponseBodyPlatformsRayConfig &) = default ;
    DescribeEmbodiedAIPlatformsResponseBodyPlatformsRayConfig& operator=(DescribeEmbodiedAIPlatformsResponseBodyPlatformsRayConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->category_ == nullptr
        && return this->headDiskCapacity_ == nullptr && return this->headSpec_ == nullptr && return this->headSpecType_ == nullptr && return this->rayClusterAddress_ == nullptr && return this->rayDashboardAddress_ == nullptr
        && return this->rayGrafanaAddress_ == nullptr && return this->workerGroups_ == nullptr; };
    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string category() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline DescribeEmbodiedAIPlatformsResponseBodyPlatformsRayConfig& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // headDiskCapacity Field Functions 
    bool hasHeadDiskCapacity() const { return this->headDiskCapacity_ != nullptr;};
    void deleteHeadDiskCapacity() { this->headDiskCapacity_ = nullptr;};
    inline string headDiskCapacity() const { DARABONBA_PTR_GET_DEFAULT(headDiskCapacity_, "") };
    inline DescribeEmbodiedAIPlatformsResponseBodyPlatformsRayConfig& setHeadDiskCapacity(string headDiskCapacity) { DARABONBA_PTR_SET_VALUE(headDiskCapacity_, headDiskCapacity) };


    // headSpec Field Functions 
    bool hasHeadSpec() const { return this->headSpec_ != nullptr;};
    void deleteHeadSpec() { this->headSpec_ = nullptr;};
    inline string headSpec() const { DARABONBA_PTR_GET_DEFAULT(headSpec_, "") };
    inline DescribeEmbodiedAIPlatformsResponseBodyPlatformsRayConfig& setHeadSpec(string headSpec) { DARABONBA_PTR_SET_VALUE(headSpec_, headSpec) };


    // headSpecType Field Functions 
    bool hasHeadSpecType() const { return this->headSpecType_ != nullptr;};
    void deleteHeadSpecType() { this->headSpecType_ = nullptr;};
    inline string headSpecType() const { DARABONBA_PTR_GET_DEFAULT(headSpecType_, "") };
    inline DescribeEmbodiedAIPlatformsResponseBodyPlatformsRayConfig& setHeadSpecType(string headSpecType) { DARABONBA_PTR_SET_VALUE(headSpecType_, headSpecType) };


    // rayClusterAddress Field Functions 
    bool hasRayClusterAddress() const { return this->rayClusterAddress_ != nullptr;};
    void deleteRayClusterAddress() { this->rayClusterAddress_ = nullptr;};
    inline string rayClusterAddress() const { DARABONBA_PTR_GET_DEFAULT(rayClusterAddress_, "") };
    inline DescribeEmbodiedAIPlatformsResponseBodyPlatformsRayConfig& setRayClusterAddress(string rayClusterAddress) { DARABONBA_PTR_SET_VALUE(rayClusterAddress_, rayClusterAddress) };


    // rayDashboardAddress Field Functions 
    bool hasRayDashboardAddress() const { return this->rayDashboardAddress_ != nullptr;};
    void deleteRayDashboardAddress() { this->rayDashboardAddress_ = nullptr;};
    inline string rayDashboardAddress() const { DARABONBA_PTR_GET_DEFAULT(rayDashboardAddress_, "") };
    inline DescribeEmbodiedAIPlatformsResponseBodyPlatformsRayConfig& setRayDashboardAddress(string rayDashboardAddress) { DARABONBA_PTR_SET_VALUE(rayDashboardAddress_, rayDashboardAddress) };


    // rayGrafanaAddress Field Functions 
    bool hasRayGrafanaAddress() const { return this->rayGrafanaAddress_ != nullptr;};
    void deleteRayGrafanaAddress() { this->rayGrafanaAddress_ = nullptr;};
    inline string rayGrafanaAddress() const { DARABONBA_PTR_GET_DEFAULT(rayGrafanaAddress_, "") };
    inline DescribeEmbodiedAIPlatformsResponseBodyPlatformsRayConfig& setRayGrafanaAddress(string rayGrafanaAddress) { DARABONBA_PTR_SET_VALUE(rayGrafanaAddress_, rayGrafanaAddress) };


    // workerGroups Field Functions 
    bool hasWorkerGroups() const { return this->workerGroups_ != nullptr;};
    void deleteWorkerGroups() { this->workerGroups_ = nullptr;};
    inline const vector<Models::DescribeEmbodiedAIPlatformsResponseBodyPlatformsRayConfigWorkerGroups> & workerGroups() const { DARABONBA_PTR_GET_CONST(workerGroups_, vector<Models::DescribeEmbodiedAIPlatformsResponseBodyPlatformsRayConfigWorkerGroups>) };
    inline vector<Models::DescribeEmbodiedAIPlatformsResponseBodyPlatformsRayConfigWorkerGroups> workerGroups() { DARABONBA_PTR_GET(workerGroups_, vector<Models::DescribeEmbodiedAIPlatformsResponseBodyPlatformsRayConfigWorkerGroups>) };
    inline DescribeEmbodiedAIPlatformsResponseBodyPlatformsRayConfig& setWorkerGroups(const vector<Models::DescribeEmbodiedAIPlatformsResponseBodyPlatformsRayConfigWorkerGroups> & workerGroups) { DARABONBA_PTR_SET_VALUE(workerGroups_, workerGroups) };
    inline DescribeEmbodiedAIPlatformsResponseBodyPlatformsRayConfig& setWorkerGroups(vector<Models::DescribeEmbodiedAIPlatformsResponseBodyPlatformsRayConfigWorkerGroups> && workerGroups) { DARABONBA_PTR_SET_RVALUE(workerGroups_, workerGroups) };


  protected:
    std::shared_ptr<string> category_ = nullptr;
    std::shared_ptr<string> headDiskCapacity_ = nullptr;
    std::shared_ptr<string> headSpec_ = nullptr;
    std::shared_ptr<string> headSpecType_ = nullptr;
    std::shared_ptr<string> rayClusterAddress_ = nullptr;
    std::shared_ptr<string> rayDashboardAddress_ = nullptr;
    std::shared_ptr<string> rayGrafanaAddress_ = nullptr;
    std::shared_ptr<vector<Models::DescribeEmbodiedAIPlatformsResponseBodyPlatformsRayConfigWorkerGroups>> workerGroups_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ADBAI20250812
#endif
