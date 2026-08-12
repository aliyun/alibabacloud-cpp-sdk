// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEVOLUMEINPUT_HPP_
#define ALIBABACLOUD_MODELS_CREATEVOLUMEINPUT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/AgenticFSVolumeConfig.hpp>
#include <alibabacloud/models/OSSVolumeConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FCSandbox20260509
{
namespace Models
{
  class CreateVolumeInput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateVolumeInput& obj) { 
      DARABONBA_PTR_TO_JSON(agenticFSVolumeConfig, agenticFSVolumeConfig_);
      DARABONBA_PTR_TO_JSON(ossVolumeConfig, ossVolumeConfig_);
      DARABONBA_PTR_TO_JSON(teamID, teamID_);
      DARABONBA_PTR_TO_JSON(volumeName, volumeName_);
    };
    friend void from_json(const Darabonba::Json& j, CreateVolumeInput& obj) { 
      DARABONBA_PTR_FROM_JSON(agenticFSVolumeConfig, agenticFSVolumeConfig_);
      DARABONBA_PTR_FROM_JSON(ossVolumeConfig, ossVolumeConfig_);
      DARABONBA_PTR_FROM_JSON(teamID, teamID_);
      DARABONBA_PTR_FROM_JSON(volumeName, volumeName_);
    };
    CreateVolumeInput() = default ;
    CreateVolumeInput(const CreateVolumeInput &) = default ;
    CreateVolumeInput(CreateVolumeInput &&) = default ;
    CreateVolumeInput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateVolumeInput() = default ;
    CreateVolumeInput& operator=(const CreateVolumeInput &) = default ;
    CreateVolumeInput& operator=(CreateVolumeInput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agenticFSVolumeConfig_ == nullptr
        && this->ossVolumeConfig_ == nullptr && this->teamID_ == nullptr && this->volumeName_ == nullptr; };
    // agenticFSVolumeConfig Field Functions 
    bool hasAgenticFSVolumeConfig() const { return this->agenticFSVolumeConfig_ != nullptr;};
    void deleteAgenticFSVolumeConfig() { this->agenticFSVolumeConfig_ = nullptr;};
    inline const AgenticFSVolumeConfig & getAgenticFSVolumeConfig() const { DARABONBA_PTR_GET_CONST(agenticFSVolumeConfig_, AgenticFSVolumeConfig) };
    inline AgenticFSVolumeConfig getAgenticFSVolumeConfig() { DARABONBA_PTR_GET(agenticFSVolumeConfig_, AgenticFSVolumeConfig) };
    inline CreateVolumeInput& setAgenticFSVolumeConfig(const AgenticFSVolumeConfig & agenticFSVolumeConfig) { DARABONBA_PTR_SET_VALUE(agenticFSVolumeConfig_, agenticFSVolumeConfig) };
    inline CreateVolumeInput& setAgenticFSVolumeConfig(AgenticFSVolumeConfig && agenticFSVolumeConfig) { DARABONBA_PTR_SET_RVALUE(agenticFSVolumeConfig_, agenticFSVolumeConfig) };


    // ossVolumeConfig Field Functions 
    bool hasOssVolumeConfig() const { return this->ossVolumeConfig_ != nullptr;};
    void deleteOssVolumeConfig() { this->ossVolumeConfig_ = nullptr;};
    inline const OSSVolumeConfig & getOssVolumeConfig() const { DARABONBA_PTR_GET_CONST(ossVolumeConfig_, OSSVolumeConfig) };
    inline OSSVolumeConfig getOssVolumeConfig() { DARABONBA_PTR_GET(ossVolumeConfig_, OSSVolumeConfig) };
    inline CreateVolumeInput& setOssVolumeConfig(const OSSVolumeConfig & ossVolumeConfig) { DARABONBA_PTR_SET_VALUE(ossVolumeConfig_, ossVolumeConfig) };
    inline CreateVolumeInput& setOssVolumeConfig(OSSVolumeConfig && ossVolumeConfig) { DARABONBA_PTR_SET_RVALUE(ossVolumeConfig_, ossVolumeConfig) };


    // teamID Field Functions 
    bool hasTeamID() const { return this->teamID_ != nullptr;};
    void deleteTeamID() { this->teamID_ = nullptr;};
    inline string getTeamID() const { DARABONBA_PTR_GET_DEFAULT(teamID_, "") };
    inline CreateVolumeInput& setTeamID(string teamID) { DARABONBA_PTR_SET_VALUE(teamID_, teamID) };


    // volumeName Field Functions 
    bool hasVolumeName() const { return this->volumeName_ != nullptr;};
    void deleteVolumeName() { this->volumeName_ = nullptr;};
    inline string getVolumeName() const { DARABONBA_PTR_GET_DEFAULT(volumeName_, "") };
    inline CreateVolumeInput& setVolumeName(string volumeName) { DARABONBA_PTR_SET_VALUE(volumeName_, volumeName) };


  protected:
    shared_ptr<AgenticFSVolumeConfig> agenticFSVolumeConfig_ {};
    shared_ptr<OSSVolumeConfig> ossVolumeConfig_ {};
    shared_ptr<string> teamID_ {};
    shared_ptr<string> volumeName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FCSandbox20260509
#endif
