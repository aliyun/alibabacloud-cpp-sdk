// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IMAGEUPSCALERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_IMAGEUPSCALERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aidge20260428
{
namespace Models
{
  class ImageUpscaleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ImageUpscaleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ImageUpscaleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ImageUpscaleResponseBody() = default ;
    ImageUpscaleResponseBody(const ImageUpscaleResponseBody &) = default ;
    ImageUpscaleResponseBody(ImageUpscaleResponseBody &&) = default ;
    ImageUpscaleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ImageUpscaleResponseBody() = default ;
    ImageUpscaleResponseBody& operator=(const ImageUpscaleResponseBody &) = default ;
    ImageUpscaleResponseBody& operator=(ImageUpscaleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Data, data_);
        DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
        DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
        DARABONBA_PTR_TO_JSON(Success, success_);
        DARABONBA_PTR_TO_JSON(TaskId, taskId_);
        DARABONBA_PTR_TO_JSON(UsageMap, usageMap_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Data, data_);
        DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
        DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
        DARABONBA_PTR_FROM_JSON(Success, success_);
        DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
        DARABONBA_PTR_FROM_JSON(UsageMap, usageMap_);
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
      class UsageMap : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const UsageMap& obj) { 
          DARABONBA_PTR_TO_JSON(ProcessedImageCount, processedImageCount_);
        };
        friend void from_json(const Darabonba::Json& j, UsageMap& obj) { 
          DARABONBA_PTR_FROM_JSON(ProcessedImageCount, processedImageCount_);
        };
        UsageMap() = default ;
        UsageMap(const UsageMap &) = default ;
        UsageMap(UsageMap &&) = default ;
        UsageMap(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~UsageMap() = default ;
        UsageMap& operator=(const UsageMap &) = default ;
        UsageMap& operator=(UsageMap &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->processedImageCount_ == nullptr; };
        // processedImageCount Field Functions 
        bool hasProcessedImageCount() const { return this->processedImageCount_ != nullptr;};
        void deleteProcessedImageCount() { this->processedImageCount_ = nullptr;};
        inline int32_t getProcessedImageCount() const { DARABONBA_PTR_GET_DEFAULT(processedImageCount_, 0) };
        inline UsageMap& setProcessedImageCount(int32_t processedImageCount) { DARABONBA_PTR_SET_VALUE(processedImageCount_, processedImageCount) };


      protected:
        // The number of processed images.
        shared_ptr<int32_t> processedImageCount_ {};
      };

      class DataItem : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DataItem& obj) { 
          DARABONBA_PTR_TO_JSON(ImageHeight, imageHeight_);
          DARABONBA_PTR_TO_JSON(ImageUrl, imageUrl_);
          DARABONBA_PTR_TO_JSON(ImageWidth, imageWidth_);
        };
        friend void from_json(const Darabonba::Json& j, DataItem& obj) { 
          DARABONBA_PTR_FROM_JSON(ImageHeight, imageHeight_);
          DARABONBA_PTR_FROM_JSON(ImageUrl, imageUrl_);
          DARABONBA_PTR_FROM_JSON(ImageWidth, imageWidth_);
        };
        DataItem() = default ;
        DataItem(const DataItem &) = default ;
        DataItem(DataItem &&) = default ;
        DataItem(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DataItem() = default ;
        DataItem& operator=(const DataItem &) = default ;
        DataItem& operator=(DataItem &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->imageHeight_ == nullptr
        && this->imageUrl_ == nullptr && this->imageWidth_ == nullptr; };
        // imageHeight Field Functions 
        bool hasImageHeight() const { return this->imageHeight_ != nullptr;};
        void deleteImageHeight() { this->imageHeight_ = nullptr;};
        inline int32_t getImageHeight() const { DARABONBA_PTR_GET_DEFAULT(imageHeight_, 0) };
        inline DataItem& setImageHeight(int32_t imageHeight) { DARABONBA_PTR_SET_VALUE(imageHeight_, imageHeight) };


        // imageUrl Field Functions 
        bool hasImageUrl() const { return this->imageUrl_ != nullptr;};
        void deleteImageUrl() { this->imageUrl_ = nullptr;};
        inline string getImageUrl() const { DARABONBA_PTR_GET_DEFAULT(imageUrl_, "") };
        inline DataItem& setImageUrl(string imageUrl) { DARABONBA_PTR_SET_VALUE(imageUrl_, imageUrl) };


        // imageWidth Field Functions 
        bool hasImageWidth() const { return this->imageWidth_ != nullptr;};
        void deleteImageWidth() { this->imageWidth_ = nullptr;};
        inline int32_t getImageWidth() const { DARABONBA_PTR_GET_DEFAULT(imageWidth_, 0) };
        inline DataItem& setImageWidth(int32_t imageWidth) { DARABONBA_PTR_SET_VALUE(imageWidth_, imageWidth) };


      protected:
        // The actual height of the generated image.
        shared_ptr<int32_t> imageHeight_ {};
        // The result information of the high-definition upscaling for a single image.
        shared_ptr<string> imageUrl_ {};
        // The actual width of the generated image.
        shared_ptr<int32_t> imageWidth_ {};
      };

      virtual bool empty() const override { return this->data_ == nullptr
        && this->errorCode_ == nullptr && this->errorMessage_ == nullptr && this->success_ == nullptr && this->taskId_ == nullptr && this->usageMap_ == nullptr; };
      // data Field Functions 
      bool hasData() const { return this->data_ != nullptr;};
      void deleteData() { this->data_ = nullptr;};
      inline const Data::DataItem & getData() const { DARABONBA_PTR_GET_CONST(data_, Data::DataItem) };
      inline Data::DataItem getData() { DARABONBA_PTR_GET(data_, Data::DataItem) };
      inline Data& setData(const Data::DataItem & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
      inline Data& setData(Data::DataItem && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


      // errorCode Field Functions 
      bool hasErrorCode() const { return this->errorCode_ != nullptr;};
      void deleteErrorCode() { this->errorCode_ = nullptr;};
      inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
      inline Data& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


      // errorMessage Field Functions 
      bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
      void deleteErrorMessage() { this->errorMessage_ = nullptr;};
      inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
      inline Data& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


      // success Field Functions 
      bool hasSuccess() const { return this->success_ != nullptr;};
      void deleteSuccess() { this->success_ = nullptr;};
      inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
      inline Data& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
      inline Data& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


      // usageMap Field Functions 
      bool hasUsageMap() const { return this->usageMap_ != nullptr;};
      void deleteUsageMap() { this->usageMap_ = nullptr;};
      inline const Data::UsageMap & getUsageMap() const { DARABONBA_PTR_GET_CONST(usageMap_, Data::UsageMap) };
      inline Data::UsageMap getUsageMap() { DARABONBA_PTR_GET(usageMap_, Data::UsageMap) };
      inline Data& setUsageMap(const Data::UsageMap & usageMap) { DARABONBA_PTR_SET_VALUE(usageMap_, usageMap) };
      inline Data& setUsageMap(Data::UsageMap && usageMap) { DARABONBA_PTR_SET_RVALUE(usageMap_, usageMap) };


    protected:
      // The high-definition upscaling result data.
      shared_ptr<Data::DataItem> data_ {};
      // The error code. Returned upon failure, such as InvalidParameter or DownstreamUnavailable.
      shared_ptr<string> errorCode_ {};
      // The error message. Returned upon failure.
      shared_ptr<string> errorMessage_ {};
      // Indicates whether the operation is successful. A value of true indicates success, and a value of false indicates failure.
      shared_ptr<bool> success_ {};
      // The downstream task ID. This parameter is empty for synchronous operations.
      shared_ptr<string> taskId_ {};
      // The usage information.
      shared_ptr<Data::UsageMap> usageMap_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ImageUpscaleResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ImageUpscaleResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ImageUpscaleResponseBody::Data) };
    inline ImageUpscaleResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ImageUpscaleResponseBody::Data) };
    inline ImageUpscaleResponseBody& setData(const ImageUpscaleResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ImageUpscaleResponseBody& setData(ImageUpscaleResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ImageUpscaleResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ImageUpscaleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ImageUpscaleResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The status code, such as success.
    shared_ptr<string> code_ {};
    // The returned result struct information.
    shared_ptr<ImageUpscaleResponseBody::Data> data_ {};
    // The returned message or error prompt.
    shared_ptr<string> message_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    // Indicates whether the call is successful. A value of true indicates success, and a value of false indicates failure.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aidge20260428
#endif
