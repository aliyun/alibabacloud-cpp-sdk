// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCHECKINSTANCERESULTRESPONSEBODYBASICDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTCHECKINSTANCERESULTRESPONSEBODYBASICDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListCheckInstanceResultResponseBodyBasicDataInstanceInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListCheckInstanceResultResponseBodyBasicData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCheckInstanceResultResponseBodyBasicData& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceInfo, instanceInfo_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(StatusMessage, statusMessage_);
    };
    friend void from_json(const Darabonba::Json& j, ListCheckInstanceResultResponseBodyBasicData& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceInfo, instanceInfo_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(StatusMessage, statusMessage_);
    };
    ListCheckInstanceResultResponseBodyBasicData() = default ;
    ListCheckInstanceResultResponseBodyBasicData(const ListCheckInstanceResultResponseBodyBasicData &) = default ;
    ListCheckInstanceResultResponseBodyBasicData(ListCheckInstanceResultResponseBodyBasicData &&) = default ;
    ListCheckInstanceResultResponseBodyBasicData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCheckInstanceResultResponseBodyBasicData() = default ;
    ListCheckInstanceResultResponseBodyBasicData& operator=(const ListCheckInstanceResultResponseBodyBasicData &) = default ;
    ListCheckInstanceResultResponseBodyBasicData& operator=(ListCheckInstanceResultResponseBodyBasicData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->id_ != nullptr
        && this->instanceId_ != nullptr && this->instanceInfo_ != nullptr && this->instanceName_ != nullptr && this->regionId_ != nullptr && this->status_ != nullptr
        && this->statusMessage_ != nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline ListCheckInstanceResultResponseBodyBasicData& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListCheckInstanceResultResponseBodyBasicData& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceInfo Field Functions 
    bool hasInstanceInfo() const { return this->instanceInfo_ != nullptr;};
    void deleteInstanceInfo() { this->instanceInfo_ = nullptr;};
    inline const Models::ListCheckInstanceResultResponseBodyBasicDataInstanceInfo & instanceInfo() const { DARABONBA_PTR_GET_CONST(instanceInfo_, Models::ListCheckInstanceResultResponseBodyBasicDataInstanceInfo) };
    inline Models::ListCheckInstanceResultResponseBodyBasicDataInstanceInfo instanceInfo() { DARABONBA_PTR_GET(instanceInfo_, Models::ListCheckInstanceResultResponseBodyBasicDataInstanceInfo) };
    inline ListCheckInstanceResultResponseBodyBasicData& setInstanceInfo(const Models::ListCheckInstanceResultResponseBodyBasicDataInstanceInfo & instanceInfo) { DARABONBA_PTR_SET_VALUE(instanceInfo_, instanceInfo) };
    inline ListCheckInstanceResultResponseBodyBasicData& setInstanceInfo(Models::ListCheckInstanceResultResponseBodyBasicDataInstanceInfo && instanceInfo) { DARABONBA_PTR_SET_RVALUE(instanceInfo_, instanceInfo) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string instanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline ListCheckInstanceResultResponseBodyBasicData& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListCheckInstanceResultResponseBodyBasicData& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListCheckInstanceResultResponseBodyBasicData& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // statusMessage Field Functions 
    bool hasStatusMessage() const { return this->statusMessage_ != nullptr;};
    void deleteStatusMessage() { this->statusMessage_ = nullptr;};
    inline string statusMessage() const { DARABONBA_PTR_GET_DEFAULT(statusMessage_, "") };
    inline ListCheckInstanceResultResponseBodyBasicData& setStatusMessage(string statusMessage) { DARABONBA_PTR_SET_VALUE(statusMessage_, statusMessage) };


  protected:
    // The ID of the check result for the instance.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The instance ID of the server.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The information about the instance on which the check item is used.
    std::shared_ptr<Models::ListCheckInstanceResultResponseBodyBasicDataInstanceInfo> instanceInfo_ = nullptr;
    // The instance name of the server.
    std::shared_ptr<string> instanceName_ = nullptr;
    // The region ID of the instance.
    std::shared_ptr<string> regionId_ = nullptr;
    // The states of check items. Multiple states are separated with commas (,). Valid values:
    // 
    // *   **PASS**: passed
    // *   **NOT_PASS**: failed
    // *   **CHECKING**: being checked
    // *   **NOT_CHECK**: not checked
    // *   **WHITELIST**: added to the whitelist
    std::shared_ptr<string> status_ = nullptr;
    // The exception message of the check item.
    std::shared_ptr<string> statusMessage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
