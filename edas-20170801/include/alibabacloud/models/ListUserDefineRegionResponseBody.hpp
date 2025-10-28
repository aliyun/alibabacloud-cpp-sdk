// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUSERDEFINEREGIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTUSERDEFINEREGIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListUserDefineRegionResponseBodyUserDefineRegionList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class ListUserDefineRegionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUserDefineRegionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(UserDefineRegionList, userDefineRegionList_);
    };
    friend void from_json(const Darabonba::Json& j, ListUserDefineRegionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(UserDefineRegionList, userDefineRegionList_);
    };
    ListUserDefineRegionResponseBody() = default ;
    ListUserDefineRegionResponseBody(const ListUserDefineRegionResponseBody &) = default ;
    ListUserDefineRegionResponseBody(ListUserDefineRegionResponseBody &&) = default ;
    ListUserDefineRegionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUserDefineRegionResponseBody() = default ;
    ListUserDefineRegionResponseBody& operator=(const ListUserDefineRegionResponseBody &) = default ;
    ListUserDefineRegionResponseBody& operator=(ListUserDefineRegionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->message_ == nullptr && return this->requestId_ == nullptr && return this->userDefineRegionList_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t code() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline ListUserDefineRegionResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListUserDefineRegionResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListUserDefineRegionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // userDefineRegionList Field Functions 
    bool hasUserDefineRegionList() const { return this->userDefineRegionList_ != nullptr;};
    void deleteUserDefineRegionList() { this->userDefineRegionList_ = nullptr;};
    inline const ListUserDefineRegionResponseBodyUserDefineRegionList & userDefineRegionList() const { DARABONBA_PTR_GET_CONST(userDefineRegionList_, ListUserDefineRegionResponseBodyUserDefineRegionList) };
    inline ListUserDefineRegionResponseBodyUserDefineRegionList userDefineRegionList() { DARABONBA_PTR_GET(userDefineRegionList_, ListUserDefineRegionResponseBodyUserDefineRegionList) };
    inline ListUserDefineRegionResponseBody& setUserDefineRegionList(const ListUserDefineRegionResponseBodyUserDefineRegionList & userDefineRegionList) { DARABONBA_PTR_SET_VALUE(userDefineRegionList_, userDefineRegionList) };
    inline ListUserDefineRegionResponseBody& setUserDefineRegionList(ListUserDefineRegionResponseBodyUserDefineRegionList && userDefineRegionList) { DARABONBA_PTR_SET_RVALUE(userDefineRegionList_, userDefineRegionList) };


  protected:
    // The HTTP status code that is returned.
    std::shared_ptr<int32_t> code_ = nullptr;
    // The additional information that is returned.
    std::shared_ptr<string> message_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The namespaces.
    std::shared_ptr<ListUserDefineRegionResponseBodyUserDefineRegionList> userDefineRegionList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
