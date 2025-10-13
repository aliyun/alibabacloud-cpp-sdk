// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPPLICATIONCONFIGRESPONSEBODYDATACONFIGMAPMOUNTDESC_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPPLICATIONCONFIGRESPONSEBODYDATACONFIGMAPMOUNTDESC_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class DescribeApplicationConfigResponseBodyDataConfigMapMountDesc : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApplicationConfigResponseBodyDataConfigMapMountDesc& obj) { 
      DARABONBA_PTR_TO_JSON(ConfigMapId, configMapId_);
      DARABONBA_PTR_TO_JSON(ConfigMapName, configMapName_);
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(MountPath, mountPath_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApplicationConfigResponseBodyDataConfigMapMountDesc& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfigMapId, configMapId_);
      DARABONBA_PTR_FROM_JSON(ConfigMapName, configMapName_);
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(MountPath, mountPath_);
    };
    DescribeApplicationConfigResponseBodyDataConfigMapMountDesc() = default ;
    DescribeApplicationConfigResponseBodyDataConfigMapMountDesc(const DescribeApplicationConfigResponseBodyDataConfigMapMountDesc &) = default ;
    DescribeApplicationConfigResponseBodyDataConfigMapMountDesc(DescribeApplicationConfigResponseBodyDataConfigMapMountDesc &&) = default ;
    DescribeApplicationConfigResponseBodyDataConfigMapMountDesc(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApplicationConfigResponseBodyDataConfigMapMountDesc() = default ;
    DescribeApplicationConfigResponseBodyDataConfigMapMountDesc& operator=(const DescribeApplicationConfigResponseBodyDataConfigMapMountDesc &) = default ;
    DescribeApplicationConfigResponseBodyDataConfigMapMountDesc& operator=(DescribeApplicationConfigResponseBodyDataConfigMapMountDesc &&) = default ;
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
    inline DescribeApplicationConfigResponseBodyDataConfigMapMountDesc& setConfigMapId(int64_t configMapId) { DARABONBA_PTR_SET_VALUE(configMapId_, configMapId) };


    // configMapName Field Functions 
    bool hasConfigMapName() const { return this->configMapName_ != nullptr;};
    void deleteConfigMapName() { this->configMapName_ = nullptr;};
    inline string configMapName() const { DARABONBA_PTR_GET_DEFAULT(configMapName_, "") };
    inline DescribeApplicationConfigResponseBodyDataConfigMapMountDesc& setConfigMapName(string configMapName) { DARABONBA_PTR_SET_VALUE(configMapName_, configMapName) };


    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string key() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline DescribeApplicationConfigResponseBodyDataConfigMapMountDesc& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // mountPath Field Functions 
    bool hasMountPath() const { return this->mountPath_ != nullptr;};
    void deleteMountPath() { this->mountPath_ = nullptr;};
    inline string mountPath() const { DARABONBA_PTR_GET_DEFAULT(mountPath_, "") };
    inline DescribeApplicationConfigResponseBodyDataConfigMapMountDesc& setMountPath(string mountPath) { DARABONBA_PTR_SET_VALUE(mountPath_, mountPath) };


  protected:
    // The ID of the ConfigMap.
    std::shared_ptr<int64_t> configMapId_ = nullptr;
    // The name of the ConfigMap.
    std::shared_ptr<string> configMapName_ = nullptr;
    // The key-value pair that is stored in the ConfigMap.
    std::shared_ptr<string> key_ = nullptr;
    // The path on which the ConfigMap is mounted.
    std::shared_ptr<string> mountPath_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
