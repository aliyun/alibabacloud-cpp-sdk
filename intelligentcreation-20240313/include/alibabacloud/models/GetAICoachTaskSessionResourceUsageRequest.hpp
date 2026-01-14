// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAICOACHTASKSESSIONRESOURCEUSAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETAICOACHTASKSESSIONRESOURCEUSAGEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IntelligentCreation20240313
{
namespace Models
{
  class GetAICoachTaskSessionResourceUsageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAICoachTaskSessionResourceUsageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(sessionId, sessionId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAICoachTaskSessionResourceUsageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(sessionId, sessionId_);
    };
    GetAICoachTaskSessionResourceUsageRequest() = default ;
    GetAICoachTaskSessionResourceUsageRequest(const GetAICoachTaskSessionResourceUsageRequest &) = default ;
    GetAICoachTaskSessionResourceUsageRequest(GetAICoachTaskSessionResourceUsageRequest &&) = default ;
    GetAICoachTaskSessionResourceUsageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAICoachTaskSessionResourceUsageRequest() = default ;
    GetAICoachTaskSessionResourceUsageRequest& operator=(const GetAICoachTaskSessionResourceUsageRequest &) = default ;
    GetAICoachTaskSessionResourceUsageRequest& operator=(GetAICoachTaskSessionResourceUsageRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->sessionId_ == nullptr; };
    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string getSessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline GetAICoachTaskSessionResourceUsageRequest& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


  protected:
    shared_ptr<string> sessionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IntelligentCreation20240313
#endif
