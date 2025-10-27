// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECONTAINERFIELDSTATISTICSRESPONSEBODYCONTAINERGROUPEDFIELDS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECONTAINERFIELDSTATISTICSRESPONSEBODYCONTAINERGROUPEDFIELDS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeContainerFieldStatisticsResponseBodyContainerGroupedFields : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeContainerFieldStatisticsResponseBodyContainerGroupedFields& obj) { 
      DARABONBA_PTR_TO_JSON(AppCount, appCount_);
      DARABONBA_PTR_TO_JSON(ClusterCount, clusterCount_);
      DARABONBA_PTR_TO_JSON(ContainerCount, containerCount_);
      DARABONBA_PTR_TO_JSON(ImageCount, imageCount_);
      DARABONBA_PTR_TO_JSON(InstanceCount, instanceCount_);
      DARABONBA_PTR_TO_JSON(NamespaceCount, namespaceCount_);
      DARABONBA_PTR_TO_JSON(PodCount, podCount_);
      DARABONBA_PTR_TO_JSON(RiskAppCount, riskAppCount_);
      DARABONBA_PTR_TO_JSON(RiskClusterCount, riskClusterCount_);
      DARABONBA_PTR_TO_JSON(RiskContainerCount, riskContainerCount_);
      DARABONBA_PTR_TO_JSON(RiskImageCount, riskImageCount_);
      DARABONBA_PTR_TO_JSON(RiskInstanceCount, riskInstanceCount_);
      DARABONBA_PTR_TO_JSON(RiskPodCount, riskPodCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeContainerFieldStatisticsResponseBodyContainerGroupedFields& obj) { 
      DARABONBA_PTR_FROM_JSON(AppCount, appCount_);
      DARABONBA_PTR_FROM_JSON(ClusterCount, clusterCount_);
      DARABONBA_PTR_FROM_JSON(ContainerCount, containerCount_);
      DARABONBA_PTR_FROM_JSON(ImageCount, imageCount_);
      DARABONBA_PTR_FROM_JSON(InstanceCount, instanceCount_);
      DARABONBA_PTR_FROM_JSON(NamespaceCount, namespaceCount_);
      DARABONBA_PTR_FROM_JSON(PodCount, podCount_);
      DARABONBA_PTR_FROM_JSON(RiskAppCount, riskAppCount_);
      DARABONBA_PTR_FROM_JSON(RiskClusterCount, riskClusterCount_);
      DARABONBA_PTR_FROM_JSON(RiskContainerCount, riskContainerCount_);
      DARABONBA_PTR_FROM_JSON(RiskImageCount, riskImageCount_);
      DARABONBA_PTR_FROM_JSON(RiskInstanceCount, riskInstanceCount_);
      DARABONBA_PTR_FROM_JSON(RiskPodCount, riskPodCount_);
    };
    DescribeContainerFieldStatisticsResponseBodyContainerGroupedFields() = default ;
    DescribeContainerFieldStatisticsResponseBodyContainerGroupedFields(const DescribeContainerFieldStatisticsResponseBodyContainerGroupedFields &) = default ;
    DescribeContainerFieldStatisticsResponseBodyContainerGroupedFields(DescribeContainerFieldStatisticsResponseBodyContainerGroupedFields &&) = default ;
    DescribeContainerFieldStatisticsResponseBodyContainerGroupedFields(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeContainerFieldStatisticsResponseBodyContainerGroupedFields() = default ;
    DescribeContainerFieldStatisticsResponseBodyContainerGroupedFields& operator=(const DescribeContainerFieldStatisticsResponseBodyContainerGroupedFields &) = default ;
    DescribeContainerFieldStatisticsResponseBodyContainerGroupedFields& operator=(DescribeContainerFieldStatisticsResponseBodyContainerGroupedFields &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appCount_ == nullptr
        && return this->clusterCount_ == nullptr && return this->containerCount_ == nullptr && return this->imageCount_ == nullptr && return this->instanceCount_ == nullptr && return this->namespaceCount_ == nullptr
        && return this->podCount_ == nullptr && return this->riskAppCount_ == nullptr && return this->riskClusterCount_ == nullptr && return this->riskContainerCount_ == nullptr && return this->riskImageCount_ == nullptr
        && return this->riskInstanceCount_ == nullptr && return this->riskPodCount_ == nullptr; };
    // appCount Field Functions 
    bool hasAppCount() const { return this->appCount_ != nullptr;};
    void deleteAppCount() { this->appCount_ = nullptr;};
    inline int32_t appCount() const { DARABONBA_PTR_GET_DEFAULT(appCount_, 0) };
    inline DescribeContainerFieldStatisticsResponseBodyContainerGroupedFields& setAppCount(int32_t appCount) { DARABONBA_PTR_SET_VALUE(appCount_, appCount) };


    // clusterCount Field Functions 
    bool hasClusterCount() const { return this->clusterCount_ != nullptr;};
    void deleteClusterCount() { this->clusterCount_ = nullptr;};
    inline int32_t clusterCount() const { DARABONBA_PTR_GET_DEFAULT(clusterCount_, 0) };
    inline DescribeContainerFieldStatisticsResponseBodyContainerGroupedFields& setClusterCount(int32_t clusterCount) { DARABONBA_PTR_SET_VALUE(clusterCount_, clusterCount) };


    // containerCount Field Functions 
    bool hasContainerCount() const { return this->containerCount_ != nullptr;};
    void deleteContainerCount() { this->containerCount_ = nullptr;};
    inline int32_t containerCount() const { DARABONBA_PTR_GET_DEFAULT(containerCount_, 0) };
    inline DescribeContainerFieldStatisticsResponseBodyContainerGroupedFields& setContainerCount(int32_t containerCount) { DARABONBA_PTR_SET_VALUE(containerCount_, containerCount) };


    // imageCount Field Functions 
    bool hasImageCount() const { return this->imageCount_ != nullptr;};
    void deleteImageCount() { this->imageCount_ = nullptr;};
    inline int32_t imageCount() const { DARABONBA_PTR_GET_DEFAULT(imageCount_, 0) };
    inline DescribeContainerFieldStatisticsResponseBodyContainerGroupedFields& setImageCount(int32_t imageCount) { DARABONBA_PTR_SET_VALUE(imageCount_, imageCount) };


    // instanceCount Field Functions 
    bool hasInstanceCount() const { return this->instanceCount_ != nullptr;};
    void deleteInstanceCount() { this->instanceCount_ = nullptr;};
    inline int32_t instanceCount() const { DARABONBA_PTR_GET_DEFAULT(instanceCount_, 0) };
    inline DescribeContainerFieldStatisticsResponseBodyContainerGroupedFields& setInstanceCount(int32_t instanceCount) { DARABONBA_PTR_SET_VALUE(instanceCount_, instanceCount) };


    // namespaceCount Field Functions 
    bool hasNamespaceCount() const { return this->namespaceCount_ != nullptr;};
    void deleteNamespaceCount() { this->namespaceCount_ = nullptr;};
    inline int32_t namespaceCount() const { DARABONBA_PTR_GET_DEFAULT(namespaceCount_, 0) };
    inline DescribeContainerFieldStatisticsResponseBodyContainerGroupedFields& setNamespaceCount(int32_t namespaceCount) { DARABONBA_PTR_SET_VALUE(namespaceCount_, namespaceCount) };


    // podCount Field Functions 
    bool hasPodCount() const { return this->podCount_ != nullptr;};
    void deletePodCount() { this->podCount_ = nullptr;};
    inline int32_t podCount() const { DARABONBA_PTR_GET_DEFAULT(podCount_, 0) };
    inline DescribeContainerFieldStatisticsResponseBodyContainerGroupedFields& setPodCount(int32_t podCount) { DARABONBA_PTR_SET_VALUE(podCount_, podCount) };


    // riskAppCount Field Functions 
    bool hasRiskAppCount() const { return this->riskAppCount_ != nullptr;};
    void deleteRiskAppCount() { this->riskAppCount_ = nullptr;};
    inline int32_t riskAppCount() const { DARABONBA_PTR_GET_DEFAULT(riskAppCount_, 0) };
    inline DescribeContainerFieldStatisticsResponseBodyContainerGroupedFields& setRiskAppCount(int32_t riskAppCount) { DARABONBA_PTR_SET_VALUE(riskAppCount_, riskAppCount) };


    // riskClusterCount Field Functions 
    bool hasRiskClusterCount() const { return this->riskClusterCount_ != nullptr;};
    void deleteRiskClusterCount() { this->riskClusterCount_ = nullptr;};
    inline int32_t riskClusterCount() const { DARABONBA_PTR_GET_DEFAULT(riskClusterCount_, 0) };
    inline DescribeContainerFieldStatisticsResponseBodyContainerGroupedFields& setRiskClusterCount(int32_t riskClusterCount) { DARABONBA_PTR_SET_VALUE(riskClusterCount_, riskClusterCount) };


    // riskContainerCount Field Functions 
    bool hasRiskContainerCount() const { return this->riskContainerCount_ != nullptr;};
    void deleteRiskContainerCount() { this->riskContainerCount_ = nullptr;};
    inline int32_t riskContainerCount() const { DARABONBA_PTR_GET_DEFAULT(riskContainerCount_, 0) };
    inline DescribeContainerFieldStatisticsResponseBodyContainerGroupedFields& setRiskContainerCount(int32_t riskContainerCount) { DARABONBA_PTR_SET_VALUE(riskContainerCount_, riskContainerCount) };


    // riskImageCount Field Functions 
    bool hasRiskImageCount() const { return this->riskImageCount_ != nullptr;};
    void deleteRiskImageCount() { this->riskImageCount_ = nullptr;};
    inline int32_t riskImageCount() const { DARABONBA_PTR_GET_DEFAULT(riskImageCount_, 0) };
    inline DescribeContainerFieldStatisticsResponseBodyContainerGroupedFields& setRiskImageCount(int32_t riskImageCount) { DARABONBA_PTR_SET_VALUE(riskImageCount_, riskImageCount) };


    // riskInstanceCount Field Functions 
    bool hasRiskInstanceCount() const { return this->riskInstanceCount_ != nullptr;};
    void deleteRiskInstanceCount() { this->riskInstanceCount_ = nullptr;};
    inline int32_t riskInstanceCount() const { DARABONBA_PTR_GET_DEFAULT(riskInstanceCount_, 0) };
    inline DescribeContainerFieldStatisticsResponseBodyContainerGroupedFields& setRiskInstanceCount(int32_t riskInstanceCount) { DARABONBA_PTR_SET_VALUE(riskInstanceCount_, riskInstanceCount) };


    // riskPodCount Field Functions 
    bool hasRiskPodCount() const { return this->riskPodCount_ != nullptr;};
    void deleteRiskPodCount() { this->riskPodCount_ = nullptr;};
    inline int32_t riskPodCount() const { DARABONBA_PTR_GET_DEFAULT(riskPodCount_, 0) };
    inline DescribeContainerFieldStatisticsResponseBodyContainerGroupedFields& setRiskPodCount(int32_t riskPodCount) { DARABONBA_PTR_SET_VALUE(riskPodCount_, riskPodCount) };


  protected:
    // The number of applications.
    std::shared_ptr<int32_t> appCount_ = nullptr;
    // The number of clusters.
    std::shared_ptr<int32_t> clusterCount_ = nullptr;
    // The number of containers.
    std::shared_ptr<int32_t> containerCount_ = nullptr;
    // The number of images.
    std::shared_ptr<int32_t> imageCount_ = nullptr;
    // The number of instances.
    std::shared_ptr<int32_t> instanceCount_ = nullptr;
    // The number of namespaces.
    std::shared_ptr<int32_t> namespaceCount_ = nullptr;
    // The number of pods.
    std::shared_ptr<int32_t> podCount_ = nullptr;
    // The number of the applications on which risks are detected.
    std::shared_ptr<int32_t> riskAppCount_ = nullptr;
    // The number of the clusters on which risks are detected.
    std::shared_ptr<int32_t> riskClusterCount_ = nullptr;
    // The number of the containers on which risks are detected.
    std::shared_ptr<int32_t> riskContainerCount_ = nullptr;
    // The number of the images on which risks are detected.
    std::shared_ptr<int32_t> riskImageCount_ = nullptr;
    // The number of the instances on which risks are detected.
    std::shared_ptr<int32_t> riskInstanceCount_ = nullptr;
    // The number of the pods on which risks are detected.
    std::shared_ptr<int32_t> riskPodCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
