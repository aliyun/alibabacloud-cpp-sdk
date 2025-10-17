// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LOCALMOUNTSPEC_HPP_
#define ALIBABACLOUD_MODELS_LOCALMOUNTSPEC_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDlc20201203
{
namespace Models
{
  class LocalMountSpec : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const LocalMountSpec& obj) { 
      DARABONBA_PTR_TO_JSON(LocalPath, localPath_);
      DARABONBA_PTR_TO_JSON(MountMode, mountMode_);
      DARABONBA_PTR_TO_JSON(MountPath, mountPath_);
    };
    friend void from_json(const Darabonba::Json& j, LocalMountSpec& obj) { 
      DARABONBA_PTR_FROM_JSON(LocalPath, localPath_);
      DARABONBA_PTR_FROM_JSON(MountMode, mountMode_);
      DARABONBA_PTR_FROM_JSON(MountPath, mountPath_);
    };
    LocalMountSpec() = default ;
    LocalMountSpec(const LocalMountSpec &) = default ;
    LocalMountSpec(LocalMountSpec &&) = default ;
    LocalMountSpec(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~LocalMountSpec() = default ;
    LocalMountSpec& operator=(const LocalMountSpec &) = default ;
    LocalMountSpec& operator=(LocalMountSpec &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->localPath_ == nullptr
        && return this->mountMode_ == nullptr && return this->mountPath_ == nullptr; };
    // localPath Field Functions 
    bool hasLocalPath() const { return this->localPath_ != nullptr;};
    void deleteLocalPath() { this->localPath_ = nullptr;};
    inline string localPath() const { DARABONBA_PTR_GET_DEFAULT(localPath_, "") };
    inline LocalMountSpec& setLocalPath(string localPath) { DARABONBA_PTR_SET_VALUE(localPath_, localPath) };


    // mountMode Field Functions 
    bool hasMountMode() const { return this->mountMode_ != nullptr;};
    void deleteMountMode() { this->mountMode_ = nullptr;};
    inline string mountMode() const { DARABONBA_PTR_GET_DEFAULT(mountMode_, "") };
    inline LocalMountSpec& setMountMode(string mountMode) { DARABONBA_PTR_SET_VALUE(mountMode_, mountMode) };


    // mountPath Field Functions 
    bool hasMountPath() const { return this->mountPath_ != nullptr;};
    void deleteMountPath() { this->mountPath_ = nullptr;};
    inline string mountPath() const { DARABONBA_PTR_GET_DEFAULT(mountPath_, "") };
    inline LocalMountSpec& setMountPath(string mountPath) { DARABONBA_PTR_SET_VALUE(mountPath_, mountPath) };


  protected:
    std::shared_ptr<string> localPath_ = nullptr;
    std::shared_ptr<string> mountMode_ = nullptr;
    std::shared_ptr<string> mountPath_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDlc20201203
#endif
