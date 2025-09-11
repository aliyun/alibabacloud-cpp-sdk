// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CANCELAUTOSNAPSHOTPOLICYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CANCELAUTOSNAPSHOTPOLICYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace NAS20170626
{
namespace Models
{
  class CancelAutoSnapshotPolicyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CancelAutoSnapshotPolicyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FileSystemIds, fileSystemIds_);
    };
    friend void from_json(const Darabonba::Json& j, CancelAutoSnapshotPolicyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FileSystemIds, fileSystemIds_);
    };
    CancelAutoSnapshotPolicyRequest() = default ;
    CancelAutoSnapshotPolicyRequest(const CancelAutoSnapshotPolicyRequest &) = default ;
    CancelAutoSnapshotPolicyRequest(CancelAutoSnapshotPolicyRequest &&) = default ;
    CancelAutoSnapshotPolicyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CancelAutoSnapshotPolicyRequest() = default ;
    CancelAutoSnapshotPolicyRequest& operator=(const CancelAutoSnapshotPolicyRequest &) = default ;
    CancelAutoSnapshotPolicyRequest& operator=(CancelAutoSnapshotPolicyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->fileSystemIds_ != nullptr; };
    // fileSystemIds Field Functions 
    bool hasFileSystemIds() const { return this->fileSystemIds_ != nullptr;};
    void deleteFileSystemIds() { this->fileSystemIds_ = nullptr;};
    inline string fileSystemIds() const { DARABONBA_PTR_GET_DEFAULT(fileSystemIds_, "") };
    inline CancelAutoSnapshotPolicyRequest& setFileSystemIds(string fileSystemIds) { DARABONBA_PTR_SET_VALUE(fileSystemIds_, fileSystemIds) };


  protected:
    // The IDs of file systems.
    // 
    // You can specify a maximum of 100 file system IDs. If you want to remove automatic snapshot policies from multiple file systems, separate the file system IDs with commas (,).
    // 
    // This parameter is required.
    std::shared_ptr<string> fileSystemIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
