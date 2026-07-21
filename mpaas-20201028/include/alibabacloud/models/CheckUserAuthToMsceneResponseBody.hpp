// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKUSERAUTHTOMSCENERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CHECKUSERAUTHTOMSCENERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20201028
{
namespace Models
{
  class CheckUserAuthToMsceneResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckUserAuthToMsceneResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(MpaasUserAuthCheckResponse, mpaasUserAuthCheckResponse_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResultCode, resultCode_);
      DARABONBA_PTR_TO_JSON(ResultMsg, resultMsg_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, CheckUserAuthToMsceneResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(MpaasUserAuthCheckResponse, mpaasUserAuthCheckResponse_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResultCode, resultCode_);
      DARABONBA_PTR_FROM_JSON(ResultMsg, resultMsg_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    CheckUserAuthToMsceneResponseBody() = default ;
    CheckUserAuthToMsceneResponseBody(const CheckUserAuthToMsceneResponseBody &) = default ;
    CheckUserAuthToMsceneResponseBody(CheckUserAuthToMsceneResponseBody &&) = default ;
    CheckUserAuthToMsceneResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckUserAuthToMsceneResponseBody() = default ;
    CheckUserAuthToMsceneResponseBody& operator=(const CheckUserAuthToMsceneResponseBody &) = default ;
    CheckUserAuthToMsceneResponseBody& operator=(CheckUserAuthToMsceneResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class MpaasUserAuthCheckResponse : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const MpaasUserAuthCheckResponse& obj) { 
        DARABONBA_PTR_TO_JSON(Matched, matched_);
      };
      friend void from_json(const Darabonba::Json& j, MpaasUserAuthCheckResponse& obj) { 
        DARABONBA_PTR_FROM_JSON(Matched, matched_);
      };
      MpaasUserAuthCheckResponse() = default ;
      MpaasUserAuthCheckResponse(const MpaasUserAuthCheckResponse &) = default ;
      MpaasUserAuthCheckResponse(MpaasUserAuthCheckResponse &&) = default ;
      MpaasUserAuthCheckResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~MpaasUserAuthCheckResponse() = default ;
      MpaasUserAuthCheckResponse& operator=(const MpaasUserAuthCheckResponse &) = default ;
      MpaasUserAuthCheckResponse& operator=(MpaasUserAuthCheckResponse &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->matched_ == nullptr; };
      // matched Field Functions 
      bool hasMatched() const { return this->matched_ != nullptr;};
      void deleteMatched() { this->matched_ = nullptr;};
      inline bool getMatched() const { DARABONBA_PTR_GET_DEFAULT(matched_, false) };
      inline MpaasUserAuthCheckResponse& setMatched(bool matched) { DARABONBA_PTR_SET_VALUE(matched_, matched) };


    protected:
      shared_ptr<bool> matched_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->mpaasUserAuthCheckResponse_ == nullptr && this->requestId_ == nullptr && this->resultCode_ == nullptr && this->resultMsg_ == nullptr && this->success_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline CheckUserAuthToMsceneResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // mpaasUserAuthCheckResponse Field Functions 
    bool hasMpaasUserAuthCheckResponse() const { return this->mpaasUserAuthCheckResponse_ != nullptr;};
    void deleteMpaasUserAuthCheckResponse() { this->mpaasUserAuthCheckResponse_ = nullptr;};
    inline const CheckUserAuthToMsceneResponseBody::MpaasUserAuthCheckResponse & getMpaasUserAuthCheckResponse() const { DARABONBA_PTR_GET_CONST(mpaasUserAuthCheckResponse_, CheckUserAuthToMsceneResponseBody::MpaasUserAuthCheckResponse) };
    inline CheckUserAuthToMsceneResponseBody::MpaasUserAuthCheckResponse getMpaasUserAuthCheckResponse() { DARABONBA_PTR_GET(mpaasUserAuthCheckResponse_, CheckUserAuthToMsceneResponseBody::MpaasUserAuthCheckResponse) };
    inline CheckUserAuthToMsceneResponseBody& setMpaasUserAuthCheckResponse(const CheckUserAuthToMsceneResponseBody::MpaasUserAuthCheckResponse & mpaasUserAuthCheckResponse) { DARABONBA_PTR_SET_VALUE(mpaasUserAuthCheckResponse_, mpaasUserAuthCheckResponse) };
    inline CheckUserAuthToMsceneResponseBody& setMpaasUserAuthCheckResponse(CheckUserAuthToMsceneResponseBody::MpaasUserAuthCheckResponse && mpaasUserAuthCheckResponse) { DARABONBA_PTR_SET_RVALUE(mpaasUserAuthCheckResponse_, mpaasUserAuthCheckResponse) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CheckUserAuthToMsceneResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultCode Field Functions 
    bool hasResultCode() const { return this->resultCode_ != nullptr;};
    void deleteResultCode() { this->resultCode_ = nullptr;};
    inline string getResultCode() const { DARABONBA_PTR_GET_DEFAULT(resultCode_, "") };
    inline CheckUserAuthToMsceneResponseBody& setResultCode(string resultCode) { DARABONBA_PTR_SET_VALUE(resultCode_, resultCode) };


    // resultMsg Field Functions 
    bool hasResultMsg() const { return this->resultMsg_ != nullptr;};
    void deleteResultMsg() { this->resultMsg_ = nullptr;};
    inline string getResultMsg() const { DARABONBA_PTR_GET_DEFAULT(resultMsg_, "") };
    inline CheckUserAuthToMsceneResponseBody& setResultMsg(string resultMsg) { DARABONBA_PTR_SET_VALUE(resultMsg_, resultMsg) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline CheckUserAuthToMsceneResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> accessDeniedDetail_ {};
    shared_ptr<CheckUserAuthToMsceneResponseBody::MpaasUserAuthCheckResponse> mpaasUserAuthCheckResponse_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> resultCode_ {};
    shared_ptr<string> resultMsg_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif
