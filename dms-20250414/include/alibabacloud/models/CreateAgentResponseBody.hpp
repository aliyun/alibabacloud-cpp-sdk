// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAGENTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEAGENTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dms20250414
{
namespace Models
{
  class CreateAgentResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAgentResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAgentResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    CreateAgentResponseBody() = default ;
    CreateAgentResponseBody(const CreateAgentResponseBody &) = default ;
    CreateAgentResponseBody(CreateAgentResponseBody &&) = default ;
    CreateAgentResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAgentResponseBody() = default ;
    CreateAgentResponseBody& operator=(const CreateAgentResponseBody &) = default ;
    CreateAgentResponseBody& operator=(CreateAgentResponseBody &&) = default ;
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
        DARABONBA_PTR_TO_JSON(ApiKey, apiKey_);
        DARABONBA_PTR_TO_JSON(CreatedAt, createdAt_);
        DARABONBA_PTR_TO_JSON(CreationType, creationType_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AgentId, agentId_);
        DARABONBA_PTR_FROM_JSON(AgentName, agentName_);
        DARABONBA_PTR_FROM_JSON(AgentType, agentType_);
        DARABONBA_PTR_FROM_JSON(ApiKey, apiKey_);
        DARABONBA_PTR_FROM_JSON(CreatedAt, createdAt_);
        DARABONBA_PTR_FROM_JSON(CreationType, creationType_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
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
      class ApiKey : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ApiKey& obj) { 
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
        };
        friend void from_json(const Darabonba::Json& j, ApiKey& obj) { 
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
        };
        ApiKey() = default ;
        ApiKey(const ApiKey &) = default ;
        ApiKey(ApiKey &&) = default ;
        ApiKey(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ApiKey() = default ;
        ApiKey& operator=(const ApiKey &) = default ;
        ApiKey& operator=(ApiKey &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->agentId_ == nullptr
        && this->agentName_ == nullptr && this->agentType_ == nullptr && this->createdAt_ == nullptr && this->creatorId_ == nullptr && this->creatorName_ == nullptr
        && this->description_ == nullptr && this->expireTime_ == nullptr && this->id_ == nullptr && this->isRevoked_ == nullptr && this->keyPrefix_ == nullptr
        && this->lastUsedTime_ == nullptr && this->name_ == nullptr && this->secret_ == nullptr && this->source_ == nullptr; };
        // agentId Field Functions 
        bool hasAgentId() const { return this->agentId_ != nullptr;};
        void deleteAgentId() { this->agentId_ = nullptr;};
        inline string getAgentId() const { DARABONBA_PTR_GET_DEFAULT(agentId_, "") };
        inline ApiKey& setAgentId(string agentId) { DARABONBA_PTR_SET_VALUE(agentId_, agentId) };


        // agentName Field Functions 
        bool hasAgentName() const { return this->agentName_ != nullptr;};
        void deleteAgentName() { this->agentName_ = nullptr;};
        inline string getAgentName() const { DARABONBA_PTR_GET_DEFAULT(agentName_, "") };
        inline ApiKey& setAgentName(string agentName) { DARABONBA_PTR_SET_VALUE(agentName_, agentName) };


        // agentType Field Functions 
        bool hasAgentType() const { return this->agentType_ != nullptr;};
        void deleteAgentType() { this->agentType_ = nullptr;};
        inline string getAgentType() const { DARABONBA_PTR_GET_DEFAULT(agentType_, "") };
        inline ApiKey& setAgentType(string agentType) { DARABONBA_PTR_SET_VALUE(agentType_, agentType) };


        // createdAt Field Functions 
        bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
        void deleteCreatedAt() { this->createdAt_ = nullptr;};
        inline string getCreatedAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, "") };
        inline ApiKey& setCreatedAt(string createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


        // creatorId Field Functions 
        bool hasCreatorId() const { return this->creatorId_ != nullptr;};
        void deleteCreatorId() { this->creatorId_ = nullptr;};
        inline string getCreatorId() const { DARABONBA_PTR_GET_DEFAULT(creatorId_, "") };
        inline ApiKey& setCreatorId(string creatorId) { DARABONBA_PTR_SET_VALUE(creatorId_, creatorId) };


        // creatorName Field Functions 
        bool hasCreatorName() const { return this->creatorName_ != nullptr;};
        void deleteCreatorName() { this->creatorName_ = nullptr;};
        inline string getCreatorName() const { DARABONBA_PTR_GET_DEFAULT(creatorName_, "") };
        inline ApiKey& setCreatorName(string creatorName) { DARABONBA_PTR_SET_VALUE(creatorName_, creatorName) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline ApiKey& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // expireTime Field Functions 
        bool hasExpireTime() const { return this->expireTime_ != nullptr;};
        void deleteExpireTime() { this->expireTime_ = nullptr;};
        inline string getExpireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
        inline ApiKey& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline ApiKey& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // isRevoked Field Functions 
        bool hasIsRevoked() const { return this->isRevoked_ != nullptr;};
        void deleteIsRevoked() { this->isRevoked_ = nullptr;};
        inline bool getIsRevoked() const { DARABONBA_PTR_GET_DEFAULT(isRevoked_, false) };
        inline ApiKey& setIsRevoked(bool isRevoked) { DARABONBA_PTR_SET_VALUE(isRevoked_, isRevoked) };


        // keyPrefix Field Functions 
        bool hasKeyPrefix() const { return this->keyPrefix_ != nullptr;};
        void deleteKeyPrefix() { this->keyPrefix_ = nullptr;};
        inline string getKeyPrefix() const { DARABONBA_PTR_GET_DEFAULT(keyPrefix_, "") };
        inline ApiKey& setKeyPrefix(string keyPrefix) { DARABONBA_PTR_SET_VALUE(keyPrefix_, keyPrefix) };


        // lastUsedTime Field Functions 
        bool hasLastUsedTime() const { return this->lastUsedTime_ != nullptr;};
        void deleteLastUsedTime() { this->lastUsedTime_ = nullptr;};
        inline string getLastUsedTime() const { DARABONBA_PTR_GET_DEFAULT(lastUsedTime_, "") };
        inline ApiKey& setLastUsedTime(string lastUsedTime) { DARABONBA_PTR_SET_VALUE(lastUsedTime_, lastUsedTime) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline ApiKey& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // secret Field Functions 
        bool hasSecret() const { return this->secret_ != nullptr;};
        void deleteSecret() { this->secret_ = nullptr;};
        inline string getSecret() const { DARABONBA_PTR_GET_DEFAULT(secret_, "") };
        inline ApiKey& setSecret(string secret) { DARABONBA_PTR_SET_VALUE(secret_, secret) };


        // source Field Functions 
        bool hasSource() const { return this->source_ != nullptr;};
        void deleteSource() { this->source_ = nullptr;};
        inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
        inline ApiKey& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


      protected:
        shared_ptr<string> agentId_ {};
        shared_ptr<string> agentName_ {};
        shared_ptr<string> agentType_ {};
        shared_ptr<string> createdAt_ {};
        shared_ptr<string> creatorId_ {};
        shared_ptr<string> creatorName_ {};
        shared_ptr<string> description_ {};
        shared_ptr<string> expireTime_ {};
        shared_ptr<int64_t> id_ {};
        shared_ptr<bool> isRevoked_ {};
        shared_ptr<string> keyPrefix_ {};
        shared_ptr<string> lastUsedTime_ {};
        shared_ptr<string> name_ {};
        shared_ptr<string> secret_ {};
        shared_ptr<string> source_ {};
      };

      virtual bool empty() const override { return this->agentId_ == nullptr
        && this->agentName_ == nullptr && this->agentType_ == nullptr && this->apiKey_ == nullptr && this->createdAt_ == nullptr && this->creationType_ == nullptr
        && this->description_ == nullptr && this->ownerId_ == nullptr && this->status_ == nullptr; };
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


      // apiKey Field Functions 
      bool hasApiKey() const { return this->apiKey_ != nullptr;};
      void deleteApiKey() { this->apiKey_ = nullptr;};
      inline const Data::ApiKey & getApiKey() const { DARABONBA_PTR_GET_CONST(apiKey_, Data::ApiKey) };
      inline Data::ApiKey getApiKey() { DARABONBA_PTR_GET(apiKey_, Data::ApiKey) };
      inline Data& setApiKey(const Data::ApiKey & apiKey) { DARABONBA_PTR_SET_VALUE(apiKey_, apiKey) };
      inline Data& setApiKey(Data::ApiKey && apiKey) { DARABONBA_PTR_SET_RVALUE(apiKey_, apiKey) };


      // createdAt Field Functions 
      bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
      void deleteCreatedAt() { this->createdAt_ = nullptr;};
      inline string getCreatedAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, "") };
      inline Data& setCreatedAt(string createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


      // creationType Field Functions 
      bool hasCreationType() const { return this->creationType_ != nullptr;};
      void deleteCreationType() { this->creationType_ = nullptr;};
      inline string getCreationType() const { DARABONBA_PTR_GET_DEFAULT(creationType_, "") };
      inline Data& setCreationType(string creationType) { DARABONBA_PTR_SET_VALUE(creationType_, creationType) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Data& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // ownerId Field Functions 
      bool hasOwnerId() const { return this->ownerId_ != nullptr;};
      void deleteOwnerId() { this->ownerId_ = nullptr;};
      inline string getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, "") };
      inline Data& setOwnerId(string ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Data& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      shared_ptr<string> agentId_ {};
      shared_ptr<string> agentName_ {};
      shared_ptr<string> agentType_ {};
      shared_ptr<Data::ApiKey> apiKey_ {};
      shared_ptr<string> createdAt_ {};
      shared_ptr<string> creationType_ {};
      shared_ptr<string> description_ {};
      shared_ptr<string> ownerId_ {};
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->errorCode_ == nullptr && this->errorMessage_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const CreateAgentResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, CreateAgentResponseBody::Data) };
    inline CreateAgentResponseBody::Data getData() { DARABONBA_PTR_GET(data_, CreateAgentResponseBody::Data) };
    inline CreateAgentResponseBody& setData(const CreateAgentResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline CreateAgentResponseBody& setData(CreateAgentResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline CreateAgentResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline CreateAgentResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateAgentResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline CreateAgentResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<CreateAgentResponseBody::Data> data_ {};
    shared_ptr<string> errorCode_ {};
    shared_ptr<string> errorMessage_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dms20250414
#endif
