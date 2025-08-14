// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEMEDIALIVECHANNELREQUESTOUTPUTGROUPS_HPP_
#define ALIBABACLOUD_MODELS_UPDATEMEDIALIVECHANNELREQUESTOUTPUTGROUPS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateMediaLiveChannelRequestOutputGroupsMediaPackageGroupSetting.hpp>
#include <vector>
#include <alibabacloud/models/UpdateMediaLiveChannelRequestOutputGroupsOutputs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class UpdateMediaLiveChannelRequestOutputGroups : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateMediaLiveChannelRequestOutputGroups& obj) { 
      DARABONBA_PTR_TO_JSON(MediaPackageGroupSetting, mediaPackageGroupSetting_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Outputs, outputs_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateMediaLiveChannelRequestOutputGroups& obj) { 
      DARABONBA_PTR_FROM_JSON(MediaPackageGroupSetting, mediaPackageGroupSetting_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Outputs, outputs_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    UpdateMediaLiveChannelRequestOutputGroups() = default ;
    UpdateMediaLiveChannelRequestOutputGroups(const UpdateMediaLiveChannelRequestOutputGroups &) = default ;
    UpdateMediaLiveChannelRequestOutputGroups(UpdateMediaLiveChannelRequestOutputGroups &&) = default ;
    UpdateMediaLiveChannelRequestOutputGroups(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateMediaLiveChannelRequestOutputGroups() = default ;
    UpdateMediaLiveChannelRequestOutputGroups& operator=(const UpdateMediaLiveChannelRequestOutputGroups &) = default ;
    UpdateMediaLiveChannelRequestOutputGroups& operator=(UpdateMediaLiveChannelRequestOutputGroups &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->mediaPackageGroupSetting_ != nullptr
        && this->name_ != nullptr && this->outputs_ != nullptr && this->type_ != nullptr; };
    // mediaPackageGroupSetting Field Functions 
    bool hasMediaPackageGroupSetting() const { return this->mediaPackageGroupSetting_ != nullptr;};
    void deleteMediaPackageGroupSetting() { this->mediaPackageGroupSetting_ = nullptr;};
    inline const Models::UpdateMediaLiveChannelRequestOutputGroupsMediaPackageGroupSetting & mediaPackageGroupSetting() const { DARABONBA_PTR_GET_CONST(mediaPackageGroupSetting_, Models::UpdateMediaLiveChannelRequestOutputGroupsMediaPackageGroupSetting) };
    inline Models::UpdateMediaLiveChannelRequestOutputGroupsMediaPackageGroupSetting mediaPackageGroupSetting() { DARABONBA_PTR_GET(mediaPackageGroupSetting_, Models::UpdateMediaLiveChannelRequestOutputGroupsMediaPackageGroupSetting) };
    inline UpdateMediaLiveChannelRequestOutputGroups& setMediaPackageGroupSetting(const Models::UpdateMediaLiveChannelRequestOutputGroupsMediaPackageGroupSetting & mediaPackageGroupSetting) { DARABONBA_PTR_SET_VALUE(mediaPackageGroupSetting_, mediaPackageGroupSetting) };
    inline UpdateMediaLiveChannelRequestOutputGroups& setMediaPackageGroupSetting(Models::UpdateMediaLiveChannelRequestOutputGroupsMediaPackageGroupSetting && mediaPackageGroupSetting) { DARABONBA_PTR_SET_RVALUE(mediaPackageGroupSetting_, mediaPackageGroupSetting) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateMediaLiveChannelRequestOutputGroups& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // outputs Field Functions 
    bool hasOutputs() const { return this->outputs_ != nullptr;};
    void deleteOutputs() { this->outputs_ = nullptr;};
    inline const vector<Models::UpdateMediaLiveChannelRequestOutputGroupsOutputs> & outputs() const { DARABONBA_PTR_GET_CONST(outputs_, vector<Models::UpdateMediaLiveChannelRequestOutputGroupsOutputs>) };
    inline vector<Models::UpdateMediaLiveChannelRequestOutputGroupsOutputs> outputs() { DARABONBA_PTR_GET(outputs_, vector<Models::UpdateMediaLiveChannelRequestOutputGroupsOutputs>) };
    inline UpdateMediaLiveChannelRequestOutputGroups& setOutputs(const vector<Models::UpdateMediaLiveChannelRequestOutputGroupsOutputs> & outputs) { DARABONBA_PTR_SET_VALUE(outputs_, outputs) };
    inline UpdateMediaLiveChannelRequestOutputGroups& setOutputs(vector<Models::UpdateMediaLiveChannelRequestOutputGroupsOutputs> && outputs) { DARABONBA_PTR_SET_RVALUE(outputs_, outputs) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline UpdateMediaLiveChannelRequestOutputGroups& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The MediaPackage destination.
    std::shared_ptr<Models::UpdateMediaLiveChannelRequestOutputGroupsMediaPackageGroupSetting> mediaPackageGroupSetting_ = nullptr;
    // The name of the output group. Letters, digits, hyphens (-), and underscores (_) are supported. It can be up to 64 characters in length.
    // 
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    // The outputs in the output group.
    // 
    // This parameter is required.
    std::shared_ptr<vector<Models::UpdateMediaLiveChannelRequestOutputGroupsOutputs>> outputs_ = nullptr;
    // The output group type. Only MediaPackage is supported.
    // 
    // This parameter is required.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
