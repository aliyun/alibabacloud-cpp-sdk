// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCOUPONUSAGERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCOUPONUSAGERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListCouponUsageResponseBodyData.hpp>
#include <alibabacloud/models/ListCouponUsageResponseBodyPageInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Agency20221216
{
namespace Models
{
  class ListCouponUsageResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCouponUsageResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListCouponUsageResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListCouponUsageResponseBody() = default ;
    ListCouponUsageResponseBody(const ListCouponUsageResponseBody &) = default ;
    ListCouponUsageResponseBody(ListCouponUsageResponseBody &&) = default ;
    ListCouponUsageResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCouponUsageResponseBody() = default ;
    ListCouponUsageResponseBody& operator=(const ListCouponUsageResponseBody &) = default ;
    ListCouponUsageResponseBody& operator=(ListCouponUsageResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->data_ == nullptr && return this->message_ == nullptr && return this->pageInfo_ == nullptr && return this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListCouponUsageResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListCouponUsageResponseBodyData> & data() const { DARABONBA_PTR_GET_CONST(data_, vector<ListCouponUsageResponseBodyData>) };
    inline vector<ListCouponUsageResponseBodyData> data() { DARABONBA_PTR_GET(data_, vector<ListCouponUsageResponseBodyData>) };
    inline ListCouponUsageResponseBody& setData(const vector<ListCouponUsageResponseBodyData> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListCouponUsageResponseBody& setData(vector<ListCouponUsageResponseBodyData> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListCouponUsageResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const ListCouponUsageResponseBodyPageInfo & pageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, ListCouponUsageResponseBodyPageInfo) };
    inline ListCouponUsageResponseBodyPageInfo pageInfo() { DARABONBA_PTR_GET(pageInfo_, ListCouponUsageResponseBodyPageInfo) };
    inline ListCouponUsageResponseBody& setPageInfo(const ListCouponUsageResponseBodyPageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline ListCouponUsageResponseBody& setPageInfo(ListCouponUsageResponseBodyPageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListCouponUsageResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<string> code_ = nullptr;
    std::shared_ptr<vector<ListCouponUsageResponseBodyData>> data_ = nullptr;
    std::shared_ptr<string> message_ = nullptr;
    std::shared_ptr<ListCouponUsageResponseBodyPageInfo> pageInfo_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Agency20221216
#endif
