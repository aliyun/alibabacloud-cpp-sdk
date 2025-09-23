// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAIDBCLUSTERATTRIBUTERESPONSEBODYDBNODESVOLUMES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAIDBCLUSTERATTRIBUTERESPONSEBODYDBNODESVOLUMES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeAIDBClusterAttributeResponseBodyDBNodesVolumes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAIDBClusterAttributeResponseBodyDBNodesVolumes& obj) { 
      DARABONBA_PTR_TO_JSON(MountPath, mountPath_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(SizeGB, sizeGB_);
      DARABONBA_PTR_TO_JSON(StorageCategory, storageCategory_);
      DARABONBA_PTR_TO_JSON(StorageType, storageType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAIDBClusterAttributeResponseBodyDBNodesVolumes& obj) { 
      DARABONBA_PTR_FROM_JSON(MountPath, mountPath_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(SizeGB, sizeGB_);
      DARABONBA_PTR_FROM_JSON(StorageCategory, storageCategory_);
      DARABONBA_PTR_FROM_JSON(StorageType, storageType_);
    };
    DescribeAIDBClusterAttributeResponseBodyDBNodesVolumes() = default ;
    DescribeAIDBClusterAttributeResponseBodyDBNodesVolumes(const DescribeAIDBClusterAttributeResponseBodyDBNodesVolumes &) = default ;
    DescribeAIDBClusterAttributeResponseBodyDBNodesVolumes(DescribeAIDBClusterAttributeResponseBodyDBNodesVolumes &&) = default ;
    DescribeAIDBClusterAttributeResponseBodyDBNodesVolumes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAIDBClusterAttributeResponseBodyDBNodesVolumes() = default ;
    DescribeAIDBClusterAttributeResponseBodyDBNodesVolumes& operator=(const DescribeAIDBClusterAttributeResponseBodyDBNodesVolumes &) = default ;
    DescribeAIDBClusterAttributeResponseBodyDBNodesVolumes& operator=(DescribeAIDBClusterAttributeResponseBodyDBNodesVolumes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->mountPath_ != nullptr
        && this->name_ != nullptr && this->sizeGB_ != nullptr && this->storageCategory_ != nullptr && this->storageType_ != nullptr; };
    // mountPath Field Functions 
    bool hasMountPath() const { return this->mountPath_ != nullptr;};
    void deleteMountPath() { this->mountPath_ = nullptr;};
    inline string mountPath() const { DARABONBA_PTR_GET_DEFAULT(mountPath_, "") };
    inline DescribeAIDBClusterAttributeResponseBodyDBNodesVolumes& setMountPath(string mountPath) { DARABONBA_PTR_SET_VALUE(mountPath_, mountPath) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeAIDBClusterAttributeResponseBodyDBNodesVolumes& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // sizeGB Field Functions 
    bool hasSizeGB() const { return this->sizeGB_ != nullptr;};
    void deleteSizeGB() { this->sizeGB_ = nullptr;};
    inline string sizeGB() const { DARABONBA_PTR_GET_DEFAULT(sizeGB_, "") };
    inline DescribeAIDBClusterAttributeResponseBodyDBNodesVolumes& setSizeGB(string sizeGB) { DARABONBA_PTR_SET_VALUE(sizeGB_, sizeGB) };


    // storageCategory Field Functions 
    bool hasStorageCategory() const { return this->storageCategory_ != nullptr;};
    void deleteStorageCategory() { this->storageCategory_ = nullptr;};
    inline string storageCategory() const { DARABONBA_PTR_GET_DEFAULT(storageCategory_, "") };
    inline DescribeAIDBClusterAttributeResponseBodyDBNodesVolumes& setStorageCategory(string storageCategory) { DARABONBA_PTR_SET_VALUE(storageCategory_, storageCategory) };


    // storageType Field Functions 
    bool hasStorageType() const { return this->storageType_ != nullptr;};
    void deleteStorageType() { this->storageType_ = nullptr;};
    inline string storageType() const { DARABONBA_PTR_GET_DEFAULT(storageType_, "") };
    inline DescribeAIDBClusterAttributeResponseBodyDBNodesVolumes& setStorageType(string storageType) { DARABONBA_PTR_SET_VALUE(storageType_, storageType) };


  protected:
    std::shared_ptr<string> mountPath_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> sizeGB_ = nullptr;
    std::shared_ptr<string> storageCategory_ = nullptr;
    std::shared_ptr<string> storageType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
