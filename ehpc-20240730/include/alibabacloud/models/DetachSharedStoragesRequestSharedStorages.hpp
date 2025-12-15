// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DETACHSHAREDSTORAGESREQUESTSHAREDSTORAGES_HPP_
#define ALIBABACLOUD_MODELS_DETACHSHAREDSTORAGESREQUESTSHAREDSTORAGES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EHPC20240730
{
namespace Models
{
  class DetachSharedStoragesRequestSharedStorages : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DetachSharedStoragesRequestSharedStorages& obj) { 
      DARABONBA_PTR_TO_JSON(MountDirectory, mountDirectory_);
    };
    friend void from_json(const Darabonba::Json& j, DetachSharedStoragesRequestSharedStorages& obj) { 
      DARABONBA_PTR_FROM_JSON(MountDirectory, mountDirectory_);
    };
    DetachSharedStoragesRequestSharedStorages() = default ;
    DetachSharedStoragesRequestSharedStorages(const DetachSharedStoragesRequestSharedStorages &) = default ;
    DetachSharedStoragesRequestSharedStorages(DetachSharedStoragesRequestSharedStorages &&) = default ;
    DetachSharedStoragesRequestSharedStorages(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DetachSharedStoragesRequestSharedStorages() = default ;
    DetachSharedStoragesRequestSharedStorages& operator=(const DetachSharedStoragesRequestSharedStorages &) = default ;
    DetachSharedStoragesRequestSharedStorages& operator=(DetachSharedStoragesRequestSharedStorages &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->mountDirectory_ == nullptr; };
    // mountDirectory Field Functions 
    bool hasMountDirectory() const { return this->mountDirectory_ != nullptr;};
    void deleteMountDirectory() { this->mountDirectory_ = nullptr;};
    inline string mountDirectory() const { DARABONBA_PTR_GET_DEFAULT(mountDirectory_, "") };
    inline DetachSharedStoragesRequestSharedStorages& setMountDirectory(string mountDirectory) { DARABONBA_PTR_SET_VALUE(mountDirectory_, mountDirectory) };


  protected:
    // The local mount directory of the mounted file system.
    // 
    // This parameter is required.
    std::shared_ptr<string> mountDirectory_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EHPC20240730
#endif
