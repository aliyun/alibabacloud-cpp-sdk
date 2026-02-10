// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECONTAINERFIELDSTATISTICSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECONTAINERFIELDSTATISTICSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeContainerFieldStatisticsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeContainerFieldStatisticsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ContainerGroupedFields, containerGroupedFields_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeContainerFieldStatisticsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ContainerGroupedFields, containerGroupedFields_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeContainerFieldStatisticsResponseBody() = default ;
    DescribeContainerFieldStatisticsResponseBody(const DescribeContainerFieldStatisticsResponseBody &) = default ;
    DescribeContainerFieldStatisticsResponseBody(DescribeContainerFieldStatisticsResponseBody &&) = default ;
    DescribeContainerFieldStatisticsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeContainerFieldStatisticsResponseBody() = default ;
    DescribeContainerFieldStatisticsResponseBody& operator=(const DescribeContainerFieldStatisticsResponseBody &) = default ;
    DescribeContainerFieldStatisticsResponseBody& operator=(DescribeContainerFieldStatisticsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ContainerGroupedFields : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ContainerGroupedFields& obj) { 
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
      friend void from_json(const Darabonba::Json& j, ContainerGroupedFields& obj) { 
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
      ContainerGroupedFields() = default ;
      ContainerGroupedFields(const ContainerGroupedFields &) = default ;
      ContainerGroupedFields(ContainerGroupedFields &&) = default ;
      ContainerGroupedFields(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ContainerGroupedFields() = default ;
      ContainerGroupedFields& operator=(const ContainerGroupedFields &) = default ;
      ContainerGroupedFields& operator=(ContainerGroupedFields &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->appCount_ == nullptr
        && this->clusterCount_ == nullptr && this->containerCount_ == nullptr && this->imageCount_ == nullptr && this->instanceCount_ == nullptr && this->namespaceCount_ == nullptr
        && this->podCount_ == nullptr && this->riskAppCount_ == nullptr && this->riskClusterCount_ == nullptr && this->riskContainerCount_ == nullptr && this->riskImageCount_ == nullptr
        && this->riskInstanceCount_ == nullptr && this->riskPodCount_ == nullptr; };
      // appCount Field Functions 
      bool hasAppCount() const { return this->appCount_ != nullptr;};
      void deleteAppCount() { this->appCount_ = nullptr;};
      inline int32_t getAppCount() const { DARABONBA_PTR_GET_DEFAULT(appCount_, 0) };
      inline ContainerGroupedFields& setAppCount(int32_t appCount) { DARABONBA_PTR_SET_VALUE(appCount_, appCount) };


      // clusterCount Field Functions 
      bool hasClusterCount() const { return this->clusterCount_ != nullptr;};
      void deleteClusterCount() { this->clusterCount_ = nullptr;};
      inline int32_t getClusterCount() const { DARABONBA_PTR_GET_DEFAULT(clusterCount_, 0) };
      inline ContainerGroupedFields& setClusterCount(int32_t clusterCount) { DARABONBA_PTR_SET_VALUE(clusterCount_, clusterCount) };


      // containerCount Field Functions 
      bool hasContainerCount() const { return this->containerCount_ != nullptr;};
      void deleteContainerCount() { this->containerCount_ = nullptr;};
      inline int32_t getContainerCount() const { DARABONBA_PTR_GET_DEFAULT(containerCount_, 0) };
      inline ContainerGroupedFields& setContainerCount(int32_t containerCount) { DARABONBA_PTR_SET_VALUE(containerCount_, containerCount) };


      // imageCount Field Functions 
      bool hasImageCount() const { return this->imageCount_ != nullptr;};
      void deleteImageCount() { this->imageCount_ = nullptr;};
      inline int32_t getImageCount() const { DARABONBA_PTR_GET_DEFAULT(imageCount_, 0) };
      inline ContainerGroupedFields& setImageCount(int32_t imageCount) { DARABONBA_PTR_SET_VALUE(imageCount_, imageCount) };


      // instanceCount Field Functions 
      bool hasInstanceCount() const { return this->instanceCount_ != nullptr;};
      void deleteInstanceCount() { this->instanceCount_ = nullptr;};
      inline int32_t getInstanceCount() const { DARABONBA_PTR_GET_DEFAULT(instanceCount_, 0) };
      inline ContainerGroupedFields& setInstanceCount(int32_t instanceCount) { DARABONBA_PTR_SET_VALUE(instanceCount_, instanceCount) };


      // namespaceCount Field Functions 
      bool hasNamespaceCount() const { return this->namespaceCount_ != nullptr;};
      void deleteNamespaceCount() { this->namespaceCount_ = nullptr;};
      inline int32_t getNamespaceCount() const { DARABONBA_PTR_GET_DEFAULT(namespaceCount_, 0) };
      inline ContainerGroupedFields& setNamespaceCount(int32_t namespaceCount) { DARABONBA_PTR_SET_VALUE(namespaceCount_, namespaceCount) };


      // podCount Field Functions 
      bool hasPodCount() const { return this->podCount_ != nullptr;};
      void deletePodCount() { this->podCount_ = nullptr;};
      inline int32_t getPodCount() const { DARABONBA_PTR_GET_DEFAULT(podCount_, 0) };
      inline ContainerGroupedFields& setPodCount(int32_t podCount) { DARABONBA_PTR_SET_VALUE(podCount_, podCount) };


      // riskAppCount Field Functions 
      bool hasRiskAppCount() const { return this->riskAppCount_ != nullptr;};
      void deleteRiskAppCount() { this->riskAppCount_ = nullptr;};
      inline int32_t getRiskAppCount() const { DARABONBA_PTR_GET_DEFAULT(riskAppCount_, 0) };
      inline ContainerGroupedFields& setRiskAppCount(int32_t riskAppCount) { DARABONBA_PTR_SET_VALUE(riskAppCount_, riskAppCount) };


      // riskClusterCount Field Functions 
      bool hasRiskClusterCount() const { return this->riskClusterCount_ != nullptr;};
      void deleteRiskClusterCount() { this->riskClusterCount_ = nullptr;};
      inline int32_t getRiskClusterCount() const { DARABONBA_PTR_GET_DEFAULT(riskClusterCount_, 0) };
      inline ContainerGroupedFields& setRiskClusterCount(int32_t riskClusterCount) { DARABONBA_PTR_SET_VALUE(riskClusterCount_, riskClusterCount) };


      // riskContainerCount Field Functions 
      bool hasRiskContainerCount() const { return this->riskContainerCount_ != nullptr;};
      void deleteRiskContainerCount() { this->riskContainerCount_ = nullptr;};
      inline int32_t getRiskContainerCount() const { DARABONBA_PTR_GET_DEFAULT(riskContainerCount_, 0) };
      inline ContainerGroupedFields& setRiskContainerCount(int32_t riskContainerCount) { DARABONBA_PTR_SET_VALUE(riskContainerCount_, riskContainerCount) };


      // riskImageCount Field Functions 
      bool hasRiskImageCount() const { return this->riskImageCount_ != nullptr;};
      void deleteRiskImageCount() { this->riskImageCount_ = nullptr;};
      inline int32_t getRiskImageCount() const { DARABONBA_PTR_GET_DEFAULT(riskImageCount_, 0) };
      inline ContainerGroupedFields& setRiskImageCount(int32_t riskImageCount) { DARABONBA_PTR_SET_VALUE(riskImageCount_, riskImageCount) };


      // riskInstanceCount Field Functions 
      bool hasRiskInstanceCount() const { return this->riskInstanceCount_ != nullptr;};
      void deleteRiskInstanceCount() { this->riskInstanceCount_ = nullptr;};
      inline int32_t getRiskInstanceCount() const { DARABONBA_PTR_GET_DEFAULT(riskInstanceCount_, 0) };
      inline ContainerGroupedFields& setRiskInstanceCount(int32_t riskInstanceCount) { DARABONBA_PTR_SET_VALUE(riskInstanceCount_, riskInstanceCount) };


      // riskPodCount Field Functions 
      bool hasRiskPodCount() const { return this->riskPodCount_ != nullptr;};
      void deleteRiskPodCount() { this->riskPodCount_ = nullptr;};
      inline int32_t getRiskPodCount() const { DARABONBA_PTR_GET_DEFAULT(riskPodCount_, 0) };
      inline ContainerGroupedFields& setRiskPodCount(int32_t riskPodCount) { DARABONBA_PTR_SET_VALUE(riskPodCount_, riskPodCount) };


    protected:
      // The number of applications.
      shared_ptr<int32_t> appCount_ {};
      // The number of clusters.
      shared_ptr<int32_t> clusterCount_ {};
      // The number of containers.
      shared_ptr<int32_t> containerCount_ {};
      // The number of images.
      shared_ptr<int32_t> imageCount_ {};
      // The number of instances.
      shared_ptr<int32_t> instanceCount_ {};
      // The number of namespaces.
      shared_ptr<int32_t> namespaceCount_ {};
      // The number of pods.
      shared_ptr<int32_t> podCount_ {};
      // The number of the applications on which risks are detected.
      shared_ptr<int32_t> riskAppCount_ {};
      // The number of the clusters on which risks are detected.
      shared_ptr<int32_t> riskClusterCount_ {};
      // The number of the containers on which risks are detected.
      shared_ptr<int32_t> riskContainerCount_ {};
      // The number of the images on which risks are detected.
      shared_ptr<int32_t> riskImageCount_ {};
      // The number of the instances on which risks are detected.
      shared_ptr<int32_t> riskInstanceCount_ {};
      // The number of the pods on which risks are detected.
      shared_ptr<int32_t> riskPodCount_ {};
    };

    virtual bool empty() const override { return this->containerGroupedFields_ == nullptr
        && this->requestId_ == nullptr; };
    // containerGroupedFields Field Functions 
    bool hasContainerGroupedFields() const { return this->containerGroupedFields_ != nullptr;};
    void deleteContainerGroupedFields() { this->containerGroupedFields_ = nullptr;};
    inline const DescribeContainerFieldStatisticsResponseBody::ContainerGroupedFields & getContainerGroupedFields() const { DARABONBA_PTR_GET_CONST(containerGroupedFields_, DescribeContainerFieldStatisticsResponseBody::ContainerGroupedFields) };
    inline DescribeContainerFieldStatisticsResponseBody::ContainerGroupedFields getContainerGroupedFields() { DARABONBA_PTR_GET(containerGroupedFields_, DescribeContainerFieldStatisticsResponseBody::ContainerGroupedFields) };
    inline DescribeContainerFieldStatisticsResponseBody& setContainerGroupedFields(const DescribeContainerFieldStatisticsResponseBody::ContainerGroupedFields & containerGroupedFields) { DARABONBA_PTR_SET_VALUE(containerGroupedFields_, containerGroupedFields) };
    inline DescribeContainerFieldStatisticsResponseBody& setContainerGroupedFields(DescribeContainerFieldStatisticsResponseBody::ContainerGroupedFields && containerGroupedFields) { DARABONBA_PTR_SET_RVALUE(containerGroupedFields_, containerGroupedFields) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeContainerFieldStatisticsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The statistical information about containers.
    shared_ptr<DescribeContainerFieldStatisticsResponseBody::ContainerGroupedFields> containerGroupedFields_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
