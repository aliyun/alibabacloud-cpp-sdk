// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPPLICATIONINSTANCESRESPONSEBODYDATAINSTANCESSIDECARCONTAINERSSTATUS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPPLICATIONINSTANCESRESPONSEBODYDATAINSTANCESSIDECARCONTAINERSSTATUS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class DescribeApplicationInstancesResponseBodyDataInstancesSidecarContainersStatus : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApplicationInstancesResponseBodyDataInstancesSidecarContainersStatus& obj) { 
      DARABONBA_PTR_TO_JSON(ContainerId, containerId_);
      DARABONBA_PTR_TO_JSON(ContainerStatus, containerStatus_);
      DARABONBA_PTR_TO_JSON(ImageUrl, imageUrl_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApplicationInstancesResponseBodyDataInstancesSidecarContainersStatus& obj) { 
      DARABONBA_PTR_FROM_JSON(ContainerId, containerId_);
      DARABONBA_PTR_FROM_JSON(ContainerStatus, containerStatus_);
      DARABONBA_PTR_FROM_JSON(ImageUrl, imageUrl_);
    };
    DescribeApplicationInstancesResponseBodyDataInstancesSidecarContainersStatus() = default ;
    DescribeApplicationInstancesResponseBodyDataInstancesSidecarContainersStatus(const DescribeApplicationInstancesResponseBodyDataInstancesSidecarContainersStatus &) = default ;
    DescribeApplicationInstancesResponseBodyDataInstancesSidecarContainersStatus(DescribeApplicationInstancesResponseBodyDataInstancesSidecarContainersStatus &&) = default ;
    DescribeApplicationInstancesResponseBodyDataInstancesSidecarContainersStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApplicationInstancesResponseBodyDataInstancesSidecarContainersStatus() = default ;
    DescribeApplicationInstancesResponseBodyDataInstancesSidecarContainersStatus& operator=(const DescribeApplicationInstancesResponseBodyDataInstancesSidecarContainersStatus &) = default ;
    DescribeApplicationInstancesResponseBodyDataInstancesSidecarContainersStatus& operator=(DescribeApplicationInstancesResponseBodyDataInstancesSidecarContainersStatus &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->containerId_ == nullptr
        && return this->containerStatus_ == nullptr && return this->imageUrl_ == nullptr; };
    // containerId Field Functions 
    bool hasContainerId() const { return this->containerId_ != nullptr;};
    void deleteContainerId() { this->containerId_ = nullptr;};
    inline string containerId() const { DARABONBA_PTR_GET_DEFAULT(containerId_, "") };
    inline DescribeApplicationInstancesResponseBodyDataInstancesSidecarContainersStatus& setContainerId(string containerId) { DARABONBA_PTR_SET_VALUE(containerId_, containerId) };


    // containerStatus Field Functions 
    bool hasContainerStatus() const { return this->containerStatus_ != nullptr;};
    void deleteContainerStatus() { this->containerStatus_ = nullptr;};
    inline string containerStatus() const { DARABONBA_PTR_GET_DEFAULT(containerStatus_, "") };
    inline DescribeApplicationInstancesResponseBodyDataInstancesSidecarContainersStatus& setContainerStatus(string containerStatus) { DARABONBA_PTR_SET_VALUE(containerStatus_, containerStatus) };


    // imageUrl Field Functions 
    bool hasImageUrl() const { return this->imageUrl_ != nullptr;};
    void deleteImageUrl() { this->imageUrl_ = nullptr;};
    inline string imageUrl() const { DARABONBA_PTR_GET_DEFAULT(imageUrl_, "") };
    inline DescribeApplicationInstancesResponseBodyDataInstancesSidecarContainersStatus& setImageUrl(string imageUrl) { DARABONBA_PTR_SET_VALUE(imageUrl_, imageUrl) };


  protected:
    // The ID of the sidecar container.
    std::shared_ptr<string> containerId_ = nullptr;
    // The status of the container.
    std::shared_ptr<string> containerStatus_ = nullptr;
    // The URL of the image.
    std::shared_ptr<string> imageUrl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
