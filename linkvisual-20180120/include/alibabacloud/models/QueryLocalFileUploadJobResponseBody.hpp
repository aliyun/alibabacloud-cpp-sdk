// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYLOCALFILEUPLOADJOBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYLOCALFILEUPLOADJOBRESPONSEBODY_HPP_
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
  class QueryLocalFileUploadJobResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryLocalFileUploadJobResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, QueryLocalFileUploadJobResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    QueryLocalFileUploadJobResponseBody() = default ;
    QueryLocalFileUploadJobResponseBody(const QueryLocalFileUploadJobResponseBody &) = default ;
    QueryLocalFileUploadJobResponseBody(QueryLocalFileUploadJobResponseBody &&) = default ;
    QueryLocalFileUploadJobResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryLocalFileUploadJobResponseBody() = default ;
    QueryLocalFileUploadJobResponseBody& operator=(const QueryLocalFileUploadJobResponseBody &) = default ;
    QueryLocalFileUploadJobResponseBody& operator=(QueryLocalFileUploadJobResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(ResultList, resultList_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(ResultList, resultList_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
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
      class ResultList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ResultList& obj) { 
          DARABONBA_PTR_TO_JSON(Code, code_);
          DARABONBA_PTR_TO_JSON(DeviceName, deviceName_);
          DARABONBA_PTR_TO_JSON(FileList, fileList_);
          DARABONBA_PTR_TO_JSON(IotId, iotId_);
          DARABONBA_PTR_TO_JSON(ProductKey, productKey_);
          DARABONBA_PTR_TO_JSON(SlotEndTime, slotEndTime_);
          DARABONBA_PTR_TO_JSON(SlotStartTime, slotStartTime_);
          DARABONBA_PTR_TO_JSON(SlotStatus, slotStatus_);
        };
        friend void from_json(const Darabonba::Json& j, ResultList& obj) { 
          DARABONBA_PTR_FROM_JSON(Code, code_);
          DARABONBA_PTR_FROM_JSON(DeviceName, deviceName_);
          DARABONBA_PTR_FROM_JSON(FileList, fileList_);
          DARABONBA_PTR_FROM_JSON(IotId, iotId_);
          DARABONBA_PTR_FROM_JSON(ProductKey, productKey_);
          DARABONBA_PTR_FROM_JSON(SlotEndTime, slotEndTime_);
          DARABONBA_PTR_FROM_JSON(SlotStartTime, slotStartTime_);
          DARABONBA_PTR_FROM_JSON(SlotStatus, slotStatus_);
        };
        ResultList() = default ;
        ResultList(const ResultList &) = default ;
        ResultList(ResultList &&) = default ;
        ResultList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ResultList() = default ;
        ResultList& operator=(const ResultList &) = default ;
        ResultList& operator=(ResultList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class FileList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const FileList& obj) { 
            DARABONBA_PTR_TO_JSON(FileEndTime, fileEndTime_);
            DARABONBA_PTR_TO_JSON(FileName, fileName_);
            DARABONBA_PTR_TO_JSON(FileStartTime, fileStartTime_);
          };
          friend void from_json(const Darabonba::Json& j, FileList& obj) { 
            DARABONBA_PTR_FROM_JSON(FileEndTime, fileEndTime_);
            DARABONBA_PTR_FROM_JSON(FileName, fileName_);
            DARABONBA_PTR_FROM_JSON(FileStartTime, fileStartTime_);
          };
          FileList() = default ;
          FileList(const FileList &) = default ;
          FileList(FileList &&) = default ;
          FileList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~FileList() = default ;
          FileList& operator=(const FileList &) = default ;
          FileList& operator=(FileList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->fileEndTime_ == nullptr
        && this->fileName_ == nullptr && this->fileStartTime_ == nullptr; };
          // fileEndTime Field Functions 
          bool hasFileEndTime() const { return this->fileEndTime_ != nullptr;};
          void deleteFileEndTime() { this->fileEndTime_ = nullptr;};
          inline int32_t getFileEndTime() const { DARABONBA_PTR_GET_DEFAULT(fileEndTime_, 0) };
          inline FileList& setFileEndTime(int32_t fileEndTime) { DARABONBA_PTR_SET_VALUE(fileEndTime_, fileEndTime) };


          // fileName Field Functions 
          bool hasFileName() const { return this->fileName_ != nullptr;};
          void deleteFileName() { this->fileName_ = nullptr;};
          inline string getFileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
          inline FileList& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


          // fileStartTime Field Functions 
          bool hasFileStartTime() const { return this->fileStartTime_ != nullptr;};
          void deleteFileStartTime() { this->fileStartTime_ = nullptr;};
          inline int32_t getFileStartTime() const { DARABONBA_PTR_GET_DEFAULT(fileStartTime_, 0) };
          inline FileList& setFileStartTime(int32_t fileStartTime) { DARABONBA_PTR_SET_VALUE(fileStartTime_, fileStartTime) };


        protected:
          // The end time of the video recording file.
          shared_ptr<int32_t> fileEndTime_ {};
          // The name of the video recording file.
          shared_ptr<string> fileName_ {};
          // The start time of the video recording file.
          shared_ptr<int32_t> fileStartTime_ {};
        };

        virtual bool empty() const override { return this->code_ == nullptr
        && this->deviceName_ == nullptr && this->fileList_ == nullptr && this->iotId_ == nullptr && this->productKey_ == nullptr && this->slotEndTime_ == nullptr
        && this->slotStartTime_ == nullptr && this->slotStatus_ == nullptr; };
        // code Field Functions 
        bool hasCode() const { return this->code_ != nullptr;};
        void deleteCode() { this->code_ = nullptr;};
        inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
        inline ResultList& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


        // deviceName Field Functions 
        bool hasDeviceName() const { return this->deviceName_ != nullptr;};
        void deleteDeviceName() { this->deviceName_ = nullptr;};
        inline string getDeviceName() const { DARABONBA_PTR_GET_DEFAULT(deviceName_, "") };
        inline ResultList& setDeviceName(string deviceName) { DARABONBA_PTR_SET_VALUE(deviceName_, deviceName) };


        // fileList Field Functions 
        bool hasFileList() const { return this->fileList_ != nullptr;};
        void deleteFileList() { this->fileList_ = nullptr;};
        inline const vector<ResultList::FileList> & getFileList() const { DARABONBA_PTR_GET_CONST(fileList_, vector<ResultList::FileList>) };
        inline vector<ResultList::FileList> getFileList() { DARABONBA_PTR_GET(fileList_, vector<ResultList::FileList>) };
        inline ResultList& setFileList(const vector<ResultList::FileList> & fileList) { DARABONBA_PTR_SET_VALUE(fileList_, fileList) };
        inline ResultList& setFileList(vector<ResultList::FileList> && fileList) { DARABONBA_PTR_SET_RVALUE(fileList_, fileList) };


        // iotId Field Functions 
        bool hasIotId() const { return this->iotId_ != nullptr;};
        void deleteIotId() { this->iotId_ = nullptr;};
        inline string getIotId() const { DARABONBA_PTR_GET_DEFAULT(iotId_, "") };
        inline ResultList& setIotId(string iotId) { DARABONBA_PTR_SET_VALUE(iotId_, iotId) };


        // productKey Field Functions 
        bool hasProductKey() const { return this->productKey_ != nullptr;};
        void deleteProductKey() { this->productKey_ = nullptr;};
        inline string getProductKey() const { DARABONBA_PTR_GET_DEFAULT(productKey_, "") };
        inline ResultList& setProductKey(string productKey) { DARABONBA_PTR_SET_VALUE(productKey_, productKey) };


        // slotEndTime Field Functions 
        bool hasSlotEndTime() const { return this->slotEndTime_ != nullptr;};
        void deleteSlotEndTime() { this->slotEndTime_ = nullptr;};
        inline int32_t getSlotEndTime() const { DARABONBA_PTR_GET_DEFAULT(slotEndTime_, 0) };
        inline ResultList& setSlotEndTime(int32_t slotEndTime) { DARABONBA_PTR_SET_VALUE(slotEndTime_, slotEndTime) };


        // slotStartTime Field Functions 
        bool hasSlotStartTime() const { return this->slotStartTime_ != nullptr;};
        void deleteSlotStartTime() { this->slotStartTime_ = nullptr;};
        inline int32_t getSlotStartTime() const { DARABONBA_PTR_GET_DEFAULT(slotStartTime_, 0) };
        inline ResultList& setSlotStartTime(int32_t slotStartTime) { DARABONBA_PTR_SET_VALUE(slotStartTime_, slotStartTime) };


        // slotStatus Field Functions 
        bool hasSlotStatus() const { return this->slotStatus_ != nullptr;};
        void deleteSlotStatus() { this->slotStatus_ = nullptr;};
        inline int32_t getSlotStatus() const { DARABONBA_PTR_GET_DEFAULT(slotStatus_, 0) };
        inline ResultList& setSlotStatus(int32_t slotStatus) { DARABONBA_PTR_SET_VALUE(slotStatus_, slotStatus) };


      protected:
        // The status code of the video recording upload task. Valid values:
        // 
        // - 200: Normal.
        // - 9201: The device is offline. Bring the device online and try again.
        // - 9409: No cloud storage quota is available. Check the cloud storage quota and try again.
        // - 9417: A device, network, or other exception occurred. Try again, or check the device and network status.
        // - 9435: The video recording file does not exist. Make sure that the video recording file is stored locally on the video device and try again.
        shared_ptr<int32_t> code_ {};
        // The DeviceName of the video device.
        shared_ptr<string> deviceName_ {};
        // The list of video recording files.
        shared_ptr<vector<ResultList::FileList>> fileList_ {};
        // The ID of the video device. The ID is issued by IoT Platform and uniquely identifies the device.
        shared_ptr<string> iotId_ {};
        // The ProductKey of the product to which the video device belongs.
        shared_ptr<string> productKey_ {};
        // The end time of the video recording upload task.
        shared_ptr<int32_t> slotEndTime_ {};
        // The start time of the video recording upload task.
        shared_ptr<int32_t> slotStartTime_ {};
        // The execution status of the video recording upload task within the time period specified by **SlotStartTime** and **SlotEndTime**. Valid values:
        // - 0: The task is being initialized.
        // - 1: The task is running.
        // - 2: The task is completed.
        // - 3: An exception occurred during task execution.
        // - 4: The task is manually terminated.
        shared_ptr<int32_t> slotStatus_ {};
      };

      virtual bool empty() const override { return this->resultList_ == nullptr
        && this->status_ == nullptr; };
      // resultList Field Functions 
      bool hasResultList() const { return this->resultList_ != nullptr;};
      void deleteResultList() { this->resultList_ = nullptr;};
      inline const vector<Data::ResultList> & getResultList() const { DARABONBA_PTR_GET_CONST(resultList_, vector<Data::ResultList>) };
      inline vector<Data::ResultList> getResultList() { DARABONBA_PTR_GET(resultList_, vector<Data::ResultList>) };
      inline Data& setResultList(const vector<Data::ResultList> & resultList) { DARABONBA_PTR_SET_VALUE(resultList_, resultList) };
      inline Data& setResultList(vector<Data::ResultList> && resultList) { DARABONBA_PTR_SET_RVALUE(resultList_, resultList) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
      inline Data& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // The task list.
      shared_ptr<vector<Data::ResultList>> resultList_ {};
      // The status of the video recording upload task. Valid values:
      // 
      // - 0: The task is being initialized.
      // - 1: The task is running.
      // - 2: The task is completed.
      shared_ptr<int32_t> status_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->errorMessage_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline QueryLocalFileUploadJobResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const QueryLocalFileUploadJobResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, QueryLocalFileUploadJobResponseBody::Data) };
    inline QueryLocalFileUploadJobResponseBody::Data getData() { DARABONBA_PTR_GET(data_, QueryLocalFileUploadJobResponseBody::Data) };
    inline QueryLocalFileUploadJobResponseBody& setData(const QueryLocalFileUploadJobResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline QueryLocalFileUploadJobResponseBody& setData(QueryLocalFileUploadJobResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline QueryLocalFileUploadJobResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryLocalFileUploadJobResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QueryLocalFileUploadJobResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The response code:
    // 
    // - **200**: The call is successful.
    // - Other values: An error occurred. For more information about error codes, see [Error codes](https://help.aliyun.com/document_detail/145071.html).
    shared_ptr<string> code_ {};
    // The query result.
    shared_ptr<QueryLocalFileUploadJobResponseBody::Data> data_ {};
    // The error message returned if the call fails.
    shared_ptr<string> errorMessage_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the call was successful. Valid values:
    // - **true**: The call was successful.
    // - **false**: The call failed.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Linkvisual20180120
#endif
