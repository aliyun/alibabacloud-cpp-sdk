// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYUSERINFOTOMSENCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYUSERINFOTOMSENCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20201028
{
namespace Models
{
  class QueryUserInfoToMsenceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryUserInfoToMsenceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MpaasUserInfoShareResponse, mpaasUserInfoShareResponse_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResultCode, resultCode_);
      DARABONBA_PTR_TO_JSON(ResultMsg, resultMsg_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, QueryUserInfoToMsenceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MpaasUserInfoShareResponse, mpaasUserInfoShareResponse_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResultCode, resultCode_);
      DARABONBA_PTR_FROM_JSON(ResultMsg, resultMsg_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    QueryUserInfoToMsenceResponseBody() = default ;
    QueryUserInfoToMsenceResponseBody(const QueryUserInfoToMsenceResponseBody &) = default ;
    QueryUserInfoToMsenceResponseBody(QueryUserInfoToMsenceResponseBody &&) = default ;
    QueryUserInfoToMsenceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryUserInfoToMsenceResponseBody() = default ;
    QueryUserInfoToMsenceResponseBody& operator=(const QueryUserInfoToMsenceResponseBody &) = default ;
    QueryUserInfoToMsenceResponseBody& operator=(QueryUserInfoToMsenceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class MpaasUserInfoShareResponse : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const MpaasUserInfoShareResponse& obj) { 
        DARABONBA_PTR_TO_JSON(Avatar, avatar_);
        DARABONBA_PTR_TO_JSON(Gender, gender_);
        DARABONBA_PTR_TO_JSON(NickName, nickName_);
      };
      friend void from_json(const Darabonba::Json& j, MpaasUserInfoShareResponse& obj) { 
        DARABONBA_PTR_FROM_JSON(Avatar, avatar_);
        DARABONBA_PTR_FROM_JSON(Gender, gender_);
        DARABONBA_PTR_FROM_JSON(NickName, nickName_);
      };
      MpaasUserInfoShareResponse() = default ;
      MpaasUserInfoShareResponse(const MpaasUserInfoShareResponse &) = default ;
      MpaasUserInfoShareResponse(MpaasUserInfoShareResponse &&) = default ;
      MpaasUserInfoShareResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~MpaasUserInfoShareResponse() = default ;
      MpaasUserInfoShareResponse& operator=(const MpaasUserInfoShareResponse &) = default ;
      MpaasUserInfoShareResponse& operator=(MpaasUserInfoShareResponse &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->avatar_ == nullptr
        && this->gender_ == nullptr && this->nickName_ == nullptr; };
      // avatar Field Functions 
      bool hasAvatar() const { return this->avatar_ != nullptr;};
      void deleteAvatar() { this->avatar_ = nullptr;};
      inline string getAvatar() const { DARABONBA_PTR_GET_DEFAULT(avatar_, "") };
      inline MpaasUserInfoShareResponse& setAvatar(string avatar) { DARABONBA_PTR_SET_VALUE(avatar_, avatar) };


      // gender Field Functions 
      bool hasGender() const { return this->gender_ != nullptr;};
      void deleteGender() { this->gender_ = nullptr;};
      inline string getGender() const { DARABONBA_PTR_GET_DEFAULT(gender_, "") };
      inline MpaasUserInfoShareResponse& setGender(string gender) { DARABONBA_PTR_SET_VALUE(gender_, gender) };


      // nickName Field Functions 
      bool hasNickName() const { return this->nickName_ != nullptr;};
      void deleteNickName() { this->nickName_ = nullptr;};
      inline string getNickName() const { DARABONBA_PTR_GET_DEFAULT(nickName_, "") };
      inline MpaasUserInfoShareResponse& setNickName(string nickName) { DARABONBA_PTR_SET_VALUE(nickName_, nickName) };


    protected:
      shared_ptr<string> avatar_ {};
      shared_ptr<string> gender_ {};
      shared_ptr<string> nickName_ {};
    };

    virtual bool empty() const override { return this->mpaasUserInfoShareResponse_ == nullptr
        && this->requestId_ == nullptr && this->resultCode_ == nullptr && this->resultMsg_ == nullptr && this->success_ == nullptr; };
    // mpaasUserInfoShareResponse Field Functions 
    bool hasMpaasUserInfoShareResponse() const { return this->mpaasUserInfoShareResponse_ != nullptr;};
    void deleteMpaasUserInfoShareResponse() { this->mpaasUserInfoShareResponse_ = nullptr;};
    inline const QueryUserInfoToMsenceResponseBody::MpaasUserInfoShareResponse & getMpaasUserInfoShareResponse() const { DARABONBA_PTR_GET_CONST(mpaasUserInfoShareResponse_, QueryUserInfoToMsenceResponseBody::MpaasUserInfoShareResponse) };
    inline QueryUserInfoToMsenceResponseBody::MpaasUserInfoShareResponse getMpaasUserInfoShareResponse() { DARABONBA_PTR_GET(mpaasUserInfoShareResponse_, QueryUserInfoToMsenceResponseBody::MpaasUserInfoShareResponse) };
    inline QueryUserInfoToMsenceResponseBody& setMpaasUserInfoShareResponse(const QueryUserInfoToMsenceResponseBody::MpaasUserInfoShareResponse & mpaasUserInfoShareResponse) { DARABONBA_PTR_SET_VALUE(mpaasUserInfoShareResponse_, mpaasUserInfoShareResponse) };
    inline QueryUserInfoToMsenceResponseBody& setMpaasUserInfoShareResponse(QueryUserInfoToMsenceResponseBody::MpaasUserInfoShareResponse && mpaasUserInfoShareResponse) { DARABONBA_PTR_SET_RVALUE(mpaasUserInfoShareResponse_, mpaasUserInfoShareResponse) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryUserInfoToMsenceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultCode Field Functions 
    bool hasResultCode() const { return this->resultCode_ != nullptr;};
    void deleteResultCode() { this->resultCode_ = nullptr;};
    inline string getResultCode() const { DARABONBA_PTR_GET_DEFAULT(resultCode_, "") };
    inline QueryUserInfoToMsenceResponseBody& setResultCode(string resultCode) { DARABONBA_PTR_SET_VALUE(resultCode_, resultCode) };


    // resultMsg Field Functions 
    bool hasResultMsg() const { return this->resultMsg_ != nullptr;};
    void deleteResultMsg() { this->resultMsg_ = nullptr;};
    inline string getResultMsg() const { DARABONBA_PTR_GET_DEFAULT(resultMsg_, "") };
    inline QueryUserInfoToMsenceResponseBody& setResultMsg(string resultMsg) { DARABONBA_PTR_SET_VALUE(resultMsg_, resultMsg) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QueryUserInfoToMsenceResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<QueryUserInfoToMsenceResponseBody::MpaasUserInfoShareResponse> mpaasUserInfoShareResponse_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> resultCode_ {};
    shared_ptr<string> resultMsg_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif
