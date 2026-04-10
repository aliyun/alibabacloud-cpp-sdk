// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETUSAGERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETUSAGERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DianJin20240628
{
namespace Models
{
  class GetUsageResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetUsageResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(retryAble, retryAble_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetUsageResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(retryAble, retryAble_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    GetUsageResponseBody() = default ;
    GetUsageResponseBody(const GetUsageResponseBody &) = default ;
    GetUsageResponseBody(GetUsageResponseBody &&) = default ;
    GetUsageResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetUsageResponseBody() = default ;
    GetUsageResponseBody& operator=(const GetUsageResponseBody &) = default ;
    GetUsageResponseBody& operator=(GetUsageResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(entitlements, entitlements_);
        DARABONBA_PTR_TO_JSON(modelStats, modelStats_);
        DARABONBA_PTR_TO_JSON(summary, summary_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(entitlements, entitlements_);
        DARABONBA_PTR_FROM_JSON(modelStats, modelStats_);
        DARABONBA_PTR_FROM_JSON(summary, summary_);
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
      class Summary : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Summary& obj) { 
          DARABONBA_PTR_TO_JSON(totalInputUsage, totalInputUsage_);
          DARABONBA_PTR_TO_JSON(totalOutputUsage, totalOutputUsage_);
          DARABONBA_PTR_TO_JSON(totalRequests, totalRequests_);
          DARABONBA_PTR_TO_JSON(totalUsage, totalUsage_);
        };
        friend void from_json(const Darabonba::Json& j, Summary& obj) { 
          DARABONBA_PTR_FROM_JSON(totalInputUsage, totalInputUsage_);
          DARABONBA_PTR_FROM_JSON(totalOutputUsage, totalOutputUsage_);
          DARABONBA_PTR_FROM_JSON(totalRequests, totalRequests_);
          DARABONBA_PTR_FROM_JSON(totalUsage, totalUsage_);
        };
        Summary() = default ;
        Summary(const Summary &) = default ;
        Summary(Summary &&) = default ;
        Summary(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Summary() = default ;
        Summary& operator=(const Summary &) = default ;
        Summary& operator=(Summary &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->totalInputUsage_ == nullptr
        && this->totalOutputUsage_ == nullptr && this->totalRequests_ == nullptr && this->totalUsage_ == nullptr; };
        // totalInputUsage Field Functions 
        bool hasTotalInputUsage() const { return this->totalInputUsage_ != nullptr;};
        void deleteTotalInputUsage() { this->totalInputUsage_ = nullptr;};
        inline int64_t getTotalInputUsage() const { DARABONBA_PTR_GET_DEFAULT(totalInputUsage_, 0L) };
        inline Summary& setTotalInputUsage(int64_t totalInputUsage) { DARABONBA_PTR_SET_VALUE(totalInputUsage_, totalInputUsage) };


        // totalOutputUsage Field Functions 
        bool hasTotalOutputUsage() const { return this->totalOutputUsage_ != nullptr;};
        void deleteTotalOutputUsage() { this->totalOutputUsage_ = nullptr;};
        inline int64_t getTotalOutputUsage() const { DARABONBA_PTR_GET_DEFAULT(totalOutputUsage_, 0L) };
        inline Summary& setTotalOutputUsage(int64_t totalOutputUsage) { DARABONBA_PTR_SET_VALUE(totalOutputUsage_, totalOutputUsage) };


        // totalRequests Field Functions 
        bool hasTotalRequests() const { return this->totalRequests_ != nullptr;};
        void deleteTotalRequests() { this->totalRequests_ = nullptr;};
        inline int64_t getTotalRequests() const { DARABONBA_PTR_GET_DEFAULT(totalRequests_, 0L) };
        inline Summary& setTotalRequests(int64_t totalRequests) { DARABONBA_PTR_SET_VALUE(totalRequests_, totalRequests) };


        // totalUsage Field Functions 
        bool hasTotalUsage() const { return this->totalUsage_ != nullptr;};
        void deleteTotalUsage() { this->totalUsage_ = nullptr;};
        inline int64_t getTotalUsage() const { DARABONBA_PTR_GET_DEFAULT(totalUsage_, 0L) };
        inline Summary& setTotalUsage(int64_t totalUsage) { DARABONBA_PTR_SET_VALUE(totalUsage_, totalUsage) };


      protected:
        shared_ptr<int64_t> totalInputUsage_ {};
        shared_ptr<int64_t> totalOutputUsage_ {};
        shared_ptr<int64_t> totalRequests_ {};
        shared_ptr<int64_t> totalUsage_ {};
      };

      class ModelStats : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ModelStats& obj) { 
          DARABONBA_PTR_TO_JSON(inputUsage, inputUsage_);
          DARABONBA_PTR_TO_JSON(model, model_);
          DARABONBA_PTR_TO_JSON(outputUsage, outputUsage_);
          DARABONBA_PTR_TO_JSON(requests, requests_);
          DARABONBA_PTR_TO_JSON(totalUsage, totalUsage_);
        };
        friend void from_json(const Darabonba::Json& j, ModelStats& obj) { 
          DARABONBA_PTR_FROM_JSON(inputUsage, inputUsage_);
          DARABONBA_PTR_FROM_JSON(model, model_);
          DARABONBA_PTR_FROM_JSON(outputUsage, outputUsage_);
          DARABONBA_PTR_FROM_JSON(requests, requests_);
          DARABONBA_PTR_FROM_JSON(totalUsage, totalUsage_);
        };
        ModelStats() = default ;
        ModelStats(const ModelStats &) = default ;
        ModelStats(ModelStats &&) = default ;
        ModelStats(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ModelStats() = default ;
        ModelStats& operator=(const ModelStats &) = default ;
        ModelStats& operator=(ModelStats &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->inputUsage_ == nullptr
        && this->model_ == nullptr && this->outputUsage_ == nullptr && this->requests_ == nullptr && this->totalUsage_ == nullptr; };
        // inputUsage Field Functions 
        bool hasInputUsage() const { return this->inputUsage_ != nullptr;};
        void deleteInputUsage() { this->inputUsage_ = nullptr;};
        inline int64_t getInputUsage() const { DARABONBA_PTR_GET_DEFAULT(inputUsage_, 0L) };
        inline ModelStats& setInputUsage(int64_t inputUsage) { DARABONBA_PTR_SET_VALUE(inputUsage_, inputUsage) };


        // model Field Functions 
        bool hasModel() const { return this->model_ != nullptr;};
        void deleteModel() { this->model_ = nullptr;};
        inline string getModel() const { DARABONBA_PTR_GET_DEFAULT(model_, "") };
        inline ModelStats& setModel(string model) { DARABONBA_PTR_SET_VALUE(model_, model) };


        // outputUsage Field Functions 
        bool hasOutputUsage() const { return this->outputUsage_ != nullptr;};
        void deleteOutputUsage() { this->outputUsage_ = nullptr;};
        inline int64_t getOutputUsage() const { DARABONBA_PTR_GET_DEFAULT(outputUsage_, 0L) };
        inline ModelStats& setOutputUsage(int64_t outputUsage) { DARABONBA_PTR_SET_VALUE(outputUsage_, outputUsage) };


        // requests Field Functions 
        bool hasRequests() const { return this->requests_ != nullptr;};
        void deleteRequests() { this->requests_ = nullptr;};
        inline int64_t getRequests() const { DARABONBA_PTR_GET_DEFAULT(requests_, 0L) };
        inline ModelStats& setRequests(int64_t requests) { DARABONBA_PTR_SET_VALUE(requests_, requests) };


        // totalUsage Field Functions 
        bool hasTotalUsage() const { return this->totalUsage_ != nullptr;};
        void deleteTotalUsage() { this->totalUsage_ = nullptr;};
        inline int64_t getTotalUsage() const { DARABONBA_PTR_GET_DEFAULT(totalUsage_, 0L) };
        inline ModelStats& setTotalUsage(int64_t totalUsage) { DARABONBA_PTR_SET_VALUE(totalUsage_, totalUsage) };


      protected:
        shared_ptr<int64_t> inputUsage_ {};
        shared_ptr<string> model_ {};
        shared_ptr<int64_t> outputUsage_ {};
        shared_ptr<int64_t> requests_ {};
        shared_ptr<int64_t> totalUsage_ {};
      };

      class Entitlements : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Entitlements& obj) { 
          DARABONBA_PTR_TO_JSON(allowedModels, allowedModels_);
          DARABONBA_PTR_TO_JSON(bindingId, bindingId_);
          DARABONBA_PTR_TO_JSON(effectiveAt, effectiveAt_);
          DARABONBA_PTR_TO_JSON(expireAt, expireAt_);
          DARABONBA_PTR_TO_JSON(quotaInitial, quotaInitial_);
          DARABONBA_PTR_TO_JSON(quotaRemaining, quotaRemaining_);
          DARABONBA_PTR_TO_JSON(quotaUsed, quotaUsed_);
          DARABONBA_PTR_TO_JSON(status, status_);
          DARABONBA_PTR_TO_JSON(templateId, templateId_);
          DARABONBA_PTR_TO_JSON(templateName, templateName_);
        };
        friend void from_json(const Darabonba::Json& j, Entitlements& obj) { 
          DARABONBA_PTR_FROM_JSON(allowedModels, allowedModels_);
          DARABONBA_PTR_FROM_JSON(bindingId, bindingId_);
          DARABONBA_PTR_FROM_JSON(effectiveAt, effectiveAt_);
          DARABONBA_PTR_FROM_JSON(expireAt, expireAt_);
          DARABONBA_PTR_FROM_JSON(quotaInitial, quotaInitial_);
          DARABONBA_PTR_FROM_JSON(quotaRemaining, quotaRemaining_);
          DARABONBA_PTR_FROM_JSON(quotaUsed, quotaUsed_);
          DARABONBA_PTR_FROM_JSON(status, status_);
          DARABONBA_PTR_FROM_JSON(templateId, templateId_);
          DARABONBA_PTR_FROM_JSON(templateName, templateName_);
        };
        Entitlements() = default ;
        Entitlements(const Entitlements &) = default ;
        Entitlements(Entitlements &&) = default ;
        Entitlements(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Entitlements() = default ;
        Entitlements& operator=(const Entitlements &) = default ;
        Entitlements& operator=(Entitlements &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->allowedModels_ == nullptr
        && this->bindingId_ == nullptr && this->effectiveAt_ == nullptr && this->expireAt_ == nullptr && this->quotaInitial_ == nullptr && this->quotaRemaining_ == nullptr
        && this->quotaUsed_ == nullptr && this->status_ == nullptr && this->templateId_ == nullptr && this->templateName_ == nullptr; };
        // allowedModels Field Functions 
        bool hasAllowedModels() const { return this->allowedModels_ != nullptr;};
        void deleteAllowedModels() { this->allowedModels_ = nullptr;};
        inline const vector<string> & getAllowedModels() const { DARABONBA_PTR_GET_CONST(allowedModels_, vector<string>) };
        inline vector<string> getAllowedModels() { DARABONBA_PTR_GET(allowedModels_, vector<string>) };
        inline Entitlements& setAllowedModels(const vector<string> & allowedModels) { DARABONBA_PTR_SET_VALUE(allowedModels_, allowedModels) };
        inline Entitlements& setAllowedModels(vector<string> && allowedModels) { DARABONBA_PTR_SET_RVALUE(allowedModels_, allowedModels) };


        // bindingId Field Functions 
        bool hasBindingId() const { return this->bindingId_ != nullptr;};
        void deleteBindingId() { this->bindingId_ = nullptr;};
        inline int64_t getBindingId() const { DARABONBA_PTR_GET_DEFAULT(bindingId_, 0L) };
        inline Entitlements& setBindingId(int64_t bindingId) { DARABONBA_PTR_SET_VALUE(bindingId_, bindingId) };


        // effectiveAt Field Functions 
        bool hasEffectiveAt() const { return this->effectiveAt_ != nullptr;};
        void deleteEffectiveAt() { this->effectiveAt_ = nullptr;};
        inline string getEffectiveAt() const { DARABONBA_PTR_GET_DEFAULT(effectiveAt_, "") };
        inline Entitlements& setEffectiveAt(string effectiveAt) { DARABONBA_PTR_SET_VALUE(effectiveAt_, effectiveAt) };


        // expireAt Field Functions 
        bool hasExpireAt() const { return this->expireAt_ != nullptr;};
        void deleteExpireAt() { this->expireAt_ = nullptr;};
        inline string getExpireAt() const { DARABONBA_PTR_GET_DEFAULT(expireAt_, "") };
        inline Entitlements& setExpireAt(string expireAt) { DARABONBA_PTR_SET_VALUE(expireAt_, expireAt) };


        // quotaInitial Field Functions 
        bool hasQuotaInitial() const { return this->quotaInitial_ != nullptr;};
        void deleteQuotaInitial() { this->quotaInitial_ = nullptr;};
        inline int64_t getQuotaInitial() const { DARABONBA_PTR_GET_DEFAULT(quotaInitial_, 0L) };
        inline Entitlements& setQuotaInitial(int64_t quotaInitial) { DARABONBA_PTR_SET_VALUE(quotaInitial_, quotaInitial) };


        // quotaRemaining Field Functions 
        bool hasQuotaRemaining() const { return this->quotaRemaining_ != nullptr;};
        void deleteQuotaRemaining() { this->quotaRemaining_ = nullptr;};
        inline int64_t getQuotaRemaining() const { DARABONBA_PTR_GET_DEFAULT(quotaRemaining_, 0L) };
        inline Entitlements& setQuotaRemaining(int64_t quotaRemaining) { DARABONBA_PTR_SET_VALUE(quotaRemaining_, quotaRemaining) };


        // quotaUsed Field Functions 
        bool hasQuotaUsed() const { return this->quotaUsed_ != nullptr;};
        void deleteQuotaUsed() { this->quotaUsed_ = nullptr;};
        inline int64_t getQuotaUsed() const { DARABONBA_PTR_GET_DEFAULT(quotaUsed_, 0L) };
        inline Entitlements& setQuotaUsed(int64_t quotaUsed) { DARABONBA_PTR_SET_VALUE(quotaUsed_, quotaUsed) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline Entitlements& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // templateId Field Functions 
        bool hasTemplateId() const { return this->templateId_ != nullptr;};
        void deleteTemplateId() { this->templateId_ = nullptr;};
        inline int64_t getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, 0L) };
        inline Entitlements& setTemplateId(int64_t templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


        // templateName Field Functions 
        bool hasTemplateName() const { return this->templateName_ != nullptr;};
        void deleteTemplateName() { this->templateName_ = nullptr;};
        inline string getTemplateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
        inline Entitlements& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


      protected:
        shared_ptr<vector<string>> allowedModels_ {};
        shared_ptr<int64_t> bindingId_ {};
        shared_ptr<string> effectiveAt_ {};
        shared_ptr<string> expireAt_ {};
        shared_ptr<int64_t> quotaInitial_ {};
        shared_ptr<int64_t> quotaRemaining_ {};
        shared_ptr<int64_t> quotaUsed_ {};
        shared_ptr<string> status_ {};
        shared_ptr<int64_t> templateId_ {};
        shared_ptr<string> templateName_ {};
      };

      virtual bool empty() const override { return this->entitlements_ == nullptr
        && this->modelStats_ == nullptr && this->summary_ == nullptr; };
      // entitlements Field Functions 
      bool hasEntitlements() const { return this->entitlements_ != nullptr;};
      void deleteEntitlements() { this->entitlements_ = nullptr;};
      inline const vector<Data::Entitlements> & getEntitlements() const { DARABONBA_PTR_GET_CONST(entitlements_, vector<Data::Entitlements>) };
      inline vector<Data::Entitlements> getEntitlements() { DARABONBA_PTR_GET(entitlements_, vector<Data::Entitlements>) };
      inline Data& setEntitlements(const vector<Data::Entitlements> & entitlements) { DARABONBA_PTR_SET_VALUE(entitlements_, entitlements) };
      inline Data& setEntitlements(vector<Data::Entitlements> && entitlements) { DARABONBA_PTR_SET_RVALUE(entitlements_, entitlements) };


      // modelStats Field Functions 
      bool hasModelStats() const { return this->modelStats_ != nullptr;};
      void deleteModelStats() { this->modelStats_ = nullptr;};
      inline const vector<Data::ModelStats> & getModelStats() const { DARABONBA_PTR_GET_CONST(modelStats_, vector<Data::ModelStats>) };
      inline vector<Data::ModelStats> getModelStats() { DARABONBA_PTR_GET(modelStats_, vector<Data::ModelStats>) };
      inline Data& setModelStats(const vector<Data::ModelStats> & modelStats) { DARABONBA_PTR_SET_VALUE(modelStats_, modelStats) };
      inline Data& setModelStats(vector<Data::ModelStats> && modelStats) { DARABONBA_PTR_SET_RVALUE(modelStats_, modelStats) };


      // summary Field Functions 
      bool hasSummary() const { return this->summary_ != nullptr;};
      void deleteSummary() { this->summary_ = nullptr;};
      inline const Data::Summary & getSummary() const { DARABONBA_PTR_GET_CONST(summary_, Data::Summary) };
      inline Data::Summary getSummary() { DARABONBA_PTR_GET(summary_, Data::Summary) };
      inline Data& setSummary(const Data::Summary & summary) { DARABONBA_PTR_SET_VALUE(summary_, summary) };
      inline Data& setSummary(Data::Summary && summary) { DARABONBA_PTR_SET_RVALUE(summary_, summary) };


    protected:
      shared_ptr<vector<Data::Entitlements>> entitlements_ {};
      shared_ptr<vector<Data::ModelStats>> modelStats_ {};
      shared_ptr<Data::Summary> summary_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->retryAble_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetUsageResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetUsageResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetUsageResponseBody::Data) };
    inline GetUsageResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetUsageResponseBody::Data) };
    inline GetUsageResponseBody& setData(const GetUsageResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetUsageResponseBody& setData(GetUsageResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetUsageResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // retryAble Field Functions 
    bool hasRetryAble() const { return this->retryAble_ != nullptr;};
    void deleteRetryAble() { this->retryAble_ = nullptr;};
    inline bool getRetryAble() const { DARABONBA_PTR_GET_DEFAULT(retryAble_, false) };
    inline GetUsageResponseBody& setRetryAble(bool retryAble) { DARABONBA_PTR_SET_VALUE(retryAble_, retryAble) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetUsageResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<GetUsageResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<bool> retryAble_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DianJin20240628
#endif
