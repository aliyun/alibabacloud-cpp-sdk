// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DETACHSHAREDSTORAGESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DETACHSHAREDSTORAGESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EHPC20240730
{
namespace Models
{
  class DetachSharedStoragesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DetachSharedStoragesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(SharedStorages, sharedStorages_);
    };
    friend void from_json(const Darabonba::Json& j, DetachSharedStoragesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(SharedStorages, sharedStorages_);
    };
    DetachSharedStoragesRequest() = default ;
    DetachSharedStoragesRequest(const DetachSharedStoragesRequest &) = default ;
    DetachSharedStoragesRequest(DetachSharedStoragesRequest &&) = default ;
    DetachSharedStoragesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DetachSharedStoragesRequest() = default ;
    DetachSharedStoragesRequest& operator=(const DetachSharedStoragesRequest &) = default ;
    DetachSharedStoragesRequest& operator=(DetachSharedStoragesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SharedStorages : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SharedStorages& obj) { 
        DARABONBA_PTR_TO_JSON(MountDirectory, mountDirectory_);
      };
      friend void from_json(const Darabonba::Json& j, SharedStorages& obj) { 
        DARABONBA_PTR_FROM_JSON(MountDirectory, mountDirectory_);
      };
      SharedStorages() = default ;
      SharedStorages(const SharedStorages &) = default ;
      SharedStorages(SharedStorages &&) = default ;
      SharedStorages(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SharedStorages() = default ;
      SharedStorages& operator=(const SharedStorages &) = default ;
      SharedStorages& operator=(SharedStorages &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->mountDirectory_ == nullptr; };
      // mountDirectory Field Functions 
      bool hasMountDirectory() const { return this->mountDirectory_ != nullptr;};
      void deleteMountDirectory() { this->mountDirectory_ = nullptr;};
      inline string getMountDirectory() const { DARABONBA_PTR_GET_DEFAULT(mountDirectory_, "") };
      inline SharedStorages& setMountDirectory(string mountDirectory) { DARABONBA_PTR_SET_VALUE(mountDirectory_, mountDirectory) };


    protected:
      // The local mount directory of the mounted file system.
      // 
      // This parameter is required.
      shared_ptr<string> mountDirectory_ {};
    };

    virtual bool empty() const override { return this->clusterId_ == nullptr
        && this->sharedStorages_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline DetachSharedStoragesRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // sharedStorages Field Functions 
    bool hasSharedStorages() const { return this->sharedStorages_ != nullptr;};
    void deleteSharedStorages() { this->sharedStorages_ = nullptr;};
    inline const vector<DetachSharedStoragesRequest::SharedStorages> & getSharedStorages() const { DARABONBA_PTR_GET_CONST(sharedStorages_, vector<DetachSharedStoragesRequest::SharedStorages>) };
    inline vector<DetachSharedStoragesRequest::SharedStorages> getSharedStorages() { DARABONBA_PTR_GET(sharedStorages_, vector<DetachSharedStoragesRequest::SharedStorages>) };
    inline DetachSharedStoragesRequest& setSharedStorages(const vector<DetachSharedStoragesRequest::SharedStorages> & sharedStorages) { DARABONBA_PTR_SET_VALUE(sharedStorages_, sharedStorages) };
    inline DetachSharedStoragesRequest& setSharedStorages(vector<DetachSharedStoragesRequest::SharedStorages> && sharedStorages) { DARABONBA_PTR_SET_RVALUE(sharedStorages_, sharedStorages) };


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
    shared_ptr<vector<DetachSharedStoragesRequest::SharedStorages>> sharedStorages_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EHPC20240730
#endif
