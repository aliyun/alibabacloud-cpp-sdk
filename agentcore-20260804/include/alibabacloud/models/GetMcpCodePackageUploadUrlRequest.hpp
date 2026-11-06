// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMCPCODEPACKAGEUPLOADURLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETMCPCODEPACKAGEUPLOADURLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentCore20260804
{
namespace Models
{
  class GetMcpCodePackageUploadUrlRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMcpCodePackageUploadUrlRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, GetMcpCodePackageUploadUrlRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    GetMcpCodePackageUploadUrlRequest() = default ;
    GetMcpCodePackageUploadUrlRequest(const GetMcpCodePackageUploadUrlRequest &) = default ;
    GetMcpCodePackageUploadUrlRequest(GetMcpCodePackageUploadUrlRequest &&) = default ;
    GetMcpCodePackageUploadUrlRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMcpCodePackageUploadUrlRequest() = default ;
    GetMcpCodePackageUploadUrlRequest& operator=(const GetMcpCodePackageUploadUrlRequest &) = default ;
    GetMcpCodePackageUploadUrlRequest& operator=(GetMcpCodePackageUploadUrlRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Body : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Body& obj) { 
        DARABONBA_PTR_TO_JSON(fileName, fileName_);
      };
      friend void from_json(const Darabonba::Json& j, Body& obj) { 
        DARABONBA_PTR_FROM_JSON(fileName, fileName_);
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
      virtual bool empty() const override { return this->fileName_ == nullptr; };
      // fileName Field Functions 
      bool hasFileName() const { return this->fileName_ != nullptr;};
      void deleteFileName() { this->fileName_ = nullptr;};
      inline string getFileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
      inline Body& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


    protected:
      // The file name of the ZIP code package.
      // 
      // This parameter is required.
      shared_ptr<string> fileName_ {};
    };

    virtual bool empty() const override { return this->body_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const GetMcpCodePackageUploadUrlRequest::Body & getBody() const { DARABONBA_PTR_GET_CONST(body_, GetMcpCodePackageUploadUrlRequest::Body) };
    inline GetMcpCodePackageUploadUrlRequest::Body getBody() { DARABONBA_PTR_GET(body_, GetMcpCodePackageUploadUrlRequest::Body) };
    inline GetMcpCodePackageUploadUrlRequest& setBody(const GetMcpCodePackageUploadUrlRequest::Body & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline GetMcpCodePackageUploadUrlRequest& setBody(GetMcpCodePackageUploadUrlRequest::Body && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    // The request body.
    shared_ptr<GetMcpCodePackageUploadUrlRequest::Body> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentCore20260804
#endif
