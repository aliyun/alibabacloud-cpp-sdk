// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMODELTOKENRATELIMITRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETMODELTOKENRATELIMITRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class GetModelTokenRateLimitResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetModelTokenRateLimitResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetModelTokenRateLimitResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    GetModelTokenRateLimitResponseBody() = default ;
    GetModelTokenRateLimitResponseBody(const GetModelTokenRateLimitResponseBody &) = default ;
    GetModelTokenRateLimitResponseBody(GetModelTokenRateLimitResponseBody &&) = default ;
    GetModelTokenRateLimitResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetModelTokenRateLimitResponseBody() = default ;
    GetModelTokenRateLimitResponseBody& operator=(const GetModelTokenRateLimitResponseBody &) = default ;
    GetModelTokenRateLimitResponseBody& operator=(GetModelTokenRateLimitResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(appliedRevision, appliedRevision_);
        DARABONBA_PTR_TO_JSON(consumerRuleIds, consumerRuleIds_);
        DARABONBA_PTR_TO_JSON(consumers, consumers_);
        DARABONBA_PTR_TO_JSON(gatewayId, gatewayId_);
        DARABONBA_PTR_TO_JSON(globalRuleId, globalRuleId_);
        DARABONBA_PTR_TO_JSON(globalTpm, globalTpm_);
        DARABONBA_PTR_TO_JSON(modelId, modelId_);
        DARABONBA_PTR_TO_JSON(revision, revision_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(appliedRevision, appliedRevision_);
        DARABONBA_PTR_FROM_JSON(consumerRuleIds, consumerRuleIds_);
        DARABONBA_PTR_FROM_JSON(consumers, consumers_);
        DARABONBA_PTR_FROM_JSON(gatewayId, gatewayId_);
        DARABONBA_PTR_FROM_JSON(globalRuleId, globalRuleId_);
        DARABONBA_PTR_FROM_JSON(globalTpm, globalTpm_);
        DARABONBA_PTR_FROM_JSON(modelId, modelId_);
        DARABONBA_PTR_FROM_JSON(revision, revision_);
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
      class Consumers : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Consumers& obj) { 
          DARABONBA_PTR_TO_JSON(consumerId, consumerId_);
          DARABONBA_PTR_TO_JSON(tpm, tpm_);
        };
        friend void from_json(const Darabonba::Json& j, Consumers& obj) { 
          DARABONBA_PTR_FROM_JSON(consumerId, consumerId_);
          DARABONBA_PTR_FROM_JSON(tpm, tpm_);
        };
        Consumers() = default ;
        Consumers(const Consumers &) = default ;
        Consumers(Consumers &&) = default ;
        Consumers(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Consumers() = default ;
        Consumers& operator=(const Consumers &) = default ;
        Consumers& operator=(Consumers &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->consumerId_ == nullptr
        && this->tpm_ == nullptr; };
        // consumerId Field Functions 
        bool hasConsumerId() const { return this->consumerId_ != nullptr;};
        void deleteConsumerId() { this->consumerId_ = nullptr;};
        inline string getConsumerId() const { DARABONBA_PTR_GET_DEFAULT(consumerId_, "") };
        inline Consumers& setConsumerId(string consumerId) { DARABONBA_PTR_SET_VALUE(consumerId_, consumerId) };


        // tpm Field Functions 
        bool hasTpm() const { return this->tpm_ != nullptr;};
        void deleteTpm() { this->tpm_ = nullptr;};
        inline int64_t getTpm() const { DARABONBA_PTR_GET_DEFAULT(tpm_, 0L) };
        inline Consumers& setTpm(int64_t tpm) { DARABONBA_PTR_SET_VALUE(tpm_, tpm) };


      protected:
        // The ID of the consumer.
        shared_ptr<string> consumerId_ {};
        // The maximum number of tokens per minute (TPM) for this consumer using this model.
        shared_ptr<int64_t> tpm_ {};
      };

      virtual bool empty() const override { return this->appliedRevision_ == nullptr
        && this->consumerRuleIds_ == nullptr && this->consumers_ == nullptr && this->gatewayId_ == nullptr && this->globalRuleId_ == nullptr && this->globalTpm_ == nullptr
        && this->modelId_ == nullptr && this->revision_ == nullptr; };
      // appliedRevision Field Functions 
      bool hasAppliedRevision() const { return this->appliedRevision_ != nullptr;};
      void deleteAppliedRevision() { this->appliedRevision_ = nullptr;};
      inline int64_t getAppliedRevision() const { DARABONBA_PTR_GET_DEFAULT(appliedRevision_, 0L) };
      inline Data& setAppliedRevision(int64_t appliedRevision) { DARABONBA_PTR_SET_VALUE(appliedRevision_, appliedRevision) };


      // consumerRuleIds Field Functions 
      bool hasConsumerRuleIds() const { return this->consumerRuleIds_ != nullptr;};
      void deleteConsumerRuleIds() { this->consumerRuleIds_ = nullptr;};
      inline const map<string, string> & getConsumerRuleIds() const { DARABONBA_PTR_GET_CONST(consumerRuleIds_, map<string, string>) };
      inline map<string, string> getConsumerRuleIds() { DARABONBA_PTR_GET(consumerRuleIds_, map<string, string>) };
      inline Data& setConsumerRuleIds(const map<string, string> & consumerRuleIds) { DARABONBA_PTR_SET_VALUE(consumerRuleIds_, consumerRuleIds) };
      inline Data& setConsumerRuleIds(map<string, string> && consumerRuleIds) { DARABONBA_PTR_SET_RVALUE(consumerRuleIds_, consumerRuleIds) };


      // consumers Field Functions 
      bool hasConsumers() const { return this->consumers_ != nullptr;};
      void deleteConsumers() { this->consumers_ = nullptr;};
      inline const vector<Data::Consumers> & getConsumers() const { DARABONBA_PTR_GET_CONST(consumers_, vector<Data::Consumers>) };
      inline vector<Data::Consumers> getConsumers() { DARABONBA_PTR_GET(consumers_, vector<Data::Consumers>) };
      inline Data& setConsumers(const vector<Data::Consumers> & consumers) { DARABONBA_PTR_SET_VALUE(consumers_, consumers) };
      inline Data& setConsumers(vector<Data::Consumers> && consumers) { DARABONBA_PTR_SET_RVALUE(consumers_, consumers) };


      // gatewayId Field Functions 
      bool hasGatewayId() const { return this->gatewayId_ != nullptr;};
      void deleteGatewayId() { this->gatewayId_ = nullptr;};
      inline string getGatewayId() const { DARABONBA_PTR_GET_DEFAULT(gatewayId_, "") };
      inline Data& setGatewayId(string gatewayId) { DARABONBA_PTR_SET_VALUE(gatewayId_, gatewayId) };


      // globalRuleId Field Functions 
      bool hasGlobalRuleId() const { return this->globalRuleId_ != nullptr;};
      void deleteGlobalRuleId() { this->globalRuleId_ = nullptr;};
      inline string getGlobalRuleId() const { DARABONBA_PTR_GET_DEFAULT(globalRuleId_, "") };
      inline Data& setGlobalRuleId(string globalRuleId) { DARABONBA_PTR_SET_VALUE(globalRuleId_, globalRuleId) };


      // globalTpm Field Functions 
      bool hasGlobalTpm() const { return this->globalTpm_ != nullptr;};
      void deleteGlobalTpm() { this->globalTpm_ = nullptr;};
      inline int64_t getGlobalTpm() const { DARABONBA_PTR_GET_DEFAULT(globalTpm_, 0L) };
      inline Data& setGlobalTpm(int64_t globalTpm) { DARABONBA_PTR_SET_VALUE(globalTpm_, globalTpm) };


      // modelId Field Functions 
      bool hasModelId() const { return this->modelId_ != nullptr;};
      void deleteModelId() { this->modelId_ = nullptr;};
      inline string getModelId() const { DARABONBA_PTR_GET_DEFAULT(modelId_, "") };
      inline Data& setModelId(string modelId) { DARABONBA_PTR_SET_VALUE(modelId_, modelId) };


      // revision Field Functions 
      bool hasRevision() const { return this->revision_ != nullptr;};
      void deleteRevision() { this->revision_ = nullptr;};
      inline int64_t getRevision() const { DARABONBA_PTR_GET_DEFAULT(revision_, 0L) };
      inline Data& setRevision(int64_t revision) { DARABONBA_PTR_SET_VALUE(revision_, revision) };


    protected:
      // The most recent configuration revision successfully delivered to the control plane.
      shared_ptr<int64_t> appliedRevision_ {};
      // The mapping from consumer IDs to model throttling rule IDs.
      shared_ptr<map<string, string>> consumerRuleIds_ {};
      // The list of configured consumer quotas for this model.
      shared_ptr<vector<Data::Consumers>> consumers_ {};
      // The instance ID of the dedicated AI gateway.
      shared_ptr<string> gatewayId_ {};
      // The rule ID for the global model quota, which can be matched with the rule hits in the gateway throttling logs. This parameter is returned only when the global quota is configured.
      shared_ptr<string> globalRuleId_ {};
      // The maximum number of tokens per minute (TPM) shared by all consumers for this model within the instance.
      shared_ptr<int64_t> globalTpm_ {};
      // The actual model card ID (prefixed with msc-) or the logical model ID (prefixed with vm-).
      shared_ptr<string> modelId_ {};
      // The saved revision of the model throttling configuration. Pass this value as expectedRevision in subsequent modification requests.
      shared_ptr<int64_t> revision_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetModelTokenRateLimitResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetModelTokenRateLimitResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetModelTokenRateLimitResponseBody::Data) };
    inline GetModelTokenRateLimitResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetModelTokenRateLimitResponseBody::Data) };
    inline GetModelTokenRateLimitResponseBody& setData(const GetModelTokenRateLimitResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetModelTokenRateLimitResponseBody& setData(GetModelTokenRateLimitResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetModelTokenRateLimitResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetModelTokenRateLimitResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The result code of the request. The value is Ok if the request is successful.
    shared_ptr<string> code_ {};
    // The saved quotas, versions, and rule IDs for the current model.
    shared_ptr<GetModelTokenRateLimitResponseBody::Data> data_ {};
    // The cause of the error. This parameter is omitted if the request is successful.
    shared_ptr<string> message_ {};
    // The unique identifier of the request, which can be used for troubleshooting.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
