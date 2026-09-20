// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RESIZECOLDSTORAGESIZEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RESIZECOLDSTORAGESIZEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace HBase20190101
{
namespace Models
{
  class ResizeColdStorageSizeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ResizeColdStorageSizeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(ColdStorageSize, coldStorageSize_);
    };
    friend void from_json(const Darabonba::Json& j, ResizeColdStorageSizeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(ColdStorageSize, coldStorageSize_);
    };
    ResizeColdStorageSizeRequest() = default ;
    ResizeColdStorageSizeRequest(const ResizeColdStorageSizeRequest &) = default ;
    ResizeColdStorageSizeRequest(ResizeColdStorageSizeRequest &&) = default ;
    ResizeColdStorageSizeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ResizeColdStorageSizeRequest() = default ;
    ResizeColdStorageSizeRequest& operator=(const ResizeColdStorageSizeRequest &) = default ;
    ResizeColdStorageSizeRequest& operator=(ResizeColdStorageSizeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterId_ == nullptr
        && this->coldStorageSize_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline ResizeColdStorageSizeRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // coldStorageSize Field Functions 
    bool hasColdStorageSize() const { return this->coldStorageSize_ != nullptr;};
    void deleteColdStorageSize() { this->coldStorageSize_ = nullptr;};
    inline int32_t getColdStorageSize() const { DARABONBA_PTR_GET_DEFAULT(coldStorageSize_, 0) };
    inline ResizeColdStorageSizeRequest& setColdStorageSize(int32_t coldStorageSize) { DARABONBA_PTR_SET_VALUE(coldStorageSize_, coldStorageSize) };


  protected:
    // The ID of the HBase instance. You can call the [DescribeInstances](https://help.aliyun.com/document_detail/144595.html) operation to obtain the instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> clusterId_ {};
    // The cold storage capacity after the change. Unit: GB. Valid values: **800** to **1000000**.
    // 
    // This parameter is required.
    shared_ptr<int32_t> coldStorageSize_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace HBase20190101
#endif
