// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_NODETEMPLATEDATADISKS_HPP_
#define ALIBABACLOUD_MODELS_NODETEMPLATEDATADISKS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EHPC20240730
{
namespace Models
{
  class NodeTemplateDataDisks : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const NodeTemplateDataDisks& obj) { 
      DARABONBA_PTR_TO_JSON(Category, category_);
      DARABONBA_PTR_TO_JSON(DeleteWithInstance, deleteWithInstance_);
      DARABONBA_PTR_TO_JSON(Device, device_);
      DARABONBA_PTR_TO_JSON(Level, level_);
      DARABONBA_PTR_TO_JSON(MountDir, mountDir_);
      DARABONBA_PTR_TO_JSON(Size, size_);
      DARABONBA_PTR_TO_JSON(SnapshotId, snapshotId_);
    };
    friend void from_json(const Darabonba::Json& j, NodeTemplateDataDisks& obj) { 
      DARABONBA_PTR_FROM_JSON(Category, category_);
      DARABONBA_PTR_FROM_JSON(DeleteWithInstance, deleteWithInstance_);
      DARABONBA_PTR_FROM_JSON(Device, device_);
      DARABONBA_PTR_FROM_JSON(Level, level_);
      DARABONBA_PTR_FROM_JSON(MountDir, mountDir_);
      DARABONBA_PTR_FROM_JSON(Size, size_);
      DARABONBA_PTR_FROM_JSON(SnapshotId, snapshotId_);
    };
    NodeTemplateDataDisks() = default ;
    NodeTemplateDataDisks(const NodeTemplateDataDisks &) = default ;
    NodeTemplateDataDisks(NodeTemplateDataDisks &&) = default ;
    NodeTemplateDataDisks(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~NodeTemplateDataDisks() = default ;
    NodeTemplateDataDisks& operator=(const NodeTemplateDataDisks &) = default ;
    NodeTemplateDataDisks& operator=(NodeTemplateDataDisks &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->category_ == nullptr
        && return this->deleteWithInstance_ == nullptr && return this->device_ == nullptr && return this->level_ == nullptr && return this->mountDir_ == nullptr && return this->size_ == nullptr
        && return this->snapshotId_ == nullptr; };
    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string category() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline NodeTemplateDataDisks& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // deleteWithInstance Field Functions 
    bool hasDeleteWithInstance() const { return this->deleteWithInstance_ != nullptr;};
    void deleteDeleteWithInstance() { this->deleteWithInstance_ = nullptr;};
    inline bool deleteWithInstance() const { DARABONBA_PTR_GET_DEFAULT(deleteWithInstance_, false) };
    inline NodeTemplateDataDisks& setDeleteWithInstance(bool deleteWithInstance) { DARABONBA_PTR_SET_VALUE(deleteWithInstance_, deleteWithInstance) };


    // device Field Functions 
    bool hasDevice() const { return this->device_ != nullptr;};
    void deleteDevice() { this->device_ = nullptr;};
    inline string device() const { DARABONBA_PTR_GET_DEFAULT(device_, "") };
    inline NodeTemplateDataDisks& setDevice(string device) { DARABONBA_PTR_SET_VALUE(device_, device) };


    // level Field Functions 
    bool hasLevel() const { return this->level_ != nullptr;};
    void deleteLevel() { this->level_ = nullptr;};
    inline string level() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
    inline NodeTemplateDataDisks& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


    // mountDir Field Functions 
    bool hasMountDir() const { return this->mountDir_ != nullptr;};
    void deleteMountDir() { this->mountDir_ = nullptr;};
    inline string mountDir() const { DARABONBA_PTR_GET_DEFAULT(mountDir_, "") };
    inline NodeTemplateDataDisks& setMountDir(string mountDir) { DARABONBA_PTR_SET_VALUE(mountDir_, mountDir) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int32_t size() const { DARABONBA_PTR_GET_DEFAULT(size_, 0) };
    inline NodeTemplateDataDisks& setSize(int32_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


    // snapshotId Field Functions 
    bool hasSnapshotId() const { return this->snapshotId_ != nullptr;};
    void deleteSnapshotId() { this->snapshotId_ = nullptr;};
    inline string snapshotId() const { DARABONBA_PTR_GET_DEFAULT(snapshotId_, "") };
    inline NodeTemplateDataDisks& setSnapshotId(string snapshotId) { DARABONBA_PTR_SET_VALUE(snapshotId_, snapshotId) };


  protected:
    std::shared_ptr<string> category_ = nullptr;
    std::shared_ptr<bool> deleteWithInstance_ = nullptr;
    std::shared_ptr<string> device_ = nullptr;
    std::shared_ptr<string> level_ = nullptr;
    std::shared_ptr<string> mountDir_ = nullptr;
    std::shared_ptr<int32_t> size_ = nullptr;
    std::shared_ptr<string> snapshotId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EHPC20240730
#endif
