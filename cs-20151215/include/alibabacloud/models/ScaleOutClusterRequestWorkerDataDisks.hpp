// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SCALEOUTCLUSTERREQUESTWORKERDATADISKS_HPP_
#define ALIBABACLOUD_MODELS_SCALEOUTCLUSTERREQUESTWORKERDATADISKS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class ScaleOutClusterRequestWorkerDataDisks : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ScaleOutClusterRequestWorkerDataDisks& obj) { 
      DARABONBA_PTR_TO_JSON(auto_snapshot_policy_id, autoSnapshotPolicyId_);
      DARABONBA_PTR_TO_JSON(category, category_);
      DARABONBA_PTR_TO_JSON(encrypted, encrypted_);
      DARABONBA_PTR_TO_JSON(size, size_);
    };
    friend void from_json(const Darabonba::Json& j, ScaleOutClusterRequestWorkerDataDisks& obj) { 
      DARABONBA_PTR_FROM_JSON(auto_snapshot_policy_id, autoSnapshotPolicyId_);
      DARABONBA_PTR_FROM_JSON(category, category_);
      DARABONBA_PTR_FROM_JSON(encrypted, encrypted_);
      DARABONBA_PTR_FROM_JSON(size, size_);
    };
    ScaleOutClusterRequestWorkerDataDisks() = default ;
    ScaleOutClusterRequestWorkerDataDisks(const ScaleOutClusterRequestWorkerDataDisks &) = default ;
    ScaleOutClusterRequestWorkerDataDisks(ScaleOutClusterRequestWorkerDataDisks &&) = default ;
    ScaleOutClusterRequestWorkerDataDisks(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ScaleOutClusterRequestWorkerDataDisks() = default ;
    ScaleOutClusterRequestWorkerDataDisks& operator=(const ScaleOutClusterRequestWorkerDataDisks &) = default ;
    ScaleOutClusterRequestWorkerDataDisks& operator=(ScaleOutClusterRequestWorkerDataDisks &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoSnapshotPolicyId_ == nullptr
        && return this->category_ == nullptr && return this->encrypted_ == nullptr && return this->size_ == nullptr; };
    // autoSnapshotPolicyId Field Functions 
    bool hasAutoSnapshotPolicyId() const { return this->autoSnapshotPolicyId_ != nullptr;};
    void deleteAutoSnapshotPolicyId() { this->autoSnapshotPolicyId_ = nullptr;};
    inline string autoSnapshotPolicyId() const { DARABONBA_PTR_GET_DEFAULT(autoSnapshotPolicyId_, "") };
    inline ScaleOutClusterRequestWorkerDataDisks& setAutoSnapshotPolicyId(string autoSnapshotPolicyId) { DARABONBA_PTR_SET_VALUE(autoSnapshotPolicyId_, autoSnapshotPolicyId) };


    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string category() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline ScaleOutClusterRequestWorkerDataDisks& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // encrypted Field Functions 
    bool hasEncrypted() const { return this->encrypted_ != nullptr;};
    void deleteEncrypted() { this->encrypted_ = nullptr;};
    inline string encrypted() const { DARABONBA_PTR_GET_DEFAULT(encrypted_, "") };
    inline ScaleOutClusterRequestWorkerDataDisks& setEncrypted(string encrypted) { DARABONBA_PTR_SET_VALUE(encrypted_, encrypted) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline string size() const { DARABONBA_PTR_GET_DEFAULT(size_, "") };
    inline ScaleOutClusterRequestWorkerDataDisks& setSize(string size) { DARABONBA_PTR_SET_VALUE(size_, size) };


  protected:
    // The ID of the automatic snapshot policy. The system performs automatic backup for a cloud disk based on the specified automatic snapshot policy.
    // 
    // By default, this parameter is left empty, which indicates that automatic backup is disabled.
    std::shared_ptr<string> autoSnapshotPolicyId_ = nullptr;
    // The type of the data disk.
    std::shared_ptr<string> category_ = nullptr;
    // Specifies whether to encrypt the data disks. Valid values:
    // 
    // *   `true`: encrypts the data disk.
    // *   `false`: does not encrypt the data disk.
    // 
    // Default value: `false`.
    std::shared_ptr<string> encrypted_ = nullptr;
    // The size of the data disk. Valid values: 40 to 32767.
    std::shared_ptr<string> size_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
