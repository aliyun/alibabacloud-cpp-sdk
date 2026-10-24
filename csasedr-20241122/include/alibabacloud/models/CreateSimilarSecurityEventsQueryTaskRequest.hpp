// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESIMILARSECURITYEVENTSQUERYTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESIMILARSECURITYEVENTSQUERYTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CsasEdr20241122
{
namespace Models
{
  class CreateSimilarSecurityEventsQueryTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSimilarSecurityEventsQueryTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(SecurityEventId, securityEventId_);
      DARABONBA_PTR_TO_JSON(SimilarEventScenarioCode, similarEventScenarioCode_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSimilarSecurityEventsQueryTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(SecurityEventId, securityEventId_);
      DARABONBA_PTR_FROM_JSON(SimilarEventScenarioCode, similarEventScenarioCode_);
    };
    CreateSimilarSecurityEventsQueryTaskRequest() = default ;
    CreateSimilarSecurityEventsQueryTaskRequest(const CreateSimilarSecurityEventsQueryTaskRequest &) = default ;
    CreateSimilarSecurityEventsQueryTaskRequest(CreateSimilarSecurityEventsQueryTaskRequest &&) = default ;
    CreateSimilarSecurityEventsQueryTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSimilarSecurityEventsQueryTaskRequest() = default ;
    CreateSimilarSecurityEventsQueryTaskRequest& operator=(const CreateSimilarSecurityEventsQueryTaskRequest &) = default ;
    CreateSimilarSecurityEventsQueryTaskRequest& operator=(CreateSimilarSecurityEventsQueryTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->securityEventId_ == nullptr
        && this->similarEventScenarioCode_ == nullptr; };
    // securityEventId Field Functions 
    bool hasSecurityEventId() const { return this->securityEventId_ != nullptr;};
    void deleteSecurityEventId() { this->securityEventId_ = nullptr;};
    inline int64_t getSecurityEventId() const { DARABONBA_PTR_GET_DEFAULT(securityEventId_, 0L) };
    inline CreateSimilarSecurityEventsQueryTaskRequest& setSecurityEventId(int64_t securityEventId) { DARABONBA_PTR_SET_VALUE(securityEventId_, securityEventId) };


    // similarEventScenarioCode Field Functions 
    bool hasSimilarEventScenarioCode() const { return this->similarEventScenarioCode_ != nullptr;};
    void deleteSimilarEventScenarioCode() { this->similarEventScenarioCode_ = nullptr;};
    inline string getSimilarEventScenarioCode() const { DARABONBA_PTR_GET_DEFAULT(similarEventScenarioCode_, "") };
    inline CreateSimilarSecurityEventsQueryTaskRequest& setSimilarEventScenarioCode(string similarEventScenarioCode) { DARABONBA_PTR_SET_VALUE(similarEventScenarioCode_, similarEventScenarioCode) };


  protected:
    // The ID of the alert event.
    // 
    // This parameter is required.
    shared_ptr<int64_t> securityEventId_ {};
    // The scenario code of alerting events that are of the same type or have the same rule hits.
    shared_ptr<string> similarEventScenarioCode_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CsasEdr20241122
#endif
