// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAGENTSPECIMPORTFILEURLRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETAGENTSPECIMPORTFILEURLRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentCore20260804
{
namespace Models
{
  class GetAgentSpecImportFileUrlResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAgentSpecImportFileUrlResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAgentSpecImportFileUrlResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    GetAgentSpecImportFileUrlResponseBody() = default ;
    GetAgentSpecImportFileUrlResponseBody(const GetAgentSpecImportFileUrlResponseBody &) = default ;
    GetAgentSpecImportFileUrlResponseBody(GetAgentSpecImportFileUrlResponseBody &&) = default ;
    GetAgentSpecImportFileUrlResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAgentSpecImportFileUrlResponseBody() = default ;
    GetAgentSpecImportFileUrlResponseBody& operator=(const GetAgentSpecImportFileUrlResponseBody &) = default ;
    GetAgentSpecImportFileUrlResponseBody& operator=(GetAgentSpecImportFileUrlResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(contentType, contentType_);
        DARABONBA_PTR_TO_JSON(maxSize, maxSize_);
        DARABONBA_PTR_TO_JSON(ossObjectName, ossObjectName_);
        DARABONBA_PTR_TO_JSON(uploadUrl, uploadUrl_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(contentType, contentType_);
        DARABONBA_PTR_FROM_JSON(maxSize, maxSize_);
        DARABONBA_PTR_FROM_JSON(ossObjectName, ossObjectName_);
        DARABONBA_PTR_FROM_JSON(uploadUrl, uploadUrl_);
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
      // The Content-Type used for the OSS PUT request.
      shared_ptr<string> contentType_ {};
      // The maximum number of bytes allowed for the upload.
      shared_ptr<string> maxSize_ {};
      // The OSS object name.
      shared_ptr<string> ossObjectName_ {};
      // The OSS pre-signed upload URL.
      shared_ptr<string> uploadUrl_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetAgentSpecImportFileUrlResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetAgentSpecImportFileUrlResponseBody::Data) };
    inline GetAgentSpecImportFileUrlResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetAgentSpecImportFileUrlResponseBody::Data) };
    inline GetAgentSpecImportFileUrlResponseBody& setData(const GetAgentSpecImportFileUrlResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetAgentSpecImportFileUrlResponseBody& setData(GetAgentSpecImportFileUrlResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAgentSpecImportFileUrlResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The response data.
    shared_ptr<GetAgentSpecImportFileUrlResponseBody::Data> data_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentCore20260804
#endif
