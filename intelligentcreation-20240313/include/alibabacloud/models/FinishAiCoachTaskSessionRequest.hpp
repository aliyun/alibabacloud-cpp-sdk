// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FINISHAICOACHTASKSESSIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_FINISHAICOACHTASKSESSIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IntelligentCreation20240313
{
namespace Models
{
  class FinishAICoachTaskSessionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FinishAICoachTaskSessionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(sessionId, sessionId_);
      DARABONBA_PTR_TO_JSON(uid, uid_);
    };
    friend void from_json(const Darabonba::Json& j, FinishAICoachTaskSessionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(sessionId, sessionId_);
      DARABONBA_PTR_FROM_JSON(uid, uid_);
    };
    FinishAICoachTaskSessionRequest() = default ;
    FinishAICoachTaskSessionRequest(const FinishAICoachTaskSessionRequest &) = default ;
    FinishAICoachTaskSessionRequest(FinishAICoachTaskSessionRequest &&) = default ;
    FinishAICoachTaskSessionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FinishAICoachTaskSessionRequest() = default ;
    FinishAICoachTaskSessionRequest& operator=(const FinishAICoachTaskSessionRequest &) = default ;
    FinishAICoachTaskSessionRequest& operator=(FinishAICoachTaskSessionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->sessionId_ == nullptr
        && return this->uid_ == nullptr; };
    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string sessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline FinishAICoachTaskSessionRequest& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    // uid Field Functions 
    bool hasUid() const { return this->uid_ != nullptr;};
    void deleteUid() { this->uid_ = nullptr;};
    inline string uid() const { DARABONBA_PTR_GET_DEFAULT(uid_, "") };
    inline FinishAICoachTaskSessionRequest& setUid(string uid) { DARABONBA_PTR_SET_VALUE(uid_, uid) };


  protected:
    std::shared_ptr<string> sessionId_ = nullptr;
    std::shared_ptr<string> uid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IntelligentCreation20240313
#endif
