// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETFILETOKENFORUPLOADTOMSARESPONSEBODYRESULTCONTENT_HPP_
#define ALIBABACLOUD_MODELS_GETFILETOKENFORUPLOADTOMSARESPONSEBODYRESULTCONTENT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetFileTokenForUploadToMsaResponseBodyResultContentContent.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20201028
{
namespace Models
{
  class GetFileTokenForUploadToMsaResponseBodyResultContent : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetFileTokenForUploadToMsaResponseBodyResultContent& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResultMsg, resultMsg_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetFileTokenForUploadToMsaResponseBodyResultContent& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResultMsg, resultMsg_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetFileTokenForUploadToMsaResponseBodyResultContent() = default ;
    GetFileTokenForUploadToMsaResponseBodyResultContent(const GetFileTokenForUploadToMsaResponseBodyResultContent &) = default ;
    GetFileTokenForUploadToMsaResponseBodyResultContent(GetFileTokenForUploadToMsaResponseBodyResultContent &&) = default ;
    GetFileTokenForUploadToMsaResponseBodyResultContent(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetFileTokenForUploadToMsaResponseBodyResultContent() = default ;
    GetFileTokenForUploadToMsaResponseBodyResultContent& operator=(const GetFileTokenForUploadToMsaResponseBodyResultContent &) = default ;
    GetFileTokenForUploadToMsaResponseBodyResultContent& operator=(GetFileTokenForUploadToMsaResponseBodyResultContent &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->content_ != nullptr
        && this->errorCode_ != nullptr && this->requestId_ != nullptr && this->resultMsg_ != nullptr && this->success_ != nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline const Models::GetFileTokenForUploadToMsaResponseBodyResultContentContent & content() const { DARABONBA_PTR_GET_CONST(content_, Models::GetFileTokenForUploadToMsaResponseBodyResultContentContent) };
    inline Models::GetFileTokenForUploadToMsaResponseBodyResultContentContent content() { DARABONBA_PTR_GET(content_, Models::GetFileTokenForUploadToMsaResponseBodyResultContentContent) };
    inline GetFileTokenForUploadToMsaResponseBodyResultContent& setContent(const Models::GetFileTokenForUploadToMsaResponseBodyResultContentContent & content) { DARABONBA_PTR_SET_VALUE(content_, content) };
    inline GetFileTokenForUploadToMsaResponseBodyResultContent& setContent(Models::GetFileTokenForUploadToMsaResponseBodyResultContentContent && content) { DARABONBA_PTR_SET_RVALUE(content_, content) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline GetFileTokenForUploadToMsaResponseBodyResultContent& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetFileTokenForUploadToMsaResponseBodyResultContent& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultMsg Field Functions 
    bool hasResultMsg() const { return this->resultMsg_ != nullptr;};
    void deleteResultMsg() { this->resultMsg_ = nullptr;};
    inline string resultMsg() const { DARABONBA_PTR_GET_DEFAULT(resultMsg_, "") };
    inline GetFileTokenForUploadToMsaResponseBodyResultContent& setResultMsg(string resultMsg) { DARABONBA_PTR_SET_VALUE(resultMsg_, resultMsg) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string success() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline GetFileTokenForUploadToMsaResponseBodyResultContent& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    std::shared_ptr<Models::GetFileTokenForUploadToMsaResponseBodyResultContentContent> content_ = nullptr;
    std::shared_ptr<string> errorCode_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> resultMsg_ = nullptr;
    std::shared_ptr<string> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif
