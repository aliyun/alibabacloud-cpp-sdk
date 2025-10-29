// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CANCELMUTEALLGROUPUSERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CANCELMUTEALLGROUPUSERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CancelMuteAllGroupUserResponseBodyResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class CancelMuteAllGroupUserResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CancelMuteAllGroupUserResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, CancelMuteAllGroupUserResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    CancelMuteAllGroupUserResponseBody() = default ;
    CancelMuteAllGroupUserResponseBody(const CancelMuteAllGroupUserResponseBody &) = default ;
    CancelMuteAllGroupUserResponseBody(CancelMuteAllGroupUserResponseBody &&) = default ;
    CancelMuteAllGroupUserResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CancelMuteAllGroupUserResponseBody() = default ;
    CancelMuteAllGroupUserResponseBody& operator=(const CancelMuteAllGroupUserResponseBody &) = default ;
    CancelMuteAllGroupUserResponseBody& operator=(CancelMuteAllGroupUserResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->result_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CancelMuteAllGroupUserResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const CancelMuteAllGroupUserResponseBodyResult & result() const { DARABONBA_PTR_GET_CONST(result_, CancelMuteAllGroupUserResponseBodyResult) };
    inline CancelMuteAllGroupUserResponseBodyResult result() { DARABONBA_PTR_GET(result_, CancelMuteAllGroupUserResponseBodyResult) };
    inline CancelMuteAllGroupUserResponseBody& setResult(const CancelMuteAllGroupUserResponseBodyResult & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline CancelMuteAllGroupUserResponseBody& setResult(CancelMuteAllGroupUserResponseBodyResult && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The returned result.
    std::shared_ptr<CancelMuteAllGroupUserResponseBodyResult> result_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
