// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYMPSSCHEDULERLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYMPSSCHEDULERLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20201028
{
namespace Models
{
  class QueryMpsSchedulerListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryMpsSchedulerListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResultCode, resultCode_);
      DARABONBA_PTR_TO_JSON(ResultContent, resultContent_);
      DARABONBA_PTR_TO_JSON(ResultMessage, resultMessage_);
    };
    friend void from_json(const Darabonba::Json& j, QueryMpsSchedulerListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResultCode, resultCode_);
      DARABONBA_PTR_FROM_JSON(ResultContent, resultContent_);
      DARABONBA_PTR_FROM_JSON(ResultMessage, resultMessage_);
    };
    QueryMpsSchedulerListResponseBody() = default ;
    QueryMpsSchedulerListResponseBody(const QueryMpsSchedulerListResponseBody &) = default ;
    QueryMpsSchedulerListResponseBody(QueryMpsSchedulerListResponseBody &&) = default ;
    QueryMpsSchedulerListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryMpsSchedulerListResponseBody() = default ;
    QueryMpsSchedulerListResponseBody& operator=(const QueryMpsSchedulerListResponseBody &) = default ;
    QueryMpsSchedulerListResponseBody& operator=(QueryMpsSchedulerListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ResultContent : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResultContent& obj) { 
        DARABONBA_PTR_TO_JSON(Data, data_);
      };
      friend void from_json(const Darabonba::Json& j, ResultContent& obj) { 
        DARABONBA_PTR_FROM_JSON(Data, data_);
      };
      ResultContent() = default ;
      ResultContent(const ResultContent &) = default ;
      ResultContent(ResultContent &&) = default ;
      ResultContent(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ResultContent() = default ;
      ResultContent& operator=(const ResultContent &) = default ;
      ResultContent& operator=(ResultContent &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Data : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Data& obj) { 
          DARABONBA_PTR_TO_JSON(List, list_);
          DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
        };
        friend void from_json(const Darabonba::Json& j, Data& obj) { 
          DARABONBA_PTR_FROM_JSON(List, list_);
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
            DARABONBA_PTR_TO_JSON(CreateType, createType_);
            DARABONBA_PTR_TO_JSON(DeliveryType, deliveryType_);
            DARABONBA_PTR_TO_JSON(ExecutedStatus, executedStatus_);
            DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
            DARABONBA_PTR_TO_JSON(ParentId, parentId_);
            DARABONBA_PTR_TO_JSON(PushContent, pushContent_);
            DARABONBA_PTR_TO_JSON(PushTime, pushTime_);
            DARABONBA_PTR_TO_JSON(PushTitle, pushTitle_);
            DARABONBA_PTR_TO_JSON(StrategyType, strategyType_);
            DARABONBA_PTR_TO_JSON(Type, type_);
            DARABONBA_PTR_TO_JSON(UniqueId, uniqueId_);
          };
          friend void from_json(const Darabonba::Json& j, List& obj) { 
            DARABONBA_PTR_FROM_JSON(CreateType, createType_);
            DARABONBA_PTR_FROM_JSON(DeliveryType, deliveryType_);
            DARABONBA_PTR_FROM_JSON(ExecutedStatus, executedStatus_);
            DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
            DARABONBA_PTR_FROM_JSON(ParentId, parentId_);
            DARABONBA_PTR_FROM_JSON(PushContent, pushContent_);
            DARABONBA_PTR_FROM_JSON(PushTime, pushTime_);
            DARABONBA_PTR_FROM_JSON(PushTitle, pushTitle_);
            DARABONBA_PTR_FROM_JSON(StrategyType, strategyType_);
            DARABONBA_PTR_FROM_JSON(Type, type_);
            DARABONBA_PTR_FROM_JSON(UniqueId, uniqueId_);
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
          virtual bool empty() const override { return this->createType_ == nullptr
        && this->deliveryType_ == nullptr && this->executedStatus_ == nullptr && this->gmtCreate_ == nullptr && this->parentId_ == nullptr && this->pushContent_ == nullptr
        && this->pushTime_ == nullptr && this->pushTitle_ == nullptr && this->strategyType_ == nullptr && this->type_ == nullptr && this->uniqueId_ == nullptr; };
          // createType Field Functions 
          bool hasCreateType() const { return this->createType_ != nullptr;};
          void deleteCreateType() { this->createType_ = nullptr;};
          inline int32_t getCreateType() const { DARABONBA_PTR_GET_DEFAULT(createType_, 0) };
          inline List& setCreateType(int32_t createType) { DARABONBA_PTR_SET_VALUE(createType_, createType) };


          // deliveryType Field Functions 
          bool hasDeliveryType() const { return this->deliveryType_ != nullptr;};
          void deleteDeliveryType() { this->deliveryType_ = nullptr;};
          inline int32_t getDeliveryType() const { DARABONBA_PTR_GET_DEFAULT(deliveryType_, 0) };
          inline List& setDeliveryType(int32_t deliveryType) { DARABONBA_PTR_SET_VALUE(deliveryType_, deliveryType) };


          // executedStatus Field Functions 
          bool hasExecutedStatus() const { return this->executedStatus_ != nullptr;};
          void deleteExecutedStatus() { this->executedStatus_ = nullptr;};
          inline string getExecutedStatus() const { DARABONBA_PTR_GET_DEFAULT(executedStatus_, "") };
          inline List& setExecutedStatus(string executedStatus) { DARABONBA_PTR_SET_VALUE(executedStatus_, executedStatus) };


          // gmtCreate Field Functions 
          bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
          void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
          inline int64_t getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0L) };
          inline List& setGmtCreate(int64_t gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


          // parentId Field Functions 
          bool hasParentId() const { return this->parentId_ != nullptr;};
          void deleteParentId() { this->parentId_ = nullptr;};
          inline string getParentId() const { DARABONBA_PTR_GET_DEFAULT(parentId_, "") };
          inline List& setParentId(string parentId) { DARABONBA_PTR_SET_VALUE(parentId_, parentId) };


          // pushContent Field Functions 
          bool hasPushContent() const { return this->pushContent_ != nullptr;};
          void deletePushContent() { this->pushContent_ = nullptr;};
          inline string getPushContent() const { DARABONBA_PTR_GET_DEFAULT(pushContent_, "") };
          inline List& setPushContent(string pushContent) { DARABONBA_PTR_SET_VALUE(pushContent_, pushContent) };


          // pushTime Field Functions 
          bool hasPushTime() const { return this->pushTime_ != nullptr;};
          void deletePushTime() { this->pushTime_ = nullptr;};
          inline int64_t getPushTime() const { DARABONBA_PTR_GET_DEFAULT(pushTime_, 0L) };
          inline List& setPushTime(int64_t pushTime) { DARABONBA_PTR_SET_VALUE(pushTime_, pushTime) };


          // pushTitle Field Functions 
          bool hasPushTitle() const { return this->pushTitle_ != nullptr;};
          void deletePushTitle() { this->pushTitle_ = nullptr;};
          inline string getPushTitle() const { DARABONBA_PTR_GET_DEFAULT(pushTitle_, "") };
          inline List& setPushTitle(string pushTitle) { DARABONBA_PTR_SET_VALUE(pushTitle_, pushTitle) };


          // strategyType Field Functions 
          bool hasStrategyType() const { return this->strategyType_ != nullptr;};
          void deleteStrategyType() { this->strategyType_ = nullptr;};
          inline int32_t getStrategyType() const { DARABONBA_PTR_GET_DEFAULT(strategyType_, 0) };
          inline List& setStrategyType(int32_t strategyType) { DARABONBA_PTR_SET_VALUE(strategyType_, strategyType) };


          // type Field Functions 
          bool hasType() const { return this->type_ != nullptr;};
          void deleteType() { this->type_ = nullptr;};
          inline int32_t getType() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
          inline List& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


          // uniqueId Field Functions 
          bool hasUniqueId() const { return this->uniqueId_ != nullptr;};
          void deleteUniqueId() { this->uniqueId_ = nullptr;};
          inline string getUniqueId() const { DARABONBA_PTR_GET_DEFAULT(uniqueId_, "") };
          inline List& setUniqueId(string uniqueId) { DARABONBA_PTR_SET_VALUE(uniqueId_, uniqueId) };


        protected:
          shared_ptr<int32_t> createType_ {};
          shared_ptr<int32_t> deliveryType_ {};
          shared_ptr<string> executedStatus_ {};
          shared_ptr<int64_t> gmtCreate_ {};
          shared_ptr<string> parentId_ {};
          shared_ptr<string> pushContent_ {};
          shared_ptr<int64_t> pushTime_ {};
          shared_ptr<string> pushTitle_ {};
          shared_ptr<int32_t> strategyType_ {};
          shared_ptr<int32_t> type_ {};
          shared_ptr<string> uniqueId_ {};
        };

        virtual bool empty() const override { return this->list_ == nullptr
        && this->totalCount_ == nullptr; };
        // list Field Functions 
        bool hasList() const { return this->list_ != nullptr;};
        void deleteList() { this->list_ = nullptr;};
        inline const vector<Data::List> & getList() const { DARABONBA_PTR_GET_CONST(list_, vector<Data::List>) };
        inline vector<Data::List> getList() { DARABONBA_PTR_GET(list_, vector<Data::List>) };
        inline Data& setList(const vector<Data::List> & list) { DARABONBA_PTR_SET_VALUE(list_, list) };
        inline Data& setList(vector<Data::List> && list) { DARABONBA_PTR_SET_RVALUE(list_, list) };


        // totalCount Field Functions 
        bool hasTotalCount() const { return this->totalCount_ != nullptr;};
        void deleteTotalCount() { this->totalCount_ = nullptr;};
        inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
        inline Data& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


      protected:
        shared_ptr<vector<Data::List>> list_ {};
        shared_ptr<int32_t> totalCount_ {};
      };

      virtual bool empty() const override { return this->data_ == nullptr; };
      // data Field Functions 
      bool hasData() const { return this->data_ != nullptr;};
      void deleteData() { this->data_ = nullptr;};
      inline const ResultContent::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ResultContent::Data) };
      inline ResultContent::Data getData() { DARABONBA_PTR_GET(data_, ResultContent::Data) };
      inline ResultContent& setData(const ResultContent::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
      inline ResultContent& setData(ResultContent::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    protected:
      shared_ptr<ResultContent::Data> data_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->resultCode_ == nullptr && this->resultContent_ == nullptr && this->resultMessage_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryMpsSchedulerListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultCode Field Functions 
    bool hasResultCode() const { return this->resultCode_ != nullptr;};
    void deleteResultCode() { this->resultCode_ = nullptr;};
    inline string getResultCode() const { DARABONBA_PTR_GET_DEFAULT(resultCode_, "") };
    inline QueryMpsSchedulerListResponseBody& setResultCode(string resultCode) { DARABONBA_PTR_SET_VALUE(resultCode_, resultCode) };


    // resultContent Field Functions 
    bool hasResultContent() const { return this->resultContent_ != nullptr;};
    void deleteResultContent() { this->resultContent_ = nullptr;};
    inline const QueryMpsSchedulerListResponseBody::ResultContent & getResultContent() const { DARABONBA_PTR_GET_CONST(resultContent_, QueryMpsSchedulerListResponseBody::ResultContent) };
    inline QueryMpsSchedulerListResponseBody::ResultContent getResultContent() { DARABONBA_PTR_GET(resultContent_, QueryMpsSchedulerListResponseBody::ResultContent) };
    inline QueryMpsSchedulerListResponseBody& setResultContent(const QueryMpsSchedulerListResponseBody::ResultContent & resultContent) { DARABONBA_PTR_SET_VALUE(resultContent_, resultContent) };
    inline QueryMpsSchedulerListResponseBody& setResultContent(QueryMpsSchedulerListResponseBody::ResultContent && resultContent) { DARABONBA_PTR_SET_RVALUE(resultContent_, resultContent) };


    // resultMessage Field Functions 
    bool hasResultMessage() const { return this->resultMessage_ != nullptr;};
    void deleteResultMessage() { this->resultMessage_ = nullptr;};
    inline string getResultMessage() const { DARABONBA_PTR_GET_DEFAULT(resultMessage_, "") };
    inline QueryMpsSchedulerListResponseBody& setResultMessage(string resultMessage) { DARABONBA_PTR_SET_VALUE(resultMessage_, resultMessage) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<string> resultCode_ {};
    shared_ptr<QueryMpsSchedulerListResponseBody::ResultContent> resultContent_ {};
    shared_ptr<string> resultMessage_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif
