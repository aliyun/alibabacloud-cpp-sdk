// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ATTACHSHAREDSTORAGESSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ATTACHSHAREDSTORAGESSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EHPC20240730
{
namespace Models
{
  class AttachSharedStoragesShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AttachSharedStoragesShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(SharedStorages, sharedStoragesShrink_);
    };
    friend void from_json(const Darabonba::Json& j, AttachSharedStoragesShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(SharedStorages, sharedStoragesShrink_);
    };
    AttachSharedStoragesShrinkRequest() = default ;
    AttachSharedStoragesShrinkRequest(const AttachSharedStoragesShrinkRequest &) = default ;
    AttachSharedStoragesShrinkRequest(AttachSharedStoragesShrinkRequest &&) = default ;
    AttachSharedStoragesShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AttachSharedStoragesShrinkRequest() = default ;
    AttachSharedStoragesShrinkRequest& operator=(const AttachSharedStoragesShrinkRequest &) = default ;
    AttachSharedStoragesShrinkRequest& operator=(AttachSharedStoragesShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterId_ == nullptr
        && return this->sharedStoragesShrink_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline AttachSharedStoragesShrinkRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // sharedStoragesShrink Field Functions 
    bool hasSharedStoragesShrink() const { return this->sharedStoragesShrink_ != nullptr;};
    void deleteSharedStoragesShrink() { this->sharedStoragesShrink_ = nullptr;};
    inline string sharedStoragesShrink() const { DARABONBA_PTR_GET_DEFAULT(sharedStoragesShrink_, "") };
    inline AttachSharedStoragesShrinkRequest& setSharedStoragesShrink(string sharedStoragesShrink) { DARABONBA_PTR_SET_VALUE(sharedStoragesShrink_, sharedStoragesShrink) };


  protected:
    // The cluster ID.
    // 
    // You can call the [ListClusters](https://help.aliyun.com/document_detail/87116.html) operation to query the cluster ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The information about the shared storage resources that you want to attach to the cluster.
    // 
    // This parameter is required.
    std::shared_ptr<string> sharedStoragesShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EHPC20240730
#endif
