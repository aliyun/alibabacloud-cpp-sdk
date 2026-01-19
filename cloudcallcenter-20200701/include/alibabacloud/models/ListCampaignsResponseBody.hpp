// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCAMPAIGNSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCAMPAIGNSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudCallCenter20200701
{
namespace Models
{
  class ListCampaignsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCampaignsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListCampaignsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListCampaignsResponseBody() = default ;
    ListCampaignsResponseBody(const ListCampaignsResponseBody &) = default ;
    ListCampaignsResponseBody(ListCampaignsResponseBody &&) = default ;
    ListCampaignsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCampaignsResponseBody() = default ;
    ListCampaignsResponseBody& operator=(const ListCampaignsResponseBody &) = default ;
    ListCampaignsResponseBody& operator=(ListCampaignsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(List, list_);
        DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(List, list_);
        DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
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
      class List : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const List& obj) { 
          DARABONBA_PTR_TO_JSON(ActualEndTime, actualEndTime_);
          DARABONBA_PTR_TO_JSON(ActualStartTime, actualStartTime_);
          DARABONBA_PTR_TO_JSON(CampaignId, campaignId_);
          DARABONBA_PTR_TO_JSON(CasesAborted, casesAborted_);
          DARABONBA_PTR_TO_JSON(CasesConnected, casesConnected_);
          DARABONBA_PTR_TO_JSON(CasesUncompleted, casesUncompleted_);
          DARABONBA_PTR_TO_JSON(CompletedRate, completedRate_);
          DARABONBA_PTR_TO_JSON(MaxAttemptCount, maxAttemptCount_);
          DARABONBA_PTR_TO_JSON(MinAttemptInterval, minAttemptInterval_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(PlanedEndTime, planedEndTime_);
          DARABONBA_PTR_TO_JSON(PlanedStartTime, planedStartTime_);
          DARABONBA_PTR_TO_JSON(QueueId, queueId_);
          DARABONBA_PTR_TO_JSON(QueueName, queueName_);
          DARABONBA_PTR_TO_JSON(Simulation, simulation_);
          DARABONBA_PTR_TO_JSON(State, state_);
          DARABONBA_PTR_TO_JSON(StrategyParameters, strategyParameters_);
          DARABONBA_PTR_TO_JSON(StrategyType, strategyType_);
          DARABONBA_PTR_TO_JSON(TotalCases, totalCases_);
        };
        friend void from_json(const Darabonba::Json& j, List& obj) { 
          DARABONBA_PTR_FROM_JSON(ActualEndTime, actualEndTime_);
          DARABONBA_PTR_FROM_JSON(ActualStartTime, actualStartTime_);
          DARABONBA_PTR_FROM_JSON(CampaignId, campaignId_);
          DARABONBA_PTR_FROM_JSON(CasesAborted, casesAborted_);
          DARABONBA_PTR_FROM_JSON(CasesConnected, casesConnected_);
          DARABONBA_PTR_FROM_JSON(CasesUncompleted, casesUncompleted_);
          DARABONBA_PTR_FROM_JSON(CompletedRate, completedRate_);
          DARABONBA_PTR_FROM_JSON(MaxAttemptCount, maxAttemptCount_);
          DARABONBA_PTR_FROM_JSON(MinAttemptInterval, minAttemptInterval_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(PlanedEndTime, planedEndTime_);
          DARABONBA_PTR_FROM_JSON(PlanedStartTime, planedStartTime_);
          DARABONBA_PTR_FROM_JSON(QueueId, queueId_);
          DARABONBA_PTR_FROM_JSON(QueueName, queueName_);
          DARABONBA_PTR_FROM_JSON(Simulation, simulation_);
          DARABONBA_PTR_FROM_JSON(State, state_);
          DARABONBA_PTR_FROM_JSON(StrategyParameters, strategyParameters_);
          DARABONBA_PTR_FROM_JSON(StrategyType, strategyType_);
          DARABONBA_PTR_FROM_JSON(TotalCases, totalCases_);
        };
        List() = default ;
        List(const List &) = default ;
        List(List &&) = default ;
        List(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~List() = default ;
        List& operator=(const List &) = default ;
        List& operator=(List &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->actualEndTime_ == nullptr
        && this->actualStartTime_ == nullptr && this->campaignId_ == nullptr && this->casesAborted_ == nullptr && this->casesConnected_ == nullptr && this->casesUncompleted_ == nullptr
        && this->completedRate_ == nullptr && this->maxAttemptCount_ == nullptr && this->minAttemptInterval_ == nullptr && this->name_ == nullptr && this->planedEndTime_ == nullptr
        && this->planedStartTime_ == nullptr && this->queueId_ == nullptr && this->queueName_ == nullptr && this->simulation_ == nullptr && this->state_ == nullptr
        && this->strategyParameters_ == nullptr && this->strategyType_ == nullptr && this->totalCases_ == nullptr; };
        // actualEndTime Field Functions 
        bool hasActualEndTime() const { return this->actualEndTime_ != nullptr;};
        void deleteActualEndTime() { this->actualEndTime_ = nullptr;};
        inline int64_t getActualEndTime() const { DARABONBA_PTR_GET_DEFAULT(actualEndTime_, 0L) };
        inline List& setActualEndTime(int64_t actualEndTime) { DARABONBA_PTR_SET_VALUE(actualEndTime_, actualEndTime) };


        // actualStartTime Field Functions 
        bool hasActualStartTime() const { return this->actualStartTime_ != nullptr;};
        void deleteActualStartTime() { this->actualStartTime_ = nullptr;};
        inline int64_t getActualStartTime() const { DARABONBA_PTR_GET_DEFAULT(actualStartTime_, 0L) };
        inline List& setActualStartTime(int64_t actualStartTime) { DARABONBA_PTR_SET_VALUE(actualStartTime_, actualStartTime) };


        // campaignId Field Functions 
        bool hasCampaignId() const { return this->campaignId_ != nullptr;};
        void deleteCampaignId() { this->campaignId_ = nullptr;};
        inline string getCampaignId() const { DARABONBA_PTR_GET_DEFAULT(campaignId_, "") };
        inline List& setCampaignId(string campaignId) { DARABONBA_PTR_SET_VALUE(campaignId_, campaignId) };


        // casesAborted Field Functions 
        bool hasCasesAborted() const { return this->casesAborted_ != nullptr;};
        void deleteCasesAborted() { this->casesAborted_ = nullptr;};
        inline int64_t getCasesAborted() const { DARABONBA_PTR_GET_DEFAULT(casesAborted_, 0L) };
        inline List& setCasesAborted(int64_t casesAborted) { DARABONBA_PTR_SET_VALUE(casesAborted_, casesAborted) };


        // casesConnected Field Functions 
        bool hasCasesConnected() const { return this->casesConnected_ != nullptr;};
        void deleteCasesConnected() { this->casesConnected_ = nullptr;};
        inline int64_t getCasesConnected() const { DARABONBA_PTR_GET_DEFAULT(casesConnected_, 0L) };
        inline List& setCasesConnected(int64_t casesConnected) { DARABONBA_PTR_SET_VALUE(casesConnected_, casesConnected) };


        // casesUncompleted Field Functions 
        bool hasCasesUncompleted() const { return this->casesUncompleted_ != nullptr;};
        void deleteCasesUncompleted() { this->casesUncompleted_ = nullptr;};
        inline int64_t getCasesUncompleted() const { DARABONBA_PTR_GET_DEFAULT(casesUncompleted_, 0L) };
        inline List& setCasesUncompleted(int64_t casesUncompleted) { DARABONBA_PTR_SET_VALUE(casesUncompleted_, casesUncompleted) };


        // completedRate Field Functions 
        bool hasCompletedRate() const { return this->completedRate_ != nullptr;};
        void deleteCompletedRate() { this->completedRate_ = nullptr;};
        inline int64_t getCompletedRate() const { DARABONBA_PTR_GET_DEFAULT(completedRate_, 0L) };
        inline List& setCompletedRate(int64_t completedRate) { DARABONBA_PTR_SET_VALUE(completedRate_, completedRate) };


        // maxAttemptCount Field Functions 
        bool hasMaxAttemptCount() const { return this->maxAttemptCount_ != nullptr;};
        void deleteMaxAttemptCount() { this->maxAttemptCount_ = nullptr;};
        inline int64_t getMaxAttemptCount() const { DARABONBA_PTR_GET_DEFAULT(maxAttemptCount_, 0L) };
        inline List& setMaxAttemptCount(int64_t maxAttemptCount) { DARABONBA_PTR_SET_VALUE(maxAttemptCount_, maxAttemptCount) };


        // minAttemptInterval Field Functions 
        bool hasMinAttemptInterval() const { return this->minAttemptInterval_ != nullptr;};
        void deleteMinAttemptInterval() { this->minAttemptInterval_ = nullptr;};
        inline int64_t getMinAttemptInterval() const { DARABONBA_PTR_GET_DEFAULT(minAttemptInterval_, 0L) };
        inline List& setMinAttemptInterval(int64_t minAttemptInterval) { DARABONBA_PTR_SET_VALUE(minAttemptInterval_, minAttemptInterval) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline List& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // planedEndTime Field Functions 
        bool hasPlanedEndTime() const { return this->planedEndTime_ != nullptr;};
        void deletePlanedEndTime() { this->planedEndTime_ = nullptr;};
        inline int64_t getPlanedEndTime() const { DARABONBA_PTR_GET_DEFAULT(planedEndTime_, 0L) };
        inline List& setPlanedEndTime(int64_t planedEndTime) { DARABONBA_PTR_SET_VALUE(planedEndTime_, planedEndTime) };


        // planedStartTime Field Functions 
        bool hasPlanedStartTime() const { return this->planedStartTime_ != nullptr;};
        void deletePlanedStartTime() { this->planedStartTime_ = nullptr;};
        inline int64_t getPlanedStartTime() const { DARABONBA_PTR_GET_DEFAULT(planedStartTime_, 0L) };
        inline List& setPlanedStartTime(int64_t planedStartTime) { DARABONBA_PTR_SET_VALUE(planedStartTime_, planedStartTime) };


        // queueId Field Functions 
        bool hasQueueId() const { return this->queueId_ != nullptr;};
        void deleteQueueId() { this->queueId_ = nullptr;};
        inline string getQueueId() const { DARABONBA_PTR_GET_DEFAULT(queueId_, "") };
        inline List& setQueueId(string queueId) { DARABONBA_PTR_SET_VALUE(queueId_, queueId) };


        // queueName Field Functions 
        bool hasQueueName() const { return this->queueName_ != nullptr;};
        void deleteQueueName() { this->queueName_ = nullptr;};
        inline string getQueueName() const { DARABONBA_PTR_GET_DEFAULT(queueName_, "") };
        inline List& setQueueName(string queueName) { DARABONBA_PTR_SET_VALUE(queueName_, queueName) };


        // simulation Field Functions 
        bool hasSimulation() const { return this->simulation_ != nullptr;};
        void deleteSimulation() { this->simulation_ = nullptr;};
        inline bool getSimulation() const { DARABONBA_PTR_GET_DEFAULT(simulation_, false) };
        inline List& setSimulation(bool simulation) { DARABONBA_PTR_SET_VALUE(simulation_, simulation) };


        // state Field Functions 
        bool hasState() const { return this->state_ != nullptr;};
        void deleteState() { this->state_ = nullptr;};
        inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
        inline List& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


        // strategyParameters Field Functions 
        bool hasStrategyParameters() const { return this->strategyParameters_ != nullptr;};
        void deleteStrategyParameters() { this->strategyParameters_ = nullptr;};
        inline string getStrategyParameters() const { DARABONBA_PTR_GET_DEFAULT(strategyParameters_, "") };
        inline List& setStrategyParameters(string strategyParameters) { DARABONBA_PTR_SET_VALUE(strategyParameters_, strategyParameters) };


        // strategyType Field Functions 
        bool hasStrategyType() const { return this->strategyType_ != nullptr;};
        void deleteStrategyType() { this->strategyType_ = nullptr;};
        inline string getStrategyType() const { DARABONBA_PTR_GET_DEFAULT(strategyType_, "") };
        inline List& setStrategyType(string strategyType) { DARABONBA_PTR_SET_VALUE(strategyType_, strategyType) };


        // totalCases Field Functions 
        bool hasTotalCases() const { return this->totalCases_ != nullptr;};
        void deleteTotalCases() { this->totalCases_ = nullptr;};
        inline int64_t getTotalCases() const { DARABONBA_PTR_GET_DEFAULT(totalCases_, 0L) };
        inline List& setTotalCases(int64_t totalCases) { DARABONBA_PTR_SET_VALUE(totalCases_, totalCases) };


      protected:
        shared_ptr<int64_t> actualEndTime_ {};
        shared_ptr<int64_t> actualStartTime_ {};
        shared_ptr<string> campaignId_ {};
        shared_ptr<int64_t> casesAborted_ {};
        shared_ptr<int64_t> casesConnected_ {};
        shared_ptr<int64_t> casesUncompleted_ {};
        shared_ptr<int64_t> completedRate_ {};
        shared_ptr<int64_t> maxAttemptCount_ {};
        shared_ptr<int64_t> minAttemptInterval_ {};
        shared_ptr<string> name_ {};
        shared_ptr<int64_t> planedEndTime_ {};
        shared_ptr<int64_t> planedStartTime_ {};
        shared_ptr<string> queueId_ {};
        shared_ptr<string> queueName_ {};
        shared_ptr<bool> simulation_ {};
        shared_ptr<string> state_ {};
        shared_ptr<string> strategyParameters_ {};
        shared_ptr<string> strategyType_ {};
        shared_ptr<int64_t> totalCases_ {};
      };

      virtual bool empty() const override { return this->list_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
      // list Field Functions 
      bool hasList() const { return this->list_ != nullptr;};
      void deleteList() { this->list_ = nullptr;};
      inline const vector<Data::List> & getList() const { DARABONBA_PTR_GET_CONST(list_, vector<Data::List>) };
      inline vector<Data::List> getList() { DARABONBA_PTR_GET(list_, vector<Data::List>) };
      inline Data& setList(const vector<Data::List> & list) { DARABONBA_PTR_SET_VALUE(list_, list) };
      inline Data& setList(vector<Data::List> && list) { DARABONBA_PTR_SET_RVALUE(list_, list) };


      // pageNumber Field Functions 
      bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
      void deletePageNumber() { this->pageNumber_ = nullptr;};
      inline int64_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
      inline Data& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
      inline Data& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
      inline Data& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      shared_ptr<vector<Data::List>> list_ {};
      shared_ptr<int64_t> pageNumber_ {};
      shared_ptr<int64_t> pageSize_ {};
      shared_ptr<int64_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListCampaignsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListCampaignsResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListCampaignsResponseBody::Data) };
    inline ListCampaignsResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListCampaignsResponseBody::Data) };
    inline ListCampaignsResponseBody& setData(const ListCampaignsResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListCampaignsResponseBody& setData(ListCampaignsResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int64_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0L) };
    inline ListCampaignsResponseBody& setHttpStatusCode(int64_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListCampaignsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListCampaignsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListCampaignsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<ListCampaignsResponseBody::Data> data_ {};
    shared_ptr<int64_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudCallCenter20200701
#endif
