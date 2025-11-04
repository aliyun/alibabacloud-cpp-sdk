// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMEDIALIVECHANNELREQUESTOUTPUTGROUPS_HPP_
#define ALIBABACLOUD_MODELS_CREATEMEDIALIVECHANNELREQUESTOUTPUTGROUPS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateMediaLiveChannelRequestOutputGroupsMediaPackageGroupSetting.hpp>
#include <vector>
#include <alibabacloud/models/CreateMediaLiveChannelRequestOutputGroupsOutputs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class CreateMediaLiveChannelRequestOutputGroups : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateMediaLiveChannelRequestOutputGroups& obj) { 
      DARABONBA_PTR_TO_JSON(MediaPackageGroupSetting, mediaPackageGroupSetting_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Outputs, outputs_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, CreateMediaLiveChannelRequestOutputGroups& obj) { 
      DARABONBA_PTR_FROM_JSON(MediaPackageGroupSetting, mediaPackageGroupSetting_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Outputs, outputs_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    CreateMediaLiveChannelRequestOutputGroups() = default ;
    CreateMediaLiveChannelRequestOutputGroups(const CreateMediaLiveChannelRequestOutputGroups &) = default ;
    CreateMediaLiveChannelRequestOutputGroups(CreateMediaLiveChannelRequestOutputGroups &&) = default ;
    CreateMediaLiveChannelRequestOutputGroups(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateMediaLiveChannelRequestOutputGroups() = default ;
    CreateMediaLiveChannelRequestOutputGroups& operator=(const CreateMediaLiveChannelRequestOutputGroups &) = default ;
    CreateMediaLiveChannelRequestOutputGroups& operator=(CreateMediaLiveChannelRequestOutputGroups &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->mediaPackageGroupSetting_ == nullptr
        && return this->name_ == nullptr && return this->outputs_ == nullptr && return this->type_ == nullptr; };
    // mediaPackageGroupSetting Field Functions 
    bool hasMediaPackageGroupSetting() const { return this->mediaPackageGroupSetting_ != nullptr;};
    void deleteMediaPackageGroupSetting() { this->mediaPackageGroupSetting_ = nullptr;};
    inline const Models::CreateMediaLiveChannelRequestOutputGroupsMediaPackageGroupSetting & mediaPackageGroupSetting() const { DARABONBA_PTR_GET_CONST(mediaPackageGroupSetting_, Models::CreateMediaLiveChannelRequestOutputGroupsMediaPackageGroupSetting) };
    inline Models::CreateMediaLiveChannelRequestOutputGroupsMediaPackageGroupSetting mediaPackageGroupSetting() { DARABONBA_PTR_GET(mediaPackageGroupSetting_, Models::CreateMediaLiveChannelRequestOutputGroupsMediaPackageGroupSetting) };
    inline CreateMediaLiveChannelRequestOutputGroups& setMediaPackageGroupSetting(const Models::CreateMediaLiveChannelRequestOutputGroupsMediaPackageGroupSetting & mediaPackageGroupSetting) { DARABONBA_PTR_SET_VALUE(mediaPackageGroupSetting_, mediaPackageGroupSetting) };
    inline CreateMediaLiveChannelRequestOutputGroups& setMediaPackageGroupSetting(Models::CreateMediaLiveChannelRequestOutputGroupsMediaPackageGroupSetting && mediaPackageGroupSetting) { DARABONBA_PTR_SET_RVALUE(mediaPackageGroupSetting_, mediaPackageGroupSetting) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateMediaLiveChannelRequestOutputGroups& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // outputs Field Functions 
    bool hasOutputs() const { return this->outputs_ != nullptr;};
    void deleteOutputs() { this->outputs_ = nullptr;};
    inline const vector<Models::CreateMediaLiveChannelRequestOutputGroupsOutputs> & outputs() const { DARABONBA_PTR_GET_CONST(outputs_, vector<Models::CreateMediaLiveChannelRequestOutputGroupsOutputs>) };
    inline vector<Models::CreateMediaLiveChannelRequestOutputGroupsOutputs> outputs() { DARABONBA_PTR_GET(outputs_, vector<Models::CreateMediaLiveChannelRequestOutputGroupsOutputs>) };
    inline CreateMediaLiveChannelRequestOutputGroups& setOutputs(const vector<Models::CreateMediaLiveChannelRequestOutputGroupsOutputs> & outputs) { DARABONBA_PTR_SET_VALUE(outputs_, outputs) };
    inline CreateMediaLiveChannelRequestOutputGroups& setOutputs(vector<Models::CreateMediaLiveChannelRequestOutputGroupsOutputs> && outputs) { DARABONBA_PTR_SET_RVALUE(outputs_, outputs) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline CreateMediaLiveChannelRequestOutputGroups& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The MediaPackage destination.
    std::shared_ptr<Models::CreateMediaLiveChannelRequestOutputGroupsMediaPackageGroupSetting> mediaPackageGroupSetting_ = nullptr;
    // The name of the output group. Letters, digits, hyphens (-), and underscores (_) are supported. It can be up to 64 characters in length.
    // 
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    // The outputs in the output group.
    // 
    // This parameter is required.
    std::shared_ptr<vector<Models::CreateMediaLiveChannelRequestOutputGroupsOutputs>> outputs_ = nullptr;
    // The output group type. Only MediaPackage is supported.
    // 
    // This parameter is required.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
