// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ATTACHINSTANCESDGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ATTACHINSTANCESDGREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/AttachInstanceSDGRequestLoadOpt.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class AttachInstanceSDGRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AttachInstanceSDGRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DiskAccessProtocol, diskAccessProtocol_);
      DARABONBA_PTR_TO_JSON(DiskType, diskType_);
      DARABONBA_PTR_TO_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_TO_JSON(LoadOpt, loadOpt_);
      DARABONBA_PTR_TO_JSON(SDGId, SDGId_);
    };
    friend void from_json(const Darabonba::Json& j, AttachInstanceSDGRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DiskAccessProtocol, diskAccessProtocol_);
      DARABONBA_PTR_FROM_JSON(DiskType, diskType_);
      DARABONBA_PTR_FROM_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_FROM_JSON(LoadOpt, loadOpt_);
      DARABONBA_PTR_FROM_JSON(SDGId, SDGId_);
    };
    AttachInstanceSDGRequest() = default ;
    AttachInstanceSDGRequest(const AttachInstanceSDGRequest &) = default ;
    AttachInstanceSDGRequest(AttachInstanceSDGRequest &&) = default ;
    AttachInstanceSDGRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AttachInstanceSDGRequest() = default ;
    AttachInstanceSDGRequest& operator=(const AttachInstanceSDGRequest &) = default ;
    AttachInstanceSDGRequest& operator=(AttachInstanceSDGRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->diskAccessProtocol_ != nullptr
        && this->diskType_ != nullptr && this->instanceIds_ != nullptr && this->loadOpt_ != nullptr && this->SDGId_ != nullptr; };
    // diskAccessProtocol Field Functions 
    bool hasDiskAccessProtocol() const { return this->diskAccessProtocol_ != nullptr;};
    void deleteDiskAccessProtocol() { this->diskAccessProtocol_ = nullptr;};
    inline string diskAccessProtocol() const { DARABONBA_PTR_GET_DEFAULT(diskAccessProtocol_, "") };
    inline AttachInstanceSDGRequest& setDiskAccessProtocol(string diskAccessProtocol) { DARABONBA_PTR_SET_VALUE(diskAccessProtocol_, diskAccessProtocol) };


    // diskType Field Functions 
    bool hasDiskType() const { return this->diskType_ != nullptr;};
    void deleteDiskType() { this->diskType_ = nullptr;};
    inline string diskType() const { DARABONBA_PTR_GET_DEFAULT(diskType_, "") };
    inline AttachInstanceSDGRequest& setDiskType(string diskType) { DARABONBA_PTR_SET_VALUE(diskType_, diskType) };


    // instanceIds Field Functions 
    bool hasInstanceIds() const { return this->instanceIds_ != nullptr;};
    void deleteInstanceIds() { this->instanceIds_ = nullptr;};
    inline const vector<string> & instanceIds() const { DARABONBA_PTR_GET_CONST(instanceIds_, vector<string>) };
    inline vector<string> instanceIds() { DARABONBA_PTR_GET(instanceIds_, vector<string>) };
    inline AttachInstanceSDGRequest& setInstanceIds(const vector<string> & instanceIds) { DARABONBA_PTR_SET_VALUE(instanceIds_, instanceIds) };
    inline AttachInstanceSDGRequest& setInstanceIds(vector<string> && instanceIds) { DARABONBA_PTR_SET_RVALUE(instanceIds_, instanceIds) };


    // loadOpt Field Functions 
    bool hasLoadOpt() const { return this->loadOpt_ != nullptr;};
    void deleteLoadOpt() { this->loadOpt_ = nullptr;};
    inline const AttachInstanceSDGRequestLoadOpt & loadOpt() const { DARABONBA_PTR_GET_CONST(loadOpt_, AttachInstanceSDGRequestLoadOpt) };
    inline AttachInstanceSDGRequestLoadOpt loadOpt() { DARABONBA_PTR_GET(loadOpt_, AttachInstanceSDGRequestLoadOpt) };
    inline AttachInstanceSDGRequest& setLoadOpt(const AttachInstanceSDGRequestLoadOpt & loadOpt) { DARABONBA_PTR_SET_VALUE(loadOpt_, loadOpt) };
    inline AttachInstanceSDGRequest& setLoadOpt(AttachInstanceSDGRequestLoadOpt && loadOpt) { DARABONBA_PTR_SET_RVALUE(loadOpt_, loadOpt) };


    // SDGId Field Functions 
    bool hasSDGId() const { return this->SDGId_ != nullptr;};
    void deleteSDGId() { this->SDGId_ = nullptr;};
    inline string SDGId() const { DARABONBA_PTR_GET_DEFAULT(SDGId_, "") };
    inline AttachInstanceSDGRequest& setSDGId(string SDGId) { DARABONBA_PTR_SET_VALUE(SDGId_, SDGId) };


  protected:
    std::shared_ptr<string> diskAccessProtocol_ = nullptr;
    std::shared_ptr<string> diskType_ = nullptr;
    // The IDs of the instances.
    // 
    // This parameter is required.
    std::shared_ptr<vector<string>> instanceIds_ = nullptr;
    std::shared_ptr<AttachInstanceSDGRequestLoadOpt> loadOpt_ = nullptr;
    // The ID of the SDG.
    // 
    // This parameter is required.
    std::shared_ptr<string> SDGId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
