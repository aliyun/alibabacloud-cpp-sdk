// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESIMILARSECURITYEVENTSQUERYTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESIMILARSECURITYEVENTSQUERYTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class CreateSimilarSecurityEventsQueryTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSimilarSecurityEventsQueryTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(SecurityEventId, securityEventId_);
      DARABONBA_PTR_TO_JSON(SimilarEventScenarioCode, similarEventScenarioCode_);
      DARABONBA_PTR_TO_JSON(SourceIp, sourceIp_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSimilarSecurityEventsQueryTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(SecurityEventId, securityEventId_);
      DARABONBA_PTR_FROM_JSON(SimilarEventScenarioCode, similarEventScenarioCode_);
      DARABONBA_PTR_FROM_JSON(SourceIp, sourceIp_);
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
    virtual bool empty() const override { return this->resourceOwnerId_ == nullptr
        && return this->securityEventId_ == nullptr && return this->similarEventScenarioCode_ == nullptr && return this->sourceIp_ == nullptr; };
    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline CreateSimilarSecurityEventsQueryTaskRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // securityEventId Field Functions 
    bool hasSecurityEventId() const { return this->securityEventId_ != nullptr;};
    void deleteSecurityEventId() { this->securityEventId_ = nullptr;};
    inline int64_t securityEventId() const { DARABONBA_PTR_GET_DEFAULT(securityEventId_, 0L) };
    inline CreateSimilarSecurityEventsQueryTaskRequest& setSecurityEventId(int64_t securityEventId) { DARABONBA_PTR_SET_VALUE(securityEventId_, securityEventId) };


    // similarEventScenarioCode Field Functions 
    bool hasSimilarEventScenarioCode() const { return this->similarEventScenarioCode_ != nullptr;};
    void deleteSimilarEventScenarioCode() { this->similarEventScenarioCode_ = nullptr;};
    inline string similarEventScenarioCode() const { DARABONBA_PTR_GET_DEFAULT(similarEventScenarioCode_, "") };
    inline CreateSimilarSecurityEventsQueryTaskRequest& setSimilarEventScenarioCode(string similarEventScenarioCode) { DARABONBA_PTR_SET_VALUE(similarEventScenarioCode_, similarEventScenarioCode) };


    // sourceIp Field Functions 
    bool hasSourceIp() const { return this->sourceIp_ != nullptr;};
    void deleteSourceIp() { this->sourceIp_ = nullptr;};
    inline string sourceIp() const { DARABONBA_PTR_GET_DEFAULT(sourceIp_, "") };
    inline CreateSimilarSecurityEventsQueryTaskRequest& setSourceIp(string sourceIp) { DARABONBA_PTR_SET_VALUE(sourceIp_, sourceIp) };


  protected:
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // The ID of the alert event.
    // 
    // >  You must specify at least one of the SecurityEventId and SimilarEventScenarioCode parameters.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> securityEventId_ = nullptr;
    // The codes of alert events that are triggered by the same rule or of the same alert type.
    // 
    // >  You must specify at least one of the SecurityEventId and SimilarEventScenarioCode parameters.
    std::shared_ptr<string> similarEventScenarioCode_ = nullptr;
    // The source IP address of the request.
    std::shared_ptr<string> sourceIp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
