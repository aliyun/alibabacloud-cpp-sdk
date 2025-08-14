// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MEDIACONVERTOUTPUTGROUPCONFIG_HPP_
#define ALIBABACLOUD_MODELS_MEDIACONVERTOUTPUTGROUPCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/MediaObject.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class MediaConvertOutputGroupConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MediaConvertOutputGroupConfig& obj) { 
      DARABONBA_PTR_TO_JSON(ManifestName, manifestName_);
      DARABONBA_PTR_TO_JSON(OutputFileBase, outputFileBase_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, MediaConvertOutputGroupConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(ManifestName, manifestName_);
      DARABONBA_PTR_FROM_JSON(OutputFileBase, outputFileBase_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    MediaConvertOutputGroupConfig() = default ;
    MediaConvertOutputGroupConfig(const MediaConvertOutputGroupConfig &) = default ;
    MediaConvertOutputGroupConfig(MediaConvertOutputGroupConfig &&) = default ;
    MediaConvertOutputGroupConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MediaConvertOutputGroupConfig() = default ;
    MediaConvertOutputGroupConfig& operator=(const MediaConvertOutputGroupConfig &) = default ;
    MediaConvertOutputGroupConfig& operator=(MediaConvertOutputGroupConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->manifestName_ != nullptr
        && this->outputFileBase_ != nullptr && this->type_ != nullptr; };
    // manifestName Field Functions 
    bool hasManifestName() const { return this->manifestName_ != nullptr;};
    void deleteManifestName() { this->manifestName_ = nullptr;};
    inline string manifestName() const { DARABONBA_PTR_GET_DEFAULT(manifestName_, "") };
    inline MediaConvertOutputGroupConfig& setManifestName(string manifestName) { DARABONBA_PTR_SET_VALUE(manifestName_, manifestName) };


    // outputFileBase Field Functions 
    bool hasOutputFileBase() const { return this->outputFileBase_ != nullptr;};
    void deleteOutputFileBase() { this->outputFileBase_ = nullptr;};
    inline const MediaObject & outputFileBase() const { DARABONBA_PTR_GET_CONST(outputFileBase_, MediaObject) };
    inline MediaObject outputFileBase() { DARABONBA_PTR_GET(outputFileBase_, MediaObject) };
    inline MediaConvertOutputGroupConfig& setOutputFileBase(const MediaObject & outputFileBase) { DARABONBA_PTR_SET_VALUE(outputFileBase_, outputFileBase) };
    inline MediaConvertOutputGroupConfig& setOutputFileBase(MediaObject && outputFileBase) { DARABONBA_PTR_SET_RVALUE(outputFileBase_, outputFileBase) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline MediaConvertOutputGroupConfig& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<string> manifestName_ = nullptr;
    std::shared_ptr<MediaObject> outputFileBase_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
