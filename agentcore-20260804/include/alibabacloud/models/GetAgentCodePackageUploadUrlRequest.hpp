// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAGENTCODEPACKAGEUPLOADURLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETAGENTCODEPACKAGEUPLOADURLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentCore20260804
{
namespace Models
{
  class GetAgentCodePackageUploadUrlRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAgentCodePackageUploadUrlRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, GetAgentCodePackageUploadUrlRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    GetAgentCodePackageUploadUrlRequest() = default ;
    GetAgentCodePackageUploadUrlRequest(const GetAgentCodePackageUploadUrlRequest &) = default ;
    GetAgentCodePackageUploadUrlRequest(GetAgentCodePackageUploadUrlRequest &&) = default ;
    GetAgentCodePackageUploadUrlRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAgentCodePackageUploadUrlRequest() = default ;
    GetAgentCodePackageUploadUrlRequest& operator=(const GetAgentCodePackageUploadUrlRequest &) = default ;
    GetAgentCodePackageUploadUrlRequest& operator=(GetAgentCodePackageUploadUrlRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Body : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Body& obj) { 
        DARABONBA_PTR_TO_JSON(fileName, fileName_);
        DARABONBA_PTR_TO_JSON(fileSize, fileSize_);
        DARABONBA_PTR_TO_JSON(format, format_);
      };
      friend void from_json(const Darabonba::Json& j, Body& obj) { 
        DARABONBA_PTR_FROM_JSON(fileName, fileName_);
        DARABONBA_PTR_FROM_JSON(fileSize, fileSize_);
        DARABONBA_PTR_FROM_JSON(format, format_);
      };
      Body() = default ;
      Body(const Body &) = default ;
      Body(Body &&) = default ;
      Body(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Body() = default ;
      Body& operator=(const Body &) = default ;
      Body& operator=(Body &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->fileName_ == nullptr
        && this->fileSize_ == nullptr && this->format_ == nullptr; };
      // fileName Field Functions 
      bool hasFileName() const { return this->fileName_ != nullptr;};
      void deleteFileName() { this->fileName_ = nullptr;};
      inline string getFileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
      inline Body& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


      // fileSize Field Functions 
      bool hasFileSize() const { return this->fileSize_ != nullptr;};
      void deleteFileSize() { this->fileSize_ = nullptr;};
      inline int64_t getFileSize() const { DARABONBA_PTR_GET_DEFAULT(fileSize_, 0L) };
      inline Body& setFileSize(int64_t fileSize) { DARABONBA_PTR_SET_VALUE(fileSize_, fileSize) };


      // format Field Functions 
      bool hasFormat() const { return this->format_ != nullptr;};
      void deleteFormat() { this->format_ = nullptr;};
      inline string getFormat() const { DARABONBA_PTR_GET_DEFAULT(format_, "") };
      inline Body& setFormat(string format) { DARABONBA_PTR_SET_VALUE(format_, format) };


    protected:
      // The filename of the code package.
      // 
      // This parameter is required.
      shared_ptr<string> fileName_ {};
      // The declared compressed size of the code package.
      // 
      // This parameter is required.
      shared_ptr<int64_t> fileSize_ {};
      // The format of the code package.
      // 
      // This parameter is required.
      shared_ptr<string> format_ {};
    };

    virtual bool empty() const override { return this->body_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const GetAgentCodePackageUploadUrlRequest::Body & getBody() const { DARABONBA_PTR_GET_CONST(body_, GetAgentCodePackageUploadUrlRequest::Body) };
    inline GetAgentCodePackageUploadUrlRequest::Body getBody() { DARABONBA_PTR_GET(body_, GetAgentCodePackageUploadUrlRequest::Body) };
    inline GetAgentCodePackageUploadUrlRequest& setBody(const GetAgentCodePackageUploadUrlRequest::Body & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline GetAgentCodePackageUploadUrlRequest& setBody(GetAgentCodePackageUploadUrlRequest::Body && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    // The request body.
    // 
    // This parameter is required.
    shared_ptr<GetAgentCodePackageUploadUrlRequest::Body> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentCore20260804
#endif
