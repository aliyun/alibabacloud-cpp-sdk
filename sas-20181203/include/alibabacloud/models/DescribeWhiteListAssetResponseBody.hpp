// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEWHITELISTASSETRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEWHITELISTASSETRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeWhiteListAssetResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeWhiteListAssetResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Assets, assets_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeWhiteListAssetResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Assets, assets_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeWhiteListAssetResponseBody() = default ;
    DescribeWhiteListAssetResponseBody(const DescribeWhiteListAssetResponseBody &) = default ;
    DescribeWhiteListAssetResponseBody(DescribeWhiteListAssetResponseBody &&) = default ;
    DescribeWhiteListAssetResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeWhiteListAssetResponseBody() = default ;
    DescribeWhiteListAssetResponseBody& operator=(const DescribeWhiteListAssetResponseBody &) = default ;
    DescribeWhiteListAssetResponseBody& operator=(DescribeWhiteListAssetResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Assets : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Assets& obj) { 
        DARABONBA_PTR_TO_JSON(AllowSelected, allowSelected_);
        DARABONBA_PTR_TO_JSON(GroupId, groupId_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(MachineIp, machineIp_);
        DARABONBA_PTR_TO_JSON(MachineName, machineName_);
        DARABONBA_PTR_TO_JSON(Selected, selected_);
        DARABONBA_PTR_TO_JSON(Uuid, uuid_);
      };
      friend void from_json(const Darabonba::Json& j, Assets& obj) { 
        DARABONBA_PTR_FROM_JSON(AllowSelected, allowSelected_);
        DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(MachineIp, machineIp_);
        DARABONBA_PTR_FROM_JSON(MachineName, machineName_);
        DARABONBA_PTR_FROM_JSON(Selected, selected_);
        DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
      };
      Assets() = default ;
      Assets(const Assets &) = default ;
      Assets(Assets &&) = default ;
      Assets(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Assets() = default ;
      Assets& operator=(const Assets &) = default ;
      Assets& operator=(Assets &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->allowSelected_ == nullptr
        && this->groupId_ == nullptr && this->id_ == nullptr && this->machineIp_ == nullptr && this->machineName_ == nullptr && this->selected_ == nullptr
        && this->uuid_ == nullptr; };
      // allowSelected Field Functions 
      bool hasAllowSelected() const { return this->allowSelected_ != nullptr;};
      void deleteAllowSelected() { this->allowSelected_ = nullptr;};
      inline int32_t getAllowSelected() const { DARABONBA_PTR_GET_DEFAULT(allowSelected_, 0) };
      inline Assets& setAllowSelected(int32_t allowSelected) { DARABONBA_PTR_SET_VALUE(allowSelected_, allowSelected) };


      // groupId Field Functions 
      bool hasGroupId() const { return this->groupId_ != nullptr;};
      void deleteGroupId() { this->groupId_ = nullptr;};
      inline int64_t getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, 0L) };
      inline Assets& setGroupId(int64_t groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline Assets& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // machineIp Field Functions 
      bool hasMachineIp() const { return this->machineIp_ != nullptr;};
      void deleteMachineIp() { this->machineIp_ = nullptr;};
      inline string getMachineIp() const { DARABONBA_PTR_GET_DEFAULT(machineIp_, "") };
      inline Assets& setMachineIp(string machineIp) { DARABONBA_PTR_SET_VALUE(machineIp_, machineIp) };


      // machineName Field Functions 
      bool hasMachineName() const { return this->machineName_ != nullptr;};
      void deleteMachineName() { this->machineName_ = nullptr;};
      inline string getMachineName() const { DARABONBA_PTR_GET_DEFAULT(machineName_, "") };
      inline Assets& setMachineName(string machineName) { DARABONBA_PTR_SET_VALUE(machineName_, machineName) };


      // selected Field Functions 
      bool hasSelected() const { return this->selected_ != nullptr;};
      void deleteSelected() { this->selected_ = nullptr;};
      inline int32_t getSelected() const { DARABONBA_PTR_GET_DEFAULT(selected_, 0) };
      inline Assets& setSelected(int32_t selected) { DARABONBA_PTR_SET_VALUE(selected_, selected) };


      // uuid Field Functions 
      bool hasUuid() const { return this->uuid_ != nullptr;};
      void deleteUuid() { this->uuid_ = nullptr;};
      inline string getUuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
      inline Assets& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


    protected:
      // Indicates whether the server can be selected. Valid values:
      // 
      // *   **0**: no
      // *   **1**: yes
      shared_ptr<int32_t> allowSelected_ {};
      // The group ID of the server.
      shared_ptr<int64_t> groupId_ {};
      // The ID of the server.
      shared_ptr<int64_t> id_ {};
      // The IP address of the server.
      shared_ptr<string> machineIp_ {};
      // The name of the server.
      shared_ptr<string> machineName_ {};
      // Indicates whether the server is selected. Valid values:
      // 
      // *   **0**: no
      // *   **1**: yes
      shared_ptr<int32_t> selected_ {};
      // The UUID of the server.
      shared_ptr<string> uuid_ {};
    };

    virtual bool empty() const override { return this->assets_ == nullptr
        && this->requestId_ == nullptr; };
    // assets Field Functions 
    bool hasAssets() const { return this->assets_ != nullptr;};
    void deleteAssets() { this->assets_ = nullptr;};
    inline const vector<DescribeWhiteListAssetResponseBody::Assets> & getAssets() const { DARABONBA_PTR_GET_CONST(assets_, vector<DescribeWhiteListAssetResponseBody::Assets>) };
    inline vector<DescribeWhiteListAssetResponseBody::Assets> getAssets() { DARABONBA_PTR_GET(assets_, vector<DescribeWhiteListAssetResponseBody::Assets>) };
    inline DescribeWhiteListAssetResponseBody& setAssets(const vector<DescribeWhiteListAssetResponseBody::Assets> & assets) { DARABONBA_PTR_SET_VALUE(assets_, assets) };
    inline DescribeWhiteListAssetResponseBody& setAssets(vector<DescribeWhiteListAssetResponseBody::Assets> && assets) { DARABONBA_PTR_SET_RVALUE(assets_, assets) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeWhiteListAssetResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the servers.
    shared_ptr<vector<DescribeWhiteListAssetResponseBody::Assets>> assets_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
