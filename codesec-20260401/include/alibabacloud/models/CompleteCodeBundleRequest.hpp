// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_COMPLETECODEBUNDLEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_COMPLETECODEBUNDLEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CodeSec20260401
{
namespace Models
{
  class CompleteCodeBundleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CompleteCodeBundleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(byteSize, byteSize_);
      DARABONBA_PTR_TO_JSON(contentType, contentType_);
    };
    friend void from_json(const Darabonba::Json& j, CompleteCodeBundleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(byteSize, byteSize_);
      DARABONBA_PTR_FROM_JSON(contentType, contentType_);
    };
    CompleteCodeBundleRequest() = default ;
    CompleteCodeBundleRequest(const CompleteCodeBundleRequest &) = default ;
    CompleteCodeBundleRequest(CompleteCodeBundleRequest &&) = default ;
    CompleteCodeBundleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CompleteCodeBundleRequest() = default ;
    CompleteCodeBundleRequest& operator=(const CompleteCodeBundleRequest &) = default ;
    CompleteCodeBundleRequest& operator=(CompleteCodeBundleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->byteSize_ == nullptr
        && this->contentType_ == nullptr; };
    // byteSize Field Functions 
    bool hasByteSize() const { return this->byteSize_ != nullptr;};
    void deleteByteSize() { this->byteSize_ = nullptr;};
    inline int64_t getByteSize() const { DARABONBA_PTR_GET_DEFAULT(byteSize_, 0L) };
    inline CompleteCodeBundleRequest& setByteSize(int64_t byteSize) { DARABONBA_PTR_SET_VALUE(byteSize_, byteSize) };


    // contentType Field Functions 
    bool hasContentType() const { return this->contentType_ != nullptr;};
    void deleteContentType() { this->contentType_ = nullptr;};
    inline string getContentType() const { DARABONBA_PTR_GET_DEFAULT(contentType_, "") };
    inline CompleteCodeBundleRequest& setContentType(string contentType) { DARABONBA_PTR_SET_VALUE(contentType_, contentType) };


  protected:
    // The declared size of the uploaded object. This value must match the OSS Content-Length.
    // 
    // This parameter is required.
    shared_ptr<int64_t> byteSize_ {};
    // The MIME type of the stored code bundle. This is typically application/octet-stream for pre-signed PUT operations.
    // 
    // This parameter is required.
    shared_ptr<string> contentType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CodeSec20260401
#endif
