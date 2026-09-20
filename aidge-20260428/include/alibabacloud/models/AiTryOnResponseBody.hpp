// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_AITRYONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_AITRYONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aidge20260428
{
namespace Models
{
  class AiTryOnResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AiTryOnResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, AiTryOnResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    AiTryOnResponseBody() = default ;
    AiTryOnResponseBody(const AiTryOnResponseBody &) = default ;
    AiTryOnResponseBody(AiTryOnResponseBody &&) = default ;
    AiTryOnResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AiTryOnResponseBody() = default ;
    AiTryOnResponseBody& operator=(const AiTryOnResponseBody &) = default ;
    AiTryOnResponseBody& operator=(AiTryOnResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(ImageHeight, imageHeight_);
        DARABONBA_PTR_TO_JSON(ImageUrl, imageUrl_);
        DARABONBA_PTR_TO_JSON(ImageWidth, imageWidth_);
        DARABONBA_PTR_TO_JSON(UsageMap, usageMap_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(ImageHeight, imageHeight_);
        DARABONBA_PTR_FROM_JSON(ImageUrl, imageUrl_);
        DARABONBA_PTR_FROM_JSON(ImageWidth, imageWidth_);
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
          DARABONBA_PTR_TO_JSON(Resolution, resolution_);
        };
        friend void from_json(const Darabonba::Json& j, UsageMap& obj) { 
          DARABONBA_PTR_FROM_JSON(ProcessedImageCount, processedImageCount_);
          DARABONBA_PTR_FROM_JSON(Resolution, resolution_);
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
        virtual bool empty() const override { return this->processedImageCount_ == nullptr
        && this->resolution_ == nullptr; };
        // processedImageCount Field Functions 
        bool hasProcessedImageCount() const { return this->processedImageCount_ != nullptr;};
        void deleteProcessedImageCount() { this->processedImageCount_ = nullptr;};
        inline int64_t getProcessedImageCount() const { DARABONBA_PTR_GET_DEFAULT(processedImageCount_, 0L) };
        inline UsageMap& setProcessedImageCount(int64_t processedImageCount) { DARABONBA_PTR_SET_VALUE(processedImageCount_, processedImageCount) };


        // resolution Field Functions 
        bool hasResolution() const { return this->resolution_ != nullptr;};
        void deleteResolution() { this->resolution_ = nullptr;};
        inline string getResolution() const { DARABONBA_PTR_GET_DEFAULT(resolution_, "") };
        inline UsageMap& setResolution(string resolution) { DARABONBA_PTR_SET_VALUE(resolution_, resolution) };


      protected:
        shared_ptr<int64_t> processedImageCount_ {};
        shared_ptr<string> resolution_ {};
      };

      virtual bool empty() const override { return this->imageHeight_ == nullptr
        && this->imageUrl_ == nullptr && this->imageWidth_ == nullptr && this->usageMap_ == nullptr; };
      // imageHeight Field Functions 
      bool hasImageHeight() const { return this->imageHeight_ != nullptr;};
      void deleteImageHeight() { this->imageHeight_ = nullptr;};
      inline string getImageHeight() const { DARABONBA_PTR_GET_DEFAULT(imageHeight_, "") };
      inline Data& setImageHeight(string imageHeight) { DARABONBA_PTR_SET_VALUE(imageHeight_, imageHeight) };


      // imageUrl Field Functions 
      bool hasImageUrl() const { return this->imageUrl_ != nullptr;};
      void deleteImageUrl() { this->imageUrl_ = nullptr;};
      inline string getImageUrl() const { DARABONBA_PTR_GET_DEFAULT(imageUrl_, "") };
      inline Data& setImageUrl(string imageUrl) { DARABONBA_PTR_SET_VALUE(imageUrl_, imageUrl) };


      // imageWidth Field Functions 
      bool hasImageWidth() const { return this->imageWidth_ != nullptr;};
      void deleteImageWidth() { this->imageWidth_ = nullptr;};
      inline string getImageWidth() const { DARABONBA_PTR_GET_DEFAULT(imageWidth_, "") };
      inline Data& setImageWidth(string imageWidth) { DARABONBA_PTR_SET_VALUE(imageWidth_, imageWidth) };


      // usageMap Field Functions 
      bool hasUsageMap() const { return this->usageMap_ != nullptr;};
      void deleteUsageMap() { this->usageMap_ = nullptr;};
      inline const Data::UsageMap & getUsageMap() const { DARABONBA_PTR_GET_CONST(usageMap_, Data::UsageMap) };
      inline Data::UsageMap getUsageMap() { DARABONBA_PTR_GET(usageMap_, Data::UsageMap) };
      inline Data& setUsageMap(const Data::UsageMap & usageMap) { DARABONBA_PTR_SET_VALUE(usageMap_, usageMap) };
      inline Data& setUsageMap(Data::UsageMap && usageMap) { DARABONBA_PTR_SET_RVALUE(usageMap_, usageMap) };


    protected:
      shared_ptr<string> imageHeight_ {};
      shared_ptr<string> imageUrl_ {};
      shared_ptr<string> imageWidth_ {};
      shared_ptr<Data::UsageMap> usageMap_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline AiTryOnResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const AiTryOnResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, AiTryOnResponseBody::Data) };
    inline AiTryOnResponseBody::Data getData() { DARABONBA_PTR_GET(data_, AiTryOnResponseBody::Data) };
    inline AiTryOnResponseBody& setData(const AiTryOnResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline AiTryOnResponseBody& setData(AiTryOnResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline AiTryOnResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline AiTryOnResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline AiTryOnResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<AiTryOnResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aidge20260428
#endif
