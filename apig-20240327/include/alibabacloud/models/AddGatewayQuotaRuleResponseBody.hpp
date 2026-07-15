// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDGATEWAYQUOTARULERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ADDGATEWAYQUOTARULERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class AddGatewayQuotaRuleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddGatewayQuotaRuleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, AddGatewayQuotaRuleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    AddGatewayQuotaRuleResponseBody() = default ;
    AddGatewayQuotaRuleResponseBody(const AddGatewayQuotaRuleResponseBody &) = default ;
    AddGatewayQuotaRuleResponseBody(AddGatewayQuotaRuleResponseBody &&) = default ;
    AddGatewayQuotaRuleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddGatewayQuotaRuleResponseBody() = default ;
    AddGatewayQuotaRuleResponseBody& operator=(const AddGatewayQuotaRuleResponseBody &) = default ;
    AddGatewayQuotaRuleResponseBody& operator=(AddGatewayQuotaRuleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(accepted, accepted_);
        DARABONBA_PTR_TO_JSON(conflictPreview, conflictPreview_);
        DARABONBA_PTR_TO_JSON(dryRun, dryRun_);
        DARABONBA_PTR_TO_JSON(ruleId, ruleId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(accepted, accepted_);
        DARABONBA_PTR_FROM_JSON(conflictPreview, conflictPreview_);
        DARABONBA_PTR_FROM_JSON(dryRun, dryRun_);
        DARABONBA_PTR_FROM_JSON(ruleId, ruleId_);
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
      class ConflictPreview : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ConflictPreview& obj) { 
          DARABONBA_PTR_TO_JSON(conflictHash, conflictHash_);
          DARABONBA_PTR_TO_JSON(items, items_);
          DARABONBA_PTR_TO_JSON(totalConflictCount, totalConflictCount_);
        };
        friend void from_json(const Darabonba::Json& j, ConflictPreview& obj) { 
          DARABONBA_PTR_FROM_JSON(conflictHash, conflictHash_);
          DARABONBA_PTR_FROM_JSON(items, items_);
          DARABONBA_PTR_FROM_JSON(totalConflictCount, totalConflictCount_);
        };
        ConflictPreview() = default ;
        ConflictPreview(const ConflictPreview &) = default ;
        ConflictPreview(ConflictPreview &&) = default ;
        ConflictPreview(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ConflictPreview() = default ;
        ConflictPreview& operator=(const ConflictPreview &) = default ;
        ConflictPreview& operator=(ConflictPreview &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Items : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Items& obj) { 
            DARABONBA_PTR_TO_JSON(conflictPeriodType, conflictPeriodType_);
            DARABONBA_PTR_TO_JSON(conflictType, conflictType_);
            DARABONBA_PTR_TO_JSON(consumerId, consumerId_);
            DARABONBA_PTR_TO_JSON(consumerName, consumerName_);
          };
          friend void from_json(const Darabonba::Json& j, Items& obj) { 
            DARABONBA_PTR_FROM_JSON(conflictPeriodType, conflictPeriodType_);
            DARABONBA_PTR_FROM_JSON(conflictType, conflictType_);
            DARABONBA_PTR_FROM_JSON(consumerId, consumerId_);
            DARABONBA_PTR_FROM_JSON(consumerName, consumerName_);
          };
          Items() = default ;
          Items(const Items &) = default ;
          Items(Items &&) = default ;
          Items(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Items() = default ;
          Items& operator=(const Items &) = default ;
          Items& operator=(Items &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->conflictPeriodType_ == nullptr
        && this->conflictType_ == nullptr && this->consumerId_ == nullptr && this->consumerName_ == nullptr; };
          // conflictPeriodType Field Functions 
          bool hasConflictPeriodType() const { return this->conflictPeriodType_ != nullptr;};
          void deleteConflictPeriodType() { this->conflictPeriodType_ = nullptr;};
          inline string getConflictPeriodType() const { DARABONBA_PTR_GET_DEFAULT(conflictPeriodType_, "") };
          inline Items& setConflictPeriodType(string conflictPeriodType) { DARABONBA_PTR_SET_VALUE(conflictPeriodType_, conflictPeriodType) };


          // conflictType Field Functions 
          bool hasConflictType() const { return this->conflictType_ != nullptr;};
          void deleteConflictType() { this->conflictType_ = nullptr;};
          inline string getConflictType() const { DARABONBA_PTR_GET_DEFAULT(conflictType_, "") };
          inline Items& setConflictType(string conflictType) { DARABONBA_PTR_SET_VALUE(conflictType_, conflictType) };


          // consumerId Field Functions 
          bool hasConsumerId() const { return this->consumerId_ != nullptr;};
          void deleteConsumerId() { this->consumerId_ = nullptr;};
          inline string getConsumerId() const { DARABONBA_PTR_GET_DEFAULT(consumerId_, "") };
          inline Items& setConsumerId(string consumerId) { DARABONBA_PTR_SET_VALUE(consumerId_, consumerId) };


          // consumerName Field Functions 
          bool hasConsumerName() const { return this->consumerName_ != nullptr;};
          void deleteConsumerName() { this->consumerName_ = nullptr;};
          inline string getConsumerName() const { DARABONBA_PTR_GET_DEFAULT(consumerName_, "") };
          inline Items& setConsumerName(string consumerName) { DARABONBA_PTR_SET_VALUE(consumerName_, consumerName) };


        protected:
          // The period type of the existing conflicting rule on the consumer. A value of day, week, or month indicates that the conflicting rule uses a daily, weekly, or monthly period respectively.
          shared_ptr<string> conflictPeriodType_ {};
          // The type of the existing conflicting rule on the consumer. A value of calendar indicates that the conflicting rule uses a calendar period. A value of epoch indicates that the conflicting rule uses a custom period.
          shared_ptr<string> conflictType_ {};
          // The consumer ID.
          shared_ptr<string> consumerId_ {};
          // The consumer name.
          shared_ptr<string> consumerName_ {};
        };

        virtual bool empty() const override { return this->conflictHash_ == nullptr
        && this->items_ == nullptr && this->totalConflictCount_ == nullptr; };
        // conflictHash Field Functions 
        bool hasConflictHash() const { return this->conflictHash_ != nullptr;};
        void deleteConflictHash() { this->conflictHash_ = nullptr;};
        inline string getConflictHash() const { DARABONBA_PTR_GET_DEFAULT(conflictHash_, "") };
        inline ConflictPreview& setConflictHash(string conflictHash) { DARABONBA_PTR_SET_VALUE(conflictHash_, conflictHash) };


        // items Field Functions 
        bool hasItems() const { return this->items_ != nullptr;};
        void deleteItems() { this->items_ = nullptr;};
        inline const vector<ConflictPreview::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<ConflictPreview::Items>) };
        inline vector<ConflictPreview::Items> getItems() { DARABONBA_PTR_GET(items_, vector<ConflictPreview::Items>) };
        inline ConflictPreview& setItems(const vector<ConflictPreview::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
        inline ConflictPreview& setItems(vector<ConflictPreview::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


        // totalConflictCount Field Functions 
        bool hasTotalConflictCount() const { return this->totalConflictCount_ != nullptr;};
        void deleteTotalConflictCount() { this->totalConflictCount_ = nullptr;};
        inline int32_t getTotalConflictCount() const { DARABONBA_PTR_GET_DEFAULT(totalConflictCount_, 0) };
        inline ConflictPreview& setTotalConflictCount(int32_t totalConflictCount) { DARABONBA_PTR_SET_VALUE(totalConflictCount_, totalConflictCount) };


      protected:
        // The hash of the conflict snapshot.
        shared_ptr<string> conflictHash_ {};
        // The list of conflicting entities (consumers).
        shared_ptr<vector<ConflictPreview::Items>> items_ {};
        // The total number of conflicts.
        shared_ptr<int32_t> totalConflictCount_ {};
      };

      virtual bool empty() const override { return this->accepted_ == nullptr
        && this->conflictPreview_ == nullptr && this->dryRun_ == nullptr && this->ruleId_ == nullptr; };
      // accepted Field Functions 
      bool hasAccepted() const { return this->accepted_ != nullptr;};
      void deleteAccepted() { this->accepted_ = nullptr;};
      inline bool getAccepted() const { DARABONBA_PTR_GET_DEFAULT(accepted_, false) };
      inline Data& setAccepted(bool accepted) { DARABONBA_PTR_SET_VALUE(accepted_, accepted) };


      // conflictPreview Field Functions 
      bool hasConflictPreview() const { return this->conflictPreview_ != nullptr;};
      void deleteConflictPreview() { this->conflictPreview_ = nullptr;};
      inline const Data::ConflictPreview & getConflictPreview() const { DARABONBA_PTR_GET_CONST(conflictPreview_, Data::ConflictPreview) };
      inline Data::ConflictPreview getConflictPreview() { DARABONBA_PTR_GET(conflictPreview_, Data::ConflictPreview) };
      inline Data& setConflictPreview(const Data::ConflictPreview & conflictPreview) { DARABONBA_PTR_SET_VALUE(conflictPreview_, conflictPreview) };
      inline Data& setConflictPreview(Data::ConflictPreview && conflictPreview) { DARABONBA_PTR_SET_RVALUE(conflictPreview_, conflictPreview) };


      // dryRun Field Functions 
      bool hasDryRun() const { return this->dryRun_ != nullptr;};
      void deleteDryRun() { this->dryRun_ = nullptr;};
      inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
      inline Data& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


      // ruleId Field Functions 
      bool hasRuleId() const { return this->ruleId_ != nullptr;};
      void deleteRuleId() { this->ruleId_ = nullptr;};
      inline string getRuleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, "") };
      inline Data& setRuleId(string ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


    protected:
      // Indicates whether the write request is accepted by the system. A value of false typically indicates a retryable scenario, such as an unconfirmed conflict overwrite.
      shared_ptr<bool> accepted_ {};
      // The conflict preview.
      shared_ptr<Data::ConflictPreview> conflictPreview_ {};
      // Indicates whether the request is a dry run.
      shared_ptr<bool> dryRun_ {};
      // The rule ID.
      shared_ptr<string> ruleId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline AddGatewayQuotaRuleResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const AddGatewayQuotaRuleResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, AddGatewayQuotaRuleResponseBody::Data) };
    inline AddGatewayQuotaRuleResponseBody::Data getData() { DARABONBA_PTR_GET(data_, AddGatewayQuotaRuleResponseBody::Data) };
    inline AddGatewayQuotaRuleResponseBody& setData(const AddGatewayQuotaRuleResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline AddGatewayQuotaRuleResponseBody& setData(AddGatewayQuotaRuleResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline AddGatewayQuotaRuleResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline AddGatewayQuotaRuleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The status code or error code.
    shared_ptr<string> code_ {};
    // The response data.
    shared_ptr<AddGatewayQuotaRuleResponseBody::Data> data_ {};
    // The message content.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
