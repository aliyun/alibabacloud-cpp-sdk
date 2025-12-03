// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUSERDRAWRECORDBYPKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTUSERDRAWRECORDBYPKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListUserDrawRecordByPkResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class ListUserDrawRecordByPkResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUserDrawRecordByPkResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListUserDrawRecordByPkResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    ListUserDrawRecordByPkResponseBody() = default ;
    ListUserDrawRecordByPkResponseBody(const ListUserDrawRecordByPkResponseBody &) = default ;
    ListUserDrawRecordByPkResponseBody(ListUserDrawRecordByPkResponseBody &&) = default ;
    ListUserDrawRecordByPkResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUserDrawRecordByPkResponseBody() = default ;
    ListUserDrawRecordByPkResponseBody& operator=(const ListUserDrawRecordByPkResponseBody &) = default ;
    ListUserDrawRecordByPkResponseBody& operator=(ListUserDrawRecordByPkResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->data_ == nullptr && return this->message_ == nullptr && return this->requestId_ == nullptr && return this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListUserDrawRecordByPkResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListUserDrawRecordByPkResponseBodyData> & data() const { DARABONBA_PTR_GET_CONST(data_, vector<ListUserDrawRecordByPkResponseBodyData>) };
    inline vector<ListUserDrawRecordByPkResponseBodyData> data() { DARABONBA_PTR_GET(data_, vector<ListUserDrawRecordByPkResponseBodyData>) };
    inline ListUserDrawRecordByPkResponseBody& setData(const vector<ListUserDrawRecordByPkResponseBodyData> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListUserDrawRecordByPkResponseBody& setData(vector<ListUserDrawRecordByPkResponseBodyData> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListUserDrawRecordByPkResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListUserDrawRecordByPkResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListUserDrawRecordByPkResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    std::shared_ptr<string> code_ = nullptr;
    std::shared_ptr<vector<ListUserDrawRecordByPkResponseBodyData>> data_ = nullptr;
    std::shared_ptr<string> message_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
