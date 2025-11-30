// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MEDIACONVERTJOBCONFIGOUTPUTGROUPSGROUPCONFIG_HPP_
#define ALIBABACLOUD_MODELS_MEDIACONVERTJOBCONFIGOUTPUTGROUPSGROUPCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/MediaConvertJobConfigOutputGroupsGroupConfigManifestExtend.hpp>
#include <alibabacloud/models/MediaConvertJobConfigOutputGroupsGroupConfigOutputFileBase.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class MediaConvertJobConfigOutputGroupsGroupConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MediaConvertJobConfigOutputGroupsGroupConfig& obj) { 
      DARABONBA_PTR_TO_JSON(ManifestExtend, manifestExtend_);
      DARABONBA_PTR_TO_JSON(ManifestName, manifestName_);
      DARABONBA_PTR_TO_JSON(OutputFileBase, outputFileBase_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, MediaConvertJobConfigOutputGroupsGroupConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(ManifestExtend, manifestExtend_);
      DARABONBA_PTR_FROM_JSON(ManifestName, manifestName_);
      DARABONBA_PTR_FROM_JSON(OutputFileBase, outputFileBase_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    MediaConvertJobConfigOutputGroupsGroupConfig() = default ;
    MediaConvertJobConfigOutputGroupsGroupConfig(const MediaConvertJobConfigOutputGroupsGroupConfig &) = default ;
    MediaConvertJobConfigOutputGroupsGroupConfig(MediaConvertJobConfigOutputGroupsGroupConfig &&) = default ;
    MediaConvertJobConfigOutputGroupsGroupConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MediaConvertJobConfigOutputGroupsGroupConfig() = default ;
    MediaConvertJobConfigOutputGroupsGroupConfig& operator=(const MediaConvertJobConfigOutputGroupsGroupConfig &) = default ;
    MediaConvertJobConfigOutputGroupsGroupConfig& operator=(MediaConvertJobConfigOutputGroupsGroupConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->manifestExtend_ == nullptr
        && return this->manifestName_ == nullptr && return this->outputFileBase_ == nullptr && return this->type_ == nullptr; };
    // manifestExtend Field Functions 
    bool hasManifestExtend() const { return this->manifestExtend_ != nullptr;};
    void deleteManifestExtend() { this->manifestExtend_ = nullptr;};
    inline const Models::MediaConvertJobConfigOutputGroupsGroupConfigManifestExtend & manifestExtend() const { DARABONBA_PTR_GET_CONST(manifestExtend_, Models::MediaConvertJobConfigOutputGroupsGroupConfigManifestExtend) };
    inline Models::MediaConvertJobConfigOutputGroupsGroupConfigManifestExtend manifestExtend() { DARABONBA_PTR_GET(manifestExtend_, Models::MediaConvertJobConfigOutputGroupsGroupConfigManifestExtend) };
    inline MediaConvertJobConfigOutputGroupsGroupConfig& setManifestExtend(const Models::MediaConvertJobConfigOutputGroupsGroupConfigManifestExtend & manifestExtend) { DARABONBA_PTR_SET_VALUE(manifestExtend_, manifestExtend) };
    inline MediaConvertJobConfigOutputGroupsGroupConfig& setManifestExtend(Models::MediaConvertJobConfigOutputGroupsGroupConfigManifestExtend && manifestExtend) { DARABONBA_PTR_SET_RVALUE(manifestExtend_, manifestExtend) };


    // manifestName Field Functions 
    bool hasManifestName() const { return this->manifestName_ != nullptr;};
    void deleteManifestName() { this->manifestName_ = nullptr;};
    inline string manifestName() const { DARABONBA_PTR_GET_DEFAULT(manifestName_, "") };
    inline MediaConvertJobConfigOutputGroupsGroupConfig& setManifestName(string manifestName) { DARABONBA_PTR_SET_VALUE(manifestName_, manifestName) };


    // outputFileBase Field Functions 
    bool hasOutputFileBase() const { return this->outputFileBase_ != nullptr;};
    void deleteOutputFileBase() { this->outputFileBase_ = nullptr;};
    inline const Models::MediaConvertJobConfigOutputGroupsGroupConfigOutputFileBase & outputFileBase() const { DARABONBA_PTR_GET_CONST(outputFileBase_, Models::MediaConvertJobConfigOutputGroupsGroupConfigOutputFileBase) };
    inline Models::MediaConvertJobConfigOutputGroupsGroupConfigOutputFileBase outputFileBase() { DARABONBA_PTR_GET(outputFileBase_, Models::MediaConvertJobConfigOutputGroupsGroupConfigOutputFileBase) };
    inline MediaConvertJobConfigOutputGroupsGroupConfig& setOutputFileBase(const Models::MediaConvertJobConfigOutputGroupsGroupConfigOutputFileBase & outputFileBase) { DARABONBA_PTR_SET_VALUE(outputFileBase_, outputFileBase) };
    inline MediaConvertJobConfigOutputGroupsGroupConfig& setOutputFileBase(Models::MediaConvertJobConfigOutputGroupsGroupConfigOutputFileBase && outputFileBase) { DARABONBA_PTR_SET_RVALUE(outputFileBase_, outputFileBase) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline MediaConvertJobConfigOutputGroupsGroupConfig& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<Models::MediaConvertJobConfigOutputGroupsGroupConfigManifestExtend> manifestExtend_ = nullptr;
    std::shared_ptr<string> manifestName_ = nullptr;
    std::shared_ptr<Models::MediaConvertJobConfigOutputGroupsGroupConfigOutputFileBase> outputFileBase_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
