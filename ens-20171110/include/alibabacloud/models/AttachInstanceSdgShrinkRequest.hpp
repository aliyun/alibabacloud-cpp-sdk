// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ATTACHINSTANCESDGSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ATTACHINSTANCESDGSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class AttachInstanceSDGShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AttachInstanceSDGShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DiskAccessProtocol, diskAccessProtocol_);
      DARABONBA_PTR_TO_JSON(DiskType, diskType_);
      DARABONBA_PTR_TO_JSON(InstanceIds, instanceIdsShrink_);
      DARABONBA_PTR_TO_JSON(LoadOpt, loadOptShrink_);
      DARABONBA_PTR_TO_JSON(SDGId, SDGId_);
    };
    friend void from_json(const Darabonba::Json& j, AttachInstanceSDGShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DiskAccessProtocol, diskAccessProtocol_);
      DARABONBA_PTR_FROM_JSON(DiskType, diskType_);
      DARABONBA_PTR_FROM_JSON(InstanceIds, instanceIdsShrink_);
      DARABONBA_PTR_FROM_JSON(LoadOpt, loadOptShrink_);
      DARABONBA_PTR_FROM_JSON(SDGId, SDGId_);
    };
    AttachInstanceSDGShrinkRequest() = default ;
    AttachInstanceSDGShrinkRequest(const AttachInstanceSDGShrinkRequest &) = default ;
    AttachInstanceSDGShrinkRequest(AttachInstanceSDGShrinkRequest &&) = default ;
    AttachInstanceSDGShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AttachInstanceSDGShrinkRequest() = default ;
    AttachInstanceSDGShrinkRequest& operator=(const AttachInstanceSDGShrinkRequest &) = default ;
    AttachInstanceSDGShrinkRequest& operator=(AttachInstanceSDGShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->diskAccessProtocol_ == nullptr
        && this->diskType_ == nullptr && this->instanceIdsShrink_ == nullptr && this->loadOptShrink_ == nullptr && this->SDGId_ == nullptr; };
    // diskAccessProtocol Field Functions 
    bool hasDiskAccessProtocol() const { return this->diskAccessProtocol_ != nullptr;};
    void deleteDiskAccessProtocol() { this->diskAccessProtocol_ = nullptr;};
    inline string getDiskAccessProtocol() const { DARABONBA_PTR_GET_DEFAULT(diskAccessProtocol_, "") };
    inline AttachInstanceSDGShrinkRequest& setDiskAccessProtocol(string diskAccessProtocol) { DARABONBA_PTR_SET_VALUE(diskAccessProtocol_, diskAccessProtocol) };


    // diskType Field Functions 
    bool hasDiskType() const { return this->diskType_ != nullptr;};
    void deleteDiskType() { this->diskType_ = nullptr;};
    inline string getDiskType() const { DARABONBA_PTR_GET_DEFAULT(diskType_, "") };
    inline AttachInstanceSDGShrinkRequest& setDiskType(string diskType) { DARABONBA_PTR_SET_VALUE(diskType_, diskType) };


    // instanceIdsShrink Field Functions 
    bool hasInstanceIdsShrink() const { return this->instanceIdsShrink_ != nullptr;};
    void deleteInstanceIdsShrink() { this->instanceIdsShrink_ = nullptr;};
    inline string getInstanceIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(instanceIdsShrink_, "") };
    inline AttachInstanceSDGShrinkRequest& setInstanceIdsShrink(string instanceIdsShrink) { DARABONBA_PTR_SET_VALUE(instanceIdsShrink_, instanceIdsShrink) };


    // loadOptShrink Field Functions 
    bool hasLoadOptShrink() const { return this->loadOptShrink_ != nullptr;};
    void deleteLoadOptShrink() { this->loadOptShrink_ = nullptr;};
    inline string getLoadOptShrink() const { DARABONBA_PTR_GET_DEFAULT(loadOptShrink_, "") };
    inline AttachInstanceSDGShrinkRequest& setLoadOptShrink(string loadOptShrink) { DARABONBA_PTR_SET_VALUE(loadOptShrink_, loadOptShrink) };


    // SDGId Field Functions 
    bool hasSDGId() const { return this->SDGId_ != nullptr;};
    void deleteSDGId() { this->SDGId_ = nullptr;};
    inline string getSDGId() const { DARABONBA_PTR_GET_DEFAULT(SDGId_, "") };
    inline AttachInstanceSDGShrinkRequest& setSDGId(string SDGId) { DARABONBA_PTR_SET_VALUE(SDGId_, SDGId) };


  protected:
    shared_ptr<string> diskAccessProtocol_ {};
    shared_ptr<string> diskType_ {};
    // The IDs of the instances.
    // 
    // This parameter is required.
    shared_ptr<string> instanceIdsShrink_ {};
    shared_ptr<string> loadOptShrink_ {};
    // The ID of the SDG.
    // 
    // This parameter is required.
    shared_ptr<string> SDGId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
