// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYAVATARPROJECTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYAVATARPROJECTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryAvatarProjectResponseBodyFrames.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IntelligentCreation20240313
{
namespace Models
{
  class QueryAvatarProjectResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryAvatarProjectResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(agentId, agentId_);
      DARABONBA_PTR_TO_JSON(errorMsg, errorMsg_);
      DARABONBA_PTR_TO_JSON(frames, frames_);
      DARABONBA_PTR_TO_JSON(projectName, projectName_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(resSpecType, resSpecType_);
      DARABONBA_PTR_TO_JSON(scaleType, scaleType_);
      DARABONBA_PTR_TO_JSON(scriptModelTag, scriptModelTag_);
      DARABONBA_PTR_TO_JSON(status, status_);
    };
    friend void from_json(const Darabonba::Json& j, QueryAvatarProjectResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(agentId, agentId_);
      DARABONBA_PTR_FROM_JSON(errorMsg, errorMsg_);
      DARABONBA_PTR_FROM_JSON(frames, frames_);
      DARABONBA_PTR_FROM_JSON(projectName, projectName_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(resSpecType, resSpecType_);
      DARABONBA_PTR_FROM_JSON(scaleType, scaleType_);
      DARABONBA_PTR_FROM_JSON(scriptModelTag, scriptModelTag_);
      DARABONBA_PTR_FROM_JSON(status, status_);
    };
    QueryAvatarProjectResponseBody() = default ;
    QueryAvatarProjectResponseBody(const QueryAvatarProjectResponseBody &) = default ;
    QueryAvatarProjectResponseBody(QueryAvatarProjectResponseBody &&) = default ;
    QueryAvatarProjectResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryAvatarProjectResponseBody() = default ;
    QueryAvatarProjectResponseBody& operator=(const QueryAvatarProjectResponseBody &) = default ;
    QueryAvatarProjectResponseBody& operator=(QueryAvatarProjectResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentId_ == nullptr
        && return this->errorMsg_ == nullptr && return this->frames_ == nullptr && return this->projectName_ == nullptr && return this->requestId_ == nullptr && return this->resSpecType_ == nullptr
        && return this->scaleType_ == nullptr && return this->scriptModelTag_ == nullptr && return this->status_ == nullptr; };
    // agentId Field Functions 
    bool hasAgentId() const { return this->agentId_ != nullptr;};
    void deleteAgentId() { this->agentId_ = nullptr;};
    inline string agentId() const { DARABONBA_PTR_GET_DEFAULT(agentId_, "") };
    inline QueryAvatarProjectResponseBody& setAgentId(string agentId) { DARABONBA_PTR_SET_VALUE(agentId_, agentId) };


    // errorMsg Field Functions 
    bool hasErrorMsg() const { return this->errorMsg_ != nullptr;};
    void deleteErrorMsg() { this->errorMsg_ = nullptr;};
    inline string errorMsg() const { DARABONBA_PTR_GET_DEFAULT(errorMsg_, "") };
    inline QueryAvatarProjectResponseBody& setErrorMsg(string errorMsg) { DARABONBA_PTR_SET_VALUE(errorMsg_, errorMsg) };


    // frames Field Functions 
    bool hasFrames() const { return this->frames_ != nullptr;};
    void deleteFrames() { this->frames_ = nullptr;};
    inline const vector<QueryAvatarProjectResponseBodyFrames> & frames() const { DARABONBA_PTR_GET_CONST(frames_, vector<QueryAvatarProjectResponseBodyFrames>) };
    inline vector<QueryAvatarProjectResponseBodyFrames> frames() { DARABONBA_PTR_GET(frames_, vector<QueryAvatarProjectResponseBodyFrames>) };
    inline QueryAvatarProjectResponseBody& setFrames(const vector<QueryAvatarProjectResponseBodyFrames> & frames) { DARABONBA_PTR_SET_VALUE(frames_, frames) };
    inline QueryAvatarProjectResponseBody& setFrames(vector<QueryAvatarProjectResponseBodyFrames> && frames) { DARABONBA_PTR_SET_RVALUE(frames_, frames) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string projectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline QueryAvatarProjectResponseBody& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryAvatarProjectResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resSpecType Field Functions 
    bool hasResSpecType() const { return this->resSpecType_ != nullptr;};
    void deleteResSpecType() { this->resSpecType_ = nullptr;};
    inline string resSpecType() const { DARABONBA_PTR_GET_DEFAULT(resSpecType_, "") };
    inline QueryAvatarProjectResponseBody& setResSpecType(string resSpecType) { DARABONBA_PTR_SET_VALUE(resSpecType_, resSpecType) };


    // scaleType Field Functions 
    bool hasScaleType() const { return this->scaleType_ != nullptr;};
    void deleteScaleType() { this->scaleType_ = nullptr;};
    inline string scaleType() const { DARABONBA_PTR_GET_DEFAULT(scaleType_, "") };
    inline QueryAvatarProjectResponseBody& setScaleType(string scaleType) { DARABONBA_PTR_SET_VALUE(scaleType_, scaleType) };


    // scriptModelTag Field Functions 
    bool hasScriptModelTag() const { return this->scriptModelTag_ != nullptr;};
    void deleteScriptModelTag() { this->scriptModelTag_ = nullptr;};
    inline string scriptModelTag() const { DARABONBA_PTR_GET_DEFAULT(scriptModelTag_, "") };
    inline QueryAvatarProjectResponseBody& setScriptModelTag(string scriptModelTag) { DARABONBA_PTR_SET_VALUE(scriptModelTag_, scriptModelTag) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline QueryAvatarProjectResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    std::shared_ptr<string> agentId_ = nullptr;
    std::shared_ptr<string> errorMsg_ = nullptr;
    std::shared_ptr<vector<QueryAvatarProjectResponseBodyFrames>> frames_ = nullptr;
    std::shared_ptr<string> projectName_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> resSpecType_ = nullptr;
    std::shared_ptr<string> scaleType_ = nullptr;
    std::shared_ptr<string> scriptModelTag_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IntelligentCreation20240313
#endif
