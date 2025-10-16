// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_COPYCDSFILERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_COPYCDSFILERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CopyCdsFileResponseBodyCopyCdsFileModel.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class CopyCdsFileResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CopyCdsFileResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(CopyCdsFileModel, copyCdsFileModel_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, CopyCdsFileResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(CopyCdsFileModel, copyCdsFileModel_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    CopyCdsFileResponseBody() = default ;
    CopyCdsFileResponseBody(const CopyCdsFileResponseBody &) = default ;
    CopyCdsFileResponseBody(CopyCdsFileResponseBody &&) = default ;
    CopyCdsFileResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CopyCdsFileResponseBody() = default ;
    CopyCdsFileResponseBody& operator=(const CopyCdsFileResponseBody &) = default ;
    CopyCdsFileResponseBody& operator=(CopyCdsFileResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->copyCdsFileModel_ == nullptr && return this->message_ == nullptr && return this->requestId_ == nullptr && return this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline CopyCdsFileResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // copyCdsFileModel Field Functions 
    bool hasCopyCdsFileModel() const { return this->copyCdsFileModel_ != nullptr;};
    void deleteCopyCdsFileModel() { this->copyCdsFileModel_ = nullptr;};
    inline const CopyCdsFileResponseBodyCopyCdsFileModel & copyCdsFileModel() const { DARABONBA_PTR_GET_CONST(copyCdsFileModel_, CopyCdsFileResponseBodyCopyCdsFileModel) };
    inline CopyCdsFileResponseBodyCopyCdsFileModel copyCdsFileModel() { DARABONBA_PTR_GET(copyCdsFileModel_, CopyCdsFileResponseBodyCopyCdsFileModel) };
    inline CopyCdsFileResponseBody& setCopyCdsFileModel(const CopyCdsFileResponseBodyCopyCdsFileModel & copyCdsFileModel) { DARABONBA_PTR_SET_VALUE(copyCdsFileModel_, copyCdsFileModel) };
    inline CopyCdsFileResponseBody& setCopyCdsFileModel(CopyCdsFileResponseBodyCopyCdsFileModel && copyCdsFileModel) { DARABONBA_PTR_SET_RVALUE(copyCdsFileModel_, copyCdsFileModel) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CopyCdsFileResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CopyCdsFileResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string success() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline CopyCdsFileResponseBody& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The operation result. The value success indicates that the operation is successful. If the operation failed, an error message is returned.
    std::shared_ptr<string> code_ = nullptr;
    // The details about the file copying.
    std::shared_ptr<CopyCdsFileResponseBodyCopyCdsFileModel> copyCdsFileModel_ = nullptr;
    // The error message that is returned. This parameter is not returned if the value of Code is success.
    std::shared_ptr<string> message_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the request is successful.
    // 
    // Valid values:
    // 
    // *   true
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   false
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    std::shared_ptr<string> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
