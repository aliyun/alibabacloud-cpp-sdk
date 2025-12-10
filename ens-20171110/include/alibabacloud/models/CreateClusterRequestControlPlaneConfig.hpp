// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECLUSTERREQUESTCONTROLPLANECONFIG_HPP_
#define ALIBABACLOUD_MODELS_CREATECLUSTERREQUESTCONTROLPLANECONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class CreateClusterRequestControlPlaneConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateClusterRequestControlPlaneConfig& obj) { 
      DARABONBA_PTR_TO_JSON(ImageId, imageId_);
      DARABONBA_PTR_TO_JSON(InstanceSpec, instanceSpec_);
      DARABONBA_PTR_TO_JSON(LoginPassword, loginPassword_);
      DARABONBA_PTR_TO_JSON(NodePortRange, nodePortRange_);
      DARABONBA_PTR_TO_JSON(Runtime, runtime_);
      DARABONBA_PTR_TO_JSON(Size, size_);
      DARABONBA_PTR_TO_JSON(SystemDiskCategory, systemDiskCategory_);
      DARABONBA_PTR_TO_JSON(SystemDiskSize, systemDiskSize_);
    };
    friend void from_json(const Darabonba::Json& j, CreateClusterRequestControlPlaneConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
      DARABONBA_PTR_FROM_JSON(InstanceSpec, instanceSpec_);
      DARABONBA_PTR_FROM_JSON(LoginPassword, loginPassword_);
      DARABONBA_PTR_FROM_JSON(NodePortRange, nodePortRange_);
      DARABONBA_PTR_FROM_JSON(Runtime, runtime_);
      DARABONBA_PTR_FROM_JSON(Size, size_);
      DARABONBA_PTR_FROM_JSON(SystemDiskCategory, systemDiskCategory_);
      DARABONBA_PTR_FROM_JSON(SystemDiskSize, systemDiskSize_);
    };
    CreateClusterRequestControlPlaneConfig() = default ;
    CreateClusterRequestControlPlaneConfig(const CreateClusterRequestControlPlaneConfig &) = default ;
    CreateClusterRequestControlPlaneConfig(CreateClusterRequestControlPlaneConfig &&) = default ;
    CreateClusterRequestControlPlaneConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateClusterRequestControlPlaneConfig() = default ;
    CreateClusterRequestControlPlaneConfig& operator=(const CreateClusterRequestControlPlaneConfig &) = default ;
    CreateClusterRequestControlPlaneConfig& operator=(CreateClusterRequestControlPlaneConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->imageId_ == nullptr
        && return this->instanceSpec_ == nullptr && return this->loginPassword_ == nullptr && return this->nodePortRange_ == nullptr && return this->runtime_ == nullptr && return this->size_ == nullptr
        && return this->systemDiskCategory_ == nullptr && return this->systemDiskSize_ == nullptr; };
    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string imageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline CreateClusterRequestControlPlaneConfig& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // instanceSpec Field Functions 
    bool hasInstanceSpec() const { return this->instanceSpec_ != nullptr;};
    void deleteInstanceSpec() { this->instanceSpec_ = nullptr;};
    inline string instanceSpec() const { DARABONBA_PTR_GET_DEFAULT(instanceSpec_, "") };
    inline CreateClusterRequestControlPlaneConfig& setInstanceSpec(string instanceSpec) { DARABONBA_PTR_SET_VALUE(instanceSpec_, instanceSpec) };


    // loginPassword Field Functions 
    bool hasLoginPassword() const { return this->loginPassword_ != nullptr;};
    void deleteLoginPassword() { this->loginPassword_ = nullptr;};
    inline string loginPassword() const { DARABONBA_PTR_GET_DEFAULT(loginPassword_, "") };
    inline CreateClusterRequestControlPlaneConfig& setLoginPassword(string loginPassword) { DARABONBA_PTR_SET_VALUE(loginPassword_, loginPassword) };


    // nodePortRange Field Functions 
    bool hasNodePortRange() const { return this->nodePortRange_ != nullptr;};
    void deleteNodePortRange() { this->nodePortRange_ = nullptr;};
    inline string nodePortRange() const { DARABONBA_PTR_GET_DEFAULT(nodePortRange_, "") };
    inline CreateClusterRequestControlPlaneConfig& setNodePortRange(string nodePortRange) { DARABONBA_PTR_SET_VALUE(nodePortRange_, nodePortRange) };


    // runtime Field Functions 
    bool hasRuntime() const { return this->runtime_ != nullptr;};
    void deleteRuntime() { this->runtime_ = nullptr;};
    inline string runtime() const { DARABONBA_PTR_GET_DEFAULT(runtime_, "") };
    inline CreateClusterRequestControlPlaneConfig& setRuntime(string runtime) { DARABONBA_PTR_SET_VALUE(runtime_, runtime) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int32_t size() const { DARABONBA_PTR_GET_DEFAULT(size_, 0) };
    inline CreateClusterRequestControlPlaneConfig& setSize(int32_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


    // systemDiskCategory Field Functions 
    bool hasSystemDiskCategory() const { return this->systemDiskCategory_ != nullptr;};
    void deleteSystemDiskCategory() { this->systemDiskCategory_ = nullptr;};
    inline string systemDiskCategory() const { DARABONBA_PTR_GET_DEFAULT(systemDiskCategory_, "") };
    inline CreateClusterRequestControlPlaneConfig& setSystemDiskCategory(string systemDiskCategory) { DARABONBA_PTR_SET_VALUE(systemDiskCategory_, systemDiskCategory) };


    // systemDiskSize Field Functions 
    bool hasSystemDiskSize() const { return this->systemDiskSize_ != nullptr;};
    void deleteSystemDiskSize() { this->systemDiskSize_ = nullptr;};
    inline int64_t systemDiskSize() const { DARABONBA_PTR_GET_DEFAULT(systemDiskSize_, 0L) };
    inline CreateClusterRequestControlPlaneConfig& setSystemDiskSize(int64_t systemDiskSize) { DARABONBA_PTR_SET_VALUE(systemDiskSize_, systemDiskSize) };


  protected:
    std::shared_ptr<string> imageId_ = nullptr;
    std::shared_ptr<string> instanceSpec_ = nullptr;
    std::shared_ptr<string> loginPassword_ = nullptr;
    std::shared_ptr<string> nodePortRange_ = nullptr;
    std::shared_ptr<string> runtime_ = nullptr;
    std::shared_ptr<int32_t> size_ = nullptr;
    std::shared_ptr<string> systemDiskCategory_ = nullptr;
    std::shared_ptr<int64_t> systemDiskSize_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
