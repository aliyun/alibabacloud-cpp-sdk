// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPLOADFILERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPLOADFILERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class UploadFileResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UploadFileResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(UploadId, uploadId_);
    };
    friend void from_json(const Darabonba::Json& j, UploadFileResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(UploadId, uploadId_);
    };
    UploadFileResponseBody() = default ;
    UploadFileResponseBody(const UploadFileResponseBody &) = default ;
    UploadFileResponseBody(UploadFileResponseBody &&) = default ;
    UploadFileResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UploadFileResponseBody() = default ;
    UploadFileResponseBody& operator=(const UploadFileResponseBody &) = default ;
    UploadFileResponseBody& operator=(UploadFileResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->uploadId_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UploadFileResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // uploadId Field Functions 
    bool hasUploadId() const { return this->uploadId_ != nullptr;};
    void deleteUploadId() { this->uploadId_ = nullptr;};
    inline int64_t getUploadId() const { DARABONBA_PTR_GET_DEFAULT(uploadId_, 0L) };
    inline UploadFileResponseBody& setUploadId(int64_t uploadId) { DARABONBA_PTR_SET_VALUE(uploadId_, uploadId) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The ID of the file upload task. You can use this ID for task submission or query subsequently.
    shared_ptr<int64_t> uploadId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
