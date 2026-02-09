// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYPUSHANALYSISCOREINDEXRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYPUSHANALYSISCOREINDEXRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20201028
{
namespace Models
{
  class QueryPushAnalysisCoreIndexResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryPushAnalysisCoreIndexResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResultCode, resultCode_);
      DARABONBA_PTR_TO_JSON(ResultContent, resultContent_);
      DARABONBA_PTR_TO_JSON(ResultMessage, resultMessage_);
    };
    friend void from_json(const Darabonba::Json& j, QueryPushAnalysisCoreIndexResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResultCode, resultCode_);
      DARABONBA_PTR_FROM_JSON(ResultContent, resultContent_);
      DARABONBA_PTR_FROM_JSON(ResultMessage, resultMessage_);
    };
    QueryPushAnalysisCoreIndexResponseBody() = default ;
    QueryPushAnalysisCoreIndexResponseBody(const QueryPushAnalysisCoreIndexResponseBody &) = default ;
    QueryPushAnalysisCoreIndexResponseBody(QueryPushAnalysisCoreIndexResponseBody &&) = default ;
    QueryPushAnalysisCoreIndexResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryPushAnalysisCoreIndexResponseBody() = default ;
    QueryPushAnalysisCoreIndexResponseBody& operator=(const QueryPushAnalysisCoreIndexResponseBody &) = default ;
    QueryPushAnalysisCoreIndexResponseBody& operator=(QueryPushAnalysisCoreIndexResponseBody &&) = default ;
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
          DARABONBA_PTR_TO_JSON(ArrivalNum, arrivalNum_);
          DARABONBA_PTR_TO_JSON(ArrivalRate, arrivalRate_);
          DARABONBA_PTR_TO_JSON(IgnoreNum, ignoreNum_);
          DARABONBA_PTR_TO_JSON(IgnoreRate, ignoreRate_);
          DARABONBA_PTR_TO_JSON(OpenNum, openNum_);
          DARABONBA_PTR_TO_JSON(OpenRate, openRate_);
          DARABONBA_PTR_TO_JSON(PushNum, pushNum_);
          DARABONBA_PTR_TO_JSON(PushTotalNum, pushTotalNum_);
        };
        friend void from_json(const Darabonba::Json& j, Data& obj) { 
          DARABONBA_PTR_FROM_JSON(ArrivalNum, arrivalNum_);
          DARABONBA_PTR_FROM_JSON(ArrivalRate, arrivalRate_);
          DARABONBA_PTR_FROM_JSON(IgnoreNum, ignoreNum_);
          DARABONBA_PTR_FROM_JSON(IgnoreRate, ignoreRate_);
          DARABONBA_PTR_FROM_JSON(OpenNum, openNum_);
          DARABONBA_PTR_FROM_JSON(OpenRate, openRate_);
          DARABONBA_PTR_FROM_JSON(PushNum, pushNum_);
          DARABONBA_PTR_FROM_JSON(PushTotalNum, pushTotalNum_);
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
        virtual bool empty() const override { return this->arrivalNum_ == nullptr
        && this->arrivalRate_ == nullptr && this->ignoreNum_ == nullptr && this->ignoreRate_ == nullptr && this->openNum_ == nullptr && this->openRate_ == nullptr
        && this->pushNum_ == nullptr && this->pushTotalNum_ == nullptr; };
        // arrivalNum Field Functions 
        bool hasArrivalNum() const { return this->arrivalNum_ != nullptr;};
        void deleteArrivalNum() { this->arrivalNum_ = nullptr;};
        inline float getArrivalNum() const { DARABONBA_PTR_GET_DEFAULT(arrivalNum_, 0.0) };
        inline Data& setArrivalNum(float arrivalNum) { DARABONBA_PTR_SET_VALUE(arrivalNum_, arrivalNum) };


        // arrivalRate Field Functions 
        bool hasArrivalRate() const { return this->arrivalRate_ != nullptr;};
        void deleteArrivalRate() { this->arrivalRate_ = nullptr;};
        inline float getArrivalRate() const { DARABONBA_PTR_GET_DEFAULT(arrivalRate_, 0.0) };
        inline Data& setArrivalRate(float arrivalRate) { DARABONBA_PTR_SET_VALUE(arrivalRate_, arrivalRate) };


        // ignoreNum Field Functions 
        bool hasIgnoreNum() const { return this->ignoreNum_ != nullptr;};
        void deleteIgnoreNum() { this->ignoreNum_ = nullptr;};
        inline float getIgnoreNum() const { DARABONBA_PTR_GET_DEFAULT(ignoreNum_, 0.0) };
        inline Data& setIgnoreNum(float ignoreNum) { DARABONBA_PTR_SET_VALUE(ignoreNum_, ignoreNum) };


        // ignoreRate Field Functions 
        bool hasIgnoreRate() const { return this->ignoreRate_ != nullptr;};
        void deleteIgnoreRate() { this->ignoreRate_ = nullptr;};
        inline float getIgnoreRate() const { DARABONBA_PTR_GET_DEFAULT(ignoreRate_, 0.0) };
        inline Data& setIgnoreRate(float ignoreRate) { DARABONBA_PTR_SET_VALUE(ignoreRate_, ignoreRate) };


        // openNum Field Functions 
        bool hasOpenNum() const { return this->openNum_ != nullptr;};
        void deleteOpenNum() { this->openNum_ = nullptr;};
        inline float getOpenNum() const { DARABONBA_PTR_GET_DEFAULT(openNum_, 0.0) };
        inline Data& setOpenNum(float openNum) { DARABONBA_PTR_SET_VALUE(openNum_, openNum) };


        // openRate Field Functions 
        bool hasOpenRate() const { return this->openRate_ != nullptr;};
        void deleteOpenRate() { this->openRate_ = nullptr;};
        inline float getOpenRate() const { DARABONBA_PTR_GET_DEFAULT(openRate_, 0.0) };
        inline Data& setOpenRate(float openRate) { DARABONBA_PTR_SET_VALUE(openRate_, openRate) };


        // pushNum Field Functions 
        bool hasPushNum() const { return this->pushNum_ != nullptr;};
        void deletePushNum() { this->pushNum_ = nullptr;};
        inline float getPushNum() const { DARABONBA_PTR_GET_DEFAULT(pushNum_, 0.0) };
        inline Data& setPushNum(float pushNum) { DARABONBA_PTR_SET_VALUE(pushNum_, pushNum) };


        // pushTotalNum Field Functions 
        bool hasPushTotalNum() const { return this->pushTotalNum_ != nullptr;};
        void deletePushTotalNum() { this->pushTotalNum_ = nullptr;};
        inline float getPushTotalNum() const { DARABONBA_PTR_GET_DEFAULT(pushTotalNum_, 0.0) };
        inline Data& setPushTotalNum(float pushTotalNum) { DARABONBA_PTR_SET_VALUE(pushTotalNum_, pushTotalNum) };


      protected:
        shared_ptr<float> arrivalNum_ {};
        shared_ptr<float> arrivalRate_ {};
        shared_ptr<float> ignoreNum_ {};
        shared_ptr<float> ignoreRate_ {};
        shared_ptr<float> openNum_ {};
        shared_ptr<float> openRate_ {};
        shared_ptr<float> pushNum_ {};
        shared_ptr<float> pushTotalNum_ {};
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
    inline QueryPushAnalysisCoreIndexResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultCode Field Functions 
    bool hasResultCode() const { return this->resultCode_ != nullptr;};
    void deleteResultCode() { this->resultCode_ = nullptr;};
    inline string getResultCode() const { DARABONBA_PTR_GET_DEFAULT(resultCode_, "") };
    inline QueryPushAnalysisCoreIndexResponseBody& setResultCode(string resultCode) { DARABONBA_PTR_SET_VALUE(resultCode_, resultCode) };


    // resultContent Field Functions 
    bool hasResultContent() const { return this->resultContent_ != nullptr;};
    void deleteResultContent() { this->resultContent_ = nullptr;};
    inline const QueryPushAnalysisCoreIndexResponseBody::ResultContent & getResultContent() const { DARABONBA_PTR_GET_CONST(resultContent_, QueryPushAnalysisCoreIndexResponseBody::ResultContent) };
    inline QueryPushAnalysisCoreIndexResponseBody::ResultContent getResultContent() { DARABONBA_PTR_GET(resultContent_, QueryPushAnalysisCoreIndexResponseBody::ResultContent) };
    inline QueryPushAnalysisCoreIndexResponseBody& setResultContent(const QueryPushAnalysisCoreIndexResponseBody::ResultContent & resultContent) { DARABONBA_PTR_SET_VALUE(resultContent_, resultContent) };
    inline QueryPushAnalysisCoreIndexResponseBody& setResultContent(QueryPushAnalysisCoreIndexResponseBody::ResultContent && resultContent) { DARABONBA_PTR_SET_RVALUE(resultContent_, resultContent) };


    // resultMessage Field Functions 
    bool hasResultMessage() const { return this->resultMessage_ != nullptr;};
    void deleteResultMessage() { this->resultMessage_ = nullptr;};
    inline string getResultMessage() const { DARABONBA_PTR_GET_DEFAULT(resultMessage_, "") };
    inline QueryPushAnalysisCoreIndexResponseBody& setResultMessage(string resultMessage) { DARABONBA_PTR_SET_VALUE(resultMessage_, resultMessage) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<string> resultCode_ {};
    shared_ptr<QueryPushAnalysisCoreIndexResponseBody::ResultContent> resultContent_ {};
    shared_ptr<string> resultMessage_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif
