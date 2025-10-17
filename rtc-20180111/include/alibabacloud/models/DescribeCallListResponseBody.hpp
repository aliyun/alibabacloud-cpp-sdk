// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECALLLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECALLLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeCallListResponseBodyCallList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class DescribeCallListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCallListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CallList, callList_);
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCnt, totalCnt_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCallListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CallList, callList_);
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCnt, totalCnt_);
    };
    DescribeCallListResponseBody() = default ;
    DescribeCallListResponseBody(const DescribeCallListResponseBody &) = default ;
    DescribeCallListResponseBody(DescribeCallListResponseBody &&) = default ;
    DescribeCallListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCallListResponseBody() = default ;
    DescribeCallListResponseBody& operator=(const DescribeCallListResponseBody &) = default ;
    DescribeCallListResponseBody& operator=(DescribeCallListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->callList_ == nullptr
        && return this->pageNo_ == nullptr && return this->pageSize_ == nullptr && return this->requestId_ == nullptr && return this->totalCnt_ == nullptr; };
    // callList Field Functions 
    bool hasCallList() const { return this->callList_ != nullptr;};
    void deleteCallList() { this->callList_ = nullptr;};
    inline const vector<DescribeCallListResponseBodyCallList> & callList() const { DARABONBA_PTR_GET_CONST(callList_, vector<DescribeCallListResponseBodyCallList>) };
    inline vector<DescribeCallListResponseBodyCallList> callList() { DARABONBA_PTR_GET(callList_, vector<DescribeCallListResponseBodyCallList>) };
    inline DescribeCallListResponseBody& setCallList(const vector<DescribeCallListResponseBodyCallList> & callList) { DARABONBA_PTR_SET_VALUE(callList_, callList) };
    inline DescribeCallListResponseBody& setCallList(vector<DescribeCallListResponseBodyCallList> && callList) { DARABONBA_PTR_SET_RVALUE(callList_, callList) };


    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int32_t pageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0) };
    inline DescribeCallListResponseBody& setPageNo(int32_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeCallListResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCallListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCnt Field Functions 
    bool hasTotalCnt() const { return this->totalCnt_ != nullptr;};
    void deleteTotalCnt() { this->totalCnt_ = nullptr;};
    inline int32_t totalCnt() const { DARABONBA_PTR_GET_DEFAULT(totalCnt_, 0) };
    inline DescribeCallListResponseBody& setTotalCnt(int32_t totalCnt) { DARABONBA_PTR_SET_VALUE(totalCnt_, totalCnt) };


  protected:
    std::shared_ptr<vector<DescribeCallListResponseBodyCallList>> callList_ = nullptr;
    std::shared_ptr<int32_t> pageNo_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<int32_t> totalCnt_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
