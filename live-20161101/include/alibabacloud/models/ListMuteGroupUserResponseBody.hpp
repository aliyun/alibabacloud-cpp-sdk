// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMUTEGROUPUSERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTMUTEGROUPUSERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListMuteGroupUserResponseBodyResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class ListMuteGroupUserResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMuteGroupUserResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, ListMuteGroupUserResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    ListMuteGroupUserResponseBody() = default ;
    ListMuteGroupUserResponseBody(const ListMuteGroupUserResponseBody &) = default ;
    ListMuteGroupUserResponseBody(ListMuteGroupUserResponseBody &&) = default ;
    ListMuteGroupUserResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMuteGroupUserResponseBody() = default ;
    ListMuteGroupUserResponseBody& operator=(const ListMuteGroupUserResponseBody &) = default ;
    ListMuteGroupUserResponseBody& operator=(ListMuteGroupUserResponseBody &&) = default ;
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
    inline ListMuteGroupUserResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const ListMuteGroupUserResponseBodyResult & result() const { DARABONBA_PTR_GET_CONST(result_, ListMuteGroupUserResponseBodyResult) };
    inline ListMuteGroupUserResponseBodyResult result() { DARABONBA_PTR_GET(result_, ListMuteGroupUserResponseBodyResult) };
    inline ListMuteGroupUserResponseBody& setResult(const ListMuteGroupUserResponseBodyResult & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline ListMuteGroupUserResponseBody& setResult(ListMuteGroupUserResponseBodyResult && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The returned result.
    std::shared_ptr<ListMuteGroupUserResponseBodyResult> result_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
