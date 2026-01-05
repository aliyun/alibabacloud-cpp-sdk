// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MUTEALLGROUPUSERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MUTEALLGROUPUSERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class MuteAllGroupUserResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MuteAllGroupUserResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, MuteAllGroupUserResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    MuteAllGroupUserResponseBody() = default ;
    MuteAllGroupUserResponseBody(const MuteAllGroupUserResponseBody &) = default ;
    MuteAllGroupUserResponseBody(MuteAllGroupUserResponseBody &&) = default ;
    MuteAllGroupUserResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MuteAllGroupUserResponseBody() = default ;
    MuteAllGroupUserResponseBody& operator=(const MuteAllGroupUserResponseBody &) = default ;
    MuteAllGroupUserResponseBody& operator=(MuteAllGroupUserResponseBody &&) = default ;
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
      // Indicates whether the mute was successful. Valid values:
      // 
      // *   true: The mute was successful.
      // *   false: The mute failed.
      shared_ptr<bool> success_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->result_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline MuteAllGroupUserResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const MuteAllGroupUserResponseBody::Result & getResult() const { DARABONBA_PTR_GET_CONST(result_, MuteAllGroupUserResponseBody::Result) };
    inline MuteAllGroupUserResponseBody::Result getResult() { DARABONBA_PTR_GET(result_, MuteAllGroupUserResponseBody::Result) };
    inline MuteAllGroupUserResponseBody& setResult(const MuteAllGroupUserResponseBody::Result & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline MuteAllGroupUserResponseBody& setResult(MuteAllGroupUserResponseBody::Result && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The returned result.
    shared_ptr<MuteAllGroupUserResponseBody::Result> result_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
