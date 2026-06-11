// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RESETGATEWAYQUOTARULERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_RESETGATEWAYQUOTARULERESPONSEBODY_HPP_
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
  class ResetGatewayQuotaRuleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ResetGatewayQuotaRuleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ResetGatewayQuotaRuleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    ResetGatewayQuotaRuleResponseBody() = default ;
    ResetGatewayQuotaRuleResponseBody(const ResetGatewayQuotaRuleResponseBody &) = default ;
    ResetGatewayQuotaRuleResponseBody(ResetGatewayQuotaRuleResponseBody &&) = default ;
    ResetGatewayQuotaRuleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ResetGatewayQuotaRuleResponseBody() = default ;
    ResetGatewayQuotaRuleResponseBody& operator=(const ResetGatewayQuotaRuleResponseBody &) = default ;
    ResetGatewayQuotaRuleResponseBody& operator=(ResetGatewayQuotaRuleResponseBody &&) = default ;
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
            DARABONBA_PTR_TO_JSON(consumerId, consumerId_);
            DARABONBA_PTR_TO_JSON(consumerName, consumerName_);
          };
          friend void from_json(const Darabonba::Json& j, Items& obj) { 
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
          virtual bool empty() const override { return this->consumerId_ == nullptr
        && this->consumerName_ == nullptr; };
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
          shared_ptr<string> consumerId_ {};
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
        shared_ptr<string> conflictHash_ {};
        shared_ptr<vector<ConflictPreview::Items>> items_ {};
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
      shared_ptr<bool> accepted_ {};
      shared_ptr<Data::ConflictPreview> conflictPreview_ {};
      shared_ptr<bool> dryRun_ {};
      shared_ptr<string> ruleId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ResetGatewayQuotaRuleResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ResetGatewayQuotaRuleResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ResetGatewayQuotaRuleResponseBody::Data) };
    inline ResetGatewayQuotaRuleResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ResetGatewayQuotaRuleResponseBody::Data) };
    inline ResetGatewayQuotaRuleResponseBody& setData(const ResetGatewayQuotaRuleResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ResetGatewayQuotaRuleResponseBody& setData(ResetGatewayQuotaRuleResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ResetGatewayQuotaRuleResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ResetGatewayQuotaRuleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<ResetGatewayQuotaRuleResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
