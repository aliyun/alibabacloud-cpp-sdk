// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SENDLIKERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SENDLIKERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class SendLikeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SendLikeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, SendLikeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    SendLikeResponseBody() = default ;
    SendLikeResponseBody(const SendLikeResponseBody &) = default ;
    SendLikeResponseBody(SendLikeResponseBody &&) = default ;
    SendLikeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SendLikeResponseBody() = default ;
    SendLikeResponseBody& operator=(const SendLikeResponseBody &) = default ;
    SendLikeResponseBody& operator=(SendLikeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(LikeCount, likeCount_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(LikeCount, likeCount_);
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
      virtual bool empty() const override { return this->likeCount_ == nullptr; };
      // likeCount Field Functions 
      bool hasLikeCount() const { return this->likeCount_ != nullptr;};
      void deleteLikeCount() { this->likeCount_ = nullptr;};
      inline int32_t getLikeCount() const { DARABONBA_PTR_GET_DEFAULT(likeCount_, 0) };
      inline Result& setLikeCount(int32_t likeCount) { DARABONBA_PTR_SET_VALUE(likeCount_, likeCount) };


    protected:
      // The number of likes.
      shared_ptr<int32_t> likeCount_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->result_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SendLikeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const SendLikeResponseBody::Result & getResult() const { DARABONBA_PTR_GET_CONST(result_, SendLikeResponseBody::Result) };
    inline SendLikeResponseBody::Result getResult() { DARABONBA_PTR_GET(result_, SendLikeResponseBody::Result) };
    inline SendLikeResponseBody& setResult(const SendLikeResponseBody::Result & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline SendLikeResponseBody& setResult(SendLikeResponseBody::Result && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The returned result.
    shared_ptr<SendLikeResponseBody::Result> result_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
