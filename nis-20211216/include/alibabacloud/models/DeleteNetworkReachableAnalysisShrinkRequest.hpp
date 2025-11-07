// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETENETWORKREACHABLEANALYSISSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETENETWORKREACHABLEANALYSISSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Nis20211216
{
namespace Models
{
  class DeleteNetworkReachableAnalysisShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteNetworkReachableAnalysisShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(NetworkReachableAnalysisIds, networkReachableAnalysisIdsShrink_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteNetworkReachableAnalysisShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(NetworkReachableAnalysisIds, networkReachableAnalysisIdsShrink_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DeleteNetworkReachableAnalysisShrinkRequest() = default ;
    DeleteNetworkReachableAnalysisShrinkRequest(const DeleteNetworkReachableAnalysisShrinkRequest &) = default ;
    DeleteNetworkReachableAnalysisShrinkRequest(DeleteNetworkReachableAnalysisShrinkRequest &&) = default ;
    DeleteNetworkReachableAnalysisShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteNetworkReachableAnalysisShrinkRequest() = default ;
    DeleteNetworkReachableAnalysisShrinkRequest& operator=(const DeleteNetworkReachableAnalysisShrinkRequest &) = default ;
    DeleteNetworkReachableAnalysisShrinkRequest& operator=(DeleteNetworkReachableAnalysisShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->networkReachableAnalysisIdsShrink_ == nullptr
        && return this->regionId_ == nullptr; };
    // networkReachableAnalysisIdsShrink Field Functions 
    bool hasNetworkReachableAnalysisIdsShrink() const { return this->networkReachableAnalysisIdsShrink_ != nullptr;};
    void deleteNetworkReachableAnalysisIdsShrink() { this->networkReachableAnalysisIdsShrink_ = nullptr;};
    inline string networkReachableAnalysisIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(networkReachableAnalysisIdsShrink_, "") };
    inline DeleteNetworkReachableAnalysisShrinkRequest& setNetworkReachableAnalysisIdsShrink(string networkReachableAnalysisIdsShrink) { DARABONBA_PTR_SET_VALUE(networkReachableAnalysisIdsShrink_, networkReachableAnalysisIdsShrink) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DeleteNetworkReachableAnalysisShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The IDs of the tasks for analyzing network reachability.
    // 
    // This parameter is required.
    std::shared_ptr<string> networkReachableAnalysisIdsShrink_ = nullptr;
    // The ID of the region for which you want to delete a task for analyzing network reachability.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Nis20211216
#endif
