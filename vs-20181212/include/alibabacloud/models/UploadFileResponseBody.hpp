// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPLOADFILERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPLOADFILERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class UploadFileResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UploadFileResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(FileId, fileId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, UploadFileResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(FileId, fileId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
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
    virtual bool empty() const override { this->fileId_ != nullptr
        && this->requestId_ != nullptr; };
    // fileId Field Functions 
    bool hasFileId() const { return this->fileId_ != nullptr;};
    void deleteFileId() { this->fileId_ = nullptr;};
    inline string fileId() const { DARABONBA_PTR_GET_DEFAULT(fileId_, "") };
    inline UploadFileResponseBody& setFileId(string fileId) { DARABONBA_PTR_SET_VALUE(fileId_, fileId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UploadFileResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<string> fileId_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
