// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RESIZEDISKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RESIZEDISKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class ResizeDiskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ResizeDiskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DiskId, diskId_);
      DARABONBA_PTR_TO_JSON(NewSize, newSize_);
    };
    friend void from_json(const Darabonba::Json& j, ResizeDiskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DiskId, diskId_);
      DARABONBA_PTR_FROM_JSON(NewSize, newSize_);
    };
    ResizeDiskRequest() = default ;
    ResizeDiskRequest(const ResizeDiskRequest &) = default ;
    ResizeDiskRequest(ResizeDiskRequest &&) = default ;
    ResizeDiskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ResizeDiskRequest() = default ;
    ResizeDiskRequest& operator=(const ResizeDiskRequest &) = default ;
    ResizeDiskRequest& operator=(ResizeDiskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->diskId_ == nullptr
        && this->newSize_ == nullptr; };
    // diskId Field Functions 
    bool hasDiskId() const { return this->diskId_ != nullptr;};
    void deleteDiskId() { this->diskId_ = nullptr;};
    inline string getDiskId() const { DARABONBA_PTR_GET_DEFAULT(diskId_, "") };
    inline ResizeDiskRequest& setDiskId(string diskId) { DARABONBA_PTR_SET_VALUE(diskId_, diskId) };


    // newSize Field Functions 
    bool hasNewSize() const { return this->newSize_ != nullptr;};
    void deleteNewSize() { this->newSize_ = nullptr;};
    inline string getNewSize() const { DARABONBA_PTR_GET_DEFAULT(newSize_, "") };
    inline ResizeDiskRequest& setNewSize(string newSize) { DARABONBA_PTR_SET_VALUE(newSize_, newSize) };


  protected:
    // The ID of the disk that you want to resize.
    // 
    // This parameter is required.
    shared_ptr<string> diskId_ {};
    // The size of the disk that you want to resize. Unit: GiB.
    // 
    // This parameter is required.
    shared_ptr<string> newSize_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
