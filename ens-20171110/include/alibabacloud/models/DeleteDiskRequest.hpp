// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEDISKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEDISKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DeleteDiskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteDiskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DiskId, diskId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteDiskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DiskId, diskId_);
    };
    DeleteDiskRequest() = default ;
    DeleteDiskRequest(const DeleteDiskRequest &) = default ;
    DeleteDiskRequest(DeleteDiskRequest &&) = default ;
    DeleteDiskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteDiskRequest() = default ;
    DeleteDiskRequest& operator=(const DeleteDiskRequest &) = default ;
    DeleteDiskRequest& operator=(DeleteDiskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->diskId_ == nullptr; };
    // diskId Field Functions 
    bool hasDiskId() const { return this->diskId_ != nullptr;};
    void deleteDiskId() { this->diskId_ = nullptr;};
    inline string diskId() const { DARABONBA_PTR_GET_DEFAULT(diskId_, "") };
    inline DeleteDiskRequest& setDiskId(string diskId) { DARABONBA_PTR_SET_VALUE(diskId_, diskId) };


  protected:
    // The ID of the disk.
    // 
    // This parameter is required.
    std::shared_ptr<string> diskId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
