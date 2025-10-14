// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SAVEAVATARPROJECTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SAVEAVATARPROJECTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SaveAvatarProjectRequestFrames.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IntelligentCreation20240313
{
namespace Models
{
  class SaveAvatarProjectRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SaveAvatarProjectRequest& obj) { 
      DARABONBA_PTR_TO_JSON(agentId, agentId_);
      DARABONBA_PTR_TO_JSON(bitRate, bitRate_);
      DARABONBA_PTR_TO_JSON(frameRate, frameRate_);
      DARABONBA_PTR_TO_JSON(frames, frames_);
      DARABONBA_PTR_TO_JSON(operateType, operateType_);
      DARABONBA_PTR_TO_JSON(projectId, projectId_);
      DARABONBA_PTR_TO_JSON(projectName, projectName_);
      DARABONBA_PTR_TO_JSON(resSpecType, resSpecType_);
      DARABONBA_PTR_TO_JSON(resolution, resolution_);
      DARABONBA_PTR_TO_JSON(scaleType, scaleType_);
      DARABONBA_PTR_TO_JSON(scriptModelTag, scriptModelTag_);
      DARABONBA_PTR_TO_JSON(synchronizedDisplay, synchronizedDisplay_);
    };
    friend void from_json(const Darabonba::Json& j, SaveAvatarProjectRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(agentId, agentId_);
      DARABONBA_PTR_FROM_JSON(bitRate, bitRate_);
      DARABONBA_PTR_FROM_JSON(frameRate, frameRate_);
      DARABONBA_PTR_FROM_JSON(frames, frames_);
      DARABONBA_PTR_FROM_JSON(operateType, operateType_);
      DARABONBA_PTR_FROM_JSON(projectId, projectId_);
      DARABONBA_PTR_FROM_JSON(projectName, projectName_);
      DARABONBA_PTR_FROM_JSON(resSpecType, resSpecType_);
      DARABONBA_PTR_FROM_JSON(resolution, resolution_);
      DARABONBA_PTR_FROM_JSON(scaleType, scaleType_);
      DARABONBA_PTR_FROM_JSON(scriptModelTag, scriptModelTag_);
      DARABONBA_PTR_FROM_JSON(synchronizedDisplay, synchronizedDisplay_);
    };
    SaveAvatarProjectRequest() = default ;
    SaveAvatarProjectRequest(const SaveAvatarProjectRequest &) = default ;
    SaveAvatarProjectRequest(SaveAvatarProjectRequest &&) = default ;
    SaveAvatarProjectRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SaveAvatarProjectRequest() = default ;
    SaveAvatarProjectRequest& operator=(const SaveAvatarProjectRequest &) = default ;
    SaveAvatarProjectRequest& operator=(SaveAvatarProjectRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentId_ == nullptr
        && return this->bitRate_ == nullptr && return this->frameRate_ == nullptr && return this->frames_ == nullptr && return this->operateType_ == nullptr && return this->projectId_ == nullptr
        && return this->projectName_ == nullptr && return this->resSpecType_ == nullptr && return this->resolution_ == nullptr && return this->scaleType_ == nullptr && return this->scriptModelTag_ == nullptr
        && return this->synchronizedDisplay_ == nullptr; };
    // agentId Field Functions 
    bool hasAgentId() const { return this->agentId_ != nullptr;};
    void deleteAgentId() { this->agentId_ = nullptr;};
    inline string agentId() const { DARABONBA_PTR_GET_DEFAULT(agentId_, "") };
    inline SaveAvatarProjectRequest& setAgentId(string agentId) { DARABONBA_PTR_SET_VALUE(agentId_, agentId) };


    // bitRate Field Functions 
    bool hasBitRate() const { return this->bitRate_ != nullptr;};
    void deleteBitRate() { this->bitRate_ = nullptr;};
    inline string bitRate() const { DARABONBA_PTR_GET_DEFAULT(bitRate_, "") };
    inline SaveAvatarProjectRequest& setBitRate(string bitRate) { DARABONBA_PTR_SET_VALUE(bitRate_, bitRate) };


    // frameRate Field Functions 
    bool hasFrameRate() const { return this->frameRate_ != nullptr;};
    void deleteFrameRate() { this->frameRate_ = nullptr;};
    inline string frameRate() const { DARABONBA_PTR_GET_DEFAULT(frameRate_, "") };
    inline SaveAvatarProjectRequest& setFrameRate(string frameRate) { DARABONBA_PTR_SET_VALUE(frameRate_, frameRate) };


    // frames Field Functions 
    bool hasFrames() const { return this->frames_ != nullptr;};
    void deleteFrames() { this->frames_ = nullptr;};
    inline const vector<SaveAvatarProjectRequestFrames> & frames() const { DARABONBA_PTR_GET_CONST(frames_, vector<SaveAvatarProjectRequestFrames>) };
    inline vector<SaveAvatarProjectRequestFrames> frames() { DARABONBA_PTR_GET(frames_, vector<SaveAvatarProjectRequestFrames>) };
    inline SaveAvatarProjectRequest& setFrames(const vector<SaveAvatarProjectRequestFrames> & frames) { DARABONBA_PTR_SET_VALUE(frames_, frames) };
    inline SaveAvatarProjectRequest& setFrames(vector<SaveAvatarProjectRequestFrames> && frames) { DARABONBA_PTR_SET_RVALUE(frames_, frames) };


    // operateType Field Functions 
    bool hasOperateType() const { return this->operateType_ != nullptr;};
    void deleteOperateType() { this->operateType_ = nullptr;};
    inline string operateType() const { DARABONBA_PTR_GET_DEFAULT(operateType_, "") };
    inline SaveAvatarProjectRequest& setOperateType(string operateType) { DARABONBA_PTR_SET_VALUE(operateType_, operateType) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline string projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, "") };
    inline SaveAvatarProjectRequest& setProjectId(string projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string projectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline SaveAvatarProjectRequest& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // resSpecType Field Functions 
    bool hasResSpecType() const { return this->resSpecType_ != nullptr;};
    void deleteResSpecType() { this->resSpecType_ = nullptr;};
    inline string resSpecType() const { DARABONBA_PTR_GET_DEFAULT(resSpecType_, "") };
    inline SaveAvatarProjectRequest& setResSpecType(string resSpecType) { DARABONBA_PTR_SET_VALUE(resSpecType_, resSpecType) };


    // resolution Field Functions 
    bool hasResolution() const { return this->resolution_ != nullptr;};
    void deleteResolution() { this->resolution_ = nullptr;};
    inline string resolution() const { DARABONBA_PTR_GET_DEFAULT(resolution_, "") };
    inline SaveAvatarProjectRequest& setResolution(string resolution) { DARABONBA_PTR_SET_VALUE(resolution_, resolution) };


    // scaleType Field Functions 
    bool hasScaleType() const { return this->scaleType_ != nullptr;};
    void deleteScaleType() { this->scaleType_ = nullptr;};
    inline string scaleType() const { DARABONBA_PTR_GET_DEFAULT(scaleType_, "") };
    inline SaveAvatarProjectRequest& setScaleType(string scaleType) { DARABONBA_PTR_SET_VALUE(scaleType_, scaleType) };


    // scriptModelTag Field Functions 
    bool hasScriptModelTag() const { return this->scriptModelTag_ != nullptr;};
    void deleteScriptModelTag() { this->scriptModelTag_ = nullptr;};
    inline string scriptModelTag() const { DARABONBA_PTR_GET_DEFAULT(scriptModelTag_, "") };
    inline SaveAvatarProjectRequest& setScriptModelTag(string scriptModelTag) { DARABONBA_PTR_SET_VALUE(scriptModelTag_, scriptModelTag) };


    // synchronizedDisplay Field Functions 
    bool hasSynchronizedDisplay() const { return this->synchronizedDisplay_ != nullptr;};
    void deleteSynchronizedDisplay() { this->synchronizedDisplay_ = nullptr;};
    inline string synchronizedDisplay() const { DARABONBA_PTR_GET_DEFAULT(synchronizedDisplay_, "") };
    inline SaveAvatarProjectRequest& setSynchronizedDisplay(string synchronizedDisplay) { DARABONBA_PTR_SET_VALUE(synchronizedDisplay_, synchronizedDisplay) };


  protected:
    std::shared_ptr<string> agentId_ = nullptr;
    std::shared_ptr<string> bitRate_ = nullptr;
    std::shared_ptr<string> frameRate_ = nullptr;
    std::shared_ptr<vector<SaveAvatarProjectRequestFrames>> frames_ = nullptr;
    std::shared_ptr<string> operateType_ = nullptr;
    std::shared_ptr<string> projectId_ = nullptr;
    std::shared_ptr<string> projectName_ = nullptr;
    std::shared_ptr<string> resSpecType_ = nullptr;
    std::shared_ptr<string> resolution_ = nullptr;
    std::shared_ptr<string> scaleType_ = nullptr;
    std::shared_ptr<string> scriptModelTag_ = nullptr;
    std::shared_ptr<string> synchronizedDisplay_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IntelligentCreation20240313
#endif
