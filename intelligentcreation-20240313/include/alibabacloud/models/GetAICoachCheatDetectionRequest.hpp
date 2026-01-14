// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAICOACHCHEATDETECTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETAICOACHCHEATDETECTIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IntelligentCreation20240313
{
namespace Models
{
  class GetAICoachCheatDetectionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAICoachCheatDetectionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(sessionId, sessionId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAICoachCheatDetectionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(sessionId, sessionId_);
    };
    GetAICoachCheatDetectionRequest() = default ;
    GetAICoachCheatDetectionRequest(const GetAICoachCheatDetectionRequest &) = default ;
    GetAICoachCheatDetectionRequest(GetAICoachCheatDetectionRequest &&) = default ;
    GetAICoachCheatDetectionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAICoachCheatDetectionRequest() = default ;
    GetAICoachCheatDetectionRequest& operator=(const GetAICoachCheatDetectionRequest &) = default ;
    GetAICoachCheatDetectionRequest& operator=(GetAICoachCheatDetectionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->sessionId_ == nullptr; };
    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string getSessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline GetAICoachCheatDetectionRequest& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


  protected:
    shared_ptr<string> sessionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IntelligentCreation20240313
#endif
