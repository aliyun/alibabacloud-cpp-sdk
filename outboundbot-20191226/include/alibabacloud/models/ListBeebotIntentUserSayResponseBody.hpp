// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTBEEBOTINTENTUSERSAYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTBEEBOTINTENTUSERSAYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListBeebotIntentUserSayResponseBodyUserSays.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class ListBeebotIntentUserSayResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListBeebotIntentUserSayResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BeebotRequestId, beebotRequestId_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(UserSays, userSays_);
    };
    friend void from_json(const Darabonba::Json& j, ListBeebotIntentUserSayResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BeebotRequestId, beebotRequestId_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(UserSays, userSays_);
    };
    ListBeebotIntentUserSayResponseBody() = default ;
    ListBeebotIntentUserSayResponseBody(const ListBeebotIntentUserSayResponseBody &) = default ;
    ListBeebotIntentUserSayResponseBody(ListBeebotIntentUserSayResponseBody &&) = default ;
    ListBeebotIntentUserSayResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListBeebotIntentUserSayResponseBody() = default ;
    ListBeebotIntentUserSayResponseBody& operator=(const ListBeebotIntentUserSayResponseBody &) = default ;
    ListBeebotIntentUserSayResponseBody& operator=(ListBeebotIntentUserSayResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->beebotRequestId_ == nullptr
        && return this->code_ == nullptr && return this->httpStatusCode_ == nullptr && return this->message_ == nullptr && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr
        && return this->requestId_ == nullptr && return this->success_ == nullptr && return this->totalCount_ == nullptr && return this->userSays_ == nullptr; };
    // beebotRequestId Field Functions 
    bool hasBeebotRequestId() const { return this->beebotRequestId_ != nullptr;};
    void deleteBeebotRequestId() { this->beebotRequestId_ = nullptr;};
    inline string beebotRequestId() const { DARABONBA_PTR_GET_DEFAULT(beebotRequestId_, "") };
    inline ListBeebotIntentUserSayResponseBody& setBeebotRequestId(string beebotRequestId) { DARABONBA_PTR_SET_VALUE(beebotRequestId_, beebotRequestId) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListBeebotIntentUserSayResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t httpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListBeebotIntentUserSayResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListBeebotIntentUserSayResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListBeebotIntentUserSayResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListBeebotIntentUserSayResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListBeebotIntentUserSayResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListBeebotIntentUserSayResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListBeebotIntentUserSayResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // userSays Field Functions 
    bool hasUserSays() const { return this->userSays_ != nullptr;};
    void deleteUserSays() { this->userSays_ = nullptr;};
    inline const vector<ListBeebotIntentUserSayResponseBodyUserSays> & userSays() const { DARABONBA_PTR_GET_CONST(userSays_, vector<ListBeebotIntentUserSayResponseBodyUserSays>) };
    inline vector<ListBeebotIntentUserSayResponseBodyUserSays> userSays() { DARABONBA_PTR_GET(userSays_, vector<ListBeebotIntentUserSayResponseBodyUserSays>) };
    inline ListBeebotIntentUserSayResponseBody& setUserSays(const vector<ListBeebotIntentUserSayResponseBodyUserSays> & userSays) { DARABONBA_PTR_SET_VALUE(userSays_, userSays) };
    inline ListBeebotIntentUserSayResponseBody& setUserSays(vector<ListBeebotIntentUserSayResponseBodyUserSays> && userSays) { DARABONBA_PTR_SET_RVALUE(userSays_, userSays) };


  protected:
    std::shared_ptr<string> beebotRequestId_ = nullptr;
    std::shared_ptr<string> code_ = nullptr;
    std::shared_ptr<int32_t> httpStatusCode_ = nullptr;
    std::shared_ptr<string> message_ = nullptr;
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<bool> success_ = nullptr;
    std::shared_ptr<int32_t> totalCount_ = nullptr;
    std::shared_ptr<vector<ListBeebotIntentUserSayResponseBodyUserSays>> userSays_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
