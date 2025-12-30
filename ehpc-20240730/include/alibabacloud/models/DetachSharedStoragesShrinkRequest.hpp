// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DETACHSHAREDSTORAGESSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DETACHSHAREDSTORAGESSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EHPC20240730
{
namespace Models
{
  class DetachSharedStoragesShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DetachSharedStoragesShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(SharedStorages, sharedStoragesShrink_);
    };
    friend void from_json(const Darabonba::Json& j, DetachSharedStoragesShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(SharedStorages, sharedStoragesShrink_);
    };
    DetachSharedStoragesShrinkRequest() = default ;
    DetachSharedStoragesShrinkRequest(const DetachSharedStoragesShrinkRequest &) = default ;
    DetachSharedStoragesShrinkRequest(DetachSharedStoragesShrinkRequest &&) = default ;
    DetachSharedStoragesShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DetachSharedStoragesShrinkRequest() = default ;
    DetachSharedStoragesShrinkRequest& operator=(const DetachSharedStoragesShrinkRequest &) = default ;
    DetachSharedStoragesShrinkRequest& operator=(DetachSharedStoragesShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterId_ == nullptr
        && this->sharedStoragesShrink_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline DetachSharedStoragesShrinkRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // sharedStoragesShrink Field Functions 
    bool hasSharedStoragesShrink() const { return this->sharedStoragesShrink_ != nullptr;};
    void deleteSharedStoragesShrink() { this->sharedStoragesShrink_ = nullptr;};
    inline string getSharedStoragesShrink() const { DARABONBA_PTR_GET_DEFAULT(sharedStoragesShrink_, "") };
    inline DetachSharedStoragesShrinkRequest& setSharedStoragesShrink(string sharedStoragesShrink) { DARABONBA_PTR_SET_VALUE(sharedStoragesShrink_, sharedStoragesShrink) };


  protected:
    // The cluster ID.
    // 
    // You can call the [ListClusters](https://help.aliyun.com/document_detail/87116.html) operation to query the cluster ID.
    // 
    // This parameter is required.
    shared_ptr<string> clusterId_ {};
    // The information about mounted shared storage resources.
    // 
    // This parameter is required.
    shared_ptr<string> sharedStoragesShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EHPC20240730
#endif
