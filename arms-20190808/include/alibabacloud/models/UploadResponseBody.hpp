// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPLOADRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPLOADRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UploadResponseBodyUploadResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class UploadResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UploadResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(UploadResult, uploadResult_);
    };
    friend void from_json(const Darabonba::Json& j, UploadResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(UploadResult, uploadResult_);
    };
    UploadResponseBody() = default ;
    UploadResponseBody(const UploadResponseBody &) = default ;
    UploadResponseBody(UploadResponseBody &&) = default ;
    UploadResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UploadResponseBody() = default ;
    UploadResponseBody& operator=(const UploadResponseBody &) = default ;
    UploadResponseBody& operator=(UploadResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->uploadResult_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UploadResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // uploadResult Field Functions 
    bool hasUploadResult() const { return this->uploadResult_ != nullptr;};
    void deleteUploadResult() { this->uploadResult_ = nullptr;};
    inline const UploadResponseBodyUploadResult & uploadResult() const { DARABONBA_PTR_GET_CONST(uploadResult_, UploadResponseBodyUploadResult) };
    inline UploadResponseBodyUploadResult uploadResult() { DARABONBA_PTR_GET(uploadResult_, UploadResponseBodyUploadResult) };
    inline UploadResponseBody& setUploadResult(const UploadResponseBodyUploadResult & uploadResult) { DARABONBA_PTR_SET_VALUE(uploadResult_, uploadResult) };
    inline UploadResponseBody& setUploadResult(UploadResponseBodyUploadResult && uploadResult) { DARABONBA_PTR_SET_RVALUE(uploadResult_, uploadResult) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The returned data.
    std::shared_ptr<UploadResponseBodyUploadResult> uploadResult_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
