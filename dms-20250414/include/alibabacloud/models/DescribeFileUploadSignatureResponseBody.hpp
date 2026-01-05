// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEFILEUPLOADSIGNATURERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEFILEUPLOADSIGNATURERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dms20250414
{
namespace Models
{
  class DescribeFileUploadSignatureResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeFileUploadSignatureResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeFileUploadSignatureResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeFileUploadSignatureResponseBody() = default ;
    DescribeFileUploadSignatureResponseBody(const DescribeFileUploadSignatureResponseBody &) = default ;
    DescribeFileUploadSignatureResponseBody(DescribeFileUploadSignatureResponseBody &&) = default ;
    DescribeFileUploadSignatureResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeFileUploadSignatureResponseBody() = default ;
    DescribeFileUploadSignatureResponseBody& operator=(const DescribeFileUploadSignatureResponseBody &) = default ;
    DescribeFileUploadSignatureResponseBody& operator=(DescribeFileUploadSignatureResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(OssCredential, ossCredential_);
        DARABONBA_PTR_TO_JSON(OssDate, ossDate_);
        DARABONBA_PTR_TO_JSON(OssSecurityToken, ossSecurityToken_);
        DARABONBA_PTR_TO_JSON(OssSignature, ossSignature_);
        DARABONBA_PTR_TO_JSON(OssSignatureVersion, ossSignatureVersion_);
        DARABONBA_PTR_TO_JSON(Policy, policy_);
        DARABONBA_PTR_TO_JSON(UploadDir, uploadDir_);
        DARABONBA_PTR_TO_JSON(UploadHost, uploadHost_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(OssCredential, ossCredential_);
        DARABONBA_PTR_FROM_JSON(OssDate, ossDate_);
        DARABONBA_PTR_FROM_JSON(OssSecurityToken, ossSecurityToken_);
        DARABONBA_PTR_FROM_JSON(OssSignature, ossSignature_);
        DARABONBA_PTR_FROM_JSON(OssSignatureVersion, ossSignatureVersion_);
        DARABONBA_PTR_FROM_JSON(Policy, policy_);
        DARABONBA_PTR_FROM_JSON(UploadDir, uploadDir_);
        DARABONBA_PTR_FROM_JSON(UploadHost, uploadHost_);
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
      virtual bool empty() const override { return this->ossCredential_ == nullptr
        && this->ossDate_ == nullptr && this->ossSecurityToken_ == nullptr && this->ossSignature_ == nullptr && this->ossSignatureVersion_ == nullptr && this->policy_ == nullptr
        && this->uploadDir_ == nullptr && this->uploadHost_ == nullptr; };
      // ossCredential Field Functions 
      bool hasOssCredential() const { return this->ossCredential_ != nullptr;};
      void deleteOssCredential() { this->ossCredential_ = nullptr;};
      inline string getOssCredential() const { DARABONBA_PTR_GET_DEFAULT(ossCredential_, "") };
      inline Data& setOssCredential(string ossCredential) { DARABONBA_PTR_SET_VALUE(ossCredential_, ossCredential) };


      // ossDate Field Functions 
      bool hasOssDate() const { return this->ossDate_ != nullptr;};
      void deleteOssDate() { this->ossDate_ = nullptr;};
      inline string getOssDate() const { DARABONBA_PTR_GET_DEFAULT(ossDate_, "") };
      inline Data& setOssDate(string ossDate) { DARABONBA_PTR_SET_VALUE(ossDate_, ossDate) };


      // ossSecurityToken Field Functions 
      bool hasOssSecurityToken() const { return this->ossSecurityToken_ != nullptr;};
      void deleteOssSecurityToken() { this->ossSecurityToken_ = nullptr;};
      inline string getOssSecurityToken() const { DARABONBA_PTR_GET_DEFAULT(ossSecurityToken_, "") };
      inline Data& setOssSecurityToken(string ossSecurityToken) { DARABONBA_PTR_SET_VALUE(ossSecurityToken_, ossSecurityToken) };


      // ossSignature Field Functions 
      bool hasOssSignature() const { return this->ossSignature_ != nullptr;};
      void deleteOssSignature() { this->ossSignature_ = nullptr;};
      inline string getOssSignature() const { DARABONBA_PTR_GET_DEFAULT(ossSignature_, "") };
      inline Data& setOssSignature(string ossSignature) { DARABONBA_PTR_SET_VALUE(ossSignature_, ossSignature) };


      // ossSignatureVersion Field Functions 
      bool hasOssSignatureVersion() const { return this->ossSignatureVersion_ != nullptr;};
      void deleteOssSignatureVersion() { this->ossSignatureVersion_ = nullptr;};
      inline string getOssSignatureVersion() const { DARABONBA_PTR_GET_DEFAULT(ossSignatureVersion_, "") };
      inline Data& setOssSignatureVersion(string ossSignatureVersion) { DARABONBA_PTR_SET_VALUE(ossSignatureVersion_, ossSignatureVersion) };


      // policy Field Functions 
      bool hasPolicy() const { return this->policy_ != nullptr;};
      void deletePolicy() { this->policy_ = nullptr;};
      inline string getPolicy() const { DARABONBA_PTR_GET_DEFAULT(policy_, "") };
      inline Data& setPolicy(string policy) { DARABONBA_PTR_SET_VALUE(policy_, policy) };


      // uploadDir Field Functions 
      bool hasUploadDir() const { return this->uploadDir_ != nullptr;};
      void deleteUploadDir() { this->uploadDir_ = nullptr;};
      inline string getUploadDir() const { DARABONBA_PTR_GET_DEFAULT(uploadDir_, "") };
      inline Data& setUploadDir(string uploadDir) { DARABONBA_PTR_SET_VALUE(uploadDir_, uploadDir) };


      // uploadHost Field Functions 
      bool hasUploadHost() const { return this->uploadHost_ != nullptr;};
      void deleteUploadHost() { this->uploadHost_ = nullptr;};
      inline string getUploadHost() const { DARABONBA_PTR_GET_DEFAULT(uploadHost_, "") };
      inline Data& setUploadHost(string uploadHost) { DARABONBA_PTR_SET_VALUE(uploadHost_, uploadHost) };


    protected:
      shared_ptr<string> ossCredential_ {};
      shared_ptr<string> ossDate_ {};
      shared_ptr<string> ossSecurityToken_ {};
      shared_ptr<string> ossSignature_ {};
      shared_ptr<string> ossSignatureVersion_ {};
      shared_ptr<string> policy_ {};
      shared_ptr<string> uploadDir_ {};
      shared_ptr<string> uploadHost_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->errorCode_ == nullptr && this->errorMessage_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeFileUploadSignatureResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribeFileUploadSignatureResponseBody::Data) };
    inline DescribeFileUploadSignatureResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribeFileUploadSignatureResponseBody::Data) };
    inline DescribeFileUploadSignatureResponseBody& setData(const DescribeFileUploadSignatureResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeFileUploadSignatureResponseBody& setData(DescribeFileUploadSignatureResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline DescribeFileUploadSignatureResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline DescribeFileUploadSignatureResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeFileUploadSignatureResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeFileUploadSignatureResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<DescribeFileUploadSignatureResponseBody::Data> data_ {};
    shared_ptr<string> errorCode_ {};
    shared_ptr<string> errorMessage_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dms20250414
#endif
