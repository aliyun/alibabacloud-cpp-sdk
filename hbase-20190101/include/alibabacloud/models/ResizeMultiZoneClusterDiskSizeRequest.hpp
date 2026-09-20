// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RESIZEMULTIZONECLUSTERDISKSIZEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RESIZEMULTIZONECLUSTERDISKSIZEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace HBase20190101
{
namespace Models
{
  class ResizeMultiZoneClusterDiskSizeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ResizeMultiZoneClusterDiskSizeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(CoreDiskSize, coreDiskSize_);
      DARABONBA_PTR_TO_JSON(LogDiskSize, logDiskSize_);
    };
    friend void from_json(const Darabonba::Json& j, ResizeMultiZoneClusterDiskSizeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(CoreDiskSize, coreDiskSize_);
      DARABONBA_PTR_FROM_JSON(LogDiskSize, logDiskSize_);
    };
    ResizeMultiZoneClusterDiskSizeRequest() = default ;
    ResizeMultiZoneClusterDiskSizeRequest(const ResizeMultiZoneClusterDiskSizeRequest &) = default ;
    ResizeMultiZoneClusterDiskSizeRequest(ResizeMultiZoneClusterDiskSizeRequest &&) = default ;
    ResizeMultiZoneClusterDiskSizeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ResizeMultiZoneClusterDiskSizeRequest() = default ;
    ResizeMultiZoneClusterDiskSizeRequest& operator=(const ResizeMultiZoneClusterDiskSizeRequest &) = default ;
    ResizeMultiZoneClusterDiskSizeRequest& operator=(ResizeMultiZoneClusterDiskSizeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterId_ == nullptr
        && this->coreDiskSize_ == nullptr && this->logDiskSize_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline ResizeMultiZoneClusterDiskSizeRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // coreDiskSize Field Functions 
    bool hasCoreDiskSize() const { return this->coreDiskSize_ != nullptr;};
    void deleteCoreDiskSize() { this->coreDiskSize_ = nullptr;};
    inline int32_t getCoreDiskSize() const { DARABONBA_PTR_GET_DEFAULT(coreDiskSize_, 0) };
    inline ResizeMultiZoneClusterDiskSizeRequest& setCoreDiskSize(int32_t coreDiskSize) { DARABONBA_PTR_SET_VALUE(coreDiskSize_, coreDiskSize) };


    // logDiskSize Field Functions 
    bool hasLogDiskSize() const { return this->logDiskSize_ != nullptr;};
    void deleteLogDiskSize() { this->logDiskSize_ = nullptr;};
    inline int32_t getLogDiskSize() const { DARABONBA_PTR_GET_DEFAULT(logDiskSize_, 0) };
    inline ResizeMultiZoneClusterDiskSizeRequest& setLogDiskSize(int32_t logDiskSize) { DARABONBA_PTR_SET_VALUE(logDiskSize_, logDiskSize) };


  protected:
    // The ID of the multi-zone instance.
    // 
    // This parameter is required.
    shared_ptr<string> clusterId_ {};
    // The disk size of core nodes. The value must be greater than the current disk size and must be a multiple of 40. Unit: GB. Maximum value: 64000.
    shared_ptr<int32_t> coreDiskSize_ {};
    // The disk size of log nodes. The value must be greater than the current disk size of log nodes and must be a multiple of 40. Unit: GB. Maximum value: 8000.
    shared_ptr<int32_t> logDiskSize_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace HBase20190101
#endif
