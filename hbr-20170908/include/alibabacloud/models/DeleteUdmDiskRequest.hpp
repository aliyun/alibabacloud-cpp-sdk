// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEUDMDISKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEUDMDISKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hbr20170908
{
namespace Models
{
  class DeleteUdmDiskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteUdmDiskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DiskId, diskId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteUdmDiskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DiskId, diskId_);
    };
    DeleteUdmDiskRequest() = default ;
    DeleteUdmDiskRequest(const DeleteUdmDiskRequest &) = default ;
    DeleteUdmDiskRequest(DeleteUdmDiskRequest &&) = default ;
    DeleteUdmDiskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteUdmDiskRequest() = default ;
    DeleteUdmDiskRequest& operator=(const DeleteUdmDiskRequest &) = default ;
    DeleteUdmDiskRequest& operator=(DeleteUdmDiskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->diskId_ != nullptr; };
    // diskId Field Functions 
    bool hasDiskId() const { return this->diskId_ != nullptr;};
    void deleteDiskId() { this->diskId_ = nullptr;};
    inline string diskId() const { DARABONBA_PTR_GET_DEFAULT(diskId_, "") };
    inline DeleteUdmDiskRequest& setDiskId(string diskId) { DARABONBA_PTR_SET_VALUE(diskId_, diskId) };


  protected:
    // The disk ID.
    std::shared_ptr<string> diskId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hbr20170908
#endif
