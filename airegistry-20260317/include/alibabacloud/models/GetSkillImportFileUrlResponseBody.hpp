// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSKILLIMPORTFILEURLRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSKILLIMPORTFILEURLRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIRegistry20260317
{
namespace Models
{
  class GetSkillImportFileUrlResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSkillImportFileUrlResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetSkillImportFileUrlResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetSkillImportFileUrlResponseBody() = default ;
    GetSkillImportFileUrlResponseBody(const GetSkillImportFileUrlResponseBody &) = default ;
    GetSkillImportFileUrlResponseBody(GetSkillImportFileUrlResponseBody &&) = default ;
    GetSkillImportFileUrlResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSkillImportFileUrlResponseBody() = default ;
    GetSkillImportFileUrlResponseBody& operator=(const GetSkillImportFileUrlResponseBody &) = default ;
    GetSkillImportFileUrlResponseBody& operator=(GetSkillImportFileUrlResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(ContentType, contentType_);
        DARABONBA_PTR_TO_JSON(MaxSize, maxSize_);
        DARABONBA_PTR_TO_JSON(OssObjectName, ossObjectName_);
        DARABONBA_PTR_TO_JSON(UploadUrl, uploadUrl_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(ContentType, contentType_);
        DARABONBA_PTR_FROM_JSON(MaxSize, maxSize_);
        DARABONBA_PTR_FROM_JSON(OssObjectName, ossObjectName_);
        DARABONBA_PTR_FROM_JSON(UploadUrl, uploadUrl_);
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
      virtual bool empty() const override { return this->contentType_ == nullptr
        && this->maxSize_ == nullptr && this->ossObjectName_ == nullptr && this->uploadUrl_ == nullptr; };
      // contentType Field Functions 
      bool hasContentType() const { return this->contentType_ != nullptr;};
      void deleteContentType() { this->contentType_ = nullptr;};
      inline string getContentType() const { DARABONBA_PTR_GET_DEFAULT(contentType_, "") };
      inline Data& setContentType(string contentType) { DARABONBA_PTR_SET_VALUE(contentType_, contentType) };


      // maxSize Field Functions 
      bool hasMaxSize() const { return this->maxSize_ != nullptr;};
      void deleteMaxSize() { this->maxSize_ = nullptr;};
      inline string getMaxSize() const { DARABONBA_PTR_GET_DEFAULT(maxSize_, "") };
      inline Data& setMaxSize(string maxSize) { DARABONBA_PTR_SET_VALUE(maxSize_, maxSize) };


      // ossObjectName Field Functions 
      bool hasOssObjectName() const { return this->ossObjectName_ != nullptr;};
      void deleteOssObjectName() { this->ossObjectName_ = nullptr;};
      inline string getOssObjectName() const { DARABONBA_PTR_GET_DEFAULT(ossObjectName_, "") };
      inline Data& setOssObjectName(string ossObjectName) { DARABONBA_PTR_SET_VALUE(ossObjectName_, ossObjectName) };


      // uploadUrl Field Functions 
      bool hasUploadUrl() const { return this->uploadUrl_ != nullptr;};
      void deleteUploadUrl() { this->uploadUrl_ = nullptr;};
      inline string getUploadUrl() const { DARABONBA_PTR_GET_DEFAULT(uploadUrl_, "") };
      inline Data& setUploadUrl(string uploadUrl) { DARABONBA_PTR_SET_VALUE(uploadUrl_, uploadUrl) };


    protected:
      shared_ptr<string> contentType_ {};
      shared_ptr<string> maxSize_ {};
      shared_ptr<string> ossObjectName_ {};
      shared_ptr<string> uploadUrl_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetSkillImportFileUrlResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetSkillImportFileUrlResponseBody::Data) };
    inline GetSkillImportFileUrlResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetSkillImportFileUrlResponseBody::Data) };
    inline GetSkillImportFileUrlResponseBody& setData(const GetSkillImportFileUrlResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetSkillImportFileUrlResponseBody& setData(GetSkillImportFileUrlResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetSkillImportFileUrlResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<GetSkillImportFileUrlResponseBody::Data> data_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIRegistry20260317
#endif
