// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETWORKITEMTIMETYPELISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETWORKITEMTIMETYPELISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetWorkitemTimeTypeListResponseBodyTimeType.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class GetWorkitemTimeTypeListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetWorkitemTimeTypeListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(errorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(errorMsg, errorMsg_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
      DARABONBA_PTR_TO_JSON(timeType, timeType_);
    };
    friend void from_json(const Darabonba::Json& j, GetWorkitemTimeTypeListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(errorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(errorMsg, errorMsg_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
      DARABONBA_PTR_FROM_JSON(timeType, timeType_);
    };
    GetWorkitemTimeTypeListResponseBody() = default ;
    GetWorkitemTimeTypeListResponseBody(const GetWorkitemTimeTypeListResponseBody &) = default ;
    GetWorkitemTimeTypeListResponseBody(GetWorkitemTimeTypeListResponseBody &&) = default ;
    GetWorkitemTimeTypeListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetWorkitemTimeTypeListResponseBody() = default ;
    GetWorkitemTimeTypeListResponseBody& operator=(const GetWorkitemTimeTypeListResponseBody &) = default ;
    GetWorkitemTimeTypeListResponseBody& operator=(GetWorkitemTimeTypeListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->errorCode_ == nullptr
        && return this->errorMsg_ == nullptr && return this->requestId_ == nullptr && return this->success_ == nullptr && return this->timeType_ == nullptr; };
    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline GetWorkitemTimeTypeListResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMsg Field Functions 
    bool hasErrorMsg() const { return this->errorMsg_ != nullptr;};
    void deleteErrorMsg() { this->errorMsg_ = nullptr;};
    inline string errorMsg() const { DARABONBA_PTR_GET_DEFAULT(errorMsg_, "") };
    inline GetWorkitemTimeTypeListResponseBody& setErrorMsg(string errorMsg) { DARABONBA_PTR_SET_VALUE(errorMsg_, errorMsg) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetWorkitemTimeTypeListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string success() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline GetWorkitemTimeTypeListResponseBody& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // timeType Field Functions 
    bool hasTimeType() const { return this->timeType_ != nullptr;};
    void deleteTimeType() { this->timeType_ = nullptr;};
    inline const vector<GetWorkitemTimeTypeListResponseBodyTimeType> & timeType() const { DARABONBA_PTR_GET_CONST(timeType_, vector<GetWorkitemTimeTypeListResponseBodyTimeType>) };
    inline vector<GetWorkitemTimeTypeListResponseBodyTimeType> timeType() { DARABONBA_PTR_GET(timeType_, vector<GetWorkitemTimeTypeListResponseBodyTimeType>) };
    inline GetWorkitemTimeTypeListResponseBody& setTimeType(const vector<GetWorkitemTimeTypeListResponseBodyTimeType> & timeType) { DARABONBA_PTR_SET_VALUE(timeType_, timeType) };
    inline GetWorkitemTimeTypeListResponseBody& setTimeType(vector<GetWorkitemTimeTypeListResponseBodyTimeType> && timeType) { DARABONBA_PTR_SET_RVALUE(timeType_, timeType) };


  protected:
    std::shared_ptr<string> errorCode_ = nullptr;
    std::shared_ptr<string> errorMsg_ = nullptr;
    // Id of the request
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> success_ = nullptr;
    std::shared_ptr<vector<GetWorkitemTimeTypeListResponseBodyTimeType>> timeType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
