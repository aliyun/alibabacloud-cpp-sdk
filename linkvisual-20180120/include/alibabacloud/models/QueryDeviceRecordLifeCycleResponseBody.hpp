// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYDEVICERECORDLIFECYCLERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYDEVICERECORDLIFECYCLERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Linkvisual20180120
{
namespace Models
{
  class QueryDeviceRecordLifeCycleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryDeviceRecordLifeCycleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, QueryDeviceRecordLifeCycleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    QueryDeviceRecordLifeCycleResponseBody() = default ;
    QueryDeviceRecordLifeCycleResponseBody(const QueryDeviceRecordLifeCycleResponseBody &) = default ;
    QueryDeviceRecordLifeCycleResponseBody(QueryDeviceRecordLifeCycleResponseBody &&) = default ;
    QueryDeviceRecordLifeCycleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryDeviceRecordLifeCycleResponseBody() = default ;
    QueryDeviceRecordLifeCycleResponseBody& operator=(const QueryDeviceRecordLifeCycleResponseBody &) = default ;
    QueryDeviceRecordLifeCycleResponseBody& operator=(QueryDeviceRecordLifeCycleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Day, day_);
        DARABONBA_PTR_TO_JSON(IotId, iotId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Day, day_);
        DARABONBA_PTR_FROM_JSON(IotId, iotId_);
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
      virtual bool empty() const override { return this->day_ == nullptr
        && this->iotId_ == nullptr; };
      // day Field Functions 
      bool hasDay() const { return this->day_ != nullptr;};
      void deleteDay() { this->day_ = nullptr;};
      inline int32_t getDay() const { DARABONBA_PTR_GET_DEFAULT(day_, 0) };
      inline Data& setDay(int32_t day) { DARABONBA_PTR_SET_VALUE(day_, day) };


      // iotId Field Functions 
      bool hasIotId() const { return this->iotId_ != nullptr;};
      void deleteIotId() { this->iotId_ = nullptr;};
      inline string getIotId() const { DARABONBA_PTR_GET_DEFAULT(iotId_, "") };
      inline Data& setIotId(string iotId) { DARABONBA_PTR_SET_VALUE(iotId_, iotId) };


    protected:
      // The recording lifecycle of the IPC device.
      shared_ptr<int32_t> day_ {};
      // The IoT ID of the device.
      shared_ptr<string> iotId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->errorMessage_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline QueryDeviceRecordLifeCycleResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<QueryDeviceRecordLifeCycleResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<QueryDeviceRecordLifeCycleResponseBody::Data>) };
    inline vector<QueryDeviceRecordLifeCycleResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<QueryDeviceRecordLifeCycleResponseBody::Data>) };
    inline QueryDeviceRecordLifeCycleResponseBody& setData(const vector<QueryDeviceRecordLifeCycleResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline QueryDeviceRecordLifeCycleResponseBody& setData(vector<QueryDeviceRecordLifeCycleResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline QueryDeviceRecordLifeCycleResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryDeviceRecordLifeCycleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QueryDeviceRecordLifeCycleResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The return code.
    // 
    // - **200**: The call is successful.
    // - Other values: An error code. For more information, see [Error codes](https://help.aliyun.com/document_detail/145071.html).
    shared_ptr<int32_t> code_ {};
    // The query result.
    shared_ptr<vector<QueryDeviceRecordLifeCycleResponseBody::Data>> data_ {};
    // The error message returned if the call fails.
    shared_ptr<string> errorMessage_ {};
    // The unique identifier generated by Alibaba Cloud for the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the call was successful.
    // 
    // - **true**: The call was successful.
    // - **false**: The call failed.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Linkvisual20180120
#endif
