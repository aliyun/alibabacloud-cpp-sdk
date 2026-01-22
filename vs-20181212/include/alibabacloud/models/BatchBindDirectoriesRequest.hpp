// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHBINDDIRECTORIESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BATCHBINDDIRECTORIESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class BatchBindDirectoriesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchBindDirectoriesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeviceId, deviceId_);
      DARABONBA_PTR_TO_JSON(DirectoryId, directoryId_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
    };
    friend void from_json(const Darabonba::Json& j, BatchBindDirectoriesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeviceId, deviceId_);
      DARABONBA_PTR_FROM_JSON(DirectoryId, directoryId_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
    };
    BatchBindDirectoriesRequest() = default ;
    BatchBindDirectoriesRequest(const BatchBindDirectoriesRequest &) = default ;
    BatchBindDirectoriesRequest(BatchBindDirectoriesRequest &&) = default ;
    BatchBindDirectoriesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchBindDirectoriesRequest() = default ;
    BatchBindDirectoriesRequest& operator=(const BatchBindDirectoriesRequest &) = default ;
    BatchBindDirectoriesRequest& operator=(BatchBindDirectoriesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->deviceId_ == nullptr
        && this->directoryId_ == nullptr && this->ownerId_ == nullptr; };
    // deviceId Field Functions 
    bool hasDeviceId() const { return this->deviceId_ != nullptr;};
    void deleteDeviceId() { this->deviceId_ = nullptr;};
    inline string getDeviceId() const { DARABONBA_PTR_GET_DEFAULT(deviceId_, "") };
    inline BatchBindDirectoriesRequest& setDeviceId(string deviceId) { DARABONBA_PTR_SET_VALUE(deviceId_, deviceId) };


    // directoryId Field Functions 
    bool hasDirectoryId() const { return this->directoryId_ != nullptr;};
    void deleteDirectoryId() { this->directoryId_ = nullptr;};
    inline string getDirectoryId() const { DARABONBA_PTR_GET_DEFAULT(directoryId_, "") };
    inline BatchBindDirectoriesRequest& setDirectoryId(string directoryId) { DARABONBA_PTR_SET_VALUE(directoryId_, directoryId) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline BatchBindDirectoriesRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


  protected:
    // This parameter is required.
    shared_ptr<string> deviceId_ {};
    // This parameter is required.
    shared_ptr<string> directoryId_ {};
    shared_ptr<int64_t> ownerId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
