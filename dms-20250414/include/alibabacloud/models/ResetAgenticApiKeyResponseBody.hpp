// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RESETAGENTICAPIKEYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_RESETAGENTICAPIKEYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dms20250414
{
namespace Models
{
  class ResetAgenticApiKeyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ResetAgenticApiKeyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ResetAgenticApiKeyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ResetAgenticApiKeyResponseBody() = default ;
    ResetAgenticApiKeyResponseBody(const ResetAgenticApiKeyResponseBody &) = default ;
    ResetAgenticApiKeyResponseBody(ResetAgenticApiKeyResponseBody &&) = default ;
    ResetAgenticApiKeyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ResetAgenticApiKeyResponseBody() = default ;
    ResetAgenticApiKeyResponseBody& operator=(const ResetAgenticApiKeyResponseBody &) = default ;
    ResetAgenticApiKeyResponseBody& operator=(ResetAgenticApiKeyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AgentId, agentId_);
        DARABONBA_PTR_TO_JSON(AgentName, agentName_);
        DARABONBA_PTR_TO_JSON(AgentType, agentType_);
        DARABONBA_PTR_TO_JSON(CreatedAt, createdAt_);
        DARABONBA_PTR_TO_JSON(CreatorId, creatorId_);
        DARABONBA_PTR_TO_JSON(CreatorName, creatorName_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(IsRevoked, isRevoked_);
        DARABONBA_PTR_TO_JSON(KeyPrefix, keyPrefix_);
        DARABONBA_PTR_TO_JSON(LastUsedTime, lastUsedTime_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Secret, secret_);
        DARABONBA_PTR_TO_JSON(Source, source_);
        DARABONBA_PTR_TO_JSON(Warning, warning_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AgentId, agentId_);
        DARABONBA_PTR_FROM_JSON(AgentName, agentName_);
        DARABONBA_PTR_FROM_JSON(AgentType, agentType_);
        DARABONBA_PTR_FROM_JSON(CreatedAt, createdAt_);
        DARABONBA_PTR_FROM_JSON(CreatorId, creatorId_);
        DARABONBA_PTR_FROM_JSON(CreatorName, creatorName_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(IsRevoked, isRevoked_);
        DARABONBA_PTR_FROM_JSON(KeyPrefix, keyPrefix_);
        DARABONBA_PTR_FROM_JSON(LastUsedTime, lastUsedTime_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Secret, secret_);
        DARABONBA_PTR_FROM_JSON(Source, source_);
        DARABONBA_PTR_FROM_JSON(Warning, warning_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->agentId_ == nullptr
        && this->agentName_ == nullptr && this->agentType_ == nullptr && this->createdAt_ == nullptr && this->creatorId_ == nullptr && this->creatorName_ == nullptr
        && this->description_ == nullptr && this->expireTime_ == nullptr && this->id_ == nullptr && this->isRevoked_ == nullptr && this->keyPrefix_ == nullptr
        && this->lastUsedTime_ == nullptr && this->name_ == nullptr && this->secret_ == nullptr && this->source_ == nullptr && this->warning_ == nullptr; };
      // agentId Field Functions 
      bool hasAgentId() const { return this->agentId_ != nullptr;};
      void deleteAgentId() { this->agentId_ = nullptr;};
      inline string getAgentId() const { DARABONBA_PTR_GET_DEFAULT(agentId_, "") };
      inline Data& setAgentId(string agentId) { DARABONBA_PTR_SET_VALUE(agentId_, agentId) };


      // agentName Field Functions 
      bool hasAgentName() const { return this->agentName_ != nullptr;};
      void deleteAgentName() { this->agentName_ = nullptr;};
      inline string getAgentName() const { DARABONBA_PTR_GET_DEFAULT(agentName_, "") };
      inline Data& setAgentName(string agentName) { DARABONBA_PTR_SET_VALUE(agentName_, agentName) };


      // agentType Field Functions 
      bool hasAgentType() const { return this->agentType_ != nullptr;};
      void deleteAgentType() { this->agentType_ = nullptr;};
      inline string getAgentType() const { DARABONBA_PTR_GET_DEFAULT(agentType_, "") };
      inline Data& setAgentType(string agentType) { DARABONBA_PTR_SET_VALUE(agentType_, agentType) };


      // createdAt Field Functions 
      bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
      void deleteCreatedAt() { this->createdAt_ = nullptr;};
      inline string getCreatedAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, "") };
      inline Data& setCreatedAt(string createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


      // creatorId Field Functions 
      bool hasCreatorId() const { return this->creatorId_ != nullptr;};
      void deleteCreatorId() { this->creatorId_ = nullptr;};
      inline string getCreatorId() const { DARABONBA_PTR_GET_DEFAULT(creatorId_, "") };
      inline Data& setCreatorId(string creatorId) { DARABONBA_PTR_SET_VALUE(creatorId_, creatorId) };


      // creatorName Field Functions 
      bool hasCreatorName() const { return this->creatorName_ != nullptr;};
      void deleteCreatorName() { this->creatorName_ = nullptr;};
      inline string getCreatorName() const { DARABONBA_PTR_GET_DEFAULT(creatorName_, "") };
      inline Data& setCreatorName(string creatorName) { DARABONBA_PTR_SET_VALUE(creatorName_, creatorName) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Data& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // expireTime Field Functions 
      bool hasExpireTime() const { return this->expireTime_ != nullptr;};
      void deleteExpireTime() { this->expireTime_ = nullptr;};
      inline string getExpireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
      inline Data& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline Data& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // isRevoked Field Functions 
      bool hasIsRevoked() const { return this->isRevoked_ != nullptr;};
      void deleteIsRevoked() { this->isRevoked_ = nullptr;};
      inline bool getIsRevoked() const { DARABONBA_PTR_GET_DEFAULT(isRevoked_, false) };
      inline Data& setIsRevoked(bool isRevoked) { DARABONBA_PTR_SET_VALUE(isRevoked_, isRevoked) };


      // keyPrefix Field Functions 
      bool hasKeyPrefix() const { return this->keyPrefix_ != nullptr;};
      void deleteKeyPrefix() { this->keyPrefix_ = nullptr;};
      inline string getKeyPrefix() const { DARABONBA_PTR_GET_DEFAULT(keyPrefix_, "") };
      inline Data& setKeyPrefix(string keyPrefix) { DARABONBA_PTR_SET_VALUE(keyPrefix_, keyPrefix) };


      // lastUsedTime Field Functions 
      bool hasLastUsedTime() const { return this->lastUsedTime_ != nullptr;};
      void deleteLastUsedTime() { this->lastUsedTime_ = nullptr;};
      inline string getLastUsedTime() const { DARABONBA_PTR_GET_DEFAULT(lastUsedTime_, "") };
      inline Data& setLastUsedTime(string lastUsedTime) { DARABONBA_PTR_SET_VALUE(lastUsedTime_, lastUsedTime) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Data& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // secret Field Functions 
      bool hasSecret() const { return this->secret_ != nullptr;};
      void deleteSecret() { this->secret_ = nullptr;};
      inline string getSecret() const { DARABONBA_PTR_GET_DEFAULT(secret_, "") };
      inline Data& setSecret(string secret) { DARABONBA_PTR_SET_VALUE(secret_, secret) };


      // source Field Functions 
      bool hasSource() const { return this->source_ != nullptr;};
      void deleteSource() { this->source_ = nullptr;};
      inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
      inline Data& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


      // warning Field Functions 
      bool hasWarning() const { return this->warning_ != nullptr;};
      void deleteWarning() { this->warning_ = nullptr;};
      inline string getWarning() const { DARABONBA_PTR_GET_DEFAULT(warning_, "") };
      inline Data& setWarning(string warning) { DARABONBA_PTR_SET_VALUE(warning_, warning) };


    protected:
      // The ID of the Agent to which the Access Token belongs.
      shared_ptr<string> agentId_ {};
      // The name of the Agent to which the Access Token belongs.
      shared_ptr<string> agentName_ {};
      // The type of the Agent to which the Access Token belongs. Valid values:
      // - HUMAN_BOUND: fully inherits the permissions of the associated user.
      // - PERMISSION_NARROW: narrows the permissions based on the associated user\\"s permission baseline.
      // - AGENT_BOUND: inherits the permissions of the parent Agent.
      // - STANDALONE: holds permissions as an independent identity principal.
      shared_ptr<string> agentType_ {};
      // The time when the Access Token was created, in the yyyy-MM-dd HH:mm:ss format (UTC+8). This value remains unchanged after the reset.
      shared_ptr<string> createdAt_ {};
      // The user ID of the Access Token creator.
      shared_ptr<string> creatorId_ {};
      // The display name of the Access Token creator.
      shared_ptr<string> creatorName_ {};
      // The description of the Access Token. This value remains unchanged after the reset.
      shared_ptr<string> description_ {};
      // The expiration time of the Access Token, in the yyyy-MM-dd HH:mm:ss format (UTC+8). If ExpireAfterSeconds is specified, the expiration time is recalculated from the time of the reset. If ExpireAfterSeconds is not specified, the original expiration time is retained.
      shared_ptr<string> expireTime_ {};
      // The ID of the reset Access Token. This value remains unchanged after the reset.
      shared_ptr<int64_t> id_ {};
      // Indicates whether the Access Token has been revoked. An Access Token returned after a successful reset is always in the non-revoked state (false).
      shared_ptr<bool> isRevoked_ {};
      // The visible prefix of the Access Token, which is used to identify the Access Token without exposing the full Secret. This value remains unchanged after the reset.
      shared_ptr<string> keyPrefix_ {};
      // The time when the Access Token was last used, in the yyyy-MM-dd HH:mm:ss format (UTC+8). This value is empty if the Access Token has never been used.
      shared_ptr<string> lastUsedTime_ {};
      // The name of the Access Token. This value remains unchanged after the reset.
      shared_ptr<string> name_ {};
      // The new plaintext Secret generated by this reset. This value is returned only once in this response and will not be returned by any subsequent operation. Store it securely right away. The old Secret becomes invalid immediately after the reset.
      shared_ptr<string> secret_ {};
      // The credential source of the Access Token. The reset operation supports only Access Tokens issued by the console. Therefore, the value is always console.
      shared_ptr<string> source_ {};
      // The reminder information related to this reset, such as a notice that the new Secret is returned only once and must be stored immediately. This value is empty if no reminder exists.
      shared_ptr<string> warning_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->errorCode_ == nullptr && this->errorMessage_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ResetAgenticApiKeyResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ResetAgenticApiKeyResponseBody::Data) };
    inline ResetAgenticApiKeyResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ResetAgenticApiKeyResponseBody::Data) };
    inline ResetAgenticApiKeyResponseBody& setData(const ResetAgenticApiKeyResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ResetAgenticApiKeyResponseBody& setData(ResetAgenticApiKeyResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline ResetAgenticApiKeyResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline ResetAgenticApiKeyResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ResetAgenticApiKeyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ResetAgenticApiKeyResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The Access Token information returned after a successful reset. The Secret field contains the new plaintext Secret, which is returned only once in this response.
    shared_ptr<ResetAgenticApiKeyResponseBody::Data> data_ {};
    // The error code returned when the request fails. You can use this code to programmatically determine the failure type. This value is empty when the request succeeds.
    shared_ptr<string> errorCode_ {};
    // The error message returned when the request fails. This message helps you locate the issue. This value is empty when the request succeeds.
    shared_ptr<string> errorMessage_ {};
    // The unique request ID, which is used for troubleshooting and log correlation.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. A value of true indicates that the reset was successful. A value of false indicates a failure. In this case, check ErrorCode and ErrorMessage to identify the cause.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dms20250414
#endif
