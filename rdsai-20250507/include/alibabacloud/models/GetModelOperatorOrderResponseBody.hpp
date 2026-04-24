// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMODELOPERATORORDERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETMODELOPERATORORDERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RdsAi20250507
{
namespace Models
{
  class GetModelOperatorOrderResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetModelOperatorOrderResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetModelOperatorOrderResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetModelOperatorOrderResponseBody() = default ;
    GetModelOperatorOrderResponseBody(const GetModelOperatorOrderResponseBody &) = default ;
    GetModelOperatorOrderResponseBody(GetModelOperatorOrderResponseBody &&) = default ;
    GetModelOperatorOrderResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetModelOperatorOrderResponseBody() = default ;
    GetModelOperatorOrderResponseBody& operator=(const GetModelOperatorOrderResponseBody &) = default ;
    GetModelOperatorOrderResponseBody& operator=(GetModelOperatorOrderResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(HasValidOrder, hasValidOrder_);
        DARABONBA_PTR_TO_JSON(InstanceList, instanceList_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(HasValidOrder, hasValidOrder_);
        DARABONBA_PTR_FROM_JSON(InstanceList, instanceList_);
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
      class InstanceList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const InstanceList& obj) { 
          DARABONBA_PTR_TO_JSON(EndTime, endTime_);
          DARABONBA_PTR_TO_JSON(InstanceClass, instanceClass_);
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_TO_JSON(StartTime, startTime_);
          DARABONBA_PTR_TO_JSON(Status, status_);
        };
        friend void from_json(const Darabonba::Json& j, InstanceList& obj) { 
          DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
          DARABONBA_PTR_FROM_JSON(InstanceClass, instanceClass_);
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
        };
        InstanceList() = default ;
        InstanceList(const InstanceList &) = default ;
        InstanceList(InstanceList &&) = default ;
        InstanceList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~InstanceList() = default ;
        InstanceList& operator=(const InstanceList &) = default ;
        InstanceList& operator=(InstanceList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->endTime_ == nullptr
        && this->instanceClass_ == nullptr && this->instanceId_ == nullptr && this->startTime_ == nullptr && this->status_ == nullptr; };
        // endTime Field Functions 
        bool hasEndTime() const { return this->endTime_ != nullptr;};
        void deleteEndTime() { this->endTime_ = nullptr;};
        inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
        inline InstanceList& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


        // instanceClass Field Functions 
        bool hasInstanceClass() const { return this->instanceClass_ != nullptr;};
        void deleteInstanceClass() { this->instanceClass_ = nullptr;};
        inline string getInstanceClass() const { DARABONBA_PTR_GET_DEFAULT(instanceClass_, "") };
        inline InstanceList& setInstanceClass(string instanceClass) { DARABONBA_PTR_SET_VALUE(instanceClass_, instanceClass) };


        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline InstanceList& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // startTime Field Functions 
        bool hasStartTime() const { return this->startTime_ != nullptr;};
        void deleteStartTime() { this->startTime_ = nullptr;};
        inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
        inline InstanceList& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline InstanceList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        shared_ptr<int64_t> endTime_ {};
        shared_ptr<string> instanceClass_ {};
        shared_ptr<string> instanceId_ {};
        shared_ptr<int64_t> startTime_ {};
        shared_ptr<string> status_ {};
      };

      virtual bool empty() const override { return this->hasValidOrder_ == nullptr
        && this->instanceList_ == nullptr; };
      // hasValidOrder Field Functions 
      bool hasHasValidOrder() const { return this->hasValidOrder_ != nullptr;};
      void deleteHasValidOrder() { this->hasValidOrder_ = nullptr;};
      inline bool getHasValidOrder() const { DARABONBA_PTR_GET_DEFAULT(hasValidOrder_, false) };
      inline Data& setHasValidOrder(bool hasValidOrder) { DARABONBA_PTR_SET_VALUE(hasValidOrder_, hasValidOrder) };


      // instanceList Field Functions 
      bool hasInstanceList() const { return this->instanceList_ != nullptr;};
      void deleteInstanceList() { this->instanceList_ = nullptr;};
      inline const vector<Data::InstanceList> & getInstanceList() const { DARABONBA_PTR_GET_CONST(instanceList_, vector<Data::InstanceList>) };
      inline vector<Data::InstanceList> getInstanceList() { DARABONBA_PTR_GET(instanceList_, vector<Data::InstanceList>) };
      inline Data& setInstanceList(const vector<Data::InstanceList> & instanceList) { DARABONBA_PTR_SET_VALUE(instanceList_, instanceList) };
      inline Data& setInstanceList(vector<Data::InstanceList> && instanceList) { DARABONBA_PTR_SET_RVALUE(instanceList_, instanceList) };


    protected:
      shared_ptr<bool> hasValidOrder_ {};
      shared_ptr<vector<Data::InstanceList>> instanceList_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetModelOperatorOrderResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetModelOperatorOrderResponseBody::Data) };
    inline GetModelOperatorOrderResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetModelOperatorOrderResponseBody::Data) };
    inline GetModelOperatorOrderResponseBody& setData(const GetModelOperatorOrderResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetModelOperatorOrderResponseBody& setData(GetModelOperatorOrderResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetModelOperatorOrderResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetModelOperatorOrderResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetModelOperatorOrderResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<GetModelOperatorOrderResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RdsAi20250507
#endif
