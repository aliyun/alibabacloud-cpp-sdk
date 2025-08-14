// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMEDIALIVECHANNELSRESPONSEBODYCHANNELSOUTPUTGROUPS_HPP_
#define ALIBABACLOUD_MODELS_LISTMEDIALIVECHANNELSRESPONSEBODYCHANNELSOUTPUTGROUPS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListMediaLiveChannelsResponseBodyChannelsOutputGroupsMediaPackageGroupSetting.hpp>
#include <vector>
#include <alibabacloud/models/ListMediaLiveChannelsResponseBodyChannelsOutputGroupsOutputs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class ListMediaLiveChannelsResponseBodyChannelsOutputGroups : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMediaLiveChannelsResponseBodyChannelsOutputGroups& obj) { 
      DARABONBA_PTR_TO_JSON(MediaPackageGroupSetting, mediaPackageGroupSetting_);
      DARABONBA_PTR_TO_JSON(MonitorUrl, monitorUrl_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Outputs, outputs_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ListMediaLiveChannelsResponseBodyChannelsOutputGroups& obj) { 
      DARABONBA_PTR_FROM_JSON(MediaPackageGroupSetting, mediaPackageGroupSetting_);
      DARABONBA_PTR_FROM_JSON(MonitorUrl, monitorUrl_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Outputs, outputs_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    ListMediaLiveChannelsResponseBodyChannelsOutputGroups() = default ;
    ListMediaLiveChannelsResponseBodyChannelsOutputGroups(const ListMediaLiveChannelsResponseBodyChannelsOutputGroups &) = default ;
    ListMediaLiveChannelsResponseBodyChannelsOutputGroups(ListMediaLiveChannelsResponseBodyChannelsOutputGroups &&) = default ;
    ListMediaLiveChannelsResponseBodyChannelsOutputGroups(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMediaLiveChannelsResponseBodyChannelsOutputGroups() = default ;
    ListMediaLiveChannelsResponseBodyChannelsOutputGroups& operator=(const ListMediaLiveChannelsResponseBodyChannelsOutputGroups &) = default ;
    ListMediaLiveChannelsResponseBodyChannelsOutputGroups& operator=(ListMediaLiveChannelsResponseBodyChannelsOutputGroups &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->mediaPackageGroupSetting_ != nullptr
        && this->monitorUrl_ != nullptr && this->name_ != nullptr && this->outputs_ != nullptr && this->type_ != nullptr; };
    // mediaPackageGroupSetting Field Functions 
    bool hasMediaPackageGroupSetting() const { return this->mediaPackageGroupSetting_ != nullptr;};
    void deleteMediaPackageGroupSetting() { this->mediaPackageGroupSetting_ = nullptr;};
    inline const Models::ListMediaLiveChannelsResponseBodyChannelsOutputGroupsMediaPackageGroupSetting & mediaPackageGroupSetting() const { DARABONBA_PTR_GET_CONST(mediaPackageGroupSetting_, Models::ListMediaLiveChannelsResponseBodyChannelsOutputGroupsMediaPackageGroupSetting) };
    inline Models::ListMediaLiveChannelsResponseBodyChannelsOutputGroupsMediaPackageGroupSetting mediaPackageGroupSetting() { DARABONBA_PTR_GET(mediaPackageGroupSetting_, Models::ListMediaLiveChannelsResponseBodyChannelsOutputGroupsMediaPackageGroupSetting) };
    inline ListMediaLiveChannelsResponseBodyChannelsOutputGroups& setMediaPackageGroupSetting(const Models::ListMediaLiveChannelsResponseBodyChannelsOutputGroupsMediaPackageGroupSetting & mediaPackageGroupSetting) { DARABONBA_PTR_SET_VALUE(mediaPackageGroupSetting_, mediaPackageGroupSetting) };
    inline ListMediaLiveChannelsResponseBodyChannelsOutputGroups& setMediaPackageGroupSetting(Models::ListMediaLiveChannelsResponseBodyChannelsOutputGroupsMediaPackageGroupSetting && mediaPackageGroupSetting) { DARABONBA_PTR_SET_RVALUE(mediaPackageGroupSetting_, mediaPackageGroupSetting) };


    // monitorUrl Field Functions 
    bool hasMonitorUrl() const { return this->monitorUrl_ != nullptr;};
    void deleteMonitorUrl() { this->monitorUrl_ = nullptr;};
    inline string monitorUrl() const { DARABONBA_PTR_GET_DEFAULT(monitorUrl_, "") };
    inline ListMediaLiveChannelsResponseBodyChannelsOutputGroups& setMonitorUrl(string monitorUrl) { DARABONBA_PTR_SET_VALUE(monitorUrl_, monitorUrl) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListMediaLiveChannelsResponseBodyChannelsOutputGroups& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // outputs Field Functions 
    bool hasOutputs() const { return this->outputs_ != nullptr;};
    void deleteOutputs() { this->outputs_ = nullptr;};
    inline const vector<Models::ListMediaLiveChannelsResponseBodyChannelsOutputGroupsOutputs> & outputs() const { DARABONBA_PTR_GET_CONST(outputs_, vector<Models::ListMediaLiveChannelsResponseBodyChannelsOutputGroupsOutputs>) };
    inline vector<Models::ListMediaLiveChannelsResponseBodyChannelsOutputGroupsOutputs> outputs() { DARABONBA_PTR_GET(outputs_, vector<Models::ListMediaLiveChannelsResponseBodyChannelsOutputGroupsOutputs>) };
    inline ListMediaLiveChannelsResponseBodyChannelsOutputGroups& setOutputs(const vector<Models::ListMediaLiveChannelsResponseBodyChannelsOutputGroupsOutputs> & outputs) { DARABONBA_PTR_SET_VALUE(outputs_, outputs) };
    inline ListMediaLiveChannelsResponseBodyChannelsOutputGroups& setOutputs(vector<Models::ListMediaLiveChannelsResponseBodyChannelsOutputGroupsOutputs> && outputs) { DARABONBA_PTR_SET_RVALUE(outputs_, outputs) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListMediaLiveChannelsResponseBodyChannelsOutputGroups& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The MediaPackage destination.
    std::shared_ptr<Models::ListMediaLiveChannelsResponseBodyChannelsOutputGroupsMediaPackageGroupSetting> mediaPackageGroupSetting_ = nullptr;
    // The URL for monitoring the output group. The parameter is returned only when the output gourp type is MediaPackage.
    std::shared_ptr<string> monitorUrl_ = nullptr;
    // The name of the output group.
    std::shared_ptr<string> name_ = nullptr;
    // The outputs in the output group.
    std::shared_ptr<vector<Models::ListMediaLiveChannelsResponseBodyChannelsOutputGroupsOutputs>> outputs_ = nullptr;
    // The output group type.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
