// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLIVYCOMPUTERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTLIVYCOMPUTERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmrServerlessSpark20230808
{
namespace Models
{
  class ListLivyComputeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListLivyComputeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListLivyComputeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    ListLivyComputeResponseBody() = default ;
    ListLivyComputeResponseBody(const ListLivyComputeResponseBody &) = default ;
    ListLivyComputeResponseBody(ListLivyComputeResponseBody &&) = default ;
    ListLivyComputeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListLivyComputeResponseBody() = default ;
    ListLivyComputeResponseBody& operator=(const ListLivyComputeResponseBody &) = default ;
    ListLivyComputeResponseBody& operator=(ListLivyComputeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(livyComputes, livyComputes_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(livyComputes, livyComputes_);
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
      class LivyComputes : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const LivyComputes& obj) { 
          DARABONBA_PTR_TO_JSON(computeId, computeId_);
          DARABONBA_PTR_TO_JSON(createdBy, createdBy_);
          DARABONBA_PTR_TO_JSON(endpoint, endpoint_);
          DARABONBA_PTR_TO_JSON(endpointInner, endpointInner_);
          DARABONBA_PTR_TO_JSON(gmtCreate, gmtCreate_);
          DARABONBA_PTR_TO_JSON(name, name_);
          DARABONBA_PTR_TO_JSON(queueName, queueName_);
          DARABONBA_PTR_TO_JSON(startTime, startTime_);
          DARABONBA_PTR_TO_JSON(status, status_);
        };
        friend void from_json(const Darabonba::Json& j, LivyComputes& obj) { 
          DARABONBA_PTR_FROM_JSON(computeId, computeId_);
          DARABONBA_PTR_FROM_JSON(createdBy, createdBy_);
          DARABONBA_PTR_FROM_JSON(endpoint, endpoint_);
          DARABONBA_PTR_FROM_JSON(endpointInner, endpointInner_);
          DARABONBA_PTR_FROM_JSON(gmtCreate, gmtCreate_);
          DARABONBA_PTR_FROM_JSON(name, name_);
          DARABONBA_PTR_FROM_JSON(queueName, queueName_);
          DARABONBA_PTR_FROM_JSON(startTime, startTime_);
          DARABONBA_PTR_FROM_JSON(status, status_);
        };
        LivyComputes() = default ;
        LivyComputes(const LivyComputes &) = default ;
        LivyComputes(LivyComputes &&) = default ;
        LivyComputes(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~LivyComputes() = default ;
        LivyComputes& operator=(const LivyComputes &) = default ;
        LivyComputes& operator=(LivyComputes &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->computeId_ == nullptr
        && this->createdBy_ == nullptr && this->endpoint_ == nullptr && this->endpointInner_ == nullptr && this->gmtCreate_ == nullptr && this->name_ == nullptr
        && this->queueName_ == nullptr && this->startTime_ == nullptr && this->status_ == nullptr; };
        // computeId Field Functions 
        bool hasComputeId() const { return this->computeId_ != nullptr;};
        void deleteComputeId() { this->computeId_ = nullptr;};
        inline string getComputeId() const { DARABONBA_PTR_GET_DEFAULT(computeId_, "") };
        inline LivyComputes& setComputeId(string computeId) { DARABONBA_PTR_SET_VALUE(computeId_, computeId) };


        // createdBy Field Functions 
        bool hasCreatedBy() const { return this->createdBy_ != nullptr;};
        void deleteCreatedBy() { this->createdBy_ = nullptr;};
        inline string getCreatedBy() const { DARABONBA_PTR_GET_DEFAULT(createdBy_, "") };
        inline LivyComputes& setCreatedBy(string createdBy) { DARABONBA_PTR_SET_VALUE(createdBy_, createdBy) };


        // endpoint Field Functions 
        bool hasEndpoint() const { return this->endpoint_ != nullptr;};
        void deleteEndpoint() { this->endpoint_ = nullptr;};
        inline string getEndpoint() const { DARABONBA_PTR_GET_DEFAULT(endpoint_, "") };
        inline LivyComputes& setEndpoint(string endpoint) { DARABONBA_PTR_SET_VALUE(endpoint_, endpoint) };


        // endpointInner Field Functions 
        bool hasEndpointInner() const { return this->endpointInner_ != nullptr;};
        void deleteEndpointInner() { this->endpointInner_ = nullptr;};
        inline string getEndpointInner() const { DARABONBA_PTR_GET_DEFAULT(endpointInner_, "") };
        inline LivyComputes& setEndpointInner(string endpointInner) { DARABONBA_PTR_SET_VALUE(endpointInner_, endpointInner) };


        // gmtCreate Field Functions 
        bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
        void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
        inline int64_t getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0L) };
        inline LivyComputes& setGmtCreate(int64_t gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline LivyComputes& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // queueName Field Functions 
        bool hasQueueName() const { return this->queueName_ != nullptr;};
        void deleteQueueName() { this->queueName_ = nullptr;};
        inline string getQueueName() const { DARABONBA_PTR_GET_DEFAULT(queueName_, "") };
        inline LivyComputes& setQueueName(string queueName) { DARABONBA_PTR_SET_VALUE(queueName_, queueName) };


        // startTime Field Functions 
        bool hasStartTime() const { return this->startTime_ != nullptr;};
        void deleteStartTime() { this->startTime_ = nullptr;};
        inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
        inline LivyComputes& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline LivyComputes& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        shared_ptr<string> computeId_ {};
        shared_ptr<string> createdBy_ {};
        shared_ptr<string> endpoint_ {};
        shared_ptr<string> endpointInner_ {};
        shared_ptr<int64_t> gmtCreate_ {};
        shared_ptr<string> name_ {};
        shared_ptr<string> queueName_ {};
        shared_ptr<int64_t> startTime_ {};
        shared_ptr<string> status_ {};
      };

      virtual bool empty() const override { return this->livyComputes_ == nullptr; };
      // livyComputes Field Functions 
      bool hasLivyComputes() const { return this->livyComputes_ != nullptr;};
      void deleteLivyComputes() { this->livyComputes_ = nullptr;};
      inline const vector<Data::LivyComputes> & getLivyComputes() const { DARABONBA_PTR_GET_CONST(livyComputes_, vector<Data::LivyComputes>) };
      inline vector<Data::LivyComputes> getLivyComputes() { DARABONBA_PTR_GET(livyComputes_, vector<Data::LivyComputes>) };
      inline Data& setLivyComputes(const vector<Data::LivyComputes> & livyComputes) { DARABONBA_PTR_SET_VALUE(livyComputes_, livyComputes) };
      inline Data& setLivyComputes(vector<Data::LivyComputes> && livyComputes) { DARABONBA_PTR_SET_RVALUE(livyComputes_, livyComputes) };


    protected:
      shared_ptr<vector<Data::LivyComputes>> livyComputes_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListLivyComputeResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListLivyComputeResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListLivyComputeResponseBody::Data) };
    inline ListLivyComputeResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListLivyComputeResponseBody::Data) };
    inline ListLivyComputeResponseBody& setData(const ListLivyComputeResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListLivyComputeResponseBody& setData(ListLivyComputeResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListLivyComputeResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListLivyComputeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<ListLivyComputeResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmrServerlessSpark20230808
#endif
