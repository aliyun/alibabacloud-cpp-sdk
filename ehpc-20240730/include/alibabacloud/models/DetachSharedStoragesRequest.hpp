// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DETACHSHAREDSTORAGESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DETACHSHAREDSTORAGESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DetachSharedStoragesRequestSharedStorages.hpp>
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
    virtual bool empty() const override { return this->clusterId_ == nullptr
        && return this->sharedStorages_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline DetachSharedStoragesRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // sharedStorages Field Functions 
    bool hasSharedStorages() const { return this->sharedStorages_ != nullptr;};
    void deleteSharedStorages() { this->sharedStorages_ = nullptr;};
    inline const vector<DetachSharedStoragesRequestSharedStorages> & sharedStorages() const { DARABONBA_PTR_GET_CONST(sharedStorages_, vector<DetachSharedStoragesRequestSharedStorages>) };
    inline vector<DetachSharedStoragesRequestSharedStorages> sharedStorages() { DARABONBA_PTR_GET(sharedStorages_, vector<DetachSharedStoragesRequestSharedStorages>) };
    inline DetachSharedStoragesRequest& setSharedStorages(const vector<DetachSharedStoragesRequestSharedStorages> & sharedStorages) { DARABONBA_PTR_SET_VALUE(sharedStorages_, sharedStorages) };
    inline DetachSharedStoragesRequest& setSharedStorages(vector<DetachSharedStoragesRequestSharedStorages> && sharedStorages) { DARABONBA_PTR_SET_RVALUE(sharedStorages_, sharedStorages) };


  protected:
    // The cluster ID.
    // 
    // You can call the [ListClusters](https://help.aliyun.com/document_detail/87116.html) operation to query the cluster ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The information about mounted shared storage resources.
    // 
    // This parameter is required.
    std::shared_ptr<vector<DetachSharedStoragesRequestSharedStorages>> sharedStorages_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EHPC20240730
#endif
