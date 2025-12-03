// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCUSTOMFIELDOPTIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCUSTOMFIELDOPTIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetCustomFieldOptionResponseBodyFileds.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class GetCustomFieldOptionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCustomFieldOptionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(errorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(errorMsg, errorMsg_);
      DARABONBA_PTR_TO_JSON(fileds, fileds_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetCustomFieldOptionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(errorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(errorMsg, errorMsg_);
      DARABONBA_PTR_FROM_JSON(fileds, fileds_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    GetCustomFieldOptionResponseBody() = default ;
    GetCustomFieldOptionResponseBody(const GetCustomFieldOptionResponseBody &) = default ;
    GetCustomFieldOptionResponseBody(GetCustomFieldOptionResponseBody &&) = default ;
    GetCustomFieldOptionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCustomFieldOptionResponseBody() = default ;
    GetCustomFieldOptionResponseBody& operator=(const GetCustomFieldOptionResponseBody &) = default ;
    GetCustomFieldOptionResponseBody& operator=(GetCustomFieldOptionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->errorCode_ == nullptr
        && return this->errorMsg_ == nullptr && return this->fileds_ == nullptr && return this->requestId_ == nullptr && return this->success_ == nullptr; };
    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline GetCustomFieldOptionResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMsg Field Functions 
    bool hasErrorMsg() const { return this->errorMsg_ != nullptr;};
    void deleteErrorMsg() { this->errorMsg_ = nullptr;};
    inline string errorMsg() const { DARABONBA_PTR_GET_DEFAULT(errorMsg_, "") };
    inline GetCustomFieldOptionResponseBody& setErrorMsg(string errorMsg) { DARABONBA_PTR_SET_VALUE(errorMsg_, errorMsg) };


    // fileds Field Functions 
    bool hasFileds() const { return this->fileds_ != nullptr;};
    void deleteFileds() { this->fileds_ = nullptr;};
    inline const vector<GetCustomFieldOptionResponseBodyFileds> & fileds() const { DARABONBA_PTR_GET_CONST(fileds_, vector<GetCustomFieldOptionResponseBodyFileds>) };
    inline vector<GetCustomFieldOptionResponseBodyFileds> fileds() { DARABONBA_PTR_GET(fileds_, vector<GetCustomFieldOptionResponseBodyFileds>) };
    inline GetCustomFieldOptionResponseBody& setFileds(const vector<GetCustomFieldOptionResponseBodyFileds> & fileds) { DARABONBA_PTR_SET_VALUE(fileds_, fileds) };
    inline GetCustomFieldOptionResponseBody& setFileds(vector<GetCustomFieldOptionResponseBodyFileds> && fileds) { DARABONBA_PTR_SET_RVALUE(fileds_, fileds) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetCustomFieldOptionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetCustomFieldOptionResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    std::shared_ptr<string> errorCode_ = nullptr;
    std::shared_ptr<string> errorMsg_ = nullptr;
    std::shared_ptr<vector<GetCustomFieldOptionResponseBodyFileds>> fileds_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
