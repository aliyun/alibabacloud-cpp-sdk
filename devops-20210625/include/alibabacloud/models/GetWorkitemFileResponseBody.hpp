// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETWORKITEMFILERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETWORKITEMFILERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetWorkitemFileResponseBodyWorkitemFile.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class GetWorkitemFileResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetWorkitemFileResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(errorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(errorMsg, errorMsg_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
      DARABONBA_PTR_TO_JSON(workitemFile, workitemFile_);
    };
    friend void from_json(const Darabonba::Json& j, GetWorkitemFileResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(errorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(errorMsg, errorMsg_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
      DARABONBA_PTR_FROM_JSON(workitemFile, workitemFile_);
    };
    GetWorkitemFileResponseBody() = default ;
    GetWorkitemFileResponseBody(const GetWorkitemFileResponseBody &) = default ;
    GetWorkitemFileResponseBody(GetWorkitemFileResponseBody &&) = default ;
    GetWorkitemFileResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetWorkitemFileResponseBody() = default ;
    GetWorkitemFileResponseBody& operator=(const GetWorkitemFileResponseBody &) = default ;
    GetWorkitemFileResponseBody& operator=(GetWorkitemFileResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->errorCode_ == nullptr
        && return this->errorMsg_ == nullptr && return this->requestId_ == nullptr && return this->success_ == nullptr && return this->workitemFile_ == nullptr; };
    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline GetWorkitemFileResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMsg Field Functions 
    bool hasErrorMsg() const { return this->errorMsg_ != nullptr;};
    void deleteErrorMsg() { this->errorMsg_ = nullptr;};
    inline string errorMsg() const { DARABONBA_PTR_GET_DEFAULT(errorMsg_, "") };
    inline GetWorkitemFileResponseBody& setErrorMsg(string errorMsg) { DARABONBA_PTR_SET_VALUE(errorMsg_, errorMsg) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetWorkitemFileResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string success() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline GetWorkitemFileResponseBody& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // workitemFile Field Functions 
    bool hasWorkitemFile() const { return this->workitemFile_ != nullptr;};
    void deleteWorkitemFile() { this->workitemFile_ = nullptr;};
    inline const GetWorkitemFileResponseBodyWorkitemFile & workitemFile() const { DARABONBA_PTR_GET_CONST(workitemFile_, GetWorkitemFileResponseBodyWorkitemFile) };
    inline GetWorkitemFileResponseBodyWorkitemFile workitemFile() { DARABONBA_PTR_GET(workitemFile_, GetWorkitemFileResponseBodyWorkitemFile) };
    inline GetWorkitemFileResponseBody& setWorkitemFile(const GetWorkitemFileResponseBodyWorkitemFile & workitemFile) { DARABONBA_PTR_SET_VALUE(workitemFile_, workitemFile) };
    inline GetWorkitemFileResponseBody& setWorkitemFile(GetWorkitemFileResponseBodyWorkitemFile && workitemFile) { DARABONBA_PTR_SET_RVALUE(workitemFile_, workitemFile) };


  protected:
    std::shared_ptr<string> errorCode_ = nullptr;
    std::shared_ptr<string> errorMsg_ = nullptr;
    // Id of the request
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> success_ = nullptr;
    std::shared_ptr<GetWorkitemFileResponseBodyWorkitemFile> workitemFile_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
