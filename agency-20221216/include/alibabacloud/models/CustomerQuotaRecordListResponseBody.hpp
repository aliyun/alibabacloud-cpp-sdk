// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CUSTOMERQUOTARECORDLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CUSTOMERQUOTARECORDLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CustomerQuotaRecordListResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Agency20221216
{
namespace Models
{
  class CustomerQuotaRecordListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CustomerQuotaRecordListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Msg, msg_);
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, CustomerQuotaRecordListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Msg, msg_);
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    CustomerQuotaRecordListResponseBody() = default ;
    CustomerQuotaRecordListResponseBody(const CustomerQuotaRecordListResponseBody &) = default ;
    CustomerQuotaRecordListResponseBody(CustomerQuotaRecordListResponseBody &&) = default ;
    CustomerQuotaRecordListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CustomerQuotaRecordListResponseBody() = default ;
    CustomerQuotaRecordListResponseBody& operator=(const CustomerQuotaRecordListResponseBody &) = default ;
    CustomerQuotaRecordListResponseBody& operator=(CustomerQuotaRecordListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->data_ == nullptr && return this->msg_ == nullptr && return this->pageNo_ == nullptr && return this->pageSize_ == nullptr && return this->requestId_ == nullptr
        && return this->total_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline CustomerQuotaRecordListResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<CustomerQuotaRecordListResponseBodyData> & data() const { DARABONBA_PTR_GET_CONST(data_, vector<CustomerQuotaRecordListResponseBodyData>) };
    inline vector<CustomerQuotaRecordListResponseBodyData> data() { DARABONBA_PTR_GET(data_, vector<CustomerQuotaRecordListResponseBodyData>) };
    inline CustomerQuotaRecordListResponseBody& setData(const vector<CustomerQuotaRecordListResponseBodyData> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline CustomerQuotaRecordListResponseBody& setData(vector<CustomerQuotaRecordListResponseBodyData> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // msg Field Functions 
    bool hasMsg() const { return this->msg_ != nullptr;};
    void deleteMsg() { this->msg_ = nullptr;};
    inline string msg() const { DARABONBA_PTR_GET_DEFAULT(msg_, "") };
    inline CustomerQuotaRecordListResponseBody& setMsg(string msg) { DARABONBA_PTR_SET_VALUE(msg_, msg) };


    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int32_t pageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0) };
    inline CustomerQuotaRecordListResponseBody& setPageNo(int32_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline CustomerQuotaRecordListResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CustomerQuotaRecordListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t total() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline CustomerQuotaRecordListResponseBody& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // Status code of returning result, 200 means success.
    std::shared_ptr<string> code_ = nullptr;
    // Listed data of returning result
    std::shared_ptr<vector<CustomerQuotaRecordListResponseBodyData>> data_ = nullptr;
    // Description of returning data
    std::shared_ptr<string> msg_ = nullptr;
    // Current page number
    std::shared_ptr<int32_t> pageNo_ = nullptr;
    // Record number on each page
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // ID of request
    std::shared_ptr<string> requestId_ = nullptr;
    // Total volume
    std::shared_ptr<int32_t> total_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Agency20221216
#endif
