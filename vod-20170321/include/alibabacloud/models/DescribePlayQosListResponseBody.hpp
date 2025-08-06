// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPLAYQOSLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPLAYQOSLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribePlayQosListResponseBodyQosInfoList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DescribePlayQosListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePlayQosListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(QosInfoList, qosInfoList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePlayQosListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(QosInfoList, qosInfoList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribePlayQosListResponseBody() = default ;
    DescribePlayQosListResponseBody(const DescribePlayQosListResponseBody &) = default ;
    DescribePlayQosListResponseBody(DescribePlayQosListResponseBody &&) = default ;
    DescribePlayQosListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePlayQosListResponseBody() = default ;
    DescribePlayQosListResponseBody& operator=(const DescribePlayQosListResponseBody &) = default ;
    DescribePlayQosListResponseBody& operator=(DescribePlayQosListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->pageNo_ != nullptr
        && this->pageSize_ != nullptr && this->qosInfoList_ != nullptr && this->requestId_ != nullptr && this->totalCount_ != nullptr; };
    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int64_t pageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0L) };
    inline DescribePlayQosListResponseBody& setPageNo(int64_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline DescribePlayQosListResponseBody& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // qosInfoList Field Functions 
    bool hasQosInfoList() const { return this->qosInfoList_ != nullptr;};
    void deleteQosInfoList() { this->qosInfoList_ = nullptr;};
    inline const vector<DescribePlayQosListResponseBodyQosInfoList> & qosInfoList() const { DARABONBA_PTR_GET_CONST(qosInfoList_, vector<DescribePlayQosListResponseBodyQosInfoList>) };
    inline vector<DescribePlayQosListResponseBodyQosInfoList> qosInfoList() { DARABONBA_PTR_GET(qosInfoList_, vector<DescribePlayQosListResponseBodyQosInfoList>) };
    inline DescribePlayQosListResponseBody& setQosInfoList(const vector<DescribePlayQosListResponseBodyQosInfoList> & qosInfoList) { DARABONBA_PTR_SET_VALUE(qosInfoList_, qosInfoList) };
    inline DescribePlayQosListResponseBody& setQosInfoList(vector<DescribePlayQosListResponseBodyQosInfoList> && qosInfoList) { DARABONBA_PTR_SET_RVALUE(qosInfoList_, qosInfoList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribePlayQosListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribePlayQosListResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    std::shared_ptr<int64_t> pageNo_ = nullptr;
    std::shared_ptr<int64_t> pageSize_ = nullptr;
    std::shared_ptr<vector<DescribePlayQosListResponseBodyQosInfoList>> qosInfoList_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
