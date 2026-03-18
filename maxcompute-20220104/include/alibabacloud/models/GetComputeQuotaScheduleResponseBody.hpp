// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCOMPUTEQUOTASCHEDULERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCOMPUTEQUOTASCHEDULERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class GetComputeQuotaScheduleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetComputeQuotaScheduleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(errorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(errorMsg, errorMsg_);
      DARABONBA_PTR_TO_JSON(httpCode, httpCode_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetComputeQuotaScheduleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(errorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(errorMsg, errorMsg_);
      DARABONBA_PTR_FROM_JSON(httpCode, httpCode_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    GetComputeQuotaScheduleResponseBody() = default ;
    GetComputeQuotaScheduleResponseBody(const GetComputeQuotaScheduleResponseBody &) = default ;
    GetComputeQuotaScheduleResponseBody(GetComputeQuotaScheduleResponseBody &&) = default ;
    GetComputeQuotaScheduleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetComputeQuotaScheduleResponseBody() = default ;
    GetComputeQuotaScheduleResponseBody& operator=(const GetComputeQuotaScheduleResponseBody &) = default ;
    GetComputeQuotaScheduleResponseBody& operator=(GetComputeQuotaScheduleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(condition, condition_);
        DARABONBA_PTR_TO_JSON(id, id_);
        DARABONBA_PTR_TO_JSON(plan, plan_);
        DARABONBA_PTR_TO_JSON(timezone, timezone_);
        DARABONBA_PTR_TO_JSON(type, type_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(condition, condition_);
        DARABONBA_PTR_FROM_JSON(id, id_);
        DARABONBA_PTR_FROM_JSON(plan, plan_);
        DARABONBA_PTR_FROM_JSON(timezone, timezone_);
        DARABONBA_PTR_FROM_JSON(type, type_);
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
      class Condition : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Condition& obj) { 
          DARABONBA_PTR_TO_JSON(at, at_);
        };
        friend void from_json(const Darabonba::Json& j, Condition& obj) { 
          DARABONBA_PTR_FROM_JSON(at, at_);
        };
        Condition() = default ;
        Condition(const Condition &) = default ;
        Condition(Condition &&) = default ;
        Condition(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Condition() = default ;
        Condition& operator=(const Condition &) = default ;
        Condition& operator=(Condition &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->at_ == nullptr; };
        // at Field Functions 
        bool hasAt() const { return this->at_ != nullptr;};
        void deleteAt() { this->at_ = nullptr;};
        inline string getAt() const { DARABONBA_PTR_GET_DEFAULT(at_, "") };
        inline Condition& setAt(string at) { DARABONBA_PTR_SET_VALUE(at_, at) };


      protected:
        shared_ptr<string> at_ {};
      };

      virtual bool empty() const override { return this->condition_ == nullptr
        && this->id_ == nullptr && this->plan_ == nullptr && this->timezone_ == nullptr && this->type_ == nullptr; };
      // condition Field Functions 
      bool hasCondition() const { return this->condition_ != nullptr;};
      void deleteCondition() { this->condition_ = nullptr;};
      inline const Data::Condition & getCondition() const { DARABONBA_PTR_GET_CONST(condition_, Data::Condition) };
      inline Data::Condition getCondition() { DARABONBA_PTR_GET(condition_, Data::Condition) };
      inline Data& setCondition(const Data::Condition & condition) { DARABONBA_PTR_SET_VALUE(condition_, condition) };
      inline Data& setCondition(Data::Condition && condition) { DARABONBA_PTR_SET_RVALUE(condition_, condition) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline Data& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // plan Field Functions 
      bool hasPlan() const { return this->plan_ != nullptr;};
      void deletePlan() { this->plan_ = nullptr;};
      inline string getPlan() const { DARABONBA_PTR_GET_DEFAULT(plan_, "") };
      inline Data& setPlan(string plan) { DARABONBA_PTR_SET_VALUE(plan_, plan) };


      // timezone Field Functions 
      bool hasTimezone() const { return this->timezone_ != nullptr;};
      void deleteTimezone() { this->timezone_ = nullptr;};
      inline string getTimezone() const { DARABONBA_PTR_GET_DEFAULT(timezone_, "") };
      inline Data& setTimezone(string timezone) { DARABONBA_PTR_SET_VALUE(timezone_, timezone) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Data& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      shared_ptr<Data::Condition> condition_ {};
      shared_ptr<string> id_ {};
      shared_ptr<string> plan_ {};
      shared_ptr<string> timezone_ {};
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->errorCode_ == nullptr && this->errorMsg_ == nullptr && this->httpCode_ == nullptr && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<GetComputeQuotaScheduleResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<GetComputeQuotaScheduleResponseBody::Data>) };
    inline vector<GetComputeQuotaScheduleResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<GetComputeQuotaScheduleResponseBody::Data>) };
    inline GetComputeQuotaScheduleResponseBody& setData(const vector<GetComputeQuotaScheduleResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetComputeQuotaScheduleResponseBody& setData(vector<GetComputeQuotaScheduleResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline GetComputeQuotaScheduleResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMsg Field Functions 
    bool hasErrorMsg() const { return this->errorMsg_ != nullptr;};
    void deleteErrorMsg() { this->errorMsg_ = nullptr;};
    inline string getErrorMsg() const { DARABONBA_PTR_GET_DEFAULT(errorMsg_, "") };
    inline GetComputeQuotaScheduleResponseBody& setErrorMsg(string errorMsg) { DARABONBA_PTR_SET_VALUE(errorMsg_, errorMsg) };


    // httpCode Field Functions 
    bool hasHttpCode() const { return this->httpCode_ != nullptr;};
    void deleteHttpCode() { this->httpCode_ = nullptr;};
    inline int32_t getHttpCode() const { DARABONBA_PTR_GET_DEFAULT(httpCode_, 0) };
    inline GetComputeQuotaScheduleResponseBody& setHttpCode(int32_t httpCode) { DARABONBA_PTR_SET_VALUE(httpCode_, httpCode) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetComputeQuotaScheduleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<GetComputeQuotaScheduleResponseBody::Data>> data_ {};
    shared_ptr<string> errorCode_ {};
    shared_ptr<string> errorMsg_ {};
    shared_ptr<int32_t> httpCode_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
