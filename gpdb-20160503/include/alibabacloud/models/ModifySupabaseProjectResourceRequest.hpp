// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYSUPABASEPROJECTRESOURCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYSUPABASEPROJECTRESOURCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class ModifySupabaseProjectResourceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifySupabaseProjectResourceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ModifyType, modifyType_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(ProjectSpec, projectSpec_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(StorageSize, storageSize_);
    };
    friend void from_json(const Darabonba::Json& j, ModifySupabaseProjectResourceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ModifyType, modifyType_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(ProjectSpec, projectSpec_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(StorageSize, storageSize_);
    };
    ModifySupabaseProjectResourceRequest() = default ;
    ModifySupabaseProjectResourceRequest(const ModifySupabaseProjectResourceRequest &) = default ;
    ModifySupabaseProjectResourceRequest(ModifySupabaseProjectResourceRequest &&) = default ;
    ModifySupabaseProjectResourceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifySupabaseProjectResourceRequest() = default ;
    ModifySupabaseProjectResourceRequest& operator=(const ModifySupabaseProjectResourceRequest &) = default ;
    ModifySupabaseProjectResourceRequest& operator=(ModifySupabaseProjectResourceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->modifyType_ == nullptr
        && this->projectId_ == nullptr && this->projectSpec_ == nullptr && this->regionId_ == nullptr && this->storageSize_ == nullptr; };
    // modifyType Field Functions 
    bool hasModifyType() const { return this->modifyType_ != nullptr;};
    void deleteModifyType() { this->modifyType_ = nullptr;};
    inline string getModifyType() const { DARABONBA_PTR_GET_DEFAULT(modifyType_, "") };
    inline ModifySupabaseProjectResourceRequest& setModifyType(string modifyType) { DARABONBA_PTR_SET_VALUE(modifyType_, modifyType) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline string getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, "") };
    inline ModifySupabaseProjectResourceRequest& setProjectId(string projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // projectSpec Field Functions 
    bool hasProjectSpec() const { return this->projectSpec_ != nullptr;};
    void deleteProjectSpec() { this->projectSpec_ = nullptr;};
    inline string getProjectSpec() const { DARABONBA_PTR_GET_DEFAULT(projectSpec_, "") };
    inline ModifySupabaseProjectResourceRequest& setProjectSpec(string projectSpec) { DARABONBA_PTR_SET_VALUE(projectSpec_, projectSpec) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifySupabaseProjectResourceRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // storageSize Field Functions 
    bool hasStorageSize() const { return this->storageSize_ != nullptr;};
    void deleteStorageSize() { this->storageSize_ = nullptr;};
    inline int64_t getStorageSize() const { DARABONBA_PTR_GET_DEFAULT(storageSize_, 0L) };
    inline ModifySupabaseProjectResourceRequest& setStorageSize(int64_t storageSize) { DARABONBA_PTR_SET_VALUE(storageSize_, storageSize) };


  protected:
    // This parameter is required.
    shared_ptr<string> modifyType_ {};
    // This parameter is required.
    shared_ptr<string> projectId_ {};
    shared_ptr<string> projectSpec_ {};
    shared_ptr<string> regionId_ {};
    shared_ptr<int64_t> storageSize_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
