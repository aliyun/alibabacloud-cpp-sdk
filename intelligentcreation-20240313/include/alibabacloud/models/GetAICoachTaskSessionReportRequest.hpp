// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAICOACHTASKSESSIONREPORTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETAICOACHTASKSESSIONREPORTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IntelligentCreation20240313
{
namespace Models
{
  class GetAICoachTaskSessionReportRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAICoachTaskSessionReportRequest& obj) { 
      DARABONBA_PTR_TO_JSON(sessionId, sessionId_);
      DARABONBA_PTR_TO_JSON(uid, uid_);
    };
    friend void from_json(const Darabonba::Json& j, GetAICoachTaskSessionReportRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(sessionId, sessionId_);
      DARABONBA_PTR_FROM_JSON(uid, uid_);
    };
    GetAICoachTaskSessionReportRequest() = default ;
    GetAICoachTaskSessionReportRequest(const GetAICoachTaskSessionReportRequest &) = default ;
    GetAICoachTaskSessionReportRequest(GetAICoachTaskSessionReportRequest &&) = default ;
    GetAICoachTaskSessionReportRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAICoachTaskSessionReportRequest() = default ;
    GetAICoachTaskSessionReportRequest& operator=(const GetAICoachTaskSessionReportRequest &) = default ;
    GetAICoachTaskSessionReportRequest& operator=(GetAICoachTaskSessionReportRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->sessionId_ == nullptr
        && this->uid_ == nullptr; };
    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string getSessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline GetAICoachTaskSessionReportRequest& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    // uid Field Functions 
    bool hasUid() const { return this->uid_ != nullptr;};
    void deleteUid() { this->uid_ = nullptr;};
    inline string getUid() const { DARABONBA_PTR_GET_DEFAULT(uid_, "") };
    inline GetAICoachTaskSessionReportRequest& setUid(string uid) { DARABONBA_PTR_SET_VALUE(uid_, uid) };


  protected:
    shared_ptr<string> sessionId_ {};
    shared_ptr<string> uid_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IntelligentCreation20240313
#endif
