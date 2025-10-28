// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSLBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSLBRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListSlbResponseBodySlbList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class ListSlbResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSlbResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SlbList, slbList_);
    };
    friend void from_json(const Darabonba::Json& j, ListSlbResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SlbList, slbList_);
    };
    ListSlbResponseBody() = default ;
    ListSlbResponseBody(const ListSlbResponseBody &) = default ;
    ListSlbResponseBody(ListSlbResponseBody &&) = default ;
    ListSlbResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSlbResponseBody() = default ;
    ListSlbResponseBody& operator=(const ListSlbResponseBody &) = default ;
    ListSlbResponseBody& operator=(ListSlbResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->message_ == nullptr && return this->requestId_ == nullptr && return this->slbList_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t code() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline ListSlbResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListSlbResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListSlbResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // slbList Field Functions 
    bool hasSlbList() const { return this->slbList_ != nullptr;};
    void deleteSlbList() { this->slbList_ = nullptr;};
    inline const ListSlbResponseBodySlbList & slbList() const { DARABONBA_PTR_GET_CONST(slbList_, ListSlbResponseBodySlbList) };
    inline ListSlbResponseBodySlbList slbList() { DARABONBA_PTR_GET(slbList_, ListSlbResponseBodySlbList) };
    inline ListSlbResponseBody& setSlbList(const ListSlbResponseBodySlbList & slbList) { DARABONBA_PTR_SET_VALUE(slbList_, slbList) };
    inline ListSlbResponseBody& setSlbList(ListSlbResponseBodySlbList && slbList) { DARABONBA_PTR_SET_RVALUE(slbList_, slbList) };


  protected:
    // The HTTP status code that is returned.
    std::shared_ptr<int32_t> code_ = nullptr;
    // The additional information that is returned.
    std::shared_ptr<string> message_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The list of SLB instances.
    std::shared_ptr<ListSlbResponseBodySlbList> slbList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
