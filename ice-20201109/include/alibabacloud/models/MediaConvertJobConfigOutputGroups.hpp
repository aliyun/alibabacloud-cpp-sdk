// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MEDIACONVERTJOBCONFIGOUTPUTGROUPS_HPP_
#define ALIBABACLOUD_MODELS_MEDIACONVERTJOBCONFIGOUTPUTGROUPS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/MediaConvertJobConfigOutputGroupsGroupConfig.hpp>
#include <vector>
#include <alibabacloud/models/MediaConvertJobConfigOutputGroupsOutputs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class MediaConvertJobConfigOutputGroups : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MediaConvertJobConfigOutputGroups& obj) { 
      DARABONBA_PTR_TO_JSON(GroupConfig, groupConfig_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Outputs, outputs_);
    };
    friend void from_json(const Darabonba::Json& j, MediaConvertJobConfigOutputGroups& obj) { 
      DARABONBA_PTR_FROM_JSON(GroupConfig, groupConfig_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Outputs, outputs_);
    };
    MediaConvertJobConfigOutputGroups() = default ;
    MediaConvertJobConfigOutputGroups(const MediaConvertJobConfigOutputGroups &) = default ;
    MediaConvertJobConfigOutputGroups(MediaConvertJobConfigOutputGroups &&) = default ;
    MediaConvertJobConfigOutputGroups(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MediaConvertJobConfigOutputGroups() = default ;
    MediaConvertJobConfigOutputGroups& operator=(const MediaConvertJobConfigOutputGroups &) = default ;
    MediaConvertJobConfigOutputGroups& operator=(MediaConvertJobConfigOutputGroups &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->groupConfig_ == nullptr
        && return this->name_ == nullptr && return this->outputs_ == nullptr; };
    // groupConfig Field Functions 
    bool hasGroupConfig() const { return this->groupConfig_ != nullptr;};
    void deleteGroupConfig() { this->groupConfig_ = nullptr;};
    inline const Models::MediaConvertJobConfigOutputGroupsGroupConfig & groupConfig() const { DARABONBA_PTR_GET_CONST(groupConfig_, Models::MediaConvertJobConfigOutputGroupsGroupConfig) };
    inline Models::MediaConvertJobConfigOutputGroupsGroupConfig groupConfig() { DARABONBA_PTR_GET(groupConfig_, Models::MediaConvertJobConfigOutputGroupsGroupConfig) };
    inline MediaConvertJobConfigOutputGroups& setGroupConfig(const Models::MediaConvertJobConfigOutputGroupsGroupConfig & groupConfig) { DARABONBA_PTR_SET_VALUE(groupConfig_, groupConfig) };
    inline MediaConvertJobConfigOutputGroups& setGroupConfig(Models::MediaConvertJobConfigOutputGroupsGroupConfig && groupConfig) { DARABONBA_PTR_SET_RVALUE(groupConfig_, groupConfig) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline MediaConvertJobConfigOutputGroups& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // outputs Field Functions 
    bool hasOutputs() const { return this->outputs_ != nullptr;};
    void deleteOutputs() { this->outputs_ = nullptr;};
    inline const vector<Models::MediaConvertJobConfigOutputGroupsOutputs> & outputs() const { DARABONBA_PTR_GET_CONST(outputs_, vector<Models::MediaConvertJobConfigOutputGroupsOutputs>) };
    inline vector<Models::MediaConvertJobConfigOutputGroupsOutputs> outputs() { DARABONBA_PTR_GET(outputs_, vector<Models::MediaConvertJobConfigOutputGroupsOutputs>) };
    inline MediaConvertJobConfigOutputGroups& setOutputs(const vector<Models::MediaConvertJobConfigOutputGroupsOutputs> & outputs) { DARABONBA_PTR_SET_VALUE(outputs_, outputs) };
    inline MediaConvertJobConfigOutputGroups& setOutputs(vector<Models::MediaConvertJobConfigOutputGroupsOutputs> && outputs) { DARABONBA_PTR_SET_RVALUE(outputs_, outputs) };


  protected:
    std::shared_ptr<Models::MediaConvertJobConfigOutputGroupsGroupConfig> groupConfig_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<vector<Models::MediaConvertJobConfigOutputGroupsOutputs>> outputs_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
