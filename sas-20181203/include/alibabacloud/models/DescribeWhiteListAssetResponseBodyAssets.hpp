// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEWHITELISTASSETRESPONSEBODYASSETS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEWHITELISTASSETRESPONSEBODYASSETS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeWhiteListAssetResponseBodyAssets : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeWhiteListAssetResponseBodyAssets& obj) { 
      DARABONBA_PTR_TO_JSON(AllowSelected, allowSelected_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(MachineIp, machineIp_);
      DARABONBA_PTR_TO_JSON(MachineName, machineName_);
      DARABONBA_PTR_TO_JSON(Selected, selected_);
      DARABONBA_PTR_TO_JSON(Uuid, uuid_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeWhiteListAssetResponseBodyAssets& obj) { 
      DARABONBA_PTR_FROM_JSON(AllowSelected, allowSelected_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(MachineIp, machineIp_);
      DARABONBA_PTR_FROM_JSON(MachineName, machineName_);
      DARABONBA_PTR_FROM_JSON(Selected, selected_);
      DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
    };
    DescribeWhiteListAssetResponseBodyAssets() = default ;
    DescribeWhiteListAssetResponseBodyAssets(const DescribeWhiteListAssetResponseBodyAssets &) = default ;
    DescribeWhiteListAssetResponseBodyAssets(DescribeWhiteListAssetResponseBodyAssets &&) = default ;
    DescribeWhiteListAssetResponseBodyAssets(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeWhiteListAssetResponseBodyAssets() = default ;
    DescribeWhiteListAssetResponseBodyAssets& operator=(const DescribeWhiteListAssetResponseBodyAssets &) = default ;
    DescribeWhiteListAssetResponseBodyAssets& operator=(DescribeWhiteListAssetResponseBodyAssets &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->allowSelected_ == nullptr
        && return this->groupId_ == nullptr && return this->id_ == nullptr && return this->machineIp_ == nullptr && return this->machineName_ == nullptr && return this->selected_ == nullptr
        && return this->uuid_ == nullptr; };
    // allowSelected Field Functions 
    bool hasAllowSelected() const { return this->allowSelected_ != nullptr;};
    void deleteAllowSelected() { this->allowSelected_ = nullptr;};
    inline int32_t allowSelected() const { DARABONBA_PTR_GET_DEFAULT(allowSelected_, 0) };
    inline DescribeWhiteListAssetResponseBodyAssets& setAllowSelected(int32_t allowSelected) { DARABONBA_PTR_SET_VALUE(allowSelected_, allowSelected) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline int64_t groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, 0L) };
    inline DescribeWhiteListAssetResponseBodyAssets& setGroupId(int64_t groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline DescribeWhiteListAssetResponseBodyAssets& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // machineIp Field Functions 
    bool hasMachineIp() const { return this->machineIp_ != nullptr;};
    void deleteMachineIp() { this->machineIp_ = nullptr;};
    inline string machineIp() const { DARABONBA_PTR_GET_DEFAULT(machineIp_, "") };
    inline DescribeWhiteListAssetResponseBodyAssets& setMachineIp(string machineIp) { DARABONBA_PTR_SET_VALUE(machineIp_, machineIp) };


    // machineName Field Functions 
    bool hasMachineName() const { return this->machineName_ != nullptr;};
    void deleteMachineName() { this->machineName_ = nullptr;};
    inline string machineName() const { DARABONBA_PTR_GET_DEFAULT(machineName_, "") };
    inline DescribeWhiteListAssetResponseBodyAssets& setMachineName(string machineName) { DARABONBA_PTR_SET_VALUE(machineName_, machineName) };


    // selected Field Functions 
    bool hasSelected() const { return this->selected_ != nullptr;};
    void deleteSelected() { this->selected_ = nullptr;};
    inline int32_t selected() const { DARABONBA_PTR_GET_DEFAULT(selected_, 0) };
    inline DescribeWhiteListAssetResponseBodyAssets& setSelected(int32_t selected) { DARABONBA_PTR_SET_VALUE(selected_, selected) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string uuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline DescribeWhiteListAssetResponseBodyAssets& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


  protected:
    // Indicates whether the server can be selected. Valid values:
    // 
    // *   **0**: no
    // *   **1**: yes
    std::shared_ptr<int32_t> allowSelected_ = nullptr;
    // The group ID of the server.
    std::shared_ptr<int64_t> groupId_ = nullptr;
    // The ID of the server.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The IP address of the server.
    std::shared_ptr<string> machineIp_ = nullptr;
    // The name of the server.
    std::shared_ptr<string> machineName_ = nullptr;
    // Indicates whether the server is selected. Valid values:
    // 
    // *   **0**: no
    // *   **1**: yes
    std::shared_ptr<int32_t> selected_ = nullptr;
    // The UUID of the server.
    std::shared_ptr<string> uuid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
