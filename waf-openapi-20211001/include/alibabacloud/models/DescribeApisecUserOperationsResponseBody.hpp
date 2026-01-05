// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPISECUSEROPERATIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPISECUSEROPERATIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeApisecUserOperationsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApisecUserOperationsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApisecUserOperationsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeApisecUserOperationsResponseBody() = default ;
    DescribeApisecUserOperationsResponseBody(const DescribeApisecUserOperationsResponseBody &) = default ;
    DescribeApisecUserOperationsResponseBody(DescribeApisecUserOperationsResponseBody &&) = default ;
    DescribeApisecUserOperationsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApisecUserOperationsResponseBody() = default ;
    DescribeApisecUserOperationsResponseBody& operator=(const DescribeApisecUserOperationsResponseBody &) = default ;
    DescribeApisecUserOperationsResponseBody& operator=(DescribeApisecUserOperationsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(FromStatus, fromStatus_);
        DARABONBA_PTR_TO_JSON(Note, note_);
        DARABONBA_PTR_TO_JSON(ObjectId, objectId_);
        DARABONBA_PTR_TO_JSON(OperationSource, operationSource_);
        DARABONBA_PTR_TO_JSON(Time, time_);
        DARABONBA_PTR_TO_JSON(ToStatus, toStatus_);
        DARABONBA_PTR_TO_JSON(Type, type_);
        DARABONBA_PTR_TO_JSON(UserId, userId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(FromStatus, fromStatus_);
        DARABONBA_PTR_FROM_JSON(Note, note_);
        DARABONBA_PTR_FROM_JSON(ObjectId, objectId_);
        DARABONBA_PTR_FROM_JSON(OperationSource, operationSource_);
        DARABONBA_PTR_FROM_JSON(Time, time_);
        DARABONBA_PTR_FROM_JSON(ToStatus, toStatus_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
        DARABONBA_PTR_FROM_JSON(UserId, userId_);
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
      virtual bool empty() const override { return this->fromStatus_ == nullptr
        && this->note_ == nullptr && this->objectId_ == nullptr && this->operationSource_ == nullptr && this->time_ == nullptr && this->toStatus_ == nullptr
        && this->type_ == nullptr && this->userId_ == nullptr; };
      // fromStatus Field Functions 
      bool hasFromStatus() const { return this->fromStatus_ != nullptr;};
      void deleteFromStatus() { this->fromStatus_ = nullptr;};
      inline string getFromStatus() const { DARABONBA_PTR_GET_DEFAULT(fromStatus_, "") };
      inline Data& setFromStatus(string fromStatus) { DARABONBA_PTR_SET_VALUE(fromStatus_, fromStatus) };


      // note Field Functions 
      bool hasNote() const { return this->note_ != nullptr;};
      void deleteNote() { this->note_ = nullptr;};
      inline string getNote() const { DARABONBA_PTR_GET_DEFAULT(note_, "") };
      inline Data& setNote(string note) { DARABONBA_PTR_SET_VALUE(note_, note) };


      // objectId Field Functions 
      bool hasObjectId() const { return this->objectId_ != nullptr;};
      void deleteObjectId() { this->objectId_ = nullptr;};
      inline string getObjectId() const { DARABONBA_PTR_GET_DEFAULT(objectId_, "") };
      inline Data& setObjectId(string objectId) { DARABONBA_PTR_SET_VALUE(objectId_, objectId) };


      // operationSource Field Functions 
      bool hasOperationSource() const { return this->operationSource_ != nullptr;};
      void deleteOperationSource() { this->operationSource_ = nullptr;};
      inline string getOperationSource() const { DARABONBA_PTR_GET_DEFAULT(operationSource_, "") };
      inline Data& setOperationSource(string operationSource) { DARABONBA_PTR_SET_VALUE(operationSource_, operationSource) };


      // time Field Functions 
      bool hasTime() const { return this->time_ != nullptr;};
      void deleteTime() { this->time_ = nullptr;};
      inline int64_t getTime() const { DARABONBA_PTR_GET_DEFAULT(time_, 0L) };
      inline Data& setTime(int64_t time) { DARABONBA_PTR_SET_VALUE(time_, time) };


      // toStatus Field Functions 
      bool hasToStatus() const { return this->toStatus_ != nullptr;};
      void deleteToStatus() { this->toStatus_ = nullptr;};
      inline string getToStatus() const { DARABONBA_PTR_GET_DEFAULT(toStatus_, "") };
      inline Data& setToStatus(string toStatus) { DARABONBA_PTR_SET_VALUE(toStatus_, toStatus) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Data& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
      inline Data& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    protected:
      // The state before the operation.
      // 
      // Valid values of the risk state:
      // 
      // *   **toBeConfirmed**
      // *   **confirmed**
      // *   **toBeFixed**
      // *   **fixed**
      // *   **ignored**
      // 
      // Valid values of the event state:
      // 
      // *   **toBeConfirmed**
      // *   **confirmed**
      // *   **ignored**
      shared_ptr<string> fromStatus_ {};
      // The remarks.
      shared_ptr<string> note_ {};
      // The object ID of the operation record.
      shared_ptr<string> objectId_ {};
      shared_ptr<string> operationSource_ {};
      // The time at which the operation was performed. The value is a UNIX timestamp displayed in UTC. Unit: seconds.
      shared_ptr<int64_t> time_ {};
      // The state after the operation.
      // 
      // Valid values of the risk state:
      // 
      // *   **toBeConfirmed**
      // *   **confirmed**
      // *   **toBeFixed**
      // *   **fixed**
      // *   **ignored**
      // 
      // Valid values of the event state:
      // 
      // *   **toBeConfirmed**
      // *   **confirmed**
      // *   **ignored**
      shared_ptr<string> toStatus_ {};
      // The type of the operation record. Valid values:
      // 
      // *   **abnormal**: risk detection
      // *   **event**: security event
      shared_ptr<string> type_ {};
      // The user ID.
      shared_ptr<string> userId_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<DescribeApisecUserOperationsResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<DescribeApisecUserOperationsResponseBody::Data>) };
    inline vector<DescribeApisecUserOperationsResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<DescribeApisecUserOperationsResponseBody::Data>) };
    inline DescribeApisecUserOperationsResponseBody& setData(const vector<DescribeApisecUserOperationsResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeApisecUserOperationsResponseBody& setData(vector<DescribeApisecUserOperationsResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeApisecUserOperationsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The operation records.
    shared_ptr<vector<DescribeApisecUserOperationsResponseBody::Data>> data_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
