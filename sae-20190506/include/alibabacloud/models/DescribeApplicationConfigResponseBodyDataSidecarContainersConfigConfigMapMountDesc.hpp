// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPPLICATIONCONFIGRESPONSEBODYDATASIDECARCONTAINERSCONFIGCONFIGMAPMOUNTDESC_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPPLICATIONCONFIGRESPONSEBODYDATASIDECARCONTAINERSCONFIGCONFIGMAPMOUNTDESC_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class DescribeApplicationConfigResponseBodyDataSidecarContainersConfigConfigMapMountDesc : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApplicationConfigResponseBodyDataSidecarContainersConfigConfigMapMountDesc& obj) { 
      DARABONBA_PTR_TO_JSON(ConfigMapId, configMapId_);
      DARABONBA_PTR_TO_JSON(ConfigMapName, configMapName_);
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(MountPath, mountPath_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApplicationConfigResponseBodyDataSidecarContainersConfigConfigMapMountDesc& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfigMapId, configMapId_);
      DARABONBA_PTR_FROM_JSON(ConfigMapName, configMapName_);
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(MountPath, mountPath_);
    };
    DescribeApplicationConfigResponseBodyDataSidecarContainersConfigConfigMapMountDesc() = default ;
    DescribeApplicationConfigResponseBodyDataSidecarContainersConfigConfigMapMountDesc(const DescribeApplicationConfigResponseBodyDataSidecarContainersConfigConfigMapMountDesc &) = default ;
    DescribeApplicationConfigResponseBodyDataSidecarContainersConfigConfigMapMountDesc(DescribeApplicationConfigResponseBodyDataSidecarContainersConfigConfigMapMountDesc &&) = default ;
    DescribeApplicationConfigResponseBodyDataSidecarContainersConfigConfigMapMountDesc(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApplicationConfigResponseBodyDataSidecarContainersConfigConfigMapMountDesc() = default ;
    DescribeApplicationConfigResponseBodyDataSidecarContainersConfigConfigMapMountDesc& operator=(const DescribeApplicationConfigResponseBodyDataSidecarContainersConfigConfigMapMountDesc &) = default ;
    DescribeApplicationConfigResponseBodyDataSidecarContainersConfigConfigMapMountDesc& operator=(DescribeApplicationConfigResponseBodyDataSidecarContainersConfigConfigMapMountDesc &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->configMapId_ == nullptr
        && return this->configMapName_ == nullptr && return this->key_ == nullptr && return this->mountPath_ == nullptr; };
    // configMapId Field Functions 
    bool hasConfigMapId() const { return this->configMapId_ != nullptr;};
    void deleteConfigMapId() { this->configMapId_ = nullptr;};
    inline int64_t configMapId() const { DARABONBA_PTR_GET_DEFAULT(configMapId_, 0L) };
    inline DescribeApplicationConfigResponseBodyDataSidecarContainersConfigConfigMapMountDesc& setConfigMapId(int64_t configMapId) { DARABONBA_PTR_SET_VALUE(configMapId_, configMapId) };


    // configMapName Field Functions 
    bool hasConfigMapName() const { return this->configMapName_ != nullptr;};
    void deleteConfigMapName() { this->configMapName_ = nullptr;};
    inline string configMapName() const { DARABONBA_PTR_GET_DEFAULT(configMapName_, "") };
    inline DescribeApplicationConfigResponseBodyDataSidecarContainersConfigConfigMapMountDesc& setConfigMapName(string configMapName) { DARABONBA_PTR_SET_VALUE(configMapName_, configMapName) };


    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string key() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline DescribeApplicationConfigResponseBodyDataSidecarContainersConfigConfigMapMountDesc& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // mountPath Field Functions 
    bool hasMountPath() const { return this->mountPath_ != nullptr;};
    void deleteMountPath() { this->mountPath_ = nullptr;};
    inline string mountPath() const { DARABONBA_PTR_GET_DEFAULT(mountPath_, "") };
    inline DescribeApplicationConfigResponseBodyDataSidecarContainersConfigConfigMapMountDesc& setMountPath(string mountPath) { DARABONBA_PTR_SET_VALUE(mountPath_, mountPath) };


  protected:
    // The ConfigMap ID.
    std::shared_ptr<int64_t> configMapId_ = nullptr;
    // The ConfigMap name.
    std::shared_ptr<string> configMapName_ = nullptr;
    // The ConfigMap key
    std::shared_ptr<string> key_ = nullptr;
    // The mount path.
    std::shared_ptr<string> mountPath_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
