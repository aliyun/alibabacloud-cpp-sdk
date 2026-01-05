// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CANCELMUTEGROUPUSERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CANCELMUTEGROUPUSERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class CancelMuteGroupUserResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CancelMuteGroupUserResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, CancelMuteGroupUserResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    CancelMuteGroupUserResponseBody() = default ;
    CancelMuteGroupUserResponseBody(const CancelMuteGroupUserResponseBody &) = default ;
    CancelMuteGroupUserResponseBody(CancelMuteGroupUserResponseBody &&) = default ;
    CancelMuteGroupUserResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CancelMuteGroupUserResponseBody() = default ;
    CancelMuteGroupUserResponseBody& operator=(const CancelMuteGroupUserResponseBody &) = default ;
    CancelMuteGroupUserResponseBody& operator=(CancelMuteGroupUserResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(Success, success_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(Success, success_);
      };
      Result() = default ;
      Result(const Result &) = default ;
      Result(Result &&) = default ;
      Result(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Result() = default ;
      Result& operator=(const Result &) = default ;
      Result& operator=(Result &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->success_ == nullptr; };
      // success Field Functions 
      bool hasSuccess() const { return this->success_ != nullptr;};
      void deleteSuccess() { this->success_ = nullptr;};
      inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
      inline Result& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    protected:
      // Indicates whether the members are unmuted. Valid values:
      // 
      // *   true: The members are unmuted.
      // *   false: The members failed to be unmuted.
      shared_ptr<bool> success_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->result_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CancelMuteGroupUserResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const CancelMuteGroupUserResponseBody::Result & getResult() const { DARABONBA_PTR_GET_CONST(result_, CancelMuteGroupUserResponseBody::Result) };
    inline CancelMuteGroupUserResponseBody::Result getResult() { DARABONBA_PTR_GET(result_, CancelMuteGroupUserResponseBody::Result) };
    inline CancelMuteGroupUserResponseBody& setResult(const CancelMuteGroupUserResponseBody::Result & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline CancelMuteGroupUserResponseBody& setResult(CancelMuteGroupUserResponseBody::Result && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The returned result.
    shared_ptr<CancelMuteGroupUserResponseBody::Result> result_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
