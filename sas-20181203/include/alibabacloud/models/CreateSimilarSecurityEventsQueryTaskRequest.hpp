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
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(ResourceDirectoryAccountId, resourceDirectoryAccountId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(SecurityEventId, securityEventId_);
      DARABONBA_PTR_TO_JSON(SimilarEventScenarioCode, similarEventScenarioCode_);
      DARABONBA_PTR_TO_JSON(SourceIp, sourceIp_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSimilarSecurityEventsQueryTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(ResourceDirectoryAccountId, resourceDirectoryAccountId_);
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
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->resourceDirectoryAccountId_ == nullptr && this->resourceOwnerId_ == nullptr && this->securityEventId_ == nullptr && this->similarEventScenarioCode_ == nullptr && this->sourceIp_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateSimilarSecurityEventsQueryTaskRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // resourceDirectoryAccountId Field Functions 
    bool hasResourceDirectoryAccountId() const { return this->resourceDirectoryAccountId_ != nullptr;};
    void deleteResourceDirectoryAccountId() { this->resourceDirectoryAccountId_ = nullptr;};
    inline int64_t getResourceDirectoryAccountId() const { DARABONBA_PTR_GET_DEFAULT(resourceDirectoryAccountId_, 0L) };
    inline CreateSimilarSecurityEventsQueryTaskRequest& setResourceDirectoryAccountId(int64_t resourceDirectoryAccountId) { DARABONBA_PTR_SET_VALUE(resourceDirectoryAccountId_, resourceDirectoryAccountId) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline CreateSimilarSecurityEventsQueryTaskRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


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


    // sourceIp Field Functions 
    bool hasSourceIp() const { return this->sourceIp_ != nullptr;};
    void deleteSourceIp() { this->sourceIp_ = nullptr;};
    inline string getSourceIp() const { DARABONBA_PTR_GET_DEFAULT(sourceIp_, "") };
    inline CreateSimilarSecurityEventsQueryTaskRequest& setSourceIp(string sourceIp) { DARABONBA_PTR_SET_VALUE(sourceIp_, sourceIp) };


  protected:
    // The client token that is used to ensure the idempotence of the request. Different requests should use different tokens. The token supports only ASCII characters and cannot exceed 64 characters in length.
    shared_ptr<string> clientToken_ {};
    shared_ptr<int64_t> resourceDirectoryAccountId_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The ID of the security alert.
    // 
    // This parameter is required.
    shared_ptr<int64_t> securityEventId_ {};
    // The code of the alerting event that has the same type or rule hits.
    shared_ptr<string> similarEventScenarioCode_ {};
    // The IP address of the access source.
    shared_ptr<string> sourceIp_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
