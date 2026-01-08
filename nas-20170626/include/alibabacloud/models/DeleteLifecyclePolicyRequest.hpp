// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETELIFECYCLEPOLICYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETELIFECYCLEPOLICYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace NAS20170626
{
namespace Models
{
  class DeleteLifecyclePolicyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteLifecyclePolicyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FileSystemId, fileSystemId_);
      DARABONBA_PTR_TO_JSON(LifecyclePolicyId, lifecyclePolicyId_);
      DARABONBA_PTR_TO_JSON(LifecyclePolicyName, lifecyclePolicyName_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteLifecyclePolicyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FileSystemId, fileSystemId_);
      DARABONBA_PTR_FROM_JSON(LifecyclePolicyId, lifecyclePolicyId_);
      DARABONBA_PTR_FROM_JSON(LifecyclePolicyName, lifecyclePolicyName_);
    };
    DeleteLifecyclePolicyRequest() = default ;
    DeleteLifecyclePolicyRequest(const DeleteLifecyclePolicyRequest &) = default ;
    DeleteLifecyclePolicyRequest(DeleteLifecyclePolicyRequest &&) = default ;
    DeleteLifecyclePolicyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteLifecyclePolicyRequest() = default ;
    DeleteLifecyclePolicyRequest& operator=(const DeleteLifecyclePolicyRequest &) = default ;
    DeleteLifecyclePolicyRequest& operator=(DeleteLifecyclePolicyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fileSystemId_ == nullptr
        && this->lifecyclePolicyId_ == nullptr && this->lifecyclePolicyName_ == nullptr; };
    // fileSystemId Field Functions 
    bool hasFileSystemId() const { return this->fileSystemId_ != nullptr;};
    void deleteFileSystemId() { this->fileSystemId_ = nullptr;};
    inline string getFileSystemId() const { DARABONBA_PTR_GET_DEFAULT(fileSystemId_, "") };
    inline DeleteLifecyclePolicyRequest& setFileSystemId(string fileSystemId) { DARABONBA_PTR_SET_VALUE(fileSystemId_, fileSystemId) };


    // lifecyclePolicyId Field Functions 
    bool hasLifecyclePolicyId() const { return this->lifecyclePolicyId_ != nullptr;};
    void deleteLifecyclePolicyId() { this->lifecyclePolicyId_ = nullptr;};
    inline string getLifecyclePolicyId() const { DARABONBA_PTR_GET_DEFAULT(lifecyclePolicyId_, "") };
    inline DeleteLifecyclePolicyRequest& setLifecyclePolicyId(string lifecyclePolicyId) { DARABONBA_PTR_SET_VALUE(lifecyclePolicyId_, lifecyclePolicyId) };


    // lifecyclePolicyName Field Functions 
    bool hasLifecyclePolicyName() const { return this->lifecyclePolicyName_ != nullptr;};
    void deleteLifecyclePolicyName() { this->lifecyclePolicyName_ = nullptr;};
    inline string getLifecyclePolicyName() const { DARABONBA_PTR_GET_DEFAULT(lifecyclePolicyName_, "") };
    inline DeleteLifecyclePolicyRequest& setLifecyclePolicyName(string lifecyclePolicyName) { DARABONBA_PTR_SET_VALUE(lifecyclePolicyName_, lifecyclePolicyName) };


  protected:
    // The ID of the file system.
    // 
    // This parameter is required.
    shared_ptr<string> fileSystemId_ {};
    shared_ptr<string> lifecyclePolicyId_ {};
    // The name of the lifecycle policy.
    shared_ptr<string> lifecyclePolicyName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
