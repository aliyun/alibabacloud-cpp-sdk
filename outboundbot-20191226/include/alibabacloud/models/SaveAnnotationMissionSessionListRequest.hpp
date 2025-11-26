// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SAVEANNOTATIONMISSIONSESSIONLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SAVEANNOTATIONMISSIONSESSIONLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SaveAnnotationMissionSessionListRequestAnnotationMissionSessionList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class SaveAnnotationMissionSessionListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SaveAnnotationMissionSessionListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentId, agentId_);
      DARABONBA_PTR_TO_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_TO_JSON(AnnotationMissionDataSourceType, annotationMissionDataSourceType_);
      DARABONBA_PTR_TO_JSON(AnnotationMissionSessionList, annotationMissionSessionList_);
      DARABONBA_PTR_TO_JSON(AnnotationMissionSessionListJsonString, annotationMissionSessionListJsonString_);
      DARABONBA_PTR_TO_JSON(Environment, environment_);
      DARABONBA_PTR_TO_JSON(UserNick, userNick_);
    };
    friend void from_json(const Darabonba::Json& j, SaveAnnotationMissionSessionListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentId, agentId_);
      DARABONBA_PTR_FROM_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_FROM_JSON(AnnotationMissionDataSourceType, annotationMissionDataSourceType_);
      DARABONBA_PTR_FROM_JSON(AnnotationMissionSessionList, annotationMissionSessionList_);
      DARABONBA_PTR_FROM_JSON(AnnotationMissionSessionListJsonString, annotationMissionSessionListJsonString_);
      DARABONBA_PTR_FROM_JSON(Environment, environment_);
      DARABONBA_PTR_FROM_JSON(UserNick, userNick_);
    };
    SaveAnnotationMissionSessionListRequest() = default ;
    SaveAnnotationMissionSessionListRequest(const SaveAnnotationMissionSessionListRequest &) = default ;
    SaveAnnotationMissionSessionListRequest(SaveAnnotationMissionSessionListRequest &&) = default ;
    SaveAnnotationMissionSessionListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SaveAnnotationMissionSessionListRequest() = default ;
    SaveAnnotationMissionSessionListRequest& operator=(const SaveAnnotationMissionSessionListRequest &) = default ;
    SaveAnnotationMissionSessionListRequest& operator=(SaveAnnotationMissionSessionListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentId_ == nullptr
        && return this->agentKey_ == nullptr && return this->annotationMissionDataSourceType_ == nullptr && return this->annotationMissionSessionList_ == nullptr && return this->annotationMissionSessionListJsonString_ == nullptr && return this->environment_ == nullptr
        && return this->userNick_ == nullptr; };
    // agentId Field Functions 
    bool hasAgentId() const { return this->agentId_ != nullptr;};
    void deleteAgentId() { this->agentId_ = nullptr;};
    inline string agentId() const { DARABONBA_PTR_GET_DEFAULT(agentId_, "") };
    inline SaveAnnotationMissionSessionListRequest& setAgentId(string agentId) { DARABONBA_PTR_SET_VALUE(agentId_, agentId) };


    // agentKey Field Functions 
    bool hasAgentKey() const { return this->agentKey_ != nullptr;};
    void deleteAgentKey() { this->agentKey_ = nullptr;};
    inline string agentKey() const { DARABONBA_PTR_GET_DEFAULT(agentKey_, "") };
    inline SaveAnnotationMissionSessionListRequest& setAgentKey(string agentKey) { DARABONBA_PTR_SET_VALUE(agentKey_, agentKey) };


    // annotationMissionDataSourceType Field Functions 
    bool hasAnnotationMissionDataSourceType() const { return this->annotationMissionDataSourceType_ != nullptr;};
    void deleteAnnotationMissionDataSourceType() { this->annotationMissionDataSourceType_ = nullptr;};
    inline int64_t annotationMissionDataSourceType() const { DARABONBA_PTR_GET_DEFAULT(annotationMissionDataSourceType_, 0L) };
    inline SaveAnnotationMissionSessionListRequest& setAnnotationMissionDataSourceType(int64_t annotationMissionDataSourceType) { DARABONBA_PTR_SET_VALUE(annotationMissionDataSourceType_, annotationMissionDataSourceType) };


    // annotationMissionSessionList Field Functions 
    bool hasAnnotationMissionSessionList() const { return this->annotationMissionSessionList_ != nullptr;};
    void deleteAnnotationMissionSessionList() { this->annotationMissionSessionList_ = nullptr;};
    inline const vector<SaveAnnotationMissionSessionListRequestAnnotationMissionSessionList> & annotationMissionSessionList() const { DARABONBA_PTR_GET_CONST(annotationMissionSessionList_, vector<SaveAnnotationMissionSessionListRequestAnnotationMissionSessionList>) };
    inline vector<SaveAnnotationMissionSessionListRequestAnnotationMissionSessionList> annotationMissionSessionList() { DARABONBA_PTR_GET(annotationMissionSessionList_, vector<SaveAnnotationMissionSessionListRequestAnnotationMissionSessionList>) };
    inline SaveAnnotationMissionSessionListRequest& setAnnotationMissionSessionList(const vector<SaveAnnotationMissionSessionListRequestAnnotationMissionSessionList> & annotationMissionSessionList) { DARABONBA_PTR_SET_VALUE(annotationMissionSessionList_, annotationMissionSessionList) };
    inline SaveAnnotationMissionSessionListRequest& setAnnotationMissionSessionList(vector<SaveAnnotationMissionSessionListRequestAnnotationMissionSessionList> && annotationMissionSessionList) { DARABONBA_PTR_SET_RVALUE(annotationMissionSessionList_, annotationMissionSessionList) };


    // annotationMissionSessionListJsonString Field Functions 
    bool hasAnnotationMissionSessionListJsonString() const { return this->annotationMissionSessionListJsonString_ != nullptr;};
    void deleteAnnotationMissionSessionListJsonString() { this->annotationMissionSessionListJsonString_ = nullptr;};
    inline string annotationMissionSessionListJsonString() const { DARABONBA_PTR_GET_DEFAULT(annotationMissionSessionListJsonString_, "") };
    inline SaveAnnotationMissionSessionListRequest& setAnnotationMissionSessionListJsonString(string annotationMissionSessionListJsonString) { DARABONBA_PTR_SET_VALUE(annotationMissionSessionListJsonString_, annotationMissionSessionListJsonString) };


    // environment Field Functions 
    bool hasEnvironment() const { return this->environment_ != nullptr;};
    void deleteEnvironment() { this->environment_ = nullptr;};
    inline int64_t environment() const { DARABONBA_PTR_GET_DEFAULT(environment_, 0L) };
    inline SaveAnnotationMissionSessionListRequest& setEnvironment(int64_t environment) { DARABONBA_PTR_SET_VALUE(environment_, environment) };


    // userNick Field Functions 
    bool hasUserNick() const { return this->userNick_ != nullptr;};
    void deleteUserNick() { this->userNick_ = nullptr;};
    inline string userNick() const { DARABONBA_PTR_GET_DEFAULT(userNick_, "") };
    inline SaveAnnotationMissionSessionListRequest& setUserNick(string userNick) { DARABONBA_PTR_SET_VALUE(userNick_, userNick) };


  protected:
    std::shared_ptr<string> agentId_ = nullptr;
    std::shared_ptr<string> agentKey_ = nullptr;
    std::shared_ptr<int64_t> annotationMissionDataSourceType_ = nullptr;
    std::shared_ptr<vector<SaveAnnotationMissionSessionListRequestAnnotationMissionSessionList>> annotationMissionSessionList_ = nullptr;
    std::shared_ptr<string> annotationMissionSessionListJsonString_ = nullptr;
    std::shared_ptr<int64_t> environment_ = nullptr;
    std::shared_ptr<string> userNick_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
