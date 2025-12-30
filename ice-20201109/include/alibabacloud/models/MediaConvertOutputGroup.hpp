// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MEDIACONVERTOUTPUTGROUP_HPP_
#define ALIBABACLOUD_MODELS_MEDIACONVERTOUTPUTGROUP_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/MediaConvertOutputGroupConfig.hpp>
#include <vector>
#include <alibabacloud/models/MediaConvertOutputGroupOutput.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class MediaConvertOutputGroup : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MediaConvertOutputGroup& obj) { 
      DARABONBA_PTR_TO_JSON(GroupConfig, groupConfig_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Outputs, outputs_);
    };
    friend void from_json(const Darabonba::Json& j, MediaConvertOutputGroup& obj) { 
      DARABONBA_PTR_FROM_JSON(GroupConfig, groupConfig_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Outputs, outputs_);
    };
    MediaConvertOutputGroup() = default ;
    MediaConvertOutputGroup(const MediaConvertOutputGroup &) = default ;
    MediaConvertOutputGroup(MediaConvertOutputGroup &&) = default ;
    MediaConvertOutputGroup(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MediaConvertOutputGroup() = default ;
    MediaConvertOutputGroup& operator=(const MediaConvertOutputGroup &) = default ;
    MediaConvertOutputGroup& operator=(MediaConvertOutputGroup &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->groupConfig_ == nullptr
        && this->name_ == nullptr && this->outputs_ == nullptr; };
    // groupConfig Field Functions 
    bool hasGroupConfig() const { return this->groupConfig_ != nullptr;};
    void deleteGroupConfig() { this->groupConfig_ = nullptr;};
    inline const MediaConvertOutputGroupConfig & getGroupConfig() const { DARABONBA_PTR_GET_CONST(groupConfig_, MediaConvertOutputGroupConfig) };
    inline MediaConvertOutputGroupConfig getGroupConfig() { DARABONBA_PTR_GET(groupConfig_, MediaConvertOutputGroupConfig) };
    inline MediaConvertOutputGroup& setGroupConfig(const MediaConvertOutputGroupConfig & groupConfig) { DARABONBA_PTR_SET_VALUE(groupConfig_, groupConfig) };
    inline MediaConvertOutputGroup& setGroupConfig(MediaConvertOutputGroupConfig && groupConfig) { DARABONBA_PTR_SET_RVALUE(groupConfig_, groupConfig) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline MediaConvertOutputGroup& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // outputs Field Functions 
    bool hasOutputs() const { return this->outputs_ != nullptr;};
    void deleteOutputs() { this->outputs_ = nullptr;};
    inline const vector<MediaConvertOutputGroupOutput> & getOutputs() const { DARABONBA_PTR_GET_CONST(outputs_, vector<MediaConvertOutputGroupOutput>) };
    inline vector<MediaConvertOutputGroupOutput> getOutputs() { DARABONBA_PTR_GET(outputs_, vector<MediaConvertOutputGroupOutput>) };
    inline MediaConvertOutputGroup& setOutputs(const vector<MediaConvertOutputGroupOutput> & outputs) { DARABONBA_PTR_SET_VALUE(outputs_, outputs) };
    inline MediaConvertOutputGroup& setOutputs(vector<MediaConvertOutputGroupOutput> && outputs) { DARABONBA_PTR_SET_RVALUE(outputs_, outputs) };


  protected:
    shared_ptr<MediaConvertOutputGroupConfig> groupConfig_ {};
    shared_ptr<string> name_ {};
    shared_ptr<vector<MediaConvertOutputGroupOutput>> outputs_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
