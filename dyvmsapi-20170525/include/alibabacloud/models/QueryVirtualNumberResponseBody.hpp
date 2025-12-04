// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYVIRTUALNUMBERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYVIRTUALNUMBERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyvmsapi20170525
{
namespace Models
{
  class QueryVirtualNumberResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryVirtualNumberResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryVirtualNumberResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    QueryVirtualNumberResponseBody() = default ;
    QueryVirtualNumberResponseBody(const QueryVirtualNumberResponseBody &) = default ;
    QueryVirtualNumberResponseBody(QueryVirtualNumberResponseBody &&) = default ;
    QueryVirtualNumberResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryVirtualNumberResponseBody() = default ;
    QueryVirtualNumberResponseBody& operator=(const QueryVirtualNumberResponseBody &) = default ;
    QueryVirtualNumberResponseBody& operator=(QueryVirtualNumberResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->data_ == nullptr && return this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline QueryVirtualNumberResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline string data() const { DARABONBA_PTR_GET_DEFAULT(data_, "") };
    inline QueryVirtualNumberResponseBody& setData(string data) { DARABONBA_PTR_SET_VALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryVirtualNumberResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The response code. The value 200 indicates that the request was successful.
    std::shared_ptr<string> code_ = nullptr;
    // The details of the numbers associated with the virtual numbers. The following fields are returned:
    // 
    // *   createTime: the time when the number was activated.
    // *   qualificationCount: the number of qualifications.
    // *   cityCount: the number of cities.
    // *   phoneNumCount: the number of virtual numbers.
    // *   remark: the additional information.
    // *   phoneNum: the virtual number.
    // *   routeType: the route type.
    // *   canCancel: indicates whether the number can be deactivated.
    // *   specCount: the number of Internet service providers (ISPs).
    // *   status: the number state. Valid values: **1**, **0**, and **-1**. The value 1 indicates that the number is valid. The value 0 indicates that the number is invalid. The value -1 indicates that the number was deactivated.
    // *   pageNo: the page number.
    // *   pageSize: the number of entries per page.
    // *   total: the total number of virtual numbers.
    std::shared_ptr<string> data_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyvmsapi20170525
#endif
