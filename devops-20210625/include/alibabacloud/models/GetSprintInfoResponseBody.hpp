// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSPRINTINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSPRINTINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetSprintInfoResponseBodySprint.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class GetSprintInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSprintInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(errorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(errorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(sprint, sprint_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetSprintInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(errorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(errorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(sprint, sprint_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    GetSprintInfoResponseBody() = default ;
    GetSprintInfoResponseBody(const GetSprintInfoResponseBody &) = default ;
    GetSprintInfoResponseBody(GetSprintInfoResponseBody &&) = default ;
    GetSprintInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSprintInfoResponseBody() = default ;
    GetSprintInfoResponseBody& operator=(const GetSprintInfoResponseBody &) = default ;
    GetSprintInfoResponseBody& operator=(GetSprintInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->errorCode_ == nullptr
        && return this->errorMessage_ == nullptr && return this->requestId_ == nullptr && return this->sprint_ == nullptr && return this->success_ == nullptr; };
    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline GetSprintInfoResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline GetSprintInfoResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetSprintInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sprint Field Functions 
    bool hasSprint() const { return this->sprint_ != nullptr;};
    void deleteSprint() { this->sprint_ = nullptr;};
    inline const GetSprintInfoResponseBodySprint & sprint() const { DARABONBA_PTR_GET_CONST(sprint_, GetSprintInfoResponseBodySprint) };
    inline GetSprintInfoResponseBodySprint sprint() { DARABONBA_PTR_GET(sprint_, GetSprintInfoResponseBodySprint) };
    inline GetSprintInfoResponseBody& setSprint(const GetSprintInfoResponseBodySprint & sprint) { DARABONBA_PTR_SET_VALUE(sprint_, sprint) };
    inline GetSprintInfoResponseBody& setSprint(GetSprintInfoResponseBodySprint && sprint) { DARABONBA_PTR_SET_RVALUE(sprint_, sprint) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetSprintInfoResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    std::shared_ptr<string> errorCode_ = nullptr;
    std::shared_ptr<string> errorMessage_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<GetSprintInfoResponseBodySprint> sprint_ = nullptr;
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
