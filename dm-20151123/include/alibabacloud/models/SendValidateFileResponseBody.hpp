// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SENDVALIDATEFILERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SENDVALIDATEFILERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dm20151123
{
namespace Models
{
  class SendValidateFileResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SendValidateFileResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(FileId, fileId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, SendValidateFileResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(FileId, fileId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    SendValidateFileResponseBody() = default ;
    SendValidateFileResponseBody(const SendValidateFileResponseBody &) = default ;
    SendValidateFileResponseBody(SendValidateFileResponseBody &&) = default ;
    SendValidateFileResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SendValidateFileResponseBody() = default ;
    SendValidateFileResponseBody& operator=(const SendValidateFileResponseBody &) = default ;
    SendValidateFileResponseBody& operator=(SendValidateFileResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fileId_ == nullptr
        && this->requestId_ == nullptr; };
    // fileId Field Functions 
    bool hasFileId() const { return this->fileId_ != nullptr;};
    void deleteFileId() { this->fileId_ = nullptr;};
    inline string getFileId() const { DARABONBA_PTR_GET_DEFAULT(fileId_, "") };
    inline SendValidateFileResponseBody& setFileId(string fileId) { DARABONBA_PTR_SET_VALUE(fileId_, fileId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SendValidateFileResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> fileId_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dm20151123
#endif
