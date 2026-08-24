// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETKNOWLEDGEBASEPRESIGNEDURLRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETKNOWLEDGEBASEPRESIGNEDURLRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MilvusKnowledgeBase20260604
{
namespace Models
{
  class GetKnowledgeBasePreSignedUrlResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetKnowledgeBasePreSignedUrlResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(accessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetKnowledgeBasePreSignedUrlResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(accessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    GetKnowledgeBasePreSignedUrlResponseBody() = default ;
    GetKnowledgeBasePreSignedUrlResponseBody(const GetKnowledgeBasePreSignedUrlResponseBody &) = default ;
    GetKnowledgeBasePreSignedUrlResponseBody(GetKnowledgeBasePreSignedUrlResponseBody &&) = default ;
    GetKnowledgeBasePreSignedUrlResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetKnowledgeBasePreSignedUrlResponseBody() = default ;
    GetKnowledgeBasePreSignedUrlResponseBody& operator=(const GetKnowledgeBasePreSignedUrlResponseBody &) = default ;
    GetKnowledgeBasePreSignedUrlResponseBody& operator=(GetKnowledgeBasePreSignedUrlResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(bucketName, bucketName_);
        DARABONBA_PTR_TO_JSON(expiresIn, expiresIn_);
        DARABONBA_PTR_TO_JSON(preSignedUrls, preSignedUrls_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(bucketName, bucketName_);
        DARABONBA_PTR_FROM_JSON(expiresIn, expiresIn_);
        DARABONBA_PTR_FROM_JSON(preSignedUrls, preSignedUrls_);
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
      virtual bool empty() const override { return this->bucketName_ == nullptr
        && this->expiresIn_ == nullptr && this->preSignedUrls_ == nullptr; };
      // bucketName Field Functions 
      bool hasBucketName() const { return this->bucketName_ != nullptr;};
      void deleteBucketName() { this->bucketName_ = nullptr;};
      inline string getBucketName() const { DARABONBA_PTR_GET_DEFAULT(bucketName_, "") };
      inline Data& setBucketName(string bucketName) { DARABONBA_PTR_SET_VALUE(bucketName_, bucketName) };


      // expiresIn Field Functions 
      bool hasExpiresIn() const { return this->expiresIn_ != nullptr;};
      void deleteExpiresIn() { this->expiresIn_ = nullptr;};
      inline int32_t getExpiresIn() const { DARABONBA_PTR_GET_DEFAULT(expiresIn_, 0) };
      inline Data& setExpiresIn(int32_t expiresIn) { DARABONBA_PTR_SET_VALUE(expiresIn_, expiresIn) };


      // preSignedUrls Field Functions 
      bool hasPreSignedUrls() const { return this->preSignedUrls_ != nullptr;};
      void deletePreSignedUrls() { this->preSignedUrls_ = nullptr;};
      inline const vector<string> & getPreSignedUrls() const { DARABONBA_PTR_GET_CONST(preSignedUrls_, vector<string>) };
      inline vector<string> getPreSignedUrls() { DARABONBA_PTR_GET(preSignedUrls_, vector<string>) };
      inline Data& setPreSignedUrls(const vector<string> & preSignedUrls) { DARABONBA_PTR_SET_VALUE(preSignedUrls_, preSignedUrls) };
      inline Data& setPreSignedUrls(vector<string> && preSignedUrls) { DARABONBA_PTR_SET_RVALUE(preSignedUrls_, preSignedUrls) };


    protected:
      // The bucket name.
      shared_ptr<string> bucketName_ {};
      // The validity period of the pre-signed URL in seconds.
      shared_ptr<int32_t> expiresIn_ {};
      // The list of pre-signed PUT URLs. **The order corresponds one-to-one with the `Documents` in the request.**
      shared_ptr<vector<string>> preSignedUrls_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->code_ == nullptr && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->success_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline GetKnowledgeBasePreSignedUrlResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline GetKnowledgeBasePreSignedUrlResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetKnowledgeBasePreSignedUrlResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetKnowledgeBasePreSignedUrlResponseBody::Data) };
    inline GetKnowledgeBasePreSignedUrlResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetKnowledgeBasePreSignedUrlResponseBody::Data) };
    inline GetKnowledgeBasePreSignedUrlResponseBody& setData(const GetKnowledgeBasePreSignedUrlResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetKnowledgeBasePreSignedUrlResponseBody& setData(GetKnowledgeBasePreSignedUrlResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetKnowledgeBasePreSignedUrlResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetKnowledgeBasePreSignedUrlResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The details of the permission verification failure.
    shared_ptr<string> accessDeniedDetail_ {};
    // The business status code.
    shared_ptr<int32_t> code_ {};
    // The response data.
    shared_ptr<GetKnowledgeBasePreSignedUrlResponseBody::Data> data_ {};
    // The HTTP status code.
    shared_ptr<int32_t> httpStatusCode_ {};
    // Indicates whether the request was successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MilvusKnowledgeBase20260604
#endif
