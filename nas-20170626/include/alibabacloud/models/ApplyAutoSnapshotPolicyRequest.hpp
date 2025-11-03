// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_APPLYAUTOSNAPSHOTPOLICYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_APPLYAUTOSNAPSHOTPOLICYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace NAS20170626
{
namespace Models
{
  class ApplyAutoSnapshotPolicyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ApplyAutoSnapshotPolicyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AutoSnapshotPolicyId, autoSnapshotPolicyId_);
      DARABONBA_PTR_TO_JSON(FileSystemIds, fileSystemIds_);
    };
    friend void from_json(const Darabonba::Json& j, ApplyAutoSnapshotPolicyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoSnapshotPolicyId, autoSnapshotPolicyId_);
      DARABONBA_PTR_FROM_JSON(FileSystemIds, fileSystemIds_);
    };
    ApplyAutoSnapshotPolicyRequest() = default ;
    ApplyAutoSnapshotPolicyRequest(const ApplyAutoSnapshotPolicyRequest &) = default ;
    ApplyAutoSnapshotPolicyRequest(ApplyAutoSnapshotPolicyRequest &&) = default ;
    ApplyAutoSnapshotPolicyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ApplyAutoSnapshotPolicyRequest() = default ;
    ApplyAutoSnapshotPolicyRequest& operator=(const ApplyAutoSnapshotPolicyRequest &) = default ;
    ApplyAutoSnapshotPolicyRequest& operator=(ApplyAutoSnapshotPolicyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoSnapshotPolicyId_ == nullptr
        && return this->fileSystemIds_ == nullptr; };
    // autoSnapshotPolicyId Field Functions 
    bool hasAutoSnapshotPolicyId() const { return this->autoSnapshotPolicyId_ != nullptr;};
    void deleteAutoSnapshotPolicyId() { this->autoSnapshotPolicyId_ = nullptr;};
    inline string autoSnapshotPolicyId() const { DARABONBA_PTR_GET_DEFAULT(autoSnapshotPolicyId_, "") };
    inline ApplyAutoSnapshotPolicyRequest& setAutoSnapshotPolicyId(string autoSnapshotPolicyId) { DARABONBA_PTR_SET_VALUE(autoSnapshotPolicyId_, autoSnapshotPolicyId) };


    // fileSystemIds Field Functions 
    bool hasFileSystemIds() const { return this->fileSystemIds_ != nullptr;};
    void deleteFileSystemIds() { this->fileSystemIds_ = nullptr;};
    inline string fileSystemIds() const { DARABONBA_PTR_GET_DEFAULT(fileSystemIds_, "") };
    inline ApplyAutoSnapshotPolicyRequest& setFileSystemIds(string fileSystemIds) { DARABONBA_PTR_SET_VALUE(fileSystemIds_, fileSystemIds) };


  protected:
    // The ID of the automatic snapshot policy.
    // 
    // This parameter is required.
    std::shared_ptr<string> autoSnapshotPolicyId_ = nullptr;
    // The IDs of advanced Extreme NAS file systems.
    // 
    // You can specify a maximum of 100 file system IDs at a time. If you want to apply an automatic snapshot policy to multiple file systems, separate the file system IDs with commas (,).
    // 
    // This parameter is required.
    std::shared_ptr<string> fileSystemIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
