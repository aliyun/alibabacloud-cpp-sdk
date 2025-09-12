// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLINDORMV2INSTANCEFORTERRAFORMRESPONSEBODYENGINELIST_HPP_
#define ALIBABACLOUD_MODELS_GETLINDORMV2INSTANCEFORTERRAFORMRESPONSEBODYENGINELIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetLindormV2InstanceForTerraformResponseBodyEngineListConnectAddressList.hpp>
#include <alibabacloud/models/GetLindormV2InstanceForTerraformResponseBodyEngineListNodeGroup.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hitsdb20200615
{
namespace Models
{
  class GetLindormV2InstanceForTerraformResponseBodyEngineList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetLindormV2InstanceForTerraformResponseBodyEngineList& obj) { 
      DARABONBA_PTR_TO_JSON(ConnectAddressList, connectAddressList_);
      DARABONBA_PTR_TO_JSON(Engine, engine_);
      DARABONBA_PTR_TO_JSON(IsLastVersion, isLastVersion_);
      DARABONBA_PTR_TO_JSON(LatestVersion, latestVersion_);
      DARABONBA_PTR_TO_JSON(NodeGroup, nodeGroup_);
      DARABONBA_PTR_TO_JSON(Version, version_);
    };
    friend void from_json(const Darabonba::Json& j, GetLindormV2InstanceForTerraformResponseBodyEngineList& obj) { 
      DARABONBA_PTR_FROM_JSON(ConnectAddressList, connectAddressList_);
      DARABONBA_PTR_FROM_JSON(Engine, engine_);
      DARABONBA_PTR_FROM_JSON(IsLastVersion, isLastVersion_);
      DARABONBA_PTR_FROM_JSON(LatestVersion, latestVersion_);
      DARABONBA_PTR_FROM_JSON(NodeGroup, nodeGroup_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
    };
    GetLindormV2InstanceForTerraformResponseBodyEngineList() = default ;
    GetLindormV2InstanceForTerraformResponseBodyEngineList(const GetLindormV2InstanceForTerraformResponseBodyEngineList &) = default ;
    GetLindormV2InstanceForTerraformResponseBodyEngineList(GetLindormV2InstanceForTerraformResponseBodyEngineList &&) = default ;
    GetLindormV2InstanceForTerraformResponseBodyEngineList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetLindormV2InstanceForTerraformResponseBodyEngineList() = default ;
    GetLindormV2InstanceForTerraformResponseBodyEngineList& operator=(const GetLindormV2InstanceForTerraformResponseBodyEngineList &) = default ;
    GetLindormV2InstanceForTerraformResponseBodyEngineList& operator=(GetLindormV2InstanceForTerraformResponseBodyEngineList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->connectAddressList_ != nullptr
        && this->engine_ != nullptr && this->isLastVersion_ != nullptr && this->latestVersion_ != nullptr && this->nodeGroup_ != nullptr && this->version_ != nullptr; };
    // connectAddressList Field Functions 
    bool hasConnectAddressList() const { return this->connectAddressList_ != nullptr;};
    void deleteConnectAddressList() { this->connectAddressList_ = nullptr;};
    inline const vector<Models::GetLindormV2InstanceForTerraformResponseBodyEngineListConnectAddressList> & connectAddressList() const { DARABONBA_PTR_GET_CONST(connectAddressList_, vector<Models::GetLindormV2InstanceForTerraformResponseBodyEngineListConnectAddressList>) };
    inline vector<Models::GetLindormV2InstanceForTerraformResponseBodyEngineListConnectAddressList> connectAddressList() { DARABONBA_PTR_GET(connectAddressList_, vector<Models::GetLindormV2InstanceForTerraformResponseBodyEngineListConnectAddressList>) };
    inline GetLindormV2InstanceForTerraformResponseBodyEngineList& setConnectAddressList(const vector<Models::GetLindormV2InstanceForTerraformResponseBodyEngineListConnectAddressList> & connectAddressList) { DARABONBA_PTR_SET_VALUE(connectAddressList_, connectAddressList) };
    inline GetLindormV2InstanceForTerraformResponseBodyEngineList& setConnectAddressList(vector<Models::GetLindormV2InstanceForTerraformResponseBodyEngineListConnectAddressList> && connectAddressList) { DARABONBA_PTR_SET_RVALUE(connectAddressList_, connectAddressList) };


    // engine Field Functions 
    bool hasEngine() const { return this->engine_ != nullptr;};
    void deleteEngine() { this->engine_ = nullptr;};
    inline string engine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
    inline GetLindormV2InstanceForTerraformResponseBodyEngineList& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


    // isLastVersion Field Functions 
    bool hasIsLastVersion() const { return this->isLastVersion_ != nullptr;};
    void deleteIsLastVersion() { this->isLastVersion_ = nullptr;};
    inline bool isLastVersion() const { DARABONBA_PTR_GET_DEFAULT(isLastVersion_, false) };
    inline GetLindormV2InstanceForTerraformResponseBodyEngineList& setIsLastVersion(bool isLastVersion) { DARABONBA_PTR_SET_VALUE(isLastVersion_, isLastVersion) };


    // latestVersion Field Functions 
    bool hasLatestVersion() const { return this->latestVersion_ != nullptr;};
    void deleteLatestVersion() { this->latestVersion_ = nullptr;};
    inline string latestVersion() const { DARABONBA_PTR_GET_DEFAULT(latestVersion_, "") };
    inline GetLindormV2InstanceForTerraformResponseBodyEngineList& setLatestVersion(string latestVersion) { DARABONBA_PTR_SET_VALUE(latestVersion_, latestVersion) };


    // nodeGroup Field Functions 
    bool hasNodeGroup() const { return this->nodeGroup_ != nullptr;};
    void deleteNodeGroup() { this->nodeGroup_ = nullptr;};
    inline const vector<Models::GetLindormV2InstanceForTerraformResponseBodyEngineListNodeGroup> & nodeGroup() const { DARABONBA_PTR_GET_CONST(nodeGroup_, vector<Models::GetLindormV2InstanceForTerraformResponseBodyEngineListNodeGroup>) };
    inline vector<Models::GetLindormV2InstanceForTerraformResponseBodyEngineListNodeGroup> nodeGroup() { DARABONBA_PTR_GET(nodeGroup_, vector<Models::GetLindormV2InstanceForTerraformResponseBodyEngineListNodeGroup>) };
    inline GetLindormV2InstanceForTerraformResponseBodyEngineList& setNodeGroup(const vector<Models::GetLindormV2InstanceForTerraformResponseBodyEngineListNodeGroup> & nodeGroup) { DARABONBA_PTR_SET_VALUE(nodeGroup_, nodeGroup) };
    inline GetLindormV2InstanceForTerraformResponseBodyEngineList& setNodeGroup(vector<Models::GetLindormV2InstanceForTerraformResponseBodyEngineListNodeGroup> && nodeGroup) { DARABONBA_PTR_SET_RVALUE(nodeGroup_, nodeGroup) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string version() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline GetLindormV2InstanceForTerraformResponseBodyEngineList& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    std::shared_ptr<vector<Models::GetLindormV2InstanceForTerraformResponseBodyEngineListConnectAddressList>> connectAddressList_ = nullptr;
    std::shared_ptr<string> engine_ = nullptr;
    std::shared_ptr<bool> isLastVersion_ = nullptr;
    std::shared_ptr<string> latestVersion_ = nullptr;
    std::shared_ptr<vector<Models::GetLindormV2InstanceForTerraformResponseBodyEngineListNodeGroup>> nodeGroup_ = nullptr;
    std::shared_ptr<string> version_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hitsdb20200615
#endif
