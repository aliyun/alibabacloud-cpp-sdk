// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RESIZEDISKSIZEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RESIZEDISKSIZEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace HBase20190101
{
namespace Models
{
  class ResizeDiskSizeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ResizeDiskSizeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(NodeDiskSize, nodeDiskSize_);
    };
    friend void from_json(const Darabonba::Json& j, ResizeDiskSizeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(NodeDiskSize, nodeDiskSize_);
    };
    ResizeDiskSizeRequest() = default ;
    ResizeDiskSizeRequest(const ResizeDiskSizeRequest &) = default ;
    ResizeDiskSizeRequest(ResizeDiskSizeRequest &&) = default ;
    ResizeDiskSizeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ResizeDiskSizeRequest() = default ;
    ResizeDiskSizeRequest& operator=(const ResizeDiskSizeRequest &) = default ;
    ResizeDiskSizeRequest& operator=(ResizeDiskSizeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterId_ == nullptr
        && this->nodeDiskSize_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline ResizeDiskSizeRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // nodeDiskSize Field Functions 
    bool hasNodeDiskSize() const { return this->nodeDiskSize_ != nullptr;};
    void deleteNodeDiskSize() { this->nodeDiskSize_ = nullptr;};
    inline int32_t getNodeDiskSize() const { DARABONBA_PTR_GET_DEFAULT(nodeDiskSize_, 0) };
    inline ResizeDiskSizeRequest& setNodeDiskSize(int32_t nodeDiskSize) { DARABONBA_PTR_SET_VALUE(nodeDiskSize_, nodeDiskSize) };


  protected:
    // The instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> clusterId_ {};
    // The disk size of a single node. Unit: GB.
    // 
    // This parameter is required.
    shared_ptr<int32_t> nodeDiskSize_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace HBase20190101
#endif
