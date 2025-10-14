// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STOPAVATARSESSIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_STOPAVATARSESSIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IntelligentCreation20240313
{
namespace Models
{
  class StopAvatarSessionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StopAvatarSessionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(projectId, projectId_);
      DARABONBA_PTR_TO_JSON(sessionId, sessionId_);
    };
    friend void from_json(const Darabonba::Json& j, StopAvatarSessionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(projectId, projectId_);
      DARABONBA_PTR_FROM_JSON(sessionId, sessionId_);
    };
    StopAvatarSessionRequest() = default ;
    StopAvatarSessionRequest(const StopAvatarSessionRequest &) = default ;
    StopAvatarSessionRequest(StopAvatarSessionRequest &&) = default ;
    StopAvatarSessionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StopAvatarSessionRequest() = default ;
    StopAvatarSessionRequest& operator=(const StopAvatarSessionRequest &) = default ;
    StopAvatarSessionRequest& operator=(StopAvatarSessionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->projectId_ == nullptr
        && return this->sessionId_ == nullptr; };
    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline string projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, "") };
    inline StopAvatarSessionRequest& setProjectId(string projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string sessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline StopAvatarSessionRequest& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


  protected:
    std::shared_ptr<string> projectId_ = nullptr;
    std::shared_ptr<string> sessionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IntelligentCreation20240313
#endif
