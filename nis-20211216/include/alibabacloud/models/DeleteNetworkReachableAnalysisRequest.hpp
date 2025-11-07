// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETENETWORKREACHABLEANALYSISREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETENETWORKREACHABLEANALYSISREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Nis20211216
{
namespace Models
{
  class DeleteNetworkReachableAnalysisRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteNetworkReachableAnalysisRequest& obj) { 
      DARABONBA_PTR_TO_JSON(NetworkReachableAnalysisIds, networkReachableAnalysisIds_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteNetworkReachableAnalysisRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(NetworkReachableAnalysisIds, networkReachableAnalysisIds_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DeleteNetworkReachableAnalysisRequest() = default ;
    DeleteNetworkReachableAnalysisRequest(const DeleteNetworkReachableAnalysisRequest &) = default ;
    DeleteNetworkReachableAnalysisRequest(DeleteNetworkReachableAnalysisRequest &&) = default ;
    DeleteNetworkReachableAnalysisRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteNetworkReachableAnalysisRequest() = default ;
    DeleteNetworkReachableAnalysisRequest& operator=(const DeleteNetworkReachableAnalysisRequest &) = default ;
    DeleteNetworkReachableAnalysisRequest& operator=(DeleteNetworkReachableAnalysisRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->networkReachableAnalysisIds_ == nullptr
        && return this->regionId_ == nullptr; };
    // networkReachableAnalysisIds Field Functions 
    bool hasNetworkReachableAnalysisIds() const { return this->networkReachableAnalysisIds_ != nullptr;};
    void deleteNetworkReachableAnalysisIds() { this->networkReachableAnalysisIds_ = nullptr;};
    inline const vector<string> & networkReachableAnalysisIds() const { DARABONBA_PTR_GET_CONST(networkReachableAnalysisIds_, vector<string>) };
    inline vector<string> networkReachableAnalysisIds() { DARABONBA_PTR_GET(networkReachableAnalysisIds_, vector<string>) };
    inline DeleteNetworkReachableAnalysisRequest& setNetworkReachableAnalysisIds(const vector<string> & networkReachableAnalysisIds) { DARABONBA_PTR_SET_VALUE(networkReachableAnalysisIds_, networkReachableAnalysisIds) };
    inline DeleteNetworkReachableAnalysisRequest& setNetworkReachableAnalysisIds(vector<string> && networkReachableAnalysisIds) { DARABONBA_PTR_SET_RVALUE(networkReachableAnalysisIds_, networkReachableAnalysisIds) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DeleteNetworkReachableAnalysisRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The IDs of the tasks for analyzing network reachability.
    // 
    // This parameter is required.
    std::shared_ptr<vector<string>> networkReachableAnalysisIds_ = nullptr;
    // The ID of the region for which you want to delete a task for analyzing network reachability.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Nis20211216
#endif
