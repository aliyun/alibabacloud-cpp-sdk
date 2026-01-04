// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETESTORAGEVOLUMEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETESTORAGEVOLUMEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DeleteStorageVolumeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteStorageVolumeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(VolumeId, volumeId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteStorageVolumeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(VolumeId, volumeId_);
    };
    DeleteStorageVolumeRequest() = default ;
    DeleteStorageVolumeRequest(const DeleteStorageVolumeRequest &) = default ;
    DeleteStorageVolumeRequest(DeleteStorageVolumeRequest &&) = default ;
    DeleteStorageVolumeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteStorageVolumeRequest() = default ;
    DeleteStorageVolumeRequest& operator=(const DeleteStorageVolumeRequest &) = default ;
    DeleteStorageVolumeRequest& operator=(DeleteStorageVolumeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->volumeId_ == nullptr; };
    // volumeId Field Functions 
    bool hasVolumeId() const { return this->volumeId_ != nullptr;};
    void deleteVolumeId() { this->volumeId_ = nullptr;};
    inline string getVolumeId() const { DARABONBA_PTR_GET_DEFAULT(volumeId_, "") };
    inline DeleteStorageVolumeRequest& setVolumeId(string volumeId) { DARABONBA_PTR_SET_VALUE(volumeId_, volumeId) };


  protected:
    // The ID of the volume.
    // 
    // This parameter is required.
    shared_ptr<string> volumeId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
