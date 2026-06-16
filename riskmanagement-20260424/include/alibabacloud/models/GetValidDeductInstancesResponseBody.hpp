// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETVALIDDEDUCTINSTANCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETVALIDDEDUCTINSTANCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RiskManagement20260424
{
namespace Models
{
  class GetValidDeductInstancesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetValidDeductInstancesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetValidDeductInstancesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetValidDeductInstancesResponseBody() = default ;
    GetValidDeductInstancesResponseBody(const GetValidDeductInstancesResponseBody &) = default ;
    GetValidDeductInstancesResponseBody(GetValidDeductInstancesResponseBody &&) = default ;
    GetValidDeductInstancesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetValidDeductInstancesResponseBody() = default ;
    GetValidDeductInstancesResponseBody& operator=(const GetValidDeductInstancesResponseBody &) = default ;
    GetValidDeductInstancesResponseBody& operator=(GetValidDeductInstancesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Body, body_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Body, body_);
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
      class Body : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Body& obj) { 
          DARABONBA_PTR_TO_JSON(Data, data_);
          DARABONBA_PTR_TO_JSON(RequestId, requestId_);
        };
        friend void from_json(const Darabonba::Json& j, Body& obj) { 
          DARABONBA_PTR_FROM_JSON(Data, data_);
          DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
        };
        Body() = default ;
        Body(const Body &) = default ;
        Body(Body &&) = default ;
        Body(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Body() = default ;
        Body& operator=(const Body &) = default ;
        Body& operator=(Body &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Data : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Data& obj) { 
            DARABONBA_PTR_TO_JSON(CanTry, canTry_);
            DARABONBA_PTR_TO_JSON(DeductPackageList, deductPackageList_);
          };
          friend void from_json(const Darabonba::Json& j, Data& obj) { 
            DARABONBA_PTR_FROM_JSON(CanTry, canTry_);
            DARABONBA_PTR_FROM_JSON(DeductPackageList, deductPackageList_);
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
          class DeductPackageList : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const DeductPackageList& obj) { 
              DARABONBA_PTR_TO_JSON(CurrentPeriodUsed, currentPeriodUsed_);
              DARABONBA_PTR_TO_JSON(EndTime, endTime_);
              DARABONBA_PTR_TO_JSON(InitCapacity, initCapacity_);
              DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
              DARABONBA_PTR_TO_JSON(Module, module_);
              DARABONBA_PTR_TO_JSON(PeriodCapacity, periodCapacity_);
              DARABONBA_PTR_TO_JSON(StartTime, startTime_);
              DARABONBA_PTR_TO_JSON(Status, status_);
            };
            friend void from_json(const Darabonba::Json& j, DeductPackageList& obj) { 
              DARABONBA_PTR_FROM_JSON(CurrentPeriodUsed, currentPeriodUsed_);
              DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
              DARABONBA_PTR_FROM_JSON(InitCapacity, initCapacity_);
              DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
              DARABONBA_PTR_FROM_JSON(Module, module_);
              DARABONBA_PTR_FROM_JSON(PeriodCapacity, periodCapacity_);
              DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
              DARABONBA_PTR_FROM_JSON(Status, status_);
            };
            DeductPackageList() = default ;
            DeductPackageList(const DeductPackageList &) = default ;
            DeductPackageList(DeductPackageList &&) = default ;
            DeductPackageList(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~DeductPackageList() = default ;
            DeductPackageList& operator=(const DeductPackageList &) = default ;
            DeductPackageList& operator=(DeductPackageList &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->currentPeriodUsed_ == nullptr
        && this->endTime_ == nullptr && this->initCapacity_ == nullptr && this->instanceId_ == nullptr && this->module_ == nullptr && this->periodCapacity_ == nullptr
        && this->startTime_ == nullptr && this->status_ == nullptr; };
            // currentPeriodUsed Field Functions 
            bool hasCurrentPeriodUsed() const { return this->currentPeriodUsed_ != nullptr;};
            void deleteCurrentPeriodUsed() { this->currentPeriodUsed_ = nullptr;};
            inline int64_t getCurrentPeriodUsed() const { DARABONBA_PTR_GET_DEFAULT(currentPeriodUsed_, 0L) };
            inline DeductPackageList& setCurrentPeriodUsed(int64_t currentPeriodUsed) { DARABONBA_PTR_SET_VALUE(currentPeriodUsed_, currentPeriodUsed) };


            // endTime Field Functions 
            bool hasEndTime() const { return this->endTime_ != nullptr;};
            void deleteEndTime() { this->endTime_ = nullptr;};
            inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
            inline DeductPackageList& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


            // initCapacity Field Functions 
            bool hasInitCapacity() const { return this->initCapacity_ != nullptr;};
            void deleteInitCapacity() { this->initCapacity_ = nullptr;};
            inline double getInitCapacity() const { DARABONBA_PTR_GET_DEFAULT(initCapacity_, 0.0) };
            inline DeductPackageList& setInitCapacity(double initCapacity) { DARABONBA_PTR_SET_VALUE(initCapacity_, initCapacity) };


            // instanceId Field Functions 
            bool hasInstanceId() const { return this->instanceId_ != nullptr;};
            void deleteInstanceId() { this->instanceId_ = nullptr;};
            inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
            inline DeductPackageList& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


            // module Field Functions 
            bool hasModule() const { return this->module_ != nullptr;};
            void deleteModule() { this->module_ = nullptr;};
            inline string getModule() const { DARABONBA_PTR_GET_DEFAULT(module_, "") };
            inline DeductPackageList& setModule(string module) { DARABONBA_PTR_SET_VALUE(module_, module) };


            // periodCapacity Field Functions 
            bool hasPeriodCapacity() const { return this->periodCapacity_ != nullptr;};
            void deletePeriodCapacity() { this->periodCapacity_ = nullptr;};
            inline double getPeriodCapacity() const { DARABONBA_PTR_GET_DEFAULT(periodCapacity_, 0.0) };
            inline DeductPackageList& setPeriodCapacity(double periodCapacity) { DARABONBA_PTR_SET_VALUE(periodCapacity_, periodCapacity) };


            // startTime Field Functions 
            bool hasStartTime() const { return this->startTime_ != nullptr;};
            void deleteStartTime() { this->startTime_ = nullptr;};
            inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
            inline DeductPackageList& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


            // status Field Functions 
            bool hasStatus() const { return this->status_ != nullptr;};
            void deleteStatus() { this->status_ = nullptr;};
            inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
            inline DeductPackageList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


          protected:
            shared_ptr<int64_t> currentPeriodUsed_ {};
            shared_ptr<int64_t> endTime_ {};
            shared_ptr<double> initCapacity_ {};
            shared_ptr<string> instanceId_ {};
            shared_ptr<string> module_ {};
            shared_ptr<double> periodCapacity_ {};
            shared_ptr<int64_t> startTime_ {};
            shared_ptr<string> status_ {};
          };

          virtual bool empty() const override { return this->canTry_ == nullptr
        && this->deductPackageList_ == nullptr; };
          // canTry Field Functions 
          bool hasCanTry() const { return this->canTry_ != nullptr;};
          void deleteCanTry() { this->canTry_ = nullptr;};
          inline bool getCanTry() const { DARABONBA_PTR_GET_DEFAULT(canTry_, false) };
          inline Data& setCanTry(bool canTry) { DARABONBA_PTR_SET_VALUE(canTry_, canTry) };


          // deductPackageList Field Functions 
          bool hasDeductPackageList() const { return this->deductPackageList_ != nullptr;};
          void deleteDeductPackageList() { this->deductPackageList_ = nullptr;};
          inline const vector<Data::DeductPackageList> & getDeductPackageList() const { DARABONBA_PTR_GET_CONST(deductPackageList_, vector<Data::DeductPackageList>) };
          inline vector<Data::DeductPackageList> getDeductPackageList() { DARABONBA_PTR_GET(deductPackageList_, vector<Data::DeductPackageList>) };
          inline Data& setDeductPackageList(const vector<Data::DeductPackageList> & deductPackageList) { DARABONBA_PTR_SET_VALUE(deductPackageList_, deductPackageList) };
          inline Data& setDeductPackageList(vector<Data::DeductPackageList> && deductPackageList) { DARABONBA_PTR_SET_RVALUE(deductPackageList_, deductPackageList) };


        protected:
          shared_ptr<bool> canTry_ {};
          shared_ptr<vector<Data::DeductPackageList>> deductPackageList_ {};
        };

        virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
        // data Field Functions 
        bool hasData() const { return this->data_ != nullptr;};
        void deleteData() { this->data_ = nullptr;};
        inline const Body::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, Body::Data) };
        inline Body::Data getData() { DARABONBA_PTR_GET(data_, Body::Data) };
        inline Body& setData(const Body::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
        inline Body& setData(Body::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


        // requestId Field Functions 
        bool hasRequestId() const { return this->requestId_ != nullptr;};
        void deleteRequestId() { this->requestId_ = nullptr;};
        inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
        inline Body& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


      protected:
        shared_ptr<Body::Data> data_ {};
        shared_ptr<string> requestId_ {};
      };

      virtual bool empty() const override { return this->body_ == nullptr; };
      // body Field Functions 
      bool hasBody() const { return this->body_ != nullptr;};
      void deleteBody() { this->body_ = nullptr;};
      inline const Data::Body & getBody() const { DARABONBA_PTR_GET_CONST(body_, Data::Body) };
      inline Data::Body getBody() { DARABONBA_PTR_GET(body_, Data::Body) };
      inline Data& setBody(const Data::Body & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
      inline Data& setBody(Data::Body && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


    protected:
      shared_ptr<Data::Body> body_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetValidDeductInstancesResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetValidDeductInstancesResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetValidDeductInstancesResponseBody::Data) };
    inline GetValidDeductInstancesResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetValidDeductInstancesResponseBody::Data) };
    inline GetValidDeductInstancesResponseBody& setData(const GetValidDeductInstancesResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetValidDeductInstancesResponseBody& setData(GetValidDeductInstancesResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetValidDeductInstancesResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetValidDeductInstancesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetValidDeductInstancesResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<GetValidDeductInstancesResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RiskManagement20260424
#endif
