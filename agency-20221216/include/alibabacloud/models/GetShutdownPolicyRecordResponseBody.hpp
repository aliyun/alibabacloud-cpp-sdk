// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSHUTDOWNPOLICYRECORDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSHUTDOWNPOLICYRECORDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetShutdownPolicyRecordResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Agency20221216
{
namespace Models
{
  class GetShutdownPolicyRecordResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetShutdownPolicyRecordResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, GetShutdownPolicyRecordResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    GetShutdownPolicyRecordResponseBody() = default ;
    GetShutdownPolicyRecordResponseBody(const GetShutdownPolicyRecordResponseBody &) = default ;
    GetShutdownPolicyRecordResponseBody(GetShutdownPolicyRecordResponseBody &&) = default ;
    GetShutdownPolicyRecordResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetShutdownPolicyRecordResponseBody() = default ;
    GetShutdownPolicyRecordResponseBody& operator=(const GetShutdownPolicyRecordResponseBody &) = default ;
    GetShutdownPolicyRecordResponseBody& operator=(GetShutdownPolicyRecordResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->data_ == nullptr && return this->pageNo_ == nullptr && return this->pageSize_ == nullptr && return this->requestId_ == nullptr && return this->success_ == nullptr
        && return this->total_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetShutdownPolicyRecordResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<GetShutdownPolicyRecordResponseBodyData> & data() const { DARABONBA_PTR_GET_CONST(data_, vector<GetShutdownPolicyRecordResponseBodyData>) };
    inline vector<GetShutdownPolicyRecordResponseBodyData> data() { DARABONBA_PTR_GET(data_, vector<GetShutdownPolicyRecordResponseBodyData>) };
    inline GetShutdownPolicyRecordResponseBody& setData(const vector<GetShutdownPolicyRecordResponseBodyData> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetShutdownPolicyRecordResponseBody& setData(vector<GetShutdownPolicyRecordResponseBodyData> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int32_t pageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0) };
    inline GetShutdownPolicyRecordResponseBody& setPageNo(int32_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline GetShutdownPolicyRecordResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetShutdownPolicyRecordResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetShutdownPolicyRecordResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t total() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline GetShutdownPolicyRecordResponseBody& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    std::shared_ptr<string> code_ = nullptr;
    std::shared_ptr<vector<GetShutdownPolicyRecordResponseBodyData>> data_ = nullptr;
    std::shared_ptr<int32_t> pageNo_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<bool> success_ = nullptr;
    std::shared_ptr<int32_t> total_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Agency20221216
#endif
