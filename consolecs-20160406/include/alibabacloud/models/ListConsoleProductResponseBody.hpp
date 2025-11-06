// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCONSOLEPRODUCTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCONSOLEPRODUCTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListConsoleProductResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Consolecs20160406
{
namespace Models
{
  class ListConsoleProductResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListConsoleProductResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListConsoleProductResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListConsoleProductResponseBody() = default ;
    ListConsoleProductResponseBody(const ListConsoleProductResponseBody &) = default ;
    ListConsoleProductResponseBody(ListConsoleProductResponseBody &&) = default ;
    ListConsoleProductResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListConsoleProductResponseBody() = default ;
    ListConsoleProductResponseBody& operator=(const ListConsoleProductResponseBody &) = default ;
    ListConsoleProductResponseBody& operator=(ListConsoleProductResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->data_ == nullptr && return this->requestId_ == nullptr && return this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListConsoleProductResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListConsoleProductResponseBodyData> & data() const { DARABONBA_PTR_GET_CONST(data_, vector<ListConsoleProductResponseBodyData>) };
    inline vector<ListConsoleProductResponseBodyData> data() { DARABONBA_PTR_GET(data_, vector<ListConsoleProductResponseBodyData>) };
    inline ListConsoleProductResponseBody& setData(const vector<ListConsoleProductResponseBodyData> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListConsoleProductResponseBody& setData(vector<ListConsoleProductResponseBodyData> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListConsoleProductResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListConsoleProductResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    std::shared_ptr<string> code_ = nullptr;
    std::shared_ptr<vector<ListConsoleProductResponseBodyData>> data_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Consolecs20160406
#endif
