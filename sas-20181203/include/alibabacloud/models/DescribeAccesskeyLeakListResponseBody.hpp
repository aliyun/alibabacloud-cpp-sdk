// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEACCESSKEYLEAKLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEACCESSKEYLEAKLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeAccesskeyLeakListResponseBodyAccessKeyLeakList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeAccesskeyLeakListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAccesskeyLeakListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessKeyLeakList, accessKeyLeakList_);
      DARABONBA_PTR_TO_JSON(AkLeakCount, akLeakCount_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(GmtLast, gmtLast_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAccesskeyLeakListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessKeyLeakList, accessKeyLeakList_);
      DARABONBA_PTR_FROM_JSON(AkLeakCount, akLeakCount_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(GmtLast, gmtLast_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeAccesskeyLeakListResponseBody() = default ;
    DescribeAccesskeyLeakListResponseBody(const DescribeAccesskeyLeakListResponseBody &) = default ;
    DescribeAccesskeyLeakListResponseBody(DescribeAccesskeyLeakListResponseBody &&) = default ;
    DescribeAccesskeyLeakListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAccesskeyLeakListResponseBody() = default ;
    DescribeAccesskeyLeakListResponseBody& operator=(const DescribeAccesskeyLeakListResponseBody &) = default ;
    DescribeAccesskeyLeakListResponseBody& operator=(DescribeAccesskeyLeakListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accessKeyLeakList_ != nullptr
        && this->akLeakCount_ != nullptr && this->currentPage_ != nullptr && this->gmtLast_ != nullptr && this->pageSize_ != nullptr && this->requestId_ != nullptr
        && this->totalCount_ != nullptr; };
    // accessKeyLeakList Field Functions 
    bool hasAccessKeyLeakList() const { return this->accessKeyLeakList_ != nullptr;};
    void deleteAccessKeyLeakList() { this->accessKeyLeakList_ = nullptr;};
    inline const vector<DescribeAccesskeyLeakListResponseBodyAccessKeyLeakList> & accessKeyLeakList() const { DARABONBA_PTR_GET_CONST(accessKeyLeakList_, vector<DescribeAccesskeyLeakListResponseBodyAccessKeyLeakList>) };
    inline vector<DescribeAccesskeyLeakListResponseBodyAccessKeyLeakList> accessKeyLeakList() { DARABONBA_PTR_GET(accessKeyLeakList_, vector<DescribeAccesskeyLeakListResponseBodyAccessKeyLeakList>) };
    inline DescribeAccesskeyLeakListResponseBody& setAccessKeyLeakList(const vector<DescribeAccesskeyLeakListResponseBodyAccessKeyLeakList> & accessKeyLeakList) { DARABONBA_PTR_SET_VALUE(accessKeyLeakList_, accessKeyLeakList) };
    inline DescribeAccesskeyLeakListResponseBody& setAccessKeyLeakList(vector<DescribeAccesskeyLeakListResponseBodyAccessKeyLeakList> && accessKeyLeakList) { DARABONBA_PTR_SET_RVALUE(accessKeyLeakList_, accessKeyLeakList) };


    // akLeakCount Field Functions 
    bool hasAkLeakCount() const { return this->akLeakCount_ != nullptr;};
    void deleteAkLeakCount() { this->akLeakCount_ = nullptr;};
    inline int32_t akLeakCount() const { DARABONBA_PTR_GET_DEFAULT(akLeakCount_, 0) };
    inline DescribeAccesskeyLeakListResponseBody& setAkLeakCount(int32_t akLeakCount) { DARABONBA_PTR_SET_VALUE(akLeakCount_, akLeakCount) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline DescribeAccesskeyLeakListResponseBody& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // gmtLast Field Functions 
    bool hasGmtLast() const { return this->gmtLast_ != nullptr;};
    void deleteGmtLast() { this->gmtLast_ = nullptr;};
    inline int64_t gmtLast() const { DARABONBA_PTR_GET_DEFAULT(gmtLast_, 0L) };
    inline DescribeAccesskeyLeakListResponseBody& setGmtLast(int64_t gmtLast) { DARABONBA_PTR_SET_VALUE(gmtLast_, gmtLast) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeAccesskeyLeakListResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAccesskeyLeakListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeAccesskeyLeakListResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // An array that consists of the details about AccessKey pair leaks.
    std::shared_ptr<vector<DescribeAccesskeyLeakListResponseBodyAccessKeyLeakList>> accessKeyLeakList_ = nullptr;
    // The number of AccessKey pair leaks that are unhandled.
    std::shared_ptr<int32_t> akLeakCount_ = nullptr;
    // The page number of the returned page.
    std::shared_ptr<int32_t> currentPage_ = nullptr;
    // This parameter is deprecated.
    std::shared_ptr<int64_t> gmtLast_ = nullptr;
    // The number of entries returned per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of AccessKey pair leaks.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
