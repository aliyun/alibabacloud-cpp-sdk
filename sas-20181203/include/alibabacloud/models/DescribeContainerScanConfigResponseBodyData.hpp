// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECONTAINERSCANCONFIGRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECONTAINERSCANCONFIGRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeContainerScanConfigResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeContainerScanConfigResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AllCount, allCount_);
      DARABONBA_PTR_TO_JSON(AppNames, appNames_);
      DARABONBA_PTR_TO_JSON(ChooseCount, chooseCount_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(ClusterName, clusterName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeContainerScanConfigResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AllCount, allCount_);
      DARABONBA_PTR_FROM_JSON(AppNames, appNames_);
      DARABONBA_PTR_FROM_JSON(ChooseCount, chooseCount_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(ClusterName, clusterName_);
    };
    DescribeContainerScanConfigResponseBodyData() = default ;
    DescribeContainerScanConfigResponseBodyData(const DescribeContainerScanConfigResponseBodyData &) = default ;
    DescribeContainerScanConfigResponseBodyData(DescribeContainerScanConfigResponseBodyData &&) = default ;
    DescribeContainerScanConfigResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeContainerScanConfigResponseBodyData() = default ;
    DescribeContainerScanConfigResponseBodyData& operator=(const DescribeContainerScanConfigResponseBodyData &) = default ;
    DescribeContainerScanConfigResponseBodyData& operator=(DescribeContainerScanConfigResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->allCount_ == nullptr
        && return this->appNames_ == nullptr && return this->chooseCount_ == nullptr && return this->clusterId_ == nullptr && return this->clusterName_ == nullptr; };
    // allCount Field Functions 
    bool hasAllCount() const { return this->allCount_ != nullptr;};
    void deleteAllCount() { this->allCount_ = nullptr;};
    inline int32_t allCount() const { DARABONBA_PTR_GET_DEFAULT(allCount_, 0) };
    inline DescribeContainerScanConfigResponseBodyData& setAllCount(int32_t allCount) { DARABONBA_PTR_SET_VALUE(allCount_, allCount) };


    // appNames Field Functions 
    bool hasAppNames() const { return this->appNames_ != nullptr;};
    void deleteAppNames() { this->appNames_ = nullptr;};
    inline string appNames() const { DARABONBA_PTR_GET_DEFAULT(appNames_, "") };
    inline DescribeContainerScanConfigResponseBodyData& setAppNames(string appNames) { DARABONBA_PTR_SET_VALUE(appNames_, appNames) };


    // chooseCount Field Functions 
    bool hasChooseCount() const { return this->chooseCount_ != nullptr;};
    void deleteChooseCount() { this->chooseCount_ = nullptr;};
    inline int32_t chooseCount() const { DARABONBA_PTR_GET_DEFAULT(chooseCount_, 0) };
    inline DescribeContainerScanConfigResponseBodyData& setChooseCount(int32_t chooseCount) { DARABONBA_PTR_SET_VALUE(chooseCount_, chooseCount) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline DescribeContainerScanConfigResponseBodyData& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // clusterName Field Functions 
    bool hasClusterName() const { return this->clusterName_ != nullptr;};
    void deleteClusterName() { this->clusterName_ = nullptr;};
    inline string clusterName() const { DARABONBA_PTR_GET_DEFAULT(clusterName_, "") };
    inline DescribeContainerScanConfigResponseBodyData& setClusterName(string clusterName) { DARABONBA_PTR_SET_VALUE(clusterName_, clusterName) };


  protected:
    // The total number of container applications in the cluster.
    std::shared_ptr<int32_t> allCount_ = nullptr;
    // The names of the container applications.
    std::shared_ptr<string> appNames_ = nullptr;
    // The number of selected container applications.
    std::shared_ptr<int32_t> chooseCount_ = nullptr;
    // The cluster ID.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The name of the cluster.
    std::shared_ptr<string> clusterName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
