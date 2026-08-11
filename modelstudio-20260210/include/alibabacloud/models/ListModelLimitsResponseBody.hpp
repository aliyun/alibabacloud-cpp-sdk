// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMODELLIMITSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTMODELLIMITSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ModelStudio20260210
{
namespace Models
{
  class ListModelLimitsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListModelLimitsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(errorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(limits, limits_);
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
      DARABONBA_PTR_TO_JSON(totalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListModelLimitsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(errorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(limits, limits_);
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
      DARABONBA_PTR_FROM_JSON(totalCount, totalCount_);
    };
    ListModelLimitsResponseBody() = default ;
    ListModelLimitsResponseBody(const ListModelLimitsResponseBody &) = default ;
    ListModelLimitsResponseBody(ListModelLimitsResponseBody &&) = default ;
    ListModelLimitsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListModelLimitsResponseBody() = default ;
    ListModelLimitsResponseBody& operator=(const ListModelLimitsResponseBody &) = default ;
    ListModelLimitsResponseBody& operator=(ListModelLimitsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Limits : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Limits& obj) { 
        DARABONBA_PTR_TO_JSON(model, model_);
        DARABONBA_PTR_TO_JSON(modelLimit, modelLimit_);
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(workspaceLimit, workspaceLimit_);
      };
      friend void from_json(const Darabonba::Json& j, Limits& obj) { 
        DARABONBA_PTR_FROM_JSON(model, model_);
        DARABONBA_PTR_FROM_JSON(modelLimit, modelLimit_);
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(workspaceLimit, workspaceLimit_);
      };
      Limits() = default ;
      Limits(const Limits &) = default ;
      Limits(Limits &&) = default ;
      Limits(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Limits() = default ;
      Limits& operator=(const Limits &) = default ;
      Limits& operator=(Limits &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class WorkspaceLimit : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const WorkspaceLimit& obj) { 
          DARABONBA_PTR_TO_JSON(asyncUserConcurrencyLimit, asyncUserConcurrencyLimit_);
          DARABONBA_PTR_TO_JSON(asyncUserQueueLimit, asyncUserQueueLimit_);
          DARABONBA_PTR_TO_JSON(requestLimit, requestLimit_);
          DARABONBA_PTR_TO_JSON(requestLimitPeriod, requestLimitPeriod_);
          DARABONBA_PTR_TO_JSON(usageLimit, usageLimit_);
          DARABONBA_PTR_TO_JSON(usageLimitField, usageLimitField_);
          DARABONBA_PTR_TO_JSON(usageLimitPeriod, usageLimitPeriod_);
        };
        friend void from_json(const Darabonba::Json& j, WorkspaceLimit& obj) { 
          DARABONBA_PTR_FROM_JSON(asyncUserConcurrencyLimit, asyncUserConcurrencyLimit_);
          DARABONBA_PTR_FROM_JSON(asyncUserQueueLimit, asyncUserQueueLimit_);
          DARABONBA_PTR_FROM_JSON(requestLimit, requestLimit_);
          DARABONBA_PTR_FROM_JSON(requestLimitPeriod, requestLimitPeriod_);
          DARABONBA_PTR_FROM_JSON(usageLimit, usageLimit_);
          DARABONBA_PTR_FROM_JSON(usageLimitField, usageLimitField_);
          DARABONBA_PTR_FROM_JSON(usageLimitPeriod, usageLimitPeriod_);
        };
        WorkspaceLimit() = default ;
        WorkspaceLimit(const WorkspaceLimit &) = default ;
        WorkspaceLimit(WorkspaceLimit &&) = default ;
        WorkspaceLimit(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~WorkspaceLimit() = default ;
        WorkspaceLimit& operator=(const WorkspaceLimit &) = default ;
        WorkspaceLimit& operator=(WorkspaceLimit &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->asyncUserConcurrencyLimit_ == nullptr
        && this->asyncUserQueueLimit_ == nullptr && this->requestLimit_ == nullptr && this->requestLimitPeriod_ == nullptr && this->usageLimit_ == nullptr && this->usageLimitField_ == nullptr
        && this->usageLimitPeriod_ == nullptr; };
        // asyncUserConcurrencyLimit Field Functions 
        bool hasAsyncUserConcurrencyLimit() const { return this->asyncUserConcurrencyLimit_ != nullptr;};
        void deleteAsyncUserConcurrencyLimit() { this->asyncUserConcurrencyLimit_ = nullptr;};
        inline int64_t getAsyncUserConcurrencyLimit() const { DARABONBA_PTR_GET_DEFAULT(asyncUserConcurrencyLimit_, 0L) };
        inline WorkspaceLimit& setAsyncUserConcurrencyLimit(int64_t asyncUserConcurrencyLimit) { DARABONBA_PTR_SET_VALUE(asyncUserConcurrencyLimit_, asyncUserConcurrencyLimit) };


        // asyncUserQueueLimit Field Functions 
        bool hasAsyncUserQueueLimit() const { return this->asyncUserQueueLimit_ != nullptr;};
        void deleteAsyncUserQueueLimit() { this->asyncUserQueueLimit_ = nullptr;};
        inline int64_t getAsyncUserQueueLimit() const { DARABONBA_PTR_GET_DEFAULT(asyncUserQueueLimit_, 0L) };
        inline WorkspaceLimit& setAsyncUserQueueLimit(int64_t asyncUserQueueLimit) { DARABONBA_PTR_SET_VALUE(asyncUserQueueLimit_, asyncUserQueueLimit) };


        // requestLimit Field Functions 
        bool hasRequestLimit() const { return this->requestLimit_ != nullptr;};
        void deleteRequestLimit() { this->requestLimit_ = nullptr;};
        inline int64_t getRequestLimit() const { DARABONBA_PTR_GET_DEFAULT(requestLimit_, 0L) };
        inline WorkspaceLimit& setRequestLimit(int64_t requestLimit) { DARABONBA_PTR_SET_VALUE(requestLimit_, requestLimit) };


        // requestLimitPeriod Field Functions 
        bool hasRequestLimitPeriod() const { return this->requestLimitPeriod_ != nullptr;};
        void deleteRequestLimitPeriod() { this->requestLimitPeriod_ = nullptr;};
        inline int32_t getRequestLimitPeriod() const { DARABONBA_PTR_GET_DEFAULT(requestLimitPeriod_, 0) };
        inline WorkspaceLimit& setRequestLimitPeriod(int32_t requestLimitPeriod) { DARABONBA_PTR_SET_VALUE(requestLimitPeriod_, requestLimitPeriod) };


        // usageLimit Field Functions 
        bool hasUsageLimit() const { return this->usageLimit_ != nullptr;};
        void deleteUsageLimit() { this->usageLimit_ = nullptr;};
        inline int64_t getUsageLimit() const { DARABONBA_PTR_GET_DEFAULT(usageLimit_, 0L) };
        inline WorkspaceLimit& setUsageLimit(int64_t usageLimit) { DARABONBA_PTR_SET_VALUE(usageLimit_, usageLimit) };


        // usageLimitField Field Functions 
        bool hasUsageLimitField() const { return this->usageLimitField_ != nullptr;};
        void deleteUsageLimitField() { this->usageLimitField_ = nullptr;};
        inline string getUsageLimitField() const { DARABONBA_PTR_GET_DEFAULT(usageLimitField_, "") };
        inline WorkspaceLimit& setUsageLimitField(string usageLimitField) { DARABONBA_PTR_SET_VALUE(usageLimitField_, usageLimitField) };


        // usageLimitPeriod Field Functions 
        bool hasUsageLimitPeriod() const { return this->usageLimitPeriod_ != nullptr;};
        void deleteUsageLimitPeriod() { this->usageLimitPeriod_ = nullptr;};
        inline int32_t getUsageLimitPeriod() const { DARABONBA_PTR_GET_DEFAULT(usageLimitPeriod_, 0) };
        inline WorkspaceLimit& setUsageLimitPeriod(int32_t usageLimitPeriod) { DARABONBA_PTR_SET_VALUE(usageLimitPeriod_, usageLimitPeriod) };


      protected:
        // The maximum concurrency.
        shared_ptr<int64_t> asyncUserConcurrencyLimit_ {};
        // The queue size.
        shared_ptr<int64_t> asyncUserQueueLimit_ {};
        // The request throttling value.
        shared_ptr<int64_t> requestLimit_ {};
        // The time period for request throttling, in seconds.
        shared_ptr<int32_t> requestLimitPeriod_ {};
        // The usage throttling value.
        shared_ptr<int64_t> usageLimit_ {};
        // The usage throttling unit.
        shared_ptr<string> usageLimitField_ {};
        // The time period for usage throttling, in seconds.
        shared_ptr<int32_t> usageLimitPeriod_ {};
      };

      class ModelLimit : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ModelLimit& obj) { 
          DARABONBA_PTR_TO_JSON(asyncUserConcurrencyLimit, asyncUserConcurrencyLimit_);
          DARABONBA_PTR_TO_JSON(asyncUserQueueLimit, asyncUserQueueLimit_);
          DARABONBA_PTR_TO_JSON(requestLimit, requestLimit_);
          DARABONBA_PTR_TO_JSON(requestLimitPeriod, requestLimitPeriod_);
          DARABONBA_PTR_TO_JSON(usageLimit, usageLimit_);
          DARABONBA_PTR_TO_JSON(usageLimitField, usageLimitField_);
          DARABONBA_PTR_TO_JSON(usageLimitPeriod, usageLimitPeriod_);
        };
        friend void from_json(const Darabonba::Json& j, ModelLimit& obj) { 
          DARABONBA_PTR_FROM_JSON(asyncUserConcurrencyLimit, asyncUserConcurrencyLimit_);
          DARABONBA_PTR_FROM_JSON(asyncUserQueueLimit, asyncUserQueueLimit_);
          DARABONBA_PTR_FROM_JSON(requestLimit, requestLimit_);
          DARABONBA_PTR_FROM_JSON(requestLimitPeriod, requestLimitPeriod_);
          DARABONBA_PTR_FROM_JSON(usageLimit, usageLimit_);
          DARABONBA_PTR_FROM_JSON(usageLimitField, usageLimitField_);
          DARABONBA_PTR_FROM_JSON(usageLimitPeriod, usageLimitPeriod_);
        };
        ModelLimit() = default ;
        ModelLimit(const ModelLimit &) = default ;
        ModelLimit(ModelLimit &&) = default ;
        ModelLimit(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ModelLimit() = default ;
        ModelLimit& operator=(const ModelLimit &) = default ;
        ModelLimit& operator=(ModelLimit &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->asyncUserConcurrencyLimit_ == nullptr
        && this->asyncUserQueueLimit_ == nullptr && this->requestLimit_ == nullptr && this->requestLimitPeriod_ == nullptr && this->usageLimit_ == nullptr && this->usageLimitField_ == nullptr
        && this->usageLimitPeriod_ == nullptr; };
        // asyncUserConcurrencyLimit Field Functions 
        bool hasAsyncUserConcurrencyLimit() const { return this->asyncUserConcurrencyLimit_ != nullptr;};
        void deleteAsyncUserConcurrencyLimit() { this->asyncUserConcurrencyLimit_ = nullptr;};
        inline int64_t getAsyncUserConcurrencyLimit() const { DARABONBA_PTR_GET_DEFAULT(asyncUserConcurrencyLimit_, 0L) };
        inline ModelLimit& setAsyncUserConcurrencyLimit(int64_t asyncUserConcurrencyLimit) { DARABONBA_PTR_SET_VALUE(asyncUserConcurrencyLimit_, asyncUserConcurrencyLimit) };


        // asyncUserQueueLimit Field Functions 
        bool hasAsyncUserQueueLimit() const { return this->asyncUserQueueLimit_ != nullptr;};
        void deleteAsyncUserQueueLimit() { this->asyncUserQueueLimit_ = nullptr;};
        inline int64_t getAsyncUserQueueLimit() const { DARABONBA_PTR_GET_DEFAULT(asyncUserQueueLimit_, 0L) };
        inline ModelLimit& setAsyncUserQueueLimit(int64_t asyncUserQueueLimit) { DARABONBA_PTR_SET_VALUE(asyncUserQueueLimit_, asyncUserQueueLimit) };


        // requestLimit Field Functions 
        bool hasRequestLimit() const { return this->requestLimit_ != nullptr;};
        void deleteRequestLimit() { this->requestLimit_ = nullptr;};
        inline int64_t getRequestLimit() const { DARABONBA_PTR_GET_DEFAULT(requestLimit_, 0L) };
        inline ModelLimit& setRequestLimit(int64_t requestLimit) { DARABONBA_PTR_SET_VALUE(requestLimit_, requestLimit) };


        // requestLimitPeriod Field Functions 
        bool hasRequestLimitPeriod() const { return this->requestLimitPeriod_ != nullptr;};
        void deleteRequestLimitPeriod() { this->requestLimitPeriod_ = nullptr;};
        inline int32_t getRequestLimitPeriod() const { DARABONBA_PTR_GET_DEFAULT(requestLimitPeriod_, 0) };
        inline ModelLimit& setRequestLimitPeriod(int32_t requestLimitPeriod) { DARABONBA_PTR_SET_VALUE(requestLimitPeriod_, requestLimitPeriod) };


        // usageLimit Field Functions 
        bool hasUsageLimit() const { return this->usageLimit_ != nullptr;};
        void deleteUsageLimit() { this->usageLimit_ = nullptr;};
        inline int64_t getUsageLimit() const { DARABONBA_PTR_GET_DEFAULT(usageLimit_, 0L) };
        inline ModelLimit& setUsageLimit(int64_t usageLimit) { DARABONBA_PTR_SET_VALUE(usageLimit_, usageLimit) };


        // usageLimitField Field Functions 
        bool hasUsageLimitField() const { return this->usageLimitField_ != nullptr;};
        void deleteUsageLimitField() { this->usageLimitField_ = nullptr;};
        inline string getUsageLimitField() const { DARABONBA_PTR_GET_DEFAULT(usageLimitField_, "") };
        inline ModelLimit& setUsageLimitField(string usageLimitField) { DARABONBA_PTR_SET_VALUE(usageLimitField_, usageLimitField) };


        // usageLimitPeriod Field Functions 
        bool hasUsageLimitPeriod() const { return this->usageLimitPeriod_ != nullptr;};
        void deleteUsageLimitPeriod() { this->usageLimitPeriod_ = nullptr;};
        inline int32_t getUsageLimitPeriod() const { DARABONBA_PTR_GET_DEFAULT(usageLimitPeriod_, 0) };
        inline ModelLimit& setUsageLimitPeriod(int32_t usageLimitPeriod) { DARABONBA_PTR_SET_VALUE(usageLimitPeriod_, usageLimitPeriod) };


      protected:
        // The maximum concurrency.
        shared_ptr<int64_t> asyncUserConcurrencyLimit_ {};
        // The queue size.
        shared_ptr<int64_t> asyncUserQueueLimit_ {};
        // The request throttling value.
        shared_ptr<int64_t> requestLimit_ {};
        // The time period for request throttling, in seconds.
        shared_ptr<int32_t> requestLimitPeriod_ {};
        // The usage throttling value.
        shared_ptr<int64_t> usageLimit_ {};
        // The usage throttling unit.
        shared_ptr<string> usageLimitField_ {};
        // The time period for usage throttling, in seconds.
        shared_ptr<int32_t> usageLimitPeriod_ {};
      };

      virtual bool empty() const override { return this->model_ == nullptr
        && this->modelLimit_ == nullptr && this->name_ == nullptr && this->workspaceLimit_ == nullptr; };
      // model Field Functions 
      bool hasModel() const { return this->model_ != nullptr;};
      void deleteModel() { this->model_ = nullptr;};
      inline string getModel() const { DARABONBA_PTR_GET_DEFAULT(model_, "") };
      inline Limits& setModel(string model) { DARABONBA_PTR_SET_VALUE(model_, model) };


      // modelLimit Field Functions 
      bool hasModelLimit() const { return this->modelLimit_ != nullptr;};
      void deleteModelLimit() { this->modelLimit_ = nullptr;};
      inline const Limits::ModelLimit & getModelLimit() const { DARABONBA_PTR_GET_CONST(modelLimit_, Limits::ModelLimit) };
      inline Limits::ModelLimit getModelLimit() { DARABONBA_PTR_GET(modelLimit_, Limits::ModelLimit) };
      inline Limits& setModelLimit(const Limits::ModelLimit & modelLimit) { DARABONBA_PTR_SET_VALUE(modelLimit_, modelLimit) };
      inline Limits& setModelLimit(Limits::ModelLimit && modelLimit) { DARABONBA_PTR_SET_RVALUE(modelLimit_, modelLimit) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Limits& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // workspaceLimit Field Functions 
      bool hasWorkspaceLimit() const { return this->workspaceLimit_ != nullptr;};
      void deleteWorkspaceLimit() { this->workspaceLimit_ = nullptr;};
      inline const Limits::WorkspaceLimit & getWorkspaceLimit() const { DARABONBA_PTR_GET_CONST(workspaceLimit_, Limits::WorkspaceLimit) };
      inline Limits::WorkspaceLimit getWorkspaceLimit() { DARABONBA_PTR_GET(workspaceLimit_, Limits::WorkspaceLimit) };
      inline Limits& setWorkspaceLimit(const Limits::WorkspaceLimit & workspaceLimit) { DARABONBA_PTR_SET_VALUE(workspaceLimit_, workspaceLimit) };
      inline Limits& setWorkspaceLimit(Limits::WorkspaceLimit && workspaceLimit) { DARABONBA_PTR_SET_RVALUE(workspaceLimit_, workspaceLimit) };


    protected:
      // The model.
      shared_ptr<string> model_ {};
      // The model throttling configuration for the current user account.
      shared_ptr<Limits::ModelLimit> modelLimit_ {};
      // The model name.
      shared_ptr<string> name_ {};
      // The custom model throttling configuration for the current workspace.
      shared_ptr<Limits::WorkspaceLimit> workspaceLimit_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->errorMessage_ == nullptr && this->httpStatusCode_ == nullptr && this->limits_ == nullptr && this->maxResults_ == nullptr && this->nextToken_ == nullptr
        && this->requestId_ == nullptr && this->success_ == nullptr && this->totalCount_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListModelLimitsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline ListModelLimitsResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int64_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0L) };
    inline ListModelLimitsResponseBody& setHttpStatusCode(int64_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // limits Field Functions 
    bool hasLimits() const { return this->limits_ != nullptr;};
    void deleteLimits() { this->limits_ = nullptr;};
    inline const vector<ListModelLimitsResponseBody::Limits> & getLimits() const { DARABONBA_PTR_GET_CONST(limits_, vector<ListModelLimitsResponseBody::Limits>) };
    inline vector<ListModelLimitsResponseBody::Limits> getLimits() { DARABONBA_PTR_GET(limits_, vector<ListModelLimitsResponseBody::Limits>) };
    inline ListModelLimitsResponseBody& setLimits(const vector<ListModelLimitsResponseBody::Limits> & limits) { DARABONBA_PTR_SET_VALUE(limits_, limits) };
    inline ListModelLimitsResponseBody& setLimits(vector<ListModelLimitsResponseBody::Limits> && limits) { DARABONBA_PTR_SET_RVALUE(limits_, limits) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int64_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0L) };
    inline ListModelLimitsResponseBody& setMaxResults(int64_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListModelLimitsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListModelLimitsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListModelLimitsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListModelLimitsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The response status code.
    shared_ptr<string> code_ {};
    // The error message.
    shared_ptr<string> errorMessage_ {};
    // The HTTP status code.
    shared_ptr<int64_t> httpStatusCode_ {};
    // The model throttling information.
    shared_ptr<vector<ListModelLimitsResponseBody::Limits>> limits_ {};
    // The maximum number of records returned in a single request.
    shared_ptr<int64_t> maxResults_ {};
    // The token for the next request.
    shared_ptr<string> nextToken_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    // Indicates whether the API call was successful.
    shared_ptr<bool> success_ {};
    // The total number of records.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ModelStudio20260210
#endif
