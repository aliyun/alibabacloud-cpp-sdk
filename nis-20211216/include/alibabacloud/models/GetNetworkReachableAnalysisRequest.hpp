// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETNETWORKREACHABLEANALYSISREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETNETWORKREACHABLEANALYSISREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Nis20211216
{
namespace Models
{
  class GetNetworkReachableAnalysisRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetNetworkReachableAnalysisRequest& obj) { 
      DARABONBA_PTR_TO_JSON(NetworkReachableAnalysisId, networkReachableAnalysisId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, GetNetworkReachableAnalysisRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(NetworkReachableAnalysisId, networkReachableAnalysisId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    GetNetworkReachableAnalysisRequest() = default ;
    GetNetworkReachableAnalysisRequest(const GetNetworkReachableAnalysisRequest &) = default ;
    GetNetworkReachableAnalysisRequest(GetNetworkReachableAnalysisRequest &&) = default ;
    GetNetworkReachableAnalysisRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetNetworkReachableAnalysisRequest() = default ;
    GetNetworkReachableAnalysisRequest& operator=(const GetNetworkReachableAnalysisRequest &) = default ;
    GetNetworkReachableAnalysisRequest& operator=(GetNetworkReachableAnalysisRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->networkReachableAnalysisId_ == nullptr
        && return this->regionId_ == nullptr; };
    // networkReachableAnalysisId Field Functions 
    bool hasNetworkReachableAnalysisId() const { return this->networkReachableAnalysisId_ != nullptr;};
    void deleteNetworkReachableAnalysisId() { this->networkReachableAnalysisId_ = nullptr;};
    inline string networkReachableAnalysisId() const { DARABONBA_PTR_GET_DEFAULT(networkReachableAnalysisId_, "") };
    inline GetNetworkReachableAnalysisRequest& setNetworkReachableAnalysisId(string networkReachableAnalysisId) { DARABONBA_PTR_SET_VALUE(networkReachableAnalysisId_, networkReachableAnalysisId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetNetworkReachableAnalysisRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The ID of the task for analyzing network reachability. You can call the **CreateNetworkRearchableAnalysis** operation to obtain the ID of the task for analyzing network reachability.
    // 
    // This parameter is required.
    std::shared_ptr<string> networkReachableAnalysisId_ = nullptr;
    // The ID of the region for which you want to obtain the result of network reachability analysis.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Nis20211216
#endif
