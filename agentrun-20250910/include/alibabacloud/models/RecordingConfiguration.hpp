// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RECORDINGCONFIGURATION_HPP_
#define ALIBABACLOUD_MODELS_RECORDINGCONFIGURATION_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/OssConfiguration.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class RecordingConfiguration : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RecordingConfiguration& obj) { 
      DARABONBA_PTR_TO_JSON(enabled, enabled_);
      DARABONBA_PTR_TO_JSON(ossLocation, ossLocation_);
    };
    friend void from_json(const Darabonba::Json& j, RecordingConfiguration& obj) { 
      DARABONBA_PTR_FROM_JSON(enabled, enabled_);
      DARABONBA_PTR_FROM_JSON(ossLocation, ossLocation_);
    };
    RecordingConfiguration() = default ;
    RecordingConfiguration(const RecordingConfiguration &) = default ;
    RecordingConfiguration(RecordingConfiguration &&) = default ;
    RecordingConfiguration(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RecordingConfiguration() = default ;
    RecordingConfiguration& operator=(const RecordingConfiguration &) = default ;
    RecordingConfiguration& operator=(RecordingConfiguration &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->enabled_ == nullptr
        && this->ossLocation_ == nullptr; };
    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
    inline RecordingConfiguration& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    // ossLocation Field Functions 
    bool hasOssLocation() const { return this->ossLocation_ != nullptr;};
    void deleteOssLocation() { this->ossLocation_ = nullptr;};
    inline const OssConfiguration & getOssLocation() const { DARABONBA_PTR_GET_CONST(ossLocation_, OssConfiguration) };
    inline OssConfiguration getOssLocation() { DARABONBA_PTR_GET(ossLocation_, OssConfiguration) };
    inline RecordingConfiguration& setOssLocation(const OssConfiguration & ossLocation) { DARABONBA_PTR_SET_VALUE(ossLocation_, ossLocation) };
    inline RecordingConfiguration& setOssLocation(OssConfiguration && ossLocation) { DARABONBA_PTR_SET_RVALUE(ossLocation_, ossLocation) };


  protected:
    // 是否启用录制
    // 
    // This parameter is required.
    shared_ptr<bool> enabled_ {};
    shared_ptr<OssConfiguration> ossLocation_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
