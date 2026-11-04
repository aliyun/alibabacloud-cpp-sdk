// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRANSFERDEVICEINSTANCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_TRANSFERDEVICEINSTANCERESPONSEBODY_HPP_
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
  class TransferDeviceInstanceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TransferDeviceInstanceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, TransferDeviceInstanceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    TransferDeviceInstanceResponseBody() = default ;
    TransferDeviceInstanceResponseBody(const TransferDeviceInstanceResponseBody &) = default ;
    TransferDeviceInstanceResponseBody(TransferDeviceInstanceResponseBody &&) = default ;
    TransferDeviceInstanceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TransferDeviceInstanceResponseBody() = default ;
    TransferDeviceInstanceResponseBody& operator=(const TransferDeviceInstanceResponseBody &) = default ;
    TransferDeviceInstanceResponseBody& operator=(TransferDeviceInstanceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(FailedList, failedList_);
        DARABONBA_PTR_TO_JSON(SuccessList, successList_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(FailedList, failedList_);
        DARABONBA_PTR_FROM_JSON(SuccessList, successList_);
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
      class SuccessList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SuccessList& obj) { 
          DARABONBA_PTR_TO_JSON(DeviceName, deviceName_);
          DARABONBA_PTR_TO_JSON(Message, message_);
        };
        friend void from_json(const Darabonba::Json& j, SuccessList& obj) { 
          DARABONBA_PTR_FROM_JSON(DeviceName, deviceName_);
          DARABONBA_PTR_FROM_JSON(Message, message_);
        };
        SuccessList() = default ;
        SuccessList(const SuccessList &) = default ;
        SuccessList(SuccessList &&) = default ;
        SuccessList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SuccessList() = default ;
        SuccessList& operator=(const SuccessList &) = default ;
        SuccessList& operator=(SuccessList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->deviceName_ == nullptr
        && this->message_ == nullptr; };
        // deviceName Field Functions 
        bool hasDeviceName() const { return this->deviceName_ != nullptr;};
        void deleteDeviceName() { this->deviceName_ = nullptr;};
        inline string getDeviceName() const { DARABONBA_PTR_GET_DEFAULT(deviceName_, "") };
        inline SuccessList& setDeviceName(string deviceName) { DARABONBA_PTR_SET_VALUE(deviceName_, deviceName) };


        // message Field Functions 
        bool hasMessage() const { return this->message_ != nullptr;};
        void deleteMessage() { this->message_ = nullptr;};
        inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
        inline SuccessList& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


      protected:
        // The name of the device.
        shared_ptr<string> deviceName_ {};
        // The description of the successful transfer.
        shared_ptr<string> message_ {};
      };

      class FailedList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const FailedList& obj) { 
          DARABONBA_PTR_TO_JSON(DeviceName, deviceName_);
          DARABONBA_PTR_TO_JSON(Message, message_);
        };
        friend void from_json(const Darabonba::Json& j, FailedList& obj) { 
          DARABONBA_PTR_FROM_JSON(DeviceName, deviceName_);
          DARABONBA_PTR_FROM_JSON(Message, message_);
        };
        FailedList() = default ;
        FailedList(const FailedList &) = default ;
        FailedList(FailedList &&) = default ;
        FailedList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~FailedList() = default ;
        FailedList& operator=(const FailedList &) = default ;
        FailedList& operator=(FailedList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->deviceName_ == nullptr
        && this->message_ == nullptr; };
        // deviceName Field Functions 
        bool hasDeviceName() const { return this->deviceName_ != nullptr;};
        void deleteDeviceName() { this->deviceName_ = nullptr;};
        inline string getDeviceName() const { DARABONBA_PTR_GET_DEFAULT(deviceName_, "") };
        inline FailedList& setDeviceName(string deviceName) { DARABONBA_PTR_SET_VALUE(deviceName_, deviceName) };


        // message Field Functions 
        bool hasMessage() const { return this->message_ != nullptr;};
        void deleteMessage() { this->message_ = nullptr;};
        inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
        inline FailedList& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


      protected:
        // The name of the device.
        shared_ptr<string> deviceName_ {};
        // The description of the failed transfer.
        shared_ptr<string> message_ {};
      };

      virtual bool empty() const override { return this->failedList_ == nullptr
        && this->successList_ == nullptr; };
      // failedList Field Functions 
      bool hasFailedList() const { return this->failedList_ != nullptr;};
      void deleteFailedList() { this->failedList_ = nullptr;};
      inline const vector<Data::FailedList> & getFailedList() const { DARABONBA_PTR_GET_CONST(failedList_, vector<Data::FailedList>) };
      inline vector<Data::FailedList> getFailedList() { DARABONBA_PTR_GET(failedList_, vector<Data::FailedList>) };
      inline Data& setFailedList(const vector<Data::FailedList> & failedList) { DARABONBA_PTR_SET_VALUE(failedList_, failedList) };
      inline Data& setFailedList(vector<Data::FailedList> && failedList) { DARABONBA_PTR_SET_RVALUE(failedList_, failedList) };


      // successList Field Functions 
      bool hasSuccessList() const { return this->successList_ != nullptr;};
      void deleteSuccessList() { this->successList_ = nullptr;};
      inline const vector<Data::SuccessList> & getSuccessList() const { DARABONBA_PTR_GET_CONST(successList_, vector<Data::SuccessList>) };
      inline vector<Data::SuccessList> getSuccessList() { DARABONBA_PTR_GET(successList_, vector<Data::SuccessList>) };
      inline Data& setSuccessList(const vector<Data::SuccessList> & successList) { DARABONBA_PTR_SET_VALUE(successList_, successList) };
      inline Data& setSuccessList(vector<Data::SuccessList> && successList) { DARABONBA_PTR_SET_RVALUE(successList_, successList) };


    protected:
      // The list of devices that failed to be transferred.
      shared_ptr<vector<Data::FailedList>> failedList_ {};
      // The list of devices that were successfully transferred.
      shared_ptr<vector<Data::SuccessList>> successList_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->errorMessage_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline TransferDeviceInstanceResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const TransferDeviceInstanceResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, TransferDeviceInstanceResponseBody::Data) };
    inline TransferDeviceInstanceResponseBody::Data getData() { DARABONBA_PTR_GET(data_, TransferDeviceInstanceResponseBody::Data) };
    inline TransferDeviceInstanceResponseBody& setData(const TransferDeviceInstanceResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline TransferDeviceInstanceResponseBody& setData(TransferDeviceInstanceResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline TransferDeviceInstanceResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline TransferDeviceInstanceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline TransferDeviceInstanceResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The response code:
    // 
    // - **200**: The call was successful.
    // - Other values: The call failed. For more information, see [Error codes](https://help.aliyun.com/document_detail/145071.html).
    shared_ptr<string> code_ {};
    // The result.
    shared_ptr<TransferDeviceInstanceResponseBody::Data> data_ {};
    // The error message returned if the call fails.
    shared_ptr<string> errorMessage_ {};
    // The unique identifier that Alibaba Cloud generates for the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the call was successful:
    // - **true**: The call was successful.
    // - **false**: The call failed.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Linkvisual20180120
#endif
