// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLINDORMV2INSTANCERESPONSEBODYENGINELIST_HPP_
#define ALIBABACLOUD_MODELS_GETLINDORMV2INSTANCERESPONSEBODYENGINELIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetLindormV2InstanceResponseBodyEngineListConnectAddressList.hpp>
#include <alibabacloud/models/GetLindormV2InstanceResponseBodyEngineListNodeGroup.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hitsdb20200615
{
namespace Models
{
  class GetLindormV2InstanceResponseBodyEngineList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetLindormV2InstanceResponseBodyEngineList& obj) { 
      DARABONBA_PTR_TO_JSON(ConnectAddressList, connectAddressList_);
      DARABONBA_PTR_TO_JSON(EnableBackup, enableBackup_);
      DARABONBA_PTR_TO_JSON(EnableCDC, enableCDC_);
      DARABONBA_PTR_TO_JSON(Engine, engine_);
      DARABONBA_PTR_TO_JSON(IsLastVersion, isLastVersion_);
      DARABONBA_PTR_TO_JSON(LatestVersion, latestVersion_);
      DARABONBA_PTR_TO_JSON(NodeGroup, nodeGroup_);
      DARABONBA_PTR_TO_JSON(Version, version_);
    };
    friend void from_json(const Darabonba::Json& j, GetLindormV2InstanceResponseBodyEngineList& obj) { 
      DARABONBA_PTR_FROM_JSON(ConnectAddressList, connectAddressList_);
      DARABONBA_PTR_FROM_JSON(EnableBackup, enableBackup_);
      DARABONBA_PTR_FROM_JSON(EnableCDC, enableCDC_);
      DARABONBA_PTR_FROM_JSON(Engine, engine_);
      DARABONBA_PTR_FROM_JSON(IsLastVersion, isLastVersion_);
      DARABONBA_PTR_FROM_JSON(LatestVersion, latestVersion_);
      DARABONBA_PTR_FROM_JSON(NodeGroup, nodeGroup_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
    };
    GetLindormV2InstanceResponseBodyEngineList() = default ;
    GetLindormV2InstanceResponseBodyEngineList(const GetLindormV2InstanceResponseBodyEngineList &) = default ;
    GetLindormV2InstanceResponseBodyEngineList(GetLindormV2InstanceResponseBodyEngineList &&) = default ;
    GetLindormV2InstanceResponseBodyEngineList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetLindormV2InstanceResponseBodyEngineList() = default ;
    GetLindormV2InstanceResponseBodyEngineList& operator=(const GetLindormV2InstanceResponseBodyEngineList &) = default ;
    GetLindormV2InstanceResponseBodyEngineList& operator=(GetLindormV2InstanceResponseBodyEngineList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->connectAddressList_ != nullptr
        && this->enableBackup_ != nullptr && this->enableCDC_ != nullptr && this->engine_ != nullptr && this->isLastVersion_ != nullptr && this->latestVersion_ != nullptr
        && this->nodeGroup_ != nullptr && this->version_ != nullptr; };
    // connectAddressList Field Functions 
    bool hasConnectAddressList() const { return this->connectAddressList_ != nullptr;};
    void deleteConnectAddressList() { this->connectAddressList_ = nullptr;};
    inline const vector<Models::GetLindormV2InstanceResponseBodyEngineListConnectAddressList> & connectAddressList() const { DARABONBA_PTR_GET_CONST(connectAddressList_, vector<Models::GetLindormV2InstanceResponseBodyEngineListConnectAddressList>) };
    inline vector<Models::GetLindormV2InstanceResponseBodyEngineListConnectAddressList> connectAddressList() { DARABONBA_PTR_GET(connectAddressList_, vector<Models::GetLindormV2InstanceResponseBodyEngineListConnectAddressList>) };
    inline GetLindormV2InstanceResponseBodyEngineList& setConnectAddressList(const vector<Models::GetLindormV2InstanceResponseBodyEngineListConnectAddressList> & connectAddressList) { DARABONBA_PTR_SET_VALUE(connectAddressList_, connectAddressList) };
    inline GetLindormV2InstanceResponseBodyEngineList& setConnectAddressList(vector<Models::GetLindormV2InstanceResponseBodyEngineListConnectAddressList> && connectAddressList) { DARABONBA_PTR_SET_RVALUE(connectAddressList_, connectAddressList) };


    // enableBackup Field Functions 
    bool hasEnableBackup() const { return this->enableBackup_ != nullptr;};
    void deleteEnableBackup() { this->enableBackup_ = nullptr;};
    inline string enableBackup() const { DARABONBA_PTR_GET_DEFAULT(enableBackup_, "") };
    inline GetLindormV2InstanceResponseBodyEngineList& setEnableBackup(string enableBackup) { DARABONBA_PTR_SET_VALUE(enableBackup_, enableBackup) };


    // enableCDC Field Functions 
    bool hasEnableCDC() const { return this->enableCDC_ != nullptr;};
    void deleteEnableCDC() { this->enableCDC_ = nullptr;};
    inline string enableCDC() const { DARABONBA_PTR_GET_DEFAULT(enableCDC_, "") };
    inline GetLindormV2InstanceResponseBodyEngineList& setEnableCDC(string enableCDC) { DARABONBA_PTR_SET_VALUE(enableCDC_, enableCDC) };


    // engine Field Functions 
    bool hasEngine() const { return this->engine_ != nullptr;};
    void deleteEngine() { this->engine_ = nullptr;};
    inline string engine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
    inline GetLindormV2InstanceResponseBodyEngineList& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


    // isLastVersion Field Functions 
    bool hasIsLastVersion() const { return this->isLastVersion_ != nullptr;};
    void deleteIsLastVersion() { this->isLastVersion_ = nullptr;};
    inline bool isLastVersion() const { DARABONBA_PTR_GET_DEFAULT(isLastVersion_, false) };
    inline GetLindormV2InstanceResponseBodyEngineList& setIsLastVersion(bool isLastVersion) { DARABONBA_PTR_SET_VALUE(isLastVersion_, isLastVersion) };


    // latestVersion Field Functions 
    bool hasLatestVersion() const { return this->latestVersion_ != nullptr;};
    void deleteLatestVersion() { this->latestVersion_ = nullptr;};
    inline string latestVersion() const { DARABONBA_PTR_GET_DEFAULT(latestVersion_, "") };
    inline GetLindormV2InstanceResponseBodyEngineList& setLatestVersion(string latestVersion) { DARABONBA_PTR_SET_VALUE(latestVersion_, latestVersion) };


    // nodeGroup Field Functions 
    bool hasNodeGroup() const { return this->nodeGroup_ != nullptr;};
    void deleteNodeGroup() { this->nodeGroup_ = nullptr;};
    inline const vector<Models::GetLindormV2InstanceResponseBodyEngineListNodeGroup> & nodeGroup() const { DARABONBA_PTR_GET_CONST(nodeGroup_, vector<Models::GetLindormV2InstanceResponseBodyEngineListNodeGroup>) };
    inline vector<Models::GetLindormV2InstanceResponseBodyEngineListNodeGroup> nodeGroup() { DARABONBA_PTR_GET(nodeGroup_, vector<Models::GetLindormV2InstanceResponseBodyEngineListNodeGroup>) };
    inline GetLindormV2InstanceResponseBodyEngineList& setNodeGroup(const vector<Models::GetLindormV2InstanceResponseBodyEngineListNodeGroup> & nodeGroup) { DARABONBA_PTR_SET_VALUE(nodeGroup_, nodeGroup) };
    inline GetLindormV2InstanceResponseBodyEngineList& setNodeGroup(vector<Models::GetLindormV2InstanceResponseBodyEngineListNodeGroup> && nodeGroup) { DARABONBA_PTR_SET_RVALUE(nodeGroup_, nodeGroup) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string version() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline GetLindormV2InstanceResponseBodyEngineList& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    std::shared_ptr<vector<Models::GetLindormV2InstanceResponseBodyEngineListConnectAddressList>> connectAddressList_ = nullptr;
    std::shared_ptr<string> enableBackup_ = nullptr;
    std::shared_ptr<string> enableCDC_ = nullptr;
    std::shared_ptr<string> engine_ = nullptr;
    std::shared_ptr<bool> isLastVersion_ = nullptr;
    std::shared_ptr<string> latestVersion_ = nullptr;
    std::shared_ptr<vector<Models::GetLindormV2InstanceResponseBodyEngineListNodeGroup>> nodeGroup_ = nullptr;
    std::shared_ptr<string> version_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hitsdb20200615
#endif
